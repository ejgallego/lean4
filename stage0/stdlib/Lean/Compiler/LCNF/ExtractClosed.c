// Lean compiler output
// Module: Lean.Compiler.LCNF.ExtractClosed
// Imports: public import Lean.Compiler.ClosedTermCache public import Lean.Compiler.NeverExtractAttr public import Lean.Compiler.LCNF.Internalize public import Lean.Compiler.LCNF.ToExpr import Lean.Compiler.LCNF.ElimDead import Lean.Compiler.LCNF.DependsOn meta import Init.Data.FloatArray.Basic
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
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_dependsOn(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
uint8_t l_Lean_hasNeverExtractAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_toExpr(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_getClosedTermName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_cacheClosedTermName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadVars(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_ExtractClosed_extractLetValue_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_ExtractClosed_extractLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ExtractClosed_isIrrelevantArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_isIrrelevantArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__2(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "push"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FloatArray"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkEmpty"};
static const lean_object* l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "emptyWithCapacity"};
static const lean_object* l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__0(size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__3;
static const lean_array_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_closed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__5_value),LEAN_SCALAR_PTR_LITERAL(29, 126, 0, 54, 34, 229, 13, 211)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__3;
static const lean_array_object l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_ExtractClosed_visitDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_ExtractClosed_visitCode___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ExtractClosed_visitDecl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Decl_extractClosed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_extractClosed___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_extractClosed___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_extractClosed___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_extractClosed___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extractClosed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extractClosed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_extractClosed_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_extractClosed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extractClosed___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extractClosed___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_extractClosed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_extractClosed___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_extractClosed___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_extractClosed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "extractClosed"};
static const lean_object* l_Lean_Compiler_LCNF_extractClosed___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extractClosed___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__1_value),LEAN_SCALAR_PTR_LITERAL(16, 21, 66, 200, 64, 129, 192, 37)}};
static const lean_object* l_Lean_Compiler_LCNF_extractClosed___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extractClosed___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_extractClosed___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_extractClosed = (const lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_extractClosed___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 14, 140, 205, 207, 60, 147, 42)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ExtractClosed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(10, 145, 126, 90, 151, 26, 34, 9)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(139, 235, 184, 174, 76, 101, 161, 215)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 112, 10, 236, 225, 168, 165, 247)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 156, 124, 16, 61, 103, 21, 1)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(21, 117, 23, 217, 176, 101, 65, 172)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 123, 29, 205, 113, 82, 167, 38)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 54, 59, 99, 42, 73, 109, 59)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 32, 233, 137, 255, 41, 188, 205)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 56, 82, 205, 141, 229, 9, 9)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(155, 148, 208, 83, 164, 82, 56, 215)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(248, 36, 227, 28, 19, 166, 37, 247)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)(((size_t)(998081055) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(114, 224, 201, 26, 129, 73, 142, 133)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 11, 234, 77, 173, 247, 226, 232)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(93, 133, 36, 146, 26, 150, 84, 2)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(48, 58, 6, 47, 207, 210, 115, 225)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_ExtractClosed_extractLetValue_spec__0(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_, lean_object* v_b_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
uint8_t v___x_11_; 
v___x_11_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
v___x_13_ = l_Lean_Compiler_LCNF_ExtractClosed_extractArg(v___x_12_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; size_t v___x_15_; size_t v___x_16_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v___x_13_, 1);
v___x_15_ = ((size_t)1ULL);
v___x_16_ = lean_usize_add(v_i_2_, v___x_15_);
v_i_2_ = v___x_16_;
v_b_4_ = v_a_14_;
goto _start;
}
else
{
return v___x_13_;
}
}
else
{
lean_object* v___x_18_; 
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v_b_4_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractLetValue(lean_object* v_v_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
switch(lean_obj_tag(v_v_19_))
{
case 2:
{
lean_object* v_struct_26_; lean_object* v___x_27_; 
v_struct_26_ = lean_ctor_get(v_v_19_, 2);
v___x_27_ = l_Lean_Compiler_LCNF_ExtractClosed_extractFVar(v_struct_26_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_27_;
}
case 3:
{
lean_object* v_args_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; 
v_args_28_ = lean_ctor_get(v_v_19_, 2);
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = lean_array_get_size(v_args_28_);
v___x_31_ = lean_box(0);
v___x_32_ = lean_nat_dec_lt(v___x_29_, v___x_30_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; 
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_31_);
return v___x_33_;
}
else
{
size_t v___x_34_; size_t v___x_35_; lean_object* v___x_36_; 
v___x_34_ = ((size_t)0ULL);
v___x_35_ = lean_usize_of_nat(v___x_30_);
v___x_36_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_ExtractClosed_extractLetValue_spec__0(v_args_28_, v___x_34_, v___x_35_, v___x_31_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_36_;
}
}
case 4:
{
lean_object* v_fvarId_37_; lean_object* v_args_38_; lean_object* v___x_39_; 
v_fvarId_37_ = lean_ctor_get(v_v_19_, 0);
v_args_38_ = lean_ctor_get(v_v_19_, 1);
v___x_39_ = l_Lean_Compiler_LCNF_ExtractClosed_extractFVar(v_fvarId_37_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_53_; 
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_53_ == 0)
{
lean_object* v_unused_54_; 
v_unused_54_ = lean_ctor_get(v___x_39_, 0);
lean_dec(v_unused_54_);
v___x_41_ = v___x_39_;
v_isShared_42_ = v_isSharedCheck_53_;
goto v_resetjp_40_;
}
else
{
lean_dec(v___x_39_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_53_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_array_get_size(v_args_38_);
v___x_45_ = lean_box(0);
v___x_46_ = lean_nat_dec_lt(v___x_43_, v___x_44_);
if (v___x_46_ == 0)
{
lean_object* v___x_48_; 
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 0, v___x_45_);
v___x_48_ = v___x_41_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_45_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
else
{
size_t v___x_50_; size_t v___x_51_; lean_object* v___x_52_; 
lean_del_object(v___x_41_);
v___x_50_ = ((size_t)0ULL);
v___x_51_ = lean_usize_of_nat(v___x_44_);
v___x_52_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_ExtractClosed_extractLetValue_spec__0(v_args_38_, v___x_50_, v___x_51_, v___x_45_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_52_;
}
}
}
else
{
return v___x_39_;
}
}
default: 
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_box(0);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractFVar(lean_object* v_fvarId_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
uint8_t v___x_64_; lean_object* v___x_65_; 
v___x_64_ = 0;
v___x_65_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_64_, v_fvarId_57_, v_a_60_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_87_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_87_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_87_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_87_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
if (lean_obj_tag(v_a_66_) == 1)
{
lean_object* v_val_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_82_; 
lean_del_object(v___x_68_);
v_val_70_ = lean_ctor_get(v_a_66_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v_a_66_);
if (v_isSharedCheck_82_ == 0)
{
v___x_72_ = v_a_66_;
v_isShared_73_ = v_isSharedCheck_82_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_val_70_);
lean_dec(v_a_66_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_82_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_74_ = lean_st_ref_take(v_a_58_);
lean_inc(v_val_70_);
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 0);
v___x_76_ = v___x_72_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_val_70_);
v___x_76_ = v_reuseFailAlloc_81_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v_value_79_; lean_object* v___x_80_; 
v___x_77_ = lean_array_push(v___x_74_, v___x_76_);
v___x_78_ = lean_st_ref_put(v_a_58_, v___x_77_);
v_value_79_ = lean_ctor_get(v_val_70_, 3);
lean_inc(v_value_79_);
lean_dec(v_val_70_);
v___x_80_ = l_Lean_Compiler_LCNF_ExtractClosed_extractLetValue(v_value_79_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_value_79_);
return v___x_80_;
}
}
}
else
{
lean_object* v___x_83_; lean_object* v___x_85_; 
lean_dec(v_a_66_);
v___x_83_ = lean_box(0);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v___x_83_);
v___x_85_ = v___x_68_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
else
{
lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
v_a_88_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v___x_65_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_65_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractArg(lean_object* v_arg_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
if (lean_obj_tag(v_arg_96_) == 1)
{
lean_object* v_fvarId_103_; lean_object* v___x_104_; 
v_fvarId_103_ = lean_ctor_get(v_arg_96_, 0);
v___x_104_ = l_Lean_Compiler_LCNF_ExtractClosed_extractFVar(v_fvarId_103_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
return v___x_104_;
}
else
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_box(0);
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractArg___boxed(lean_object* v_arg_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_Compiler_LCNF_ExtractClosed_extractArg(v_arg_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
lean_dec(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec(v_arg_107_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_ExtractClosed_extractLetValue_spec__0___boxed(lean_object* v_as_115_, lean_object* v_i_116_, lean_object* v_stop_117_, lean_object* v_b_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
size_t v_i_boxed_125_; size_t v_stop_boxed_126_; lean_object* v_res_127_; 
v_i_boxed_125_ = lean_unbox_usize(v_i_116_);
lean_dec(v_i_116_);
v_stop_boxed_126_ = lean_unbox_usize(v_stop_117_);
lean_dec(v_stop_117_);
v_res_127_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_ExtractClosed_extractLetValue_spec__0(v_as_115_, v_i_boxed_125_, v_stop_boxed_126_, v_b_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
lean_dec(v___y_119_);
lean_dec_ref(v_as_115_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractFVar___boxed(lean_object* v_fvarId_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lean_Compiler_LCNF_ExtractClosed_extractFVar(v_fvarId_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec(v_fvarId_128_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_extractLetValue___boxed(lean_object* v_v_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lean_Compiler_LCNF_ExtractClosed_extractLetValue(v_v_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec(v_v_136_);
return v_res_143_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_ExtractClosed_isIrrelevantArg(lean_object* v_arg_144_){
_start:
{
if (lean_obj_tag(v_arg_144_) == 1)
{
uint8_t v___x_145_; 
v___x_145_ = 0;
return v___x_145_;
}
else
{
uint8_t v___x_146_; 
v___x_146_ = 1;
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_isIrrelevantArg___boxed(lean_object* v_arg_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = l_Lean_Compiler_LCNF_ExtractClosed_isIrrelevantArg(v_arg_147_);
lean_dec(v_arg_147_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0(uint8_t v_____do__lift_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
if (v_____do__lift_150_ == 0)
{
uint8_t v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = 1;
v___x_159_ = lean_box(v___x_158_);
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
else
{
uint8_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = 0;
v___x_162_ = lean_box(v___x_161_);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0___boxed(lean_object* v_____do__lift_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
uint8_t v_____do__lift_15907__boxed_172_; lean_object* v_res_173_; 
v_____do__lift_15907__boxed_172_ = lean_unbox(v_____do__lift_164_);
v_res_173_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0(v_____do__lift_15907__boxed_172_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___redArg(lean_object* v_a_174_, lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_object* v___x_176_; 
v___x_176_ = lean_box(0);
return v___x_176_;
}
else
{
lean_object* v_key_177_; lean_object* v_value_178_; lean_object* v_tail_179_; uint8_t v___x_180_; 
v_key_177_ = lean_ctor_get(v_x_175_, 0);
v_value_178_ = lean_ctor_get(v_x_175_, 1);
v_tail_179_ = lean_ctor_get(v_x_175_, 2);
v___x_180_ = l_Lean_instBEqFVarId_beq(v_key_177_, v_a_174_);
if (v___x_180_ == 0)
{
v_x_175_ = v_tail_179_;
goto _start;
}
else
{
lean_object* v___x_182_; 
lean_inc(v_value_178_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v_value_178_);
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___redArg___boxed(lean_object* v_a_183_, lean_object* v_x_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___redArg(v_a_183_, v_x_184_);
lean_dec(v_x_184_);
lean_dec(v_a_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___redArg(lean_object* v_m_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_buckets_188_; lean_object* v___x_189_; uint64_t v___x_190_; uint64_t v___x_191_; uint64_t v___x_192_; uint64_t v_fold_193_; uint64_t v___x_194_; uint64_t v___x_195_; uint64_t v___x_196_; size_t v___x_197_; size_t v___x_198_; size_t v___x_199_; size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_buckets_188_ = lean_ctor_get(v_m_186_, 1);
v___x_189_ = lean_array_get_size(v_buckets_188_);
v___x_190_ = l_Lean_instHashableFVarId_hash(v_a_187_);
v___x_191_ = 32ULL;
v___x_192_ = lean_uint64_shift_right(v___x_190_, v___x_191_);
v_fold_193_ = lean_uint64_xor(v___x_190_, v___x_192_);
v___x_194_ = 16ULL;
v___x_195_ = lean_uint64_shift_right(v_fold_193_, v___x_194_);
v___x_196_ = lean_uint64_xor(v_fold_193_, v___x_195_);
v___x_197_ = lean_uint64_to_usize(v___x_196_);
v___x_198_ = lean_usize_of_nat(v___x_189_);
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_sub(v___x_198_, v___x_199_);
v___x_201_ = lean_usize_land(v___x_197_, v___x_200_);
v___x_202_ = lean_array_uget_borrowed(v_buckets_188_, v___x_201_);
v___x_203_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___redArg(v_a_187_, v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___redArg___boxed(lean_object* v_m_204_, lean_object* v_a_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___redArg(v_m_204_, v_a_205_);
lean_dec(v_a_205_);
lean_dec_ref(v_m_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11_spec__12___redArg(lean_object* v_x_207_, lean_object* v_x_208_){
_start:
{
if (lean_obj_tag(v_x_208_) == 0)
{
return v_x_207_;
}
else
{
lean_object* v_key_209_; lean_object* v_value_210_; lean_object* v_tail_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_234_; 
v_key_209_ = lean_ctor_get(v_x_208_, 0);
v_value_210_ = lean_ctor_get(v_x_208_, 1);
v_tail_211_ = lean_ctor_get(v_x_208_, 2);
v_isSharedCheck_234_ = !lean_is_exclusive(v_x_208_);
if (v_isSharedCheck_234_ == 0)
{
v___x_213_ = v_x_208_;
v_isShared_214_ = v_isSharedCheck_234_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_tail_211_);
lean_inc(v_value_210_);
lean_inc(v_key_209_);
lean_dec(v_x_208_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_234_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; uint64_t v___x_216_; uint64_t v___x_217_; uint64_t v___x_218_; uint64_t v_fold_219_; uint64_t v___x_220_; uint64_t v___x_221_; uint64_t v___x_222_; size_t v___x_223_; size_t v___x_224_; size_t v___x_225_; size_t v___x_226_; size_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_215_ = lean_array_get_size(v_x_207_);
v___x_216_ = l_Lean_instHashableFVarId_hash(v_key_209_);
v___x_217_ = 32ULL;
v___x_218_ = lean_uint64_shift_right(v___x_216_, v___x_217_);
v_fold_219_ = lean_uint64_xor(v___x_216_, v___x_218_);
v___x_220_ = 16ULL;
v___x_221_ = lean_uint64_shift_right(v_fold_219_, v___x_220_);
v___x_222_ = lean_uint64_xor(v_fold_219_, v___x_221_);
v___x_223_ = lean_uint64_to_usize(v___x_222_);
v___x_224_ = lean_usize_of_nat(v___x_215_);
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_sub(v___x_224_, v___x_225_);
v___x_227_ = lean_usize_land(v___x_223_, v___x_226_);
v___x_228_ = lean_array_uget_borrowed(v_x_207_, v___x_227_);
lean_inc(v___x_228_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 2, v___x_228_);
v___x_230_ = v___x_213_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_key_209_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v_value_210_);
lean_ctor_set(v_reuseFailAlloc_233_, 2, v___x_228_);
v___x_230_ = v_reuseFailAlloc_233_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; 
v___x_231_ = lean_array_uset(v_x_207_, v___x_227_, v___x_230_);
v_x_207_ = v___x_231_;
v_x_208_ = v_tail_211_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11___redArg(lean_object* v_i_235_, lean_object* v_source_236_, lean_object* v_target_237_){
_start:
{
lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_238_ = lean_array_get_size(v_source_236_);
v___x_239_ = lean_nat_dec_lt(v_i_235_, v___x_238_);
if (v___x_239_ == 0)
{
lean_dec_ref(v_source_236_);
lean_dec(v_i_235_);
return v_target_237_;
}
else
{
lean_object* v_es_240_; lean_object* v___x_241_; lean_object* v_source_242_; lean_object* v_target_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_es_240_ = lean_array_fget(v_source_236_, v_i_235_);
v___x_241_ = lean_box(0);
v_source_242_ = lean_array_fset(v_source_236_, v_i_235_, v___x_241_);
v_target_243_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11_spec__12___redArg(v_target_237_, v_es_240_);
v___x_244_ = lean_unsigned_to_nat(1u);
v___x_245_ = lean_nat_add(v_i_235_, v___x_244_);
lean_dec(v_i_235_);
v_i_235_ = v___x_245_;
v_source_236_ = v_source_242_;
v_target_237_ = v_target_243_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10___redArg(lean_object* v_data_247_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v_nbuckets_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_248_ = lean_array_get_size(v_data_247_);
v___x_249_ = lean_unsigned_to_nat(2u);
v_nbuckets_250_ = lean_nat_mul(v___x_248_, v___x_249_);
v___x_251_ = lean_unsigned_to_nat(0u);
v___x_252_ = lean_box(0);
v___x_253_ = lean_mk_array(v_nbuckets_250_, v___x_252_);
v___x_254_ = lean_array_propagate_mark(v_data_247_, v___x_253_);
v___x_255_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11___redArg(v___x_251_, v_data_247_, v___x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__11___redArg(lean_object* v_a_256_, lean_object* v_b_257_, lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_dec(v_b_257_);
lean_dec(v_a_256_);
return v_x_258_;
}
else
{
lean_object* v_key_259_; lean_object* v_value_260_; lean_object* v_tail_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_273_; 
v_key_259_ = lean_ctor_get(v_x_258_, 0);
v_value_260_ = lean_ctor_get(v_x_258_, 1);
v_tail_261_ = lean_ctor_get(v_x_258_, 2);
v_isSharedCheck_273_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_273_ == 0)
{
v___x_263_ = v_x_258_;
v_isShared_264_ = v_isSharedCheck_273_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_tail_261_);
lean_inc(v_value_260_);
lean_inc(v_key_259_);
lean_dec(v_x_258_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_273_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
uint8_t v___x_265_; 
v___x_265_ = l_Lean_instBEqFVarId_beq(v_key_259_, v_a_256_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_266_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__11___redArg(v_a_256_, v_b_257_, v_tail_261_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 2, v___x_266_);
v___x_268_ = v___x_263_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_key_259_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_value_260_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v___x_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
else
{
lean_object* v___x_271_; 
lean_dec(v_value_260_);
lean_dec(v_key_259_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 1, v_b_257_);
lean_ctor_set(v___x_263_, 0, v_a_256_);
v___x_271_ = v___x_263_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_256_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_b_257_);
lean_ctor_set(v_reuseFailAlloc_272_, 2, v_tail_261_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___redArg(lean_object* v_a_274_, lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
uint8_t v___x_276_; 
v___x_276_ = 0;
return v___x_276_;
}
else
{
lean_object* v_key_277_; lean_object* v_tail_278_; uint8_t v___x_279_; 
v_key_277_ = lean_ctor_get(v_x_275_, 0);
v_tail_278_ = lean_ctor_get(v_x_275_, 2);
v___x_279_ = l_Lean_instBEqFVarId_beq(v_key_277_, v_a_274_);
if (v___x_279_ == 0)
{
v_x_275_ = v_tail_278_;
goto _start;
}
else
{
return v___x_279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___redArg___boxed(lean_object* v_a_281_, lean_object* v_x_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___redArg(v_a_281_, v_x_282_);
lean_dec(v_x_282_);
lean_dec(v_a_281_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7___redArg(lean_object* v_m_285_, lean_object* v_a_286_, lean_object* v_b_287_){
_start:
{
lean_object* v_size_288_; lean_object* v_buckets_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_332_; 
v_size_288_ = lean_ctor_get(v_m_285_, 0);
v_buckets_289_ = lean_ctor_get(v_m_285_, 1);
v_isSharedCheck_332_ = !lean_is_exclusive(v_m_285_);
if (v_isSharedCheck_332_ == 0)
{
v___x_291_ = v_m_285_;
v_isShared_292_ = v_isSharedCheck_332_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_buckets_289_);
lean_inc(v_size_288_);
lean_dec(v_m_285_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_332_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; uint64_t v___x_294_; uint64_t v___x_295_; uint64_t v___x_296_; uint64_t v_fold_297_; uint64_t v___x_298_; uint64_t v___x_299_; uint64_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; size_t v___x_304_; size_t v___x_305_; lean_object* v_bkt_306_; uint8_t v___x_307_; 
v___x_293_ = lean_array_get_size(v_buckets_289_);
v___x_294_ = l_Lean_instHashableFVarId_hash(v_a_286_);
v___x_295_ = 32ULL;
v___x_296_ = lean_uint64_shift_right(v___x_294_, v___x_295_);
v_fold_297_ = lean_uint64_xor(v___x_294_, v___x_296_);
v___x_298_ = 16ULL;
v___x_299_ = lean_uint64_shift_right(v_fold_297_, v___x_298_);
v___x_300_ = lean_uint64_xor(v_fold_297_, v___x_299_);
v___x_301_ = lean_uint64_to_usize(v___x_300_);
v___x_302_ = lean_usize_of_nat(v___x_293_);
v___x_303_ = ((size_t)1ULL);
v___x_304_ = lean_usize_sub(v___x_302_, v___x_303_);
v___x_305_ = lean_usize_land(v___x_301_, v___x_304_);
v_bkt_306_ = lean_array_uget_borrowed(v_buckets_289_, v___x_305_);
v___x_307_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___redArg(v_a_286_, v_bkt_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; lean_object* v_size_x27_309_; lean_object* v___x_310_; lean_object* v_buckets_x27_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_308_ = lean_unsigned_to_nat(1u);
v_size_x27_309_ = lean_nat_add(v_size_288_, v___x_308_);
lean_dec(v_size_288_);
lean_inc(v_bkt_306_);
v___x_310_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_310_, 0, v_a_286_);
lean_ctor_set(v___x_310_, 1, v_b_287_);
lean_ctor_set(v___x_310_, 2, v_bkt_306_);
v_buckets_x27_311_ = lean_array_uset(v_buckets_289_, v___x_305_, v___x_310_);
v___x_312_ = lean_unsigned_to_nat(4u);
v___x_313_ = lean_nat_mul(v_size_x27_309_, v___x_312_);
v___x_314_ = lean_unsigned_to_nat(3u);
v___x_315_ = lean_nat_div(v___x_313_, v___x_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_array_get_size(v_buckets_x27_311_);
v___x_317_ = lean_nat_dec_le(v___x_315_, v___x_316_);
lean_dec(v___x_315_);
if (v___x_317_ == 0)
{
lean_object* v_val_318_; lean_object* v___x_320_; 
v_val_318_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10___redArg(v_buckets_x27_311_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v_val_318_);
lean_ctor_set(v___x_291_, 0, v_size_x27_309_);
v___x_320_ = v___x_291_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_size_x27_309_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_val_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
else
{
lean_object* v___x_323_; 
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v_buckets_x27_311_);
lean_ctor_set(v___x_291_, 0, v_size_x27_309_);
v___x_323_ = v___x_291_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_size_x27_309_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_buckets_x27_311_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
else
{
lean_object* v___x_325_; lean_object* v_buckets_x27_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
lean_inc(v_bkt_306_);
v___x_325_ = lean_box(0);
v_buckets_x27_326_ = lean_array_uset(v_buckets_289_, v___x_305_, v___x_325_);
v___x_327_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__11___redArg(v_a_286_, v_b_287_, v_bkt_306_);
v___x_328_ = lean_array_uset(v_buckets_x27_326_, v___x_305_, v___x_327_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v___x_328_);
v___x_330_ = v___x_291_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_size_288_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v___x_328_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__3(lean_object* v_declName_333_, lean_object* v_as_334_, size_t v_i_335_, size_t v_stop_336_){
_start:
{
uint8_t v___x_337_; 
v___x_337_ = lean_usize_dec_eq(v_i_335_, v_stop_336_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; lean_object* v_toSignature_339_; lean_object* v_name_340_; uint8_t v___x_341_; 
v___x_338_ = lean_array_uget_borrowed(v_as_334_, v_i_335_);
v_toSignature_339_ = lean_ctor_get(v___x_338_, 0);
v_name_340_ = lean_ctor_get(v_toSignature_339_, 0);
v___x_341_ = lean_name_eq(v_name_340_, v_declName_333_);
if (v___x_341_ == 0)
{
size_t v___x_342_; size_t v___x_343_; 
v___x_342_ = ((size_t)1ULL);
v___x_343_ = lean_usize_add(v_i_335_, v___x_342_);
v_i_335_ = v___x_343_;
goto _start;
}
else
{
return v___x_341_;
}
}
else
{
uint8_t v___x_345_; 
v___x_345_ = 0;
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__3___boxed(lean_object* v_declName_346_, lean_object* v_as_347_, lean_object* v_i_348_, lean_object* v_stop_349_){
_start:
{
size_t v_i_boxed_350_; size_t v_stop_boxed_351_; uint8_t v_res_352_; lean_object* v_r_353_; 
v_i_boxed_350_ = lean_unbox_usize(v_i_348_);
lean_dec(v_i_348_);
v_stop_boxed_351_ = lean_unbox_usize(v_stop_349_);
lean_dec(v_stop_349_);
v_res_352_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__3(v_declName_346_, v_as_347_, v_i_boxed_350_, v_stop_boxed_351_);
lean_dec_ref(v_as_347_);
lean_dec(v_declName_346_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__2(uint8_t v_isRoot_354_, uint8_t v___x_355_, lean_object* v_as_356_, size_t v_i_357_, size_t v_stop_358_){
_start:
{
uint8_t v___y_360_; uint8_t v___x_364_; 
v___x_364_ = lean_usize_dec_eq(v_i_357_, v_stop_358_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = lean_array_uget_borrowed(v_as_356_, v_i_357_);
v___x_366_ = l_Lean_Compiler_LCNF_ExtractClosed_isIrrelevantArg(v___x_365_);
if (v___x_366_ == 0)
{
v___y_360_ = v_isRoot_354_;
goto v___jp_359_;
}
else
{
v___y_360_ = v___x_355_;
goto v___jp_359_;
}
}
else
{
uint8_t v___x_367_; 
v___x_367_ = 0;
return v___x_367_;
}
v___jp_359_:
{
if (v___y_360_ == 0)
{
size_t v___x_361_; size_t v___x_362_; 
v___x_361_ = ((size_t)1ULL);
v___x_362_ = lean_usize_add(v_i_357_, v___x_361_);
v_i_357_ = v___x_362_;
goto _start;
}
else
{
return v___y_360_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__2___boxed(lean_object* v_isRoot_368_, lean_object* v___x_369_, lean_object* v_as_370_, lean_object* v_i_371_, lean_object* v_stop_372_){
_start:
{
uint8_t v_isRoot_boxed_373_; uint8_t v___x_16214__boxed_374_; size_t v_i_boxed_375_; size_t v_stop_boxed_376_; uint8_t v_res_377_; lean_object* v_r_378_; 
v_isRoot_boxed_373_ = lean_unbox(v_isRoot_368_);
v___x_16214__boxed_374_ = lean_unbox(v___x_369_);
v_i_boxed_375_ = lean_unbox_usize(v_i_371_);
lean_dec(v_i_371_);
v_stop_boxed_376_ = lean_unbox_usize(v_stop_372_);
lean_dec(v_stop_372_);
v_res_377_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__2(v_isRoot_boxed_373_, v___x_16214__boxed_374_, v_as_370_, v_i_boxed_375_, v_stop_boxed_376_);
lean_dec_ref(v_as_370_);
v_r_378_ = lean_box(v_res_377_);
return v_r_378_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___closed__0(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_cstr_to_nat("9223372036854775808");
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__1(uint8_t v___x_380_, lean_object* v_as_381_, size_t v_i_382_, size_t v_stop_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
uint8_t v___x_391_; 
v___x_391_ = lean_usize_dec_eq(v_i_382_, v_stop_383_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_array_uget_borrowed(v_as_381_, v_i_382_);
lean_inc(v___x_392_);
v___x_393_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg(v___x_392_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_411_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_411_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_411_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_411_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
uint8_t v___x_398_; 
v___x_398_ = lean_unbox(v_a_394_);
lean_dec(v_a_394_);
if (v___x_398_ == 0)
{
uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_399_ = 1;
v___x_400_ = lean_box(v___x_399_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v___x_400_);
v___x_402_ = v___x_396_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_400_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
else
{
if (v___x_380_ == 0)
{
size_t v___x_404_; size_t v___x_405_; 
lean_del_object(v___x_396_);
v___x_404_ = ((size_t)1ULL);
v___x_405_ = lean_usize_add(v_i_382_, v___x_404_);
v_i_382_ = v___x_405_;
goto _start;
}
else
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = lean_box(v___x_380_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v___x_407_);
v___x_409_ = v___x_396_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
else
{
return v___x_393_;
}
}
else
{
uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = 0;
v___x_413_ = lean_box(v___x_412_);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__4(lean_object* v_as_415_, size_t v_i_416_, size_t v_stop_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
uint8_t v___x_425_; 
v___x_425_ = lean_usize_dec_eq(v_i_416_, v_stop_417_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_array_uget_borrowed(v_as_415_, v_i_416_);
lean_inc(v___x_426_);
v___x_427_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg(v___x_426_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_441_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_441_ == 0)
{
v___x_430_ = v___x_427_;
v_isShared_431_ = v_isSharedCheck_441_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_427_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_441_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
uint8_t v___x_432_; 
v___x_432_ = lean_unbox(v_a_428_);
lean_dec(v_a_428_);
if (v___x_432_ == 0)
{
uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_433_ = 1;
v___x_434_ = lean_box(v___x_433_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_434_);
v___x_436_ = v___x_430_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
else
{
size_t v___x_438_; size_t v___x_439_; 
lean_del_object(v___x_430_);
v___x_438_ = ((size_t)1ULL);
v___x_439_ = lean_usize_add(v_i_416_, v___x_438_);
v_i_416_ = v___x_439_;
goto _start;
}
}
}
else
{
return v___x_427_;
}
}
else
{
uint8_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = 0;
v___x_443_ = lean_box(v___x_442_);
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue(uint8_t v_isRoot_445_, lean_object* v_v_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_){
_start:
{
switch(lean_obj_tag(v_v_446_))
{
case 0:
{
lean_object* v_value_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_507_; 
v_value_462_ = lean_ctor_get(v_v_446_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v_v_446_);
if (v_isSharedCheck_507_ == 0)
{
v___x_464_ = v_v_446_;
v_isShared_465_ = v_isSharedCheck_507_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_value_462_);
lean_dec(v_v_446_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_507_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
switch(lean_obj_tag(v_value_462_))
{
case 1:
{
lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_474_; 
lean_del_object(v___x_464_);
v_isSharedCheck_474_ = !lean_is_exclusive(v_value_462_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; 
v_unused_475_ = lean_ctor_get(v_value_462_, 0);
lean_dec(v_unused_475_);
v___x_467_ = v_value_462_;
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
else
{
lean_dec(v_value_462_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
uint8_t v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_469_ = 1;
v___x_470_ = lean_box(v___x_469_);
if (v_isShared_468_ == 0)
{
lean_ctor_set_tag(v___x_467_, 0);
lean_ctor_set(v___x_467_, 0, v___x_470_);
v___x_472_ = v___x_467_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
case 0:
{
lean_del_object(v___x_464_);
if (v_isRoot_445_ == 0)
{
lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_484_; 
v_isSharedCheck_484_ = !lean_is_exclusive(v_value_462_);
if (v_isSharedCheck_484_ == 0)
{
lean_object* v_unused_485_; 
v_unused_485_ = lean_ctor_get(v_value_462_, 0);
lean_dec(v_unused_485_);
v___x_477_ = v_value_462_;
v_isShared_478_ = v_isSharedCheck_484_;
goto v_resetjp_476_;
}
else
{
lean_dec(v_value_462_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_484_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
uint8_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_479_ = 1;
v___x_480_ = lean_box(v___x_479_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___x_480_);
v___x_482_ = v___x_477_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
else
{
lean_object* v_val_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_496_; 
v_val_486_ = lean_ctor_get(v_value_462_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_value_462_);
if (v_isSharedCheck_496_ == 0)
{
v___x_488_ = v_value_462_;
v_isShared_489_ = v_isSharedCheck_496_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_val_486_);
lean_dec(v_value_462_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_496_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; uint8_t v___x_491_; lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_490_ = lean_obj_once(&l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___closed__0, &l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___closed__0_once, _init_l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___closed__0);
v___x_491_ = lean_nat_dec_le(v___x_490_, v_val_486_);
lean_dec(v_val_486_);
v___x_492_ = lean_box(v___x_491_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 0, v___x_492_);
v___x_494_ = v___x_488_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
default: 
{
lean_dec_ref(v_value_462_);
if (v_isRoot_445_ == 0)
{
uint8_t v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_497_ = 1;
v___x_498_ = lean_box(v___x_497_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 0, v___x_498_);
v___x_500_ = v___x_464_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
else
{
uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_502_ = 0;
v___x_503_ = lean_box(v___x_502_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 0, v___x_503_);
v___x_505_ = v___x_464_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
}
}
case 1:
{
if (v_isRoot_445_ == 0)
{
uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_508_ = 1;
v___x_509_ = lean_box(v___x_508_);
v___x_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
else
{
uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_511_ = 0;
v___x_512_ = lean_box(v___x_511_);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
}
case 2:
{
lean_object* v_struct_514_; lean_object* v___x_515_; 
v_struct_514_ = lean_ctor_get(v_v_446_, 2);
lean_inc(v_struct_514_);
lean_dec_ref_known(v_v_446_, 3);
v___x_515_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar(v_struct_514_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
return v___x_515_;
}
case 3:
{
lean_object* v_declName_516_; lean_object* v_args_517_; uint8_t v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; uint8_t v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v_sccDecls_582_; lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v_declName_516_ = lean_ctor_get(v_v_446_, 0);
lean_inc(v_declName_516_);
v_args_517_ = lean_ctor_get(v_v_446_, 2);
lean_inc_ref(v_args_517_);
lean_dec_ref_known(v_v_446_, 3);
v_sccDecls_582_ = lean_ctor_get(v_a_447_, 1);
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = lean_array_get_size(v_sccDecls_582_);
v___x_585_ = lean_nat_dec_lt(v___x_583_, v___x_584_);
if (v___x_585_ == 0)
{
goto v___jp_564_;
}
else
{
if (v___x_585_ == 0)
{
goto v___jp_564_;
}
else
{
size_t v___x_586_; size_t v___x_587_; uint8_t v___x_588_; 
v___x_586_ = ((size_t)0ULL);
v___x_587_ = lean_usize_of_nat(v___x_584_);
v___x_588_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__3(v_declName_516_, v_sccDecls_582_, v___x_586_, v___x_587_);
if (v___x_588_ == 0)
{
goto v___jp_564_;
}
else
{
lean_dec_ref(v_args_517_);
lean_dec(v_declName_516_);
goto v___jp_454_;
}
}
}
v___jp_518_:
{
lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_526_ = lean_unsigned_to_nat(0u);
v___x_527_ = lean_array_get_size(v_args_517_);
v___x_528_ = lean_nat_dec_lt(v___x_526_, v___x_527_);
if (v___x_528_ == 0)
{
lean_dec_ref(v_args_517_);
goto v___jp_458_;
}
else
{
if (v___x_528_ == 0)
{
lean_dec_ref(v_args_517_);
goto v___jp_458_;
}
else
{
size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; 
v___x_529_ = ((size_t)0ULL);
v___x_530_ = lean_usize_of_nat(v___x_527_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__1(v___y_519_, v_args_517_, v___x_529_, v___x_530_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec_ref(v_args_517_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_541_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_541_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
uint8_t v___x_536_; 
v___x_536_ = lean_unbox(v_a_532_);
lean_dec(v_a_532_);
if (v___x_536_ == 0)
{
lean_del_object(v___x_534_);
goto v___jp_458_;
}
else
{
lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_537_ = lean_box(v___y_519_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_537_);
v___x_539_ = v___x_534_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_537_);
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
return v___x_531_;
}
}
}
}
v___jp_542_:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_516_, v___y_549_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_a_551_);
lean_dec_ref_known(v___x_550_, 1);
if (lean_obj_tag(v_a_551_) == 1)
{
lean_object* v_val_552_; lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_val_552_ = lean_ctor_get(v_a_551_, 0);
lean_inc(v_val_552_);
lean_dec_ref_known(v_a_551_, 1);
v___x_553_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_552_);
lean_dec(v_val_552_);
v___x_554_ = lean_unsigned_to_nat(0u);
v___x_555_ = lean_nat_dec_eq(v___x_553_, v___x_554_);
lean_dec(v___x_553_);
if (v___x_555_ == 0)
{
v___y_519_ = v___y_543_;
v___y_520_ = v___y_544_;
v___y_521_ = v___y_545_;
v___y_522_ = v___y_546_;
v___y_523_ = v___y_547_;
v___y_524_ = v___y_548_;
v___y_525_ = v___y_549_;
goto v___jp_518_;
}
else
{
lean_dec_ref(v_args_517_);
goto v___jp_454_;
}
}
else
{
lean_dec(v_a_551_);
v___y_519_ = v___y_543_;
v___y_520_ = v___y_544_;
v___y_521_ = v___y_545_;
v___y_522_ = v___y_546_;
v___y_523_ = v___y_547_;
v___y_524_ = v___y_548_;
v___y_525_ = v___y_549_;
goto v___jp_518_;
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
lean_dec_ref(v_args_517_);
v_a_556_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_550_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_550_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
v___jp_564_:
{
lean_object* v___x_565_; lean_object* v_env_566_; uint8_t v___x_567_; 
v___x_565_ = lean_st_ref_get(v_a_452_);
v_env_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc_ref(v_env_566_);
lean_dec(v___x_565_);
lean_inc(v_declName_516_);
v___x_567_ = l_Lean_hasNeverExtractAttribute(v_env_566_, v_declName_516_);
if (v___x_567_ == 0)
{
if (v_isRoot_445_ == 0)
{
lean_dec(v_declName_516_);
v___y_519_ = v___x_567_;
v___y_520_ = v_a_447_;
v___y_521_ = v_a_448_;
v___y_522_ = v_a_449_;
v___y_523_ = v_a_450_;
v___y_524_ = v_a_451_;
v___y_525_ = v_a_452_;
goto v___jp_518_;
}
else
{
lean_object* v___x_568_; lean_object* v_env_569_; lean_object* v___x_570_; 
v___x_568_ = lean_st_ref_get(v_a_452_);
v_env_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc_ref(v_env_569_);
lean_dec(v___x_568_);
lean_inc(v_declName_516_);
v___x_570_ = l_Lean_Environment_find_x3f(v_env_569_, v_declName_516_, v___x_567_);
if (lean_obj_tag(v___x_570_) == 1)
{
lean_object* v_val_571_; 
v_val_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_val_571_);
lean_dec_ref_known(v___x_570_, 1);
switch(lean_obj_tag(v_val_571_))
{
case 1:
{
lean_object* v_val_572_; lean_object* v_toConstantVal_573_; lean_object* v_type_574_; uint8_t v___x_575_; 
v_val_572_ = lean_ctor_get(v_val_571_, 0);
lean_inc_ref(v_val_572_);
lean_dec_ref_known(v_val_571_, 1);
v_toConstantVal_573_ = lean_ctor_get(v_val_572_, 0);
lean_inc_ref(v_toConstantVal_573_);
lean_dec_ref(v_val_572_);
v_type_574_ = lean_ctor_get(v_toConstantVal_573_, 2);
lean_inc_ref(v_type_574_);
lean_dec_ref(v_toConstantVal_573_);
v___x_575_ = l_Lean_Expr_isForall(v_type_574_);
lean_dec_ref(v_type_574_);
if (v___x_575_ == 0)
{
lean_dec_ref(v_args_517_);
lean_dec(v_declName_516_);
goto v___jp_454_;
}
else
{
v___y_543_ = v___x_567_;
v___y_544_ = v_a_447_;
v___y_545_ = v_a_448_;
v___y_546_ = v_a_449_;
v___y_547_ = v_a_450_;
v___y_548_ = v_a_451_;
v___y_549_ = v_a_452_;
goto v___jp_542_;
}
}
case 6:
{
lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
lean_dec_ref_known(v_val_571_, 1);
v___x_576_ = lean_unsigned_to_nat(0u);
v___x_577_ = lean_array_get_size(v_args_517_);
v___x_578_ = lean_nat_dec_lt(v___x_576_, v___x_577_);
if (v___x_578_ == 0)
{
lean_dec_ref(v_args_517_);
lean_dec(v_declName_516_);
goto v___jp_454_;
}
else
{
if (v___x_578_ == 0)
{
lean_dec_ref(v_args_517_);
lean_dec(v_declName_516_);
goto v___jp_454_;
}
else
{
size_t v___x_579_; size_t v___x_580_; uint8_t v___x_581_; 
v___x_579_ = ((size_t)0ULL);
v___x_580_ = lean_usize_of_nat(v___x_577_);
v___x_581_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__2(v_isRoot_445_, v___x_567_, v_args_517_, v___x_579_, v___x_580_);
if (v___x_581_ == 0)
{
lean_dec_ref(v_args_517_);
lean_dec(v_declName_516_);
goto v___jp_454_;
}
else
{
v___y_543_ = v___x_567_;
v___y_544_ = v_a_447_;
v___y_545_ = v_a_448_;
v___y_546_ = v_a_449_;
v___y_547_ = v_a_450_;
v___y_548_ = v_a_451_;
v___y_549_ = v_a_452_;
goto v___jp_542_;
}
}
}
}
default: 
{
lean_dec(v_val_571_);
v___y_543_ = v___x_567_;
v___y_544_ = v_a_447_;
v___y_545_ = v_a_448_;
v___y_546_ = v_a_449_;
v___y_547_ = v_a_450_;
v___y_548_ = v_a_451_;
v___y_549_ = v_a_452_;
goto v___jp_542_;
}
}
}
else
{
lean_dec(v___x_570_);
v___y_543_ = v___x_567_;
v___y_544_ = v_a_447_;
v___y_545_ = v_a_448_;
v___y_546_ = v_a_449_;
v___y_547_ = v_a_450_;
v___y_548_ = v_a_451_;
v___y_549_ = v_a_452_;
goto v___jp_542_;
}
}
}
else
{
lean_dec_ref(v_args_517_);
lean_dec(v_declName_516_);
goto v___jp_454_;
}
}
}
default: 
{
lean_object* v_fvarId_589_; lean_object* v_args_590_; lean_object* v___x_591_; 
v_fvarId_589_ = lean_ctor_get(v_v_446_, 0);
lean_inc(v_fvarId_589_);
v_args_590_ = lean_ctor_get(v_v_446_, 1);
lean_inc_ref(v_args_590_);
lean_dec_ref_known(v_v_446_, 2);
v___x_591_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar(v_fvarId_589_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v___y_594_; lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_591_, 1);
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_array_get_size(v_args_590_);
v___x_606_ = lean_nat_dec_lt(v___x_604_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
lean_dec_ref(v_args_590_);
v___x_607_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0(v___x_606_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
v___y_594_ = v___x_607_;
goto v___jp_593_;
}
else
{
if (v___x_606_ == 0)
{
lean_object* v___x_608_; 
lean_dec_ref(v_args_590_);
v___x_608_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0(v___x_606_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
v___y_594_ = v___x_608_;
goto v___jp_593_;
}
else
{
size_t v___x_609_; size_t v___x_610_; lean_object* v___x_611_; 
v___x_609_ = ((size_t)0ULL);
v___x_610_ = lean_usize_of_nat(v___x_605_);
v___x_611_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__4(v_args_590_, v___x_609_, v___x_610_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
lean_dec_ref(v_args_590_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; uint8_t v___x_613_; lean_object* v___x_614_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v___x_613_ = lean_unbox(v_a_612_);
lean_dec(v_a_612_);
v___x_614_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___lam__0(v___x_613_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
v___y_594_ = v___x_614_;
goto v___jp_593_;
}
else
{
lean_dec(v_a_592_);
return v___x_611_;
}
}
}
v___jp_593_:
{
if (lean_obj_tag(v___y_594_) == 0)
{
uint8_t v___x_595_; 
v___x_595_ = lean_unbox(v_a_592_);
if (v___x_595_ == 0)
{
lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
v_isSharedCheck_602_ = !lean_is_exclusive(v___y_594_);
if (v_isSharedCheck_602_ == 0)
{
lean_object* v_unused_603_; 
v_unused_603_ = lean_ctor_get(v___y_594_, 0);
lean_dec(v_unused_603_);
v___x_597_ = v___y_594_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_dec(v___y_594_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 0, v_a_592_);
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_592_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
else
{
lean_dec(v_a_592_);
return v___y_594_;
}
}
else
{
lean_dec(v_a_592_);
return v___y_594_;
}
}
}
else
{
lean_dec_ref(v_args_590_);
return v___x_591_;
}
}
}
v___jp_454_:
{
uint8_t v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_455_ = 0;
v___x_456_ = lean_box(v___x_455_);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
v___jp_458_:
{
uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_459_ = 1;
v___x_460_ = lean_box(v___x_459_);
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_go(lean_object* v_fvarId_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
uint8_t v___x_623_; lean_object* v___x_624_; 
v___x_623_ = 0;
v___x_624_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_623_, v_fvarId_615_, v_a_619_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_638_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_638_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_638_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_638_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
if (lean_obj_tag(v_a_625_) == 1)
{
lean_object* v_val_629_; lean_object* v_value_630_; uint8_t v___x_631_; lean_object* v___x_632_; 
lean_del_object(v___x_627_);
v_val_629_ = lean_ctor_get(v_a_625_, 0);
lean_inc(v_val_629_);
lean_dec_ref_known(v_a_625_, 1);
v_value_630_ = lean_ctor_get(v_val_629_, 3);
lean_inc(v_value_630_);
lean_dec(v_val_629_);
v___x_631_ = 0;
v___x_632_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue(v___x_631_, v_value_630_, v_a_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_);
return v___x_632_;
}
else
{
uint8_t v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
lean_dec(v_a_625_);
v___x_633_ = 0;
v___x_634_ = lean_box(v___x_633_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_634_);
v___x_636_ = v___x_627_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_634_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_a_639_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_624_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_624_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar(lean_object* v_fvarId_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
lean_object* v___x_655_; lean_object* v_fvarDecisionCache_656_; lean_object* v___x_657_; 
v___x_655_ = lean_st_ref_get(v_a_649_);
v_fvarDecisionCache_656_ = lean_ctor_get(v___x_655_, 1);
lean_inc_ref(v_fvarDecisionCache_656_);
lean_dec(v___x_655_);
v___x_657_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___redArg(v_fvarDecisionCache_656_, v_fvarId_647_);
lean_dec_ref(v_fvarDecisionCache_656_);
if (lean_obj_tag(v___x_657_) == 1)
{
lean_object* v_val_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec(v_fvarId_647_);
v_val_658_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_657_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_val_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set_tag(v___x_660_, 0);
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_val_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
else
{
lean_object* v___x_666_; 
lean_dec(v___x_657_);
v___x_666_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_go(v_fvarId_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_686_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_686_ == 0)
{
v___x_669_ = v___x_666_;
v_isShared_670_ = v_isSharedCheck_686_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v___x_666_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_686_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; lean_object* v_decls_672_; lean_object* v_fvarDecisionCache_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_685_; 
v___x_671_ = lean_st_ref_take(v_a_649_);
v_decls_672_ = lean_ctor_get(v___x_671_, 0);
v_fvarDecisionCache_673_ = lean_ctor_get(v___x_671_, 1);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_685_ == 0)
{
v___x_675_ = v___x_671_;
v_isShared_676_ = v_isSharedCheck_685_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_fvarDecisionCache_673_);
lean_inc(v_decls_672_);
lean_dec(v___x_671_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_685_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
lean_inc(v_a_667_);
v___x_677_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7___redArg(v_fvarDecisionCache_673_, v_fvarId_647_, v_a_667_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___x_677_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_decls_672_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v___x_677_);
v___x_679_ = v_reuseFailAlloc_684_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_680_ = lean_st_ref_put(v_a_649_, v___x_679_);
if (v_isShared_670_ == 0)
{
v___x_682_ = v___x_669_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_667_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
else
{
lean_dec(v_fvarId_647_);
return v___x_666_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg(lean_object* v_arg_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_){
_start:
{
if (lean_obj_tag(v_arg_687_) == 1)
{
lean_object* v_fvarId_695_; lean_object* v___x_696_; 
v_fvarId_695_ = lean_ctor_get(v_arg_687_, 0);
lean_inc(v_fvarId_695_);
lean_dec_ref_known(v_arg_687_, 1);
v___x_696_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar(v_fvarId_695_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_);
return v___x_696_;
}
else
{
uint8_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_dec(v_arg_687_);
v___x_697_ = 1;
v___x_698_ = lean_box(v___x_697_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg___boxed(lean_object* v_arg_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg(v_arg_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
lean_dec(v_a_706_);
lean_dec_ref(v_a_705_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_go___boxed(lean_object* v_fvarId_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_go(v_fvarId_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_fvarId_709_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__4___boxed(lean_object* v_as_718_, lean_object* v_i_719_, lean_object* v_stop_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
size_t v_i_boxed_728_; size_t v_stop_boxed_729_; lean_object* v_res_730_; 
v_i_boxed_728_ = lean_unbox_usize(v_i_719_);
lean_dec(v_i_719_);
v_stop_boxed_729_ = lean_unbox_usize(v_stop_720_);
lean_dec(v_stop_720_);
v_res_730_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__4(v_as_718_, v_i_boxed_728_, v_stop_boxed_729_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec_ref(v_as_718_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__1___boxed(lean_object* v___x_731_, lean_object* v_as_732_, lean_object* v_i_733_, lean_object* v_stop_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
uint8_t v___x_16271__boxed_742_; size_t v_i_boxed_743_; size_t v_stop_boxed_744_; lean_object* v_res_745_; 
v___x_16271__boxed_742_ = lean_unbox(v___x_731_);
v_i_boxed_743_ = lean_unbox_usize(v_i_733_);
lean_dec(v_i_733_);
v_stop_boxed_744_ = lean_unbox_usize(v_stop_734_);
lean_dec(v_stop_734_);
v_res_745_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue_spec__1(v___x_16271__boxed_742_, v_as_732_, v_i_boxed_743_, v_stop_boxed_744_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec_ref(v_as_732_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar___boxed(lean_object* v_fvarId_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar(v_fvarId_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_);
lean_dec(v_a_752_);
lean_dec_ref(v_a_751_);
lean_dec(v_a_750_);
lean_dec_ref(v_a_749_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue___boxed(lean_object* v_isRoot_755_, lean_object* v_v_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
uint8_t v_isRoot_boxed_764_; lean_object* v_res_765_; 
v_isRoot_boxed_764_ = lean_unbox(v_isRoot_755_);
v_res_765_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue(v_isRoot_boxed_764_, v_v_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6(lean_object* v_00_u03b2_766_, lean_object* v_m_767_, lean_object* v_a_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___redArg(v_m_767_, v_a_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6___boxed(lean_object* v_00_u03b2_770_, lean_object* v_m_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6(v_00_u03b2_770_, v_m_771_, v_a_772_);
lean_dec(v_a_772_);
lean_dec_ref(v_m_771_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7(lean_object* v_00_u03b2_774_, lean_object* v_m_775_, lean_object* v_a_776_, lean_object* v_b_777_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7___redArg(v_m_775_, v_a_776_, v_b_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7(lean_object* v_00_u03b2_779_, lean_object* v_a_780_, lean_object* v_x_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___redArg(v_a_780_, v_x_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7___boxed(lean_object* v_00_u03b2_783_, lean_object* v_a_784_, lean_object* v_x_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__6_spec__7(v_00_u03b2_783_, v_a_784_, v_x_785_);
lean_dec(v_x_785_);
lean_dec(v_a_784_);
return v_res_786_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9(lean_object* v_00_u03b2_787_, lean_object* v_a_788_, lean_object* v_x_789_){
_start:
{
uint8_t v___x_790_; 
v___x_790_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___redArg(v_a_788_, v_x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9___boxed(lean_object* v_00_u03b2_791_, lean_object* v_a_792_, lean_object* v_x_793_){
_start:
{
uint8_t v_res_794_; lean_object* v_r_795_; 
v_res_794_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__9(v_00_u03b2_791_, v_a_792_, v_x_793_);
lean_dec(v_x_793_);
lean_dec(v_a_792_);
v_r_795_ = lean_box(v_res_794_);
return v_r_795_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10(lean_object* v_00_u03b2_796_, lean_object* v_data_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10___redArg(v_data_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__11(lean_object* v_00_u03b2_799_, lean_object* v_a_800_, lean_object* v_b_801_, lean_object* v_x_802_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__11___redArg(v_a_800_, v_b_801_, v_x_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11(lean_object* v_00_u03b2_804_, lean_object* v_i_805_, lean_object* v_source_806_, lean_object* v_target_807_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11___redArg(v_i_805_, v_source_806_, v_target_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_809_, lean_object* v_x_810_, lean_object* v_x_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_ExtractClosed_shouldExtractFVar_spec__7_spec__10_spec__11_spec__12___redArg(v_x_810_, v_x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain(lean_object* v_prevArrayId_818_, lean_object* v_decl_819_, lean_object* v_k_820_, lean_object* v_illegalSet_821_, lean_object* v_size_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_){
_start:
{
lean_object* v_decl_837_; lean_object* v_k_838_; lean_object* v_illegalSet_839_; lean_object* v_zero_845_; uint8_t v_isZero_846_; 
v_zero_845_ = lean_unsigned_to_nat(0u);
v_isZero_846_ = lean_nat_dec_eq(v_size_822_, v_zero_845_);
if (v_isZero_846_ == 1)
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_830_;
}
else
{
lean_object* v_value_847_; 
v_value_847_ = lean_ctor_get(v_decl_819_, 3);
if (lean_obj_tag(v_value_847_) == 3)
{
lean_object* v_declName_848_; 
v_declName_848_ = lean_ctor_get(v_value_847_, 0);
if (lean_obj_tag(v_declName_848_) == 1)
{
lean_object* v_pre_849_; 
v_pre_849_ = lean_ctor_get(v_declName_848_, 0);
if (lean_obj_tag(v_pre_849_) == 1)
{
lean_object* v_pre_850_; 
v_pre_850_ = lean_ctor_get(v_pre_849_, 0);
if (lean_obj_tag(v_pre_850_) == 0)
{
lean_object* v_fvarId_851_; lean_object* v_args_852_; lean_object* v_str_853_; lean_object* v_str_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v_fvarId_851_ = lean_ctor_get(v_decl_819_, 0);
v_args_852_ = lean_ctor_get(v_value_847_, 2);
v_str_853_ = lean_ctor_get(v_declName_848_, 1);
v_str_854_ = lean_ctor_get(v_pre_849_, 1);
v___x_855_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__0));
v___x_856_ = lean_string_dec_eq(v_str_854_, v___x_855_);
if (v___x_856_ == 0)
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
else
{
lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_857_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__1));
v___x_858_ = lean_string_dec_eq(v_str_853_, v___x_857_);
if (v___x_858_ == 0)
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
else
{
lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_859_ = lean_array_get_size(v_args_852_);
v___x_860_ = lean_unsigned_to_nat(3u);
v___x_861_ = lean_nat_dec_eq(v___x_859_, v___x_860_);
if (v___x_861_ == 0)
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
else
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_unsigned_to_nat(1u);
v___x_863_ = lean_array_fget_borrowed(v_args_852_, v___x_862_);
if (lean_obj_tag(v___x_863_) == 1)
{
lean_object* v_fvarId_864_; uint8_t v___x_865_; 
v_fvarId_864_ = lean_ctor_get(v___x_863_, 0);
v___x_865_ = l_Lean_instBEqFVarId_beq(v_fvarId_864_, v_prevArrayId_818_);
lean_dec(v_prevArrayId_818_);
if (v___x_865_ == 0)
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
goto v___jp_830_;
}
else
{
lean_object* v_n_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_n_866_ = lean_nat_sub(v_size_822_, v___x_862_);
lean_dec(v_size_822_);
v___x_867_ = lean_unsigned_to_nat(2u);
v___x_868_ = lean_array_fget_borrowed(v_args_852_, v___x_867_);
lean_inc(v___x_868_);
v___x_869_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractArg(v___x_868_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_961_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_961_ == 0)
{
v___x_872_ = v___x_869_;
v_isShared_873_ = v_isSharedCheck_961_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_869_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_961_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
uint8_t v___x_874_; 
v___x_874_ = lean_unbox(v_a_870_);
lean_dec(v_a_870_);
if (v___x_874_ == 0)
{
lean_del_object(v___x_872_);
lean_dec(v_n_866_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
goto v___jp_830_;
}
else
{
uint8_t v___x_875_; 
v___x_875_ = lean_nat_dec_eq(v_n_866_, v_zero_845_);
if (v___x_875_ == 0)
{
lean_inc(v_fvarId_851_);
lean_dec_ref(v_decl_819_);
if (lean_obj_tag(v_k_820_) == 0)
{
lean_object* v_decl_876_; lean_object* v_k_877_; lean_object* v___x_878_; 
lean_del_object(v___x_872_);
v_decl_876_ = lean_ctor_get(v_k_820_, 0);
lean_inc_ref(v_decl_876_);
v_k_877_ = lean_ctor_get(v_k_820_, 1);
lean_inc_ref(v_k_877_);
lean_dec_ref_known(v_k_820_, 2);
lean_inc(v_fvarId_851_);
v___x_878_ = l_Lean_FVarIdSet_insert(v_illegalSet_821_, v_fvarId_851_);
v_prevArrayId_818_ = v_fvarId_851_;
v_decl_819_ = v_decl_876_;
v_k_820_ = v_k_877_;
v_illegalSet_821_ = v___x_878_;
v_size_822_ = v_n_866_;
goto _start;
}
else
{
lean_object* v___x_880_; lean_object* v___x_882_; 
lean_dec(v_n_866_);
lean_dec(v_fvarId_851_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
v___x_880_ = lean_box(0);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_880_);
v___x_882_ = v___x_872_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_del_object(v___x_872_);
lean_dec(v_n_866_);
if (lean_obj_tag(v_k_820_) == 0)
{
lean_object* v_decl_884_; lean_object* v_value_885_; 
v_decl_884_ = lean_ctor_get(v_k_820_, 0);
lean_inc_ref(v_decl_884_);
v_value_885_ = lean_ctor_get(v_decl_884_, 3);
lean_inc(v_value_885_);
if (lean_obj_tag(v_value_885_) == 3)
{
lean_object* v_declName_886_; 
v_declName_886_ = lean_ctor_get(v_value_885_, 0);
lean_inc(v_declName_886_);
if (lean_obj_tag(v_declName_886_) == 1)
{
lean_object* v_pre_887_; 
v_pre_887_ = lean_ctor_get(v_declName_886_, 0);
lean_inc(v_pre_887_);
if (lean_obj_tag(v_pre_887_) == 1)
{
lean_object* v_pre_888_; 
v_pre_888_ = lean_ctor_get(v_pre_887_, 0);
lean_inc(v_pre_888_);
if (lean_obj_tag(v_pre_888_) == 0)
{
lean_object* v_k_889_; lean_object* v_fvarId_890_; lean_object* v_binderName_891_; lean_object* v_type_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_959_; 
v_k_889_ = lean_ctor_get(v_k_820_, 1);
v_fvarId_890_ = lean_ctor_get(v_decl_884_, 0);
v_binderName_891_ = lean_ctor_get(v_decl_884_, 1);
v_type_892_ = lean_ctor_get(v_decl_884_, 2);
v_isSharedCheck_959_ = !lean_is_exclusive(v_decl_884_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v_decl_884_, 3);
lean_dec(v_unused_960_);
v___x_894_ = v_decl_884_;
v_isShared_895_ = v_isSharedCheck_959_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_type_892_);
lean_inc(v_binderName_891_);
lean_inc(v_fvarId_890_);
lean_dec(v_decl_884_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_959_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v_us_896_; lean_object* v_args_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_957_; 
v_us_896_ = lean_ctor_get(v_value_885_, 1);
v_args_897_ = lean_ctor_get(v_value_885_, 2);
v_isSharedCheck_957_ = !lean_is_exclusive(v_value_885_);
if (v_isSharedCheck_957_ == 0)
{
lean_object* v_unused_958_; 
v_unused_958_ = lean_ctor_get(v_value_885_, 0);
lean_dec(v_unused_958_);
v___x_899_ = v_value_885_;
v_isShared_900_ = v_isSharedCheck_957_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_args_897_);
lean_inc(v_us_896_);
lean_dec(v_value_885_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_957_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v_str_901_; lean_object* v_str_902_; lean_object* v___x_903_; uint8_t v___x_904_; 
v_str_901_ = lean_ctor_get(v_declName_886_, 1);
lean_inc_ref(v_str_901_);
lean_dec_ref_known(v_declName_886_, 2);
v_str_902_ = lean_ctor_get(v_pre_887_, 1);
lean_inc_ref(v_str_902_);
lean_dec_ref_known(v_pre_887_, 2);
v___x_903_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__2));
v___x_904_ = lean_string_dec_eq(v_str_902_, v___x_903_);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; uint8_t v___x_906_; 
v___x_905_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__3));
v___x_906_ = lean_string_dec_eq(v_str_902_, v___x_905_);
lean_dec_ref(v_str_902_);
if (v___x_906_ == 0)
{
lean_dec_ref(v_str_901_);
lean_del_object(v___x_899_);
lean_dec_ref(v_args_897_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
else
{
lean_object* v___x_907_; uint8_t v___x_908_; 
v___x_907_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__4));
v___x_908_ = lean_string_dec_eq(v_str_901_, v___x_907_);
lean_dec_ref(v_str_901_);
if (v___x_908_ == 0)
{
lean_del_object(v___x_899_);
lean_dec_ref(v_args_897_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
else
{
lean_object* v___x_909_; uint8_t v___x_910_; 
v___x_909_ = lean_array_get_size(v_args_897_);
v___x_910_ = lean_nat_dec_eq(v___x_909_, v___x_862_);
if (v___x_910_ == 0)
{
lean_del_object(v___x_899_);
lean_dec_ref(v_args_897_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
else
{
lean_object* v___x_911_; 
v___x_911_ = lean_array_fget(v_args_897_, v_zero_845_);
lean_dec_ref(v_args_897_);
if (lean_obj_tag(v___x_911_) == 1)
{
lean_object* v_fvarId_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_931_; 
v_fvarId_912_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_931_ == 0)
{
v___x_914_ = v___x_911_;
v_isShared_915_ = v_isSharedCheck_931_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_fvarId_912_);
lean_dec(v___x_911_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_931_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
uint8_t v___x_916_; 
v___x_916_ = l_Lean_instBEqFVarId_beq(v_fvarId_912_, v_fvarId_851_);
if (v___x_916_ == 0)
{
lean_del_object(v___x_914_);
lean_dec(v_fvarId_912_);
lean_del_object(v___x_899_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_920_; 
lean_inc_ref(v_k_889_);
lean_inc(v_fvarId_851_);
lean_dec_ref_known(v_k_820_, 2);
lean_dec_ref(v_decl_819_);
v___x_917_ = l_Lean_Name_str___override(v_pre_888_, v___x_905_);
v___x_918_ = l_Lean_Name_str___override(v___x_917_, v___x_907_);
if (v_isShared_915_ == 0)
{
v___x_920_ = v___x_914_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_fvarId_912_);
v___x_920_ = v_reuseFailAlloc_930_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_921_ = lean_mk_empty_array_with_capacity(v___x_862_);
v___x_922_ = lean_array_push(v___x_921_, v___x_920_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 2, v___x_922_);
lean_ctor_set(v___x_899_, 0, v___x_918_);
v___x_924_ = v___x_899_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_us_896_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v___x_922_);
v___x_924_ = v_reuseFailAlloc_929_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_926_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 3, v___x_924_);
v___x_926_ = v___x_894_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_fvarId_890_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_binderName_891_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v_type_892_);
lean_ctor_set(v_reuseFailAlloc_928_, 3, v___x_924_);
v___x_926_ = v_reuseFailAlloc_928_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_927_; 
v___x_927_ = l_Lean_FVarIdSet_insert(v_illegalSet_821_, v_fvarId_851_);
v_decl_837_ = v___x_926_;
v_k_838_ = v_k_889_;
v_illegalSet_839_ = v___x_927_;
goto v___jp_836_;
}
}
}
}
}
}
else
{
lean_dec(v___x_911_);
lean_del_object(v___x_899_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
}
}
}
}
else
{
lean_object* v___x_932_; uint8_t v___x_933_; 
lean_dec_ref(v_str_902_);
v___x_932_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__4));
v___x_933_ = lean_string_dec_eq(v_str_901_, v___x_932_);
lean_dec_ref(v_str_901_);
if (v___x_933_ == 0)
{
lean_del_object(v___x_899_);
lean_dec_ref(v_args_897_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
else
{
lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_934_ = lean_array_get_size(v_args_897_);
v___x_935_ = lean_nat_dec_eq(v___x_934_, v___x_862_);
if (v___x_935_ == 0)
{
lean_del_object(v___x_899_);
lean_dec_ref(v_args_897_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
else
{
lean_object* v___x_936_; 
v___x_936_ = lean_array_fget(v_args_897_, v_zero_845_);
lean_dec_ref(v_args_897_);
if (lean_obj_tag(v___x_936_) == 1)
{
lean_object* v_fvarId_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_956_; 
v_fvarId_937_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_956_ == 0)
{
v___x_939_ = v___x_936_;
v_isShared_940_ = v_isSharedCheck_956_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_fvarId_937_);
lean_dec(v___x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_956_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
uint8_t v___x_941_; 
v___x_941_ = l_Lean_instBEqFVarId_beq(v_fvarId_937_, v_fvarId_851_);
if (v___x_941_ == 0)
{
lean_del_object(v___x_939_);
lean_dec(v_fvarId_937_);
lean_del_object(v___x_899_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
else
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
lean_inc_ref(v_k_889_);
lean_inc(v_fvarId_851_);
lean_dec_ref_known(v_k_820_, 2);
lean_dec_ref(v_decl_819_);
v___x_942_ = l_Lean_Name_str___override(v_pre_888_, v___x_903_);
v___x_943_ = l_Lean_Name_str___override(v___x_942_, v___x_932_);
if (v_isShared_940_ == 0)
{
v___x_945_ = v___x_939_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_fvarId_937_);
v___x_945_ = v_reuseFailAlloc_955_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_949_; 
v___x_946_ = lean_mk_empty_array_with_capacity(v___x_862_);
v___x_947_ = lean_array_push(v___x_946_, v___x_945_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 2, v___x_947_);
lean_ctor_set(v___x_899_, 0, v___x_943_);
v___x_949_ = v___x_899_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_us_896_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v___x_947_);
v___x_949_ = v_reuseFailAlloc_954_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_951_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 3, v___x_949_);
v___x_951_ = v___x_894_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_fvarId_890_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_binderName_891_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v_type_892_);
lean_ctor_set(v_reuseFailAlloc_953_, 3, v___x_949_);
v___x_951_ = v_reuseFailAlloc_953_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; 
v___x_952_ = l_Lean_FVarIdSet_insert(v_illegalSet_821_, v_fvarId_851_);
v_decl_837_ = v___x_951_;
v_k_838_ = v_k_889_;
v_illegalSet_839_ = v___x_952_;
goto v___jp_836_;
}
}
}
}
}
}
else
{
lean_dec(v___x_936_);
lean_del_object(v___x_899_);
lean_dec(v_us_896_);
lean_del_object(v___x_894_);
lean_dec_ref(v_type_892_);
lean_dec(v_binderName_891_);
lean_dec(v_fvarId_890_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_887_, 2);
lean_dec(v_pre_888_);
lean_dec_ref_known(v_declName_886_, 2);
lean_dec_ref_known(v_value_885_, 3);
lean_dec_ref(v_decl_884_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
}
else
{
lean_dec(v_pre_887_);
lean_dec_ref_known(v_declName_886_, 2);
lean_dec_ref_known(v_value_885_, 3);
lean_dec_ref(v_decl_884_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
}
else
{
lean_dec_ref_known(v_value_885_, 3);
lean_dec(v_declName_886_);
lean_dec_ref(v_decl_884_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
}
else
{
lean_dec(v_value_885_);
lean_dec_ref(v_decl_884_);
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
}
else
{
v_decl_837_ = v_decl_819_;
v_k_838_ = v_k_820_;
v_illegalSet_839_ = v_illegalSet_821_;
goto v___jp_836_;
}
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec(v_n_866_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
v_a_962_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_869_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_869_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
else
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
}
}
}
}
else
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
}
else
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
}
else
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
}
else
{
lean_dec(v_size_822_);
lean_dec(v_illegalSet_821_);
lean_dec_ref(v_k_820_);
lean_dec_ref(v_decl_819_);
lean_dec(v_prevArrayId_818_);
goto v___jp_833_;
}
}
v___jp_830_:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_box(0);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
v___jp_833_:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = lean_box(0);
v___x_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
v___jp_836_:
{
uint8_t v___x_840_; uint8_t v___x_841_; 
v___x_840_ = 0;
v___x_841_ = l_Lean_Compiler_LCNF_Code_dependsOn(v___x_840_, v_k_838_, v_illegalSet_839_);
lean_dec(v_illegalSet_839_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v_decl_837_);
lean_ctor_set(v___x_842_, 1, v_k_838_);
v___x_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
return v___x_844_;
}
else
{
lean_dec_ref(v_k_838_);
lean_dec_ref(v_decl_837_);
goto v___jp_830_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___boxed(lean_object* v_prevArrayId_970_, lean_object* v_decl_971_, lean_object* v_k_972_, lean_object* v_illegalSet_973_, lean_object* v_size_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain(v_prevArrayId_970_, v_decl_971_, v_k_972_, v_illegalSet_973_, v_size_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_);
lean_dec(v_a_980_);
lean_dec_ref(v_a_979_);
lean_dec(v_a_978_);
lean_dec_ref(v_a_977_);
lean_dec(v_a_976_);
lean_dec_ref(v_a_975_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral(lean_object* v_decl_985_, lean_object* v_k_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_){
_start:
{
lean_object* v_value_1003_; 
v_value_1003_ = lean_ctor_get(v_decl_985_, 3);
if (lean_obj_tag(v_value_1003_) == 3)
{
lean_object* v_declName_1004_; 
v_declName_1004_ = lean_ctor_get(v_value_1003_, 0);
if (lean_obj_tag(v_declName_1004_) == 1)
{
lean_object* v_pre_1005_; 
v_pre_1005_ = lean_ctor_get(v_declName_1004_, 0);
if (lean_obj_tag(v_pre_1005_) == 1)
{
lean_object* v_pre_1006_; 
v_pre_1006_ = lean_ctor_get(v_pre_1005_, 0);
if (lean_obj_tag(v_pre_1006_) == 0)
{
lean_object* v_args_1007_; lean_object* v_str_1008_; lean_object* v_str_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v_args_1007_ = lean_ctor_get(v_value_1003_, 2);
v_str_1008_ = lean_ctor_get(v_declName_1004_, 1);
v_str_1009_ = lean_ctor_get(v_pre_1005_, 1);
v___x_1010_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__0));
v___x_1011_ = lean_string_dec_eq(v_str_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
else
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__1));
v___x_1013_ = lean_string_dec_eq(v_str_1008_, v___x_1012_);
if (v___x_1013_ == 0)
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1014_ = lean_array_get_size(v_args_1007_);
v___x_1015_ = lean_unsigned_to_nat(3u);
v___x_1016_ = lean_nat_dec_eq(v___x_1014_, v___x_1015_);
if (v___x_1016_ == 0)
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
else
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = lean_array_fget_borrowed(v_args_1007_, v___x_1017_);
if (lean_obj_tag(v___x_1018_) == 1)
{
lean_object* v_fvarId_1019_; lean_object* v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1022_; 
v_fvarId_1019_ = lean_ctor_get(v___x_1018_, 0);
v___x_1020_ = lean_box(1);
v___x_1021_ = 0;
v___x_1022_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_1021_, v_fvarId_1019_, v_a_990_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1077_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1077_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1077_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
if (lean_obj_tag(v_a_1023_) == 1)
{
lean_object* v_val_1027_; lean_object* v_fvarId_1028_; lean_object* v_value_1029_; lean_object* v_sizeFVar_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; 
lean_del_object(v___x_1025_);
v_val_1027_ = lean_ctor_get(v_a_1023_, 0);
lean_inc(v_val_1027_);
lean_dec_ref_known(v_a_1023_, 1);
v_fvarId_1028_ = lean_ctor_get(v_val_1027_, 0);
lean_inc(v_fvarId_1028_);
v_value_1029_ = lean_ctor_get(v_val_1027_, 3);
lean_inc(v_value_1029_);
lean_dec(v_val_1027_);
if (lean_obj_tag(v_value_1029_) == 3)
{
lean_object* v_declName_1052_; 
v_declName_1052_ = lean_ctor_get(v_value_1029_, 0);
lean_inc(v_declName_1052_);
if (lean_obj_tag(v_declName_1052_) == 1)
{
lean_object* v_pre_1053_; 
v_pre_1053_ = lean_ctor_get(v_declName_1052_, 0);
lean_inc(v_pre_1053_);
if (lean_obj_tag(v_pre_1053_) == 1)
{
lean_object* v_pre_1054_; 
v_pre_1054_ = lean_ctor_get(v_pre_1053_, 0);
if (lean_obj_tag(v_pre_1054_) == 0)
{
lean_object* v_args_1055_; lean_object* v_str_1056_; lean_object* v_str_1057_; uint8_t v___x_1058_; 
v_args_1055_ = lean_ctor_get(v_value_1029_, 2);
lean_inc_ref(v_args_1055_);
lean_dec_ref_known(v_value_1029_, 3);
v_str_1056_ = lean_ctor_get(v_declName_1052_, 1);
lean_inc_ref(v_str_1056_);
lean_dec_ref_known(v_declName_1052_, 2);
v_str_1057_ = lean_ctor_get(v_pre_1053_, 1);
lean_inc_ref(v_str_1057_);
lean_dec_ref_known(v_pre_1053_, 2);
v___x_1058_ = lean_string_dec_eq(v_str_1057_, v___x_1010_);
lean_dec_ref(v_str_1057_);
if (v___x_1058_ == 0)
{
lean_dec_ref(v_str_1056_);
lean_dec_ref(v_args_1055_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
else
{
lean_object* v___x_1059_; uint8_t v___x_1060_; 
v___x_1059_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__0));
v___x_1060_ = lean_string_dec_eq(v_str_1056_, v___x_1059_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1061_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__1));
v___x_1062_ = lean_string_dec_eq(v_str_1056_, v___x_1061_);
lean_dec_ref(v_str_1056_);
if (v___x_1062_ == 0)
{
lean_dec_ref(v_args_1055_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
else
{
lean_object* v___x_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v___x_1063_ = lean_array_get_size(v_args_1055_);
v___x_1064_ = lean_unsigned_to_nat(2u);
v___x_1065_ = lean_nat_dec_eq(v___x_1063_, v___x_1064_);
if (v___x_1065_ == 0)
{
lean_dec_ref(v_args_1055_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
else
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_array_fget(v_args_1055_, v___x_1017_);
lean_dec_ref(v_args_1055_);
if (lean_obj_tag(v___x_1066_) == 1)
{
lean_object* v_fvarId_1067_; 
v_fvarId_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_fvarId_1067_);
lean_dec_ref_known(v___x_1066_, 1);
v_sizeFVar_1031_ = v_fvarId_1067_;
v___y_1032_ = v_a_987_;
v___y_1033_ = v_a_988_;
v___y_1034_ = v_a_989_;
v___y_1035_ = v_a_990_;
v___y_1036_ = v_a_991_;
v___y_1037_ = v_a_992_;
goto v___jp_1030_;
}
else
{
lean_dec(v___x_1066_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
}
}
}
else
{
lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
lean_dec_ref(v_str_1056_);
v___x_1068_ = lean_array_get_size(v_args_1055_);
v___x_1069_ = lean_unsigned_to_nat(2u);
v___x_1070_ = lean_nat_dec_eq(v___x_1068_, v___x_1069_);
if (v___x_1070_ == 0)
{
lean_dec_ref(v_args_1055_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
else
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_array_fget(v_args_1055_, v___x_1017_);
lean_dec_ref(v_args_1055_);
if (lean_obj_tag(v___x_1071_) == 1)
{
lean_object* v_fvarId_1072_; 
v_fvarId_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_fvarId_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v_sizeFVar_1031_ = v_fvarId_1072_;
v___y_1032_ = v_a_987_;
v___y_1033_ = v_a_988_;
v___y_1034_ = v_a_989_;
v___y_1035_ = v_a_990_;
v___y_1036_ = v_a_991_;
v___y_1037_ = v_a_992_;
goto v___jp_1030_;
}
else
{
lean_dec(v___x_1071_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1053_, 2);
lean_dec_ref_known(v_declName_1052_, 2);
lean_dec_ref_known(v_value_1029_, 3);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
}
else
{
lean_dec(v_pre_1053_);
lean_dec_ref_known(v_declName_1052_, 2);
lean_dec_ref_known(v_value_1029_, 3);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
}
else
{
lean_dec_ref_known(v_value_1029_, 3);
lean_dec(v_declName_1052_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
}
else
{
lean_dec(v_value_1029_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_997_;
}
v___jp_1030_:
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_1021_, v_sizeFVar_1031_, v___y_1035_);
lean_dec(v_sizeFVar_1031_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref_known(v___x_1038_, 1);
if (lean_obj_tag(v_a_1039_) == 1)
{
lean_object* v_val_1040_; 
v_val_1040_ = lean_ctor_get(v_a_1039_, 0);
lean_inc(v_val_1040_);
lean_dec_ref_known(v_a_1039_, 1);
if (lean_obj_tag(v_val_1040_) == 0)
{
lean_object* v_value_1041_; 
v_value_1041_ = lean_ctor_get(v_val_1040_, 0);
lean_inc_ref(v_value_1041_);
lean_dec_ref_known(v_val_1040_, 1);
if (lean_obj_tag(v_value_1041_) == 0)
{
lean_object* v_val_1042_; lean_object* v___x_1043_; 
v_val_1042_ = lean_ctor_get(v_value_1041_, 0);
lean_inc(v_val_1042_);
lean_dec_ref_known(v_value_1041_, 1);
v___x_1043_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain(v_fvarId_1028_, v_decl_985_, v_k_986_, v___x_1020_, v_val_1042_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
return v___x_1043_;
}
else
{
lean_dec_ref(v_value_1041_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_994_;
}
}
else
{
lean_dec(v_val_1040_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_994_;
}
}
else
{
lean_dec(v_a_1039_);
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_994_;
}
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
lean_dec(v_fvarId_1028_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
v_a_1044_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_1038_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_1038_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
}
else
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_dec(v_a_1023_);
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
v___x_1073_ = lean_box(0);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1073_);
v___x_1075_ = v___x_1025_;
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
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
v_a_1078_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1022_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1022_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
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
else
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
}
}
}
}
else
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
}
else
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
}
else
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
}
else
{
lean_dec_ref(v_k_986_);
lean_dec_ref(v_decl_985_);
goto v___jp_1000_;
}
v___jp_994_:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_box(0);
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
return v___x_996_;
}
v___jp_997_:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = lean_box(0);
v___x_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
return v___x_999_;
}
v___jp_1000_:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = lean_box(0);
v___x_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
return v___x_1002_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___boxed(lean_object* v_decl_1086_, lean_object* v_k_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral(v_decl_1086_, v_k_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
lean_dec(v_a_1093_);
lean_dec_ref(v_a_1092_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
return v_res_1095_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1096_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__0);
v___x_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
return v___x_1098_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__1, &l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__1_once, _init_l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__1);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg(lean_object* v_env_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v___x_1104_; lean_object* v_nextMacroScope_1105_; lean_object* v_ngen_1106_; lean_object* v_auxDeclNGen_1107_; lean_object* v_traceState_1108_; lean_object* v_recordedDeps_1109_; lean_object* v_messages_1110_; lean_object* v_infoState_1111_; lean_object* v_snapshotTasks_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1123_; 
v___x_1104_ = lean_st_ref_take(v___y_1102_);
v_nextMacroScope_1105_ = lean_ctor_get(v___x_1104_, 1);
v_ngen_1106_ = lean_ctor_get(v___x_1104_, 2);
v_auxDeclNGen_1107_ = lean_ctor_get(v___x_1104_, 3);
v_traceState_1108_ = lean_ctor_get(v___x_1104_, 4);
v_recordedDeps_1109_ = lean_ctor_get(v___x_1104_, 6);
v_messages_1110_ = lean_ctor_get(v___x_1104_, 7);
v_infoState_1111_ = lean_ctor_get(v___x_1104_, 8);
v_snapshotTasks_1112_ = lean_ctor_get(v___x_1104_, 9);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1123_ == 0)
{
lean_object* v_unused_1124_; lean_object* v_unused_1125_; 
v_unused_1124_ = lean_ctor_get(v___x_1104_, 5);
lean_dec(v_unused_1124_);
v_unused_1125_ = lean_ctor_get(v___x_1104_, 0);
lean_dec(v_unused_1125_);
v___x_1114_ = v___x_1104_;
v_isShared_1115_ = v_isSharedCheck_1123_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_snapshotTasks_1112_);
lean_inc(v_infoState_1111_);
lean_inc(v_messages_1110_);
lean_inc(v_recordedDeps_1109_);
lean_inc(v_traceState_1108_);
lean_inc(v_auxDeclNGen_1107_);
lean_inc(v_ngen_1106_);
lean_inc(v_nextMacroScope_1105_);
lean_dec(v___x_1104_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1123_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1119_; 
v___x_1116_ = lean_box(0);
v___x_1117_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___closed__2);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 5, v___x_1117_);
lean_ctor_set(v___x_1114_, 0, v_env_1101_);
v___x_1119_ = v___x_1114_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_env_1101_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v_nextMacroScope_1105_);
lean_ctor_set(v_reuseFailAlloc_1122_, 2, v_ngen_1106_);
lean_ctor_set(v_reuseFailAlloc_1122_, 3, v_auxDeclNGen_1107_);
lean_ctor_set(v_reuseFailAlloc_1122_, 4, v_traceState_1108_);
lean_ctor_set(v_reuseFailAlloc_1122_, 5, v___x_1117_);
lean_ctor_set(v_reuseFailAlloc_1122_, 6, v_recordedDeps_1109_);
lean_ctor_set(v_reuseFailAlloc_1122_, 7, v_messages_1110_);
lean_ctor_set(v_reuseFailAlloc_1122_, 8, v_infoState_1111_);
lean_ctor_set(v_reuseFailAlloc_1122_, 9, v_snapshotTasks_1112_);
v___x_1119_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = lean_st_ref_put(v___y_1102_, v___x_1119_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1116_);
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg___boxed(lean_object* v_env_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg(v_env_1126_, v___y_1127_);
lean_dec(v___y_1127_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1(lean_object* v_env_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg(v_env_1130_, v___y_1136_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___boxed(lean_object* v_env_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1(v_env_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__0(size_t v_sz_1148_, size_t v_i_1149_, lean_object* v_bs_1150_, uint8_t v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
uint8_t v___x_1158_; 
v___x_1158_ = lean_usize_dec_lt(v_i_1149_, v_sz_1148_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; 
v___x_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1159_, 0, v_bs_1150_);
return v___x_1159_;
}
else
{
uint8_t v___x_1160_; lean_object* v_v_1161_; lean_object* v___x_1162_; lean_object* v_bs_x27_1163_; lean_object* v___x_1164_; 
v___x_1160_ = 0;
v_v_1161_ = lean_array_uget(v_bs_1150_, v_i_1149_);
v___x_1162_ = lean_unsigned_to_nat(0u);
v_bs_x27_1163_ = lean_array_uset(v_bs_1150_, v_i_1149_, v___x_1162_);
v___x_1164_ = l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(v___x_1160_, v_v_1161_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; size_t v___x_1166_; size_t v___x_1167_; lean_object* v___x_1168_; 
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_a_1165_);
lean_dec_ref_known(v___x_1164_, 1);
v___x_1166_ = ((size_t)1ULL);
v___x_1167_ = lean_usize_add(v_i_1149_, v___x_1166_);
v___x_1168_ = lean_array_uset(v_bs_x27_1163_, v_i_1149_, v_a_1165_);
v_i_1149_ = v___x_1167_;
v_bs_1150_ = v___x_1168_;
goto _start;
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
lean_dec_ref(v_bs_x27_1163_);
v_a_1170_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1164_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1164_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__0___boxed(lean_object* v_sz_1178_, lean_object* v_i_1179_, lean_object* v_bs_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
size_t v_sz_boxed_1188_; size_t v_i_boxed_1189_; uint8_t v___y_8258__boxed_1190_; lean_object* v_res_1191_; 
v_sz_boxed_1188_ = lean_unbox_usize(v_sz_1178_);
lean_dec(v_sz_1178_);
v_i_boxed_1189_ = lean_unbox_usize(v_i_1179_);
lean_dec(v_i_1179_);
v___y_8258__boxed_1190_ = lean_unbox(v___y_1181_);
v_res_1191_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__0(v_sz_boxed_1188_, v_i_boxed_1189_, v_bs_1180_, v___y_8258__boxed_1190_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
return v_res_1191_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__1(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1194_ = lean_box(0);
v___x_1195_ = lean_unsigned_to_nat(16u);
v___x_1196_ = lean_mk_array(v___x_1195_, v___x_1194_);
return v___x_1196_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1197_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__1, &l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__1);
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
lean_ctor_set(v___x_1199_, 1, v___x_1197_);
return v___x_1199_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__3(void){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(lean_object* v_decl_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v_type_1217_; lean_object* v_value_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v_type_1217_ = lean_ctor_get(v_decl_1209_, 2);
lean_inc_ref(v_type_1217_);
v_value_1218_ = lean_ctor_get(v_decl_1209_, 3);
v___x_1219_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__0));
v___x_1220_ = lean_st_mk_ref(v___x_1219_);
v___x_1221_ = l_Lean_Compiler_LCNF_ExtractClosed_extractLetValue(v_value_1218_, v___x_1220_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; size_t v_sz_1231_; size_t v___x_1232_; lean_object* v___x_1233_; 
lean_dec_ref_known(v___x_1221_, 1);
v___x_1222_ = lean_st_ref_get(v___x_1220_);
lean_dec(v___x_1220_);
v___x_1223_ = l_Array_reverse___redArg(v___x_1222_);
v___x_1224_ = 0;
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v_decl_1209_);
v___x_1226_ = lean_array_push(v___x_1223_, v___x_1225_);
v___x_1227_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2, &l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2);
v___x_1228_ = 0;
v___x_1229_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__3, &l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__3);
v___x_1230_ = lean_st_mk_ref(v___x_1227_);
v_sz_1231_ = lean_array_size(v___x_1226_);
v___x_1232_ = ((size_t)0ULL);
v___x_1233_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__0(v_sz_1231_, v___x_1232_, v___x_1226_, v___x_1228_, v___x_1230_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_env_1246_; lean_object* v___x_1247_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v___x_1233_, 1);
v___x_1235_ = lean_st_ref_get(v___x_1230_);
lean_dec(v___x_1230_);
lean_dec(v___x_1235_);
v___x_1236_ = lean_array_get_size(v_a_1234_);
v___x_1237_ = lean_unsigned_to_nat(1u);
v___x_1238_ = lean_nat_sub(v___x_1236_, v___x_1237_);
v___x_1239_ = lean_array_get_borrowed(v___x_1229_, v_a_1234_, v___x_1238_);
lean_dec(v___x_1238_);
v___x_1240_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v___x_1239_);
v___x_1241_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
v___x_1242_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_a_1234_, v___x_1241_);
lean_dec(v_a_1234_);
v___x_1243_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__4));
lean_inc_ref(v___x_1242_);
v___x_1244_ = l_Lean_Compiler_LCNF_Code_toExpr(v___x_1224_, v___x_1242_, v___x_1243_);
v___x_1245_ = lean_st_ref_get(v_a_1215_);
v_env_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc_ref_n(v_env_1246_, 2);
lean_dec(v___x_1245_);
v___x_1247_ = l_Lean_getClosedTermName_x3f(v_env_1246_, v___x_1244_);
if (lean_obj_tag(v___x_1247_) == 1)
{
lean_object* v_val_1248_; lean_object* v___x_1249_; 
lean_dec_ref(v_env_1246_);
lean_dec_ref(v___x_1244_);
lean_dec_ref(v_type_1217_);
v_val_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_val_1248_);
lean_dec_ref_known(v___x_1247_, 1);
v___x_1249_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_1224_, v___x_1242_, v_a_1213_);
lean_dec_ref(v___x_1242_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1256_ == 0)
{
lean_object* v_unused_1257_; 
v_unused_1257_ = lean_ctor_get(v___x_1249_, 0);
lean_dec(v_unused_1257_);
v___x_1251_ = v___x_1249_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_dec(v___x_1249_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 0, v_val_1248_);
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_val_1248_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v_val_1248_);
v_a_1258_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1249_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1249_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
else
{
lean_object* v___x_1266_; lean_object* v_baseName_1267_; lean_object* v_decls_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1315_; 
lean_dec(v___x_1247_);
v___x_1266_ = lean_st_ref_get(v_a_1211_);
v_baseName_1267_ = lean_ctor_get(v_a_1210_, 0);
v_decls_1268_ = lean_ctor_get(v___x_1266_, 0);
lean_inc_ref(v_decls_1268_);
lean_dec(v___x_1266_);
v___x_1269_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__6));
v___x_1270_ = lean_array_get_size(v_decls_1268_);
lean_dec_ref(v_decls_1268_);
v___x_1271_ = lean_name_append_index_after(v___x_1269_, v___x_1270_);
lean_inc(v_baseName_1267_);
v___x_1272_ = l_Lean_Name_append(v_baseName_1267_, v___x_1271_);
lean_inc(v___x_1272_);
v___x_1273_ = l_Lean_cacheClosedTermName(v_env_1246_, v___x_1244_, v___x_1272_);
v___x_1274_ = l_Lean_setEnv___at___00__private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction_spec__1___redArg(v___x_1273_, v_a_1215_);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1315_ == 0)
{
lean_object* v_unused_1316_; 
v_unused_1316_ = lean_ctor_get(v___x_1274_, 0);
lean_dec(v_unused_1316_);
v___x_1276_ = v___x_1274_;
v_isShared_1277_ = v_isSharedCheck_1315_;
goto v_resetjp_1275_;
}
else
{
lean_dec(v___x_1274_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1315_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1278_ = lean_box(0);
v___x_1279_ = 1;
lean_inc(v___x_1272_);
v___x_1280_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1280_, 0, v___x_1272_);
lean_ctor_set(v___x_1280_, 1, v___x_1278_);
lean_ctor_set(v___x_1280_, 2, v_type_1217_);
lean_ctor_set(v___x_1280_, 3, v___x_1243_);
lean_ctor_set_uint8(v___x_1280_, sizeof(void*)*4, v___x_1279_);
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 0, v___x_1242_);
v___x_1282_ = v___x_1276_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v___x_1242_);
v___x_1282_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1283_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__7));
v___x_1284_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1284_, 0, v___x_1280_);
lean_ctor_set(v___x_1284_, 1, v___x_1282_);
lean_ctor_set(v___x_1284_, 2, v___x_1283_);
lean_ctor_set_uint8(v___x_1284_, sizeof(void*)*3, v___x_1228_);
lean_inc_ref(v___x_1284_);
v___x_1285_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_1284_, v_a_1215_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1304_; 
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1304_ == 0)
{
lean_object* v_unused_1305_; 
v_unused_1305_ = lean_ctor_get(v___x_1285_, 0);
lean_dec(v_unused_1305_);
v___x_1287_ = v___x_1285_;
v_isShared_1288_ = v_isSharedCheck_1304_;
goto v_resetjp_1286_;
}
else
{
lean_dec(v___x_1285_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1304_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1289_; lean_object* v_decls_1290_; lean_object* v_fvarDecisionCache_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1303_; 
v___x_1289_ = lean_st_ref_take(v_a_1211_);
v_decls_1290_ = lean_ctor_get(v___x_1289_, 0);
v_fvarDecisionCache_1291_ = lean_ctor_get(v___x_1289_, 1);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1293_ = v___x_1289_;
v_isShared_1294_ = v_isSharedCheck_1303_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_fvarDecisionCache_1291_);
lean_inc(v_decls_1290_);
lean_dec(v___x_1289_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1303_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___x_1295_ = lean_array_push(v_decls_1290_, v___x_1284_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1295_);
v___x_1297_ = v___x_1293_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_fvarDecisionCache_1291_);
v___x_1297_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
lean_object* v___x_1298_; lean_object* v___x_1300_; 
v___x_1298_ = lean_st_ref_put(v_a_1211_, v___x_1297_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 0, v___x_1272_);
v___x_1300_ = v___x_1287_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v___x_1272_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
lean_dec_ref_known(v___x_1284_, 3);
lean_dec(v___x_1272_);
v_a_1306_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1285_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1285_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec(v___x_1230_);
lean_dec_ref(v_type_1217_);
v_a_1317_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1233_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1233_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v___x_1220_);
lean_dec_ref(v_type_1217_);
lean_dec_ref(v_decl_1209_);
v_a_1325_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1221_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1221_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___boxed(lean_object* v_decl_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(v_decl_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
lean_dec(v_a_1339_);
lean_dec_ref(v_a_1338_);
lean_dec(v_a_1337_);
lean_dec_ref(v_a_1336_);
lean_dec(v_a_1335_);
lean_dec_ref(v_a_1334_);
return v_res_1341_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0(lean_object* v_msg_1343_){
_start:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0___closed__0);
v___x_1345_ = lean_panic_fn_borrowed(v___x_1344_, v_msg_1343_);
return v___x_1345_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__3(void){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1349_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__2));
v___x_1350_ = lean_unsigned_to_nat(9u);
v___x_1351_ = lean_unsigned_to_nat(658u);
v___x_1352_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__1));
v___x_1353_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__0));
v___x_1354_ = l_mkPanicMessageWithDecl(v___x_1353_, v___x_1352_, v___x_1351_, v___x_1350_, v___x_1349_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode(lean_object* v_code_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_){
_start:
{
lean_object* v_decl_1366_; lean_object* v_k_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; 
switch(lean_obj_tag(v_code_1357_))
{
case 0:
{
lean_object* v_decl_1481_; lean_object* v_k_1482_; lean_object* v_value_1483_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; lean_object* v___y_1490_; 
v_decl_1481_ = lean_ctor_get(v_code_1357_, 0);
v_k_1482_ = lean_ctor_get(v_code_1357_, 1);
v_value_1483_ = lean_ctor_get(v_decl_1481_, 3);
lean_inc(v_value_1483_);
if (lean_obj_tag(v_value_1483_) == 3)
{
lean_object* v_declName_1681_; 
v_declName_1681_ = lean_ctor_get(v_value_1483_, 0);
if (lean_obj_tag(v_declName_1681_) == 1)
{
lean_object* v_pre_1682_; 
v_pre_1682_ = lean_ctor_get(v_declName_1681_, 0);
if (lean_obj_tag(v_pre_1682_) == 1)
{
lean_object* v_pre_1683_; 
v_pre_1683_ = lean_ctor_get(v_pre_1682_, 0);
if (lean_obj_tag(v_pre_1683_) == 0)
{
lean_object* v_args_1684_; lean_object* v_str_1685_; lean_object* v_str_1686_; lean_object* v___x_1687_; uint8_t v___x_1688_; lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___y_1694_; lean_object* v___y_1695_; lean_object* v_sizeId_1895_; lean_object* v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; 
v_args_1684_ = lean_ctor_get(v_value_1483_, 2);
v_str_1685_ = lean_ctor_get(v_declName_1681_, 1);
v_str_1686_ = lean_ctor_get(v_pre_1682_, 1);
v___x_1687_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral_identifyChain___closed__0));
v___x_1688_ = lean_string_dec_eq(v_str_1686_, v___x_1687_);
if (v___x_1688_ == 0)
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
else
{
lean_object* v___x_2028_; uint8_t v___x_2029_; 
v___x_2028_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__0));
v___x_2029_ = lean_string_dec_eq(v_str_1685_, v___x_2028_);
if (v___x_2029_ == 0)
{
lean_object* v___x_2030_; uint8_t v___x_2031_; 
v___x_2030_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral___closed__1));
v___x_2031_ = lean_string_dec_eq(v_str_1685_, v___x_2030_);
if (v___x_2031_ == 0)
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
else
{
lean_object* v___x_2032_; lean_object* v___x_2033_; uint8_t v___x_2034_; 
v___x_2032_ = lean_array_get_size(v_args_1684_);
v___x_2033_ = lean_unsigned_to_nat(2u);
v___x_2034_ = lean_nat_dec_eq(v___x_2032_, v___x_2033_);
if (v___x_2034_ == 0)
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
else
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = lean_unsigned_to_nat(1u);
v___x_2036_ = lean_array_fget_borrowed(v_args_1684_, v___x_2035_);
if (lean_obj_tag(v___x_2036_) == 1)
{
lean_object* v_fvarId_2037_; 
v_fvarId_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_fvarId_2037_);
v_sizeId_1895_ = v_fvarId_2037_;
v___y_1896_ = v_a_1358_;
v___y_1897_ = v_a_1359_;
v___y_1898_ = v_a_1360_;
v___y_1899_ = v_a_1361_;
v___y_1900_ = v_a_1362_;
v___y_1901_ = v_a_1363_;
goto v___jp_1894_;
}
else
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
}
}
}
else
{
lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; 
v___x_2038_ = lean_array_get_size(v_args_1684_);
v___x_2039_ = lean_unsigned_to_nat(2u);
v___x_2040_ = lean_nat_dec_eq(v___x_2038_, v___x_2039_);
if (v___x_2040_ == 0)
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
else
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = lean_unsigned_to_nat(1u);
v___x_2042_ = lean_array_fget_borrowed(v_args_1684_, v___x_2041_);
if (lean_obj_tag(v___x_2042_) == 1)
{
lean_object* v_fvarId_2043_; 
v_fvarId_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_fvarId_2043_);
v_sizeId_1895_ = v_fvarId_2043_;
v___y_1896_ = v_a_1358_;
v___y_1897_ = v_a_1359_;
v___y_1898_ = v_a_1360_;
v___y_1899_ = v_a_1361_;
v___y_1900_ = v_a_1362_;
v___y_1901_ = v_a_1363_;
goto v___jp_1894_;
}
else
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
}
}
}
v___jp_1689_:
{
lean_object* v___x_1696_; 
lean_inc_ref(v_k_1482_);
lean_inc_ref(v_decl_1481_);
v___x_1696_ = l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral(v_decl_1481_, v_k_1482_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; 
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_a_1697_);
lean_dec_ref_known(v___x_1696_, 1);
if (lean_obj_tag(v_a_1697_) == 1)
{
lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1769_; 
v_isSharedCheck_1769_ = !lean_is_exclusive(v_value_1483_);
if (v_isSharedCheck_1769_ == 0)
{
lean_object* v_unused_1770_; lean_object* v_unused_1771_; lean_object* v_unused_1772_; 
v_unused_1770_ = lean_ctor_get(v_value_1483_, 2);
lean_dec(v_unused_1770_);
v_unused_1771_ = lean_ctor_get(v_value_1483_, 1);
lean_dec(v_unused_1771_);
v_unused_1772_ = lean_ctor_get(v_value_1483_, 0);
lean_dec(v_unused_1772_);
v___x_1699_ = v_value_1483_;
v_isShared_1700_ = v_isSharedCheck_1769_;
goto v_resetjp_1698_;
}
else
{
lean_dec(v_value_1483_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1769_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v_val_1701_; lean_object* v_fst_1702_; lean_object* v_snd_1703_; lean_object* v___x_1704_; 
v_val_1701_ = lean_ctor_get(v_a_1697_, 0);
lean_inc(v_val_1701_);
lean_dec_ref_known(v_a_1697_, 1);
v_fst_1702_ = lean_ctor_get(v_val_1701_, 0);
lean_inc_n(v_fst_1702_, 2);
v_snd_1703_ = lean_ctor_get(v_val_1701_, 1);
lean_inc(v_snd_1703_);
lean_dec(v_val_1701_);
v___x_1704_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(v_fst_1702_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; uint8_t v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1710_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1704_, 1);
v___x_1706_ = 0;
v___x_1707_ = lean_box(0);
v___x_1708_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4));
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 2, v___x_1708_);
lean_ctor_set(v___x_1699_, 1, v___x_1707_);
lean_ctor_set(v___x_1699_, 0, v_a_1705_);
v___x_1710_ = v___x_1699_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1705_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v___x_1707_);
lean_ctor_set(v_reuseFailAlloc_1760_, 2, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_1706_, v_fst_1702_, v___x_1710_, v___y_1693_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1713_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
v___x_1713_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_snd_1703_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1751_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1751_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1751_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
size_t v___x_1718_; size_t v___x_1719_; uint8_t v___x_1720_; 
v___x_1718_ = lean_ptr_addr(v_k_1482_);
v___x_1719_ = lean_ptr_addr(v_a_1714_);
v___x_1720_ = lean_usize_dec_eq(v___x_1718_, v___x_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1730_; 
v_isSharedCheck_1730_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1730_ == 0)
{
lean_object* v_unused_1731_; lean_object* v_unused_1732_; 
v_unused_1731_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1731_);
v_unused_1732_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1732_);
v___x_1722_ = v_code_1357_;
v_isShared_1723_ = v_isSharedCheck_1730_;
goto v_resetjp_1721_;
}
else
{
lean_dec(v_code_1357_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1730_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 1, v_a_1714_);
lean_ctor_set(v___x_1722_, 0, v_a_1712_);
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1712_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_a_1714_);
v___x_1725_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1727_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1725_);
v___x_1727_ = v___x_1716_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1725_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
else
{
size_t v___x_1733_; size_t v___x_1734_; uint8_t v___x_1735_; 
v___x_1733_ = lean_ptr_addr(v_decl_1481_);
v___x_1734_ = lean_ptr_addr(v_a_1712_);
v___x_1735_ = lean_usize_dec_eq(v___x_1733_, v___x_1734_);
if (v___x_1735_ == 0)
{
lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1745_; 
v_isSharedCheck_1745_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1745_ == 0)
{
lean_object* v_unused_1746_; lean_object* v_unused_1747_; 
v_unused_1746_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1746_);
v_unused_1747_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1747_);
v___x_1737_ = v_code_1357_;
v_isShared_1738_ = v_isSharedCheck_1745_;
goto v_resetjp_1736_;
}
else
{
lean_dec(v_code_1357_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1745_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
lean_ctor_set(v___x_1737_, 1, v_a_1714_);
lean_ctor_set(v___x_1737_, 0, v_a_1712_);
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1712_);
lean_ctor_set(v_reuseFailAlloc_1744_, 1, v_a_1714_);
v___x_1740_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1742_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1740_);
v___x_1742_ = v___x_1716_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
else
{
lean_object* v___x_1749_; 
lean_dec(v_a_1714_);
lean_dec(v_a_1712_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v_code_1357_);
v___x_1749_ = v___x_1716_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_code_1357_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
}
else
{
lean_dec(v_a_1712_);
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1713_;
}
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
lean_dec(v_snd_1703_);
lean_dec_ref_known(v_code_1357_, 2);
v_a_1752_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1754_ = v___x_1711_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_a_1752_);
lean_dec(v___x_1711_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_a_1752_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1768_; 
lean_dec(v_snd_1703_);
lean_dec(v_fst_1702_);
lean_del_object(v___x_1699_);
lean_dec_ref_known(v_code_1357_, 2);
v_a_1761_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1763_ = v___x_1704_;
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1704_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
}
else
{
lean_object* v___x_1773_; 
lean_dec(v_a_1697_);
v___x_1773_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue(v___x_1688_, v_value_1483_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; uint8_t v___x_1775_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref_known(v___x_1773_, 1);
v___x_1775_ = lean_unbox(v_a_1774_);
lean_dec(v_a_1774_);
if (v___x_1775_ == 0)
{
lean_object* v___x_1776_; 
lean_inc_ref(v_k_1482_);
v___x_1776_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_k_1482_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1814_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1779_ = v___x_1776_;
v_isShared_1780_ = v_isSharedCheck_1814_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1776_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1814_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
size_t v___x_1781_; size_t v___x_1782_; uint8_t v___x_1783_; 
v___x_1781_ = lean_ptr_addr(v_k_1482_);
v___x_1782_ = lean_ptr_addr(v_a_1777_);
v___x_1783_ = lean_usize_dec_eq(v___x_1781_, v___x_1782_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1793_; 
lean_inc_ref(v_decl_1481_);
v_isSharedCheck_1793_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1793_ == 0)
{
lean_object* v_unused_1794_; lean_object* v_unused_1795_; 
v_unused_1794_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1794_);
v_unused_1795_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1795_);
v___x_1785_ = v_code_1357_;
v_isShared_1786_ = v_isSharedCheck_1793_;
goto v_resetjp_1784_;
}
else
{
lean_dec(v_code_1357_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1793_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 1, v_a_1777_);
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_decl_1481_);
lean_ctor_set(v_reuseFailAlloc_1792_, 1, v_a_1777_);
v___x_1788_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
lean_object* v___x_1790_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v___x_1788_);
v___x_1790_ = v___x_1779_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v___x_1788_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
else
{
size_t v___x_1796_; size_t v___x_1797_; uint8_t v___x_1798_; 
v___x_1796_ = lean_ptr_addr(v_decl_1481_);
v___x_1797_ = lean_ptr_addr(v_decl_1481_);
v___x_1798_ = lean_usize_dec_eq(v___x_1796_, v___x_1797_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1808_; 
lean_inc_ref(v_decl_1481_);
v_isSharedCheck_1808_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1808_ == 0)
{
lean_object* v_unused_1809_; lean_object* v_unused_1810_; 
v_unused_1809_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1809_);
v_unused_1810_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1810_);
v___x_1800_ = v_code_1357_;
v_isShared_1801_ = v_isSharedCheck_1808_;
goto v_resetjp_1799_;
}
else
{
lean_dec(v_code_1357_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1808_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 1, v_a_1777_);
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_decl_1481_);
lean_ctor_set(v_reuseFailAlloc_1807_, 1, v_a_1777_);
v___x_1803_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
lean_object* v___x_1805_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v___x_1803_);
v___x_1805_ = v___x_1779_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v___x_1803_);
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
lean_object* v___x_1812_; 
lean_dec(v_a_1777_);
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v_code_1357_);
v___x_1812_ = v___x_1779_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_code_1357_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1776_;
}
}
else
{
lean_object* v___x_1815_; 
lean_inc_ref(v_decl_1481_);
v___x_1815_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(v_decl_1481_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; uint8_t v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_a_1816_);
lean_dec_ref_known(v___x_1815_, 1);
v___x_1817_ = 0;
v___x_1818_ = lean_box(0);
v___x_1819_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4));
v___x_1820_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1820_, 0, v_a_1816_);
lean_ctor_set(v___x_1820_, 1, v___x_1818_);
lean_ctor_set(v___x_1820_, 2, v___x_1819_);
lean_inc_ref(v_decl_1481_);
v___x_1821_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_1817_, v_decl_1481_, v___x_1820_, v___y_1693_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1823_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
lean_inc_ref(v_k_1482_);
v___x_1823_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_k_1482_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1861_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1826_ = v___x_1823_;
v_isShared_1827_ = v_isSharedCheck_1861_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1823_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1861_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
size_t v___x_1828_; size_t v___x_1829_; uint8_t v___x_1830_; 
v___x_1828_ = lean_ptr_addr(v_k_1482_);
v___x_1829_ = lean_ptr_addr(v_a_1824_);
v___x_1830_ = lean_usize_dec_eq(v___x_1828_, v___x_1829_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1840_; 
v_isSharedCheck_1840_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1840_ == 0)
{
lean_object* v_unused_1841_; lean_object* v_unused_1842_; 
v_unused_1841_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1841_);
v_unused_1842_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1842_);
v___x_1832_ = v_code_1357_;
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
else
{
lean_dec(v_code_1357_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 1, v_a_1824_);
lean_ctor_set(v___x_1832_, 0, v_a_1822_);
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1822_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_a_1824_);
v___x_1835_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1837_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1835_);
v___x_1837_ = v___x_1826_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1835_);
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
else
{
size_t v___x_1843_; size_t v___x_1844_; uint8_t v___x_1845_; 
v___x_1843_ = lean_ptr_addr(v_decl_1481_);
v___x_1844_ = lean_ptr_addr(v_a_1822_);
v___x_1845_ = lean_usize_dec_eq(v___x_1843_, v___x_1844_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1855_; 
v_isSharedCheck_1855_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1855_ == 0)
{
lean_object* v_unused_1856_; lean_object* v_unused_1857_; 
v_unused_1856_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1856_);
v_unused_1857_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1857_);
v___x_1847_ = v_code_1357_;
v_isShared_1848_ = v_isSharedCheck_1855_;
goto v_resetjp_1846_;
}
else
{
lean_dec(v_code_1357_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1855_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 1, v_a_1824_);
lean_ctor_set(v___x_1847_, 0, v_a_1822_);
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1822_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v_a_1824_);
v___x_1850_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
lean_object* v___x_1852_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1850_);
v___x_1852_ = v___x_1826_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1850_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
}
}
else
{
lean_object* v___x_1859_; 
lean_dec(v_a_1824_);
lean_dec(v_a_1822_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v_code_1357_);
v___x_1859_ = v___x_1826_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_code_1357_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
else
{
lean_dec(v_a_1822_);
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1823_;
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
lean_dec_ref_known(v_code_1357_, 2);
v_a_1862_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1821_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1821_);
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
lean_dec_ref_known(v_code_1357_, 2);
v_a_1870_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1815_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1815_);
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
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec_ref_known(v_code_1357_, 2);
v_a_1878_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1773_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1773_);
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
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec_ref_known(v_value_1483_, 3);
lean_dec_ref_known(v_code_1357_, 2);
v_a_1886_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1696_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1696_);
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
v___jp_1894_:
{
uint8_t v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = 0;
v___x_1903_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_1902_, v_sizeId_1895_, v___y_1899_);
lean_dec(v_sizeId_1895_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v___x_1903_, 1);
if (lean_obj_tag(v_a_1904_) == 1)
{
lean_object* v_val_1905_; 
v_val_1905_ = lean_ctor_get(v_a_1904_, 0);
lean_inc(v_val_1905_);
lean_dec_ref_known(v_a_1904_, 1);
if (lean_obj_tag(v_val_1905_) == 0)
{
lean_object* v_value_1906_; 
v_value_1906_ = lean_ctor_get(v_val_1905_, 0);
lean_inc_ref(v_value_1906_);
lean_dec_ref_known(v_val_1905_, 1);
if (lean_obj_tag(v_value_1906_) == 0)
{
lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_2016_; 
v_isSharedCheck_2016_ = !lean_is_exclusive(v_value_1483_);
if (v_isSharedCheck_2016_ == 0)
{
lean_object* v_unused_2017_; lean_object* v_unused_2018_; lean_object* v_unused_2019_; 
v_unused_2017_ = lean_ctor_get(v_value_1483_, 2);
lean_dec(v_unused_2017_);
v_unused_2018_ = lean_ctor_get(v_value_1483_, 1);
lean_dec(v_unused_2018_);
v_unused_2019_ = lean_ctor_get(v_value_1483_, 0);
lean_dec(v_unused_2019_);
v___x_1908_ = v_value_1483_;
v_isShared_1909_ = v_isSharedCheck_2016_;
goto v_resetjp_1907_;
}
else
{
lean_dec(v_value_1483_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_2016_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v_val_1910_; lean_object* v___x_1911_; uint8_t v___x_1912_; 
v_val_1910_ = lean_ctor_get(v_value_1906_, 0);
lean_inc(v_val_1910_);
lean_dec_ref_known(v_value_1906_, 1);
v___x_1911_ = lean_unsigned_to_nat(0u);
v___x_1912_ = lean_nat_dec_eq(v_val_1910_, v___x_1911_);
lean_dec(v_val_1910_);
if (v___x_1912_ == 0)
{
lean_object* v___x_1913_; 
lean_del_object(v___x_1908_);
lean_inc_ref(v_k_1482_);
v___x_1913_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_k_1482_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1951_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1916_ = v___x_1913_;
v_isShared_1917_ = v_isSharedCheck_1951_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1913_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1951_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
size_t v___x_1918_; size_t v___x_1919_; uint8_t v___x_1920_; 
v___x_1918_ = lean_ptr_addr(v_k_1482_);
v___x_1919_ = lean_ptr_addr(v_a_1914_);
v___x_1920_ = lean_usize_dec_eq(v___x_1918_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1930_; 
lean_inc_ref(v_decl_1481_);
v_isSharedCheck_1930_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1930_ == 0)
{
lean_object* v_unused_1931_; lean_object* v_unused_1932_; 
v_unused_1931_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1931_);
v_unused_1932_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1932_);
v___x_1922_ = v_code_1357_;
v_isShared_1923_ = v_isSharedCheck_1930_;
goto v_resetjp_1921_;
}
else
{
lean_dec(v_code_1357_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1930_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 1, v_a_1914_);
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_decl_1481_);
lean_ctor_set(v_reuseFailAlloc_1929_, 1, v_a_1914_);
v___x_1925_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
lean_object* v___x_1927_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v___x_1925_);
v___x_1927_ = v___x_1916_;
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
}
else
{
size_t v___x_1933_; size_t v___x_1934_; uint8_t v___x_1935_; 
v___x_1933_ = lean_ptr_addr(v_decl_1481_);
v___x_1934_ = lean_ptr_addr(v_decl_1481_);
v___x_1935_ = lean_usize_dec_eq(v___x_1933_, v___x_1934_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1945_; 
lean_inc_ref(v_decl_1481_);
v_isSharedCheck_1945_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1945_ == 0)
{
lean_object* v_unused_1946_; lean_object* v_unused_1947_; 
v_unused_1946_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1946_);
v_unused_1947_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1947_);
v___x_1937_ = v_code_1357_;
v_isShared_1938_ = v_isSharedCheck_1945_;
goto v_resetjp_1936_;
}
else
{
lean_dec(v_code_1357_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1945_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 1, v_a_1914_);
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_decl_1481_);
lean_ctor_set(v_reuseFailAlloc_1944_, 1, v_a_1914_);
v___x_1940_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
lean_object* v___x_1942_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v___x_1940_);
v___x_1942_ = v___x_1916_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
else
{
lean_object* v___x_1949_; 
lean_dec(v_a_1914_);
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v_code_1357_);
v___x_1949_ = v___x_1916_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_code_1357_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1913_;
}
}
else
{
lean_object* v___x_1952_; 
lean_inc_ref(v_decl_1481_);
v___x_1952_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(v_decl_1481_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1957_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1953_);
lean_dec_ref_known(v___x_1952_, 1);
v___x_1954_ = lean_box(0);
v___x_1955_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4));
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 2, v___x_1955_);
lean_ctor_set(v___x_1908_, 1, v___x_1954_);
lean_ctor_set(v___x_1908_, 0, v_a_1953_);
v___x_1957_ = v___x_1908_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_1953_);
lean_ctor_set(v_reuseFailAlloc_2007_, 1, v___x_1954_);
lean_ctor_set(v_reuseFailAlloc_2007_, 2, v___x_1955_);
v___x_1957_ = v_reuseFailAlloc_2007_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
lean_object* v___x_1958_; 
lean_inc_ref(v_decl_1481_);
v___x_1958_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_1902_, v_decl_1481_, v___x_1957_, v___y_1899_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___x_1960_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1958_, 1);
lean_inc_ref(v_k_1482_);
v___x_1960_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_k_1482_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1998_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1963_ = v___x_1960_;
v_isShared_1964_ = v_isSharedCheck_1998_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1960_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1998_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
size_t v___x_1965_; size_t v___x_1966_; uint8_t v___x_1967_; 
v___x_1965_ = lean_ptr_addr(v_k_1482_);
v___x_1966_ = lean_ptr_addr(v_a_1961_);
v___x_1967_ = lean_usize_dec_eq(v___x_1965_, v___x_1966_);
if (v___x_1967_ == 0)
{
lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1977_; 
v_isSharedCheck_1977_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1977_ == 0)
{
lean_object* v_unused_1978_; lean_object* v_unused_1979_; 
v_unused_1978_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1978_);
v_unused_1979_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1979_);
v___x_1969_ = v_code_1357_;
v_isShared_1970_ = v_isSharedCheck_1977_;
goto v_resetjp_1968_;
}
else
{
lean_dec(v_code_1357_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1977_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 1, v_a_1961_);
lean_ctor_set(v___x_1969_, 0, v_a_1959_);
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1959_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v_a_1961_);
v___x_1972_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1974_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_1972_);
v___x_1974_ = v___x_1963_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v___x_1972_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
else
{
size_t v___x_1980_; size_t v___x_1981_; uint8_t v___x_1982_; 
v___x_1980_ = lean_ptr_addr(v_decl_1481_);
v___x_1981_ = lean_ptr_addr(v_a_1959_);
v___x_1982_ = lean_usize_dec_eq(v___x_1980_, v___x_1981_);
if (v___x_1982_ == 0)
{
lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1992_; 
v_isSharedCheck_1992_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; lean_object* v_unused_1994_; 
v_unused_1993_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1993_);
v_unused_1994_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1994_);
v___x_1984_ = v_code_1357_;
v_isShared_1985_ = v_isSharedCheck_1992_;
goto v_resetjp_1983_;
}
else
{
lean_dec(v_code_1357_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1992_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v_a_1961_);
lean_ctor_set(v___x_1984_, 0, v_a_1959_);
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1959_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_a_1961_);
v___x_1987_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1989_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_1987_);
v___x_1989_ = v___x_1963_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
else
{
lean_object* v___x_1996_; 
lean_dec(v_a_1961_);
lean_dec(v_a_1959_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v_code_1357_);
v___x_1996_ = v___x_1963_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_code_1357_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
}
else
{
lean_dec(v_a_1959_);
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1960_;
}
}
else
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
lean_dec_ref_known(v_code_1357_, 2);
v_a_1999_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1958_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1958_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_del_object(v___x_1908_);
lean_dec_ref_known(v_code_1357_, 2);
v_a_2008_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1952_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1952_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_value_1906_);
v___y_1690_ = v___y_1896_;
v___y_1691_ = v___y_1897_;
v___y_1692_ = v___y_1898_;
v___y_1693_ = v___y_1899_;
v___y_1694_ = v___y_1900_;
v___y_1695_ = v___y_1901_;
goto v___jp_1689_;
}
}
else
{
lean_dec(v_val_1905_);
v___y_1690_ = v___y_1896_;
v___y_1691_ = v___y_1897_;
v___y_1692_ = v___y_1898_;
v___y_1693_ = v___y_1899_;
v___y_1694_ = v___y_1900_;
v___y_1695_ = v___y_1901_;
goto v___jp_1689_;
}
}
else
{
lean_dec(v_a_1904_);
v___y_1690_ = v___y_1896_;
v___y_1691_ = v___y_1897_;
v___y_1692_ = v___y_1898_;
v___y_1693_ = v___y_1899_;
v___y_1694_ = v___y_1900_;
v___y_1695_ = v___y_1901_;
goto v___jp_1689_;
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_dec_ref_known(v_value_1483_, 3);
lean_dec_ref_known(v_code_1357_, 2);
v_a_2020_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_1903_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_1903_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
}
else
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
}
else
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
}
else
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
}
else
{
v___y_1485_ = v_a_1358_;
v___y_1486_ = v_a_1359_;
v___y_1487_ = v_a_1360_;
v___y_1488_ = v_a_1361_;
v___y_1489_ = v_a_1362_;
v___y_1490_ = v_a_1363_;
goto v___jp_1484_;
}
v___jp_1484_:
{
lean_object* v___x_1491_; 
lean_inc_ref(v_k_1482_);
lean_inc_ref(v_decl_1481_);
v___x_1491_ = l_Lean_Compiler_LCNF_ExtractClosed_searchArrayLiteral(v_decl_1481_, v_k_1482_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v_a_1492_; 
v_a_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v___x_1491_, 1);
if (lean_obj_tag(v_a_1492_) == 1)
{
lean_object* v_val_1493_; lean_object* v_fst_1494_; lean_object* v_snd_1495_; lean_object* v___x_1496_; 
lean_dec(v_value_1483_);
v_val_1493_ = lean_ctor_get(v_a_1492_, 0);
lean_inc(v_val_1493_);
lean_dec_ref_known(v_a_1492_, 1);
v_fst_1494_ = lean_ctor_get(v_val_1493_, 0);
lean_inc_n(v_fst_1494_, 2);
v_snd_1495_ = lean_ctor_get(v_val_1493_, 1);
lean_inc(v_snd_1495_);
lean_dec(v_val_1493_);
v___x_1496_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(v_fst_1494_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; uint8_t v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1496_, 1);
v___x_1498_ = 0;
v___x_1499_ = lean_box(0);
v___x_1500_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4));
v___x_1501_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1501_, 0, v_a_1497_);
lean_ctor_set(v___x_1501_, 1, v___x_1499_);
lean_ctor_set(v___x_1501_, 2, v___x_1500_);
v___x_1502_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_1498_, v_fst_1494_, v___x_1501_, v___y_1488_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1504_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1503_);
lean_dec_ref_known(v___x_1502_, 1);
v___x_1504_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_snd_1495_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1542_; 
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1507_ = v___x_1504_;
v_isShared_1508_ = v_isSharedCheck_1542_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1504_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1542_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
size_t v___x_1509_; size_t v___x_1510_; uint8_t v___x_1511_; 
v___x_1509_ = lean_ptr_addr(v_k_1482_);
v___x_1510_ = lean_ptr_addr(v_a_1505_);
v___x_1511_ = lean_usize_dec_eq(v___x_1509_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1521_; 
v_isSharedCheck_1521_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1521_ == 0)
{
lean_object* v_unused_1522_; lean_object* v_unused_1523_; 
v_unused_1522_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1522_);
v_unused_1523_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1523_);
v___x_1513_ = v_code_1357_;
v_isShared_1514_ = v_isSharedCheck_1521_;
goto v_resetjp_1512_;
}
else
{
lean_dec(v_code_1357_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1521_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 1, v_a_1505_);
lean_ctor_set(v___x_1513_, 0, v_a_1503_);
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1503_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v_a_1505_);
v___x_1516_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1518_; 
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1516_);
v___x_1518_ = v___x_1507_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
else
{
size_t v___x_1524_; size_t v___x_1525_; uint8_t v___x_1526_; 
v___x_1524_ = lean_ptr_addr(v_decl_1481_);
v___x_1525_ = lean_ptr_addr(v_a_1503_);
v___x_1526_ = lean_usize_dec_eq(v___x_1524_, v___x_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1536_; 
v_isSharedCheck_1536_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1536_ == 0)
{
lean_object* v_unused_1537_; lean_object* v_unused_1538_; 
v_unused_1537_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1537_);
v_unused_1538_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1538_);
v___x_1528_ = v_code_1357_;
v_isShared_1529_ = v_isSharedCheck_1536_;
goto v_resetjp_1527_;
}
else
{
lean_dec(v_code_1357_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1536_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 1, v_a_1505_);
lean_ctor_set(v___x_1528_, 0, v_a_1503_);
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1503_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v_a_1505_);
v___x_1531_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1533_; 
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1531_);
v___x_1533_ = v___x_1507_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
else
{
lean_object* v___x_1540_; 
lean_dec(v_a_1505_);
lean_dec(v_a_1503_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v_code_1357_);
v___x_1540_ = v___x_1507_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_code_1357_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
else
{
lean_dec(v_a_1503_);
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1504_;
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec(v_snd_1495_);
lean_dec_ref_known(v_code_1357_, 2);
v_a_1543_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1502_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1502_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
else
{
lean_object* v_a_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
lean_dec(v_snd_1495_);
lean_dec(v_fst_1494_);
lean_dec_ref_known(v_code_1357_, 2);
v_a_1551_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1553_ = v___x_1496_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_a_1551_);
lean_dec(v___x_1496_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_a_1551_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
else
{
uint8_t v___x_1559_; lean_object* v___x_1560_; 
lean_dec(v_a_1492_);
v___x_1559_ = 1;
v___x_1560_ = l_Lean_Compiler_LCNF_ExtractClosed_shouldExtractLetValue(v___x_1559_, v_value_1483_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1561_; uint8_t v___x_1562_; 
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1561_);
lean_dec_ref_known(v___x_1560_, 1);
v___x_1562_ = lean_unbox(v_a_1561_);
lean_dec(v_a_1561_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; 
lean_inc_ref(v_k_1482_);
v___x_1563_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_k_1482_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1601_; 
v_a_1564_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1566_ = v___x_1563_;
v_isShared_1567_ = v_isSharedCheck_1601_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1563_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1601_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
size_t v___x_1568_; size_t v___x_1569_; uint8_t v___x_1570_; 
v___x_1568_ = lean_ptr_addr(v_k_1482_);
v___x_1569_ = lean_ptr_addr(v_a_1564_);
v___x_1570_ = lean_usize_dec_eq(v___x_1568_, v___x_1569_);
if (v___x_1570_ == 0)
{
lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1580_; 
lean_inc_ref(v_decl_1481_);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1580_ == 0)
{
lean_object* v_unused_1581_; lean_object* v_unused_1582_; 
v_unused_1581_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1581_);
v_unused_1582_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1582_);
v___x_1572_ = v_code_1357_;
v_isShared_1573_ = v_isSharedCheck_1580_;
goto v_resetjp_1571_;
}
else
{
lean_dec(v_code_1357_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1580_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 1, v_a_1564_);
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_decl_1481_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v_a_1564_);
v___x_1575_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
lean_object* v___x_1577_; 
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 0, v___x_1575_);
v___x_1577_ = v___x_1566_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___x_1575_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
else
{
size_t v___x_1583_; size_t v___x_1584_; uint8_t v___x_1585_; 
v___x_1583_ = lean_ptr_addr(v_decl_1481_);
v___x_1584_ = lean_ptr_addr(v_decl_1481_);
v___x_1585_ = lean_usize_dec_eq(v___x_1583_, v___x_1584_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1595_; 
lean_inc_ref(v_decl_1481_);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; lean_object* v_unused_1597_; 
v_unused_1596_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1596_);
v_unused_1597_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1597_);
v___x_1587_ = v_code_1357_;
v_isShared_1588_ = v_isSharedCheck_1595_;
goto v_resetjp_1586_;
}
else
{
lean_dec(v_code_1357_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1595_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 1, v_a_1564_);
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_decl_1481_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v_a_1564_);
v___x_1590_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1592_; 
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 0, v___x_1590_);
v___x_1592_ = v___x_1566_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v___x_1590_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
}
else
{
lean_object* v___x_1599_; 
lean_dec(v_a_1564_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 0, v_code_1357_);
v___x_1599_ = v___x_1566_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_code_1357_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1563_;
}
}
else
{
lean_object* v___x_1602_; 
lean_inc_ref(v_decl_1481_);
v___x_1602_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction(v_decl_1481_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; uint8_t v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1604_ = 0;
v___x_1605_ = lean_box(0);
v___x_1606_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__4));
v___x_1607_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1607_, 0, v_a_1603_);
lean_ctor_set(v___x_1607_, 1, v___x_1605_);
lean_ctor_set(v___x_1607_, 2, v___x_1606_);
lean_inc_ref(v_decl_1481_);
v___x_1608_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_1604_, v_decl_1481_, v___x_1607_, v___y_1488_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; lean_object* v___x_1610_; 
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
lean_inc(v_a_1609_);
lean_dec_ref_known(v___x_1608_, 1);
lean_inc_ref(v_k_1482_);
v___x_1610_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_k_1482_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1648_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1648_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1648_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
size_t v___x_1615_; size_t v___x_1616_; uint8_t v___x_1617_; 
v___x_1615_ = lean_ptr_addr(v_k_1482_);
v___x_1616_ = lean_ptr_addr(v_a_1611_);
v___x_1617_ = lean_usize_dec_eq(v___x_1615_, v___x_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1627_; 
v_isSharedCheck_1627_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1627_ == 0)
{
lean_object* v_unused_1628_; lean_object* v_unused_1629_; 
v_unused_1628_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1628_);
v_unused_1629_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1629_);
v___x_1619_ = v_code_1357_;
v_isShared_1620_ = v_isSharedCheck_1627_;
goto v_resetjp_1618_;
}
else
{
lean_dec(v_code_1357_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1627_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 1, v_a_1611_);
lean_ctor_set(v___x_1619_, 0, v_a_1609_);
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1609_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v_a_1611_);
v___x_1622_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
lean_object* v___x_1624_; 
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1622_);
v___x_1624_ = v___x_1613_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
else
{
size_t v___x_1630_; size_t v___x_1631_; uint8_t v___x_1632_; 
v___x_1630_ = lean_ptr_addr(v_decl_1481_);
v___x_1631_ = lean_ptr_addr(v_a_1609_);
v___x_1632_ = lean_usize_dec_eq(v___x_1630_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1642_; 
v_isSharedCheck_1642_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1642_ == 0)
{
lean_object* v_unused_1643_; lean_object* v_unused_1644_; 
v_unused_1643_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1643_);
v_unused_1644_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1644_);
v___x_1634_ = v_code_1357_;
v_isShared_1635_ = v_isSharedCheck_1642_;
goto v_resetjp_1633_;
}
else
{
lean_dec(v_code_1357_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1642_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 1, v_a_1611_);
lean_ctor_set(v___x_1634_, 0, v_a_1609_);
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_a_1609_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_a_1611_);
v___x_1637_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
lean_object* v___x_1639_; 
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1637_);
v___x_1639_ = v___x_1613_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
else
{
lean_object* v___x_1646_; 
lean_dec(v_a_1611_);
lean_dec(v_a_1609_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v_code_1357_);
v___x_1646_ = v___x_1613_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_code_1357_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
}
else
{
lean_dec(v_a_1609_);
lean_dec_ref_known(v_code_1357_, 2);
return v___x_1610_;
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec_ref_known(v_code_1357_, 2);
v_a_1649_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1608_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1608_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec_ref_known(v_code_1357_, 2);
v_a_1657_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1602_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1602_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
lean_dec_ref_known(v_code_1357_, 2);
v_a_1665_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1560_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1560_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec(v_value_1483_);
lean_dec_ref_known(v_code_1357_, 2);
v_a_1673_ = lean_ctor_get(v___x_1491_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1491_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1491_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
}
case 1:
{
lean_object* v_decl_2044_; lean_object* v_k_2045_; 
v_decl_2044_ = lean_ctor_get(v_code_1357_, 0);
v_k_2045_ = lean_ctor_get(v_code_1357_, 1);
lean_inc_ref(v_k_2045_);
lean_inc_ref(v_decl_2044_);
v_decl_1366_ = v_decl_2044_;
v_k_1367_ = v_k_2045_;
v___y_1368_ = v_a_1358_;
v___y_1369_ = v_a_1359_;
v___y_1370_ = v_a_1360_;
v___y_1371_ = v_a_1361_;
v___y_1372_ = v_a_1362_;
v___y_1373_ = v_a_1363_;
goto v___jp_1365_;
}
case 2:
{
lean_object* v_decl_2046_; lean_object* v_k_2047_; 
v_decl_2046_ = lean_ctor_get(v_code_1357_, 0);
v_k_2047_ = lean_ctor_get(v_code_1357_, 1);
lean_inc_ref(v_k_2047_);
lean_inc_ref(v_decl_2046_);
v_decl_1366_ = v_decl_2046_;
v_k_1367_ = v_k_2047_;
v___y_1368_ = v_a_1358_;
v___y_1369_ = v_a_1359_;
v___y_1370_ = v_a_1360_;
v___y_1371_ = v_a_1361_;
v___y_1372_ = v_a_1362_;
v___y_1373_ = v_a_1363_;
goto v___jp_1365_;
}
case 4:
{
lean_object* v_cases_2048_; lean_object* v_typeName_2049_; lean_object* v_resultType_2050_; lean_object* v_discr_2051_; lean_object* v_alts_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2091_; 
v_cases_2048_ = lean_ctor_get(v_code_1357_, 0);
lean_inc_ref(v_cases_2048_);
v_typeName_2049_ = lean_ctor_get(v_cases_2048_, 0);
v_resultType_2050_ = lean_ctor_get(v_cases_2048_, 1);
v_discr_2051_ = lean_ctor_get(v_cases_2048_, 2);
v_alts_2052_ = lean_ctor_get(v_cases_2048_, 3);
v_isSharedCheck_2091_ = !lean_is_exclusive(v_cases_2048_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2054_ = v_cases_2048_;
v_isShared_2055_ = v_isSharedCheck_2091_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_alts_2052_);
lean_inc(v_discr_2051_);
lean_inc(v_resultType_2050_);
lean_inc(v_typeName_2049_);
lean_dec(v_cases_2048_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2091_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_2052_);
v___x_2057_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__1(v___x_2056_, v_alts_2052_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_, v_a_1363_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2082_; 
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2060_ = v___x_2057_;
v_isShared_2061_ = v_isSharedCheck_2082_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2057_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2082_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
size_t v___x_2062_; size_t v___x_2063_; uint8_t v___x_2064_; 
v___x_2062_ = lean_ptr_addr(v_alts_2052_);
lean_dec_ref(v_alts_2052_);
v___x_2063_ = lean_ptr_addr(v_a_2058_);
v___x_2064_ = lean_usize_dec_eq(v___x_2062_, v___x_2063_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2077_; 
v_isSharedCheck_2077_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_2077_ == 0)
{
lean_object* v_unused_2078_; 
v_unused_2078_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_2078_);
v___x_2066_ = v_code_1357_;
v_isShared_2067_ = v_isSharedCheck_2077_;
goto v_resetjp_2065_;
}
else
{
lean_dec(v_code_1357_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2077_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 3, v_a_2058_);
v___x_2069_ = v___x_2054_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_typeName_2049_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v_resultType_2050_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_discr_2051_);
lean_ctor_set(v_reuseFailAlloc_2076_, 3, v_a_2058_);
v___x_2069_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
lean_object* v___x_2071_; 
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 0, v___x_2069_);
v___x_2071_ = v___x_2066_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2069_);
v___x_2071_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
lean_object* v___x_2073_; 
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 0, v___x_2071_);
v___x_2073_ = v___x_2060_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2071_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
}
}
else
{
lean_object* v___x_2080_; 
lean_dec(v_a_2058_);
lean_del_object(v___x_2054_);
lean_dec(v_discr_2051_);
lean_dec_ref(v_resultType_2050_);
lean_dec(v_typeName_2049_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 0, v_code_1357_);
v___x_2080_ = v___x_2060_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_code_1357_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_del_object(v___x_2054_);
lean_dec_ref(v_alts_2052_);
lean_dec(v_discr_2051_);
lean_dec_ref(v_resultType_2050_);
lean_dec(v_typeName_2049_);
lean_dec_ref_known(v_code_1357_, 1);
v_a_2083_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2057_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2057_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
}
default: 
{
lean_object* v___x_2092_; 
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v_code_1357_);
return v___x_2092_;
}
}
v___jp_1365_:
{
lean_object* v_params_1374_; lean_object* v_type_1375_; lean_object* v_value_1376_; uint8_t v___x_1377_; lean_object* v___x_1378_; 
v_params_1374_ = lean_ctor_get(v_decl_1366_, 2);
lean_inc_ref(v_params_1374_);
v_type_1375_ = lean_ctor_get(v_decl_1366_, 3);
lean_inc_ref(v_type_1375_);
v_value_1376_ = lean_ctor_get(v_decl_1366_, 4);
v___x_1377_ = 0;
lean_inc_ref(v_value_1376_);
v___x_1378_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_value_1376_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1380_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v___x_1380_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1377_, v_decl_1366_, v_type_1375_, v_params_1374_, v_a_1379_, v___y_1371_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v_a_1381_; lean_object* v___x_1382_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v___x_1380_, 1);
v___x_1382_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_k_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
if (lean_obj_tag(v___x_1382_) == 0)
{
switch(lean_obj_tag(v_code_1357_))
{
case 1:
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1422_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1385_ = v___x_1382_;
v_isShared_1386_ = v_isSharedCheck_1422_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1382_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1422_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v_decl_1387_; lean_object* v_k_1388_; size_t v___x_1389_; size_t v___x_1390_; uint8_t v___x_1391_; 
v_decl_1387_ = lean_ctor_get(v_code_1357_, 0);
v_k_1388_ = lean_ctor_get(v_code_1357_, 1);
v___x_1389_ = lean_ptr_addr(v_k_1388_);
v___x_1390_ = lean_ptr_addr(v_a_1383_);
v___x_1391_ = lean_usize_dec_eq(v___x_1389_, v___x_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1401_; 
v_isSharedCheck_1401_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1401_ == 0)
{
lean_object* v_unused_1402_; lean_object* v_unused_1403_; 
v_unused_1402_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1402_);
v_unused_1403_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1403_);
v___x_1393_ = v_code_1357_;
v_isShared_1394_ = v_isSharedCheck_1401_;
goto v_resetjp_1392_;
}
else
{
lean_dec(v_code_1357_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1401_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 1, v_a_1383_);
lean_ctor_set(v___x_1393_, 0, v_a_1381_);
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_a_1381_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_a_1383_);
v___x_1396_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
lean_object* v___x_1398_; 
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1396_);
v___x_1398_ = v___x_1385_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
else
{
size_t v___x_1404_; size_t v___x_1405_; uint8_t v___x_1406_; 
v___x_1404_ = lean_ptr_addr(v_decl_1387_);
v___x_1405_ = lean_ptr_addr(v_a_1381_);
v___x_1406_ = lean_usize_dec_eq(v___x_1404_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1416_; 
v_isSharedCheck_1416_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; lean_object* v_unused_1418_; 
v_unused_1417_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1418_);
v___x_1408_ = v_code_1357_;
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
else
{
lean_dec(v_code_1357_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 1, v_a_1383_);
lean_ctor_set(v___x_1408_, 0, v_a_1381_);
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1381_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_a_1383_);
v___x_1411_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1413_; 
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1411_);
v___x_1413_ = v___x_1385_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
else
{
lean_object* v___x_1420_; 
lean_dec(v_a_1383_);
lean_dec(v_a_1381_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v_code_1357_);
v___x_1420_ = v___x_1385_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_code_1357_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
case 2:
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1462_; 
v_a_1423_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1425_ = v___x_1382_;
v_isShared_1426_ = v_isSharedCheck_1462_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1382_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1462_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v_decl_1427_; lean_object* v_k_1428_; size_t v___x_1429_; size_t v___x_1430_; uint8_t v___x_1431_; 
v_decl_1427_ = lean_ctor_get(v_code_1357_, 0);
v_k_1428_ = lean_ctor_get(v_code_1357_, 1);
v___x_1429_ = lean_ptr_addr(v_k_1428_);
v___x_1430_ = lean_ptr_addr(v_a_1423_);
v___x_1431_ = lean_usize_dec_eq(v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1441_; 
v_isSharedCheck_1441_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; lean_object* v_unused_1443_; 
v_unused_1442_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1442_);
v_unused_1443_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1443_);
v___x_1433_ = v_code_1357_;
v_isShared_1434_ = v_isSharedCheck_1441_;
goto v_resetjp_1432_;
}
else
{
lean_dec(v_code_1357_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1441_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 1, v_a_1423_);
lean_ctor_set(v___x_1433_, 0, v_a_1381_);
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1381_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_a_1423_);
v___x_1436_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1438_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1436_);
v___x_1438_ = v___x_1425_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
else
{
size_t v___x_1444_; size_t v___x_1445_; uint8_t v___x_1446_; 
v___x_1444_ = lean_ptr_addr(v_decl_1427_);
v___x_1445_ = lean_ptr_addr(v_a_1381_);
v___x_1446_ = lean_usize_dec_eq(v___x_1444_, v___x_1445_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1456_; 
v_isSharedCheck_1456_ = !lean_is_exclusive(v_code_1357_);
if (v_isSharedCheck_1456_ == 0)
{
lean_object* v_unused_1457_; lean_object* v_unused_1458_; 
v_unused_1457_ = lean_ctor_get(v_code_1357_, 1);
lean_dec(v_unused_1457_);
v_unused_1458_ = lean_ctor_get(v_code_1357_, 0);
lean_dec(v_unused_1458_);
v___x_1448_ = v_code_1357_;
v_isShared_1449_ = v_isSharedCheck_1456_;
goto v_resetjp_1447_;
}
else
{
lean_dec(v_code_1357_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1456_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 1, v_a_1423_);
lean_ctor_set(v___x_1448_, 0, v_a_1381_);
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1381_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_a_1423_);
v___x_1451_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1453_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1451_);
v___x_1453_ = v___x_1425_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
else
{
lean_object* v___x_1460_; 
lean_dec(v_a_1423_);
lean_dec(v_a_1381_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_code_1357_);
v___x_1460_ = v___x_1425_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_code_1357_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
default: 
{
lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1471_; 
lean_dec(v_a_1381_);
lean_dec_ref(v_code_1357_);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1471_ == 0)
{
lean_object* v_unused_1472_; 
v_unused_1472_ = lean_ctor_get(v___x_1382_, 0);
lean_dec(v_unused_1472_);
v___x_1464_ = v___x_1382_;
v_isShared_1465_ = v_isSharedCheck_1471_;
goto v_resetjp_1463_;
}
else
{
lean_dec(v___x_1382_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1471_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1466_ = lean_obj_once(&l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__3, &l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__3_once, _init_l_Lean_Compiler_LCNF_ExtractClosed_visitCode___closed__3);
v___x_1467_ = l_panic___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__0(v___x_1466_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1467_);
v___x_1469_ = v___x_1464_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
else
{
lean_dec(v_a_1381_);
lean_dec_ref(v_code_1357_);
return v___x_1382_;
}
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
lean_dec_ref(v_k_1367_);
lean_dec_ref(v_code_1357_);
v_a_1473_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1380_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1380_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1473_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
else
{
lean_dec_ref(v_type_1375_);
lean_dec_ref(v_params_1374_);
lean_dec_ref(v_k_1367_);
lean_dec_ref(v_decl_1366_);
lean_dec_ref(v_code_1357_);
return v___x_1378_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__1(lean_object* v_i_2093_, lean_object* v_as_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
lean_object* v___x_2102_; uint8_t v___x_2103_; 
v___x_2102_ = lean_array_get_size(v_as_2094_);
v___x_2103_ = lean_nat_dec_lt(v_i_2093_, v___x_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; 
lean_dec(v_i_2093_);
v___x_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2104_, 0, v_as_2094_);
return v___x_2104_;
}
else
{
lean_object* v_a_2105_; lean_object* v___y_2107_; 
v_a_2105_ = lean_array_fget_borrowed(v_as_2094_, v_i_2093_);
switch(lean_obj_tag(v_a_2105_))
{
case 0:
{
lean_object* v_code_2129_; 
v_code_2129_ = lean_ctor_get(v_a_2105_, 2);
lean_inc_ref(v_code_2129_);
v___y_2107_ = v_code_2129_;
goto v___jp_2106_;
}
case 1:
{
lean_object* v_code_2130_; 
v_code_2130_ = lean_ctor_get(v_a_2105_, 1);
lean_inc_ref(v_code_2130_);
v___y_2107_ = v_code_2130_;
goto v___jp_2106_;
}
default: 
{
lean_object* v_code_2131_; 
v_code_2131_ = lean_ctor_get(v_a_2105_, 0);
lean_inc_ref(v_code_2131_);
v___y_2107_ = v_code_2131_;
goto v___jp_2106_;
}
}
v___jp_2106_:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v___y_2107_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; lean_object* v___x_2110_; size_t v___x_2111_; size_t v___x_2112_; uint8_t v___x_2113_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
lean_inc(v_a_2105_);
v___x_2110_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2105_, v_a_2109_);
v___x_2111_ = lean_ptr_addr(v_a_2105_);
v___x_2112_ = lean_ptr_addr(v___x_2110_);
v___x_2113_ = lean_usize_dec_eq(v___x_2111_, v___x_2112_);
if (v___x_2113_ == 0)
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2114_ = lean_unsigned_to_nat(1u);
v___x_2115_ = lean_nat_add(v_i_2093_, v___x_2114_);
v___x_2116_ = lean_array_fset(v_as_2094_, v_i_2093_, v___x_2110_);
lean_dec(v_i_2093_);
v_i_2093_ = v___x_2115_;
v_as_2094_ = v___x_2116_;
goto _start;
}
else
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
lean_dec_ref(v___x_2110_);
v___x_2118_ = lean_unsigned_to_nat(1u);
v___x_2119_ = lean_nat_add(v_i_2093_, v___x_2118_);
lean_dec(v_i_2093_);
v_i_2093_ = v___x_2119_;
goto _start;
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec_ref(v_as_2094_);
lean_dec(v_i_2093_);
v_a_2121_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2108_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2108_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__1___boxed(lean_object* v_i_2132_, lean_object* v_as_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ExtractClosed_visitCode_spec__1(v_i_2132_, v_as_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitCode___boxed(lean_object* v_code_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l_Lean_Compiler_LCNF_ExtractClosed_visitCode(v_code_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_);
lean_dec(v_a_2148_);
lean_dec_ref(v_a_2147_);
lean_dec(v_a_2146_);
lean_dec_ref(v_a_2145_);
lean_dec(v_a_2144_);
lean_dec_ref(v_a_2143_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___redArg(lean_object* v_f_2151_, lean_object* v_v_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
if (lean_obj_tag(v_v_2152_) == 0)
{
lean_object* v_code_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2184_; 
v_code_2160_ = lean_ctor_get(v_v_2152_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_v_2152_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2162_ = v_v_2152_;
v_isShared_2163_ = v_isSharedCheck_2184_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_code_2160_);
lean_dec(v_v_2152_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2184_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; 
lean_inc(v___y_2158_);
lean_inc_ref(v___y_2157_);
lean_inc(v___y_2156_);
lean_inc_ref(v___y_2155_);
lean_inc(v___y_2154_);
lean_inc_ref(v___y_2153_);
v___x_2164_ = lean_apply_8(v_f_2151_, v_code_2160_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, lean_box(0));
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2175_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2167_ = v___x_2164_;
v_isShared_2168_ = v_isSharedCheck_2175_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2164_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2175_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 0, v_a_2165_);
v___x_2170_ = v___x_2162_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
lean_object* v___x_2172_; 
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 0, v___x_2170_);
v___x_2172_ = v___x_2167_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2170_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_del_object(v___x_2162_);
v_a_2176_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2164_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2164_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
}
else
{
lean_object* v___x_2185_; 
lean_dec_ref(v_f_2151_);
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_v_2152_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___redArg___boxed(lean_object* v_f_2186_, lean_object* v_v_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___redArg(v_f_2186_, v_v_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0(uint8_t v_pu_2196_, lean_object* v_f_2197_, lean_object* v_v_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___redArg(v_f_2197_, v_v_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___boxed(lean_object* v_pu_2207_, lean_object* v_f_2208_, lean_object* v_v_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
uint8_t v_pu_boxed_2217_; lean_object* v_res_2218_; 
v_pu_boxed_2217_ = lean_unbox(v_pu_2207_);
v_res_2218_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0(v_pu_boxed_2217_, v_f_2208_, v_v_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
lean_dec(v___y_2215_);
lean_dec_ref(v___y_2214_);
lean_dec(v___y_2213_);
lean_dec_ref(v___y_2212_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitDecl(lean_object* v_decl_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_toSignature_2228_; lean_object* v_value_2229_; uint8_t v_recursive_2230_; lean_object* v_inlineAttr_x3f_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2256_; 
v_toSignature_2228_ = lean_ctor_get(v_decl_2220_, 0);
v_value_2229_ = lean_ctor_get(v_decl_2220_, 1);
v_recursive_2230_ = lean_ctor_get_uint8(v_decl_2220_, sizeof(void*)*3);
v_inlineAttr_x3f_2231_ = lean_ctor_get(v_decl_2220_, 2);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_decl_2220_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2233_ = v_decl_2220_;
v_isShared_2234_ = v_isSharedCheck_2256_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_inlineAttr_x3f_2231_);
lean_inc(v_value_2229_);
lean_inc(v_toSignature_2228_);
lean_dec(v_decl_2220_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2256_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = ((lean_object*)(l_Lean_Compiler_LCNF_ExtractClosed_visitDecl___closed__0));
v___x_2236_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_ExtractClosed_visitDecl_spec__0___redArg(v___x_2235_, v_value_2229_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2247_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2239_ = v___x_2236_;
v_isShared_2240_ = v_isSharedCheck_2247_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___x_2236_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2247_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2234_ == 0)
{
lean_ctor_set(v___x_2233_, 1, v_a_2237_);
v___x_2242_ = v___x_2233_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_toSignature_2228_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_a_2237_);
lean_ctor_set(v_reuseFailAlloc_2246_, 2, v_inlineAttr_x3f_2231_);
lean_ctor_set_uint8(v_reuseFailAlloc_2246_, sizeof(void*)*3, v_recursive_2230_);
v___x_2242_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
lean_object* v___x_2244_; 
if (v_isShared_2240_ == 0)
{
lean_ctor_set(v___x_2239_, 0, v___x_2242_);
v___x_2244_ = v___x_2239_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v___x_2242_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_del_object(v___x_2233_);
lean_dec(v_inlineAttr_x3f_2231_);
lean_dec_ref(v_toSignature_2228_);
v_a_2248_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2236_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2236_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2248_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ExtractClosed_visitDecl___boxed(lean_object* v_decl_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Lean_Compiler_LCNF_ExtractClosed_visitDecl(v_decl_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
lean_dec(v_a_2263_);
lean_dec_ref(v_a_2262_);
lean_dec(v_a_2261_);
lean_dec_ref(v_a_2260_);
lean_dec(v_a_2259_);
lean_dec_ref(v_a_2258_);
return v_res_2265_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_extractClosed___closed__1(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2, &l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_ExtractClosed_visitCode_performExtraction___closed__2);
v___x_2269_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_extractClosed___closed__0));
v___x_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v___x_2268_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extractClosed(lean_object* v_decl_2271_, lean_object* v_sccDecls_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_){
_start:
{
lean_object* v_toSignature_2278_; lean_object* v_name_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v_toSignature_2278_ = lean_ctor_get(v_decl_2271_, 0);
v_name_2279_ = lean_ctor_get(v_toSignature_2278_, 0);
lean_inc(v_name_2279_);
v___x_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2280_, 0, v_name_2279_);
lean_ctor_set(v___x_2280_, 1, v_sccDecls_2272_);
v___x_2281_ = lean_unsigned_to_nat(0u);
v___x_2282_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_extractClosed___closed__1, &l_Lean_Compiler_LCNF_Decl_extractClosed___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_extractClosed___closed__1);
v___x_2283_ = lean_st_mk_ref(v___x_2282_);
v___x_2284_ = l_Lean_Compiler_LCNF_ExtractClosed_visitDecl(v_decl_2271_, v___x_2280_, v___x_2283_, v_a_2273_, v_a_2274_, v_a_2275_, v_a_2276_);
lean_dec_ref_known(v___x_2280_, 2);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2310_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2310_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2310_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2289_; lean_object* v_decls_2290_; lean_object* v_decl_2292_; lean_object* v___x_2297_; uint8_t v___x_2298_; 
v___x_2289_ = lean_st_ref_get(v___x_2283_);
lean_dec(v___x_2283_);
v_decls_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc_ref(v_decls_2290_);
lean_dec(v___x_2289_);
v___x_2297_ = lean_array_get_size(v_decls_2290_);
v___x_2298_ = lean_nat_dec_eq(v___x_2297_, v___x_2281_);
if (v___x_2298_ == 0)
{
uint8_t v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = 0;
v___x_2300_ = l_Lean_Compiler_LCNF_Decl_elimDeadVars(v___x_2299_, v_a_2285_, v_a_2273_, v_a_2274_, v_a_2275_, v_a_2276_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2300_, 1);
v_decl_2292_ = v_a_2301_;
goto v___jp_2291_;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec_ref(v_decls_2290_);
lean_del_object(v___x_2287_);
v_a_2302_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2300_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2300_);
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
else
{
v_decl_2292_ = v_a_2285_;
goto v___jp_2291_;
}
v___jp_2291_:
{
lean_object* v___x_2293_; lean_object* v___x_2295_; 
v___x_2293_ = lean_array_push(v_decls_2290_, v_decl_2292_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2293_);
v___x_2295_ = v___x_2287_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v___x_2293_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec(v___x_2283_);
v_a_2311_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2284_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2284_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extractClosed___boxed(lean_object* v_decl_2319_, lean_object* v_sccDecls_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_Compiler_LCNF_Decl_extractClosed(v_decl_2319_, v_sccDecls_2320_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_);
lean_dec(v_a_2324_);
lean_dec_ref(v_a_2323_);
lean_dec(v_a_2322_);
lean_dec_ref(v_a_2321_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_extractClosed_spec__0(lean_object* v_decls_2327_, lean_object* v_as_2328_, size_t v_i_2329_, size_t v_stop_2330_, lean_object* v_b_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_){
_start:
{
uint8_t v___x_2337_; 
v___x_2337_ = lean_usize_dec_eq(v_i_2329_, v_stop_2330_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2338_ = lean_array_uget_borrowed(v_as_2328_, v_i_2329_);
lean_inc_ref(v_decls_2327_);
lean_inc(v___x_2338_);
v___x_2339_ = l_Lean_Compiler_LCNF_Decl_extractClosed(v___x_2338_, v_decls_2327_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2341_; size_t v___x_2342_; size_t v___x_2343_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v___x_2341_ = l_Array_append___redArg(v_b_2331_, v_a_2340_);
lean_dec(v_a_2340_);
v___x_2342_ = ((size_t)1ULL);
v___x_2343_ = lean_usize_add(v_i_2329_, v___x_2342_);
v_i_2329_ = v___x_2343_;
v_b_2331_ = v___x_2341_;
goto _start;
}
else
{
lean_dec_ref(v_b_2331_);
lean_dec_ref(v_decls_2327_);
return v___x_2339_;
}
}
else
{
lean_object* v___x_2345_; 
lean_dec_ref(v_decls_2327_);
v___x_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2345_, 0, v_b_2331_);
return v___x_2345_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_extractClosed_spec__0___boxed(lean_object* v_decls_2346_, lean_object* v_as_2347_, lean_object* v_i_2348_, lean_object* v_stop_2349_, lean_object* v_b_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
size_t v_i_boxed_2356_; size_t v_stop_boxed_2357_; lean_object* v_res_2358_; 
v_i_boxed_2356_ = lean_unbox_usize(v_i_2348_);
lean_dec(v_i_2348_);
v_stop_boxed_2357_ = lean_unbox_usize(v_stop_2349_);
lean_dec(v_stop_2349_);
v_res_2358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_extractClosed_spec__0(v_decls_2346_, v_as_2347_, v_i_boxed_2356_, v_stop_boxed_2357_, v_b_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
lean_dec_ref(v_as_2347_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extractClosed___lam__0(lean_object* v___x_2359_, lean_object* v_decls_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v___x_2366_; 
v___x_2366_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_2361_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2384_; 
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2369_ = v___x_2366_;
v_isShared_2370_ = v_isSharedCheck_2384_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2366_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2384_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
uint8_t v_extractClosed_2371_; 
v_extractClosed_2371_ = lean_ctor_get_uint8(v_a_2367_, sizeof(void*)*4 + 1);
lean_dec(v_a_2367_);
if (v_extractClosed_2371_ == 0)
{
lean_object* v___x_2373_; 
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 0, v_decls_2360_);
v___x_2373_ = v___x_2369_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_decls_2360_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
else
{
lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
v___x_2375_ = lean_mk_empty_array_with_capacity(v___x_2359_);
v___x_2376_ = lean_array_get_size(v_decls_2360_);
v___x_2377_ = lean_nat_dec_lt(v___x_2359_, v___x_2376_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2379_; 
lean_dec_ref(v_decls_2360_);
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 0, v___x_2375_);
v___x_2379_ = v___x_2369_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v___x_2375_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
else
{
size_t v___x_2381_; size_t v___x_2382_; lean_object* v___x_2383_; 
lean_del_object(v___x_2369_);
v___x_2381_ = ((size_t)0ULL);
v___x_2382_ = lean_usize_of_nat(v___x_2376_);
lean_inc_ref(v_decls_2360_);
v___x_2383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_extractClosed_spec__0(v_decls_2360_, v_decls_2360_, v___x_2381_, v___x_2382_, v___x_2375_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_);
lean_dec_ref(v_decls_2360_);
return v___x_2383_;
}
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec_ref(v_decls_2360_);
v_a_2385_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2366_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2366_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extractClosed___lam__0___boxed(lean_object* v___x_2393_, lean_object* v_decls_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_Lean_Compiler_LCNF_extractClosed___lam__0(v___x_2393_, v_decls_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___x_2393_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2483_; uint8_t v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2483_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_));
v___x_2484_ = 1;
v___x_2485_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_));
v___x_2486_ = l_Lean_registerTraceClass(v___x_2483_, v___x_2484_, v___x_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2____boxed(lean_object* v_a_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_();
return v_res_2488_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ClosedTermCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NeverExtractAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ExtractClosed(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ClosedTermCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NeverExtractAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ExtractClosed_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExtractClosed_998081055____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_FloatArray_Basic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ExtractClosed(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_FloatArray_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ClosedTermCache(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NeverExtractAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Init_Data_FloatArray_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ExtractClosed(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ClosedTermCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NeverExtractAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_FloatArray_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ExtractClosed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ExtractClosed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ExtractClosed(builtin);
}
#ifdef __cplusplus
}
#endif
