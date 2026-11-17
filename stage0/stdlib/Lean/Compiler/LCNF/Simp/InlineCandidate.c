// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.InlineCandidate
// Imports: public import Lean.Compiler.LCNF.Simp.SimpM
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
lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_instantiateParamsLevelParams(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_instantiateValueLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_instantiateTypeLevelParams___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_isCasesOnParam_x3f___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg(lean_object*);
lean_object* l_Lean_Meta_isInstance___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
uint8_t l_Lean_Compiler_LCNF_Decl_alwaysInlineAttr___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Decl_inlineAttr___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Decl_inlineIfReduceAttr___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Decl_noinlineAttr___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg(uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity___boxed(lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__0_value;
static const lean_string_object l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__1_value;
static const lean_string_object l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__2 = (const lean_object*)&l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_override"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__1_value;
static const lean_array_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "`inline` applied to non-local declaration '"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__4;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "' is invalid"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "`inline` applied to constructor '"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__8;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Compiler.LCNF.Simp.InlineCandidate"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Compiler.LCNF.Simp.inlineCandidate\?"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 121, .m_capacity = 121, .m_length = 120, .m_data = "assertion violation: ( __do_lift._@.Lean.Compiler.LCNF.Simp.InlineCandidate.450150219._hygCtx._hyg.334.0 ).isSome\n      "};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__11_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__12;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`inline` applied to parameters is invalid"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__13_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__14;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(5, 122, 96, 221, 209, 205, 68, 156)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(186, 182, 14, 42, 67, 101, 187, 98)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 104, 221, 94, 203, 189, 176, 167)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "InlineCandidate"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(204, 189, 245, 204, 189, 57, 91, 44)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(205, 24, 147, 136, 109, 69, 105, 125)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(184, 141, 161, 237, 187, 152, 47, 223)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(146, 100, 105, 35, 144, 92, 153, 253)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 251, 144, 255, 136, 239, 26, 27)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 121, 5, 69, 12, 122, 72, 166)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(202, 124, 205, 76, 48, 189, 94, 107)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(35, 5, 164, 203, 90, 240, 32, 95)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 174, 208, 245, 188, 159, 42, 16)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(76, 214, 115, 185, 35, 209, 42, 75)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 210, 134, 178, 101, 107, 79, 160)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 132, 0, 16, 135, 249, 121, 4)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 86, 216, 181, 78, 83, 157, 191)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1449551352) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(40, 111, 212, 97, 188, 2, 254, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 181, 10, 223, 32, 170, 74, 213)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__31_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__31_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__31_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__32_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__31_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 22, 140, 58, 145, 25, 234, 208)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__32_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__32_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__33_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__32_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(98, 140, 124, 200, 122, 12, 67, 204)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__33_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__33_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(lean_object* v_x_1_){
_start:
{
lean_object* v_params_2_; lean_object* v___x_3_; 
v_params_2_ = lean_ctor_get(v_x_1_, 0);
v___x_3_ = lean_array_get_size(v_params_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
static lean_object* _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_6_;
}
}
static lean_object* _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__0, &l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__0_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__0);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__1, &l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__1_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__1);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
lean_ctor_set(v___x_11_, 2, v___x_10_);
lean_ctor_set(v___x_11_, 3, v___x_10_);
lean_ctor_set(v___x_11_, 4, v___x_9_);
lean_ctor_set(v___x_11_, 5, v___x_9_);
lean_ctor_set(v___x_11_, 6, v___x_9_);
lean_ctor_set(v___x_11_, 7, v___x_9_);
lean_ctor_set(v___x_11_, 8, v___x_9_);
lean_ctor_set(v___x_11_, 9, v___x_9_);
lean_ctor_set(v___x_11_, 10, v___x_9_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg(lean_object* v_msg_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_ref_18_; lean_object* v___x_19_; lean_object* v_env_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_ref_18_ = lean_ctor_get(v___y_15_, 2);
v___x_19_ = lean_st_ref_get(v___y_16_);
v_env_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc_ref(v_env_20_);
lean_dec(v___x_19_);
v___x_21_ = lean_st_ref_get(v___y_14_);
v___x_22_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_13_);
if (lean_obj_tag(v___x_22_) == 0)
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_45_; 
v_a_23_ = lean_ctor_get(v___x_22_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_22_);
if (v_isSharedCheck_45_ == 0)
{
v___x_25_ = v___x_22_;
v_isShared_26_ = v_isSharedCheck_45_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_22_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_45_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v_lctx_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_43_; 
v_lctx_27_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_43_ == 0)
{
lean_object* v_unused_44_; 
v_unused_44_ = lean_ctor_get(v___x_21_, 1);
lean_dec(v_unused_44_);
v___x_29_ = v___x_21_;
v_isShared_30_ = v_isSharedCheck_43_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_lctx_27_);
lean_dec(v___x_21_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_43_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
uint8_t v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_31_ = lean_unbox(v_a_23_);
lean_dec(v_a_23_);
v___x_32_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_27_, v___x_31_);
lean_dec_ref(v_lctx_27_);
v___x_33_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_15_);
v___x_34_ = lean_obj_once(&l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__2, &l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__2_once, _init_l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___closed__2);
v___x_35_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_35_, 0, v_env_20_);
lean_ctor_set(v___x_35_, 1, v___x_34_);
lean_ctor_set(v___x_35_, 2, v___x_32_);
lean_ctor_set(v___x_35_, 3, v___x_33_);
if (v_isShared_30_ == 0)
{
lean_ctor_set_tag(v___x_29_, 3);
lean_ctor_set(v___x_29_, 1, v_msg_12_);
lean_ctor_set(v___x_29_, 0, v___x_35_);
v___x_37_ = v___x_29_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v___x_35_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v_msg_12_);
v___x_37_ = v_reuseFailAlloc_42_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_18_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_18_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
if (v_isShared_26_ == 0)
{
lean_ctor_set_tag(v___x_25_, 1);
lean_ctor_set(v___x_25_, 0, v___x_38_);
v___x_40_ = v___x_25_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
}
else
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_53_; 
lean_dec(v___x_21_);
lean_dec_ref(v_env_20_);
lean_dec_ref(v_msg_12_);
v_a_46_ = lean_ctor_get(v___x_22_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_22_);
if (v_isSharedCheck_53_ == 0)
{
v___x_48_ = v___x_22_;
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_22_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
if (v_isShared_49_ == 0)
{
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_a_46_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg___boxed(lean_object* v_msg_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg(v_msg_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1(lean_object* v_00_u03b1_61_, lean_object* v_msg_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg(v_msg_62_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___boxed(lean_object* v_00_u03b1_72_, lean_object* v_msg_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1(v_00_u03b1_72_, v_msg_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_82_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_instMonadEIO___redArg();
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2(lean_object* v_msg_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v_toApplicative_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_163_; 
v___x_97_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0);
v___x_98_ = l_StateRefT_x27_instMonad___redArg(v___x_97_);
v_toApplicative_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_163_ == 0)
{
lean_object* v_unused_164_; 
v_unused_164_ = lean_ctor_get(v___x_98_, 1);
lean_dec(v_unused_164_);
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_163_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_toApplicative_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_163_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v_toFunctor_103_; lean_object* v_toSeq_104_; lean_object* v_toSeqLeft_105_; lean_object* v_toSeqRight_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_161_; 
v_toFunctor_103_ = lean_ctor_get(v_toApplicative_99_, 0);
v_toSeq_104_ = lean_ctor_get(v_toApplicative_99_, 2);
v_toSeqLeft_105_ = lean_ctor_get(v_toApplicative_99_, 3);
v_toSeqRight_106_ = lean_ctor_get(v_toApplicative_99_, 4);
v_isSharedCheck_161_ = !lean_is_exclusive(v_toApplicative_99_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v_toApplicative_99_, 1);
lean_dec(v_unused_162_);
v___x_108_ = v_toApplicative_99_;
v_isShared_109_ = v_isSharedCheck_161_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_toSeqRight_106_);
lean_inc(v_toSeqLeft_105_);
lean_inc(v_toSeq_104_);
lean_inc(v_toFunctor_103_);
lean_dec(v_toApplicative_99_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_161_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___x_119_; 
v___f_110_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__1));
v___f_111_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__2));
lean_inc_ref(v_toFunctor_103_);
v___f_112_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_112_, 0, v_toFunctor_103_);
v___f_113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_113_, 0, v_toFunctor_103_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___f_112_);
lean_ctor_set(v___x_114_, 1, v___f_113_);
v___f_115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_115_, 0, v_toSeqRight_106_);
v___f_116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_116_, 0, v_toSeqLeft_105_);
v___f_117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_117_, 0, v_toSeq_104_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 4, v___f_115_);
lean_ctor_set(v___x_108_, 3, v___f_116_);
lean_ctor_set(v___x_108_, 2, v___f_117_);
lean_ctor_set(v___x_108_, 1, v___f_110_);
lean_ctor_set(v___x_108_, 0, v___x_114_);
v___x_119_ = v___x_108_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v___f_110_);
lean_ctor_set(v_reuseFailAlloc_160_, 2, v___f_117_);
lean_ctor_set(v_reuseFailAlloc_160_, 3, v___f_116_);
lean_ctor_set(v_reuseFailAlloc_160_, 4, v___f_115_);
v___x_119_ = v_reuseFailAlloc_160_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_121_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___f_111_);
lean_ctor_set(v___x_101_, 0, v___x_119_);
v___x_121_ = v___x_101_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___f_111_);
v___x_121_ = v_reuseFailAlloc_159_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_122_; lean_object* v_toApplicative_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_157_; 
v___x_122_ = l_StateRefT_x27_instMonad___redArg(v___x_121_);
v_toApplicative_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; 
v_unused_158_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_158_);
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_157_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_toApplicative_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_157_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v_toFunctor_127_; lean_object* v_toSeq_128_; lean_object* v_toSeqLeft_129_; lean_object* v_toSeqRight_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_155_; 
v_toFunctor_127_ = lean_ctor_get(v_toApplicative_123_, 0);
v_toSeq_128_ = lean_ctor_get(v_toApplicative_123_, 2);
v_toSeqLeft_129_ = lean_ctor_get(v_toApplicative_123_, 3);
v_toSeqRight_130_ = lean_ctor_get(v_toApplicative_123_, 4);
v_isSharedCheck_155_ = !lean_is_exclusive(v_toApplicative_123_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v_toApplicative_123_, 1);
lean_dec(v_unused_156_);
v___x_132_ = v_toApplicative_123_;
v_isShared_133_ = v_isSharedCheck_155_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_toSeqRight_130_);
lean_inc(v_toSeqLeft_129_);
lean_inc(v_toSeq_128_);
lean_inc(v_toFunctor_127_);
lean_dec(v_toApplicative_123_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_155_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___f_136_; lean_object* v___f_137_; lean_object* v___x_138_; lean_object* v___f_139_; lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___x_143_; 
v___f_134_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__3));
v___f_135_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__4));
lean_inc_ref(v_toFunctor_127_);
v___f_136_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_136_, 0, v_toFunctor_127_);
v___f_137_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_137_, 0, v_toFunctor_127_);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___f_136_);
lean_ctor_set(v___x_138_, 1, v___f_137_);
v___f_139_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_139_, 0, v_toSeqRight_130_);
v___f_140_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_140_, 0, v_toSeqLeft_129_);
v___f_141_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_141_, 0, v_toSeq_128_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 4, v___f_139_);
lean_ctor_set(v___x_132_, 3, v___f_140_);
lean_ctor_set(v___x_132_, 2, v___f_141_);
lean_ctor_set(v___x_132_, 1, v___f_134_);
lean_ctor_set(v___x_132_, 0, v___x_138_);
v___x_143_ = v___x_132_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v___f_134_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v___f_141_);
lean_ctor_set(v_reuseFailAlloc_154_, 3, v___f_140_);
lean_ctor_set(v_reuseFailAlloc_154_, 4, v___f_139_);
v___x_143_ = v_reuseFailAlloc_154_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_145_; 
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___f_135_);
lean_ctor_set(v___x_125_, 0, v___x_143_);
v___x_145_ = v___x_125_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_143_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v___f_135_);
v___x_145_ = v_reuseFailAlloc_153_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___f_150_; lean_object* v___x_17294__overap_151_; lean_object* v___x_152_; 
v___x_146_ = l_ReaderT_instMonad___redArg(v___x_145_);
v___x_147_ = l_StateRefT_x27_instMonad___redArg(v___x_146_);
v___x_148_ = lean_box(0);
v___x_149_ = l_instInhabitedOfMonad___redArg(v___x_147_, v___x_148_);
v___f_150_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_150_, 0, v___x_149_);
v___x_17294__overap_151_ = lean_panic_fn_borrowed(v___f_150_, v_msg_88_);
lean_dec_ref(v___f_150_);
lean_inc(v___y_95_);
lean_inc_ref(v___y_94_);
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc_ref(v___y_91_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
v___x_152_ = lean_apply_8(v___x_17294__overap_151_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, lean_box(0));
return v___x_152_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___boxed(lean_object* v_msg_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2(v_msg_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___lam__0(lean_object* v_val_175_, lean_object* v_code_176_, uint8_t v_mustInline_177_, uint8_t v_inlineDefs_178_, lean_object* v_____r_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
uint8_t v___x_188_; 
v___x_188_ = l_Lean_Compiler_LCNF_Decl_alwaysInlineAttr___redArg(v_val_175_);
if (v___x_188_ == 0)
{
uint8_t v___x_189_; 
v___x_189_ = l_Lean_Compiler_LCNF_Decl_inlineAttr___redArg(v_val_175_);
if (v___x_189_ == 0)
{
uint8_t v___x_190_; 
v___x_190_ = l_Lean_Compiler_LCNF_Decl_inlineIfReduceAttr___redArg(v_val_175_);
if (v___x_190_ == 0)
{
uint8_t v___x_191_; 
v___x_191_ = l_Lean_Compiler_LCNF_Decl_noinlineAttr___redArg(v_val_175_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_Compiler_LCNF_Simp_isSmall___redArg(v_code_176_, v___y_183_);
return v___x_192_;
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_box(v_mustInline_177_);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
else
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_box(v_inlineDefs_178_);
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
return v___x_196_;
}
}
else
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_box(v_inlineDefs_178_);
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
return v___x_198_;
}
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_box(v_inlineDefs_178_);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___lam__0___boxed(lean_object* v_val_201_, lean_object* v_code_202_, lean_object* v_mustInline_203_, lean_object* v_inlineDefs_204_, lean_object* v_____r_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
uint8_t v_mustInline_boxed_214_; uint8_t v_inlineDefs_boxed_215_; lean_object* v_res_216_; 
v_mustInline_boxed_214_ = lean_unbox(v_mustInline_203_);
v_inlineDefs_boxed_215_ = lean_unbox(v_inlineDefs_204_);
v_res_216_ = l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___lam__0(v_val_201_, v_code_202_, v_mustInline_boxed_214_, v_inlineDefs_boxed_215_, v_____r_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec_ref(v_code_202_);
lean_dec_ref(v_val_201_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0(lean_object* v_msg_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v_toApplicative_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_322_; 
v___x_228_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__0);
v___x_229_ = l_StateRefT_x27_instMonad___redArg(v___x_228_);
v_toApplicative_230_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_322_ == 0)
{
lean_object* v_unused_323_; 
v_unused_323_ = lean_ctor_get(v___x_229_, 1);
lean_dec(v_unused_323_);
v___x_232_ = v___x_229_;
v_isShared_233_ = v_isSharedCheck_322_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_toApplicative_230_);
lean_dec(v___x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_322_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v_toFunctor_234_; lean_object* v_toSeq_235_; lean_object* v_toSeqLeft_236_; lean_object* v_toSeqRight_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_320_; 
v_toFunctor_234_ = lean_ctor_get(v_toApplicative_230_, 0);
v_toSeq_235_ = lean_ctor_get(v_toApplicative_230_, 2);
v_toSeqLeft_236_ = lean_ctor_get(v_toApplicative_230_, 3);
v_toSeqRight_237_ = lean_ctor_get(v_toApplicative_230_, 4);
v_isSharedCheck_320_ = !lean_is_exclusive(v_toApplicative_230_);
if (v_isSharedCheck_320_ == 0)
{
lean_object* v_unused_321_; 
v_unused_321_ = lean_ctor_get(v_toApplicative_230_, 1);
lean_dec(v_unused_321_);
v___x_239_ = v_toApplicative_230_;
v_isShared_240_ = v_isSharedCheck_320_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_toSeqRight_237_);
lean_inc(v_toSeqLeft_236_);
lean_inc(v_toSeq_235_);
lean_inc(v_toFunctor_234_);
lean_dec(v_toApplicative_230_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_320_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___f_241_; lean_object* v___f_242_; lean_object* v___f_243_; lean_object* v___f_244_; lean_object* v___x_245_; lean_object* v___f_246_; lean_object* v___f_247_; lean_object* v___f_248_; lean_object* v___x_250_; 
v___f_241_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__1));
v___f_242_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__2));
lean_inc_ref(v_toFunctor_234_);
v___f_243_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_243_, 0, v_toFunctor_234_);
v___f_244_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_244_, 0, v_toFunctor_234_);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v___f_243_);
lean_ctor_set(v___x_245_, 1, v___f_244_);
v___f_246_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_246_, 0, v_toSeqRight_237_);
v___f_247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_247_, 0, v_toSeqLeft_236_);
v___f_248_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_248_, 0, v_toSeq_235_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 4, v___f_246_);
lean_ctor_set(v___x_239_, 3, v___f_247_);
lean_ctor_set(v___x_239_, 2, v___f_248_);
lean_ctor_set(v___x_239_, 1, v___f_241_);
lean_ctor_set(v___x_239_, 0, v___x_245_);
v___x_250_ = v___x_239_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v___f_241_);
lean_ctor_set(v_reuseFailAlloc_319_, 2, v___f_248_);
lean_ctor_set(v_reuseFailAlloc_319_, 3, v___f_247_);
lean_ctor_set(v_reuseFailAlloc_319_, 4, v___f_246_);
v___x_250_ = v_reuseFailAlloc_319_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
lean_object* v___x_252_; 
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 1, v___f_242_);
lean_ctor_set(v___x_232_, 0, v___x_250_);
v___x_252_ = v___x_232_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_250_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v___f_242_);
v___x_252_ = v_reuseFailAlloc_318_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
lean_object* v___x_253_; lean_object* v_toApplicative_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_316_; 
v___x_253_ = l_StateRefT_x27_instMonad___redArg(v___x_252_);
v_toApplicative_254_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v___x_253_, 1);
lean_dec(v_unused_317_);
v___x_256_ = v___x_253_;
v_isShared_257_ = v_isSharedCheck_316_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_toApplicative_254_);
lean_dec(v___x_253_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_316_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_toFunctor_258_; lean_object* v_toSeq_259_; lean_object* v_toSeqLeft_260_; lean_object* v_toSeqRight_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_314_; 
v_toFunctor_258_ = lean_ctor_get(v_toApplicative_254_, 0);
v_toSeq_259_ = lean_ctor_get(v_toApplicative_254_, 2);
v_toSeqLeft_260_ = lean_ctor_get(v_toApplicative_254_, 3);
v_toSeqRight_261_ = lean_ctor_get(v_toApplicative_254_, 4);
v_isSharedCheck_314_ = !lean_is_exclusive(v_toApplicative_254_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; 
v_unused_315_ = lean_ctor_get(v_toApplicative_254_, 1);
lean_dec(v_unused_315_);
v___x_263_ = v_toApplicative_254_;
v_isShared_264_ = v_isSharedCheck_314_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_toSeqRight_261_);
lean_inc(v_toSeqLeft_260_);
lean_inc(v_toSeq_259_);
lean_inc(v_toFunctor_258_);
lean_dec(v_toApplicative_254_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_314_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___f_265_; lean_object* v___f_266_; lean_object* v___f_267_; lean_object* v___f_268_; lean_object* v___x_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___f_272_; lean_object* v___x_274_; 
v___f_265_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__3));
v___f_266_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2___closed__4));
lean_inc_ref(v_toFunctor_258_);
v___f_267_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_267_, 0, v_toFunctor_258_);
v___f_268_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_268_, 0, v_toFunctor_258_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___f_267_);
lean_ctor_set(v___x_269_, 1, v___f_268_);
v___f_270_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_270_, 0, v_toSeqRight_261_);
v___f_271_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_271_, 0, v_toSeqLeft_260_);
v___f_272_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_272_, 0, v_toSeq_259_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 4, v___f_270_);
lean_ctor_set(v___x_263_, 3, v___f_271_);
lean_ctor_set(v___x_263_, 2, v___f_272_);
lean_ctor_set(v___x_263_, 1, v___f_265_);
lean_ctor_set(v___x_263_, 0, v___x_269_);
v___x_274_ = v___x_263_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___f_265_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v___f_272_);
lean_ctor_set(v_reuseFailAlloc_313_, 3, v___f_271_);
lean_ctor_set(v_reuseFailAlloc_313_, 4, v___f_270_);
v___x_274_ = v_reuseFailAlloc_313_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_276_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___f_266_);
lean_ctor_set(v___x_256_, 0, v___x_274_);
v___x_276_ = v___x_256_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_274_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v___f_266_);
v___x_276_ = v_reuseFailAlloc_312_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_toApplicative_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_310_; 
v___x_277_ = l_ReaderT_instMonad___redArg(v___x_276_);
v___x_278_ = l_StateRefT_x27_instMonad___redArg(v___x_277_);
v_toApplicative_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; 
v_unused_311_ = lean_ctor_get(v___x_278_, 1);
lean_dec(v_unused_311_);
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_310_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_toApplicative_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_310_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v_toFunctor_283_; lean_object* v_toSeq_284_; lean_object* v_toSeqLeft_285_; lean_object* v_toSeqRight_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_308_; 
v_toFunctor_283_ = lean_ctor_get(v_toApplicative_279_, 0);
v_toSeq_284_ = lean_ctor_get(v_toApplicative_279_, 2);
v_toSeqLeft_285_ = lean_ctor_get(v_toApplicative_279_, 3);
v_toSeqRight_286_ = lean_ctor_get(v_toApplicative_279_, 4);
v_isSharedCheck_308_ = !lean_is_exclusive(v_toApplicative_279_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_toApplicative_279_, 1);
lean_dec(v_unused_309_);
v___x_288_ = v_toApplicative_279_;
v_isShared_289_ = v_isSharedCheck_308_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_toSeqRight_286_);
lean_inc(v_toSeqLeft_285_);
lean_inc(v_toSeq_284_);
lean_inc(v_toFunctor_283_);
lean_dec(v_toApplicative_279_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_308_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___f_290_; lean_object* v___f_291_; lean_object* v___f_292_; lean_object* v___f_293_; lean_object* v___x_294_; lean_object* v___f_295_; lean_object* v___f_296_; lean_object* v___f_297_; lean_object* v___x_299_; 
v___f_290_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__0));
v___f_291_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___closed__1));
lean_inc_ref(v_toFunctor_283_);
v___f_292_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_292_, 0, v_toFunctor_283_);
v___f_293_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_293_, 0, v_toFunctor_283_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___f_292_);
lean_ctor_set(v___x_294_, 1, v___f_293_);
v___f_295_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_295_, 0, v_toSeqRight_286_);
v___f_296_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_296_, 0, v_toSeqLeft_285_);
v___f_297_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_297_, 0, v_toSeq_284_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 4, v___f_295_);
lean_ctor_set(v___x_288_, 3, v___f_296_);
lean_ctor_set(v___x_288_, 2, v___f_297_);
lean_ctor_set(v___x_288_, 1, v___f_290_);
lean_ctor_set(v___x_288_, 0, v___x_294_);
v___x_299_ = v___x_288_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v___f_290_);
lean_ctor_set(v_reuseFailAlloc_307_, 2, v___f_297_);
lean_ctor_set(v_reuseFailAlloc_307_, 3, v___f_296_);
lean_ctor_set(v_reuseFailAlloc_307_, 4, v___f_295_);
v___x_299_ = v_reuseFailAlloc_307_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_301_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 1, v___f_291_);
lean_ctor_set(v___x_281_, 0, v___x_299_);
v___x_301_ = v___x_281_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v___f_291_);
v___x_301_ = v_reuseFailAlloc_306_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_17315__overap_304_; lean_object* v___x_305_; 
v___x_302_ = lean_box(0);
v___x_303_ = l_instInhabitedOfMonad___redArg(v___x_301_, v___x_302_);
v___x_17315__overap_304_ = lean_panic_fn_borrowed(v___x_303_, v_msg_219_);
lean_dec(v___x_303_);
lean_inc(v___y_226_);
lean_inc_ref(v___y_225_);
lean_inc(v___y_224_);
lean_inc_ref(v___y_223_);
lean_inc_ref(v___y_222_);
lean_inc(v___y_221_);
lean_inc_ref(v___y_220_);
v___x_305_ = lean_apply_8(v___x_17315__overap_304_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, lean_box(0));
return v___x_305_;
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
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0___boxed(lean_object* v_msg_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0(v_msg_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
return v_res_333_;
}
}
static lean_object* _init_l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__3(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_337_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__2));
v___x_338_ = lean_unsigned_to_nat(11u);
v___x_339_ = lean_unsigned_to_nat(122u);
v___x_340_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__1));
v___x_341_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__0));
v___x_342_ = l_mkPanicMessageWithDecl(v___x_341_, v___x_340_, v___x_339_, v___x_338_, v___x_337_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0(lean_object* v_constName_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_352_; lean_object* v_env_356_; uint8_t v___x_357_; lean_object* v___x_358_; 
v___x_352_ = lean_st_ref_get(v___y_350_);
v_env_356_ = lean_ctor_get(v___x_352_, 0);
lean_inc_ref(v_env_356_);
lean_dec(v___x_352_);
v___x_357_ = 0;
v___x_358_ = l_Lean_Environment_findAsync_x3f(v_env_356_, v_constName_343_, v___x_357_);
if (lean_obj_tag(v___x_358_) == 1)
{
lean_object* v_val_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_378_; 
v_val_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_378_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_378_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_val_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_378_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
uint8_t v_kind_363_; 
v_kind_363_ = lean_ctor_get_uint8(v_val_359_, sizeof(void*)*3);
if (v_kind_363_ == 6)
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_359_);
if (lean_obj_tag(v___x_364_) == 6)
{
lean_object* v_val_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_375_; 
v_val_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_375_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_375_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_val_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_375_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v_val_365_);
v___x_370_ = v___x_361_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_val_365_);
v___x_370_ = v_reuseFailAlloc_374_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_372_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set_tag(v___x_367_, 0);
lean_ctor_set(v___x_367_, 0, v___x_370_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; 
lean_dec_ref(v___x_364_);
lean_del_object(v___x_361_);
v___x_376_ = lean_obj_once(&l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__3, &l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__3_once, _init_l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___closed__3);
v___x_377_ = l_panic___at___00Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0_spec__0(v___x_376_, v___y_344_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
return v___x_377_;
}
}
else
{
lean_del_object(v___x_361_);
lean_dec(v_val_359_);
goto v___jp_353_;
}
}
}
else
{
lean_dec(v___x_358_);
goto v___jp_353_;
}
v___jp_353_:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_box(0);
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0___boxed(lean_object* v_constName_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0(v_constName_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
return v_res_388_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__4(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__3));
v___x_395_ = l_Lean_stringToMessageData(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__5));
v___x_398_ = l_Lean_stringToMessageData(v___x_397_);
return v___x_398_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__8(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__7));
v___x_401_ = l_Lean_stringToMessageData(v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__12(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_405_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__11));
v___x_406_ = lean_unsigned_to_nat(6u);
v___x_407_ = lean_unsigned_to_nat(54u);
v___x_408_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__10));
v___x_409_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__9));
v___x_410_ = l_mkPanicMessageWithDecl(v___x_409_, v___x_408_, v___x_407_, v___x_406_, v___x_405_);
return v___x_410_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__14(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__13));
v___x_413_ = l_Lean_stringToMessageData(v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(lean_object* v_e_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
uint8_t v_mustInline_432_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; uint8_t v___y_438_; uint8_t v___y_439_; lean_object* v___y_440_; uint8_t v___y_441_; lean_object* v___y_442_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___y_470_; uint8_t v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; uint8_t v___y_475_; uint8_t v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; uint8_t v___y_503_; lean_object* v___y_504_; lean_object* v___y_505_; lean_object* v___y_506_; uint8_t v___y_507_; uint8_t v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; uint8_t v___y_514_; lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; uint8_t v___y_520_; lean_object* v___y_521_; uint8_t v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; uint8_t v___y_525_; uint8_t v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; uint8_t v___y_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___y_533_; lean_object* v___y_534_; uint8_t v___y_535_; lean_object* v___y_536_; uint8_t v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; uint8_t v___y_540_; uint8_t v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; uint8_t v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v___y_550_; uint8_t v___y_551_; lean_object* v___y_552_; uint8_t v___y_553_; uint8_t v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; uint8_t v___y_557_; uint8_t v___y_558_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; uint8_t v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_579_; uint8_t v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; uint8_t v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; uint8_t v___y_586_; uint8_t v___y_587_; lean_object* v___y_588_; lean_object* v___y_589_; lean_object* v___y_590_; uint8_t v___y_591_; lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; uint8_t v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; uint8_t v___y_605_; uint8_t v___y_606_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; uint8_t v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; uint8_t v___y_613_; lean_object* v___y_614_; lean_object* v___y_615_; uint8_t v___y_616_; lean_object* v_declName_646_; lean_object* v_us_647_; lean_object* v_args_648_; uint8_t v_mustInline_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; uint8_t v___y_713_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; uint8_t v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v_fvarId_794_; lean_object* v_args_795_; uint8_t v_mustInline_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v_e_831_; uint8_t v_mustInline_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; 
v_mustInline_432_ = 0;
if (lean_obj_tag(v_e_414_) == 3)
{
lean_object* v_declName_847_; 
v_declName_847_ = lean_ctor_get(v_e_414_, 0);
lean_inc(v_declName_847_);
if (lean_obj_tag(v_declName_847_) == 1)
{
lean_object* v_pre_848_; 
v_pre_848_ = lean_ctor_get(v_declName_847_, 0);
if (lean_obj_tag(v_pre_848_) == 0)
{
lean_object* v_us_849_; lean_object* v_args_850_; lean_object* v_str_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v_us_849_ = lean_ctor_get(v_e_414_, 1);
lean_inc(v_us_849_);
v_args_850_ = lean_ctor_get(v_e_414_, 2);
lean_inc_ref(v_args_850_);
lean_dec_ref_known(v_e_414_, 3);
v_str_851_ = lean_ctor_get(v_declName_847_, 1);
v___x_852_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__1));
v___x_853_ = lean_string_dec_eq(v_str_851_, v___x_852_);
if (v___x_853_ == 0)
{
v_declName_646_ = v_declName_847_;
v_us_647_ = v_us_849_;
v_args_648_ = v_args_850_;
v_mustInline_649_ = v_mustInline_432_;
v___y_650_ = v_a_415_;
v___y_651_ = v_a_416_;
v___y_652_ = v_a_417_;
v___y_653_ = v_a_418_;
v___y_654_ = v_a_419_;
v___y_655_ = v_a_420_;
v___y_656_ = v_a_421_;
goto v___jp_645_;
}
else
{
lean_object* v___x_854_; lean_object* v___x_855_; uint8_t v_mustInline_856_; 
v___x_854_ = lean_array_get_size(v_args_850_);
v___x_855_ = lean_unsigned_to_nat(2u);
v_mustInline_856_ = lean_nat_dec_eq(v___x_854_, v___x_855_);
if (v_mustInline_856_ == 0)
{
v_declName_646_ = v_declName_847_;
v_us_647_ = v_us_849_;
v_args_648_ = v_args_850_;
v_mustInline_649_ = v_mustInline_432_;
v___y_650_ = v_a_415_;
v___y_651_ = v_a_416_;
v___y_652_ = v_a_417_;
v___y_653_ = v_a_418_;
v___y_654_ = v_a_419_;
v___y_655_ = v_a_420_;
v___y_656_ = v_a_421_;
goto v___jp_645_;
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = lean_unsigned_to_nat(1u);
v___x_858_ = lean_array_fget_borrowed(v_args_850_, v___x_857_);
if (lean_obj_tag(v___x_858_) == 1)
{
lean_object* v_fvarId_859_; uint8_t v___x_860_; lean_object* v___x_861_; 
lean_inc_ref(v___x_858_);
lean_dec_ref(v_args_850_);
lean_dec(v_us_849_);
lean_dec_ref_known(v_declName_847_, 2);
v_fvarId_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc_n(v_fvarId_859_, 2);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = 0;
v___x_861_ = l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg(v___x_860_, v_fvarId_859_, v_a_419_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_861_, 1);
if (lean_obj_tag(v_a_862_) == 1)
{
lean_object* v_val_863_; lean_object* v_fvarId_864_; lean_object* v___x_865_; 
lean_dec(v_fvarId_859_);
v_val_863_ = lean_ctor_get(v_a_862_, 0);
lean_inc(v_val_863_);
lean_dec_ref_known(v_a_862_, 1);
v_fvarId_864_ = lean_ctor_get(v_val_863_, 0);
lean_inc(v_fvarId_864_);
lean_dec(v_val_863_);
v___x_865_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__2));
v_fvarId_794_ = v_fvarId_864_;
v_args_795_ = v___x_865_;
v_mustInline_796_ = v_mustInline_856_;
v___y_797_ = v_a_416_;
v___y_798_ = v_a_418_;
v___y_799_ = v_a_419_;
v___y_800_ = v_a_420_;
v___y_801_ = v_a_421_;
goto v___jp_793_;
}
else
{
lean_object* v___x_866_; 
lean_dec(v_a_862_);
v___x_866_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_860_, v_fvarId_859_, v_a_419_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
if (lean_obj_tag(v_a_867_) == 1)
{
lean_object* v_val_868_; lean_object* v_value_869_; 
lean_dec(v_fvarId_859_);
v_val_868_ = lean_ctor_get(v_a_867_, 0);
lean_inc(v_val_868_);
lean_dec_ref_known(v_a_867_, 1);
v_value_869_ = lean_ctor_get(v_val_868_, 3);
lean_inc(v_value_869_);
lean_dec(v_val_868_);
if (lean_obj_tag(v_value_869_) == 3)
{
lean_object* v_declName_870_; lean_object* v_us_871_; lean_object* v_args_872_; lean_object* v___x_873_; 
v_declName_870_ = lean_ctor_get(v_value_869_, 0);
lean_inc_n(v_declName_870_, 2);
v_us_871_ = lean_ctor_get(v_value_869_, 1);
lean_inc(v_us_871_);
v_args_872_ = lean_ctor_get(v_value_869_, 2);
lean_inc_ref(v_args_872_);
lean_dec_ref_known(v_value_869_, 3);
v___x_873_ = l_Lean_isCtor_x3f___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__0(v_declName_870_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref_known(v___x_873_, 1);
if (lean_obj_tag(v_a_874_) == 0)
{
lean_object* v___x_875_; 
v___x_875_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_418_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; uint8_t v___x_877_; lean_object* v___x_878_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_875_, 1);
v___x_877_ = lean_unbox(v_a_876_);
lean_dec(v_a_876_);
v___x_878_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_870_, v___x_877_, v_a_421_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_878_, 1);
if (lean_obj_tag(v_a_879_) == 1)
{
lean_dec_ref_known(v_a_879_, 1);
v_declName_646_ = v_declName_870_;
v_us_647_ = v_us_871_;
v_args_648_ = v_args_872_;
v_mustInline_649_ = v_mustInline_856_;
v___y_650_ = v_a_415_;
v___y_651_ = v_a_416_;
v___y_652_ = v_a_417_;
v___y_653_ = v_a_418_;
v___y_654_ = v_a_419_;
v___y_655_ = v_a_420_;
v___y_656_ = v_a_421_;
goto v___jp_645_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec(v_a_879_);
lean_dec_ref(v_args_872_);
lean_dec(v_us_871_);
v___x_880_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__4, &l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__4_once, _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__4);
v___x_881_ = l_Lean_MessageData_ofName(v_declName_870_);
v___x_882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6, &l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6_once, _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6);
v___x_884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_882_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg(v___x_884_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
v_a_886_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_885_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_885_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
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
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec_ref(v_args_872_);
lean_dec(v_us_871_);
lean_dec(v_declName_870_);
v_a_894_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_878_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_878_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec_ref(v_args_872_);
lean_dec(v_us_871_);
lean_dec(v_declName_870_);
v_a_902_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_875_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_875_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
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
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec_ref_known(v_a_874_, 1);
lean_dec_ref(v_args_872_);
lean_dec(v_us_871_);
v___x_910_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__8, &l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__8_once, _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__8);
v___x_911_ = l_Lean_MessageData_ofName(v_declName_870_);
v___x_912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_910_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6, &l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6_once, _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__6);
v___x_914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg(v___x_914_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
v_a_916_ = lean_ctor_get(v___x_915_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_915_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_915_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec_ref(v_args_872_);
lean_dec(v_us_871_);
lean_dec(v_declName_870_);
v_a_924_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_873_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_873_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
else
{
v_e_831_ = v_value_869_;
v_mustInline_832_ = v_mustInline_856_;
v___y_833_ = v_a_415_;
v___y_834_ = v_a_416_;
v___y_835_ = v_a_417_;
v___y_836_ = v_a_418_;
v___y_837_ = v_a_419_;
v___y_838_ = v_a_420_;
v___y_839_ = v_a_421_;
goto v___jp_830_;
}
}
else
{
lean_object* v___x_932_; 
lean_dec(v_a_867_);
v___x_932_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v___x_860_, v_fvarId_859_, v_a_419_);
lean_dec(v_fvarId_859_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_932_, 1);
if (lean_obj_tag(v_a_933_) == 0)
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__12, &l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__12_once, _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__12);
v___x_935_ = l_panic___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__2(v___x_934_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
return v___x_935_;
}
else
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec_ref_known(v_a_933_, 1);
v___x_936_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__14, &l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__14_once, _init_l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__14);
v___x_937_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_Simp_inlineCandidate_x3f_spec__1___redArg(v___x_936_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
v_a_938_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_937_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_937_);
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
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
v_a_946_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_932_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_932_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_fvarId_859_);
v_a_954_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_866_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_866_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec(v_fvarId_859_);
v_a_962_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_861_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_861_);
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
else
{
v_declName_646_ = v_declName_847_;
v_us_647_ = v_us_849_;
v_args_648_ = v_args_850_;
v_mustInline_649_ = v_mustInline_432_;
v___y_650_ = v_a_415_;
v___y_651_ = v_a_416_;
v___y_652_ = v_a_417_;
v___y_653_ = v_a_418_;
v___y_654_ = v_a_419_;
v___y_655_ = v_a_420_;
v___y_656_ = v_a_421_;
goto v___jp_645_;
}
}
}
}
else
{
lean_object* v_us_970_; lean_object* v_args_971_; 
v_us_970_ = lean_ctor_get(v_e_414_, 1);
lean_inc(v_us_970_);
v_args_971_ = lean_ctor_get(v_e_414_, 2);
lean_inc_ref(v_args_971_);
lean_dec_ref_known(v_e_414_, 3);
v_declName_646_ = v_declName_847_;
v_us_647_ = v_us_970_;
v_args_648_ = v_args_971_;
v_mustInline_649_ = v_mustInline_432_;
v___y_650_ = v_a_415_;
v___y_651_ = v_a_416_;
v___y_652_ = v_a_417_;
v___y_653_ = v_a_418_;
v___y_654_ = v_a_419_;
v___y_655_ = v_a_420_;
v___y_656_ = v_a_421_;
goto v___jp_645_;
}
}
else
{
lean_object* v_us_972_; lean_object* v_args_973_; 
v_us_972_ = lean_ctor_get(v_e_414_, 1);
lean_inc(v_us_972_);
v_args_973_ = lean_ctor_get(v_e_414_, 2);
lean_inc_ref(v_args_973_);
lean_dec_ref_known(v_e_414_, 3);
v_declName_646_ = v_declName_847_;
v_us_647_ = v_us_972_;
v_args_648_ = v_args_973_;
v_mustInline_649_ = v_mustInline_432_;
v___y_650_ = v_a_415_;
v___y_651_ = v_a_416_;
v___y_652_ = v_a_417_;
v___y_653_ = v_a_418_;
v___y_654_ = v_a_419_;
v___y_655_ = v_a_420_;
v___y_656_ = v_a_421_;
goto v___jp_645_;
}
}
else
{
v_e_831_ = v_e_414_;
v_mustInline_832_ = v_mustInline_432_;
v___y_833_ = v_a_415_;
v___y_834_ = v_a_416_;
v___y_835_ = v_a_417_;
v___y_836_ = v_a_418_;
v___y_837_ = v_a_419_;
v___y_838_ = v_a_420_;
v___y_839_ = v_a_421_;
goto v___jp_830_;
}
v___jp_423_:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_box(0);
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
return v___x_425_;
}
v___jp_426_:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = lean_box(0);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
return v___x_428_;
}
v___jp_429_:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_box(0);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
v___jp_433_:
{
lean_object* v_levelParams_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_levelParams_443_ = lean_ctor_get(v___y_435_, 1);
lean_inc(v_levelParams_443_);
lean_dec_ref(v___y_435_);
lean_inc_n(v___y_437_, 2);
lean_inc_ref(v___y_436_);
v___x_444_ = l_Lean_Compiler_LCNF_Decl_instantiateParamsLevelParams(v___y_441_, v___y_436_, v___y_437_);
v___x_445_ = l_Lean_Compiler_LCNF_Code_instantiateValueLevelParams(v___y_434_, v_levelParams_443_, v___y_437_);
v___x_446_ = l_Lean_Compiler_LCNF_Decl_instantiateTypeLevelParams___redArg(v___y_436_, v___y_437_);
v___x_447_ = l_Lean_Compiler_LCNF_Simp_incInline___redArg(v___y_442_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_456_; 
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_456_ == 0)
{
lean_object* v_unused_457_; 
v_unused_457_ = lean_ctor_get(v___x_447_, 0);
lean_dec(v_unused_457_);
v___x_449_ = v___x_447_;
v_isShared_450_ = v_isSharedCheck_456_;
goto v_resetjp_448_;
}
else
{
lean_dec(v___x_447_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_456_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_451_ = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(v___x_451_, 0, v___x_444_);
lean_ctor_set(v___x_451_, 1, v___x_445_);
lean_ctor_set(v___x_451_, 2, v___x_446_);
lean_ctor_set(v___x_451_, 3, v___y_440_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*4, v_mustInline_432_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*4 + 1, v___y_438_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*4 + 2, v___y_439_);
v___x_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_452_);
v___x_454_ = v___x_449_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_dec_ref(v___x_446_);
lean_dec_ref(v___x_445_);
lean_dec_ref(v___x_444_);
lean_dec_ref(v___y_440_);
v_a_458_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_447_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_447_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
v___jp_466_:
{
if (v___y_475_ == 0)
{
v___y_434_ = v___y_473_;
v___y_435_ = v___y_474_;
v___y_436_ = v___y_467_;
v___y_437_ = v___y_469_;
v___y_438_ = v___y_475_;
v___y_439_ = v___y_471_;
v___y_440_ = v___y_472_;
v___y_441_ = v___y_476_;
v___y_442_ = v___y_478_;
goto v___jp_433_;
}
else
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_Compiler_LCNF_Decl_isCasesOnParam_x3f___redArg(v___y_467_);
if (lean_obj_tag(v___x_479_) == 1)
{
lean_object* v_val_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_val_480_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_val_480_);
lean_dec_ref_known(v___x_479_, 1);
v___x_481_ = lean_array_get_size(v___y_472_);
v___x_482_ = lean_nat_dec_lt(v_val_480_, v___x_481_);
if (v___x_482_ == 0)
{
lean_dec(v_val_480_);
lean_dec_ref(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_467_);
goto v___jp_429_;
}
else
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_array_get_borrowed(v___y_470_, v___y_472_, v_val_480_);
lean_dec(v_val_480_);
v___x_484_ = l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(v___x_483_, v___y_468_, v___y_477_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; uint8_t v___x_486_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v___x_484_, 1);
v___x_486_ = lean_unbox(v_a_485_);
lean_dec(v_a_485_);
if (v___x_486_ == 0)
{
lean_dec_ref(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_467_);
goto v___jp_429_;
}
else
{
v___y_434_ = v___y_473_;
v___y_435_ = v___y_474_;
v___y_436_ = v___y_467_;
v___y_437_ = v___y_469_;
v___y_438_ = v___y_475_;
v___y_439_ = v___y_471_;
v___y_440_ = v___y_472_;
v___y_441_ = v___y_476_;
v___y_442_ = v___y_478_;
goto v___jp_433_;
}
}
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
lean_dec_ref(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_467_);
v_a_487_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_484_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_484_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
else
{
lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec(v___x_479_);
lean_dec_ref(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_467_);
v___x_495_ = lean_box(0);
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
}
}
v___jp_497_:
{
lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_511_ = lean_array_get_size(v___y_504_);
v___x_512_ = lean_nat_dec_lt(v___x_511_, v___y_500_);
lean_dec(v___y_500_);
if (v___x_512_ == 0)
{
v___y_467_ = v___y_498_;
v___y_468_ = v___y_499_;
v___y_469_ = v___y_501_;
v___y_470_ = v___y_502_;
v___y_471_ = v___y_503_;
v___y_472_ = v___y_504_;
v___y_473_ = v___y_505_;
v___y_474_ = v___y_506_;
v___y_475_ = v___y_507_;
v___y_476_ = v___y_508_;
v___y_477_ = v___y_509_;
v___y_478_ = v___y_510_;
goto v___jp_466_;
}
else
{
lean_dec_ref(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_498_);
goto v___jp_429_;
}
}
v___jp_513_:
{
if (v___y_522_ == 0)
{
v___y_498_ = v___y_515_;
v___y_499_ = v___y_516_;
v___y_500_ = v___y_517_;
v___y_501_ = v___y_518_;
v___y_502_ = v___y_519_;
v___y_503_ = v___y_520_;
v___y_504_ = v___y_521_;
v___y_505_ = v___y_523_;
v___y_506_ = v___y_524_;
v___y_507_ = v___y_525_;
v___y_508_ = v___y_526_;
v___y_509_ = v___y_527_;
v___y_510_ = v___y_528_;
goto v___jp_497_;
}
else
{
if (v___y_514_ == 0)
{
lean_dec(v___y_517_);
v___y_467_ = v___y_515_;
v___y_468_ = v___y_516_;
v___y_469_ = v___y_518_;
v___y_470_ = v___y_519_;
v___y_471_ = v___y_520_;
v___y_472_ = v___y_521_;
v___y_473_ = v___y_523_;
v___y_474_ = v___y_524_;
v___y_475_ = v___y_525_;
v___y_476_ = v___y_526_;
v___y_477_ = v___y_527_;
v___y_478_ = v___y_528_;
goto v___jp_466_;
}
else
{
v___y_498_ = v___y_515_;
v___y_499_ = v___y_516_;
v___y_500_ = v___y_517_;
v___y_501_ = v___y_518_;
v___y_502_ = v___y_519_;
v___y_503_ = v___y_520_;
v___y_504_ = v___y_521_;
v___y_505_ = v___y_523_;
v___y_506_ = v___y_524_;
v___y_507_ = v___y_525_;
v___y_508_ = v___y_526_;
v___y_509_ = v___y_527_;
v___y_510_ = v___y_528_;
goto v___jp_497_;
}
}
}
v___jp_529_:
{
if (v___y_530_ == 0)
{
v___y_467_ = v___y_531_;
v___y_468_ = v___y_532_;
v___y_469_ = v___y_533_;
v___y_470_ = v___y_534_;
v___y_471_ = v___y_535_;
v___y_472_ = v___y_536_;
v___y_473_ = v___y_538_;
v___y_474_ = v___y_539_;
v___y_475_ = v___y_540_;
v___y_476_ = v___y_541_;
v___y_477_ = v___y_542_;
v___y_478_ = v___y_543_;
goto v___jp_466_;
}
else
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v___y_531_);
v___y_514_ = v___y_530_;
v___y_515_ = v___y_531_;
v___y_516_ = v___y_532_;
v___y_517_ = v___x_544_;
v___y_518_ = v___y_533_;
v___y_519_ = v___y_534_;
v___y_520_ = v___y_535_;
v___y_521_ = v___y_536_;
v___y_522_ = v___y_537_;
v___y_523_ = v___y_538_;
v___y_524_ = v___y_539_;
v___y_525_ = v___y_540_;
v___y_526_ = v___y_541_;
v___y_527_ = v___y_542_;
v___y_528_ = v___y_543_;
goto v___jp_513_;
}
}
v___jp_545_:
{
if (lean_obj_tag(v___y_561_) == 0)
{
lean_object* v_a_562_; uint8_t v___x_563_; 
v_a_562_ = lean_ctor_get(v___y_561_, 0);
lean_inc(v_a_562_);
lean_dec_ref_known(v___y_561_, 1);
v___x_563_ = lean_unbox(v_a_562_);
lean_dec(v_a_562_);
if (v___x_563_ == 0)
{
lean_dec_ref(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_547_);
goto v___jp_426_;
}
else
{
if (v___y_553_ == 0)
{
lean_object* v___x_564_; 
v___x_564_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v___y_547_);
v___y_514_ = v___y_546_;
v___y_515_ = v___y_547_;
v___y_516_ = v___y_548_;
v___y_517_ = v___x_564_;
v___y_518_ = v___y_549_;
v___y_519_ = v___y_550_;
v___y_520_ = v___y_551_;
v___y_521_ = v___y_552_;
v___y_522_ = v___y_554_;
v___y_523_ = v___y_555_;
v___y_524_ = v___y_556_;
v___y_525_ = v___y_557_;
v___y_526_ = v___y_558_;
v___y_527_ = v___y_559_;
v___y_528_ = v___y_560_;
goto v___jp_513_;
}
else
{
v___y_530_ = v___y_546_;
v___y_531_ = v___y_547_;
v___y_532_ = v___y_548_;
v___y_533_ = v___y_549_;
v___y_534_ = v___y_550_;
v___y_535_ = v___y_551_;
v___y_536_ = v___y_552_;
v___y_537_ = v___y_554_;
v___y_538_ = v___y_555_;
v___y_539_ = v___y_556_;
v___y_540_ = v___y_557_;
v___y_541_ = v___y_558_;
v___y_542_ = v___y_559_;
v___y_543_ = v___y_560_;
goto v___jp_529_;
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec_ref(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_547_);
v_a_565_ = lean_ctor_get(v___y_561_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___y_561_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___y_561_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___y_561_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
v___jp_573_:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_box(0);
lean_inc(v___y_592_);
lean_inc_ref(v___y_582_);
lean_inc(v___y_575_);
lean_inc_ref(v___y_590_);
lean_inc_ref(v___y_577_);
lean_inc(v___y_593_);
lean_inc_ref(v___y_588_);
v___x_595_ = lean_apply_9(v___y_589_, v___x_594_, v___y_588_, v___y_593_, v___y_577_, v___y_590_, v___y_575_, v___y_582_, v___y_592_, lean_box(0));
v___y_546_ = v___y_574_;
v___y_547_ = v___y_576_;
v___y_548_ = v___y_575_;
v___y_549_ = v___y_578_;
v___y_550_ = v___y_579_;
v___y_551_ = v___y_580_;
v___y_552_ = v___y_581_;
v___y_553_ = v___y_583_;
v___y_554_ = v___y_586_;
v___y_555_ = v___y_585_;
v___y_556_ = v___y_584_;
v___y_557_ = v___y_587_;
v___y_558_ = v___y_591_;
v___y_559_ = v___y_592_;
v___y_560_ = v___y_593_;
v___y_561_ = v___x_595_;
goto v___jp_545_;
}
v___jp_596_:
{
if (v___y_605_ == 0)
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_Compiler_LCNF_inBasePhase___redArg(v___y_612_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; uint8_t v___x_619_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
v___x_619_ = lean_unbox(v_a_618_);
lean_dec(v_a_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_box(0);
lean_inc(v___y_614_);
lean_inc_ref(v___y_604_);
lean_inc(v___y_598_);
lean_inc_ref(v___y_612_);
lean_inc_ref(v___y_599_);
lean_inc(v___y_615_);
lean_inc_ref(v___y_609_);
v___x_621_ = lean_apply_9(v___y_611_, v___x_620_, v___y_609_, v___y_615_, v___y_599_, v___y_612_, v___y_598_, v___y_604_, v___y_614_, lean_box(0));
v___y_546_ = v___y_616_;
v___y_547_ = v___y_597_;
v___y_548_ = v___y_598_;
v___y_549_ = v___y_600_;
v___y_550_ = v___y_601_;
v___y_551_ = v___y_602_;
v___y_552_ = v___y_603_;
v___y_553_ = v___y_605_;
v___y_554_ = v___y_606_;
v___y_555_ = v___y_607_;
v___y_556_ = v___y_608_;
v___y_557_ = v___y_610_;
v___y_558_ = v___y_613_;
v___y_559_ = v___y_614_;
v___y_560_ = v___y_615_;
v___y_561_ = v___x_621_;
goto v___jp_545_;
}
else
{
lean_object* v_name_622_; lean_object* v___x_623_; 
v_name_622_ = lean_ctor_get(v___y_608_, 0);
v___x_623_ = l_Lean_Meta_isInstance___redArg(v_name_622_, v___y_614_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; uint8_t v___x_625_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_a_624_);
lean_dec_ref_known(v___x_623_, 1);
v___x_625_ = lean_unbox(v_a_624_);
lean_dec(v_a_624_);
if (v___x_625_ == 0)
{
if (lean_obj_tag(v_name_622_) == 1)
{
lean_object* v_str_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v_str_626_ = lean_ctor_get(v_name_622_, 1);
v___x_627_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___closed__0));
v___x_628_ = lean_string_dec_eq(v_str_626_, v___x_627_);
if (v___x_628_ == 0)
{
v___y_574_ = v___y_616_;
v___y_575_ = v___y_598_;
v___y_576_ = v___y_597_;
v___y_577_ = v___y_599_;
v___y_578_ = v___y_600_;
v___y_579_ = v___y_601_;
v___y_580_ = v___y_602_;
v___y_581_ = v___y_603_;
v___y_582_ = v___y_604_;
v___y_583_ = v___y_605_;
v___y_584_ = v___y_608_;
v___y_585_ = v___y_607_;
v___y_586_ = v___y_606_;
v___y_587_ = v___y_610_;
v___y_588_ = v___y_609_;
v___y_589_ = v___y_611_;
v___y_590_ = v___y_612_;
v___y_591_ = v___y_613_;
v___y_592_ = v___y_614_;
v___y_593_ = v___y_615_;
goto v___jp_573_;
}
else
{
lean_dec_ref(v___y_611_);
lean_dec_ref(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_597_);
goto v___jp_426_;
}
}
else
{
v___y_574_ = v___y_616_;
v___y_575_ = v___y_598_;
v___y_576_ = v___y_597_;
v___y_577_ = v___y_599_;
v___y_578_ = v___y_600_;
v___y_579_ = v___y_601_;
v___y_580_ = v___y_602_;
v___y_581_ = v___y_603_;
v___y_582_ = v___y_604_;
v___y_583_ = v___y_605_;
v___y_584_ = v___y_608_;
v___y_585_ = v___y_607_;
v___y_586_ = v___y_606_;
v___y_587_ = v___y_610_;
v___y_588_ = v___y_609_;
v___y_589_ = v___y_611_;
v___y_590_ = v___y_612_;
v___y_591_ = v___y_613_;
v___y_592_ = v___y_614_;
v___y_593_ = v___y_615_;
goto v___jp_573_;
}
}
else
{
lean_dec_ref(v___y_611_);
lean_dec_ref(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_597_);
goto v___jp_426_;
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec_ref(v___y_611_);
lean_dec_ref(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_597_);
v_a_629_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_623_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_623_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v___y_611_);
lean_dec_ref(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_597_);
v_a_637_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_617_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_617_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
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
lean_dec_ref(v___y_611_);
v___y_530_ = v___y_616_;
v___y_531_ = v___y_597_;
v___y_532_ = v___y_598_;
v___y_533_ = v___y_600_;
v___y_534_ = v___y_601_;
v___y_535_ = v___y_602_;
v___y_536_ = v___y_603_;
v___y_537_ = v___y_606_;
v___y_538_ = v___y_607_;
v___y_539_ = v___y_608_;
v___y_540_ = v___y_610_;
v___y_541_ = v___y_613_;
v___y_542_ = v___y_614_;
v___y_543_ = v___y_615_;
goto v___jp_529_;
}
}
v___jp_645_:
{
lean_object* v_config_657_; uint8_t v_inlineDefs_658_; 
v_config_657_ = lean_ctor_get(v___y_650_, 1);
v_inlineDefs_658_ = lean_ctor_get_uint8(v_config_657_, 3);
if (v_inlineDefs_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; 
lean_dec_ref(v_args_648_);
lean_dec(v_us_647_);
lean_dec(v_declName_646_);
v___x_659_ = lean_box(0);
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
else
{
uint8_t v_inlinePartial_661_; lean_object* v___x_662_; 
v_inlinePartial_661_ = lean_ctor_get_uint8(v_config_657_, 1);
v___x_662_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_653_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; uint8_t v___x_664_; lean_object* v___x_665_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_663_);
lean_dec_ref_known(v___x_662_, 1);
v___x_664_ = lean_unbox(v_a_663_);
v___x_665_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_646_, v___x_664_, v___y_655_, v___y_656_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_687_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_687_ == 0)
{
v___x_668_ = v___x_665_;
v_isShared_669_ = v_isSharedCheck_687_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_687_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
if (lean_obj_tag(v_a_666_) == 1)
{
lean_object* v_val_670_; uint8_t v___x_671_; uint8_t v___x_672_; 
v_val_670_ = lean_ctor_get(v_a_666_, 0);
lean_inc(v_val_670_);
lean_dec_ref_known(v_a_666_, 1);
v___x_671_ = lean_unbox(v_a_663_);
lean_dec(v_a_663_);
v___x_672_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_671_);
if (v___x_672_ == 0)
{
lean_object* v_value_673_; 
v_value_673_ = lean_ctor_get(v_val_670_, 1);
if (lean_obj_tag(v_value_673_) == 0)
{
lean_object* v_toSignature_674_; uint8_t v_recursive_675_; lean_object* v_code_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___f_679_; uint8_t v___x_680_; 
lean_del_object(v___x_668_);
v_toSignature_674_ = lean_ctor_get(v_val_670_, 0);
lean_inc_ref(v_toSignature_674_);
v_recursive_675_ = lean_ctor_get_uint8(v_val_670_, sizeof(void*)*3);
v_code_676_ = lean_ctor_get(v_value_673_, 0);
lean_inc_ref_n(v_code_676_, 2);
v___x_677_ = lean_box(v_mustInline_432_);
v___x_678_ = lean_box(v_inlineDefs_658_);
lean_inc(v_val_670_);
v___f_679_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___lam__0___boxed), 13, 4);
lean_closure_set(v___f_679_, 0, v_val_670_);
lean_closure_set(v___f_679_, 1, v_code_676_);
lean_closure_set(v___f_679_, 2, v___x_677_);
lean_closure_set(v___f_679_, 3, v___x_678_);
v___x_680_ = l_Lean_Compiler_LCNF_Decl_inlineIfReduceAttr___redArg(v_val_670_);
if (v___x_680_ == 0)
{
if (v_recursive_675_ == 0)
{
lean_object* v___x_681_; 
v___x_681_ = lean_box(0);
v___y_597_ = v_val_670_;
v___y_598_ = v___y_654_;
v___y_599_ = v___y_652_;
v___y_600_ = v_us_647_;
v___y_601_ = v___x_681_;
v___y_602_ = v_recursive_675_;
v___y_603_ = v_args_648_;
v___y_604_ = v___y_655_;
v___y_605_ = v_mustInline_649_;
v___y_606_ = v_inlinePartial_661_;
v___y_607_ = v_code_676_;
v___y_608_ = v_toSignature_674_;
v___y_609_ = v___y_650_;
v___y_610_ = v___x_680_;
v___y_611_ = v___f_679_;
v___y_612_ = v___y_653_;
v___y_613_ = v___x_672_;
v___y_614_ = v___y_656_;
v___y_615_ = v___y_651_;
v___y_616_ = v_recursive_675_;
goto v___jp_596_;
}
else
{
lean_dec_ref(v___f_679_);
lean_dec_ref(v_code_676_);
lean_dec_ref(v_toSignature_674_);
lean_dec(v_val_670_);
lean_dec_ref(v_args_648_);
lean_dec(v_us_647_);
goto v___jp_426_;
}
}
else
{
lean_object* v___x_682_; 
v___x_682_ = lean_box(0);
v___y_597_ = v_val_670_;
v___y_598_ = v___y_654_;
v___y_599_ = v___y_652_;
v___y_600_ = v_us_647_;
v___y_601_ = v___x_682_;
v___y_602_ = v_recursive_675_;
v___y_603_ = v_args_648_;
v___y_604_ = v___y_655_;
v___y_605_ = v_mustInline_649_;
v___y_606_ = v_inlinePartial_661_;
v___y_607_ = v_code_676_;
v___y_608_ = v_toSignature_674_;
v___y_609_ = v___y_650_;
v___y_610_ = v___x_680_;
v___y_611_ = v___f_679_;
v___y_612_ = v___y_653_;
v___y_613_ = v___x_672_;
v___y_614_ = v___y_656_;
v___y_615_ = v___y_651_;
v___y_616_ = v_mustInline_432_;
goto v___jp_596_;
}
}
else
{
lean_object* v___x_683_; lean_object* v___x_685_; 
lean_dec(v_val_670_);
lean_dec_ref(v_args_648_);
lean_dec(v_us_647_);
v___x_683_ = lean_box(0);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_683_);
v___x_685_ = v___x_668_;
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
}
else
{
lean_dec(v_val_670_);
lean_del_object(v___x_668_);
lean_dec_ref(v_args_648_);
lean_dec(v_us_647_);
goto v___jp_423_;
}
}
else
{
lean_del_object(v___x_668_);
lean_dec(v_a_666_);
lean_dec(v_a_663_);
lean_dec_ref(v_args_648_);
lean_dec(v_us_647_);
goto v___jp_423_;
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec(v_a_663_);
lean_dec_ref(v_args_648_);
lean_dec(v_us_647_);
v_a_688_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_665_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_665_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref(v_args_648_);
lean_dec(v_us_647_);
lean_dec(v_declName_646_);
v_a_696_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_662_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_662_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
v___jp_704_:
{
lean_object* v___x_714_; 
v___x_714_ = l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(v___y_708_);
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v___x_715_; lean_object* v_subst_716_; lean_object* v_used_717_; lean_object* v_binderRenaming_718_; lean_object* v_funDeclInfoMap_719_; uint8_t v_simplified_720_; lean_object* v_visited_721_; lean_object* v_inline_722_; lean_object* v_inlineLocal_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref_known(v___x_714_, 1);
v___x_715_ = lean_st_ref_take(v___y_708_);
v_subst_716_ = lean_ctor_get(v___x_715_, 0);
v_used_717_ = lean_ctor_get(v___x_715_, 1);
v_binderRenaming_718_ = lean_ctor_get(v___x_715_, 2);
v_funDeclInfoMap_719_ = lean_ctor_get(v___x_715_, 3);
v_simplified_720_ = lean_ctor_get_uint8(v___x_715_, sizeof(void*)*7);
v_visited_721_ = lean_ctor_get(v___x_715_, 4);
v_inline_722_ = lean_ctor_get(v___x_715_, 5);
v_inlineLocal_723_ = lean_ctor_get(v___x_715_, 6);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_754_ == 0)
{
v___x_725_ = v___x_715_;
v_isShared_726_ = v_isSharedCheck_754_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_inlineLocal_723_);
lean_inc(v_inline_722_);
lean_inc(v_visited_721_);
lean_inc(v_funDeclInfoMap_719_);
lean_inc(v_binderRenaming_718_);
lean_inc(v_used_717_);
lean_inc(v_subst_716_);
lean_dec(v___x_715_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_754_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_730_; 
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = lean_nat_add(v_inlineLocal_723_, v___x_727_);
lean_dec(v_inlineLocal_723_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 6, v___x_728_);
v___x_730_ = v___x_725_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_subst_716_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_used_717_);
lean_ctor_set(v_reuseFailAlloc_753_, 2, v_binderRenaming_718_);
lean_ctor_set(v_reuseFailAlloc_753_, 3, v_funDeclInfoMap_719_);
lean_ctor_set(v_reuseFailAlloc_753_, 4, v_visited_721_);
lean_ctor_set(v_reuseFailAlloc_753_, 5, v_inline_722_);
lean_ctor_set(v_reuseFailAlloc_753_, 6, v___x_728_);
lean_ctor_set_uint8(v_reuseFailAlloc_753_, sizeof(void*)*7, v_simplified_720_);
v___x_730_ = v_reuseFailAlloc_753_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = lean_st_ref_put(v___y_708_, v___x_730_);
v___x_732_ = l_Lean_Compiler_LCNF_getType(v___y_709_, v___y_705_, v___y_706_, v___y_711_, v___y_707_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_744_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_744_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_744_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_744_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_params_737_; lean_object* v_value_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_742_; 
v_params_737_ = lean_ctor_get(v___y_710_, 2);
lean_inc_ref(v_params_737_);
v_value_738_ = lean_ctor_get(v___y_710_, 4);
lean_inc_ref(v_value_738_);
lean_dec_ref(v___y_710_);
v___x_739_ = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(v___x_739_, 0, v_params_737_);
lean_ctor_set(v___x_739_, 1, v_value_738_);
lean_ctor_set(v___x_739_, 2, v_a_733_);
lean_ctor_set(v___x_739_, 3, v___y_712_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*4, v___y_713_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*4 + 1, v_mustInline_432_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*4 + 2, v_mustInline_432_);
v___x_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v___x_740_);
v___x_742_ = v___x_735_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v___x_740_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec_ref(v___y_712_);
lean_dec_ref(v___y_710_);
v_a_745_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_732_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_732_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
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
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec_ref(v___y_712_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
v_a_755_ = lean_ctor_get(v___x_714_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_714_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_714_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
v___jp_763_:
{
lean_object* v___x_773_; 
v___x_773_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v___y_770_, v___y_768_, v___y_764_);
if (lean_obj_tag(v___x_773_) == 0)
{
if (v___y_767_ == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_784_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_784_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_784_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_784_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
uint8_t v___x_778_; 
v___x_778_ = lean_unbox(v_a_774_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; lean_object* v___x_781_; 
lean_dec(v_a_774_);
lean_dec_ref(v___y_772_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
v___x_779_ = lean_box(0);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_779_);
v___x_781_ = v___x_776_;
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
else
{
uint8_t v___x_783_; 
lean_del_object(v___x_776_);
v___x_783_ = lean_unbox(v_a_774_);
lean_dec(v_a_774_);
v___y_705_ = v___y_764_;
v___y_706_ = v___y_765_;
v___y_707_ = v___y_766_;
v___y_708_ = v___y_768_;
v___y_709_ = v___y_769_;
v___y_710_ = v___y_770_;
v___y_711_ = v___y_771_;
v___y_712_ = v___y_772_;
v___y_713_ = v___x_783_;
goto v___jp_704_;
}
}
}
else
{
lean_dec_ref_known(v___x_773_, 1);
v___y_705_ = v___y_764_;
v___y_706_ = v___y_765_;
v___y_707_ = v___y_766_;
v___y_708_ = v___y_768_;
v___y_709_ = v___y_769_;
v___y_710_ = v___y_770_;
v___y_711_ = v___y_771_;
v___y_712_ = v___y_772_;
v___y_713_ = v___y_767_;
goto v___jp_704_;
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec_ref(v___y_772_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
v_a_785_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_773_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_773_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
v___jp_793_:
{
uint8_t v___x_802_; lean_object* v___x_803_; 
v___x_802_ = 0;
lean_inc(v_fvarId_794_);
v___x_803_ = l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg(v___x_802_, v_fvarId_794_, v___y_799_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_821_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_821_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_821_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_821_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
if (lean_obj_tag(v_a_804_) == 1)
{
if (v_mustInline_796_ == 0)
{
lean_object* v_val_808_; lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; 
v_val_808_ = lean_ctor_get(v_a_804_, 0);
lean_inc(v_val_808_);
lean_dec_ref_known(v_a_804_, 1);
v___x_809_ = lean_unsigned_to_nat(0u);
v___x_810_ = lean_array_get_size(v_args_795_);
v___x_811_ = lean_nat_dec_lt(v___x_809_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; lean_object* v___x_814_; 
lean_dec(v_val_808_);
lean_dec_ref(v_args_795_);
lean_dec(v_fvarId_794_);
v___x_812_ = lean_box(0);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_812_);
v___x_814_ = v___x_806_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
else
{
lean_del_object(v___x_806_);
v___y_764_ = v___y_798_;
v___y_765_ = v___y_799_;
v___y_766_ = v___y_801_;
v___y_767_ = v_mustInline_796_;
v___y_768_ = v___y_797_;
v___y_769_ = v_fvarId_794_;
v___y_770_ = v_val_808_;
v___y_771_ = v___y_800_;
v___y_772_ = v_args_795_;
goto v___jp_763_;
}
}
else
{
lean_object* v_val_816_; 
lean_del_object(v___x_806_);
v_val_816_ = lean_ctor_get(v_a_804_, 0);
lean_inc(v_val_816_);
lean_dec_ref_known(v_a_804_, 1);
v___y_764_ = v___y_798_;
v___y_765_ = v___y_799_;
v___y_766_ = v___y_801_;
v___y_767_ = v_mustInline_796_;
v___y_768_ = v___y_797_;
v___y_769_ = v_fvarId_794_;
v___y_770_ = v_val_816_;
v___y_771_ = v___y_800_;
v___y_772_ = v_args_795_;
goto v___jp_763_;
}
}
else
{
lean_object* v___x_817_; lean_object* v___x_819_; 
lean_dec(v_a_804_);
lean_dec_ref(v_args_795_);
lean_dec(v_fvarId_794_);
v___x_817_ = lean_box(0);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_817_);
v___x_819_ = v___x_806_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_dec_ref(v_args_795_);
lean_dec(v_fvarId_794_);
v_a_822_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_803_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_803_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
v___jp_830_:
{
if (lean_obj_tag(v_e_831_) == 3)
{
lean_object* v_declName_840_; lean_object* v_us_841_; lean_object* v_args_842_; 
v_declName_840_ = lean_ctor_get(v_e_831_, 0);
lean_inc(v_declName_840_);
v_us_841_ = lean_ctor_get(v_e_831_, 1);
lean_inc(v_us_841_);
v_args_842_ = lean_ctor_get(v_e_831_, 2);
lean_inc_ref(v_args_842_);
lean_dec_ref_known(v_e_831_, 3);
v_declName_646_ = v_declName_840_;
v_us_647_ = v_us_841_;
v_args_648_ = v_args_842_;
v_mustInline_649_ = v_mustInline_832_;
v___y_650_ = v___y_833_;
v___y_651_ = v___y_834_;
v___y_652_ = v___y_835_;
v___y_653_ = v___y_836_;
v___y_654_ = v___y_837_;
v___y_655_ = v___y_838_;
v___y_656_ = v___y_839_;
goto v___jp_645_;
}
else
{
if (lean_obj_tag(v_e_831_) == 4)
{
lean_object* v_fvarId_843_; lean_object* v_args_844_; 
v_fvarId_843_ = lean_ctor_get(v_e_831_, 0);
lean_inc(v_fvarId_843_);
v_args_844_ = lean_ctor_get(v_e_831_, 1);
lean_inc_ref(v_args_844_);
lean_dec_ref_known(v_e_831_, 2);
v_fvarId_794_ = v_fvarId_843_;
v_args_795_ = v_args_844_;
v_mustInline_796_ = v_mustInline_832_;
v___y_797_ = v___y_834_;
v___y_798_ = v___y_836_;
v___y_799_ = v___y_837_;
v___y_800_ = v___y_838_;
v___y_801_ = v___y_839_;
goto v___jp_793_;
}
else
{
lean_object* v___x_845_; lean_object* v___x_846_; 
lean_dec(v_e_831_);
v___x_845_ = lean_box(0);
v___x_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f___boxed(lean_object* v_e_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(v_e_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_, v_a_981_);
lean_dec(v_a_981_);
lean_dec_ref(v_a_980_);
lean_dec(v_a_979_);
lean_dec_ref(v_a_978_);
lean_dec_ref(v_a_977_);
lean_dec(v_a_976_);
lean_dec_ref(v_a_975_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1066_; uint8_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1066_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_));
v___x_1067_ = 0;
v___x_1068_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn___closed__33_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_));
v___x_1069_ = l_Lean_registerTraceClass(v___x_1066_, v___x_1067_, v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2____boxed(lean_object* v_a_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_();
return v_res_1071_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_Simp_InlineCandidate_0__Lean_Compiler_LCNF_Simp_initFn_00___x40_Lean_Compiler_LCNF_Simp_InlineCandidate_1449551352____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
}
#ifdef __cplusplus
}
#endif
