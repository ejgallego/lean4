// Lean compiler output
// Module: Lean.Compiler.LCNF.FloatLetIn
// Imports: public import Lean.Compiler.LCNF.FVarUtil public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.PhaseExt
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
uint8_t l_Lean_Expr_hasFVar(lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedPass;
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.default"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.dont"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.unknown"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Compiler.LCNF.FloatLetIn.Decision.arm"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(lean_object*, size_t, size_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(lean_object*, size_t, size_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.FVarUtil"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Expr.forFVarM"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "EST"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Out"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__2_value),LEAN_SCALAR_PTR_LITERAL(9, 80, 83, 99, 239, 159, 42, 46)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 22, 165, 44, 41, 63, 187, 255)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ST"};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__5_value),LEAN_SCALAR_PTR_LITERAL(251, 141, 99, 66, 199, 185, 233, 139)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 82, 234, 1, 110, 68, 195, 153)}};
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0_spec__1(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "floatLetIn"};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 137, 209, 28, 15, 13, 59, 120)}};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Size of code that was pushed into arm: "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(224, 143, 131, 10, 85, 239, 135, 125)}};
static const lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_floatLetIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_floatLetIn___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_floatLetIn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FloatLetIn"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(237, 171, 136, 27, 16, 174, 255, 104)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(216, 231, 106, 157, 93, 181, 41, 85)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(81, 255, 211, 49, 61, 191, 211, 203)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 94, 132, 169, 165, 114, 238, 204)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 74, 180, 129, 203, 146, 149, 248)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 219, 231, 242, 61, 46, 166, 166)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(130, 21, 84, 238, 192, 65, 21, 116)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 127, 195, 142, 61, 51, 178, 181)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(101, 60, 156, 134, 247, 42, 74, 192)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(240, 108, 228, 187, 216, 134, 45, 241)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 162, 173, 169, 227, 67, 216, 239)}};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_name_7_; lean_object* v___x_8_; 
v_name_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_name_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_name_7_);
return v___x_8_;
}
else
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim___redArg(lean_object* v_t_21_, lean_object* v_arm_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_21_, v_arm_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_arm_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_arm_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_25_, v_arm_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim___redArg(lean_object* v_t_29_, lean_object* v_default_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_29_, v_default_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_default_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_default_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_33_, v_default_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim___redArg(lean_object* v_t_37_, lean_object* v_dont_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_37_, v_dont_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_dont_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_dont_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_41_, v_dont_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim___redArg(lean_object* v_t_45_, lean_object* v_unknown_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_45_, v_unknown_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_unknown_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_unknown_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ctorElim___redArg(v_t_49_, v_unknown_51_);
return v___x_52_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(lean_object* v_x_53_){
_start:
{
switch(lean_obj_tag(v_x_53_))
{
case 0:
{
lean_object* v_name_54_; uint64_t v___x_55_; 
v_name_54_ = lean_ctor_get(v_x_53_, 0);
v___x_55_ = 0ULL;
if (lean_obj_tag(v_name_54_) == 0)
{
uint64_t v___x_56_; 
v___x_56_ = 8934034000889494153ULL;
return v___x_56_;
}
else
{
uint64_t v_hash_57_; uint64_t v___x_58_; 
v_hash_57_ = lean_ctor_get_uint64(v_name_54_, sizeof(void*)*2);
v___x_58_ = lean_uint64_mix_hash(v___x_55_, v_hash_57_);
return v___x_58_;
}
}
case 1:
{
uint64_t v___x_59_; 
v___x_59_ = 1ULL;
return v___x_59_;
}
case 2:
{
uint64_t v___x_60_; 
v___x_60_ = 2ULL;
return v___x_60_;
}
default: 
{
uint64_t v___x_61_; 
v___x_61_ = 3ULL;
return v___x_61_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash___boxed(lean_object* v_x_62_){
_start:
{
uint64_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_x_62_);
lean_dec(v_x_62_);
v_r_64_ = lean_box_uint64(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(lean_object* v_x_67_, lean_object* v_x_68_){
_start:
{
switch(lean_obj_tag(v_x_67_))
{
case 0:
{
if (lean_obj_tag(v_x_68_) == 0)
{
lean_object* v_name_69_; lean_object* v_name_70_; uint8_t v___x_71_; 
v_name_69_ = lean_ctor_get(v_x_67_, 0);
v_name_70_ = lean_ctor_get(v_x_68_, 0);
v___x_71_ = lean_name_eq(v_name_69_, v_name_70_);
return v___x_71_;
}
else
{
uint8_t v___x_72_; 
v___x_72_ = 0;
return v___x_72_;
}
}
case 1:
{
if (lean_obj_tag(v_x_68_) == 1)
{
uint8_t v___x_73_; 
v___x_73_ = 1;
return v___x_73_;
}
else
{
uint8_t v___x_74_; 
v___x_74_ = 0;
return v___x_74_;
}
}
case 2:
{
if (lean_obj_tag(v_x_68_) == 2)
{
uint8_t v___x_75_; 
v___x_75_ = 1;
return v___x_75_;
}
else
{
uint8_t v___x_76_; 
v___x_76_ = 0;
return v___x_76_;
}
}
default: 
{
if (lean_obj_tag(v_x_68_) == 3)
{
uint8_t v___x_77_; 
v___x_77_ = 1;
return v___x_77_;
}
else
{
uint8_t v___x_78_; 
v___x_78_ = 0;
return v___x_78_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq___boxed(lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_x_79_, v_x_80_);
lean_dec(v_x_80_);
lean_dec(v_x_79_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(2u);
v___x_105_ = lean_nat_to_int(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_to_int(v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(lean_object* v_x_108_, lean_object* v_prec_109_){
_start:
{
lean_object* v___y_111_; lean_object* v___y_118_; lean_object* v___y_125_; 
switch(lean_obj_tag(v_x_108_))
{
case 0:
{
lean_object* v_name_131_; lean_object* v___y_133_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_name_131_ = lean_ctor_get(v_x_108_, 0);
lean_inc(v_name_131_);
lean_dec_ref_known(v_x_108_, 1);
v___x_142_ = lean_unsigned_to_nat(1024u);
v___x_143_ = lean_nat_dec_le(v___x_142_, v_prec_109_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_133_ = v___x_144_;
goto v___jp_132_;
}
else
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_133_ = v___x_145_;
goto v___jp_132_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_134_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__8));
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = l_Lean_Name_reprPrec(v_name_131_, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_134_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
lean_inc(v___y_133_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_133_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_109_);
return v___x_141_;
}
}
case 1:
{
lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_146_ = lean_unsigned_to_nat(1024u);
v___x_147_ = lean_nat_dec_le(v___x_146_, v_prec_109_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; 
v___x_148_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_111_ = v___x_148_;
goto v___jp_110_;
}
else
{
lean_object* v___x_149_; 
v___x_149_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_111_ = v___x_149_;
goto v___jp_110_;
}
}
case 2:
{
lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_unsigned_to_nat(1024u);
v___x_151_ = lean_nat_dec_le(v___x_150_, v_prec_109_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
v___x_152_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_118_ = v___x_152_;
goto v___jp_117_;
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_118_ = v___x_153_;
goto v___jp_117_;
}
}
default: 
{
lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_154_ = lean_unsigned_to_nat(1024u);
v___x_155_ = lean_nat_dec_le(v___x_154_, v_prec_109_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
v___x_156_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__9);
v___y_125_ = v___x_156_;
goto v___jp_124_;
}
else
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10, &l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__10);
v___y_125_ = v___x_157_;
goto v___jp_124_;
}
}
}
v___jp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__1));
lean_inc(v___y_111_);
v___x_113_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_113_, 0, v___y_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = 0;
v___x_115_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*1, v___x_114_);
v___x_116_ = l_Repr_addAppParen(v___x_115_, v_prec_109_);
return v___x_116_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_119_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__3));
lean_inc(v___y_118_);
v___x_120_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_120_, 0, v___y_118_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = 0;
v___x_122_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*1, v___x_121_);
v___x_123_ = l_Repr_addAppParen(v___x_122_, v_prec_109_);
return v___x_123_;
}
v___jp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_126_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___closed__5));
lean_inc(v___y_125_);
v___x_127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_127_, 0, v___y_125_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = 0;
v___x_129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*1, v___x_128_);
v___x_130_ = l_Repr_addAppParen(v___x_129_, v_prec_109_);
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr___boxed(lean_object* v_x_158_, lean_object* v_prec_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(v_x_158_, v_prec_159_);
lean_dec(v_prec_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_object* v_ctorName_164_; lean_object* v___x_165_; 
v_ctorName_164_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_ctorName_164_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v_ctorName_164_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_box(1);
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt___boxed(lean_object* v_x_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v_x_167_);
lean_dec_ref(v_x_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(lean_object* v_decl_169_, lean_object* v_x_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_inc(v_a_171_);
v___x_177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_177_, 0, v_decl_169_);
lean_ctor_set(v___x_177_, 1, v_a_171_);
lean_inc(v_a_175_);
lean_inc_ref(v_a_174_);
lean_inc(v_a_173_);
lean_inc_ref(v_a_172_);
v___x_178_ = lean_apply_6(v_x_170_, v___x_177_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, lean_box(0));
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg___boxed(lean_object* v_decl_179_, lean_object* v_x_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v_decl_179_, v_x_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_);
lean_dec(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
lean_dec(v_a_181_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate(lean_object* v_00_u03b1_188_, lean_object* v_decl_189_, lean_object* v_x_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v_decl_189_, v_x_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___boxed(lean_object* v_00_u03b1_198_, lean_object* v_decl_199_, lean_object* v_x_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate(v_00_u03b1_198_, v_decl_199_, v_x_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_);
lean_dec(v_a_205_);
lean_dec_ref(v_a_204_);
lean_dec(v_a_203_);
lean_dec_ref(v_a_202_);
lean_dec(v_a_201_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(lean_object* v_x_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_box(0);
lean_inc(v_a_212_);
lean_inc_ref(v_a_211_);
lean_inc(v_a_210_);
lean_inc_ref(v_a_209_);
v___x_215_ = lean_apply_6(v_x_208_, v___x_214_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, lean_box(0));
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg___boxed(lean_object* v_x_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v_x_216_, v_a_217_, v_a_218_, v_a_219_, v_a_220_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
lean_dec(v_a_218_);
lean_dec_ref(v_a_217_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope(lean_object* v_00_u03b1_223_, lean_object* v_x_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v_x_224_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___boxed(lean_object* v_00_u03b1_232_, lean_object* v_x_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope(v_00_u03b1_232_, v_x_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_);
lean_dec(v_a_238_);
lean_dec_ref(v_a_237_);
lean_dec(v_a_236_);
lean_dec_ref(v_a_235_);
lean_dec(v_a_234_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(lean_object* v_decl_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_type_247_; lean_object* v_value_248_; lean_object* v___x_249_; 
v_type_247_ = lean_ctor_get(v_decl_241_, 2);
lean_inc_ref(v_type_247_);
v_value_248_ = lean_ctor_get(v_decl_241_, 3);
lean_inc(v_value_248_);
lean_dec_ref(v_decl_241_);
v___x_249_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_type_247_, v_a_245_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_298_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_298_ == 0)
{
v___x_252_ = v___x_249_;
v_isShared_253_ = v_isSharedCheck_298_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_249_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_298_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
if (lean_obj_tag(v_a_250_) == 0)
{
uint8_t v___x_254_; 
v___x_254_ = 0;
if (lean_obj_tag(v_value_248_) == 2)
{
lean_object* v_struct_255_; lean_object* v___x_256_; 
lean_del_object(v___x_252_);
v_struct_255_ = lean_ctor_get(v_value_248_, 2);
lean_inc(v_struct_255_);
lean_dec_ref_known(v_value_248_, 3);
v___x_256_ = l_Lean_Compiler_LCNF_getType(v_struct_255_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_258_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
lean_dec_ref_known(v___x_256_, 1);
v___x_258_ = l_Lean_Compiler_LCNF_isArrowClass_x3f___redArg(v_a_257_, v_a_245_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_272_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_272_ == 0)
{
v___x_261_ = v___x_258_;
v_isShared_262_ = v_isSharedCheck_272_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_258_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_272_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
if (lean_obj_tag(v_a_259_) == 0)
{
lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_263_ = lean_box(v___x_254_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_263_);
v___x_265_ = v___x_261_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
else
{
uint8_t v___x_267_; lean_object* v___x_268_; lean_object* v___x_270_; 
lean_dec_ref_known(v_a_259_, 1);
v___x_267_ = 1;
v___x_268_ = lean_box(v___x_267_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_268_);
v___x_270_ = v___x_261_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_268_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_a_273_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_258_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_258_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_256_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_256_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v___x_289_; lean_object* v___x_291_; 
lean_dec(v_value_248_);
v___x_289_ = lean_box(v___x_254_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v___x_289_);
v___x_291_ = v___x_252_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
else
{
uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
lean_dec_ref_known(v_a_250_, 1);
lean_dec(v_value_248_);
v___x_293_ = 1;
v___x_294_ = lean_box(v___x_293_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v___x_294_);
v___x_296_ = v___x_252_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_306_; 
lean_dec(v_value_248_);
v_a_299_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_306_ == 0)
{
v___x_301_ = v___x_249_;
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_249_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg___boxed(lean_object* v_decl_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(v_decl_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f(lean_object* v_decl_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(v_decl_314_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___boxed(lean_object* v_decl_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f(v_decl_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
lean_dec(v_a_323_);
return v_res_329_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(lean_object* v_a_330_, lean_object* v_x_331_){
_start:
{
if (lean_obj_tag(v_x_331_) == 0)
{
uint8_t v___x_332_; 
v___x_332_ = 0;
return v___x_332_;
}
else
{
lean_object* v_key_333_; lean_object* v_tail_334_; uint8_t v___x_335_; 
v_key_333_ = lean_ctor_get(v_x_331_, 0);
v_tail_334_ = lean_ctor_get(v_x_331_, 2);
v___x_335_ = l_Lean_instBEqFVarId_beq(v_key_333_, v_a_330_);
if (v___x_335_ == 0)
{
v_x_331_ = v_tail_334_;
goto _start;
}
else
{
return v___x_335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg___boxed(lean_object* v_a_337_, lean_object* v_x_338_){
_start:
{
uint8_t v_res_339_; lean_object* v_r_340_; 
v_res_339_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_337_, v_x_338_);
lean_dec(v_x_338_);
lean_dec(v_a_337_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(lean_object* v_m_341_, lean_object* v_a_342_){
_start:
{
lean_object* v_buckets_343_; lean_object* v___x_344_; uint64_t v___x_345_; uint64_t v___x_346_; uint64_t v___x_347_; uint64_t v_fold_348_; uint64_t v___x_349_; uint64_t v___x_350_; uint64_t v___x_351_; size_t v___x_352_; size_t v___x_353_; size_t v___x_354_; size_t v___x_355_; size_t v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v_buckets_343_ = lean_ctor_get(v_m_341_, 1);
v___x_344_ = lean_array_get_size(v_buckets_343_);
v___x_345_ = l_Lean_instHashableFVarId_hash(v_a_342_);
v___x_346_ = 32ULL;
v___x_347_ = lean_uint64_shift_right(v___x_345_, v___x_346_);
v_fold_348_ = lean_uint64_xor(v___x_345_, v___x_347_);
v___x_349_ = 16ULL;
v___x_350_ = lean_uint64_shift_right(v_fold_348_, v___x_349_);
v___x_351_ = lean_uint64_xor(v_fold_348_, v___x_350_);
v___x_352_ = lean_uint64_to_usize(v___x_351_);
v___x_353_ = lean_usize_of_nat(v___x_344_);
v___x_354_ = ((size_t)1ULL);
v___x_355_ = lean_usize_sub(v___x_353_, v___x_354_);
v___x_356_ = lean_usize_land(v___x_352_, v___x_355_);
v___x_357_ = lean_array_uget_borrowed(v_buckets_343_, v___x_356_);
v___x_358_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_342_, v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg___boxed(lean_object* v_m_359_, lean_object* v_a_360_){
_start:
{
uint8_t v_res_361_; lean_object* v_r_362_; 
v_res_361_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_m_359_, v_a_360_);
lean_dec(v_a_360_);
lean_dec_ref(v_m_359_);
v_r_362_ = lean_box(v_res_361_);
return v_r_362_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_363_, lean_object* v_x_364_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
return v_x_363_;
}
else
{
lean_object* v_key_365_; lean_object* v_value_366_; lean_object* v_tail_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_390_; 
v_key_365_ = lean_ctor_get(v_x_364_, 0);
v_value_366_ = lean_ctor_get(v_x_364_, 1);
v_tail_367_ = lean_ctor_get(v_x_364_, 2);
v_isSharedCheck_390_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_390_ == 0)
{
v___x_369_ = v_x_364_;
v_isShared_370_ = v_isSharedCheck_390_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_tail_367_);
lean_inc(v_value_366_);
lean_inc(v_key_365_);
lean_dec(v_x_364_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_390_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_371_; uint64_t v___x_372_; uint64_t v___x_373_; uint64_t v___x_374_; uint64_t v_fold_375_; uint64_t v___x_376_; uint64_t v___x_377_; uint64_t v___x_378_; size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; size_t v___x_382_; size_t v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v___x_371_ = lean_array_get_size(v_x_363_);
v___x_372_ = l_Lean_instHashableFVarId_hash(v_key_365_);
v___x_373_ = 32ULL;
v___x_374_ = lean_uint64_shift_right(v___x_372_, v___x_373_);
v_fold_375_ = lean_uint64_xor(v___x_372_, v___x_374_);
v___x_376_ = 16ULL;
v___x_377_ = lean_uint64_shift_right(v_fold_375_, v___x_376_);
v___x_378_ = lean_uint64_xor(v_fold_375_, v___x_377_);
v___x_379_ = lean_uint64_to_usize(v___x_378_);
v___x_380_ = lean_usize_of_nat(v___x_371_);
v___x_381_ = ((size_t)1ULL);
v___x_382_ = lean_usize_sub(v___x_380_, v___x_381_);
v___x_383_ = lean_usize_land(v___x_379_, v___x_382_);
v___x_384_ = lean_array_uget_borrowed(v_x_363_, v___x_383_);
lean_inc(v___x_384_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 2, v___x_384_);
v___x_386_ = v___x_369_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_key_365_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_value_366_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v___x_384_);
v___x_386_ = v_reuseFailAlloc_389_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_387_; 
v___x_387_ = lean_array_uset(v_x_363_, v___x_383_, v___x_386_);
v_x_363_ = v___x_387_;
v_x_364_ = v_tail_367_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(lean_object* v_i_391_, lean_object* v_source_392_, lean_object* v_target_393_){
_start:
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = lean_array_get_size(v_source_392_);
v___x_395_ = lean_nat_dec_lt(v_i_391_, v___x_394_);
if (v___x_395_ == 0)
{
lean_dec_ref(v_source_392_);
lean_dec(v_i_391_);
return v_target_393_;
}
else
{
lean_object* v_es_396_; lean_object* v___x_397_; lean_object* v_source_398_; lean_object* v_target_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_es_396_ = lean_array_fget(v_source_392_, v_i_391_);
v___x_397_ = lean_box(0);
v_source_398_ = lean_array_fset(v_source_392_, v_i_391_, v___x_397_);
v_target_399_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(v_target_393_, v_es_396_);
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = lean_nat_add(v_i_391_, v___x_400_);
lean_dec(v_i_391_);
v_i_391_ = v___x_401_;
v_source_392_ = v_source_398_;
v_target_393_ = v_target_399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(lean_object* v_data_403_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v_nbuckets_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_404_ = lean_array_get_size(v_data_403_);
v___x_405_ = lean_unsigned_to_nat(2u);
v_nbuckets_406_ = lean_nat_mul(v___x_404_, v___x_405_);
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = lean_box(0);
v___x_409_ = lean_mk_array(v_nbuckets_406_, v___x_408_);
v___x_410_ = lean_array_propagate_mark(v_data_403_, v___x_409_);
v___x_411_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(v___x_407_, v_data_403_, v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(lean_object* v_m_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
lean_object* v_size_415_; lean_object* v_buckets_416_; lean_object* v___x_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; uint64_t v_fold_421_; uint64_t v___x_422_; uint64_t v___x_423_; uint64_t v___x_424_; size_t v___x_425_; size_t v___x_426_; size_t v___x_427_; size_t v___x_428_; size_t v___x_429_; lean_object* v_bkt_430_; uint8_t v___x_431_; 
v_size_415_ = lean_ctor_get(v_m_412_, 0);
v_buckets_416_ = lean_ctor_get(v_m_412_, 1);
v___x_417_ = lean_array_get_size(v_buckets_416_);
v___x_418_ = l_Lean_instHashableFVarId_hash(v_a_413_);
v___x_419_ = 32ULL;
v___x_420_ = lean_uint64_shift_right(v___x_418_, v___x_419_);
v_fold_421_ = lean_uint64_xor(v___x_418_, v___x_420_);
v___x_422_ = 16ULL;
v___x_423_ = lean_uint64_shift_right(v_fold_421_, v___x_422_);
v___x_424_ = lean_uint64_xor(v_fold_421_, v___x_423_);
v___x_425_ = lean_uint64_to_usize(v___x_424_);
v___x_426_ = lean_usize_of_nat(v___x_417_);
v___x_427_ = ((size_t)1ULL);
v___x_428_ = lean_usize_sub(v___x_426_, v___x_427_);
v___x_429_ = lean_usize_land(v___x_425_, v___x_428_);
v_bkt_430_ = lean_array_uget_borrowed(v_buckets_416_, v___x_429_);
v___x_431_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_413_, v_bkt_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_452_; 
lean_inc_ref(v_buckets_416_);
lean_inc(v_size_415_);
v_isSharedCheck_452_ = !lean_is_exclusive(v_m_412_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; lean_object* v_unused_454_; 
v_unused_453_ = lean_ctor_get(v_m_412_, 1);
lean_dec(v_unused_453_);
v_unused_454_ = lean_ctor_get(v_m_412_, 0);
lean_dec(v_unused_454_);
v___x_433_ = v_m_412_;
v_isShared_434_ = v_isSharedCheck_452_;
goto v_resetjp_432_;
}
else
{
lean_dec(v_m_412_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_452_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v_size_x27_436_; lean_object* v___x_437_; lean_object* v_buckets_x27_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_435_ = lean_unsigned_to_nat(1u);
v_size_x27_436_ = lean_nat_add(v_size_415_, v___x_435_);
lean_dec(v_size_415_);
lean_inc(v_bkt_430_);
v___x_437_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_437_, 0, v_a_413_);
lean_ctor_set(v___x_437_, 1, v_b_414_);
lean_ctor_set(v___x_437_, 2, v_bkt_430_);
v_buckets_x27_438_ = lean_array_uset(v_buckets_416_, v___x_429_, v___x_437_);
v___x_439_ = lean_unsigned_to_nat(4u);
v___x_440_ = lean_nat_mul(v_size_x27_436_, v___x_439_);
v___x_441_ = lean_unsigned_to_nat(3u);
v___x_442_ = lean_nat_div(v___x_440_, v___x_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_array_get_size(v_buckets_x27_438_);
v___x_444_ = lean_nat_dec_le(v___x_442_, v___x_443_);
lean_dec(v___x_442_);
if (v___x_444_ == 0)
{
lean_object* v_val_445_; lean_object* v___x_447_; 
v_val_445_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(v_buckets_x27_438_);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 1, v_val_445_);
lean_ctor_set(v___x_433_, 0, v_size_x27_436_);
v___x_447_ = v___x_433_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_size_x27_436_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_val_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
else
{
lean_object* v___x_450_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 1, v_buckets_x27_438_);
lean_ctor_set(v___x_433_, 0, v_size_x27_436_);
v___x_450_ = v___x_433_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_size_x27_436_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_buckets_x27_438_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
else
{
lean_dec(v_b_414_);
lean_dec(v_a_413_);
return v_m_412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(lean_object* v_var_455_, uint8_t v_borrowed_456_, lean_object* v_a_457_){
_start:
{
if (lean_obj_tag(v_var_455_) == 1)
{
lean_object* v_fvarId_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_477_; 
v_fvarId_459_ = lean_ctor_get(v_var_455_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v_var_455_);
if (v_isSharedCheck_477_ == 0)
{
v___x_461_ = v_var_455_;
v_isShared_462_ = v_isSharedCheck_477_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_fvarId_459_);
lean_dec(v_var_455_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_477_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_st_ref_get(v_a_457_);
v___x_464_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v___x_463_, v_fvarId_459_);
lean_dec(v___x_463_);
if (v_borrowed_456_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_465_ = lean_st_ref_take(v_a_457_);
v___x_466_ = lean_box(0);
v___x_467_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(v___x_465_, v_fvarId_459_, v___x_466_);
v___x_468_ = lean_st_ref_put(v_a_457_, v___x_467_);
v___x_469_ = lean_box(v___x_464_);
if (v_isShared_462_ == 0)
{
lean_ctor_set_tag(v___x_461_, 0);
lean_ctor_set(v___x_461_, 0, v___x_469_);
v___x_471_ = v___x_461_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
else
{
lean_object* v___x_473_; lean_object* v___x_475_; 
lean_dec(v_fvarId_459_);
v___x_473_ = lean_box(v___x_464_);
if (v_isShared_462_ == 0)
{
lean_ctor_set_tag(v___x_461_, 0);
lean_ctor_set(v___x_461_, 0, v___x_473_);
v___x_475_ = v___x_461_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
else
{
uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec(v_var_455_);
v___x_478_ = 0;
v___x_479_ = lean_box(v___x_478_);
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg___boxed(lean_object* v_var_481_, lean_object* v_borrowed_482_, lean_object* v_a_483_, lean_object* v_a_484_){
_start:
{
uint8_t v_borrowed_boxed_485_; lean_object* v_res_486_; 
v_borrowed_boxed_485_ = lean_unbox(v_borrowed_482_);
v_res_486_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v_var_481_, v_borrowed_boxed_485_, v_a_483_);
lean_dec(v_a_483_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg(lean_object* v_var_487_, uint8_t v_borrowed_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v_var_487_, v_borrowed_488_, v_a_489_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___boxed(lean_object* v_var_496_, lean_object* v_borrowed_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
uint8_t v_borrowed_boxed_504_; lean_object* v_res_505_; 
v_borrowed_boxed_504_ = lean_unbox(v_borrowed_497_);
v_res_505_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg(v_var_496_, v_borrowed_boxed_504_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_);
lean_dec(v_a_502_);
lean_dec_ref(v_a_501_);
lean_dec(v_a_500_);
lean_dec_ref(v_a_499_);
lean_dec(v_a_498_);
return v_res_505_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0(lean_object* v_00_u03b2_506_, lean_object* v_m_507_, lean_object* v_a_508_){
_start:
{
uint8_t v___x_509_; 
v___x_509_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_m_507_, v_a_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___boxed(lean_object* v_00_u03b2_510_, lean_object* v_m_511_, lean_object* v_a_512_){
_start:
{
uint8_t v_res_513_; lean_object* v_r_514_; 
v_res_513_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0(v_00_u03b2_510_, v_m_511_, v_a_512_);
lean_dec(v_a_512_);
lean_dec_ref(v_m_511_);
v_r_514_ = lean_box(v_res_513_);
return v_r_514_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1(lean_object* v_00_u03b2_515_, lean_object* v_m_516_, lean_object* v_a_517_, lean_object* v_b_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1___redArg(v_m_516_, v_a_517_, v_b_518_);
return v___x_519_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0(lean_object* v_00_u03b2_520_, lean_object* v_a_521_, lean_object* v_x_522_){
_start:
{
uint8_t v___x_523_; 
v___x_523_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_521_, v_x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___boxed(lean_object* v_00_u03b2_524_, lean_object* v_a_525_, lean_object* v_x_526_){
_start:
{
uint8_t v_res_527_; lean_object* v_r_528_; 
v_res_527_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0(v_00_u03b2_524_, v_a_525_, v_x_526_);
lean_dec(v_x_526_);
lean_dec(v_a_525_);
v_r_528_ = lean_box(v_res_527_);
return v_r_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2(lean_object* v_00_u03b2_529_, lean_object* v_data_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(v_data_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_532_, lean_object* v_i_533_, lean_object* v_source_534_, lean_object* v_target_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3___redArg(v_i_533_, v_source_534_, v_target_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_537_, lean_object* v_x_538_, lean_object* v_x_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2_spec__3_spec__4___redArg(v_x_538_, v_x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(lean_object* v_as_541_, size_t v_i_542_, size_t v_stop_543_, uint8_t v_b_544_, lean_object* v___y_545_){
_start:
{
uint8_t v_a_548_; uint8_t v___x_552_; 
v___x_552_ = lean_usize_dec_eq(v_i_542_, v_stop_543_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_array_uget_borrowed(v_as_541_, v_i_542_);
lean_inc(v___x_553_);
v___x_554_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_553_, v___x_552_, v___y_545_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; uint8_t v___x_556_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_a_555_);
lean_dec_ref_known(v___x_554_, 1);
v___x_556_ = lean_unbox(v_a_555_);
if (v___x_556_ == 0)
{
lean_dec(v_a_555_);
v_a_548_ = v_b_544_;
goto v___jp_547_;
}
else
{
uint8_t v___x_557_; 
v___x_557_ = lean_unbox(v_a_555_);
lean_dec(v_a_555_);
v_a_548_ = v___x_557_;
goto v___jp_547_;
}
}
else
{
return v___x_554_;
}
}
else
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = lean_box(v_b_544_);
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
v___jp_547_:
{
size_t v___x_549_; size_t v___x_550_; 
v___x_549_ = ((size_t)1ULL);
v___x_550_ = lean_usize_add(v_i_542_, v___x_549_);
v_i_542_ = v___x_550_;
v_b_544_ = v_a_548_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg___boxed(lean_object* v_as_560_, lean_object* v_i_561_, lean_object* v_stop_562_, lean_object* v_b_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
size_t v_i_boxed_566_; size_t v_stop_boxed_567_; uint8_t v_b_boxed_568_; lean_object* v_res_569_; 
v_i_boxed_566_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_stop_boxed_567_ = lean_unbox_usize(v_stop_562_);
lean_dec(v_stop_562_);
v_b_boxed_568_ = lean_unbox(v_b_563_);
v_res_569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(v_as_560_, v_i_boxed_566_, v_stop_boxed_567_, v_b_boxed_568_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v_as_560_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(lean_object* v_upperBound_570_, lean_object* v_args_571_, lean_object* v_val_572_, lean_object* v_a_573_, uint8_t v_b_574_, lean_object* v___y_575_){
_start:
{
uint8_t v_a_578_; uint8_t v___x_582_; 
v___x_582_ = lean_nat_dec_lt(v_a_573_, v_upperBound_570_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; 
lean_dec(v_a_573_);
v___x_583_ = lean_box(v_b_574_);
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
else
{
lean_object* v_params_585_; lean_object* v___x_586_; uint8_t v___y_588_; lean_object* v___x_593_; uint8_t v___x_594_; 
v_params_585_ = lean_ctor_get(v_val_572_, 3);
v___x_586_ = lean_array_fget_borrowed(v_args_571_, v_a_573_);
v___x_593_ = lean_array_get_size(v_params_585_);
v___x_594_ = lean_nat_dec_lt(v_a_573_, v___x_593_);
if (v___x_594_ == 0)
{
v___y_588_ = v___x_594_;
goto v___jp_587_;
}
else
{
lean_object* v___x_595_; uint8_t v_borrow_596_; 
v___x_595_ = lean_array_fget_borrowed(v_params_585_, v_a_573_);
v_borrow_596_ = lean_ctor_get_uint8(v___x_595_, sizeof(void*)*3);
v___y_588_ = v_borrow_596_;
goto v___jp_587_;
}
v___jp_587_:
{
lean_object* v___x_589_; 
lean_inc(v___x_586_);
v___x_589_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_586_, v___y_588_, v___y_575_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; uint8_t v___x_591_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = lean_unbox(v_a_590_);
if (v___x_591_ == 0)
{
lean_dec(v_a_590_);
v_a_578_ = v_b_574_;
goto v___jp_577_;
}
else
{
uint8_t v___x_592_; 
v___x_592_ = lean_unbox(v_a_590_);
lean_dec(v_a_590_);
v_a_578_ = v___x_592_;
goto v___jp_577_;
}
}
else
{
lean_dec(v_a_573_);
return v___x_589_;
}
}
}
v___jp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(1u);
v___x_580_ = lean_nat_add(v_a_573_, v___x_579_);
lean_dec(v_a_573_);
v_a_573_ = v___x_580_;
v_b_574_ = v_a_578_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg___boxed(lean_object* v_upperBound_597_, lean_object* v_args_598_, lean_object* v_val_599_, lean_object* v_a_600_, lean_object* v_b_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
uint8_t v_b_boxed_604_; lean_object* v_res_605_; 
v_b_boxed_604_ = lean_unbox(v_b_601_);
v_res_605_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(v_upperBound_597_, v_args_598_, v_val_599_, v_a_600_, v_b_boxed_604_, v___y_602_);
lean_dec(v___y_602_);
lean_dec_ref(v_val_599_);
lean_dec_ref(v_args_598_);
lean_dec(v_upperBound_597_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(lean_object* v_as_606_, size_t v_i_607_, size_t v_stop_608_, uint8_t v_b_609_, lean_object* v___y_610_){
_start:
{
uint8_t v_a_613_; uint8_t v___x_617_; 
v___x_617_ = lean_usize_dec_eq(v_i_607_, v_stop_608_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_array_uget_borrowed(v_as_606_, v_i_607_);
lean_inc(v___x_618_);
v___x_619_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_618_, v___x_617_, v___y_610_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; uint8_t v___x_621_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref_known(v___x_619_, 1);
v___x_621_ = lean_unbox(v_a_620_);
if (v___x_621_ == 0)
{
lean_dec(v_a_620_);
v_a_613_ = v_b_609_;
goto v___jp_612_;
}
else
{
uint8_t v___x_622_; 
v___x_622_ = lean_unbox(v_a_620_);
lean_dec(v_a_620_);
v_a_613_ = v___x_622_;
goto v___jp_612_;
}
}
else
{
return v___x_619_;
}
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = lean_box(v_b_609_);
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
v___jp_612_:
{
size_t v___x_614_; size_t v___x_615_; 
v___x_614_ = ((size_t)1ULL);
v___x_615_ = lean_usize_add(v_i_607_, v___x_614_);
v_i_607_ = v___x_615_;
v_b_609_ = v_a_613_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg___boxed(lean_object* v_as_625_, lean_object* v_i_626_, lean_object* v_stop_627_, lean_object* v_b_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
size_t v_i_boxed_631_; size_t v_stop_boxed_632_; uint8_t v_b_boxed_633_; lean_object* v_res_634_; 
v_i_boxed_631_ = lean_unbox_usize(v_i_626_);
lean_dec(v_i_626_);
v_stop_boxed_632_ = lean_unbox_usize(v_stop_627_);
lean_dec(v_stop_627_);
v_b_boxed_633_ = lean_unbox(v_b_628_);
v_res_634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(v_as_625_, v_i_boxed_631_, v_stop_boxed_632_, v_b_boxed_633_, v___y_629_);
lean_dec(v___y_629_);
lean_dec_ref(v_as_625_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(lean_object* v_value_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_){
_start:
{
switch(lean_obj_tag(v_value_635_))
{
case 2:
{
lean_object* v_struct_642_; lean_object* v___x_643_; uint8_t v___x_644_; lean_object* v___x_645_; 
v_struct_642_ = lean_ctor_get(v_value_635_, 2);
lean_inc(v_struct_642_);
lean_dec_ref_known(v_value_635_, 3);
v___x_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_643_, 0, v_struct_642_);
v___x_644_ = 1;
v___x_645_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_643_, v___x_644_, v_a_636_);
return v___x_645_;
}
case 3:
{
lean_object* v_declName_646_; lean_object* v_args_647_; lean_object* v___x_648_; 
v_declName_646_ = lean_ctor_get(v_value_635_, 0);
lean_inc(v_declName_646_);
v_args_647_ = lean_ctor_get(v_value_635_, 2);
lean_inc_ref(v_args_647_);
lean_dec_ref_known(v_value_635_, 3);
v___x_648_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_declName_646_, v_a_640_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_669_; 
v_a_649_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_669_ == 0)
{
v___x_651_ = v___x_648_;
v_isShared_652_ = v_isSharedCheck_669_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_648_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_669_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
if (lean_obj_tag(v_a_649_) == 0)
{
uint8_t v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v___x_653_ = 0;
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = lean_array_get_size(v_args_647_);
v___x_656_ = lean_nat_dec_lt(v___x_654_, v___x_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_659_; 
lean_dec_ref(v_args_647_);
v___x_657_ = lean_box(v___x_653_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_657_);
v___x_659_ = v___x_651_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
else
{
size_t v___x_661_; size_t v___x_662_; lean_object* v___x_663_; 
lean_del_object(v___x_651_);
v___x_661_ = ((size_t)0ULL);
v___x_662_ = lean_usize_of_nat(v___x_655_);
v___x_663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(v_args_647_, v___x_661_, v___x_662_, v___x_653_, v_a_636_);
lean_dec_ref(v_args_647_);
return v___x_663_;
}
}
else
{
lean_object* v_val_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; lean_object* v___x_668_; 
lean_del_object(v___x_651_);
v_val_664_ = lean_ctor_get(v_a_649_, 0);
lean_inc(v_val_664_);
lean_dec_ref_known(v_a_649_, 1);
v___x_665_ = lean_array_get_size(v_args_647_);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = 0;
v___x_668_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(v___x_665_, v_args_647_, v_val_664_, v___x_666_, v___x_667_, v_a_636_);
lean_dec(v_val_664_);
lean_dec_ref(v_args_647_);
return v___x_668_;
}
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec_ref(v_args_647_);
v_a_670_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_648_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_648_);
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
case 4:
{
lean_object* v_fvarId_678_; lean_object* v_args_679_; lean_object* v___x_680_; uint8_t v___x_681_; lean_object* v___x_682_; lean_object* v_a_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_fvarId_678_ = lean_ctor_get(v_value_635_, 0);
lean_inc(v_fvarId_678_);
v_args_679_ = lean_ctor_get(v_value_635_, 1);
lean_inc_ref(v_args_679_);
lean_dec_ref_known(v_value_635_, 2);
v___x_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_680_, 0, v_fvarId_678_);
v___x_681_ = 0;
v___x_682_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg___redArg(v___x_680_, v___x_681_, v_a_636_);
v_a_683_ = lean_ctor_get(v___x_682_, 0);
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_array_get_size(v_args_679_);
v___x_686_ = lean_nat_dec_lt(v___x_684_, v___x_685_);
if (v___x_686_ == 0)
{
lean_dec_ref(v_args_679_);
return v___x_682_;
}
else
{
size_t v___x_687_; size_t v___x_688_; uint8_t v___x_689_; lean_object* v___x_690_; 
lean_inc(v_a_683_);
lean_dec_ref(v___x_682_);
v___x_687_ = ((size_t)0ULL);
v___x_688_ = lean_usize_of_nat(v___x_685_);
v___x_689_ = lean_unbox(v_a_683_);
lean_dec(v_a_683_);
v___x_690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(v_args_679_, v___x_687_, v___x_688_, v___x_689_, v_a_636_);
lean_dec_ref(v_args_679_);
return v___x_690_;
}
}
default: 
{
uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
lean_dec(v_value_635_);
v___x_691_ = 0;
v___x_692_ = lean_box(v___x_691_);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
return v___x_693_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg___boxed(lean_object* v_value_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(v_value_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_);
lean_dec(v_a_699_);
lean_dec_ref(v_a_698_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue(lean_object* v_env_702_, lean_object* v_value_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(v_value_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___boxed(lean_object* v_env_711_, lean_object* v_value_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue(v_env_711_, v_value_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec(v_a_713_);
lean_dec_ref(v_env_711_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0(lean_object* v_as_720_, size_t v_i_721_, size_t v_stop_722_, uint8_t v_b_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___redArg(v_as_720_, v_i_721_, v_stop_722_, v_b_723_, v___y_724_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0___boxed(lean_object* v_as_731_, lean_object* v_i_732_, lean_object* v_stop_733_, lean_object* v_b_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
size_t v_i_boxed_741_; size_t v_stop_boxed_742_; uint8_t v_b_boxed_743_; lean_object* v_res_744_; 
v_i_boxed_741_ = lean_unbox_usize(v_i_732_);
lean_dec(v_i_732_);
v_stop_boxed_742_ = lean_unbox_usize(v_stop_733_);
lean_dec(v_stop_733_);
v_b_boxed_743_ = lean_unbox(v_b_734_);
v_res_744_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__0(v_as_731_, v_i_boxed_741_, v_stop_boxed_742_, v_b_boxed_743_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v_as_731_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1(lean_object* v_upperBound_745_, lean_object* v_args_746_, lean_object* v_val_747_, lean_object* v_inst_748_, lean_object* v_R_749_, lean_object* v_a_750_, uint8_t v_b_751_, lean_object* v_c_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___redArg(v_upperBound_745_, v_args_746_, v_val_747_, v_a_750_, v_b_751_, v___y_753_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1___boxed(lean_object* v_upperBound_760_, lean_object* v_args_761_, lean_object* v_val_762_, lean_object* v_inst_763_, lean_object* v_R_764_, lean_object* v_a_765_, lean_object* v_b_766_, lean_object* v_c_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
uint8_t v_b_boxed_774_; lean_object* v_res_775_; 
v_b_boxed_774_ = lean_unbox(v_b_766_);
v_res_775_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__1(v_upperBound_760_, v_args_761_, v_val_762_, v_inst_763_, v_R_764_, v_a_765_, v_b_boxed_774_, v_c_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v_val_762_);
lean_dec_ref(v_args_761_);
lean_dec(v_upperBound_760_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2(lean_object* v_as_776_, size_t v_i_777_, size_t v_stop_778_, uint8_t v_b_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___redArg(v_as_776_, v_i_777_, v_stop_778_, v_b_779_, v___y_780_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2___boxed(lean_object* v_as_787_, lean_object* v_i_788_, lean_object* v_stop_789_, lean_object* v_b_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
size_t v_i_boxed_797_; size_t v_stop_boxed_798_; uint8_t v_b_boxed_799_; lean_object* v_res_800_; 
v_i_boxed_797_ = lean_unbox_usize(v_i_788_);
lean_dec(v_i_788_);
v_stop_boxed_798_ = lean_unbox_usize(v_stop_789_);
lean_dec(v_stop_789_);
v_b_boxed_799_ = lean_unbox(v_b_790_);
v_res_800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue_spec__2(v_as_787_, v_i_boxed_797_, v_stop_boxed_798_, v_b_boxed_799_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v_as_787_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(lean_object* v_value_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_){
_start:
{
if (lean_obj_tag(v_value_801_) == 0)
{
lean_object* v_decl_808_; lean_object* v_value_809_; lean_object* v___x_810_; 
v_decl_808_ = lean_ctor_get(v_value_801_, 0);
lean_inc_ref(v_decl_808_);
lean_dec_ref_known(v_value_801_, 1);
v_value_809_ = lean_ctor_get(v_decl_808_, 3);
lean_inc(v_value_809_);
lean_dec_ref(v_decl_808_);
v___x_810_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitLetValue___redArg(v_value_809_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
return v___x_810_;
}
else
{
uint8_t v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec_ref(v_value_801_);
v___x_811_ = 0;
v___x_812_ = lean_box(v___x_811_);
v___x_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg___boxed(lean_object* v_value_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(v_value_814_, v_a_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_);
lean_dec(v_a_819_);
lean_dec_ref(v_a_818_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
lean_dec(v_a_815_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl(lean_object* v_env_822_, lean_object* v_value_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(v_value_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___boxed(lean_object* v_env_831_, lean_object* v_value_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl(v_env_831_, v_value_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
lean_dec(v_a_835_);
lean_dec_ref(v_a_834_);
lean_dec(v_a_833_);
lean_dec_ref(v_env_831_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(lean_object* v_a_840_, lean_object* v_b_841_, lean_object* v_x_842_){
_start:
{
if (lean_obj_tag(v_x_842_) == 0)
{
lean_dec(v_b_841_);
lean_dec(v_a_840_);
return v_x_842_;
}
else
{
lean_object* v_key_843_; lean_object* v_value_844_; lean_object* v_tail_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_857_; 
v_key_843_ = lean_ctor_get(v_x_842_, 0);
v_value_844_ = lean_ctor_get(v_x_842_, 1);
v_tail_845_ = lean_ctor_get(v_x_842_, 2);
v_isSharedCheck_857_ = !lean_is_exclusive(v_x_842_);
if (v_isSharedCheck_857_ == 0)
{
v___x_847_ = v_x_842_;
v_isShared_848_ = v_isSharedCheck_857_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_tail_845_);
lean_inc(v_value_844_);
lean_inc(v_key_843_);
lean_dec(v_x_842_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_857_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
uint8_t v___x_849_; 
v___x_849_ = l_Lean_instBEqFVarId_beq(v_key_843_, v_a_840_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_850_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(v_a_840_, v_b_841_, v_tail_845_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 2, v___x_850_);
v___x_852_ = v___x_847_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_key_843_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v_value_844_);
lean_ctor_set(v_reuseFailAlloc_853_, 2, v___x_850_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
else
{
lean_object* v___x_855_; 
lean_dec(v_value_844_);
lean_dec(v_key_843_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 1, v_b_841_);
lean_ctor_set(v___x_847_, 0, v_a_840_);
v___x_855_ = v___x_847_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_840_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_b_841_);
lean_ctor_set(v_reuseFailAlloc_856_, 2, v_tail_845_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(lean_object* v_m_858_, lean_object* v_a_859_, lean_object* v_b_860_){
_start:
{
lean_object* v_size_861_; lean_object* v_buckets_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_905_; 
v_size_861_ = lean_ctor_get(v_m_858_, 0);
v_buckets_862_ = lean_ctor_get(v_m_858_, 1);
v_isSharedCheck_905_ = !lean_is_exclusive(v_m_858_);
if (v_isSharedCheck_905_ == 0)
{
v___x_864_ = v_m_858_;
v_isShared_865_ = v_isSharedCheck_905_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_buckets_862_);
lean_inc(v_size_861_);
lean_dec(v_m_858_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_905_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; uint64_t v___x_867_; uint64_t v___x_868_; uint64_t v___x_869_; uint64_t v_fold_870_; uint64_t v___x_871_; uint64_t v___x_872_; uint64_t v___x_873_; size_t v___x_874_; size_t v___x_875_; size_t v___x_876_; size_t v___x_877_; size_t v___x_878_; lean_object* v_bkt_879_; uint8_t v___x_880_; 
v___x_866_ = lean_array_get_size(v_buckets_862_);
v___x_867_ = l_Lean_instHashableFVarId_hash(v_a_859_);
v___x_868_ = 32ULL;
v___x_869_ = lean_uint64_shift_right(v___x_867_, v___x_868_);
v_fold_870_ = lean_uint64_xor(v___x_867_, v___x_869_);
v___x_871_ = 16ULL;
v___x_872_ = lean_uint64_shift_right(v_fold_870_, v___x_871_);
v___x_873_ = lean_uint64_xor(v_fold_870_, v___x_872_);
v___x_874_ = lean_uint64_to_usize(v___x_873_);
v___x_875_ = lean_usize_of_nat(v___x_866_);
v___x_876_ = ((size_t)1ULL);
v___x_877_ = lean_usize_sub(v___x_875_, v___x_876_);
v___x_878_ = lean_usize_land(v___x_874_, v___x_877_);
v_bkt_879_ = lean_array_uget_borrowed(v_buckets_862_, v___x_878_);
v___x_880_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0_spec__0___redArg(v_a_859_, v_bkt_879_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; lean_object* v_size_x27_882_; lean_object* v___x_883_; lean_object* v_buckets_x27_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_881_ = lean_unsigned_to_nat(1u);
v_size_x27_882_ = lean_nat_add(v_size_861_, v___x_881_);
lean_dec(v_size_861_);
lean_inc(v_bkt_879_);
v___x_883_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_883_, 0, v_a_859_);
lean_ctor_set(v___x_883_, 1, v_b_860_);
lean_ctor_set(v___x_883_, 2, v_bkt_879_);
v_buckets_x27_884_ = lean_array_uset(v_buckets_862_, v___x_878_, v___x_883_);
v___x_885_ = lean_unsigned_to_nat(4u);
v___x_886_ = lean_nat_mul(v_size_x27_882_, v___x_885_);
v___x_887_ = lean_unsigned_to_nat(3u);
v___x_888_ = lean_nat_div(v___x_886_, v___x_887_);
lean_dec(v___x_886_);
v___x_889_ = lean_array_get_size(v_buckets_x27_884_);
v___x_890_ = lean_nat_dec_le(v___x_888_, v___x_889_);
lean_dec(v___x_888_);
if (v___x_890_ == 0)
{
lean_object* v_val_891_; lean_object* v___x_893_; 
v_val_891_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__1_spec__2___redArg(v_buckets_x27_884_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 1, v_val_891_);
lean_ctor_set(v___x_864_, 0, v_size_x27_882_);
v___x_893_ = v___x_864_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_size_x27_882_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_val_891_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
else
{
lean_object* v___x_896_; 
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 1, v_buckets_x27_884_);
lean_ctor_set(v___x_864_, 0, v_size_x27_882_);
v___x_896_ = v___x_864_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_size_x27_882_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v_buckets_x27_884_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
else
{
lean_object* v___x_898_; lean_object* v_buckets_x27_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
lean_inc(v_bkt_879_);
v___x_898_ = lean_box(0);
v_buckets_x27_899_ = lean_array_uset(v_buckets_862_, v___x_878_, v___x_898_);
v___x_900_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(v_a_859_, v_b_860_, v_bkt_879_);
v___x_901_ = lean_array_uset(v_buckets_x27_899_, v___x_878_, v___x_900_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 1, v___x_901_);
v___x_903_ = v___x_864_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_size_861_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(lean_object* v_a_906_, lean_object* v_x_907_){
_start:
{
if (lean_obj_tag(v_x_907_) == 0)
{
lean_object* v___x_908_; 
v___x_908_ = lean_box(0);
return v___x_908_;
}
else
{
lean_object* v_key_909_; lean_object* v_value_910_; lean_object* v_tail_911_; uint8_t v___x_912_; 
v_key_909_ = lean_ctor_get(v_x_907_, 0);
v_value_910_ = lean_ctor_get(v_x_907_, 1);
v_tail_911_ = lean_ctor_get(v_x_907_, 2);
v___x_912_ = l_Lean_instBEqFVarId_beq(v_key_909_, v_a_906_);
if (v___x_912_ == 0)
{
v_x_907_ = v_tail_911_;
goto _start;
}
else
{
lean_object* v___x_914_; 
lean_inc(v_value_910_);
v___x_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_914_, 0, v_value_910_);
return v___x_914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg___boxed(lean_object* v_a_915_, lean_object* v_x_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(v_a_915_, v_x_916_);
lean_dec(v_x_916_);
lean_dec(v_a_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(lean_object* v_m_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_buckets_920_; lean_object* v___x_921_; uint64_t v___x_922_; uint64_t v___x_923_; uint64_t v___x_924_; uint64_t v_fold_925_; uint64_t v___x_926_; uint64_t v___x_927_; uint64_t v___x_928_; size_t v___x_929_; size_t v___x_930_; size_t v___x_931_; size_t v___x_932_; size_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v_buckets_920_ = lean_ctor_get(v_m_918_, 1);
v___x_921_ = lean_array_get_size(v_buckets_920_);
v___x_922_ = l_Lean_instHashableFVarId_hash(v_a_919_);
v___x_923_ = 32ULL;
v___x_924_ = lean_uint64_shift_right(v___x_922_, v___x_923_);
v_fold_925_ = lean_uint64_xor(v___x_922_, v___x_924_);
v___x_926_ = 16ULL;
v___x_927_ = lean_uint64_shift_right(v_fold_925_, v___x_926_);
v___x_928_ = lean_uint64_xor(v_fold_925_, v___x_927_);
v___x_929_ = lean_uint64_to_usize(v___x_928_);
v___x_930_ = lean_usize_of_nat(v___x_921_);
v___x_931_ = ((size_t)1ULL);
v___x_932_ = lean_usize_sub(v___x_930_, v___x_931_);
v___x_933_ = lean_usize_land(v___x_929_, v___x_932_);
v___x_934_ = lean_array_uget_borrowed(v_buckets_920_, v___x_933_);
v___x_935_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(v_a_919_, v___x_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg___boxed(lean_object* v_m_936_, lean_object* v_a_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v_m_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_m_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(lean_object* v_plannedDecision_939_, lean_object* v_var_940_, lean_object* v_a_941_){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = lean_st_ref_get(v_a_941_);
v___x_944_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v___x_943_, v_var_940_);
lean_dec(v___x_943_);
if (lean_obj_tag(v___x_944_) == 1)
{
lean_object* v_val_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_969_; 
v_val_945_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_969_ == 0)
{
v___x_947_ = v___x_944_;
v_isShared_948_ = v_isSharedCheck_969_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_val_945_);
lean_dec(v___x_944_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_969_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
if (lean_obj_tag(v_val_945_) == 3)
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_949_ = lean_st_ref_take(v_a_941_);
v___x_950_ = lean_box(0);
v___x_951_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v___x_949_, v_var_940_, v_plannedDecision_939_);
v___x_952_ = lean_st_ref_put(v_a_941_, v___x_951_);
if (v_isShared_948_ == 0)
{
lean_ctor_set_tag(v___x_947_, 0);
lean_ctor_set(v___x_947_, 0, v___x_950_);
v___x_954_ = v___x_947_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_950_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
else
{
uint8_t v___x_956_; 
v___x_956_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_val_945_, v_plannedDecision_939_);
lean_dec(v_plannedDecision_939_);
lean_dec(v_val_945_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_957_ = lean_st_ref_take(v_a_941_);
v___x_958_ = lean_box(0);
v___x_959_ = lean_box(2);
v___x_960_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v___x_957_, v_var_940_, v___x_959_);
v___x_961_ = lean_st_ref_put(v_a_941_, v___x_960_);
if (v_isShared_948_ == 0)
{
lean_ctor_set_tag(v___x_947_, 0);
lean_ctor_set(v___x_947_, 0, v___x_958_);
v___x_963_ = v___x_947_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
else
{
lean_object* v___x_965_; lean_object* v___x_967_; 
lean_dec(v_var_940_);
v___x_965_ = lean_box(0);
if (v_isShared_948_ == 0)
{
lean_ctor_set_tag(v___x_947_, 0);
lean_ctor_set(v___x_947_, 0, v___x_965_);
v___x_967_ = v___x_947_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_965_);
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
lean_object* v___x_970_; lean_object* v___x_971_; 
lean_dec(v___x_944_);
lean_dec(v_var_940_);
lean_dec(v_plannedDecision_939_);
v___x_970_ = lean_box(0);
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg___boxed(lean_object* v_plannedDecision_972_, lean_object* v_var_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(v_plannedDecision_972_, v_var_973_, v_a_974_);
lean_dec(v_a_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar(lean_object* v_plannedDecision_977_, lean_object* v_var_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___redArg(v_plannedDecision_977_, v_var_978_, v_a_979_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed(lean_object* v_plannedDecision_987_, lean_object* v_var_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar(v_plannedDecision_987_, v_var_988_, v_a_989_, v_a_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
lean_dec(v_a_994_);
lean_dec_ref(v_a_993_);
lean_dec(v_a_992_);
lean_dec_ref(v_a_991_);
lean_dec(v_a_990_);
lean_dec(v_a_989_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0(lean_object* v_00_u03b2_997_, lean_object* v_m_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v_m_998_, v_a_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___boxed(lean_object* v_00_u03b2_1001_, lean_object* v_m_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0(v_00_u03b2_1001_, v_m_1002_, v_a_1003_);
lean_dec(v_a_1003_);
lean_dec_ref(v_m_1002_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1(lean_object* v_00_u03b2_1005_, lean_object* v_m_1006_, lean_object* v_a_1007_, lean_object* v_b_1008_){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_m_1006_, v_a_1007_, v_b_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0(lean_object* v_00_u03b2_1010_, lean_object* v_a_1011_, lean_object* v_x_1012_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___redArg(v_a_1011_, v_x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1014_, lean_object* v_a_1015_, lean_object* v_x_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0_spec__0(v_00_u03b2_1014_, v_a_1015_, v_x_1016_);
lean_dec(v_x_1016_);
lean_dec(v_a_1015_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2(lean_object* v_00_u03b2_1018_, lean_object* v_a_1019_, lean_object* v_b_1020_, lean_object* v_x_1021_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1_spec__2___redArg(v_a_1019_, v_b_1020_, v_x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(lean_object* v_alt_1023_, lean_object* v_f_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
switch(lean_obj_tag(v_alt_1023_))
{
case 0:
{
lean_object* v_code_1032_; lean_object* v___x_1033_; 
v_code_1032_ = lean_ctor_get(v_alt_1023_, 2);
lean_inc_ref(v_code_1032_);
lean_dec_ref_known(v_alt_1023_, 3);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc(v___y_1025_);
v___x_1033_ = lean_apply_8(v_f_1024_, v_code_1032_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, lean_box(0));
return v___x_1033_;
}
case 1:
{
lean_object* v_code_1034_; lean_object* v___x_1035_; 
v_code_1034_ = lean_ctor_get(v_alt_1023_, 1);
lean_inc_ref(v_code_1034_);
lean_dec_ref_known(v_alt_1023_, 2);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc(v___y_1025_);
v___x_1035_ = lean_apply_8(v_f_1024_, v_code_1034_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, lean_box(0));
return v___x_1035_;
}
default: 
{
lean_object* v_code_1036_; lean_object* v___x_1037_; 
v_code_1036_ = lean_ctor_get(v_alt_1023_, 0);
lean_inc_ref(v_code_1036_);
lean_dec_ref_known(v_alt_1023_, 1);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc(v___y_1025_);
v___x_1037_ = lean_apply_8(v_f_1024_, v_code_1036_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, lean_box(0));
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg___boxed(lean_object* v_alt_1038_, lean_object* v_f_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(v_alt_1038_, v_f_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec(v___y_1040_);
return v_res_1047_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_instMonadEIO___redArg();
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(lean_object* v_msg_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v_toApplicative_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1126_; 
v___x_1061_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0);
v___x_1062_ = l_StateRefT_x27_instMonad___redArg(v___x_1061_);
v_toApplicative_1063_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1126_ == 0)
{
lean_object* v_unused_1127_; 
v_unused_1127_ = lean_ctor_get(v___x_1062_, 1);
lean_dec(v_unused_1127_);
v___x_1065_ = v___x_1062_;
v_isShared_1066_ = v_isSharedCheck_1126_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_toApplicative_1063_);
lean_dec(v___x_1062_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1126_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_toFunctor_1067_; lean_object* v_toSeq_1068_; lean_object* v_toSeqLeft_1069_; lean_object* v_toSeqRight_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1124_; 
v_toFunctor_1067_ = lean_ctor_get(v_toApplicative_1063_, 0);
v_toSeq_1068_ = lean_ctor_get(v_toApplicative_1063_, 2);
v_toSeqLeft_1069_ = lean_ctor_get(v_toApplicative_1063_, 3);
v_toSeqRight_1070_ = lean_ctor_get(v_toApplicative_1063_, 4);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_toApplicative_1063_);
if (v_isSharedCheck_1124_ == 0)
{
lean_object* v_unused_1125_; 
v_unused_1125_ = lean_ctor_get(v_toApplicative_1063_, 1);
lean_dec(v_unused_1125_);
v___x_1072_ = v_toApplicative_1063_;
v_isShared_1073_ = v_isSharedCheck_1124_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_toSeqRight_1070_);
lean_inc(v_toSeqLeft_1069_);
lean_inc(v_toSeq_1068_);
lean_inc(v_toFunctor_1067_);
lean_dec(v_toApplicative_1063_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1124_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___f_1074_; lean_object* v___f_1075_; lean_object* v___f_1076_; lean_object* v___f_1077_; lean_object* v___x_1078_; lean_object* v___f_1079_; lean_object* v___f_1080_; lean_object* v___f_1081_; lean_object* v___x_1083_; 
v___f_1074_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1));
v___f_1075_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1067_);
v___f_1076_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1076_, 0, v_toFunctor_1067_);
v___f_1077_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1077_, 0, v_toFunctor_1067_);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___f_1076_);
lean_ctor_set(v___x_1078_, 1, v___f_1077_);
v___f_1079_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1079_, 0, v_toSeqRight_1070_);
v___f_1080_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1080_, 0, v_toSeqLeft_1069_);
v___f_1081_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1081_, 0, v_toSeq_1068_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v___f_1079_);
lean_ctor_set(v___x_1072_, 3, v___f_1080_);
lean_ctor_set(v___x_1072_, 2, v___f_1081_);
lean_ctor_set(v___x_1072_, 1, v___f_1074_);
lean_ctor_set(v___x_1072_, 0, v___x_1078_);
v___x_1083_ = v___x_1072_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v___f_1074_);
lean_ctor_set(v_reuseFailAlloc_1123_, 2, v___f_1081_);
lean_ctor_set(v_reuseFailAlloc_1123_, 3, v___f_1080_);
lean_ctor_set(v_reuseFailAlloc_1123_, 4, v___f_1079_);
v___x_1083_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1085_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 1, v___f_1075_);
lean_ctor_set(v___x_1065_, 0, v___x_1083_);
v___x_1085_ = v___x_1065_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v___f_1075_);
v___x_1085_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1086_; lean_object* v_toApplicative_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1120_; 
v___x_1086_ = l_StateRefT_x27_instMonad___redArg(v___x_1085_);
v_toApplicative_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; 
v_unused_1121_ = lean_ctor_get(v___x_1086_, 1);
lean_dec(v_unused_1121_);
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1120_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_toApplicative_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1120_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v_toFunctor_1091_; lean_object* v_toSeq_1092_; lean_object* v_toSeqLeft_1093_; lean_object* v_toSeqRight_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1118_; 
v_toFunctor_1091_ = lean_ctor_get(v_toApplicative_1087_, 0);
v_toSeq_1092_ = lean_ctor_get(v_toApplicative_1087_, 2);
v_toSeqLeft_1093_ = lean_ctor_get(v_toApplicative_1087_, 3);
v_toSeqRight_1094_ = lean_ctor_get(v_toApplicative_1087_, 4);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_toApplicative_1087_);
if (v_isSharedCheck_1118_ == 0)
{
lean_object* v_unused_1119_; 
v_unused_1119_ = lean_ctor_get(v_toApplicative_1087_, 1);
lean_dec(v_unused_1119_);
v___x_1096_ = v_toApplicative_1087_;
v_isShared_1097_ = v_isSharedCheck_1118_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_toSeqRight_1094_);
lean_inc(v_toSeqLeft_1093_);
lean_inc(v_toSeq_1092_);
lean_inc(v_toFunctor_1091_);
lean_dec(v_toApplicative_1087_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1118_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___f_1098_; lean_object* v___f_1099_; lean_object* v___f_1100_; lean_object* v___f_1101_; lean_object* v___x_1102_; lean_object* v___f_1103_; lean_object* v___f_1104_; lean_object* v___f_1105_; lean_object* v___x_1107_; 
v___f_1098_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3));
v___f_1099_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1091_);
v___f_1100_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1100_, 0, v_toFunctor_1091_);
v___f_1101_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1101_, 0, v_toFunctor_1091_);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___f_1100_);
lean_ctor_set(v___x_1102_, 1, v___f_1101_);
v___f_1103_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1103_, 0, v_toSeqRight_1094_);
v___f_1104_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1104_, 0, v_toSeqLeft_1093_);
v___f_1105_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1105_, 0, v_toSeq_1092_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 4, v___f_1103_);
lean_ctor_set(v___x_1096_, 3, v___f_1104_);
lean_ctor_set(v___x_1096_, 2, v___f_1105_);
lean_ctor_set(v___x_1096_, 1, v___f_1098_);
lean_ctor_set(v___x_1096_, 0, v___x_1102_);
v___x_1107_ = v___x_1096_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v___f_1098_);
lean_ctor_set(v_reuseFailAlloc_1117_, 2, v___f_1105_);
lean_ctor_set(v_reuseFailAlloc_1117_, 3, v___f_1104_);
lean_ctor_set(v_reuseFailAlloc_1117_, 4, v___f_1103_);
v___x_1107_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; 
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 1, v___f_1099_);
lean_ctor_set(v___x_1089_, 0, v___x_1107_);
v___x_1109_ = v___x_1089_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v___f_1099_);
v___x_1109_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_8045__overap_1114_; lean_object* v___x_1115_; 
v___x_1110_ = l_ReaderT_instMonad___redArg(v___x_1109_);
v___x_1111_ = l_StateRefT_x27_instMonad___redArg(v___x_1110_);
v___x_1112_ = lean_box(0);
v___x_1113_ = l_instInhabitedOfMonad___redArg(v___x_1111_, v___x_1112_);
v___x_8045__overap_1114_ = lean_panic_fn_borrowed(v___x_1113_, v_msg_1053_);
lean_dec(v___x_1113_);
lean_inc(v___y_1059_);
lean_inc_ref(v___y_1058_);
lean_inc(v___y_1057_);
lean_inc_ref(v___y_1056_);
lean_inc(v___y_1055_);
lean_inc(v___y_1054_);
v___x_1115_ = lean_apply_7(v___x_8045__overap_1114_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, lean_box(0));
return v___x_1115_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v_msg_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec(v___y_1129_);
return v_res_1136_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1140_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__2));
v___x_1141_ = lean_unsigned_to_nat(40u);
v___x_1142_ = lean_unsigned_to_nat(49u);
v___x_1143_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__1));
v___x_1144_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__0));
v___x_1145_ = l_mkPanicMessageWithDecl(v___x_1144_, v___x_1143_, v___x_1142_, v___x_1141_, v___x_1140_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(lean_object* v_f_1146_, lean_object* v_e_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_ty_1156_; lean_object* v_body_1157_; uint8_t v___x_1160_; 
v___x_1160_ = l_Lean_Expr_hasFVar(v_e_1147_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_dec_ref(v_e_1147_);
lean_dec_ref(v_f_1146_);
v___x_1161_ = lean_box(0);
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
else
{
switch(lean_obj_tag(v_e_1147_))
{
case 1:
{
lean_object* v_fvarId_1163_; lean_object* v___x_1164_; 
v_fvarId_1163_ = lean_ctor_get(v_e_1147_, 0);
lean_inc(v_fvarId_1163_);
lean_dec_ref_known(v_e_1147_, 1);
lean_inc(v___y_1153_);
lean_inc_ref(v___y_1152_);
lean_inc(v___y_1151_);
lean_inc_ref(v___y_1150_);
lean_inc(v___y_1149_);
lean_inc(v___y_1148_);
v___x_1164_ = lean_apply_8(v_f_1146_, v_fvarId_1163_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, lean_box(0));
return v___x_1164_;
}
case 2:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
lean_dec_ref_known(v_e_1147_, 1);
lean_dec_ref(v_f_1146_);
v___x_1165_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_1166_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v___x_1165_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
return v___x_1166_;
}
case 5:
{
lean_object* v_fn_1167_; lean_object* v_arg_1168_; lean_object* v___x_1169_; 
v_fn_1167_ = lean_ctor_get(v_e_1147_, 0);
lean_inc_ref(v_fn_1167_);
v_arg_1168_ = lean_ctor_get(v_e_1147_, 1);
lean_inc_ref(v_arg_1168_);
lean_dec_ref_known(v_e_1147_, 2);
lean_inc_ref(v_f_1146_);
v___x_1169_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1146_, v_fn_1167_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_dec_ref_known(v___x_1169_, 1);
v_e_1147_ = v_arg_1168_;
goto _start;
}
else
{
lean_dec_ref(v_arg_1168_);
lean_dec_ref(v_f_1146_);
return v___x_1169_;
}
}
case 6:
{
lean_object* v_binderType_1171_; lean_object* v_body_1172_; 
v_binderType_1171_ = lean_ctor_get(v_e_1147_, 1);
lean_inc_ref(v_binderType_1171_);
v_body_1172_ = lean_ctor_get(v_e_1147_, 2);
lean_inc_ref(v_body_1172_);
lean_dec_ref_known(v_e_1147_, 3);
v_ty_1156_ = v_binderType_1171_;
v_body_1157_ = v_body_1172_;
goto v___jp_1155_;
}
case 7:
{
lean_object* v_binderType_1173_; lean_object* v_body_1174_; 
v_binderType_1173_ = lean_ctor_get(v_e_1147_, 1);
lean_inc_ref(v_binderType_1173_);
v_body_1174_ = lean_ctor_get(v_e_1147_, 2);
lean_inc_ref(v_body_1174_);
lean_dec_ref_known(v_e_1147_, 3);
v_ty_1156_ = v_binderType_1173_;
v_body_1157_ = v_body_1174_;
goto v___jp_1155_;
}
case 8:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
lean_dec_ref_known(v_e_1147_, 4);
lean_dec_ref(v_f_1146_);
v___x_1175_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_1176_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v___x_1175_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
return v___x_1176_;
}
case 11:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_dec_ref_known(v_e_1147_, 3);
lean_dec_ref(v_f_1146_);
v___x_1177_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_1178_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1(v___x_1177_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
return v___x_1178_;
}
default: 
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
lean_dec_ref(v_e_1147_);
lean_dec_ref(v_f_1146_);
v___x_1179_ = lean_box(0);
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
}
}
v___jp_1155_:
{
lean_object* v___x_1158_; 
lean_inc_ref(v_f_1146_);
v___x_1158_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1146_, v_ty_1156_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_dec_ref_known(v___x_1158_, 1);
v_e_1147_ = v_body_1157_;
goto _start;
}
else
{
lean_dec_ref(v_body_1157_);
lean_dec_ref(v_f_1146_);
return v___x_1158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___boxed(lean_object* v_f_1181_, lean_object* v_e_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1181_, v_e_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec(v___y_1183_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(lean_object* v_f_1191_, lean_object* v_param_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_type_1200_; lean_object* v___x_1201_; 
v_type_1200_ = lean_ctor_get(v_param_1192_, 2);
lean_inc_ref(v_type_1200_);
lean_dec_ref(v_param_1192_);
v___x_1201_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1191_, v_type_1200_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg___boxed(lean_object* v_f_1202_, lean_object* v_param_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v_f_1202_, v_param_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec(v___y_1204_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(uint8_t v_pu_1212_, lean_object* v_f_1213_, lean_object* v_as_1214_, size_t v_i_1215_, size_t v_stop_1216_, lean_object* v_b_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_usize_dec_eq(v_i_1215_, v_stop_1216_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_array_uget_borrowed(v_as_1214_, v_i_1215_);
lean_inc(v___x_1226_);
lean_inc_ref(v_f_1213_);
v___x_1227_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v_f_1213_, v___x_1226_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; size_t v___x_1229_; size_t v___x_1230_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1228_);
lean_dec_ref_known(v___x_1227_, 1);
v___x_1229_ = ((size_t)1ULL);
v___x_1230_ = lean_usize_add(v_i_1215_, v___x_1229_);
v_i_1215_ = v___x_1230_;
v_b_1217_ = v_a_1228_;
goto _start;
}
else
{
lean_dec_ref(v_f_1213_);
return v___x_1227_;
}
}
else
{
lean_object* v___x_1232_; 
lean_dec_ref(v_f_1213_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v_b_1217_);
return v___x_1232_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5___boxed(lean_object* v_pu_1233_, lean_object* v_f_1234_, lean_object* v_as_1235_, lean_object* v_i_1236_, lean_object* v_stop_1237_, lean_object* v_b_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
uint8_t v_pu_boxed_1246_; size_t v_i_boxed_1247_; size_t v_stop_boxed_1248_; lean_object* v_res_1249_; 
v_pu_boxed_1246_ = lean_unbox(v_pu_1233_);
v_i_boxed_1247_ = lean_unbox_usize(v_i_1236_);
lean_dec(v_i_1236_);
v_stop_boxed_1248_ = lean_unbox_usize(v_stop_1237_);
lean_dec(v_stop_1237_);
v_res_1249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(v_pu_boxed_1246_, v_f_1234_, v_as_1235_, v_i_boxed_1247_, v_stop_boxed_1248_, v_b_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v_as_1235_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(lean_object* v_f_1250_, lean_object* v_arg_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
switch(lean_obj_tag(v_arg_1251_))
{
case 0:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
lean_dec_ref(v_f_1250_);
v___x_1259_ = lean_box(0);
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
case 1:
{
lean_object* v_fvarId_1261_; lean_object* v___x_1262_; 
v_fvarId_1261_ = lean_ctor_get(v_arg_1251_, 0);
lean_inc(v_fvarId_1261_);
lean_dec_ref_known(v_arg_1251_, 1);
lean_inc(v___y_1257_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc_ref(v___y_1254_);
lean_inc(v___y_1253_);
lean_inc(v___y_1252_);
v___x_1262_ = lean_apply_8(v_f_1250_, v_fvarId_1261_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, lean_box(0));
return v___x_1262_;
}
default: 
{
lean_object* v_expr_1263_; lean_object* v___x_1264_; 
v_expr_1263_ = lean_ctor_get(v_arg_1251_, 0);
lean_inc_ref(v_expr_1263_);
lean_dec_ref_known(v_arg_1251_, 1);
v___x_1264_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1250_, v_expr_1263_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
return v___x_1264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg___boxed(lean_object* v_f_1265_, lean_object* v_arg_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1265_, v_arg_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec(v___y_1267_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(uint8_t v_pu_1275_, lean_object* v_f_1276_, lean_object* v_as_1277_, size_t v_i_1278_, size_t v_stop_1279_, lean_object* v_b_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
uint8_t v___x_1288_; 
v___x_1288_ = lean_usize_dec_eq(v_i_1278_, v_stop_1279_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_array_uget_borrowed(v_as_1277_, v_i_1278_);
lean_inc(v___x_1289_);
lean_inc_ref(v_f_1276_);
v___x_1290_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1276_, v___x_1289_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; size_t v___x_1292_; size_t v___x_1293_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1290_, 1);
v___x_1292_ = ((size_t)1ULL);
v___x_1293_ = lean_usize_add(v_i_1278_, v___x_1292_);
v_i_1278_ = v___x_1293_;
v_b_1280_ = v_a_1291_;
goto _start;
}
else
{
lean_dec_ref(v_f_1276_);
return v___x_1290_;
}
}
else
{
lean_object* v___x_1295_; 
lean_dec_ref(v_f_1276_);
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v_b_1280_);
return v___x_1295_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6___boxed(lean_object* v_pu_1296_, lean_object* v_f_1297_, lean_object* v_as_1298_, lean_object* v_i_1299_, lean_object* v_stop_1300_, lean_object* v_b_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
uint8_t v_pu_boxed_1309_; size_t v_i_boxed_1310_; size_t v_stop_boxed_1311_; lean_object* v_res_1312_; 
v_pu_boxed_1309_ = lean_unbox(v_pu_1296_);
v_i_boxed_1310_ = lean_unbox_usize(v_i_1299_);
lean_dec(v_i_1299_);
v_stop_boxed_1311_ = lean_unbox_usize(v_stop_1300_);
lean_dec(v_stop_1300_);
v_res_1312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_boxed_1309_, v_f_1297_, v_as_1298_, v_i_boxed_1310_, v_stop_boxed_1311_, v_b_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v_as_1298_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(uint8_t v_pu_1313_, lean_object* v_f_1314_, lean_object* v_e_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v_args_1324_; 
switch(lean_obj_tag(v_e_1315_))
{
case 2:
{
lean_object* v_struct_1333_; lean_object* v___x_1334_; 
v_struct_1333_ = lean_ctor_get(v_e_1315_, 2);
lean_inc(v_struct_1333_);
lean_dec_ref_known(v_e_1315_, 3);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1334_ = lean_apply_8(v_f_1314_, v_struct_1333_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1334_;
}
case 3:
{
lean_object* v_args_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; 
v_args_1335_ = lean_ctor_get(v_e_1315_, 2);
lean_inc_ref(v_args_1335_);
lean_dec_ref_known(v_e_1315_, 3);
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = lean_array_get_size(v_args_1335_);
v___x_1338_ = lean_box(0);
v___x_1339_ = lean_nat_dec_lt(v___x_1336_, v___x_1337_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; 
lean_dec_ref(v_args_1335_);
lean_dec_ref(v_f_1314_);
v___x_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
return v___x_1340_;
}
else
{
size_t v___x_1341_; size_t v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = ((size_t)0ULL);
v___x_1342_ = lean_usize_of_nat(v___x_1337_);
v___x_1343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1313_, v_f_1314_, v_args_1335_, v___x_1341_, v___x_1342_, v___x_1338_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec_ref(v_args_1335_);
return v___x_1343_;
}
}
case 4:
{
lean_object* v_fvarId_1344_; lean_object* v_args_1345_; lean_object* v___x_1346_; 
v_fvarId_1344_ = lean_ctor_get(v_e_1315_, 0);
lean_inc(v_fvarId_1344_);
v_args_1345_ = lean_ctor_get(v_e_1315_, 1);
lean_inc_ref(v_args_1345_);
lean_dec_ref_known(v_e_1315_, 2);
lean_inc_ref(v_f_1314_);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1346_ = lean_apply_8(v_f_1314_, v_fvarId_1344_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1360_; 
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1360_ == 0)
{
lean_object* v_unused_1361_; 
v_unused_1361_ = lean_ctor_get(v___x_1346_, 0);
lean_dec(v_unused_1361_);
v___x_1348_ = v___x_1346_;
v_isShared_1349_ = v_isSharedCheck_1360_;
goto v_resetjp_1347_;
}
else
{
lean_dec(v___x_1346_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1360_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1350_ = lean_unsigned_to_nat(0u);
v___x_1351_ = lean_array_get_size(v_args_1345_);
v___x_1352_ = lean_box(0);
v___x_1353_ = lean_nat_dec_lt(v___x_1350_, v___x_1351_);
if (v___x_1353_ == 0)
{
lean_object* v___x_1355_; 
lean_dec_ref(v_args_1345_);
lean_dec_ref(v_f_1314_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1352_);
v___x_1355_ = v___x_1348_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1352_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
else
{
size_t v___x_1357_; size_t v___x_1358_; lean_object* v___x_1359_; 
lean_del_object(v___x_1348_);
v___x_1357_ = ((size_t)0ULL);
v___x_1358_ = lean_usize_of_nat(v___x_1351_);
v___x_1359_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1313_, v_f_1314_, v_args_1345_, v___x_1357_, v___x_1358_, v___x_1352_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec_ref(v_args_1345_);
return v___x_1359_;
}
}
}
else
{
lean_dec_ref(v_args_1345_);
lean_dec_ref(v_f_1314_);
return v___x_1346_;
}
}
case 5:
{
lean_object* v_args_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v_args_1362_ = lean_ctor_get(v_e_1315_, 1);
lean_inc_ref(v_args_1362_);
lean_dec_ref_known(v_e_1315_, 2);
v___x_1363_ = lean_unsigned_to_nat(0u);
v___x_1364_ = lean_array_get_size(v_args_1362_);
v___x_1365_ = lean_box(0);
v___x_1366_ = lean_nat_dec_lt(v___x_1363_, v___x_1364_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
lean_dec_ref(v_args_1362_);
lean_dec_ref(v_f_1314_);
v___x_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1365_);
return v___x_1367_;
}
else
{
size_t v___x_1368_; size_t v___x_1369_; lean_object* v___x_1370_; 
v___x_1368_ = ((size_t)0ULL);
v___x_1369_ = lean_usize_of_nat(v___x_1364_);
v___x_1370_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1313_, v_f_1314_, v_args_1362_, v___x_1368_, v___x_1369_, v___x_1365_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec_ref(v_args_1362_);
return v___x_1370_;
}
}
case 6:
{
lean_object* v_var_1371_; lean_object* v___x_1372_; 
v_var_1371_ = lean_ctor_get(v_e_1315_, 1);
lean_inc(v_var_1371_);
lean_dec_ref_known(v_e_1315_, 2);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1372_ = lean_apply_8(v_f_1314_, v_var_1371_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1372_;
}
case 7:
{
lean_object* v_var_1373_; lean_object* v___x_1374_; 
v_var_1373_ = lean_ctor_get(v_e_1315_, 1);
lean_inc(v_var_1373_);
lean_dec_ref_known(v_e_1315_, 2);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1374_ = lean_apply_8(v_f_1314_, v_var_1373_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1374_;
}
case 8:
{
lean_object* v_var_1375_; lean_object* v___x_1376_; 
v_var_1375_ = lean_ctor_get(v_e_1315_, 2);
lean_inc(v_var_1375_);
lean_dec_ref_known(v_e_1315_, 3);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1376_ = lean_apply_8(v_f_1314_, v_var_1375_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1376_;
}
case 9:
{
lean_object* v_args_1377_; 
v_args_1377_ = lean_ctor_get(v_e_1315_, 1);
lean_inc_ref(v_args_1377_);
lean_dec_ref_known(v_e_1315_, 2);
v_args_1324_ = v_args_1377_;
goto v___jp_1323_;
}
case 10:
{
lean_object* v_args_1378_; 
v_args_1378_ = lean_ctor_get(v_e_1315_, 1);
lean_inc_ref(v_args_1378_);
lean_dec_ref_known(v_e_1315_, 2);
v_args_1324_ = v_args_1378_;
goto v___jp_1323_;
}
case 11:
{
lean_object* v_var_1379_; lean_object* v___x_1380_; 
v_var_1379_ = lean_ctor_get(v_e_1315_, 1);
lean_inc(v_var_1379_);
lean_dec_ref_known(v_e_1315_, 2);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1380_ = lean_apply_8(v_f_1314_, v_var_1379_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1380_;
}
case 12:
{
lean_object* v_var_1381_; lean_object* v_args_1382_; lean_object* v___x_1383_; 
v_var_1381_ = lean_ctor_get(v_e_1315_, 0);
lean_inc(v_var_1381_);
v_args_1382_ = lean_ctor_get(v_e_1315_, 2);
lean_inc_ref(v_args_1382_);
lean_dec_ref_known(v_e_1315_, 3);
lean_inc_ref(v_f_1314_);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1383_ = lean_apply_8(v_f_1314_, v_var_1381_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1397_; 
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v___x_1383_, 0);
lean_dec(v_unused_1398_);
v___x_1385_ = v___x_1383_;
v_isShared_1386_ = v_isSharedCheck_1397_;
goto v_resetjp_1384_;
}
else
{
lean_dec(v___x_1383_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1397_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_array_get_size(v_args_1382_);
v___x_1389_ = lean_box(0);
v___x_1390_ = lean_nat_dec_lt(v___x_1387_, v___x_1388_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1392_; 
lean_dec_ref(v_args_1382_);
lean_dec_ref(v_f_1314_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1389_);
v___x_1392_ = v___x_1385_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1389_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
else
{
size_t v___x_1394_; size_t v___x_1395_; lean_object* v___x_1396_; 
lean_del_object(v___x_1385_);
v___x_1394_ = ((size_t)0ULL);
v___x_1395_ = lean_usize_of_nat(v___x_1388_);
v___x_1396_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1313_, v_f_1314_, v_args_1382_, v___x_1394_, v___x_1395_, v___x_1389_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec_ref(v_args_1382_);
return v___x_1396_;
}
}
}
else
{
lean_dec_ref(v_args_1382_);
lean_dec_ref(v_f_1314_);
return v___x_1383_;
}
}
case 13:
{
lean_object* v_fvarId_1399_; lean_object* v___x_1400_; 
v_fvarId_1399_ = lean_ctor_get(v_e_1315_, 1);
lean_inc(v_fvarId_1399_);
lean_dec_ref_known(v_e_1315_, 2);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1400_ = lean_apply_8(v_f_1314_, v_fvarId_1399_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1400_;
}
case 14:
{
lean_object* v_fvarId_1401_; lean_object* v___x_1402_; 
v_fvarId_1401_ = lean_ctor_get(v_e_1315_, 0);
lean_inc(v_fvarId_1401_);
lean_dec_ref_known(v_e_1315_, 1);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1402_ = lean_apply_8(v_f_1314_, v_fvarId_1401_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1402_;
}
case 15:
{
lean_object* v_fvarId_1403_; lean_object* v___x_1404_; 
v_fvarId_1403_ = lean_ctor_get(v_e_1315_, 0);
lean_inc(v_fvarId_1403_);
lean_dec_ref_known(v_e_1315_, 1);
lean_inc(v___y_1321_);
lean_inc_ref(v___y_1320_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1318_);
lean_inc(v___y_1317_);
lean_inc(v___y_1316_);
v___x_1404_ = lean_apply_8(v_f_1314_, v_fvarId_1403_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, lean_box(0));
return v___x_1404_;
}
default: 
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec(v_e_1315_);
lean_dec_ref(v_f_1314_);
v___x_1405_ = lean_box(0);
v___x_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
return v___x_1406_;
}
}
v___jp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; uint8_t v___x_1328_; 
v___x_1325_ = lean_unsigned_to_nat(0u);
v___x_1326_ = lean_array_get_size(v_args_1324_);
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_nat_dec_lt(v___x_1325_, v___x_1326_);
if (v___x_1328_ == 0)
{
lean_object* v___x_1329_; 
lean_dec_ref(v_args_1324_);
lean_dec_ref(v_f_1314_);
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
return v___x_1329_;
}
else
{
size_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = ((size_t)0ULL);
v___x_1331_ = lean_usize_of_nat(v___x_1326_);
v___x_1332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1313_, v_f_1314_, v_args_1324_, v___x_1330_, v___x_1331_, v___x_1327_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec_ref(v_args_1324_);
return v___x_1332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6___boxed(lean_object* v_pu_1407_, lean_object* v_f_1408_, lean_object* v_e_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
uint8_t v_pu_boxed_1417_; lean_object* v_res_1418_; 
v_pu_boxed_1417_ = lean_unbox(v_pu_1407_);
v_res_1418_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(v_pu_boxed_1417_, v_f_1408_, v_e_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec_ref(v___y_1414_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec(v___y_1410_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(uint8_t v_pu_1419_, lean_object* v_f_1420_, lean_object* v_decl_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_type_1429_; lean_object* v_value_1430_; lean_object* v___x_1431_; 
v_type_1429_ = lean_ctor_get(v_decl_1421_, 2);
lean_inc_ref(v_type_1429_);
v_value_1430_ = lean_ctor_get(v_decl_1421_, 3);
lean_inc(v_value_1430_);
lean_dec_ref(v_decl_1421_);
lean_inc_ref(v_f_1420_);
v___x_1431_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1420_, v_type_1429_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v___x_1432_; 
lean_dec_ref_known(v___x_1431_, 1);
v___x_1432_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4_spec__6(v_pu_1419_, v_f_1420_, v_value_1430_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
return v___x_1432_;
}
else
{
lean_dec(v_value_1430_);
lean_dec_ref(v_f_1420_);
return v___x_1431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4___boxed(lean_object* v_pu_1433_, lean_object* v_f_1434_, lean_object* v_decl_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
uint8_t v_pu_boxed_1443_; lean_object* v_res_1444_; 
v_pu_boxed_1443_ = lean_unbox(v_pu_1433_);
v_res_1444_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(v_pu_boxed_1443_, v_f_1434_, v_decl_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec(v___y_1436_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0___boxed(lean_object* v_pu_1445_, lean_object* v_f_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
uint8_t v_pu_boxed_1455_; lean_object* v_res_1456_; 
v_pu_boxed_1455_ = lean_unbox(v_pu_1445_);
v_res_1456_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0(v_pu_boxed_1455_, v_f_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec(v___y_1448_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(uint8_t v_pu_1457_, lean_object* v_f_1458_, lean_object* v_as_1459_, size_t v_i_1460_, size_t v_stop_1461_, lean_object* v_b_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
uint8_t v___x_1470_; 
v___x_1470_ = lean_usize_dec_eq(v_i_1460_, v_stop_1461_);
if (v___x_1470_ == 0)
{
lean_object* v___x_1471_; lean_object* v___f_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1471_ = lean_box(v_pu_1457_);
lean_inc_ref(v_f_1458_);
v___f_1472_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0___boxed), 10, 2);
lean_closure_set(v___f_1472_, 0, v___x_1471_);
lean_closure_set(v___f_1472_, 1, v_f_1458_);
v___x_1473_ = lean_array_uget_borrowed(v_as_1459_, v_i_1460_);
lean_inc(v___x_1473_);
v___x_1474_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(v___x_1473_, v___f_1472_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; size_t v___x_1476_; size_t v___x_1477_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v___x_1474_, 1);
v___x_1476_ = ((size_t)1ULL);
v___x_1477_ = lean_usize_add(v_i_1460_, v___x_1476_);
v_i_1460_ = v___x_1477_;
v_b_1462_ = v_a_1475_;
goto _start;
}
else
{
lean_dec_ref(v_f_1458_);
return v___x_1474_;
}
}
else
{
lean_object* v___x_1479_; 
lean_dec_ref(v_f_1458_);
v___x_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1479_, 0, v_b_1462_);
return v___x_1479_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(uint8_t v_pu_1480_, lean_object* v_f_1481_, lean_object* v_c_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
switch(lean_obj_tag(v_c_1482_))
{
case 0:
{
lean_object* v_decl_1490_; lean_object* v_k_1491_; lean_object* v___x_1492_; 
v_decl_1490_ = lean_ctor_get(v_c_1482_, 0);
lean_inc_ref(v_decl_1490_);
v_k_1491_ = lean_ctor_get(v_c_1482_, 1);
lean_inc_ref(v_k_1491_);
lean_dec_ref_known(v_c_1482_, 2);
lean_inc_ref(v_f_1481_);
v___x_1492_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__4(v_pu_1480_, v_f_1481_, v_decl_1490_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_dec_ref_known(v___x_1492_, 1);
v_c_1482_ = v_k_1491_;
goto _start;
}
else
{
lean_dec_ref(v_k_1491_);
lean_dec_ref(v_f_1481_);
return v___x_1492_;
}
}
case 3:
{
lean_object* v_fvarId_1494_; lean_object* v_args_1495_; lean_object* v___x_1496_; 
v_fvarId_1494_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1494_);
v_args_1495_ = lean_ctor_get(v_c_1482_, 1);
lean_inc_ref(v_args_1495_);
lean_dec_ref_known(v_c_1482_, 2);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1496_ = lean_apply_8(v_f_1481_, v_fvarId_1494_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1510_; 
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1510_ == 0)
{
lean_object* v_unused_1511_; 
v_unused_1511_ = lean_ctor_get(v___x_1496_, 0);
lean_dec(v_unused_1511_);
v___x_1498_ = v___x_1496_;
v_isShared_1499_ = v_isSharedCheck_1510_;
goto v_resetjp_1497_;
}
else
{
lean_dec(v___x_1496_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1510_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; uint8_t v___x_1503_; 
v___x_1500_ = lean_unsigned_to_nat(0u);
v___x_1501_ = lean_array_get_size(v_args_1495_);
v___x_1502_ = lean_box(0);
v___x_1503_ = lean_nat_dec_lt(v___x_1500_, v___x_1501_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1505_; 
lean_dec_ref(v_args_1495_);
lean_dec_ref(v_f_1481_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1502_);
v___x_1505_ = v___x_1498_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1502_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
else
{
size_t v___x_1507_; size_t v___x_1508_; lean_object* v___x_1509_; 
lean_del_object(v___x_1498_);
v___x_1507_ = ((size_t)0ULL);
v___x_1508_ = lean_usize_of_nat(v___x_1501_);
v___x_1509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__6(v_pu_1480_, v_f_1481_, v_args_1495_, v___x_1507_, v___x_1508_, v___x_1502_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec_ref(v_args_1495_);
return v___x_1509_;
}
}
}
else
{
lean_dec_ref(v_args_1495_);
lean_dec_ref(v_f_1481_);
return v___x_1496_;
}
}
case 4:
{
lean_object* v_cases_1512_; lean_object* v_resultType_1513_; lean_object* v_discr_1514_; lean_object* v_alts_1515_; lean_object* v___x_1516_; 
v_cases_1512_ = lean_ctor_get(v_c_1482_, 0);
lean_inc_ref(v_cases_1512_);
lean_dec_ref_known(v_c_1482_, 1);
v_resultType_1513_ = lean_ctor_get(v_cases_1512_, 1);
lean_inc_ref(v_resultType_1513_);
v_discr_1514_ = lean_ctor_get(v_cases_1512_, 2);
lean_inc(v_discr_1514_);
v_alts_1515_ = lean_ctor_get(v_cases_1512_, 3);
lean_inc_ref(v_alts_1515_);
lean_dec_ref(v_cases_1512_);
lean_inc_ref(v_f_1481_);
v___x_1516_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1481_, v_resultType_1513_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_object* v___x_1517_; 
lean_dec_ref_known(v___x_1516_, 1);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1517_ = lean_apply_8(v_f_1481_, v_discr_1514_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1531_; 
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1531_ == 0)
{
lean_object* v_unused_1532_; 
v_unused_1532_ = lean_ctor_get(v___x_1517_, 0);
lean_dec(v_unused_1532_);
v___x_1519_ = v___x_1517_;
v_isShared_1520_ = v_isSharedCheck_1531_;
goto v_resetjp_1518_;
}
else
{
lean_dec(v___x_1517_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1531_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v___x_1521_ = lean_unsigned_to_nat(0u);
v___x_1522_ = lean_array_get_size(v_alts_1515_);
v___x_1523_ = lean_box(0);
v___x_1524_ = lean_nat_dec_lt(v___x_1521_, v___x_1522_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1526_; 
lean_dec_ref(v_alts_1515_);
lean_dec_ref(v_f_1481_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 0, v___x_1523_);
v___x_1526_ = v___x_1519_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1523_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
else
{
size_t v___x_1528_; size_t v___x_1529_; lean_object* v___x_1530_; 
lean_del_object(v___x_1519_);
v___x_1528_ = ((size_t)0ULL);
v___x_1529_ = lean_usize_of_nat(v___x_1522_);
v___x_1530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(v_pu_1480_, v_f_1481_, v_alts_1515_, v___x_1528_, v___x_1529_, v___x_1523_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec_ref(v_alts_1515_);
return v___x_1530_;
}
}
}
else
{
lean_dec_ref(v_alts_1515_);
lean_dec_ref(v_f_1481_);
return v___x_1517_;
}
}
else
{
lean_dec_ref(v_alts_1515_);
lean_dec(v_discr_1514_);
lean_dec_ref(v_f_1481_);
return v___x_1516_;
}
}
case 5:
{
lean_object* v_fvarId_1533_; lean_object* v___x_1534_; 
v_fvarId_1533_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1533_);
lean_dec_ref_known(v_c_1482_, 1);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1534_ = lean_apply_8(v_f_1481_, v_fvarId_1533_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
return v___x_1534_;
}
case 6:
{
lean_object* v_type_1535_; lean_object* v___x_1536_; 
v_type_1535_ = lean_ctor_get(v_c_1482_, 0);
lean_inc_ref(v_type_1535_);
lean_dec_ref_known(v_c_1482_, 1);
v___x_1536_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1481_, v_type_1535_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
return v___x_1536_;
}
case 7:
{
lean_object* v_fvarId_1537_; lean_object* v_y_1538_; lean_object* v_k_1539_; lean_object* v___x_1540_; 
v_fvarId_1537_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1537_);
v_y_1538_ = lean_ctor_get(v_c_1482_, 2);
lean_inc(v_y_1538_);
v_k_1539_ = lean_ctor_get(v_c_1482_, 3);
lean_inc_ref(v_k_1539_);
lean_dec_ref_known(v_c_1482_, 4);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1540_ = lean_apply_8(v_f_1481_, v_fvarId_1537_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v___x_1541_; 
lean_dec_ref_known(v___x_1540_, 1);
lean_inc_ref(v_f_1481_);
v___x_1541_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1481_, v_y_1538_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_dec_ref_known(v___x_1541_, 1);
v_c_1482_ = v_k_1539_;
goto _start;
}
else
{
lean_dec_ref(v_k_1539_);
lean_dec_ref(v_f_1481_);
return v___x_1541_;
}
}
else
{
lean_dec_ref(v_k_1539_);
lean_dec(v_y_1538_);
lean_dec_ref(v_f_1481_);
return v___x_1540_;
}
}
case 8:
{
lean_object* v_fvarId_1543_; lean_object* v_y_1544_; lean_object* v_k_1545_; lean_object* v___x_1546_; 
v_fvarId_1543_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1543_);
v_y_1544_ = lean_ctor_get(v_c_1482_, 2);
lean_inc(v_y_1544_);
v_k_1545_ = lean_ctor_get(v_c_1482_, 3);
lean_inc_ref(v_k_1545_);
lean_dec_ref_known(v_c_1482_, 4);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1546_ = lean_apply_8(v_f_1481_, v_fvarId_1543_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v___x_1547_; 
lean_dec_ref_known(v___x_1546_, 1);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1547_ = lean_apply_8(v_f_1481_, v_y_1544_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_dec_ref_known(v___x_1547_, 1);
v_c_1482_ = v_k_1545_;
goto _start;
}
else
{
lean_dec_ref(v_k_1545_);
lean_dec_ref(v_f_1481_);
return v___x_1547_;
}
}
else
{
lean_dec_ref(v_k_1545_);
lean_dec(v_y_1544_);
lean_dec_ref(v_f_1481_);
return v___x_1546_;
}
}
case 9:
{
lean_object* v_fvarId_1549_; lean_object* v_y_1550_; lean_object* v_ty_1551_; lean_object* v_k_1552_; lean_object* v___x_1553_; 
v_fvarId_1549_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1549_);
v_y_1550_ = lean_ctor_get(v_c_1482_, 3);
lean_inc(v_y_1550_);
v_ty_1551_ = lean_ctor_get(v_c_1482_, 4);
lean_inc_ref(v_ty_1551_);
v_k_1552_ = lean_ctor_get(v_c_1482_, 5);
lean_inc_ref(v_k_1552_);
lean_dec_ref_known(v_c_1482_, 6);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1553_ = lean_apply_8(v_f_1481_, v_fvarId_1549_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v___x_1554_; 
lean_dec_ref_known(v___x_1553_, 1);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1554_ = lean_apply_8(v_f_1481_, v_y_1550_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v___x_1555_; 
lean_dec_ref_known(v___x_1554_, 1);
lean_inc_ref(v_f_1481_);
v___x_1555_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1481_, v_ty_1551_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_dec_ref_known(v___x_1555_, 1);
v_c_1482_ = v_k_1552_;
goto _start;
}
else
{
lean_dec_ref(v_k_1552_);
lean_dec_ref(v_f_1481_);
return v___x_1555_;
}
}
else
{
lean_dec_ref(v_k_1552_);
lean_dec_ref(v_ty_1551_);
lean_dec_ref(v_f_1481_);
return v___x_1554_;
}
}
else
{
lean_dec_ref(v_k_1552_);
lean_dec_ref(v_ty_1551_);
lean_dec(v_y_1550_);
lean_dec_ref(v_f_1481_);
return v___x_1553_;
}
}
case 10:
{
lean_object* v_fvarId_1557_; lean_object* v_k_1558_; lean_object* v___x_1559_; 
v_fvarId_1557_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1557_);
v_k_1558_ = lean_ctor_get(v_c_1482_, 2);
lean_inc_ref(v_k_1558_);
lean_dec_ref_known(v_c_1482_, 3);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1559_ = lean_apply_8(v_f_1481_, v_fvarId_1557_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_dec_ref_known(v___x_1559_, 1);
v_c_1482_ = v_k_1558_;
goto _start;
}
else
{
lean_dec_ref(v_k_1558_);
lean_dec_ref(v_f_1481_);
return v___x_1559_;
}
}
case 11:
{
lean_object* v_fvarId_1561_; lean_object* v_k_1562_; lean_object* v___x_1563_; 
v_fvarId_1561_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1561_);
v_k_1562_ = lean_ctor_get(v_c_1482_, 2);
lean_inc_ref(v_k_1562_);
lean_dec_ref_known(v_c_1482_, 3);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1563_ = lean_apply_8(v_f_1481_, v_fvarId_1561_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_dec_ref_known(v___x_1563_, 1);
v_c_1482_ = v_k_1562_;
goto _start;
}
else
{
lean_dec_ref(v_k_1562_);
lean_dec_ref(v_f_1481_);
return v___x_1563_;
}
}
case 12:
{
lean_object* v_fvarId_1565_; lean_object* v_k_1566_; lean_object* v___x_1567_; 
v_fvarId_1565_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1565_);
v_k_1566_ = lean_ctor_get(v_c_1482_, 3);
lean_inc_ref(v_k_1566_);
lean_dec_ref_known(v_c_1482_, 4);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1567_ = lean_apply_8(v_f_1481_, v_fvarId_1565_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_dec_ref_known(v___x_1567_, 1);
v_c_1482_ = v_k_1566_;
goto _start;
}
else
{
lean_dec_ref(v_k_1566_);
lean_dec_ref(v_f_1481_);
return v___x_1567_;
}
}
case 13:
{
lean_object* v_fvarId_1569_; lean_object* v_k_1570_; lean_object* v___x_1571_; 
v_fvarId_1569_ = lean_ctor_get(v_c_1482_, 0);
lean_inc(v_fvarId_1569_);
v_k_1570_ = lean_ctor_get(v_c_1482_, 1);
lean_inc_ref(v_k_1570_);
lean_dec_ref_known(v_c_1482_, 2);
lean_inc_ref(v_f_1481_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc(v___y_1483_);
v___x_1571_ = lean_apply_8(v_f_1481_, v_fvarId_1569_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, lean_box(0));
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_dec_ref_known(v___x_1571_, 1);
v_c_1482_ = v_k_1570_;
goto _start;
}
else
{
lean_dec_ref(v_k_1570_);
lean_dec_ref(v_f_1481_);
return v___x_1571_;
}
}
default: 
{
lean_object* v_decl_1573_; lean_object* v_k_1574_; lean_object* v_params_1575_; lean_object* v_type_1576_; lean_object* v_value_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v_decl_1573_ = lean_ctor_get(v_c_1482_, 0);
lean_inc_ref(v_decl_1573_);
v_k_1574_ = lean_ctor_get(v_c_1482_, 1);
lean_inc_ref(v_k_1574_);
lean_dec_ref(v_c_1482_);
v_params_1575_ = lean_ctor_get(v_decl_1573_, 2);
lean_inc_ref(v_params_1575_);
v_type_1576_ = lean_ctor_get(v_decl_1573_, 3);
lean_inc_ref(v_type_1576_);
v_value_1577_ = lean_ctor_get(v_decl_1573_, 4);
lean_inc_ref(v_value_1577_);
lean_dec_ref(v_decl_1573_);
v___x_1578_ = lean_unsigned_to_nat(0u);
v___x_1579_ = lean_array_get_size(v_params_1575_);
v___x_1580_ = lean_nat_dec_lt(v___x_1578_, v___x_1579_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; 
lean_dec_ref(v_params_1575_);
lean_inc_ref(v_f_1481_);
v___x_1581_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1481_, v_type_1576_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v___x_1582_; 
lean_dec_ref_known(v___x_1581_, 1);
lean_inc_ref(v_f_1481_);
v___x_1582_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_1480_, v_f_1481_, v_value_1577_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_dec_ref_known(v___x_1582_, 1);
v_c_1482_ = v_k_1574_;
goto _start;
}
else
{
lean_dec_ref(v_k_1574_);
lean_dec_ref(v_f_1481_);
return v___x_1582_;
}
}
else
{
lean_dec_ref(v_value_1577_);
lean_dec_ref(v_k_1574_);
lean_dec_ref(v_f_1481_);
return v___x_1581_;
}
}
else
{
lean_object* v___x_1584_; size_t v___x_1585_; size_t v___x_1586_; lean_object* v___x_1587_; 
v___x_1584_ = lean_box(0);
v___x_1585_ = ((size_t)0ULL);
v___x_1586_ = lean_usize_of_nat(v___x_1579_);
lean_inc_ref(v_f_1481_);
v___x_1587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__5(v_pu_1480_, v_f_1481_, v_params_1575_, v___x_1585_, v___x_1586_, v___x_1584_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec_ref(v_params_1575_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v___x_1588_; 
lean_dec_ref_known(v___x_1587_, 1);
lean_inc_ref(v_f_1481_);
v___x_1588_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0(v_f_1481_, v_type_1576_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v___x_1589_; 
lean_dec_ref_known(v___x_1588_, 1);
lean_inc_ref(v_f_1481_);
v___x_1589_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_1480_, v_f_1481_, v_value_1577_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_dec_ref_known(v___x_1589_, 1);
v_c_1482_ = v_k_1574_;
goto _start;
}
else
{
lean_dec_ref(v_k_1574_);
lean_dec_ref(v_f_1481_);
return v___x_1589_;
}
}
else
{
lean_dec_ref(v_value_1577_);
lean_dec_ref(v_k_1574_);
lean_dec_ref(v_f_1481_);
return v___x_1588_;
}
}
else
{
lean_dec_ref(v_value_1577_);
lean_dec_ref(v_type_1576_);
lean_dec_ref(v_k_1574_);
lean_dec_ref(v_f_1481_);
return v___x_1587_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___lam__0(uint8_t v_pu_1591_, lean_object* v_f_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_1591_, v_f_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7___boxed(lean_object* v_pu_1602_, lean_object* v_f_1603_, lean_object* v_as_1604_, lean_object* v_i_1605_, lean_object* v_stop_1606_, lean_object* v_b_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
uint8_t v_pu_boxed_1615_; size_t v_i_boxed_1616_; size_t v_stop_boxed_1617_; lean_object* v_res_1618_; 
v_pu_boxed_1615_ = lean_unbox(v_pu_1602_);
v_i_boxed_1616_ = lean_unbox_usize(v_i_1605_);
lean_dec(v_i_1605_);
v_stop_boxed_1617_ = lean_unbox_usize(v_stop_1606_);
lean_dec(v_stop_1606_);
v_res_1618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__7(v_pu_boxed_1615_, v_f_1603_, v_as_1604_, v_i_boxed_1616_, v_stop_boxed_1617_, v_b_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v_as_1604_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1___boxed(lean_object* v_pu_1619_, lean_object* v_f_1620_, lean_object* v_c_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
uint8_t v_pu_boxed_1629_; lean_object* v_res_1630_; 
v_pu_boxed_1629_ = lean_unbox(v_pu_1619_);
v_res_1630_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v_pu_boxed_1629_, v_f_1620_, v_c_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec(v___y_1622_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(lean_object* v___x_1631_, lean_object* v_as_1632_, size_t v_i_1633_, size_t v_stop_1634_, lean_object* v_b_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
uint8_t v___x_1643_; 
v___x_1643_ = lean_usize_dec_eq(v_i_1633_, v_stop_1634_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_inc(v___x_1631_);
v___x_1644_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed), 9, 1);
lean_closure_set(v___x_1644_, 0, v___x_1631_);
v___x_1645_ = lean_array_uget_borrowed(v_as_1632_, v_i_1633_);
lean_inc(v___x_1645_);
v___x_1646_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v___x_1644_, v___x_1645_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; size_t v___x_1648_; size_t v___x_1649_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
v___x_1648_ = ((size_t)1ULL);
v___x_1649_ = lean_usize_add(v_i_1633_, v___x_1648_);
v_i_1633_ = v___x_1649_;
v_b_1635_ = v_a_1647_;
goto _start;
}
else
{
lean_dec(v___x_1631_);
return v___x_1646_;
}
}
else
{
lean_object* v___x_1651_; 
lean_dec(v___x_1631_);
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v_b_1635_);
return v___x_1651_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2___boxed(lean_object* v___x_1652_, lean_object* v_as_1653_, lean_object* v_i_1654_, lean_object* v_stop_1655_, lean_object* v_b_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
size_t v_i_boxed_1664_; size_t v_stop_boxed_1665_; lean_object* v_res_1666_; 
v_i_boxed_1664_ = lean_unbox_usize(v_i_1654_);
lean_dec(v_i_1654_);
v_stop_boxed_1665_ = lean_unbox_usize(v_stop_1655_);
lean_dec(v_stop_1655_);
v_res_1666_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(v___x_1652_, v_as_1653_, v_i_boxed_1664_, v_stop_boxed_1665_, v_b_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v_as_1653_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(lean_object* v_alt_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
uint8_t v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1675_ = 0;
v___x_1676_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v_alt_1667_);
lean_inc(v___x_1676_);
v___x_1677_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar___boxed), 9, 1);
lean_closure_set(v___x_1677_, 0, v___x_1676_);
switch(lean_obj_tag(v_alt_1667_))
{
case 0:
{
lean_object* v_params_1678_; lean_object* v_code_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v_params_1678_ = lean_ctor_get(v_alt_1667_, 1);
lean_inc_ref(v_params_1678_);
v_code_1679_ = lean_ctor_get(v_alt_1667_, 2);
lean_inc_ref(v_code_1679_);
lean_dec_ref_known(v_alt_1667_, 3);
v___x_1680_ = lean_unsigned_to_nat(0u);
v___x_1681_ = lean_array_get_size(v_params_1678_);
v___x_1682_ = lean_nat_dec_lt(v___x_1680_, v___x_1681_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; 
lean_dec_ref(v_params_1678_);
lean_dec(v___x_1676_);
v___x_1683_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1675_, v___x_1677_, v_code_1679_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
return v___x_1683_;
}
else
{
lean_object* v___x_1684_; size_t v___x_1685_; size_t v___x_1686_; lean_object* v___x_1687_; 
v___x_1684_ = lean_box(0);
v___x_1685_ = ((size_t)0ULL);
v___x_1686_ = lean_usize_of_nat(v___x_1681_);
v___x_1687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__2(v___x_1676_, v_params_1678_, v___x_1685_, v___x_1686_, v___x_1684_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
lean_dec_ref(v_params_1678_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v___x_1688_; 
lean_dec_ref_known(v___x_1687_, 1);
v___x_1688_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1675_, v___x_1677_, v_code_1679_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
return v___x_1688_;
}
else
{
lean_dec_ref(v_code_1679_);
lean_dec_ref(v___x_1677_);
return v___x_1687_;
}
}
}
case 1:
{
lean_object* v_code_1689_; lean_object* v___x_1690_; 
lean_dec(v___x_1676_);
v_code_1689_ = lean_ctor_get(v_alt_1667_, 1);
lean_inc_ref(v_code_1689_);
lean_dec_ref_known(v_alt_1667_, 2);
v___x_1690_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1675_, v___x_1677_, v_code_1689_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
return v___x_1690_;
}
default: 
{
lean_object* v_code_1691_; lean_object* v___x_1692_; 
lean_dec(v___x_1676_);
v_code_1691_ = lean_ctor_get(v_alt_1667_, 0);
lean_inc_ref(v_code_1691_);
lean_dec_ref_known(v_alt_1667_, 1);
v___x_1692_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1(v___x_1675_, v___x_1677_, v_code_1691_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
return v___x_1692_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt___boxed(lean_object* v_alt_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(v_alt_1693_, v_a_1694_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_);
lean_dec(v_a_1699_);
lean_dec_ref(v_a_1698_);
lean_dec(v_a_1697_);
lean_dec_ref(v_a_1696_);
lean_dec(v_a_1695_);
lean_dec(v_a_1694_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0(uint8_t v_pu_1702_, lean_object* v_f_1703_, lean_object* v_param_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___redArg(v_f_1703_, v_param_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0___boxed(lean_object* v_pu_1713_, lean_object* v_f_1714_, lean_object* v_param_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
uint8_t v_pu_boxed_1723_; lean_object* v_res_1724_; 
v_pu_boxed_1723_ = lean_unbox(v_pu_1713_);
v_res_1724_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0(v_pu_boxed_1723_, v_f_1714_, v_param_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec(v___y_1716_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3(uint8_t v_pu_1725_, lean_object* v_alt_1726_, lean_object* v_f_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___redArg(v_alt_1726_, v_f_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3___boxed(lean_object* v_pu_1736_, lean_object* v_alt_1737_, lean_object* v_f_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
uint8_t v_pu_boxed_1746_; lean_object* v_res_1747_; 
v_pu_boxed_1746_ = lean_unbox(v_pu_1736_);
v_res_1747_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__3(v_pu_boxed_1746_, v_alt_1737_, v_f_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec(v___y_1739_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2(uint8_t v_pu_1748_, lean_object* v_f_1749_, lean_object* v_arg_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___redArg(v_f_1749_, v_arg_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2___boxed(lean_object* v_pu_1759_, lean_object* v_f_1760_, lean_object* v_arg_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
uint8_t v_pu_boxed_1769_; lean_object* v_res_1770_; 
v_pu_boxed_1769_ = lean_unbox(v_pu_1759_);
v_res_1770_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__1_spec__2(v_pu_boxed_1769_, v_f_1760_, v_arg_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec(v___y_1762_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(lean_object* v_as_1771_, size_t v_i_1772_, size_t v_stop_1773_, lean_object* v_b_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
uint8_t v___x_1782_; 
v___x_1782_ = lean_usize_dec_eq(v_i_1772_, v_stop_1773_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = lean_array_uget_borrowed(v_as_1771_, v_i_1772_);
lean_inc(v___x_1783_);
v___x_1784_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt(v___x_1783_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; size_t v___x_1786_; size_t v___x_1787_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1785_);
lean_dec_ref_known(v___x_1784_, 1);
v___x_1786_ = ((size_t)1ULL);
v___x_1787_ = lean_usize_add(v_i_1772_, v___x_1786_);
v_i_1772_ = v___x_1787_;
v_b_1774_ = v_a_1785_;
goto _start;
}
else
{
return v___x_1784_;
}
}
else
{
lean_object* v___x_1789_; 
v___x_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1789_, 0, v_b_1774_);
return v___x_1789_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0___boxed(lean_object* v_as_1790_, lean_object* v_i_1791_, lean_object* v_stop_1792_, lean_object* v_b_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
size_t v_i_boxed_1801_; size_t v_stop_boxed_1802_; lean_object* v_res_1803_; 
v_i_boxed_1801_ = lean_unbox_usize(v_i_1791_);
lean_dec(v_i_1791_);
v_stop_boxed_1802_ = lean_unbox_usize(v_stop_1792_);
lean_dec(v_stop_1792_);
v_res_1803_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(v_as_1790_, v_i_boxed_1801_, v_stop_boxed_1802_, v_b_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec(v___y_1794_);
lean_dec_ref(v_as_1790_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(lean_object* v_cs_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v_alts_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; 
v_alts_1812_ = lean_ctor_get(v_cs_1804_, 3);
v___x_1813_ = lean_unsigned_to_nat(0u);
v___x_1814_ = lean_array_get_size(v_alts_1812_);
v___x_1815_ = lean_box(0);
v___x_1816_ = lean_nat_dec_lt(v___x_1813_, v___x_1814_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
return v___x_1817_;
}
else
{
size_t v___x_1818_; size_t v___x_1819_; lean_object* v___x_1820_; 
v___x_1818_ = ((size_t)0ULL);
v___x_1819_ = lean_usize_of_nat(v___x_1814_);
v___x_1820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases_spec__0(v_alts_1812_, v___x_1818_, v___x_1819_, v___x_1815_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_);
return v___x_1820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases___boxed(lean_object* v_cs_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(v_cs_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_);
lean_dec(v_a_1827_);
lean_dec_ref(v_a_1826_);
lean_dec(v_a_1825_);
lean_dec_ref(v_a_1824_);
lean_dec(v_a_1823_);
lean_dec(v_a_1822_);
lean_dec_ref(v_cs_1821_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0(lean_object* v_a_1830_, lean_object* v_a_1831_){
_start:
{
if (lean_obj_tag(v_a_1830_) == 0)
{
lean_object* v___x_1832_; 
v___x_1832_ = l_List_reverse___redArg(v_a_1831_);
return v___x_1832_;
}
else
{
lean_object* v_head_1833_; lean_object* v_tail_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1845_; 
v_head_1833_ = lean_ctor_get(v_a_1830_, 0);
v_tail_1834_ = lean_ctor_get(v_a_1830_, 1);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_a_1830_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1836_ = v_a_1830_;
v_isShared_1837_ = v_isSharedCheck_1845_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_tail_1834_);
lean_inc(v_head_1833_);
lean_dec(v_a_1830_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1845_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1838_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_1833_);
lean_dec(v_head_1833_);
v___x_1839_ = lean_box(2);
v___x_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1838_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v_a_1831_);
lean_ctor_set(v___x_1836_, 0, v___x_1840_);
v___x_1842_ = v___x_1836_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1840_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_a_1831_);
v___x_1842_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
v_a_1830_ = v_tail_1834_;
v_a_1831_ = v___x_1842_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg(lean_object* v_as_x27_1846_, lean_object* v_b_1847_){
_start:
{
if (lean_obj_tag(v_as_x27_1846_) == 0)
{
return v_b_1847_;
}
else
{
lean_object* v_head_1848_; lean_object* v_tail_1849_; lean_object* v_fst_1850_; lean_object* v_snd_1851_; lean_object* v_r_1852_; 
v_head_1848_ = lean_ctor_get(v_as_x27_1846_, 0);
v_tail_1849_ = lean_ctor_get(v_as_x27_1846_, 1);
v_fst_1850_ = lean_ctor_get(v_head_1848_, 0);
v_snd_1851_ = lean_ctor_get(v_head_1848_, 1);
lean_inc(v_snd_1851_);
lean_inc(v_fst_1850_);
v_r_1852_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_b_1847_, v_fst_1850_, v_snd_1851_);
v_as_x27_1846_ = v_tail_1849_;
v_b_1847_ = v_r_1852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg___boxed(lean_object* v_as_x27_1854_, lean_object* v_b_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg(v_as_x27_1854_, v_b_1855_);
lean_dec(v_as_x27_1854_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1(lean_object* v_m_1857_, lean_object* v_l_1858_){
_start:
{
lean_object* v___x_1859_; 
v___x_1859_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg(v_l_1858_, v_m_1857_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1___boxed(lean_object* v_m_1860_, lean_object* v_l_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1(v_m_1860_, v_l_1861_);
lean_dec(v_l_1861_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___redArg(lean_object* v_x_1863_, lean_object* v_x_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
if (lean_obj_tag(v_x_1864_) == 0)
{
lean_object* v___x_1870_; 
v___x_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1870_, 0, v_x_1863_);
return v___x_1870_;
}
else
{
lean_object* v_head_1871_; lean_object* v_tail_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1934_; 
v_head_1871_ = lean_ctor_get(v_x_1864_, 0);
v_tail_1872_ = lean_ctor_get(v_x_1864_, 1);
v_isSharedCheck_1934_ = !lean_is_exclusive(v_x_1864_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1874_ = v_x_1864_;
v_isShared_1875_ = v_isSharedCheck_1934_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_tail_1872_);
lean_inc(v_head_1871_);
lean_dec(v_x_1864_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1934_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v_fst_1876_; lean_object* v_snd_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1933_; 
v_fst_1876_ = lean_ctor_get(v_x_1863_, 0);
v_snd_1877_ = lean_ctor_get(v_x_1863_, 1);
v_isSharedCheck_1933_ = !lean_is_exclusive(v_x_1863_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1879_ = v_x_1863_;
v_isShared_1880_ = v_isSharedCheck_1933_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_snd_1877_);
lean_inc(v_fst_1876_);
lean_dec(v_x_1863_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1933_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; 
if (lean_obj_tag(v_head_1871_) == 0)
{
lean_object* v_decl_1914_; lean_object* v___x_1915_; 
v_decl_1914_ = lean_ctor_get(v_head_1871_, 0);
lean_inc_ref(v_decl_1914_);
v___x_1915_ = l_Lean_Compiler_LCNF_FloatLetIn_ignore_x3f___redArg(v_decl_1914_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; uint8_t v___x_1917_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1917_ = lean_unbox(v_a_1916_);
lean_dec(v_a_1916_);
if (v___x_1917_ == 0)
{
lean_del_object(v___x_1874_);
v___y_1882_ = v___y_1865_;
v___y_1883_ = v___y_1866_;
v___y_1884_ = v___y_1867_;
v___y_1885_ = v___y_1868_;
goto v___jp_1881_;
}
else
{
lean_object* v_fvarId_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1922_; 
lean_inc_ref(v_decl_1914_);
lean_dec_ref_known(v_head_1871_, 1);
lean_del_object(v___x_1879_);
v_fvarId_1918_ = lean_ctor_get(v_decl_1914_, 0);
lean_inc(v_fvarId_1918_);
lean_dec_ref(v_decl_1914_);
v___x_1919_ = lean_box(2);
v___x_1920_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_1876_, v_fvarId_1918_, v___x_1919_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set_tag(v___x_1874_, 0);
lean_ctor_set(v___x_1874_, 1, v_snd_1877_);
lean_ctor_set(v___x_1874_, 0, v___x_1920_);
v___x_1922_ = v___x_1874_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1920_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v_snd_1877_);
v___x_1922_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
v_x_1863_ = v___x_1922_;
v_x_1864_ = v_tail_1872_;
goto _start;
}
}
}
else
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1932_; 
lean_dec_ref_known(v_head_1871_, 1);
lean_del_object(v___x_1879_);
lean_dec(v_snd_1877_);
lean_dec(v_fst_1876_);
lean_del_object(v___x_1874_);
lean_dec(v_tail_1872_);
v_a_1925_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1927_ = v___x_1915_;
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1915_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_a_1925_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
else
{
lean_del_object(v___x_1874_);
v___y_1882_ = v___y_1865_;
v___y_1883_ = v___y_1866_;
v___y_1884_ = v___y_1867_;
v___y_1885_ = v___y_1868_;
goto v___jp_1881_;
}
v___jp_1881_:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1886_ = lean_st_ref_get(v___y_1885_);
lean_dec(v___x_1886_);
v___x_1887_ = lean_st_mk_ref(v_snd_1877_);
lean_inc(v_head_1871_);
v___x_1888_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitDecl___redArg(v_head_1871_, v___x_1887_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1890_; uint8_t v___x_1891_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_a_1889_);
lean_dec_ref_known(v___x_1888_, 1);
v___x_1890_ = lean_st_ref_get(v___x_1887_);
lean_dec(v___x_1887_);
v___x_1891_ = lean_unbox(v_a_1889_);
lean_dec(v_a_1889_);
if (v___x_1891_ == 0)
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1896_; 
v___x_1892_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_1871_);
lean_dec(v_head_1871_);
v___x_1893_ = lean_box(3);
v___x_1894_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_1876_, v___x_1892_, v___x_1893_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 1, v___x_1890_);
lean_ctor_set(v___x_1879_, 0, v___x_1894_);
v___x_1896_ = v___x_1879_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___x_1890_);
v___x_1896_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
v_x_1863_ = v___x_1896_;
v_x_1864_ = v_tail_1872_;
goto _start;
}
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1899_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_1871_);
lean_dec(v_head_1871_);
v___x_1900_ = lean_box(2);
v___x_1901_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_1876_, v___x_1899_, v___x_1900_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 1, v___x_1890_);
lean_ctor_set(v___x_1879_, 0, v___x_1901_);
v___x_1903_ = v___x_1879_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1901_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v___x_1890_);
v___x_1903_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
v_x_1863_ = v___x_1903_;
v_x_1864_ = v_tail_1872_;
goto _start;
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
lean_dec(v___x_1887_);
lean_del_object(v___x_1879_);
lean_dec(v_fst_1876_);
lean_dec(v_tail_1872_);
lean_dec(v_head_1871_);
v_a_1906_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1888_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1888_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___redArg___boxed(lean_object* v_x_1935_, lean_object* v_x_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___redArg(v_x_1935_, v_x_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
return v_res_1942_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0(void){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1943_ = lean_box(0);
v___x_1944_ = lean_unsigned_to_nat(16u);
v___x_1945_ = lean_mk_array(v___x_1944_, v___x_1943_);
return v___x_1945_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1(void){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1946_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0, &l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__0);
v___x_1947_ = lean_unsigned_to_nat(0u);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
lean_ctor_set(v___x_1948_, 1, v___x_1946_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(lean_object* v_cs_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
lean_object* v_map_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v___y_1971_; lean_object* v_typeName_1991_; lean_object* v_discr_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_2001_; uint8_t v___x_2002_; 
v_typeName_1991_ = lean_ctor_get(v_cs_1958_, 0);
v_discr_1992_ = lean_ctor_get(v_cs_1958_, 2);
v___x_1993_ = lean_unsigned_to_nat(0u);
v___x_1994_ = lean_box(0);
v___x_2001_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__4));
v___x_2002_ = lean_name_eq(v_typeName_1991_, v___x_2001_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; uint8_t v___x_2004_; 
v___x_2003_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__6));
v___x_2004_ = lean_name_eq(v_typeName_1991_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2005_ = l_List_lengthTR___redArg(v_a_1959_);
v___x_2006_ = lean_unsigned_to_nat(4u);
v___x_2007_ = lean_nat_mul(v___x_2005_, v___x_2006_);
lean_dec(v___x_2005_);
v___x_2008_ = lean_unsigned_to_nat(3u);
v___x_2009_ = lean_nat_div(v___x_2007_, v___x_2008_);
lean_dec(v___x_2007_);
v___x_2010_ = l_Nat_nextPowerOfTwo(v___x_2009_);
lean_dec(v___x_2009_);
v___x_2011_ = lean_mk_array(v___x_2010_, v___x_1994_);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_1993_);
lean_ctor_set(v___x_2012_, 1, v___x_2011_);
v___x_2013_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1, &l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1);
v___x_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2012_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
lean_inc(v_a_1959_);
v___x_2015_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___redArg(v___x_2014_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v_fst_2017_; uint8_t v___x_2018_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
v_fst_2017_ = lean_ctor_get(v_a_2016_, 0);
lean_inc(v_fst_2017_);
lean_dec(v_a_2016_);
v___x_2018_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_fst_2017_, v_discr_1992_);
if (v___x_2018_ == 0)
{
v_map_1966_ = v_fst_2017_;
v___y_1967_ = v_a_1959_;
v___y_1968_ = v_a_1960_;
v___y_1969_ = v_a_1961_;
v___y_1970_ = v_a_1962_;
v___y_1971_ = v_a_1963_;
goto v___jp_1965_;
}
else
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_box(2);
lean_inc(v_discr_1992_);
v___x_2020_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_fst_2017_, v_discr_1992_, v___x_2019_);
v_map_1966_ = v___x_2020_;
v___y_1967_ = v_a_1959_;
v___y_1968_ = v_a_1960_;
v___y_1969_ = v_a_1961_;
v___y_1970_ = v_a_1962_;
v___y_1971_ = v_a_1963_;
goto v___jp_1965_;
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v_cs_1958_);
v_a_2021_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2015_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2015_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
else
{
lean_dec_ref(v_cs_1958_);
goto v___jp_1995_;
}
}
else
{
lean_dec_ref(v_cs_1958_);
goto v___jp_1995_;
}
v___jp_1965_:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1972_ = lean_st_mk_ref(v_map_1966_);
v___x_1973_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goCases(v_cs_1958_, v___x_1972_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
lean_dec_ref(v_cs_1958_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1981_; 
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1981_ == 0)
{
lean_object* v_unused_1982_; 
v_unused_1982_ = lean_ctor_get(v___x_1973_, 0);
lean_dec(v_unused_1982_);
v___x_1975_ = v___x_1973_;
v_isShared_1976_ = v_isSharedCheck_1981_;
goto v_resetjp_1974_;
}
else
{
lean_dec(v___x_1973_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1981_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1977_; lean_object* v___x_1979_; 
v___x_1977_ = lean_st_ref_get(v___x_1972_);
lean_dec(v___x_1972_);
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 0, v___x_1977_);
v___x_1979_ = v___x_1975_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
lean_dec(v___x_1972_);
v_a_1983_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1985_ = v___x_1973_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v___x_1973_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
v___jp_1995_:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1996_ = lean_box(0);
lean_inc(v_a_1959_);
v___x_1997_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__0(v_a_1959_, v___x_1996_);
v___x_1998_ = lean_obj_once(&l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1, &l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1_once, _init_l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___closed__1);
v___x_1999_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg(v___x_1997_, v___x_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1999_);
return v___x_2000_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions___boxed(lean_object* v_cs_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(v_cs_2029_, v_a_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec(v_a_2032_);
lean_dec_ref(v_a_2031_);
lean_dec(v_a_2030_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2(lean_object* v_x_2037_, lean_object* v_x_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v___x_2045_; 
v___x_2045_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___redArg(v_x_2037_, v_x_2038_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2___boxed(lean_object* v_x_2046_, lean_object* v_x_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_List_foldlM___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__2(v_x_2046_, v_x_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1(lean_object* v_as_2055_, lean_object* v_as_x27_2056_, lean_object* v_b_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v___x_2059_; 
v___x_2059_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___redArg(v_as_x27_2056_, v_b_2057_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1___boxed(lean_object* v_as_2060_, lean_object* v_as_x27_2061_, lean_object* v_b_2062_, lean_object* v_a_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Compiler_LCNF_FloatLetIn_initialDecisions_spec__1_spec__1(v_as_2060_, v_as_x27_2061_, v_b_2062_, v_a_2063_);
lean_dec(v_as_x27_2061_);
lean_dec(v_as_2060_);
return v_res_2064_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(lean_object* v_a_2065_, lean_object* v_x_2066_){
_start:
{
if (lean_obj_tag(v_x_2066_) == 0)
{
uint8_t v___x_2067_; 
v___x_2067_ = 0;
return v___x_2067_;
}
else
{
lean_object* v_key_2068_; lean_object* v_tail_2069_; uint8_t v___x_2070_; 
v_key_2068_ = lean_ctor_get(v_x_2066_, 0);
v_tail_2069_ = lean_ctor_get(v_x_2066_, 2);
v___x_2070_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_key_2068_, v_a_2065_);
if (v___x_2070_ == 0)
{
v_x_2066_ = v_tail_2069_;
goto _start;
}
else
{
return v___x_2070_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg___boxed(lean_object* v_a_2072_, lean_object* v_x_2073_){
_start:
{
uint8_t v_res_2074_; lean_object* v_r_2075_; 
v_res_2074_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(v_a_2072_, v_x_2073_);
lean_dec(v_x_2073_);
lean_dec(v_a_2072_);
v_r_2075_ = lean_box(v_res_2074_);
return v_r_2075_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(lean_object* v_a_2076_, lean_object* v_b_2077_, lean_object* v_x_2078_){
_start:
{
if (lean_obj_tag(v_x_2078_) == 0)
{
lean_dec(v_b_2077_);
lean_dec(v_a_2076_);
return v_x_2078_;
}
else
{
lean_object* v_key_2079_; lean_object* v_value_2080_; lean_object* v_tail_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2093_; 
v_key_2079_ = lean_ctor_get(v_x_2078_, 0);
v_value_2080_ = lean_ctor_get(v_x_2078_, 1);
v_tail_2081_ = lean_ctor_get(v_x_2078_, 2);
v_isSharedCheck_2093_ = !lean_is_exclusive(v_x_2078_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2083_ = v_x_2078_;
v_isShared_2084_ = v_isSharedCheck_2093_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_tail_2081_);
lean_inc(v_value_2080_);
lean_inc(v_key_2079_);
lean_dec(v_x_2078_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2093_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
uint8_t v___x_2085_; 
v___x_2085_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_key_2079_, v_a_2076_);
if (v___x_2085_ == 0)
{
lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2086_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(v_a_2076_, v_b_2077_, v_tail_2081_);
if (v_isShared_2084_ == 0)
{
lean_ctor_set(v___x_2083_, 2, v___x_2086_);
v___x_2088_ = v___x_2083_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_key_2079_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v_value_2080_);
lean_ctor_set(v_reuseFailAlloc_2089_, 2, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
else
{
lean_object* v___x_2091_; 
lean_dec(v_value_2080_);
lean_dec(v_key_2079_);
if (v_isShared_2084_ == 0)
{
lean_ctor_set(v___x_2083_, 1, v_b_2077_);
lean_ctor_set(v___x_2083_, 0, v_a_2076_);
v___x_2091_ = v___x_2083_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2076_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v_b_2077_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v_tail_2081_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_2094_, lean_object* v_x_2095_){
_start:
{
if (lean_obj_tag(v_x_2095_) == 0)
{
return v_x_2094_;
}
else
{
lean_object* v_key_2096_; lean_object* v_value_2097_; lean_object* v_tail_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2121_; 
v_key_2096_ = lean_ctor_get(v_x_2095_, 0);
v_value_2097_ = lean_ctor_get(v_x_2095_, 1);
v_tail_2098_ = lean_ctor_get(v_x_2095_, 2);
v_isSharedCheck_2121_ = !lean_is_exclusive(v_x_2095_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2100_ = v_x_2095_;
v_isShared_2101_ = v_isSharedCheck_2121_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_tail_2098_);
lean_inc(v_value_2097_);
lean_inc(v_key_2096_);
lean_dec(v_x_2095_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2121_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2102_; uint64_t v___x_2103_; uint64_t v___x_2104_; uint64_t v___x_2105_; uint64_t v_fold_2106_; uint64_t v___x_2107_; uint64_t v___x_2108_; uint64_t v___x_2109_; size_t v___x_2110_; size_t v___x_2111_; size_t v___x_2112_; size_t v___x_2113_; size_t v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2117_; 
v___x_2102_ = lean_array_get_size(v_x_2094_);
v___x_2103_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_key_2096_);
v___x_2104_ = 32ULL;
v___x_2105_ = lean_uint64_shift_right(v___x_2103_, v___x_2104_);
v_fold_2106_ = lean_uint64_xor(v___x_2103_, v___x_2105_);
v___x_2107_ = 16ULL;
v___x_2108_ = lean_uint64_shift_right(v_fold_2106_, v___x_2107_);
v___x_2109_ = lean_uint64_xor(v_fold_2106_, v___x_2108_);
v___x_2110_ = lean_uint64_to_usize(v___x_2109_);
v___x_2111_ = lean_usize_of_nat(v___x_2102_);
v___x_2112_ = ((size_t)1ULL);
v___x_2113_ = lean_usize_sub(v___x_2111_, v___x_2112_);
v___x_2114_ = lean_usize_land(v___x_2110_, v___x_2113_);
v___x_2115_ = lean_array_uget_borrowed(v_x_2094_, v___x_2114_);
lean_inc(v___x_2115_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 2, v___x_2115_);
v___x_2117_ = v___x_2100_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_key_2096_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v_value_2097_);
lean_ctor_set(v_reuseFailAlloc_2120_, 2, v___x_2115_);
v___x_2117_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
lean_object* v___x_2118_; 
v___x_2118_ = lean_array_uset(v_x_2094_, v___x_2114_, v___x_2117_);
v_x_2094_ = v___x_2118_;
v_x_2095_ = v_tail_2098_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(lean_object* v_i_2122_, lean_object* v_source_2123_, lean_object* v_target_2124_){
_start:
{
lean_object* v___x_2125_; uint8_t v___x_2126_; 
v___x_2125_ = lean_array_get_size(v_source_2123_);
v___x_2126_ = lean_nat_dec_lt(v_i_2122_, v___x_2125_);
if (v___x_2126_ == 0)
{
lean_dec_ref(v_source_2123_);
lean_dec(v_i_2122_);
return v_target_2124_;
}
else
{
lean_object* v_es_2127_; lean_object* v___x_2128_; lean_object* v_source_2129_; lean_object* v_target_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v_es_2127_ = lean_array_fget(v_source_2123_, v_i_2122_);
v___x_2128_ = lean_box(0);
v_source_2129_ = lean_array_fset(v_source_2123_, v_i_2122_, v___x_2128_);
v_target_2130_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(v_target_2124_, v_es_2127_);
v___x_2131_ = lean_unsigned_to_nat(1u);
v___x_2132_ = lean_nat_add(v_i_2122_, v___x_2131_);
lean_dec(v_i_2122_);
v_i_2122_ = v___x_2132_;
v_source_2123_ = v_source_2129_;
v_target_2124_ = v_target_2130_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(lean_object* v_data_2134_){
_start:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v_nbuckets_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2135_ = lean_array_get_size(v_data_2134_);
v___x_2136_ = lean_unsigned_to_nat(2u);
v_nbuckets_2137_ = lean_nat_mul(v___x_2135_, v___x_2136_);
v___x_2138_ = lean_unsigned_to_nat(0u);
v___x_2139_ = lean_box(0);
v___x_2140_ = lean_mk_array(v_nbuckets_2137_, v___x_2139_);
v___x_2141_ = lean_array_propagate_mark(v_data_2134_, v___x_2140_);
v___x_2142_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(v___x_2138_, v_data_2134_, v___x_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(lean_object* v_m_2143_, lean_object* v_a_2144_, lean_object* v_b_2145_){
_start:
{
lean_object* v_size_2146_; lean_object* v_buckets_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2190_; 
v_size_2146_ = lean_ctor_get(v_m_2143_, 0);
v_buckets_2147_ = lean_ctor_get(v_m_2143_, 1);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_m_2143_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2149_ = v_m_2143_;
v_isShared_2150_ = v_isSharedCheck_2190_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_buckets_2147_);
lean_inc(v_size_2146_);
lean_dec(v_m_2143_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2190_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2151_; uint64_t v___x_2152_; uint64_t v___x_2153_; uint64_t v___x_2154_; uint64_t v_fold_2155_; uint64_t v___x_2156_; uint64_t v___x_2157_; uint64_t v___x_2158_; size_t v___x_2159_; size_t v___x_2160_; size_t v___x_2161_; size_t v___x_2162_; size_t v___x_2163_; lean_object* v_bkt_2164_; uint8_t v___x_2165_; 
v___x_2151_ = lean_array_get_size(v_buckets_2147_);
v___x_2152_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_a_2144_);
v___x_2153_ = 32ULL;
v___x_2154_ = lean_uint64_shift_right(v___x_2152_, v___x_2153_);
v_fold_2155_ = lean_uint64_xor(v___x_2152_, v___x_2154_);
v___x_2156_ = 16ULL;
v___x_2157_ = lean_uint64_shift_right(v_fold_2155_, v___x_2156_);
v___x_2158_ = lean_uint64_xor(v_fold_2155_, v___x_2157_);
v___x_2159_ = lean_uint64_to_usize(v___x_2158_);
v___x_2160_ = lean_usize_of_nat(v___x_2151_);
v___x_2161_ = ((size_t)1ULL);
v___x_2162_ = lean_usize_sub(v___x_2160_, v___x_2161_);
v___x_2163_ = lean_usize_land(v___x_2159_, v___x_2162_);
v_bkt_2164_ = lean_array_uget_borrowed(v_buckets_2147_, v___x_2163_);
v___x_2165_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(v_a_2144_, v_bkt_2164_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2166_; lean_object* v_size_x27_2167_; lean_object* v___x_2168_; lean_object* v_buckets_x27_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2166_ = lean_unsigned_to_nat(1u);
v_size_x27_2167_ = lean_nat_add(v_size_2146_, v___x_2166_);
lean_dec(v_size_2146_);
lean_inc(v_bkt_2164_);
v___x_2168_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2168_, 0, v_a_2144_);
lean_ctor_set(v___x_2168_, 1, v_b_2145_);
lean_ctor_set(v___x_2168_, 2, v_bkt_2164_);
v_buckets_x27_2169_ = lean_array_uset(v_buckets_2147_, v___x_2163_, v___x_2168_);
v___x_2170_ = lean_unsigned_to_nat(4u);
v___x_2171_ = lean_nat_mul(v_size_x27_2167_, v___x_2170_);
v___x_2172_ = lean_unsigned_to_nat(3u);
v___x_2173_ = lean_nat_div(v___x_2171_, v___x_2172_);
lean_dec(v___x_2171_);
v___x_2174_ = lean_array_get_size(v_buckets_x27_2169_);
v___x_2175_ = lean_nat_dec_le(v___x_2173_, v___x_2174_);
lean_dec(v___x_2173_);
if (v___x_2175_ == 0)
{
lean_object* v_val_2176_; lean_object* v___x_2178_; 
v_val_2176_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(v_buckets_x27_2169_);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 1, v_val_2176_);
lean_ctor_set(v___x_2149_, 0, v_size_x27_2167_);
v___x_2178_ = v___x_2149_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_size_x27_2167_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_val_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
else
{
lean_object* v___x_2181_; 
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 1, v_buckets_x27_2169_);
lean_ctor_set(v___x_2149_, 0, v_size_x27_2167_);
v___x_2181_ = v___x_2149_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_size_x27_2167_);
lean_ctor_set(v_reuseFailAlloc_2182_, 1, v_buckets_x27_2169_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
else
{
lean_object* v___x_2183_; lean_object* v_buckets_x27_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2188_; 
lean_inc(v_bkt_2164_);
v___x_2183_ = lean_box(0);
v_buckets_x27_2184_ = lean_array_uset(v_buckets_2147_, v___x_2163_, v___x_2183_);
v___x_2185_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(v_a_2144_, v_b_2145_, v_bkt_2164_);
v___x_2186_ = lean_array_uset(v_buckets_x27_2184_, v___x_2163_, v___x_2185_);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 1, v___x_2186_);
v___x_2188_ = v___x_2149_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_size_2146_);
lean_ctor_set(v_reuseFailAlloc_2189_, 1, v___x_2186_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(lean_object* v_as_2191_, size_t v_i_2192_, size_t v_stop_2193_, lean_object* v_b_2194_){
_start:
{
uint8_t v___x_2195_; 
v___x_2195_ = lean_usize_dec_eq(v_i_2192_, v_stop_2193_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; size_t v___x_2197_; size_t v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2196_ = lean_box(0);
v___x_2197_ = ((size_t)1ULL);
v___x_2198_ = lean_usize_sub(v_i_2192_, v___x_2197_);
v___x_2199_ = lean_array_uget_borrowed(v_as_2191_, v___x_2198_);
v___x_2200_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v___x_2199_);
v___x_2201_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_b_2194_, v___x_2200_, v___x_2196_);
v_i_2192_ = v___x_2198_;
v_b_2194_ = v___x_2201_;
goto _start;
}
else
{
return v_b_2194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1___boxed(lean_object* v_as_2203_, lean_object* v_i_2204_, lean_object* v_stop_2205_, lean_object* v_b_2206_){
_start:
{
size_t v_i_boxed_2207_; size_t v_stop_boxed_2208_; lean_object* v_res_2209_; 
v_i_boxed_2207_ = lean_unbox_usize(v_i_2204_);
lean_dec(v_i_2204_);
v_stop_boxed_2208_ = lean_unbox_usize(v_stop_2205_);
lean_dec(v_stop_2205_);
v_res_2209_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(v_as_2203_, v_i_boxed_2207_, v_stop_boxed_2208_, v_b_2206_);
lean_dec_ref(v_as_2203_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(lean_object* v_cs_2210_){
_start:
{
lean_object* v_alts_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v_map_2226_; uint8_t v___x_2227_; 
v_alts_2211_ = lean_ctor_get(v_cs_2210_, 3);
v___x_2212_ = lean_array_get_size(v_alts_2211_);
v___x_2213_ = lean_unsigned_to_nat(1u);
v___x_2214_ = lean_nat_add(v___x_2212_, v___x_2213_);
v___x_2215_ = lean_unsigned_to_nat(0u);
v___x_2216_ = lean_unsigned_to_nat(4u);
v___x_2217_ = lean_nat_mul(v___x_2214_, v___x_2216_);
lean_dec(v___x_2214_);
v___x_2218_ = lean_unsigned_to_nat(3u);
v___x_2219_ = lean_nat_div(v___x_2217_, v___x_2218_);
lean_dec(v___x_2217_);
v___x_2220_ = l_Nat_nextPowerOfTwo(v___x_2219_);
lean_dec(v___x_2219_);
v___x_2221_ = lean_box(0);
v___x_2222_ = lean_mk_array(v___x_2220_, v___x_2221_);
v___x_2223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2215_);
lean_ctor_set(v___x_2223_, 1, v___x_2222_);
v___x_2224_ = lean_box(2);
v___x_2225_ = lean_box(0);
v_map_2226_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v___x_2223_, v___x_2224_, v___x_2225_);
v___x_2227_ = lean_nat_dec_lt(v___x_2215_, v___x_2212_);
if (v___x_2227_ == 0)
{
return v_map_2226_;
}
else
{
size_t v___x_2228_; size_t v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = lean_usize_of_nat(v___x_2212_);
v___x_2229_ = ((size_t)0ULL);
v___x_2230_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__1(v_alts_2211_, v___x_2228_, v___x_2229_, v_map_2226_);
return v___x_2230_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms___boxed(lean_object* v_cs_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(v_cs_2231_);
lean_dec_ref(v_cs_2231_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0(lean_object* v_00_u03b2_2233_, lean_object* v_m_2234_, lean_object* v_a_2235_, lean_object* v_b_2236_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_m_2234_, v_a_2235_, v_b_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0(lean_object* v_00_u03b2_2238_, lean_object* v_a_2239_, lean_object* v_x_2240_){
_start:
{
uint8_t v___x_2241_; 
v___x_2241_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___redArg(v_a_2239_, v_x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2242_, lean_object* v_a_2243_, lean_object* v_x_2244_){
_start:
{
uint8_t v_res_2245_; lean_object* v_r_2246_; 
v_res_2245_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__0(v_00_u03b2_2242_, v_a_2243_, v_x_2244_);
lean_dec(v_x_2244_);
lean_dec(v_a_2243_);
v_r_2246_ = lean_box(v_res_2245_);
return v_r_2246_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1(lean_object* v_00_u03b2_2247_, lean_object* v_data_2248_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1___redArg(v_data_2248_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2(lean_object* v_00_u03b2_2250_, lean_object* v_a_2251_, lean_object* v_b_2252_, lean_object* v_x_2253_){
_start:
{
lean_object* v___x_2254_; 
v___x_2254_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__2___redArg(v_a_2251_, v_b_2252_, v_x_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2255_, lean_object* v_i_2256_, lean_object* v_source_2257_, lean_object* v_target_2258_){
_start:
{
lean_object* v___x_2259_; 
v___x_2259_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2___redArg(v_i_2256_, v_source_2257_, v_target_2258_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2260_, lean_object* v_x_2261_, lean_object* v_x_2262_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0_spec__1_spec__2_spec__4___redArg(v_x_2261_, v_x_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(lean_object* v_fvar_2264_, lean_object* v_a_2265_){
_start:
{
lean_object* v___x_2267_; lean_object* v_decision_2268_; uint8_t v___x_2269_; 
v___x_2267_ = lean_st_ref_get(v_a_2265_);
v_decision_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc_ref(v_decision_2268_);
lean_dec(v___x_2267_);
v___x_2269_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_visitArg_spec__0___redArg(v_decision_2268_, v_fvar_2264_);
lean_dec_ref(v_decision_2268_);
if (v___x_2269_ == 0)
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
lean_dec(v_fvar_2264_);
v___x_2270_ = lean_box(0);
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
return v___x_2271_;
}
else
{
lean_object* v___x_2272_; lean_object* v_decision_2273_; lean_object* v_newArms_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2286_; 
v___x_2272_ = lean_st_ref_take(v_a_2265_);
v_decision_2273_ = lean_ctor_get(v___x_2272_, 0);
v_newArms_2274_ = lean_ctor_get(v___x_2272_, 1);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2276_ = v___x_2272_;
v_isShared_2277_ = v_isSharedCheck_2286_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_newArms_2274_);
lean_inc(v_decision_2273_);
lean_dec(v___x_2272_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2286_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2278_ = lean_box(0);
v___x_2279_ = lean_box(2);
v___x_2280_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_decision_2273_, v_fvar_2264_, v___x_2279_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v___x_2280_);
v___x_2282_ = v___x_2276_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2280_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_newArms_2274_);
v___x_2282_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = lean_st_ref_put(v_a_2265_, v___x_2282_);
v___x_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2278_);
return v___x_2284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg___boxed(lean_object* v_fvar_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvar_2287_, v_a_2288_);
lean_dec(v_a_2288_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar(lean_object* v_fvar_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvar_2291_, v_a_2292_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___boxed(lean_object* v_fvar_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar(v_fvar_2300_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
lean_dec(v_a_2306_);
lean_dec_ref(v_a_2305_);
lean_dec(v_a_2304_);
lean_dec_ref(v_a_2303_);
lean_dec(v_a_2302_);
lean_dec(v_a_2301_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(lean_object* v_msg_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v_toApplicative_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2382_; 
v___x_2317_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__0);
v___x_2318_ = l_StateRefT_x27_instMonad___redArg(v___x_2317_);
v_toApplicative_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2382_ == 0)
{
lean_object* v_unused_2383_; 
v_unused_2383_ = lean_ctor_get(v___x_2318_, 1);
lean_dec(v_unused_2383_);
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2382_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_toApplicative_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2382_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v_toFunctor_2323_; lean_object* v_toSeq_2324_; lean_object* v_toSeqLeft_2325_; lean_object* v_toSeqRight_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2380_; 
v_toFunctor_2323_ = lean_ctor_get(v_toApplicative_2319_, 0);
v_toSeq_2324_ = lean_ctor_get(v_toApplicative_2319_, 2);
v_toSeqLeft_2325_ = lean_ctor_get(v_toApplicative_2319_, 3);
v_toSeqRight_2326_ = lean_ctor_get(v_toApplicative_2319_, 4);
v_isSharedCheck_2380_ = !lean_is_exclusive(v_toApplicative_2319_);
if (v_isSharedCheck_2380_ == 0)
{
lean_object* v_unused_2381_; 
v_unused_2381_ = lean_ctor_get(v_toApplicative_2319_, 1);
lean_dec(v_unused_2381_);
v___x_2328_ = v_toApplicative_2319_;
v_isShared_2329_ = v_isSharedCheck_2380_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_toSeqRight_2326_);
lean_inc(v_toSeqLeft_2325_);
lean_inc(v_toSeq_2324_);
lean_inc(v_toFunctor_2323_);
lean_dec(v_toApplicative_2319_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2380_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___f_2330_; lean_object* v___f_2331_; lean_object* v___f_2332_; lean_object* v___f_2333_; lean_object* v___x_2334_; lean_object* v___f_2335_; lean_object* v___f_2336_; lean_object* v___f_2337_; lean_object* v___x_2339_; 
v___f_2330_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__1));
v___f_2331_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_2323_);
v___f_2332_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2332_, 0, v_toFunctor_2323_);
v___f_2333_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2333_, 0, v_toFunctor_2323_);
v___x_2334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___f_2332_);
lean_ctor_set(v___x_2334_, 1, v___f_2333_);
v___f_2335_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2335_, 0, v_toSeqRight_2326_);
v___f_2336_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2336_, 0, v_toSeqLeft_2325_);
v___f_2337_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2337_, 0, v_toSeq_2324_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 4, v___f_2335_);
lean_ctor_set(v___x_2328_, 3, v___f_2336_);
lean_ctor_set(v___x_2328_, 2, v___f_2337_);
lean_ctor_set(v___x_2328_, 1, v___f_2330_);
lean_ctor_set(v___x_2328_, 0, v___x_2334_);
v___x_2339_ = v___x_2328_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2334_);
lean_ctor_set(v_reuseFailAlloc_2379_, 1, v___f_2330_);
lean_ctor_set(v_reuseFailAlloc_2379_, 2, v___f_2337_);
lean_ctor_set(v_reuseFailAlloc_2379_, 3, v___f_2336_);
lean_ctor_set(v_reuseFailAlloc_2379_, 4, v___f_2335_);
v___x_2339_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
lean_object* v___x_2341_; 
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 1, v___f_2331_);
lean_ctor_set(v___x_2321_, 0, v___x_2339_);
v___x_2341_ = v___x_2321_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v___x_2339_);
lean_ctor_set(v_reuseFailAlloc_2378_, 1, v___f_2331_);
v___x_2341_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
lean_object* v___x_2342_; lean_object* v_toApplicative_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2376_; 
v___x_2342_ = l_StateRefT_x27_instMonad___redArg(v___x_2341_);
v_toApplicative_2343_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2376_ == 0)
{
lean_object* v_unused_2377_; 
v_unused_2377_ = lean_ctor_get(v___x_2342_, 1);
lean_dec(v_unused_2377_);
v___x_2345_ = v___x_2342_;
v_isShared_2346_ = v_isSharedCheck_2376_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_toApplicative_2343_);
lean_dec(v___x_2342_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2376_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v_toFunctor_2347_; lean_object* v_toSeq_2348_; lean_object* v_toSeqLeft_2349_; lean_object* v_toSeqRight_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2374_; 
v_toFunctor_2347_ = lean_ctor_get(v_toApplicative_2343_, 0);
v_toSeq_2348_ = lean_ctor_get(v_toApplicative_2343_, 2);
v_toSeqLeft_2349_ = lean_ctor_get(v_toApplicative_2343_, 3);
v_toSeqRight_2350_ = lean_ctor_get(v_toApplicative_2343_, 4);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_toApplicative_2343_);
if (v_isSharedCheck_2374_ == 0)
{
lean_object* v_unused_2375_; 
v_unused_2375_ = lean_ctor_get(v_toApplicative_2343_, 1);
lean_dec(v_unused_2375_);
v___x_2352_ = v_toApplicative_2343_;
v_isShared_2353_ = v_isSharedCheck_2374_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_toSeqRight_2350_);
lean_inc(v_toSeqLeft_2349_);
lean_inc(v_toSeq_2348_);
lean_inc(v_toFunctor_2347_);
lean_dec(v_toApplicative_2343_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2374_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___f_2354_; lean_object* v___f_2355_; lean_object* v___f_2356_; lean_object* v___f_2357_; lean_object* v___x_2358_; lean_object* v___f_2359_; lean_object* v___f_2360_; lean_object* v___f_2361_; lean_object* v___x_2363_; 
v___f_2354_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__3));
v___f_2355_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_2347_);
v___f_2356_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2356_, 0, v_toFunctor_2347_);
v___f_2357_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2357_, 0, v_toFunctor_2347_);
v___x_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2358_, 0, v___f_2356_);
lean_ctor_set(v___x_2358_, 1, v___f_2357_);
v___f_2359_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2359_, 0, v_toSeqRight_2350_);
v___f_2360_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2360_, 0, v_toSeqLeft_2349_);
v___f_2361_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2361_, 0, v_toSeq_2348_);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 4, v___f_2359_);
lean_ctor_set(v___x_2352_, 3, v___f_2360_);
lean_ctor_set(v___x_2352_, 2, v___f_2361_);
lean_ctor_set(v___x_2352_, 1, v___f_2354_);
lean_ctor_set(v___x_2352_, 0, v___x_2358_);
v___x_2363_ = v___x_2352_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2358_);
lean_ctor_set(v_reuseFailAlloc_2373_, 1, v___f_2354_);
lean_ctor_set(v_reuseFailAlloc_2373_, 2, v___f_2361_);
lean_ctor_set(v_reuseFailAlloc_2373_, 3, v___f_2360_);
lean_ctor_set(v_reuseFailAlloc_2373_, 4, v___f_2359_);
v___x_2363_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
lean_object* v___x_2365_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 1, v___f_2355_);
lean_ctor_set(v___x_2345_, 0, v___x_2363_);
v___x_2365_ = v___x_2345_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2363_);
lean_ctor_set(v_reuseFailAlloc_2372_, 1, v___f_2355_);
v___x_2365_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_10726__overap_2370_; lean_object* v___x_2371_; 
v___x_2366_ = l_ReaderT_instMonad___redArg(v___x_2365_);
v___x_2367_ = l_StateRefT_x27_instMonad___redArg(v___x_2366_);
v___x_2368_ = lean_box(0);
v___x_2369_ = l_instInhabitedOfMonad___redArg(v___x_2367_, v___x_2368_);
v___x_10726__overap_2370_ = lean_panic_fn_borrowed(v___x_2369_, v_msg_2309_);
lean_dec(v___x_2369_);
lean_inc(v___y_2315_);
lean_inc_ref(v___y_2314_);
lean_inc(v___y_2313_);
lean_inc_ref(v___y_2312_);
lean_inc(v___y_2311_);
lean_inc(v___y_2310_);
v___x_2371_ = lean_apply_7(v___x_10726__overap_2370_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, lean_box(0));
return v___x_2371_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9___boxed(lean_object* v_msg_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v_msg_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec(v___y_2385_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(lean_object* v_f_2393_, lean_object* v_e_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_ty_2403_; lean_object* v_body_2404_; uint8_t v___x_2407_; 
v___x_2407_ = l_Lean_Expr_hasFVar(v_e_2394_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
lean_dec_ref(v_e_2394_);
lean_dec_ref(v_f_2393_);
v___x_2408_ = lean_box(0);
v___x_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
return v___x_2409_;
}
else
{
switch(lean_obj_tag(v_e_2394_))
{
case 1:
{
lean_object* v_fvarId_2410_; lean_object* v___x_2411_; 
v_fvarId_2410_ = lean_ctor_get(v_e_2394_, 0);
lean_inc(v_fvarId_2410_);
lean_dec_ref_known(v_e_2394_, 1);
lean_inc(v___y_2400_);
lean_inc_ref(v___y_2399_);
lean_inc(v___y_2398_);
lean_inc_ref(v___y_2397_);
lean_inc(v___y_2396_);
lean_inc(v___y_2395_);
v___x_2411_ = lean_apply_8(v_f_2393_, v_fvarId_2410_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, lean_box(0));
return v___x_2411_;
}
case 2:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
lean_dec_ref_known(v_e_2394_, 1);
lean_dec_ref(v_f_2393_);
v___x_2412_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_2413_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v___x_2412_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
return v___x_2413_;
}
case 5:
{
lean_object* v_fn_2414_; lean_object* v_arg_2415_; lean_object* v___x_2416_; 
v_fn_2414_ = lean_ctor_get(v_e_2394_, 0);
lean_inc_ref(v_fn_2414_);
v_arg_2415_ = lean_ctor_get(v_e_2394_, 1);
lean_inc_ref(v_arg_2415_);
lean_dec_ref_known(v_e_2394_, 2);
lean_inc_ref(v_f_2393_);
v___x_2416_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2393_, v_fn_2414_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_dec_ref_known(v___x_2416_, 1);
v_e_2394_ = v_arg_2415_;
goto _start;
}
else
{
lean_dec_ref(v_arg_2415_);
lean_dec_ref(v_f_2393_);
return v___x_2416_;
}
}
case 6:
{
lean_object* v_binderType_2418_; lean_object* v_body_2419_; 
v_binderType_2418_ = lean_ctor_get(v_e_2394_, 1);
lean_inc_ref(v_binderType_2418_);
v_body_2419_ = lean_ctor_get(v_e_2394_, 2);
lean_inc_ref(v_body_2419_);
lean_dec_ref_known(v_e_2394_, 3);
v_ty_2403_ = v_binderType_2418_;
v_body_2404_ = v_body_2419_;
goto v___jp_2402_;
}
case 7:
{
lean_object* v_binderType_2420_; lean_object* v_body_2421_; 
v_binderType_2420_ = lean_ctor_get(v_e_2394_, 1);
lean_inc_ref(v_binderType_2420_);
v_body_2421_ = lean_ctor_get(v_e_2394_, 2);
lean_inc_ref(v_body_2421_);
lean_dec_ref_known(v_e_2394_, 3);
v_ty_2403_ = v_binderType_2420_;
v_body_2404_ = v_body_2421_;
goto v___jp_2402_;
}
case 8:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
lean_dec_ref_known(v_e_2394_, 4);
lean_dec_ref(v_f_2393_);
v___x_2422_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_2423_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v___x_2422_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
return v___x_2423_;
}
case 11:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
lean_dec_ref_known(v_e_2394_, 3);
lean_dec_ref(v_f_2393_);
v___x_2424_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Param_forFVarM___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goAlt_spec__0_spec__0___closed__3);
v___x_2425_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4_spec__9(v___x_2424_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
return v___x_2425_;
}
default: 
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
lean_dec_ref(v_e_2394_);
lean_dec_ref(v_f_2393_);
v___x_2426_ = lean_box(0);
v___x_2427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
return v___x_2427_;
}
}
}
v___jp_2402_:
{
lean_object* v___x_2405_; 
lean_inc_ref(v_f_2393_);
v___x_2405_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2393_, v_ty_2403_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_dec_ref_known(v___x_2405_, 1);
v_e_2394_ = v_body_2404_;
goto _start;
}
else
{
lean_dec_ref(v_body_2404_);
lean_dec_ref(v_f_2393_);
return v___x_2405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4___boxed(lean_object* v_f_2428_, lean_object* v_e_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2428_, v_e_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec(v___y_2430_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(lean_object* v_f_2438_, lean_object* v_arg_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
switch(lean_obj_tag(v_arg_2439_))
{
case 0:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
lean_dec_ref(v_f_2438_);
v___x_2447_ = lean_box(0);
v___x_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
return v___x_2448_;
}
case 1:
{
lean_object* v_fvarId_2449_; lean_object* v___x_2450_; 
v_fvarId_2449_ = lean_ctor_get(v_arg_2439_, 0);
lean_inc(v_fvarId_2449_);
lean_dec_ref_known(v_arg_2439_, 1);
lean_inc(v___y_2445_);
lean_inc_ref(v___y_2444_);
lean_inc(v___y_2443_);
lean_inc_ref(v___y_2442_);
lean_inc(v___y_2441_);
lean_inc(v___y_2440_);
v___x_2450_ = lean_apply_8(v_f_2438_, v_fvarId_2449_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, lean_box(0));
return v___x_2450_;
}
default: 
{
lean_object* v_expr_2451_; lean_object* v___x_2452_; 
v_expr_2451_ = lean_ctor_get(v_arg_2439_, 0);
lean_inc_ref(v_expr_2451_);
lean_dec_ref_known(v_arg_2439_, 1);
v___x_2452_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2438_, v_expr_2451_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
return v___x_2452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg___boxed(lean_object* v_f_2453_, lean_object* v_arg_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_2453_, v_arg_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
lean_dec(v___y_2460_);
lean_dec_ref(v___y_2459_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec(v___y_2455_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(lean_object* v_f_2463_, lean_object* v_param_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v_type_2472_; lean_object* v___x_2473_; 
v_type_2472_ = lean_ctor_get(v_param_2464_, 2);
lean_inc_ref(v_type_2472_);
lean_dec_ref(v_param_2464_);
v___x_2473_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2463_, v_type_2472_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg___boxed(lean_object* v_f_2474_, lean_object* v_param_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(v_f_2474_, v_param_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec(v___y_2476_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(uint8_t v_pu_2484_, lean_object* v_f_2485_, lean_object* v_as_2486_, size_t v_i_2487_, size_t v_stop_2488_, lean_object* v_b_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
uint8_t v___x_2497_; 
v___x_2497_ = lean_usize_dec_eq(v_i_2487_, v_stop_2488_);
if (v___x_2497_ == 0)
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_array_uget_borrowed(v_as_2486_, v_i_2487_);
lean_inc(v___x_2498_);
lean_inc_ref(v_f_2485_);
v___x_2499_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(v_f_2485_, v___x_2498_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; size_t v___x_2501_; size_t v___x_2502_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2499_, 1);
v___x_2501_ = ((size_t)1ULL);
v___x_2502_ = lean_usize_add(v_i_2487_, v___x_2501_);
v_i_2487_ = v___x_2502_;
v_b_2489_ = v_a_2500_;
goto _start;
}
else
{
lean_dec_ref(v_f_2485_);
return v___x_2499_;
}
}
else
{
lean_object* v___x_2504_; 
lean_dec_ref(v_f_2485_);
v___x_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2504_, 0, v_b_2489_);
return v___x_2504_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6___boxed(lean_object* v_pu_2505_, lean_object* v_f_2506_, lean_object* v_as_2507_, lean_object* v_i_2508_, lean_object* v_stop_2509_, lean_object* v_b_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
uint8_t v_pu_boxed_2518_; size_t v_i_boxed_2519_; size_t v_stop_boxed_2520_; lean_object* v_res_2521_; 
v_pu_boxed_2518_ = lean_unbox(v_pu_2505_);
v_i_boxed_2519_ = lean_unbox_usize(v_i_2508_);
lean_dec(v_i_2508_);
v_stop_boxed_2520_ = lean_unbox_usize(v_stop_2509_);
lean_dec(v_stop_2509_);
v_res_2521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(v_pu_boxed_2518_, v_f_2506_, v_as_2507_, v_i_boxed_2519_, v_stop_boxed_2520_, v_b_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v_as_2507_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(uint8_t v_pu_2522_, lean_object* v_f_2523_, lean_object* v_as_2524_, size_t v_i_2525_, size_t v_stop_2526_, lean_object* v_b_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
uint8_t v___x_2535_; 
v___x_2535_ = lean_usize_dec_eq(v_i_2525_, v_stop_2526_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = lean_array_uget_borrowed(v_as_2524_, v_i_2525_);
lean_inc(v___x_2536_);
lean_inc_ref(v_f_2523_);
v___x_2537_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_2523_, v___x_2536_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v_a_2538_; size_t v___x_2539_; size_t v___x_2540_; 
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2537_, 1);
v___x_2539_ = ((size_t)1ULL);
v___x_2540_ = lean_usize_add(v_i_2525_, v___x_2539_);
v_i_2525_ = v___x_2540_;
v_b_2527_ = v_a_2538_;
goto _start;
}
else
{
lean_dec_ref(v_f_2523_);
return v___x_2537_;
}
}
else
{
lean_object* v___x_2542_; 
lean_dec_ref(v_f_2523_);
v___x_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2542_, 0, v_b_2527_);
return v___x_2542_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4___boxed(lean_object* v_pu_2543_, lean_object* v_f_2544_, lean_object* v_as_2545_, lean_object* v_i_2546_, lean_object* v_stop_2547_, lean_object* v_b_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
uint8_t v_pu_boxed_2556_; size_t v_i_boxed_2557_; size_t v_stop_boxed_2558_; lean_object* v_res_2559_; 
v_pu_boxed_2556_ = lean_unbox(v_pu_2543_);
v_i_boxed_2557_ = lean_unbox_usize(v_i_2546_);
lean_dec(v_i_2546_);
v_stop_boxed_2558_ = lean_unbox_usize(v_stop_2547_);
lean_dec(v_stop_2547_);
v_res_2559_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_boxed_2556_, v_f_2544_, v_as_2545_, v_i_boxed_2557_, v_stop_boxed_2558_, v_b_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v_as_2545_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(uint8_t v_pu_2560_, lean_object* v_f_2561_, lean_object* v_e_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
lean_object* v_args_2571_; 
switch(lean_obj_tag(v_e_2562_))
{
case 2:
{
lean_object* v_struct_2580_; lean_object* v___x_2581_; 
v_struct_2580_ = lean_ctor_get(v_e_2562_, 2);
lean_inc(v_struct_2580_);
lean_dec_ref_known(v_e_2562_, 3);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2581_ = lean_apply_8(v_f_2561_, v_struct_2580_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2581_;
}
case 3:
{
lean_object* v_args_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; 
v_args_2582_ = lean_ctor_get(v_e_2562_, 2);
lean_inc_ref(v_args_2582_);
lean_dec_ref_known(v_e_2562_, 3);
v___x_2583_ = lean_unsigned_to_nat(0u);
v___x_2584_ = lean_array_get_size(v_args_2582_);
v___x_2585_ = lean_box(0);
v___x_2586_ = lean_nat_dec_lt(v___x_2583_, v___x_2584_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; 
lean_dec_ref(v_args_2582_);
lean_dec_ref(v_f_2561_);
v___x_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2585_);
return v___x_2587_;
}
else
{
size_t v___x_2588_; size_t v___x_2589_; lean_object* v___x_2590_; 
v___x_2588_ = ((size_t)0ULL);
v___x_2589_ = lean_usize_of_nat(v___x_2584_);
v___x_2590_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2560_, v_f_2561_, v_args_2582_, v___x_2588_, v___x_2589_, v___x_2585_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
lean_dec_ref(v_args_2582_);
return v___x_2590_;
}
}
case 4:
{
lean_object* v_fvarId_2591_; lean_object* v_args_2592_; lean_object* v___x_2593_; 
v_fvarId_2591_ = lean_ctor_get(v_e_2562_, 0);
lean_inc(v_fvarId_2591_);
v_args_2592_ = lean_ctor_get(v_e_2562_, 1);
lean_inc_ref(v_args_2592_);
lean_dec_ref_known(v_e_2562_, 2);
lean_inc_ref(v_f_2561_);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2593_ = lean_apply_8(v_f_2561_, v_fvarId_2591_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2607_; 
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2607_ == 0)
{
lean_object* v_unused_2608_; 
v_unused_2608_ = lean_ctor_get(v___x_2593_, 0);
lean_dec(v_unused_2608_);
v___x_2595_ = v___x_2593_;
v_isShared_2596_ = v_isSharedCheck_2607_;
goto v_resetjp_2594_;
}
else
{
lean_dec(v___x_2593_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2607_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; uint8_t v___x_2600_; 
v___x_2597_ = lean_unsigned_to_nat(0u);
v___x_2598_ = lean_array_get_size(v_args_2592_);
v___x_2599_ = lean_box(0);
v___x_2600_ = lean_nat_dec_lt(v___x_2597_, v___x_2598_);
if (v___x_2600_ == 0)
{
lean_object* v___x_2602_; 
lean_dec_ref(v_args_2592_);
lean_dec_ref(v_f_2561_);
if (v_isShared_2596_ == 0)
{
lean_ctor_set(v___x_2595_, 0, v___x_2599_);
v___x_2602_ = v___x_2595_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v___x_2599_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
else
{
size_t v___x_2604_; size_t v___x_2605_; lean_object* v___x_2606_; 
lean_del_object(v___x_2595_);
v___x_2604_ = ((size_t)0ULL);
v___x_2605_ = lean_usize_of_nat(v___x_2598_);
v___x_2606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2560_, v_f_2561_, v_args_2592_, v___x_2604_, v___x_2605_, v___x_2599_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
lean_dec_ref(v_args_2592_);
return v___x_2606_;
}
}
}
else
{
lean_dec_ref(v_args_2592_);
lean_dec_ref(v_f_2561_);
return v___x_2593_;
}
}
case 5:
{
lean_object* v_args_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; 
v_args_2609_ = lean_ctor_get(v_e_2562_, 1);
lean_inc_ref(v_args_2609_);
lean_dec_ref_known(v_e_2562_, 2);
v___x_2610_ = lean_unsigned_to_nat(0u);
v___x_2611_ = lean_array_get_size(v_args_2609_);
v___x_2612_ = lean_box(0);
v___x_2613_ = lean_nat_dec_lt(v___x_2610_, v___x_2611_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; 
lean_dec_ref(v_args_2609_);
lean_dec_ref(v_f_2561_);
v___x_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2612_);
return v___x_2614_;
}
else
{
size_t v___x_2615_; size_t v___x_2616_; lean_object* v___x_2617_; 
v___x_2615_ = ((size_t)0ULL);
v___x_2616_ = lean_usize_of_nat(v___x_2611_);
v___x_2617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2560_, v_f_2561_, v_args_2609_, v___x_2615_, v___x_2616_, v___x_2612_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
lean_dec_ref(v_args_2609_);
return v___x_2617_;
}
}
case 6:
{
lean_object* v_var_2618_; lean_object* v___x_2619_; 
v_var_2618_ = lean_ctor_get(v_e_2562_, 1);
lean_inc(v_var_2618_);
lean_dec_ref_known(v_e_2562_, 2);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2619_ = lean_apply_8(v_f_2561_, v_var_2618_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2619_;
}
case 7:
{
lean_object* v_var_2620_; lean_object* v___x_2621_; 
v_var_2620_ = lean_ctor_get(v_e_2562_, 1);
lean_inc(v_var_2620_);
lean_dec_ref_known(v_e_2562_, 2);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2621_ = lean_apply_8(v_f_2561_, v_var_2620_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2621_;
}
case 8:
{
lean_object* v_var_2622_; lean_object* v___x_2623_; 
v_var_2622_ = lean_ctor_get(v_e_2562_, 2);
lean_inc(v_var_2622_);
lean_dec_ref_known(v_e_2562_, 3);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2623_ = lean_apply_8(v_f_2561_, v_var_2622_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2623_;
}
case 9:
{
lean_object* v_args_2624_; 
v_args_2624_ = lean_ctor_get(v_e_2562_, 1);
lean_inc_ref(v_args_2624_);
lean_dec_ref_known(v_e_2562_, 2);
v_args_2571_ = v_args_2624_;
goto v___jp_2570_;
}
case 10:
{
lean_object* v_args_2625_; 
v_args_2625_ = lean_ctor_get(v_e_2562_, 1);
lean_inc_ref(v_args_2625_);
lean_dec_ref_known(v_e_2562_, 2);
v_args_2571_ = v_args_2625_;
goto v___jp_2570_;
}
case 11:
{
lean_object* v_var_2626_; lean_object* v___x_2627_; 
v_var_2626_ = lean_ctor_get(v_e_2562_, 1);
lean_inc(v_var_2626_);
lean_dec_ref_known(v_e_2562_, 2);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2627_ = lean_apply_8(v_f_2561_, v_var_2626_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2627_;
}
case 12:
{
lean_object* v_var_2628_; lean_object* v_args_2629_; lean_object* v___x_2630_; 
v_var_2628_ = lean_ctor_get(v_e_2562_, 0);
lean_inc(v_var_2628_);
v_args_2629_ = lean_ctor_get(v_e_2562_, 2);
lean_inc_ref(v_args_2629_);
lean_dec_ref_known(v_e_2562_, 3);
lean_inc_ref(v_f_2561_);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2630_ = lean_apply_8(v_f_2561_, v_var_2628_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2644_; 
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2644_ == 0)
{
lean_object* v_unused_2645_; 
v_unused_2645_ = lean_ctor_get(v___x_2630_, 0);
lean_dec(v_unused_2645_);
v___x_2632_ = v___x_2630_;
v_isShared_2633_ = v_isSharedCheck_2644_;
goto v_resetjp_2631_;
}
else
{
lean_dec(v___x_2630_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2644_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
v___x_2634_ = lean_unsigned_to_nat(0u);
v___x_2635_ = lean_array_get_size(v_args_2629_);
v___x_2636_ = lean_box(0);
v___x_2637_ = lean_nat_dec_lt(v___x_2634_, v___x_2635_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2639_; 
lean_dec_ref(v_args_2629_);
lean_dec_ref(v_f_2561_);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 0, v___x_2636_);
v___x_2639_ = v___x_2632_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v___x_2636_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
else
{
size_t v___x_2641_; size_t v___x_2642_; lean_object* v___x_2643_; 
lean_del_object(v___x_2632_);
v___x_2641_ = ((size_t)0ULL);
v___x_2642_ = lean_usize_of_nat(v___x_2635_);
v___x_2643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2560_, v_f_2561_, v_args_2629_, v___x_2641_, v___x_2642_, v___x_2636_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
lean_dec_ref(v_args_2629_);
return v___x_2643_;
}
}
}
else
{
lean_dec_ref(v_args_2629_);
lean_dec_ref(v_f_2561_);
return v___x_2630_;
}
}
case 13:
{
lean_object* v_fvarId_2646_; lean_object* v___x_2647_; 
v_fvarId_2646_ = lean_ctor_get(v_e_2562_, 1);
lean_inc(v_fvarId_2646_);
lean_dec_ref_known(v_e_2562_, 2);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2647_ = lean_apply_8(v_f_2561_, v_fvarId_2646_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2647_;
}
case 14:
{
lean_object* v_fvarId_2648_; lean_object* v___x_2649_; 
v_fvarId_2648_ = lean_ctor_get(v_e_2562_, 0);
lean_inc(v_fvarId_2648_);
lean_dec_ref_known(v_e_2562_, 1);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2649_ = lean_apply_8(v_f_2561_, v_fvarId_2648_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2649_;
}
case 15:
{
lean_object* v_fvarId_2650_; lean_object* v___x_2651_; 
v_fvarId_2650_ = lean_ctor_get(v_e_2562_, 0);
lean_inc(v_fvarId_2650_);
lean_dec_ref_known(v_e_2562_, 1);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v___y_2566_);
lean_inc_ref(v___y_2565_);
lean_inc(v___y_2564_);
lean_inc(v___y_2563_);
v___x_2651_ = lean_apply_8(v_f_2561_, v_fvarId_2650_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, lean_box(0));
return v___x_2651_;
}
default: 
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
lean_dec(v_e_2562_);
lean_dec_ref(v_f_2561_);
v___x_2652_ = lean_box(0);
v___x_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2652_);
return v___x_2653_;
}
}
v___jp_2570_:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; uint8_t v___x_2575_; 
v___x_2572_ = lean_unsigned_to_nat(0u);
v___x_2573_ = lean_array_get_size(v_args_2571_);
v___x_2574_ = lean_box(0);
v___x_2575_ = lean_nat_dec_lt(v___x_2572_, v___x_2573_);
if (v___x_2575_ == 0)
{
lean_object* v___x_2576_; 
lean_dec_ref(v_args_2571_);
lean_dec_ref(v_f_2561_);
v___x_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2574_);
return v___x_2576_;
}
else
{
size_t v___x_2577_; size_t v___x_2578_; lean_object* v___x_2579_; 
v___x_2577_ = ((size_t)0ULL);
v___x_2578_ = lean_usize_of_nat(v___x_2573_);
v___x_2579_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2560_, v_f_2561_, v_args_2571_, v___x_2577_, v___x_2578_, v___x_2574_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
lean_dec_ref(v_args_2571_);
return v___x_2579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2___boxed(lean_object* v_pu_2654_, lean_object* v_f_2655_, lean_object* v_e_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
uint8_t v_pu_boxed_2664_; lean_object* v_res_2665_; 
v_pu_boxed_2664_ = lean_unbox(v_pu_2654_);
v_res_2665_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(v_pu_boxed_2664_, v_f_2655_, v_e_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
lean_dec(v___y_2662_);
lean_dec_ref(v___y_2661_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec(v___y_2657_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(uint8_t v_pu_2666_, lean_object* v_f_2667_, lean_object* v_decl_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v_type_2676_; lean_object* v_value_2677_; lean_object* v___x_2678_; 
v_type_2676_ = lean_ctor_get(v_decl_2668_, 2);
lean_inc_ref(v_type_2676_);
v_value_2677_ = lean_ctor_get(v_decl_2668_, 3);
lean_inc(v_value_2677_);
lean_dec_ref(v_decl_2668_);
lean_inc_ref(v_f_2667_);
v___x_2678_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2667_, v_type_2676_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v___x_2679_; 
lean_dec_ref_known(v___x_2678_, 1);
v___x_2679_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2(v_pu_2666_, v_f_2667_, v_value_2677_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
return v___x_2679_;
}
else
{
lean_dec(v_value_2677_);
lean_dec_ref(v_f_2667_);
return v___x_2678_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1___boxed(lean_object* v_pu_2680_, lean_object* v_f_2681_, lean_object* v_decl_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
uint8_t v_pu_boxed_2690_; lean_object* v_res_2691_; 
v_pu_boxed_2690_ = lean_unbox(v_pu_2680_);
v_res_2691_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v_pu_boxed_2690_, v_f_2681_, v_decl_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec(v___y_2684_);
lean_dec(v___y_2683_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(lean_object* v_alt_2692_, lean_object* v_f_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_){
_start:
{
switch(lean_obj_tag(v_alt_2692_))
{
case 0:
{
lean_object* v_code_2701_; lean_object* v___x_2702_; 
v_code_2701_ = lean_ctor_get(v_alt_2692_, 2);
lean_inc_ref(v_code_2701_);
lean_dec_ref_known(v_alt_2692_, 3);
lean_inc(v___y_2699_);
lean_inc_ref(v___y_2698_);
lean_inc(v___y_2697_);
lean_inc_ref(v___y_2696_);
lean_inc(v___y_2695_);
lean_inc(v___y_2694_);
v___x_2702_ = lean_apply_8(v_f_2693_, v_code_2701_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, lean_box(0));
return v___x_2702_;
}
case 1:
{
lean_object* v_code_2703_; lean_object* v___x_2704_; 
v_code_2703_ = lean_ctor_get(v_alt_2692_, 1);
lean_inc_ref(v_code_2703_);
lean_dec_ref_known(v_alt_2692_, 2);
lean_inc(v___y_2699_);
lean_inc_ref(v___y_2698_);
lean_inc(v___y_2697_);
lean_inc_ref(v___y_2696_);
lean_inc(v___y_2695_);
lean_inc(v___y_2694_);
v___x_2704_ = lean_apply_8(v_f_2693_, v_code_2703_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, lean_box(0));
return v___x_2704_;
}
default: 
{
lean_object* v_code_2705_; lean_object* v___x_2706_; 
v_code_2705_ = lean_ctor_get(v_alt_2692_, 0);
lean_inc_ref(v_code_2705_);
lean_dec_ref_known(v_alt_2692_, 1);
lean_inc(v___y_2699_);
lean_inc_ref(v___y_2698_);
lean_inc(v___y_2697_);
lean_inc_ref(v___y_2696_);
lean_inc(v___y_2695_);
lean_inc(v___y_2694_);
v___x_2706_ = lean_apply_8(v_f_2693_, v_code_2705_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, lean_box(0));
return v___x_2706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_alt_2707_, lean_object* v_f_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v_res_2716_; 
v_res_2716_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(v_alt_2707_, v_f_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec(v___y_2709_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0___boxed(lean_object* v_pu_2717_, lean_object* v_f_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
uint8_t v_pu_boxed_2727_; lean_object* v_res_2728_; 
v_pu_boxed_2727_ = lean_unbox(v_pu_2717_);
v_res_2728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0(v_pu_boxed_2727_, v_f_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec(v___y_2720_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(uint8_t v_pu_2729_, lean_object* v_f_2730_, lean_object* v_as_2731_, size_t v_i_2732_, size_t v_stop_2733_, lean_object* v_b_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
uint8_t v___x_2742_; 
v___x_2742_ = lean_usize_dec_eq(v_i_2732_, v_stop_2733_);
if (v___x_2742_ == 0)
{
lean_object* v___x_2743_; lean_object* v___f_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2743_ = lean_box(v_pu_2729_);
lean_inc_ref(v_f_2730_);
v___f_2744_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2744_, 0, v___x_2743_);
lean_closure_set(v___f_2744_, 1, v_f_2730_);
v___x_2745_ = lean_array_uget_borrowed(v_as_2731_, v_i_2732_);
lean_inc(v___x_2745_);
v___x_2746_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(v___x_2745_, v___f_2744_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; size_t v___x_2748_; size_t v___x_2749_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
v___x_2748_ = ((size_t)1ULL);
v___x_2749_ = lean_usize_add(v_i_2732_, v___x_2748_);
v_i_2732_ = v___x_2749_;
v_b_2734_ = v_a_2747_;
goto _start;
}
else
{
lean_dec_ref(v_f_2730_);
return v___x_2746_;
}
}
else
{
lean_object* v___x_2751_; 
lean_dec_ref(v_f_2730_);
v___x_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2751_, 0, v_b_2734_);
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(uint8_t v_pu_2752_, lean_object* v_f_2753_, lean_object* v_c_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_){
_start:
{
switch(lean_obj_tag(v_c_2754_))
{
case 0:
{
lean_object* v_decl_2762_; lean_object* v_k_2763_; lean_object* v___x_2764_; 
v_decl_2762_ = lean_ctor_get(v_c_2754_, 0);
lean_inc_ref(v_decl_2762_);
v_k_2763_ = lean_ctor_get(v_c_2754_, 1);
lean_inc_ref(v_k_2763_);
lean_dec_ref_known(v_c_2754_, 2);
lean_inc_ref(v_f_2753_);
v___x_2764_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v_pu_2752_, v_f_2753_, v_decl_2762_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2764_) == 0)
{
lean_dec_ref_known(v___x_2764_, 1);
v_c_2754_ = v_k_2763_;
goto _start;
}
else
{
lean_dec_ref(v_k_2763_);
lean_dec_ref(v_f_2753_);
return v___x_2764_;
}
}
case 3:
{
lean_object* v_fvarId_2766_; lean_object* v_args_2767_; lean_object* v___x_2768_; 
v_fvarId_2766_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2766_);
v_args_2767_ = lean_ctor_get(v_c_2754_, 1);
lean_inc_ref(v_args_2767_);
lean_dec_ref_known(v_c_2754_, 2);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2768_ = lean_apply_8(v_f_2753_, v_fvarId_2766_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2782_; 
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2782_ == 0)
{
lean_object* v_unused_2783_; 
v_unused_2783_ = lean_ctor_get(v___x_2768_, 0);
lean_dec(v_unused_2783_);
v___x_2770_ = v___x_2768_;
v_isShared_2771_ = v_isSharedCheck_2782_;
goto v_resetjp_2769_;
}
else
{
lean_dec(v___x_2768_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2782_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; 
v___x_2772_ = lean_unsigned_to_nat(0u);
v___x_2773_ = lean_array_get_size(v_args_2767_);
v___x_2774_ = lean_box(0);
v___x_2775_ = lean_nat_dec_lt(v___x_2772_, v___x_2773_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2777_; 
lean_dec_ref(v_args_2767_);
lean_dec_ref(v_f_2753_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 0, v___x_2774_);
v___x_2777_ = v___x_2770_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v___x_2774_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
else
{
size_t v___x_2779_; size_t v___x_2780_; lean_object* v___x_2781_; 
lean_del_object(v___x_2770_);
v___x_2779_ = ((size_t)0ULL);
v___x_2780_ = lean_usize_of_nat(v___x_2773_);
v___x_2781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1_spec__2_spec__4(v_pu_2752_, v_f_2753_, v_args_2767_, v___x_2779_, v___x_2780_, v___x_2774_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec_ref(v_args_2767_);
return v___x_2781_;
}
}
}
else
{
lean_dec_ref(v_args_2767_);
lean_dec_ref(v_f_2753_);
return v___x_2768_;
}
}
case 4:
{
lean_object* v_cases_2784_; lean_object* v_resultType_2785_; lean_object* v_discr_2786_; lean_object* v_alts_2787_; lean_object* v___x_2788_; 
v_cases_2784_ = lean_ctor_get(v_c_2754_, 0);
lean_inc_ref(v_cases_2784_);
lean_dec_ref_known(v_c_2754_, 1);
v_resultType_2785_ = lean_ctor_get(v_cases_2784_, 1);
lean_inc_ref(v_resultType_2785_);
v_discr_2786_ = lean_ctor_get(v_cases_2784_, 2);
lean_inc(v_discr_2786_);
v_alts_2787_ = lean_ctor_get(v_cases_2784_, 3);
lean_inc_ref(v_alts_2787_);
lean_dec_ref(v_cases_2784_);
lean_inc_ref(v_f_2753_);
v___x_2788_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2753_, v_resultType_2785_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2788_) == 0)
{
lean_object* v___x_2789_; 
lean_dec_ref_known(v___x_2788_, 1);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2789_ = lean_apply_8(v_f_2753_, v_discr_2786_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2803_; 
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2803_ == 0)
{
lean_object* v_unused_2804_; 
v_unused_2804_ = lean_ctor_get(v___x_2789_, 0);
lean_dec(v_unused_2804_);
v___x_2791_ = v___x_2789_;
v_isShared_2792_ = v_isSharedCheck_2803_;
goto v_resetjp_2790_;
}
else
{
lean_dec(v___x_2789_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2803_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; uint8_t v___x_2796_; 
v___x_2793_ = lean_unsigned_to_nat(0u);
v___x_2794_ = lean_array_get_size(v_alts_2787_);
v___x_2795_ = lean_box(0);
v___x_2796_ = lean_nat_dec_lt(v___x_2793_, v___x_2794_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2798_; 
lean_dec_ref(v_alts_2787_);
lean_dec_ref(v_f_2753_);
if (v_isShared_2792_ == 0)
{
lean_ctor_set(v___x_2791_, 0, v___x_2795_);
v___x_2798_ = v___x_2791_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2795_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
else
{
size_t v___x_2800_; size_t v___x_2801_; lean_object* v___x_2802_; 
lean_del_object(v___x_2791_);
v___x_2800_ = ((size_t)0ULL);
v___x_2801_ = lean_usize_of_nat(v___x_2794_);
v___x_2802_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(v_pu_2752_, v_f_2753_, v_alts_2787_, v___x_2800_, v___x_2801_, v___x_2795_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec_ref(v_alts_2787_);
return v___x_2802_;
}
}
}
else
{
lean_dec_ref(v_alts_2787_);
lean_dec_ref(v_f_2753_);
return v___x_2789_;
}
}
else
{
lean_dec_ref(v_alts_2787_);
lean_dec(v_discr_2786_);
lean_dec_ref(v_f_2753_);
return v___x_2788_;
}
}
case 5:
{
lean_object* v_fvarId_2805_; lean_object* v___x_2806_; 
v_fvarId_2805_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2805_);
lean_dec_ref_known(v_c_2754_, 1);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2806_ = lean_apply_8(v_f_2753_, v_fvarId_2805_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
return v___x_2806_;
}
case 6:
{
lean_object* v_type_2807_; lean_object* v___x_2808_; 
v_type_2807_ = lean_ctor_get(v_c_2754_, 0);
lean_inc_ref(v_type_2807_);
lean_dec_ref_known(v_c_2754_, 1);
v___x_2808_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2753_, v_type_2807_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
return v___x_2808_;
}
case 7:
{
lean_object* v_fvarId_2809_; lean_object* v_y_2810_; lean_object* v_k_2811_; lean_object* v___x_2812_; 
v_fvarId_2809_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2809_);
v_y_2810_ = lean_ctor_get(v_c_2754_, 2);
lean_inc(v_y_2810_);
v_k_2811_ = lean_ctor_get(v_c_2754_, 3);
lean_inc_ref(v_k_2811_);
lean_dec_ref_known(v_c_2754_, 4);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2812_ = lean_apply_8(v_f_2753_, v_fvarId_2809_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v___x_2813_; 
lean_dec_ref_known(v___x_2812_, 1);
lean_inc_ref(v_f_2753_);
v___x_2813_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_2753_, v_y_2810_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_dec_ref_known(v___x_2813_, 1);
v_c_2754_ = v_k_2811_;
goto _start;
}
else
{
lean_dec_ref(v_k_2811_);
lean_dec_ref(v_f_2753_);
return v___x_2813_;
}
}
else
{
lean_dec_ref(v_k_2811_);
lean_dec(v_y_2810_);
lean_dec_ref(v_f_2753_);
return v___x_2812_;
}
}
case 8:
{
lean_object* v_fvarId_2815_; lean_object* v_y_2816_; lean_object* v_k_2817_; lean_object* v___x_2818_; 
v_fvarId_2815_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2815_);
v_y_2816_ = lean_ctor_get(v_c_2754_, 2);
lean_inc(v_y_2816_);
v_k_2817_ = lean_ctor_get(v_c_2754_, 3);
lean_inc_ref(v_k_2817_);
lean_dec_ref_known(v_c_2754_, 4);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2818_ = lean_apply_8(v_f_2753_, v_fvarId_2815_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_object* v___x_2819_; 
lean_dec_ref_known(v___x_2818_, 1);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2819_ = lean_apply_8(v_f_2753_, v_y_2816_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_dec_ref_known(v___x_2819_, 1);
v_c_2754_ = v_k_2817_;
goto _start;
}
else
{
lean_dec_ref(v_k_2817_);
lean_dec_ref(v_f_2753_);
return v___x_2819_;
}
}
else
{
lean_dec_ref(v_k_2817_);
lean_dec(v_y_2816_);
lean_dec_ref(v_f_2753_);
return v___x_2818_;
}
}
case 9:
{
lean_object* v_fvarId_2821_; lean_object* v_y_2822_; lean_object* v_ty_2823_; lean_object* v_k_2824_; lean_object* v___x_2825_; 
v_fvarId_2821_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2821_);
v_y_2822_ = lean_ctor_get(v_c_2754_, 3);
lean_inc(v_y_2822_);
v_ty_2823_ = lean_ctor_get(v_c_2754_, 4);
lean_inc_ref(v_ty_2823_);
v_k_2824_ = lean_ctor_get(v_c_2754_, 5);
lean_inc_ref(v_k_2824_);
lean_dec_ref_known(v_c_2754_, 6);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2825_ = lean_apply_8(v_f_2753_, v_fvarId_2821_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v___x_2826_; 
lean_dec_ref_known(v___x_2825_, 1);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2826_ = lean_apply_8(v_f_2753_, v_y_2822_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2826_) == 0)
{
lean_object* v___x_2827_; 
lean_dec_ref_known(v___x_2826_, 1);
lean_inc_ref(v_f_2753_);
v___x_2827_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2753_, v_ty_2823_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2827_) == 0)
{
lean_dec_ref_known(v___x_2827_, 1);
v_c_2754_ = v_k_2824_;
goto _start;
}
else
{
lean_dec_ref(v_k_2824_);
lean_dec_ref(v_f_2753_);
return v___x_2827_;
}
}
else
{
lean_dec_ref(v_k_2824_);
lean_dec_ref(v_ty_2823_);
lean_dec_ref(v_f_2753_);
return v___x_2826_;
}
}
else
{
lean_dec_ref(v_k_2824_);
lean_dec_ref(v_ty_2823_);
lean_dec(v_y_2822_);
lean_dec_ref(v_f_2753_);
return v___x_2825_;
}
}
case 10:
{
lean_object* v_fvarId_2829_; lean_object* v_k_2830_; lean_object* v___x_2831_; 
v_fvarId_2829_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2829_);
v_k_2830_ = lean_ctor_get(v_c_2754_, 2);
lean_inc_ref(v_k_2830_);
lean_dec_ref_known(v_c_2754_, 3);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2831_ = lean_apply_8(v_f_2753_, v_fvarId_2829_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_dec_ref_known(v___x_2831_, 1);
v_c_2754_ = v_k_2830_;
goto _start;
}
else
{
lean_dec_ref(v_k_2830_);
lean_dec_ref(v_f_2753_);
return v___x_2831_;
}
}
case 11:
{
lean_object* v_fvarId_2833_; lean_object* v_k_2834_; lean_object* v___x_2835_; 
v_fvarId_2833_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2833_);
v_k_2834_ = lean_ctor_get(v_c_2754_, 2);
lean_inc_ref(v_k_2834_);
lean_dec_ref_known(v_c_2754_, 3);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2835_ = lean_apply_8(v_f_2753_, v_fvarId_2833_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_dec_ref_known(v___x_2835_, 1);
v_c_2754_ = v_k_2834_;
goto _start;
}
else
{
lean_dec_ref(v_k_2834_);
lean_dec_ref(v_f_2753_);
return v___x_2835_;
}
}
case 12:
{
lean_object* v_fvarId_2837_; lean_object* v_k_2838_; lean_object* v___x_2839_; 
v_fvarId_2837_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2837_);
v_k_2838_ = lean_ctor_get(v_c_2754_, 3);
lean_inc_ref(v_k_2838_);
lean_dec_ref_known(v_c_2754_, 4);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2839_ = lean_apply_8(v_f_2753_, v_fvarId_2837_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_dec_ref_known(v___x_2839_, 1);
v_c_2754_ = v_k_2838_;
goto _start;
}
else
{
lean_dec_ref(v_k_2838_);
lean_dec_ref(v_f_2753_);
return v___x_2839_;
}
}
case 13:
{
lean_object* v_fvarId_2841_; lean_object* v_k_2842_; lean_object* v___x_2843_; 
v_fvarId_2841_ = lean_ctor_get(v_c_2754_, 0);
lean_inc(v_fvarId_2841_);
v_k_2842_ = lean_ctor_get(v_c_2754_, 1);
lean_inc_ref(v_k_2842_);
lean_dec_ref_known(v_c_2754_, 2);
lean_inc_ref(v_f_2753_);
lean_inc(v___y_2760_);
lean_inc_ref(v___y_2759_);
lean_inc(v___y_2758_);
lean_inc_ref(v___y_2757_);
lean_inc(v___y_2756_);
lean_inc(v___y_2755_);
v___x_2843_ = lean_apply_8(v_f_2753_, v_fvarId_2841_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, lean_box(0));
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_dec_ref_known(v___x_2843_, 1);
v_c_2754_ = v_k_2842_;
goto _start;
}
else
{
lean_dec_ref(v_k_2842_);
lean_dec_ref(v_f_2753_);
return v___x_2843_;
}
}
default: 
{
lean_object* v_decl_2845_; lean_object* v_k_2846_; lean_object* v_params_2847_; lean_object* v_type_2848_; lean_object* v_value_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; uint8_t v___x_2852_; 
v_decl_2845_ = lean_ctor_get(v_c_2754_, 0);
lean_inc_ref(v_decl_2845_);
v_k_2846_ = lean_ctor_get(v_c_2754_, 1);
lean_inc_ref(v_k_2846_);
lean_dec_ref(v_c_2754_);
v_params_2847_ = lean_ctor_get(v_decl_2845_, 2);
lean_inc_ref(v_params_2847_);
v_type_2848_ = lean_ctor_get(v_decl_2845_, 3);
lean_inc_ref(v_type_2848_);
v_value_2849_ = lean_ctor_get(v_decl_2845_, 4);
lean_inc_ref(v_value_2849_);
lean_dec_ref(v_decl_2845_);
v___x_2850_ = lean_unsigned_to_nat(0u);
v___x_2851_ = lean_array_get_size(v_params_2847_);
v___x_2852_ = lean_nat_dec_lt(v___x_2850_, v___x_2851_);
if (v___x_2852_ == 0)
{
lean_object* v___x_2853_; 
lean_dec_ref(v_params_2847_);
lean_inc_ref(v_f_2753_);
v___x_2853_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2753_, v_type_2848_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v___x_2854_; 
lean_dec_ref_known(v___x_2853_, 1);
lean_inc_ref(v_f_2753_);
v___x_2854_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2752_, v_f_2753_, v_value_2849_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_dec_ref_known(v___x_2854_, 1);
v_c_2754_ = v_k_2846_;
goto _start;
}
else
{
lean_dec_ref(v_k_2846_);
lean_dec_ref(v_f_2753_);
return v___x_2854_;
}
}
else
{
lean_dec_ref(v_value_2849_);
lean_dec_ref(v_k_2846_);
lean_dec_ref(v_f_2753_);
return v___x_2853_;
}
}
else
{
lean_object* v___x_2856_; size_t v___x_2857_; size_t v___x_2858_; lean_object* v___x_2859_; 
v___x_2856_ = lean_box(0);
v___x_2857_ = ((size_t)0ULL);
v___x_2858_ = lean_usize_of_nat(v___x_2851_);
lean_inc_ref(v_f_2753_);
v___x_2859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(v_pu_2752_, v_f_2753_, v_params_2847_, v___x_2857_, v___x_2858_, v___x_2856_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec_ref(v_params_2847_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v___x_2860_; 
lean_dec_ref_known(v___x_2859_, 1);
lean_inc_ref(v_f_2753_);
v___x_2860_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2753_, v_type_2848_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v___x_2861_; 
lean_dec_ref_known(v___x_2860_, 1);
lean_inc_ref(v_f_2753_);
v___x_2861_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2752_, v_f_2753_, v_value_2849_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_dec_ref_known(v___x_2861_, 1);
v_c_2754_ = v_k_2846_;
goto _start;
}
else
{
lean_dec_ref(v_k_2846_);
lean_dec_ref(v_f_2753_);
return v___x_2861_;
}
}
else
{
lean_dec_ref(v_value_2849_);
lean_dec_ref(v_k_2846_);
lean_dec_ref(v_f_2753_);
return v___x_2860_;
}
}
else
{
lean_dec_ref(v_value_2849_);
lean_dec_ref(v_type_2848_);
lean_dec_ref(v_k_2846_);
lean_dec_ref(v_f_2753_);
return v___x_2859_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___lam__0(uint8_t v_pu_2863_, lean_object* v_f_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v___x_2873_; 
v___x_2873_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2863_, v_f_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_);
return v___x_2873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9___boxed(lean_object* v_pu_2874_, lean_object* v_f_2875_, lean_object* v_as_2876_, lean_object* v_i_2877_, lean_object* v_stop_2878_, lean_object* v_b_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_){
_start:
{
uint8_t v_pu_boxed_2887_; size_t v_i_boxed_2888_; size_t v_stop_boxed_2889_; lean_object* v_res_2890_; 
v_pu_boxed_2887_ = lean_unbox(v_pu_2874_);
v_i_boxed_2888_ = lean_unbox_usize(v_i_2877_);
lean_dec(v_i_2877_);
v_stop_boxed_2889_ = lean_unbox_usize(v_stop_2878_);
lean_dec(v_stop_2878_);
v_res_2890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__9(v_pu_boxed_2887_, v_f_2875_, v_as_2876_, v_i_boxed_2888_, v_stop_boxed_2889_, v_b_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_);
lean_dec(v___y_2885_);
lean_dec_ref(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec_ref(v___y_2882_);
lean_dec(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v_as_2876_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5___boxed(lean_object* v_pu_2891_, lean_object* v_f_2892_, lean_object* v_c_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
uint8_t v_pu_boxed_2901_; lean_object* v_res_2902_; 
v_pu_boxed_2901_ = lean_unbox(v_pu_2891_);
v_res_2902_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_boxed_2901_, v_f_2892_, v_c_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec(v___y_2894_);
return v_res_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(uint8_t v_pu_2903_, lean_object* v_f_2904_, lean_object* v_decl_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v_params_2913_; lean_object* v_type_2914_; lean_object* v_value_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; uint8_t v___x_2918_; 
v_params_2913_ = lean_ctor_get(v_decl_2905_, 2);
lean_inc_ref(v_params_2913_);
v_type_2914_ = lean_ctor_get(v_decl_2905_, 3);
lean_inc_ref(v_type_2914_);
v_value_2915_ = lean_ctor_get(v_decl_2905_, 4);
lean_inc_ref(v_value_2915_);
lean_dec_ref(v_decl_2905_);
v___x_2916_ = lean_unsigned_to_nat(0u);
v___x_2917_ = lean_array_get_size(v_params_2913_);
v___x_2918_ = lean_nat_dec_lt(v___x_2916_, v___x_2917_);
if (v___x_2918_ == 0)
{
lean_object* v___x_2919_; 
lean_dec_ref(v_params_2913_);
lean_inc_ref(v_f_2904_);
v___x_2919_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2904_, v_type_2914_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v___x_2920_; 
lean_dec_ref_known(v___x_2919_, 1);
v___x_2920_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2903_, v_f_2904_, v_value_2915_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
return v___x_2920_;
}
else
{
lean_dec_ref(v_value_2915_);
lean_dec_ref(v_f_2904_);
return v___x_2919_;
}
}
else
{
lean_object* v___x_2921_; size_t v___x_2922_; size_t v___x_2923_; lean_object* v___x_2924_; 
v___x_2921_ = lean_box(0);
v___x_2922_ = ((size_t)0ULL);
v___x_2923_ = lean_usize_of_nat(v___x_2917_);
lean_inc_ref(v_f_2904_);
v___x_2924_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__6(v_pu_2903_, v_f_2904_, v_params_2913_, v___x_2922_, v___x_2923_, v___x_2921_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
lean_dec_ref(v_params_2913_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_object* v___x_2925_; 
lean_dec_ref_known(v___x_2924_, 1);
lean_inc_ref(v_f_2904_);
v___x_2925_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v_f_2904_, v_type_2914_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v___x_2926_; 
lean_dec_ref_known(v___x_2925_, 1);
v___x_2926_ = l_Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5(v_pu_2903_, v_f_2904_, v_value_2915_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
return v___x_2926_;
}
else
{
lean_dec_ref(v_value_2915_);
lean_dec_ref(v_f_2904_);
return v___x_2925_;
}
}
else
{
lean_dec_ref(v_value_2915_);
lean_dec_ref(v_type_2914_);
lean_dec_ref(v_f_2904_);
return v___x_2924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2___boxed(lean_object* v_pu_2927_, lean_object* v_f_2928_, lean_object* v_decl_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
uint8_t v_pu_boxed_2937_; lean_object* v_res_2938_; 
v_pu_boxed_2937_ = lean_unbox(v_pu_2927_);
v_res_2938_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v_pu_boxed_2937_, v_f_2928_, v_decl_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
lean_dec(v___y_2931_);
lean_dec(v___y_2930_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0_spec__1(lean_object* v_msg_2939_){
_start:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2940_ = lean_box(0);
v___x_2941_ = lean_panic_fn_borrowed(v___x_2940_, v_msg_2939_);
return v___x_2941_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2945_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__2));
v___x_2946_ = lean_unsigned_to_nat(11u);
v___x_2947_ = lean_unsigned_to_nat(163u);
v___x_2948_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__1));
v___x_2949_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__0));
v___x_2950_ = l_mkPanicMessageWithDecl(v___x_2949_, v___x_2948_, v___x_2947_, v___x_2946_, v___x_2945_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(lean_object* v_a_2951_, lean_object* v_x_2952_){
_start:
{
if (lean_obj_tag(v_x_2952_) == 0)
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3);
v___x_2954_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0_spec__1(v___x_2953_);
return v___x_2954_;
}
else
{
lean_object* v_key_2955_; lean_object* v_value_2956_; lean_object* v_tail_2957_; uint8_t v___x_2958_; 
v_key_2955_ = lean_ctor_get(v_x_2952_, 0);
v_value_2956_ = lean_ctor_get(v_x_2952_, 1);
v_tail_2957_ = lean_ctor_get(v_x_2952_, 2);
v___x_2958_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_key_2955_, v_a_2951_);
if (v___x_2958_ == 0)
{
v_x_2952_ = v_tail_2957_;
goto _start;
}
else
{
lean_inc(v_value_2956_);
return v_value_2956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___boxed(lean_object* v_a_2960_, lean_object* v_x_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(v_a_2960_, v_x_2961_);
lean_dec(v_x_2961_);
lean_dec(v_a_2960_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(lean_object* v_m_2963_, lean_object* v_a_2964_){
_start:
{
lean_object* v_buckets_2965_; lean_object* v___x_2966_; uint64_t v___x_2967_; uint64_t v___x_2968_; uint64_t v___x_2969_; uint64_t v_fold_2970_; uint64_t v___x_2971_; uint64_t v___x_2972_; uint64_t v___x_2973_; size_t v___x_2974_; size_t v___x_2975_; size_t v___x_2976_; size_t v___x_2977_; size_t v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v_buckets_2965_ = lean_ctor_get(v_m_2963_, 1);
v___x_2966_ = lean_array_get_size(v_buckets_2965_);
v___x_2967_ = l_Lean_Compiler_LCNF_FloatLetIn_instHashableDecision_hash(v_a_2964_);
v___x_2968_ = 32ULL;
v___x_2969_ = lean_uint64_shift_right(v___x_2967_, v___x_2968_);
v_fold_2970_ = lean_uint64_xor(v___x_2967_, v___x_2969_);
v___x_2971_ = 16ULL;
v___x_2972_ = lean_uint64_shift_right(v_fold_2970_, v___x_2971_);
v___x_2973_ = lean_uint64_xor(v_fold_2970_, v___x_2972_);
v___x_2974_ = lean_uint64_to_usize(v___x_2973_);
v___x_2975_ = lean_usize_of_nat(v___x_2966_);
v___x_2976_ = ((size_t)1ULL);
v___x_2977_ = lean_usize_sub(v___x_2975_, v___x_2976_);
v___x_2978_ = lean_usize_land(v___x_2974_, v___x_2977_);
v___x_2979_ = lean_array_uget_borrowed(v_buckets_2965_, v___x_2978_);
v___x_2980_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0(v_a_2964_, v___x_2979_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0___boxed(lean_object* v_m_2981_, lean_object* v_a_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_m_2981_, v_a_2982_);
lean_dec(v_a_2982_);
lean_dec_ref(v_m_2981_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(lean_object* v_decl_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v___y_2994_; uint8_t v___x_3019_; lean_object* v___x_3020_; 
v___x_3019_ = 0;
v___x_3020_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___closed__0));
switch(lean_obj_tag(v_decl_2985_))
{
case 0:
{
lean_object* v_decl_3021_; lean_object* v___x_3022_; 
v_decl_3021_ = lean_ctor_get(v_decl_2985_, 0);
lean_inc_ref(v_decl_3021_);
v___x_3022_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v___x_3019_, v___x_3020_, v_decl_3021_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_);
v___y_2994_ = v___x_3022_;
goto v___jp_2993_;
}
case 1:
{
lean_object* v_decl_3023_; lean_object* v___x_3024_; 
v_decl_3023_ = lean_ctor_get(v_decl_2985_, 0);
lean_inc_ref(v_decl_3023_);
v___x_3024_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3019_, v___x_3020_, v_decl_3023_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_);
v___y_2994_ = v___x_3024_;
goto v___jp_2993_;
}
case 2:
{
lean_object* v_decl_3025_; lean_object* v___x_3026_; 
v_decl_3025_ = lean_ctor_get(v_decl_2985_, 0);
lean_inc_ref(v_decl_3025_);
v___x_3026_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3019_, v___x_3020_, v_decl_3025_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_);
v___y_2994_ = v___x_3026_;
goto v___jp_2993_;
}
case 3:
{
lean_object* v_fvarId_3027_; lean_object* v_y_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v_fvarId_3027_ = lean_ctor_get(v_decl_2985_, 0);
v_y_3028_ = lean_ctor_get(v_decl_2985_, 2);
lean_inc(v_fvarId_3027_);
v___x_3029_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3027_, v_a_2986_);
lean_dec_ref(v___x_3029_);
lean_inc(v_y_3028_);
v___x_3030_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v___x_3020_, v_y_3028_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_);
v___y_2994_ = v___x_3030_;
goto v___jp_2993_;
}
case 4:
{
lean_object* v_fvarId_3031_; lean_object* v_y_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v_fvarId_3031_ = lean_ctor_get(v_decl_2985_, 0);
v_y_3032_ = lean_ctor_get(v_decl_2985_, 2);
lean_inc(v_fvarId_3031_);
v___x_3033_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3031_, v_a_2986_);
lean_dec_ref(v___x_3033_);
lean_inc(v_y_3032_);
v___x_3034_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_y_3032_, v_a_2986_);
v___y_2994_ = v___x_3034_;
goto v___jp_2993_;
}
case 5:
{
lean_object* v_fvarId_3035_; lean_object* v_y_3036_; lean_object* v_ty_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v_fvarId_3035_ = lean_ctor_get(v_decl_2985_, 0);
v_y_3036_ = lean_ctor_get(v_decl_2985_, 3);
v_ty_3037_ = lean_ctor_get(v_decl_2985_, 4);
lean_inc(v_fvarId_3035_);
v___x_3038_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3035_, v_a_2986_);
lean_dec_ref(v___x_3038_);
lean_inc(v_y_3036_);
v___x_3039_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_y_3036_, v_a_2986_);
lean_dec_ref(v___x_3039_);
lean_inc_ref(v_ty_3037_);
v___x_3040_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v___x_3020_, v_ty_3037_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_);
v___y_2994_ = v___x_3040_;
goto v___jp_2993_;
}
default: 
{
lean_object* v_fvarId_3041_; lean_object* v___x_3042_; 
v_fvarId_3041_ = lean_ctor_get(v_decl_2985_, 0);
lean_inc(v_fvarId_3041_);
v___x_3042_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_dontFloat_goFVar___redArg(v_fvarId_3041_, v_a_2986_);
v___y_2994_ = v___x_3042_;
goto v___jp_2993_;
}
}
v___jp_2993_:
{
if (lean_obj_tag(v___y_2994_) == 0)
{
lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3017_; 
v_isSharedCheck_3017_ = !lean_is_exclusive(v___y_2994_);
if (v_isSharedCheck_3017_ == 0)
{
lean_object* v_unused_3018_; 
v_unused_3018_ = lean_ctor_get(v___y_2994_, 0);
lean_dec(v_unused_3018_);
v___x_2996_ = v___y_2994_;
v_isShared_2997_ = v_isSharedCheck_3017_;
goto v_resetjp_2995_;
}
else
{
lean_dec(v___y_2994_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3017_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2998_; lean_object* v_decision_2999_; lean_object* v_newArms_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3016_; 
v___x_2998_ = lean_st_ref_take(v_a_2986_);
v_decision_2999_ = lean_ctor_get(v___x_2998_, 0);
v_newArms_3000_ = lean_ctor_get(v___x_2998_, 1);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3002_ = v___x_2998_;
v_isShared_3003_ = v_isSharedCheck_3016_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_newArms_3000_);
lean_inc(v_decision_2999_);
lean_dec(v___x_2998_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3016_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3010_; 
v___x_3004_ = lean_box(0);
v___x_3005_ = lean_box(2);
v___x_3006_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_newArms_3000_, v___x_3005_);
v___x_3007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3007_, 0, v_decl_2985_);
lean_ctor_set(v___x_3007_, 1, v___x_3006_);
v___x_3008_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_newArms_3000_, v___x_3005_, v___x_3007_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 1, v___x_3008_);
v___x_3010_ = v___x_3002_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_decision_2999_);
lean_ctor_set(v_reuseFailAlloc_3015_, 1, v___x_3008_);
v___x_3010_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
lean_object* v___x_3011_; lean_object* v___x_3013_; 
v___x_3011_ = lean_st_ref_put(v_a_2986_, v___x_3010_);
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 0, v___x_3004_);
v___x_3013_ = v___x_2996_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v___x_3004_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
}
else
{
lean_dec_ref(v_decl_2985_);
return v___y_2994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_dontFloat___boxed(lean_object* v_decl_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(v_decl_3043_, v_a_3044_, v_a_3045_, v_a_3046_, v_a_3047_, v_a_3048_, v_a_3049_);
lean_dec(v_a_3049_);
lean_dec_ref(v_a_3048_);
lean_dec(v_a_3047_);
lean_dec_ref(v_a_3046_);
lean_dec(v_a_3045_);
lean_dec(v_a_3044_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3(uint8_t v_pu_3052_, lean_object* v_f_3053_, lean_object* v_arg_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v_f_3053_, v_arg_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___boxed(lean_object* v_pu_3063_, lean_object* v_f_3064_, lean_object* v_arg_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
uint8_t v_pu_boxed_3073_; lean_object* v_res_3074_; 
v_pu_boxed_3073_ = lean_unbox(v_pu_3063_);
v_res_3074_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3(v_pu_boxed_3073_, v_f_3064_, v_arg_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
lean_dec(v___y_3071_);
lean_dec_ref(v___y_3070_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec(v___y_3066_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4(uint8_t v_pu_3075_, lean_object* v_f_3076_, lean_object* v_param_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v___x_3085_; 
v___x_3085_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___redArg(v_f_3076_, v_param_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4___boxed(lean_object* v_pu_3086_, lean_object* v_f_3087_, lean_object* v_param_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_){
_start:
{
uint8_t v_pu_boxed_3096_; lean_object* v_res_3097_; 
v_pu_boxed_3096_ = lean_unbox(v_pu_3086_);
v_res_3097_ = l_Lean_Compiler_LCNF_Param_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__4(v_pu_boxed_3096_, v_f_3087_, v_param_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec(v___y_3089_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8(uint8_t v_pu_3098_, lean_object* v_alt_3099_, lean_object* v_f_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_){
_start:
{
lean_object* v___x_3108_; 
v___x_3108_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___redArg(v_alt_3099_, v_f_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8___boxed(lean_object* v_pu_3109_, lean_object* v_alt_3110_, lean_object* v_f_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_){
_start:
{
uint8_t v_pu_boxed_3119_; lean_object* v_res_3120_; 
v_pu_boxed_3119_ = lean_unbox(v_pu_3109_);
v_res_3120_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00Lean_Compiler_LCNF_Code_forFVarM___at___00Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2_spec__5_spec__8(v_pu_boxed_3119_, v_alt_3110_, v_f_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec(v___y_3112_);
return v_res_3120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(lean_object* v_fvar_3121_, lean_object* v_arm_3122_, lean_object* v_a_3123_){
_start:
{
lean_object* v___x_3125_; lean_object* v_decision_3126_; lean_object* v___x_3127_; 
v___x_3125_ = lean_st_ref_get(v_a_3123_);
v_decision_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc_ref(v_decision_3126_);
lean_dec(v___x_3125_);
v___x_3127_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__0___redArg(v_decision_3126_, v_fvar_3121_);
lean_dec_ref(v_decision_3126_);
if (lean_obj_tag(v___x_3127_) == 1)
{
lean_object* v_val_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3172_; 
v_val_3128_ = lean_ctor_get(v___x_3127_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3130_ = v___x_3127_;
v_isShared_3131_ = v_isSharedCheck_3172_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_val_3128_);
lean_dec(v___x_3127_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3172_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3132_; uint8_t v___x_3133_; 
v___x_3132_ = lean_box(3);
v___x_3133_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_val_3128_, v___x_3132_);
if (v___x_3133_ == 0)
{
uint8_t v___x_3134_; 
v___x_3134_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v_val_3128_, v_arm_3122_);
lean_dec(v_arm_3122_);
lean_dec(v_val_3128_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; lean_object* v_decision_3136_; lean_object* v_newArms_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3151_; 
v___x_3135_ = lean_st_ref_take(v_a_3123_);
v_decision_3136_ = lean_ctor_get(v___x_3135_, 0);
v_newArms_3137_ = lean_ctor_get(v___x_3135_, 1);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3139_ = v___x_3135_;
v_isShared_3140_ = v_isSharedCheck_3151_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_newArms_3137_);
lean_inc(v_decision_3136_);
lean_dec(v___x_3135_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3151_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3145_; 
v___x_3141_ = lean_box(0);
v___x_3142_ = lean_box(2);
v___x_3143_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_decision_3136_, v_fvar_3121_, v___x_3142_);
if (v_isShared_3140_ == 0)
{
lean_ctor_set(v___x_3139_, 0, v___x_3143_);
v___x_3145_ = v___x_3139_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3143_);
lean_ctor_set(v_reuseFailAlloc_3150_, 1, v_newArms_3137_);
v___x_3145_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
lean_object* v___x_3146_; lean_object* v___x_3148_; 
v___x_3146_ = lean_st_ref_put(v_a_3123_, v___x_3145_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3141_);
v___x_3148_ = v___x_3130_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v___x_3141_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
}
else
{
lean_object* v___x_3152_; lean_object* v___x_3154_; 
lean_dec(v_fvar_3121_);
v___x_3152_ = lean_box(0);
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3152_);
v___x_3154_ = v___x_3130_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
else
{
lean_object* v___x_3156_; lean_object* v_decision_3157_; lean_object* v_newArms_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3171_; 
lean_dec(v_val_3128_);
v___x_3156_ = lean_st_ref_take(v_a_3123_);
v_decision_3157_ = lean_ctor_get(v___x_3156_, 0);
v_newArms_3158_ = lean_ctor_get(v___x_3156_, 1);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3160_ = v___x_3156_;
v_isShared_3161_ = v_isSharedCheck_3171_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_newArms_3158_);
lean_inc(v_decision_3157_);
lean_dec(v___x_3156_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3171_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3165_; 
v___x_3162_ = lean_box(0);
v___x_3163_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_initialDecisions_goFVar_spec__1___redArg(v_decision_3157_, v_fvar_3121_, v_arm_3122_);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 0, v___x_3163_);
v___x_3165_ = v___x_3160_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v___x_3163_);
lean_ctor_set(v_reuseFailAlloc_3170_, 1, v_newArms_3158_);
v___x_3165_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
lean_object* v___x_3166_; lean_object* v___x_3168_; 
v___x_3166_ = lean_st_ref_put(v_a_3123_, v___x_3165_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3162_);
v___x_3168_ = v___x_3130_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3162_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
}
else
{
lean_object* v___x_3173_; lean_object* v___x_3174_; 
lean_dec(v___x_3127_);
lean_dec(v_arm_3122_);
lean_dec(v_fvar_3121_);
v___x_3173_ = lean_box(0);
v___x_3174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
return v___x_3174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg___boxed(lean_object* v_fvar_3175_, lean_object* v_arm_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvar_3175_, v_arm_3176_, v_a_3177_);
lean_dec(v_a_3177_);
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar(lean_object* v_fvar_3180_, lean_object* v_arm_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_){
_start:
{
lean_object* v___x_3189_; 
v___x_3189_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvar_3180_, v_arm_3181_, v_a_3182_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___boxed(lean_object* v_fvar_3190_, lean_object* v_arm_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar(v_fvar_3190_, v_arm_3191_, v_a_3192_, v_a_3193_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_);
lean_dec(v_a_3197_);
lean_dec_ref(v_a_3196_);
lean_dec(v_a_3195_);
lean_dec_ref(v_a_3194_);
lean_dec(v_a_3193_);
lean_dec(v_a_3192_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0(lean_object* v___x_3200_, lean_object* v_x_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_){
_start:
{
lean_object* v___x_3209_; 
v___x_3209_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_x_3201_, v___x_3200_, v___y_3202_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0___boxed(lean_object* v___x_3210_, lean_object* v_x_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0(v___x_3210_, v_x_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec(v___y_3212_);
return v_res_3219_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0_spec__1(lean_object* v_msg_3220_){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_instInhabitedDecision_default));
v___x_3222_ = lean_panic_fn_borrowed(v___x_3221_, v_msg_3220_);
return v___x_3222_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(lean_object* v_a_3223_, lean_object* v_x_3224_){
_start:
{
if (lean_obj_tag(v_x_3224_) == 0)
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0_spec__0___closed__3);
v___x_3226_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0_spec__1(v___x_3225_);
return v___x_3226_;
}
else
{
lean_object* v_key_3227_; lean_object* v_value_3228_; lean_object* v_tail_3229_; uint8_t v___x_3230_; 
v_key_3227_ = lean_ctor_get(v_x_3224_, 0);
v_value_3228_ = lean_ctor_get(v_x_3224_, 1);
v_tail_3229_ = lean_ctor_get(v_x_3224_, 2);
v___x_3230_ = l_Lean_instBEqFVarId_beq(v_key_3227_, v_a_3223_);
if (v___x_3230_ == 0)
{
v_x_3224_ = v_tail_3229_;
goto _start;
}
else
{
lean_inc(v_value_3228_);
return v_value_3228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0___boxed(lean_object* v_a_3232_, lean_object* v_x_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(v_a_3232_, v_x_3233_);
lean_dec(v_x_3233_);
lean_dec(v_a_3232_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(lean_object* v_m_3235_, lean_object* v_a_3236_){
_start:
{
lean_object* v_buckets_3237_; lean_object* v___x_3238_; uint64_t v___x_3239_; uint64_t v___x_3240_; uint64_t v___x_3241_; uint64_t v_fold_3242_; uint64_t v___x_3243_; uint64_t v___x_3244_; uint64_t v___x_3245_; size_t v___x_3246_; size_t v___x_3247_; size_t v___x_3248_; size_t v___x_3249_; size_t v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v_buckets_3237_ = lean_ctor_get(v_m_3235_, 1);
v___x_3238_ = lean_array_get_size(v_buckets_3237_);
v___x_3239_ = l_Lean_instHashableFVarId_hash(v_a_3236_);
v___x_3240_ = 32ULL;
v___x_3241_ = lean_uint64_shift_right(v___x_3239_, v___x_3240_);
v_fold_3242_ = lean_uint64_xor(v___x_3239_, v___x_3241_);
v___x_3243_ = 16ULL;
v___x_3244_ = lean_uint64_shift_right(v_fold_3242_, v___x_3243_);
v___x_3245_ = lean_uint64_xor(v_fold_3242_, v___x_3244_);
v___x_3246_ = lean_uint64_to_usize(v___x_3245_);
v___x_3247_ = lean_usize_of_nat(v___x_3238_);
v___x_3248_ = ((size_t)1ULL);
v___x_3249_ = lean_usize_sub(v___x_3247_, v___x_3248_);
v___x_3250_ = lean_usize_land(v___x_3246_, v___x_3249_);
v___x_3251_ = lean_array_uget_borrowed(v_buckets_3237_, v___x_3250_);
v___x_3252_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0_spec__0(v_a_3236_, v___x_3251_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0___boxed(lean_object* v_m_3253_, lean_object* v_a_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(v_m_3253_, v_a_3254_);
lean_dec(v_a_3254_);
lean_dec_ref(v_m_3253_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float(lean_object* v_decl_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_){
_start:
{
lean_object* v___x_3264_; lean_object* v_decision_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3322_; 
v___x_3264_ = lean_st_ref_get(v_a_3257_);
v_decision_3265_ = lean_ctor_get(v___x_3264_, 0);
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3264_);
if (v_isSharedCheck_3322_ == 0)
{
lean_object* v_unused_3323_; 
v_unused_3323_ = lean_ctor_get(v___x_3264_, 1);
lean_dec(v_unused_3323_);
v___x_3267_ = v___x_3264_;
v_isShared_3268_ = v_isSharedCheck_3322_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_decision_3265_);
lean_dec(v___x_3264_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3322_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
uint8_t v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___y_3273_; lean_object* v___f_3299_; 
v___x_3269_ = 0;
v___x_3270_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_decl_3256_);
v___x_3271_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(v_decision_3265_, v___x_3270_);
lean_dec(v___x_3270_);
lean_dec_ref(v_decision_3265_);
lean_inc(v___x_3271_);
v___f_3299_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FloatLetIn_float___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3299_, 0, v___x_3271_);
switch(lean_obj_tag(v_decl_3256_))
{
case 0:
{
lean_object* v_decl_3300_; lean_object* v___x_3301_; 
v_decl_3300_ = lean_ctor_get(v_decl_3256_, 0);
lean_inc_ref(v_decl_3300_);
v___x_3301_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__1(v___x_3269_, v___f_3299_, v_decl_3300_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_);
v___y_3273_ = v___x_3301_;
goto v___jp_3272_;
}
case 1:
{
lean_object* v_decl_3302_; lean_object* v___x_3303_; 
v_decl_3302_ = lean_ctor_get(v_decl_3256_, 0);
lean_inc_ref(v_decl_3302_);
v___x_3303_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3269_, v___f_3299_, v_decl_3302_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_);
v___y_3273_ = v___x_3303_;
goto v___jp_3272_;
}
case 2:
{
lean_object* v_decl_3304_; lean_object* v___x_3305_; 
v_decl_3304_ = lean_ctor_get(v_decl_3256_, 0);
lean_inc_ref(v_decl_3304_);
v___x_3305_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__2(v___x_3269_, v___f_3299_, v_decl_3304_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_);
v___y_3273_ = v___x_3305_;
goto v___jp_3272_;
}
case 3:
{
lean_object* v_fvarId_3306_; lean_object* v_y_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
v_fvarId_3306_ = lean_ctor_get(v_decl_3256_, 0);
v_y_3307_ = lean_ctor_get(v_decl_3256_, 2);
lean_inc(v___x_3271_);
lean_inc(v_fvarId_3306_);
v___x_3308_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3306_, v___x_3271_, v_a_3257_);
lean_dec_ref(v___x_3308_);
lean_inc(v_y_3307_);
v___x_3309_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__3___redArg(v___f_3299_, v_y_3307_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_);
v___y_3273_ = v___x_3309_;
goto v___jp_3272_;
}
case 4:
{
lean_object* v_fvarId_3310_; lean_object* v_y_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
lean_dec_ref(v___f_3299_);
v_fvarId_3310_ = lean_ctor_get(v_decl_3256_, 0);
v_y_3311_ = lean_ctor_get(v_decl_3256_, 2);
lean_inc_n(v___x_3271_, 2);
lean_inc(v_fvarId_3310_);
v___x_3312_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3310_, v___x_3271_, v_a_3257_);
lean_dec_ref(v___x_3312_);
lean_inc(v_y_3311_);
v___x_3313_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_y_3311_, v___x_3271_, v_a_3257_);
v___y_3273_ = v___x_3313_;
goto v___jp_3272_;
}
case 5:
{
lean_object* v_fvarId_3314_; lean_object* v_y_3315_; lean_object* v_ty_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v_fvarId_3314_ = lean_ctor_get(v_decl_3256_, 0);
v_y_3315_ = lean_ctor_get(v_decl_3256_, 3);
v_ty_3316_ = lean_ctor_get(v_decl_3256_, 4);
lean_inc_n(v___x_3271_, 2);
lean_inc(v_fvarId_3314_);
v___x_3317_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3314_, v___x_3271_, v_a_3257_);
lean_dec_ref(v___x_3317_);
lean_inc(v_y_3315_);
v___x_3318_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_y_3315_, v___x_3271_, v_a_3257_);
lean_dec_ref(v___x_3318_);
lean_inc_ref(v_ty_3316_);
v___x_3319_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__4(v___f_3299_, v_ty_3316_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_);
v___y_3273_ = v___x_3319_;
goto v___jp_3272_;
}
default: 
{
lean_object* v_fvarId_3320_; lean_object* v___x_3321_; 
lean_dec_ref(v___f_3299_);
v_fvarId_3320_ = lean_ctor_get(v_decl_3256_, 0);
lean_inc(v___x_3271_);
lean_inc(v_fvarId_3320_);
v___x_3321_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_float_goFVar___redArg(v_fvarId_3320_, v___x_3271_, v_a_3257_);
v___y_3273_ = v___x_3321_;
goto v___jp_3272_;
}
}
v___jp_3272_:
{
if (lean_obj_tag(v___y_3273_) == 0)
{
lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3297_; 
v_isSharedCheck_3297_ = !lean_is_exclusive(v___y_3273_);
if (v_isSharedCheck_3297_ == 0)
{
lean_object* v_unused_3298_; 
v_unused_3298_ = lean_ctor_get(v___y_3273_, 0);
lean_dec(v_unused_3298_);
v___x_3275_ = v___y_3273_;
v_isShared_3276_ = v_isSharedCheck_3297_;
goto v_resetjp_3274_;
}
else
{
lean_dec(v___y_3273_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3297_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3277_; lean_object* v_decision_3278_; lean_object* v_newArms_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3296_; 
v___x_3277_ = lean_st_ref_take(v_a_3257_);
v_decision_3278_ = lean_ctor_get(v___x_3277_, 0);
v_newArms_3279_ = lean_ctor_get(v___x_3277_, 1);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3277_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3281_ = v___x_3277_;
v_isShared_3282_ = v_isSharedCheck_3296_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_newArms_3279_);
lean_inc(v_decision_3278_);
lean_dec(v___x_3277_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3296_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3286_; 
v___x_3283_ = lean_box(0);
v___x_3284_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_newArms_3279_, v___x_3271_);
if (v_isShared_3268_ == 0)
{
lean_ctor_set_tag(v___x_3267_, 1);
lean_ctor_set(v___x_3267_, 1, v___x_3284_);
lean_ctor_set(v___x_3267_, 0, v_decl_3256_);
v___x_3286_ = v___x_3267_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_decl_3256_);
lean_ctor_set(v_reuseFailAlloc_3295_, 1, v___x_3284_);
v___x_3286_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
lean_object* v___x_3287_; lean_object* v___x_3289_; 
v___x_3287_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_FloatLetIn_initialNewArms_spec__0___redArg(v_newArms_3279_, v___x_3271_, v___x_3286_);
if (v_isShared_3282_ == 0)
{
lean_ctor_set(v___x_3281_, 1, v___x_3287_);
v___x_3289_ = v___x_3281_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_decision_3278_);
lean_ctor_set(v_reuseFailAlloc_3294_, 1, v___x_3287_);
v___x_3289_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3290_; lean_object* v___x_3292_; 
v___x_3290_ = lean_st_ref_put(v_a_3257_, v___x_3289_);
if (v_isShared_3276_ == 0)
{
lean_ctor_set(v___x_3275_, 0, v___x_3283_);
v___x_3292_ = v___x_3275_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3283_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
}
}
else
{
lean_dec(v___x_3271_);
lean_del_object(v___x_3267_);
lean_dec_ref(v_decl_3256_);
return v___y_3273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_float___boxed(lean_object* v_decl_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_){
_start:
{
lean_object* v_res_3332_; 
v_res_3332_ = l_Lean_Compiler_LCNF_FloatLetIn_float(v_decl_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_, v_a_3330_);
lean_dec(v_a_3330_);
lean_dec_ref(v_a_3329_);
lean_dec(v_a_3328_);
lean_dec_ref(v_a_3327_);
lean_dec(v_a_3326_);
lean_dec(v_a_3325_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(lean_object* v_as_x27_3333_, lean_object* v_b_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
if (lean_obj_tag(v_as_x27_3333_) == 0)
{
lean_object* v___x_3342_; 
v___x_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3342_, 0, v_b_3334_);
return v___x_3342_;
}
else
{
lean_object* v_head_3343_; lean_object* v_tail_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v_decision_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; uint8_t v___x_3351_; 
v_head_3343_ = lean_ctor_get(v_as_x27_3333_, 0);
v_tail_3344_ = lean_ctor_get(v_as_x27_3333_, 1);
v___x_3345_ = lean_box(0);
v___x_3346_ = lean_st_ref_get(v___y_3335_);
v_decision_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc_ref(v_decision_3347_);
lean_dec(v___x_3346_);
v___x_3348_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_head_3343_);
v___x_3349_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_float_spec__0(v_decision_3347_, v___x_3348_);
lean_dec(v___x_3348_);
lean_dec_ref(v_decision_3347_);
v___x_3350_ = lean_box(3);
v___x_3351_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v___x_3349_, v___x_3350_);
if (v___x_3351_ == 0)
{
lean_object* v___x_3352_; uint8_t v___x_3353_; 
v___x_3352_ = lean_box(2);
v___x_3353_ = l_Lean_Compiler_LCNF_FloatLetIn_instBEqDecision_beq(v___x_3349_, v___x_3352_);
lean_dec(v___x_3349_);
if (v___x_3353_ == 0)
{
lean_object* v___x_3354_; 
lean_inc(v_head_3343_);
v___x_3354_ = l_Lean_Compiler_LCNF_FloatLetIn_float(v_head_3343_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_dec_ref_known(v___x_3354_, 1);
v_as_x27_3333_ = v_tail_3344_;
v_b_3334_ = v___x_3345_;
goto _start;
}
else
{
return v___x_3354_;
}
}
else
{
lean_object* v___x_3356_; 
lean_inc(v_head_3343_);
v___x_3356_ = l_Lean_Compiler_LCNF_FloatLetIn_dontFloat(v_head_3343_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_dec_ref_known(v___x_3356_, 1);
v_as_x27_3333_ = v_tail_3344_;
v_b_3334_ = v___x_3345_;
goto _start;
}
else
{
return v___x_3356_;
}
}
}
else
{
uint8_t v___x_3358_; lean_object* v___x_3359_; 
lean_dec(v___x_3349_);
v___x_3358_ = 0;
v___x_3359_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v___x_3358_, v_head_3343_, v___y_3338_);
if (lean_obj_tag(v___x_3359_) == 0)
{
lean_dec_ref_known(v___x_3359_, 1);
v_as_x27_3333_ = v_tail_3344_;
v_b_3334_ = v___x_3345_;
goto _start;
}
else
{
return v___x_3359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg___boxed(lean_object* v_as_x27_3361_, lean_object* v_b_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v_res_3370_; 
v_res_3370_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(v_as_x27_3361_, v_b_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
lean_dec(v___y_3368_);
lean_dec_ref(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec(v_as_x27_3361_);
return v_res_3370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = lean_box(0);
v___x_3379_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(v_a_3372_, v___x_3378_, v_a_3371_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3386_ == 0)
{
lean_object* v_unused_3387_; 
v_unused_3387_ = lean_ctor_get(v___x_3379_, 0);
lean_dec(v_unused_3387_);
v___x_3381_ = v___x_3379_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_dec(v___x_3379_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
lean_ctor_set(v___x_3381_, 0, v___x_3378_);
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v___x_3378_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
else
{
return v___x_3379_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases___boxed(lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_);
lean_dec(v_a_3393_);
lean_dec_ref(v_a_3392_);
lean_dec(v_a_3391_);
lean_dec_ref(v_a_3390_);
lean_dec(v_a_3389_);
lean_dec(v_a_3388_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0(lean_object* v_as_3396_, lean_object* v_as_x27_3397_, lean_object* v_b_3398_, lean_object* v_a_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v___x_3407_; 
v___x_3407_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___redArg(v_as_x27_3397_, v_b_3398_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_);
return v___x_3407_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0___boxed(lean_object* v_as_3408_, lean_object* v_as_x27_3409_, lean_object* v_b_3410_, lean_object* v_a_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases_spec__0(v_as_3408_, v_as_x27_3409_, v_b_3410_, v_a_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec(v___y_3413_);
lean_dec(v___y_3412_);
lean_dec(v_as_x27_3409_);
lean_dec(v_as_3408_);
return v_res_3419_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3420_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3421_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__0);
v___x_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3421_);
return v___x_3422_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3423_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__1);
v___x_3424_ = lean_unsigned_to_nat(0u);
v___x_3425_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
lean_ctor_set(v___x_3425_, 1, v___x_3424_);
lean_ctor_set(v___x_3425_, 2, v___x_3424_);
lean_ctor_set(v___x_3425_, 3, v___x_3424_);
lean_ctor_set(v___x_3425_, 4, v___x_3423_);
lean_ctor_set(v___x_3425_, 5, v___x_3423_);
lean_ctor_set(v___x_3425_, 6, v___x_3423_);
lean_ctor_set(v___x_3425_, 7, v___x_3423_);
lean_ctor_set(v___x_3425_, 8, v___x_3423_);
lean_ctor_set(v___x_3425_, 9, v___x_3423_);
lean_ctor_set(v___x_3425_, 10, v___x_3423_);
return v___x_3425_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_3426_; double v___x_3427_; 
v___x_3426_ = lean_unsigned_to_nat(0u);
v___x_3427_ = lean_float_of_nat(v___x_3426_);
return v___x_3427_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(lean_object* v_cls_3431_, lean_object* v_msg_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v_ref_3438_; lean_object* v___x_3439_; lean_object* v_env_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v_ref_3438_ = lean_ctor_get(v___y_3435_, 2);
v___x_3439_ = lean_st_ref_get(v___y_3436_);
v_env_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc_ref(v_env_3440_);
lean_dec(v___x_3439_);
v___x_3441_ = lean_st_ref_get(v___y_3434_);
v___x_3442_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_3433_);
if (lean_obj_tag(v___x_3442_) == 0)
{
lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3502_; 
v_a_3443_ = lean_ctor_get(v___x_3442_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3442_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3445_ = v___x_3442_;
v_isShared_3446_ = v_isSharedCheck_3502_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3442_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3502_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v_lctx_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3500_; 
v_lctx_3447_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3500_ == 0)
{
lean_object* v_unused_3501_; 
v_unused_3501_ = lean_ctor_get(v___x_3441_, 1);
lean_dec(v_unused_3501_);
v___x_3449_ = v___x_3441_;
v_isShared_3450_ = v_isSharedCheck_3500_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_lctx_3447_);
lean_dec(v___x_3441_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3500_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
uint8_t v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3457_; 
v___x_3451_ = lean_unbox(v_a_3443_);
lean_dec(v_a_3443_);
v___x_3452_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_3447_, v___x_3451_);
lean_dec_ref(v_lctx_3447_);
v___x_3453_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3435_);
v___x_3454_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__2);
v___x_3455_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3455_, 0, v_env_3440_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
lean_ctor_set(v___x_3455_, 2, v___x_3452_);
lean_ctor_set(v___x_3455_, 3, v___x_3453_);
if (v_isShared_3450_ == 0)
{
lean_ctor_set_tag(v___x_3449_, 3);
lean_ctor_set(v___x_3449_, 1, v_msg_3432_);
lean_ctor_set(v___x_3449_, 0, v___x_3455_);
v___x_3457_ = v___x_3449_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v___x_3455_);
lean_ctor_set(v_reuseFailAlloc_3499_, 1, v_msg_3432_);
v___x_3457_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
lean_object* v___x_3458_; lean_object* v_traceState_3459_; lean_object* v_env_3460_; lean_object* v_nextMacroScope_3461_; lean_object* v_ngen_3462_; lean_object* v_auxDeclNGen_3463_; lean_object* v_cache_3464_; lean_object* v_recordedDeps_3465_; lean_object* v_messages_3466_; lean_object* v_infoState_3467_; lean_object* v_snapshotTasks_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3498_; 
v___x_3458_ = lean_st_ref_take(v___y_3436_);
v_traceState_3459_ = lean_ctor_get(v___x_3458_, 4);
v_env_3460_ = lean_ctor_get(v___x_3458_, 0);
v_nextMacroScope_3461_ = lean_ctor_get(v___x_3458_, 1);
v_ngen_3462_ = lean_ctor_get(v___x_3458_, 2);
v_auxDeclNGen_3463_ = lean_ctor_get(v___x_3458_, 3);
v_cache_3464_ = lean_ctor_get(v___x_3458_, 5);
v_recordedDeps_3465_ = lean_ctor_get(v___x_3458_, 6);
v_messages_3466_ = lean_ctor_get(v___x_3458_, 7);
v_infoState_3467_ = lean_ctor_get(v___x_3458_, 8);
v_snapshotTasks_3468_ = lean_ctor_get(v___x_3458_, 9);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3470_ = v___x_3458_;
v_isShared_3471_ = v_isSharedCheck_3498_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_snapshotTasks_3468_);
lean_inc(v_infoState_3467_);
lean_inc(v_messages_3466_);
lean_inc(v_recordedDeps_3465_);
lean_inc(v_cache_3464_);
lean_inc(v_traceState_3459_);
lean_inc(v_auxDeclNGen_3463_);
lean_inc(v_ngen_3462_);
lean_inc(v_nextMacroScope_3461_);
lean_inc(v_env_3460_);
lean_dec(v___x_3458_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3498_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
uint64_t v_tid_3472_; lean_object* v_traces_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3497_; 
v_tid_3472_ = lean_ctor_get_uint64(v_traceState_3459_, sizeof(void*)*1);
v_traces_3473_ = lean_ctor_get(v_traceState_3459_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v_traceState_3459_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3475_ = v_traceState_3459_;
v_isShared_3476_ = v_isSharedCheck_3497_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_traces_3473_);
lean_dec(v_traceState_3459_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3497_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3477_; lean_object* v___x_3478_; double v___x_3479_; uint8_t v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v___x_3477_ = lean_box(0);
v___x_3478_ = lean_box(0);
v___x_3479_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__3);
v___x_3480_ = 0;
v___x_3481_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__4));
v___x_3482_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3482_, 0, v_cls_3431_);
lean_ctor_set(v___x_3482_, 1, v___x_3478_);
lean_ctor_set(v___x_3482_, 2, v___x_3481_);
lean_ctor_set_float(v___x_3482_, sizeof(void*)*3, v___x_3479_);
lean_ctor_set_float(v___x_3482_, sizeof(void*)*3 + 8, v___x_3479_);
lean_ctor_set_uint8(v___x_3482_, sizeof(void*)*3 + 16, v___x_3480_);
v___x_3483_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___closed__5));
v___x_3484_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3482_);
lean_ctor_set(v___x_3484_, 1, v___x_3457_);
lean_ctor_set(v___x_3484_, 2, v___x_3483_);
lean_inc(v_ref_3438_);
v___x_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3485_, 0, v_ref_3438_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
v___x_3486_ = l_Lean_PersistentArray_push___redArg(v_traces_3473_, v___x_3485_);
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v___x_3486_);
v___x_3488_ = v___x_3475_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v___x_3486_);
lean_ctor_set_uint64(v_reuseFailAlloc_3496_, sizeof(void*)*1, v_tid_3472_);
v___x_3488_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3490_; 
if (v_isShared_3471_ == 0)
{
lean_ctor_set(v___x_3470_, 4, v___x_3488_);
v___x_3490_ = v___x_3470_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_env_3460_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_nextMacroScope_3461_);
lean_ctor_set(v_reuseFailAlloc_3495_, 2, v_ngen_3462_);
lean_ctor_set(v_reuseFailAlloc_3495_, 3, v_auxDeclNGen_3463_);
lean_ctor_set(v_reuseFailAlloc_3495_, 4, v___x_3488_);
lean_ctor_set(v_reuseFailAlloc_3495_, 5, v_cache_3464_);
lean_ctor_set(v_reuseFailAlloc_3495_, 6, v_recordedDeps_3465_);
lean_ctor_set(v_reuseFailAlloc_3495_, 7, v_messages_3466_);
lean_ctor_set(v_reuseFailAlloc_3495_, 8, v_infoState_3467_);
lean_ctor_set(v_reuseFailAlloc_3495_, 9, v_snapshotTasks_3468_);
v___x_3490_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3491_; lean_object* v___x_3493_; 
v___x_3491_ = lean_st_ref_put(v___y_3436_, v___x_3490_);
if (v_isShared_3446_ == 0)
{
lean_ctor_set(v___x_3445_, 0, v___x_3477_);
v___x_3493_ = v___x_3445_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3477_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
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
lean_object* v_a_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3510_; 
lean_dec(v___x_3441_);
lean_dec_ref(v_env_3440_);
lean_dec_ref(v_msg_3432_);
lean_dec(v_cls_3431_);
v_a_3503_ = lean_ctor_get(v___x_3442_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3442_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3505_ = v___x_3442_;
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_a_3503_);
lean_dec(v___x_3442_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_a_3503_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg___boxed(lean_object* v_cls_3511_, lean_object* v_msg_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(v_cls_3511_, v_msg_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0(lean_object* v_cls_3519_, lean_object* v_msg_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v___x_3527_; 
v___x_3527_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(v_cls_3519_, v_msg_3520_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___boxed(lean_object* v_cls_3528_, lean_object* v_msg_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_){
_start:
{
lean_object* v_res_3536_; 
v_res_3536_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0(v_cls_3528_, v_msg_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
lean_dec(v___y_3530_);
return v_res_3536_;
}
}
static lean_object* _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3545_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2));
v___x_3546_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__4));
v___x_3547_ = l_Lean_Name_append(v___x_3546_, v___x_3545_);
return v___x_3547_;
}
}
static lean_object* _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7(void){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__6));
v___x_3550_ = l_Lean_stringToMessageData(v___x_3549_);
return v___x_3550_;
}
}
static lean_object* _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9(void){
_start:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3552_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__8));
v___x_3553_ = l_Lean_stringToMessageData(v___x_3552_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go(lean_object* v_code_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_){
_start:
{
switch(lean_obj_tag(v_code_3554_))
{
case 0:
{
lean_object* v_decl_3561_; lean_object* v_k_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
v_decl_3561_ = lean_ctor_get(v_code_3554_, 0);
lean_inc_ref(v_decl_3561_);
v_k_3562_ = lean_ctor_get(v_code_3554_, 1);
lean_inc_ref(v_k_3562_);
lean_dec_ref_known(v_code_3554_, 2);
v___x_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3563_, 0, v_decl_3561_);
v___x_3564_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3564_, 0, v_k_3562_);
v___x_3565_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v___x_3563_, v___x_3564_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
return v___x_3565_;
}
case 1:
{
lean_object* v_decl_3566_; lean_object* v_k_3567_; lean_object* v_params_3568_; lean_object* v_type_3569_; lean_object* v_value_3570_; uint8_t v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v_decl_3566_ = lean_ctor_get(v_code_3554_, 0);
lean_inc_ref(v_decl_3566_);
v_k_3567_ = lean_ctor_get(v_code_3554_, 1);
lean_inc_ref(v_k_3567_);
lean_dec_ref_known(v_code_3554_, 2);
v_params_3568_ = lean_ctor_get(v_decl_3566_, 2);
lean_inc_ref(v_params_3568_);
v_type_3569_ = lean_ctor_get(v_decl_3566_, 3);
lean_inc_ref(v_type_3569_);
v_value_3570_ = lean_ctor_get(v_decl_3566_, 4);
v___x_3571_ = 0;
lean_inc_ref(v_value_3570_);
v___x_3572_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3572_, 0, v_value_3570_);
v___x_3573_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v___x_3572_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3593_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3576_ = v___x_3573_;
v_isShared_3577_ = v_isSharedCheck_3593_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v___x_3573_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3593_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; 
v___x_3578_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3571_, v_decl_3566_, v_type_3569_, v_params_3568_, v_a_3574_, v_a_3557_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3581_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref_known(v___x_3578_, 1);
if (v_isShared_3577_ == 0)
{
lean_ctor_set_tag(v___x_3576_, 1);
lean_ctor_set(v___x_3576_, 0, v_a_3579_);
v___x_3581_ = v___x_3576_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3579_);
v___x_3581_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3582_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3582_, 0, v_k_3567_);
v___x_3583_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v___x_3581_, v___x_3582_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
return v___x_3583_;
}
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
lean_del_object(v___x_3576_);
lean_dec_ref(v_k_3567_);
v_a_3585_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3587_ = v___x_3578_;
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3578_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3590_; 
if (v_isShared_3588_ == 0)
{
v___x_3590_ = v___x_3587_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_a_3585_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_3569_);
lean_dec_ref(v_params_3568_);
lean_dec_ref(v_k_3567_);
lean_dec_ref(v_decl_3566_);
return v___x_3573_;
}
}
case 2:
{
lean_object* v_decl_3594_; lean_object* v_k_3595_; lean_object* v_params_3596_; lean_object* v_type_3597_; lean_object* v_value_3598_; uint8_t v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v_decl_3594_ = lean_ctor_get(v_code_3554_, 0);
lean_inc_ref(v_decl_3594_);
v_k_3595_ = lean_ctor_get(v_code_3554_, 1);
lean_inc_ref(v_k_3595_);
lean_dec_ref_known(v_code_3554_, 2);
v_params_3596_ = lean_ctor_get(v_decl_3594_, 2);
lean_inc_ref(v_params_3596_);
v_type_3597_ = lean_ctor_get(v_decl_3594_, 3);
lean_inc_ref(v_type_3597_);
v_value_3598_ = lean_ctor_get(v_decl_3594_, 4);
v___x_3599_ = 0;
lean_inc_ref(v_value_3598_);
v___x_3600_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3600_, 0, v_value_3598_);
v___x_3601_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v___x_3600_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_object* v_a_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3621_; 
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3601_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3604_ = v___x_3601_;
v_isShared_3605_ = v_isSharedCheck_3621_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_a_3602_);
lean_dec(v___x_3601_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3621_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3606_; 
v___x_3606_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3599_, v_decl_3594_, v_type_3597_, v_params_3596_, v_a_3602_, v_a_3557_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3609_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_a_3607_);
lean_dec_ref_known(v___x_3606_, 1);
if (v_isShared_3605_ == 0)
{
lean_ctor_set_tag(v___x_3604_, 2);
lean_ctor_set(v___x_3604_, 0, v_a_3607_);
v___x_3609_ = v___x_3604_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3607_);
v___x_3609_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3610_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3610_, 0, v_k_3595_);
v___x_3611_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewCandidate___redArg(v___x_3609_, v___x_3610_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
return v___x_3611_;
}
}
else
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_del_object(v___x_3604_);
lean_dec_ref(v_k_3595_);
v_a_3613_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3606_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3606_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_3597_);
lean_dec_ref(v_params_3596_);
lean_dec_ref(v_k_3595_);
lean_dec_ref(v_decl_3594_);
return v___x_3601_;
}
}
case 4:
{
lean_object* v_cases_3622_; lean_object* v___x_3623_; 
v_cases_3622_ = lean_ctor_get(v_code_3554_, 0);
lean_inc_ref_n(v_cases_3622_, 2);
v___x_3623_ = l_Lean_Compiler_LCNF_FloatLetIn_initialDecisions(v_cases_3622_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
lean_inc(v_a_3624_);
lean_dec_ref_known(v___x_3623_, 1);
v___x_3625_ = l_Lean_Compiler_LCNF_FloatLetIn_initialNewArms(v_cases_3622_);
v___x_3626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3626_, 0, v_a_3624_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
v___x_3627_ = lean_st_mk_ref(v___x_3626_);
v___x_3628_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_goCases(v___x_3627_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v___x_3629_; lean_object* v_typeName_3630_; lean_object* v_resultType_3631_; lean_object* v_discr_3632_; lean_object* v_alts_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3674_; 
lean_dec_ref_known(v___x_3628_, 1);
v___x_3629_ = lean_st_ref_get(v___x_3627_);
lean_dec(v___x_3627_);
v_typeName_3630_ = lean_ctor_get(v_cases_3622_, 0);
v_resultType_3631_ = lean_ctor_get(v_cases_3622_, 1);
v_discr_3632_ = lean_ctor_get(v_cases_3622_, 2);
v_alts_3633_ = lean_ctor_get(v_cases_3622_, 3);
v_isSharedCheck_3674_ = !lean_is_exclusive(v_cases_3622_);
if (v_isSharedCheck_3674_ == 0)
{
v___x_3635_ = v_cases_3622_;
v_isShared_3636_ = v_isSharedCheck_3674_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_alts_3633_);
lean_inc(v_discr_3632_);
lean_inc(v_resultType_3631_);
lean_inc(v_typeName_3630_);
lean_dec(v_cases_3622_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3674_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v_newArms_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; 
v_newArms_3637_ = lean_ctor_get(v___x_3629_, 1);
lean_inc_ref(v_newArms_3637_);
lean_dec(v___x_3629_);
v___x_3638_ = lean_box(2);
v___x_3639_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v_newArms_3637_, v___x_3638_);
v___x_3640_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3633_);
v___x_3641_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(v_newArms_3637_, v___x_3640_, v_alts_3633_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
lean_dec_ref(v_newArms_3637_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3665_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3644_ = v___x_3641_;
v_isShared_3645_ = v_isSharedCheck_3665_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_dec(v___x_3641_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3665_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___y_3647_; size_t v___x_3658_; size_t v___x_3659_; uint8_t v___x_3660_; 
v___x_3658_ = lean_ptr_addr(v_alts_3633_);
lean_dec_ref(v_alts_3633_);
v___x_3659_ = lean_ptr_addr(v_a_3642_);
v___x_3660_ = lean_usize_dec_eq(v___x_3658_, v___x_3659_);
if (v___x_3660_ == 0)
{
lean_dec_ref_known(v_code_3554_, 1);
goto v___jp_3653_;
}
else
{
size_t v___x_3661_; size_t v___x_3662_; uint8_t v___x_3663_; 
v___x_3661_ = lean_ptr_addr(v_resultType_3631_);
v___x_3662_ = lean_ptr_addr(v_resultType_3631_);
v___x_3663_ = lean_usize_dec_eq(v___x_3661_, v___x_3662_);
if (v___x_3663_ == 0)
{
lean_dec_ref_known(v_code_3554_, 1);
goto v___jp_3653_;
}
else
{
uint8_t v___x_3664_; 
v___x_3664_ = l_Lean_instBEqFVarId_beq(v_discr_3632_, v_discr_3632_);
if (v___x_3664_ == 0)
{
lean_dec_ref_known(v_code_3554_, 1);
goto v___jp_3653_;
}
else
{
lean_dec(v_a_3642_);
lean_del_object(v___x_3635_);
lean_dec(v_discr_3632_);
lean_dec_ref(v_resultType_3631_);
lean_dec(v_typeName_3630_);
v___y_3647_ = v_code_3554_;
goto v___jp_3646_;
}
}
}
v___jp_3646_:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3651_; 
v___x_3648_ = lean_array_mk(v___x_3639_);
v___x_3649_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___x_3648_, v___y_3647_);
lean_dec_ref(v___x_3648_);
if (v_isShared_3645_ == 0)
{
lean_ctor_set(v___x_3644_, 0, v___x_3649_);
v___x_3651_ = v___x_3644_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3649_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
v___jp_3653_:
{
lean_object* v___x_3655_; 
if (v_isShared_3636_ == 0)
{
lean_ctor_set(v___x_3635_, 3, v_a_3642_);
v___x_3655_ = v___x_3635_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_typeName_3630_);
lean_ctor_set(v_reuseFailAlloc_3657_, 1, v_resultType_3631_);
lean_ctor_set(v_reuseFailAlloc_3657_, 2, v_discr_3632_);
lean_ctor_set(v_reuseFailAlloc_3657_, 3, v_a_3642_);
v___x_3655_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3656_; 
v___x_3656_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3655_);
v___y_3647_ = v___x_3656_;
goto v___jp_3646_;
}
}
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
lean_dec(v___x_3639_);
lean_del_object(v___x_3635_);
lean_dec_ref(v_alts_3633_);
lean_dec(v_discr_3632_);
lean_dec_ref(v_resultType_3631_);
lean_dec(v_typeName_3630_);
lean_dec_ref_known(v_code_3554_, 1);
v_a_3666_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3641_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3641_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
lean_dec(v___x_3627_);
lean_dec_ref_known(v_code_3554_, 1);
lean_dec_ref(v_cases_3622_);
v_a_3675_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3628_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3628_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
lean_dec_ref_known(v_code_3554_, 1);
lean_dec_ref(v_cases_3622_);
v_a_3683_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3623_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3623_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
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
default: 
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; 
lean_inc(v_a_3555_);
v___x_3691_ = lean_array_mk(v_a_3555_);
v___x_3692_ = l_Array_reverse___redArg(v___x_3691_);
v___x_3693_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___x_3692_, v_code_3554_);
lean_dec_ref(v___x_3692_);
v___x_3694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3693_);
return v___x_3694_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed(lean_object* v_code_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go(v_code_3695_, v_a_3696_, v_a_3697_, v_a_3698_, v_a_3699_, v_a_3700_);
lean_dec(v_a_3700_);
lean_dec_ref(v_a_3699_);
lean_dec(v_a_3698_);
lean_dec_ref(v_a_3697_);
lean_dec(v_a_3696_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(lean_object* v___x_3703_, lean_object* v_i_3704_, lean_object* v_as_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_){
_start:
{
lean_object* v___x_3712_; uint8_t v___x_3713_; 
v___x_3712_ = lean_array_get_size(v_as_3705_);
v___x_3713_ = lean_nat_dec_lt(v_i_3704_, v___x_3712_);
if (v___x_3713_ == 0)
{
lean_object* v___x_3714_; 
lean_dec(v_i_3704_);
v___x_3714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3714_, 0, v_as_3705_);
return v___x_3714_;
}
else
{
lean_object* v_toCold_3715_; lean_object* v_options_3716_; lean_object* v_inheritedTraceOptions_3717_; uint8_t v_hasTrace_3718_; lean_object* v_a_3719_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; 
v_toCold_3715_ = lean_ctor_get(v___y_3709_, 0);
v_options_3716_ = lean_ctor_get(v_toCold_3715_, 2);
v_inheritedTraceOptions_3717_ = lean_ctor_get(v_toCold_3715_, 11);
v_hasTrace_3718_ = lean_ctor_get_uint8(v_options_3716_, sizeof(void*)*1);
v_a_3719_ = lean_array_fget_borrowed(v_as_3705_, v_i_3704_);
v___x_3750_ = l_Lean_Compiler_LCNF_FloatLetIn_Decision_ofAlt(v_a_3719_);
v___x_3751_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_FloatLetIn_dontFloat_spec__0(v___x_3703_, v___x_3750_);
if (v_hasTrace_3718_ == 0)
{
lean_dec(v___x_3750_);
v___y_3753_ = v___y_3707_;
v___y_3754_ = v___y_3708_;
v___y_3755_ = v___y_3709_;
v___y_3756_ = v___y_3710_;
goto v___jp_3752_;
}
else
{
lean_object* v___x_3761_; lean_object* v___x_3762_; uint8_t v___x_3763_; 
v___x_3761_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2));
v___x_3762_ = lean_obj_once(&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5, &l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5_once, _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__5);
v___x_3763_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3717_, v_options_3716_, v___x_3762_);
if (v___x_3763_ == 0)
{
lean_dec(v___x_3750_);
v___y_3753_ = v___y_3707_;
v___y_3754_ = v___y_3708_;
v___y_3755_ = v___y_3709_;
v___y_3756_ = v___y_3710_;
goto v___jp_3752_;
}
else
{
lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3764_ = lean_obj_once(&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7, &l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7_once, _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__7);
v___x_3765_ = lean_unsigned_to_nat(0u);
v___x_3766_ = l_Lean_Compiler_LCNF_FloatLetIn_instReprDecision_repr(v___x_3750_, v___x_3765_);
v___x_3767_ = l_Lean_MessageData_ofFormat(v___x_3766_);
v___x_3768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3764_);
lean_ctor_set(v___x_3768_, 1, v___x_3767_);
v___x_3769_ = lean_obj_once(&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9, &l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9_once, _init_l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__9);
v___x_3770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3768_);
lean_ctor_set(v___x_3770_, 1, v___x_3769_);
v___x_3771_ = l_List_lengthTR___redArg(v___x_3751_);
v___x_3772_ = l_Nat_reprFast(v___x_3771_);
v___x_3773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3772_);
v___x_3774_ = l_Lean_MessageData_ofFormat(v___x_3773_);
v___x_3775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3770_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
v___x_3776_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__0___redArg(v___x_3761_, v___x_3775_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_dec_ref_known(v___x_3776_, 1);
v___y_3753_ = v___y_3707_;
v___y_3754_ = v___y_3708_;
v___y_3755_ = v___y_3709_;
v___y_3756_ = v___y_3710_;
goto v___jp_3752_;
}
else
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
lean_dec(v___x_3751_);
lean_dec_ref(v_as_3705_);
lean_dec(v_i_3704_);
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3776_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3776_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
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
}
v___jp_3720_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3727_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v___y_3724_, v___y_3726_);
lean_dec_ref(v___y_3724_);
v___x_3728_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go___boxed), 7, 1);
lean_closure_set(v___x_3728_, 0, v___x_3727_);
v___x_3729_ = l_Lean_Compiler_LCNF_FloatLetIn_withNewScope___redArg(v___x_3728_, v___y_3723_, v___y_3722_, v___y_3721_, v___y_3725_);
if (lean_obj_tag(v___x_3729_) == 0)
{
lean_object* v_a_3730_; lean_object* v___x_3731_; size_t v___x_3732_; size_t v___x_3733_; uint8_t v___x_3734_; 
v_a_3730_ = lean_ctor_get(v___x_3729_, 0);
lean_inc(v_a_3730_);
lean_dec_ref_known(v___x_3729_, 1);
lean_inc(v_a_3719_);
v___x_3731_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_3719_, v_a_3730_);
v___x_3732_ = lean_ptr_addr(v_a_3719_);
v___x_3733_ = lean_ptr_addr(v___x_3731_);
v___x_3734_ = lean_usize_dec_eq(v___x_3732_, v___x_3733_);
if (v___x_3734_ == 0)
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3735_ = lean_unsigned_to_nat(1u);
v___x_3736_ = lean_nat_add(v_i_3704_, v___x_3735_);
v___x_3737_ = lean_array_fset(v_as_3705_, v_i_3704_, v___x_3731_);
lean_dec(v_i_3704_);
v_i_3704_ = v___x_3736_;
v_as_3705_ = v___x_3737_;
goto _start;
}
else
{
lean_object* v___x_3739_; lean_object* v___x_3740_; 
lean_dec_ref(v___x_3731_);
v___x_3739_ = lean_unsigned_to_nat(1u);
v___x_3740_ = lean_nat_add(v_i_3704_, v___x_3739_);
lean_dec(v_i_3704_);
v_i_3704_ = v___x_3740_;
goto _start;
}
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_dec_ref(v_as_3705_);
lean_dec(v_i_3704_);
v_a_3742_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3729_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3729_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
v___jp_3752_:
{
lean_object* v___x_3757_; 
v___x_3757_ = lean_array_mk(v___x_3751_);
switch(lean_obj_tag(v_a_3719_))
{
case 0:
{
lean_object* v_code_3758_; 
v_code_3758_ = lean_ctor_get(v_a_3719_, 2);
lean_inc_ref(v_code_3758_);
v___y_3721_ = v___y_3755_;
v___y_3722_ = v___y_3754_;
v___y_3723_ = v___y_3753_;
v___y_3724_ = v___x_3757_;
v___y_3725_ = v___y_3756_;
v___y_3726_ = v_code_3758_;
goto v___jp_3720_;
}
case 1:
{
lean_object* v_code_3759_; 
v_code_3759_ = lean_ctor_get(v_a_3719_, 1);
lean_inc_ref(v_code_3759_);
v___y_3721_ = v___y_3755_;
v___y_3722_ = v___y_3754_;
v___y_3723_ = v___y_3753_;
v___y_3724_ = v___x_3757_;
v___y_3725_ = v___y_3756_;
v___y_3726_ = v_code_3759_;
goto v___jp_3720_;
}
default: 
{
lean_object* v_code_3760_; 
v_code_3760_ = lean_ctor_get(v_a_3719_, 0);
lean_inc_ref(v_code_3760_);
v___y_3721_ = v___y_3755_;
v___y_3722_ = v___y_3754_;
v___y_3723_ = v___y_3753_;
v___y_3724_ = v___x_3757_;
v___y_3725_ = v___y_3756_;
v___y_3726_ = v_code_3760_;
goto v___jp_3720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___boxed(lean_object* v___x_3785_, lean_object* v_i_3786_, lean_object* v_as_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1(v___x_3785_, v_i_3786_, v_as_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_);
lean_dec(v___y_3792_);
lean_dec_ref(v___y_3791_);
lean_dec(v___y_3790_);
lean_dec_ref(v___y_3789_);
lean_dec(v___y_3788_);
lean_dec_ref(v___x_3785_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(lean_object* v_f_3795_, lean_object* v_v_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_){
_start:
{
if (lean_obj_tag(v_v_3796_) == 0)
{
lean_object* v_code_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3827_; 
v_code_3803_ = lean_ctor_get(v_v_3796_, 0);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_v_3796_);
if (v_isSharedCheck_3827_ == 0)
{
v___x_3805_ = v_v_3796_;
v_isShared_3806_ = v_isSharedCheck_3827_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_code_3803_);
lean_dec(v_v_3796_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3827_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3807_; 
lean_inc(v___y_3801_);
lean_inc_ref(v___y_3800_);
lean_inc(v___y_3799_);
lean_inc_ref(v___y_3798_);
lean_inc(v___y_3797_);
v___x_3807_ = lean_apply_7(v_f_3795_, v_code_3803_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_, lean_box(0));
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3818_; 
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3810_ = v___x_3807_;
v_isShared_3811_ = v_isSharedCheck_3818_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v___x_3807_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3818_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 0, v_a_3808_);
v___x_3813_ = v___x_3805_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3808_);
v___x_3813_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
lean_object* v___x_3815_; 
if (v_isShared_3811_ == 0)
{
lean_ctor_set(v___x_3810_, 0, v___x_3813_);
v___x_3815_ = v___x_3810_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3813_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3826_; 
lean_del_object(v___x_3805_);
v_a_3819_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3821_ = v___x_3807_;
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v___x_3807_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3824_; 
if (v_isShared_3822_ == 0)
{
v___x_3824_ = v___x_3821_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3819_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
}
else
{
lean_object* v___x_3828_; 
lean_dec_ref(v_f_3795_);
v___x_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3828_, 0, v_v_3796_);
return v___x_3828_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg___boxed(lean_object* v_f_3829_, lean_object* v_v_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(v_f_3829_, v_v_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
lean_dec(v___y_3835_);
lean_dec_ref(v___y_3834_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
lean_dec(v___y_3831_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0(uint8_t v_pu_3838_, lean_object* v_f_3839_, lean_object* v_v_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_){
_start:
{
lean_object* v___x_3847_; 
v___x_3847_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(v_f_3839_, v_v_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___boxed(lean_object* v_pu_3848_, lean_object* v_f_3849_, lean_object* v_v_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
uint8_t v_pu_boxed_3857_; lean_object* v_res_3858_; 
v_pu_boxed_3857_ = lean_unbox(v_pu_3848_);
v_res_3858_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0(v_pu_boxed_3857_, v_f_3849_, v_v_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
lean_dec(v___y_3855_);
lean_dec_ref(v___y_3854_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
lean_dec(v___y_3851_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(lean_object* v_decl_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_){
_start:
{
lean_object* v_toSignature_3866_; lean_object* v_value_3867_; uint8_t v_recursive_3868_; lean_object* v_inlineAttr_x3f_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_3895_; 
v_toSignature_3866_ = lean_ctor_get(v_decl_3860_, 0);
v_value_3867_ = lean_ctor_get(v_decl_3860_, 1);
v_recursive_3868_ = lean_ctor_get_uint8(v_decl_3860_, sizeof(void*)*3);
v_inlineAttr_x3f_3869_ = lean_ctor_get(v_decl_3860_, 2);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_decl_3860_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3871_ = v_decl_3860_;
v_isShared_3872_ = v_isSharedCheck_3895_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_inlineAttr_x3f_3869_);
lean_inc(v_value_3867_);
lean_inc(v_toSignature_3866_);
lean_dec(v_decl_3860_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_3895_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; 
v___x_3873_ = ((lean_object*)(l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___closed__0));
v___x_3874_ = lean_box(0);
v___x_3875_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_FloatLetIn_floatLetIn_spec__0___redArg(v___x_3873_, v_value_3867_, v___x_3874_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_);
if (lean_obj_tag(v___x_3875_) == 0)
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3886_; 
v_a_3876_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3878_ = v___x_3875_;
v_isShared_3879_ = v_isSharedCheck_3886_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3875_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3886_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3881_; 
if (v_isShared_3872_ == 0)
{
lean_ctor_set(v___x_3871_, 1, v_a_3876_);
v___x_3881_ = v___x_3871_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_toSignature_3866_);
lean_ctor_set(v_reuseFailAlloc_3885_, 1, v_a_3876_);
lean_ctor_set(v_reuseFailAlloc_3885_, 2, v_inlineAttr_x3f_3869_);
lean_ctor_set_uint8(v_reuseFailAlloc_3885_, sizeof(void*)*3, v_recursive_3868_);
v___x_3881_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
lean_object* v___x_3883_; 
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 0, v___x_3881_);
v___x_3883_ = v___x_3878_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v___x_3881_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
}
}
else
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3894_; 
lean_del_object(v___x_3871_);
lean_dec(v_inlineAttr_x3f_3869_);
lean_dec_ref(v_toSignature_3866_);
v_a_3887_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3889_ = v___x_3875_;
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3875_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn___boxed(lean_object* v_decl_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(v_decl_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_);
lean_dec(v_a_3900_);
lean_dec_ref(v_a_3899_);
lean_dec(v_a_3898_);
lean_dec_ref(v_a_3897_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn(lean_object* v_decl_3903_, lean_object* v_a_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = l_Lean_Compiler_LCNF_FloatLetIn_floatLetIn(v_decl_3903_, v_a_3904_, v_a_3905_, v_a_3906_, v_a_3907_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_floatLetIn___boxed(lean_object* v_decl_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lean_Compiler_LCNF_Decl_floatLetIn(v_decl_3910_, v_a_3911_, v_a_3912_, v_a_3913_, v_a_3914_);
lean_dec(v_a_3914_);
lean_dec_ref(v_a_3913_);
lean_dec(v_a_3912_);
lean_dec_ref(v_a_3911_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0(uint8_t v_phase_3919_, lean_object* v___f_3920_, lean_object* v_occurrence_3921_, lean_object* v_h_3922_){
_start:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3923_ = ((lean_object*)(l_Lean_Compiler_LCNF_floatLetIn___lam__0___closed__0));
v___x_3924_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_3923_, v_phase_3919_, v___f_3920_, v_occurrence_3921_);
return v___x_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___lam__0___boxed(lean_object* v_phase_3925_, lean_object* v___f_3926_, lean_object* v_occurrence_3927_, lean_object* v_h_3928_){
_start:
{
uint8_t v_phase_boxed_3929_; lean_object* v_res_3930_; 
v_phase_boxed_3929_ = lean_unbox(v_phase_3925_);
v_res_3930_ = l_Lean_Compiler_LCNF_floatLetIn___lam__0(v_phase_boxed_3929_, v___f_3926_, v_occurrence_3927_, v_h_3928_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn(uint8_t v_phase_3932_, lean_object* v_occurrence_3933_){
_start:
{
lean_object* v___f_3934_; lean_object* v___x_3935_; lean_object* v___f_3936_; lean_object* v___x_3937_; uint8_t v___x_3938_; lean_object* v___x_3939_; 
v___f_3934_ = ((lean_object*)(l_Lean_Compiler_LCNF_floatLetIn___closed__0));
v___x_3935_ = lean_box(v_phase_3932_);
v___f_3936_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_floatLetIn___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3936_, 0, v___x_3935_);
lean_closure_set(v___f_3936_, 1, v___f_3934_);
lean_closure_set(v___f_3936_, 2, v_occurrence_3933_);
v___x_3937_ = l_Lean_Compiler_LCNF_instInhabitedPass;
v___x_3938_ = 0;
v___x_3939_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_3937_, v_phase_3932_, v___x_3938_, v___f_3936_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_floatLetIn___boxed(lean_object* v_phase_3940_, lean_object* v_occurrence_3941_){
_start:
{
uint8_t v_phase_boxed_3942_; lean_object* v_res_3943_; 
v_phase_boxed_3942_ = lean_unbox(v_phase_3940_);
v_res_3943_ = l_Lean_Compiler_LCNF_floatLetIn(v_phase_boxed_3942_, v_occurrence_3941_);
return v_res_3943_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; 
v___x_3995_ = lean_unsigned_to_nat(3411573818u);
v___x_3996_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_3997_ = l_Lean_Name_num___override(v___x_3996_, v___x_3995_);
return v___x_3997_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___x_3999_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4000_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4001_ = l_Lean_Name_str___override(v___x_4000_, v___x_3999_);
return v___x_4001_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4003_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_));
v___x_4004_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4005_ = l_Lean_Name_str___override(v___x_4004_, v___x_4003_);
return v___x_4005_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4006_ = lean_unsigned_to_nat(2u);
v___x_4007_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4008_ = l_Lean_Name_num___override(v___x_4007_, v___x_4006_);
return v___x_4008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4010_; uint8_t v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v___x_4010_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_FloatLetIn_floatLetIn_go_spec__1___closed__2));
v___x_4011_ = 1;
v___x_4012_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_);
v___x_4013_ = l_Lean_registerTraceClass(v___x_4010_, v___x_4011_, v___x_4012_);
return v___x_4013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2____boxed(lean_object* v_a_4014_){
_start:
{
lean_object* v_res_4015_; 
v_res_4015_ = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_();
return v_res_4015_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_FloatLetIn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_FloatLetIn_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_FloatLetIn_3411573818____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_FloatLetIn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_FloatLetIn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FloatLetIn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_FloatLetIn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_FloatLetIn(builtin);
}
#ifdef __cplusplus
}
#endif
