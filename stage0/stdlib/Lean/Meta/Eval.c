// Lean compiler output
// Module: Lean.Meta.Eval
// Imports: public import Lean.AddDecl public import Lean.Meta.Check public import Lean.Util.CollectLevelParams import Lean.Compiler.Options
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_relaxedMetaCheck;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_traceBlock___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_collectLevelParams(lean_object*, lean_object*);
lean_object* l_Lean_Environment_importEnv_x3f(lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_isImportedConst(lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "compiler env"};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_tmp"};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(156, 26, 231, 16, 169, 5, 155, 241)}};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8;
static const lean_array_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10;
static const lean_string_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "failed to evaluate expression, it contains metavariables"};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11_value;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__13;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected type at evalExpr"};
static const lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_evalExpr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_evalExpr___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_evalExpr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected type at `evalExpr` "};
static const lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_evalExpr___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_evalExpr___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(lean_object* v_opts_44_, lean_object* v_opt_45_){
_start:
{
lean_object* v_name_46_; lean_object* v_defValue_47_; lean_object* v_map_48_; lean_object* v___x_49_; 
v_name_46_ = lean_ctor_get(v_opt_45_, 0);
v_defValue_47_ = lean_ctor_get(v_opt_45_, 1);
v_map_48_ = lean_ctor_get(v_opts_44_, 0);
v___x_49_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_48_, v_name_46_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_inc(v_defValue_47_);
return v_defValue_47_;
}
else
{
lean_object* v_val_50_; 
v_val_50_ = lean_ctor_get(v___x_49_, 0);
lean_inc(v_val_50_);
lean_dec_ref_known(v___x_49_, 1);
if (lean_obj_tag(v_val_50_) == 3)
{
lean_object* v_v_51_; 
v_v_51_ = lean_ctor_get(v_val_50_, 0);
lean_inc(v_v_51_);
lean_dec_ref_known(v_val_50_, 1);
return v_v_51_;
}
else
{
lean_dec(v_val_50_);
lean_inc(v_defValue_47_);
return v_defValue_47_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2___boxed(lean_object* v_opts_52_, lean_object* v_opt_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v_opts_52_, v_opt_53_);
lean_dec_ref(v_opt_53_);
lean_dec_ref(v_opts_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__9(lean_object* v_msgData_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v___x_61_; lean_object* v_env_62_; uint8_t v___x_63_; lean_object* v_env_64_; lean_object* v___x_65_; lean_object* v_toCold_66_; lean_object* v_mctx_67_; lean_object* v_lctx_68_; lean_object* v_options_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_61_ = lean_st_ref_get(v___y_59_);
v_env_62_ = lean_ctor_get(v___x_61_, 0);
lean_inc_ref(v_env_62_);
lean_dec(v___x_61_);
v___x_63_ = 0;
v_env_64_ = l_Lean_Environment_setRecordingDeps(v_env_62_, v___x_63_);
v___x_65_ = lean_st_ref_get(v___y_57_);
v_toCold_66_ = lean_ctor_get(v___y_58_, 0);
v_mctx_67_ = lean_ctor_get(v___x_65_, 0);
lean_inc_ref(v_mctx_67_);
lean_dec(v___x_65_);
v_lctx_68_ = lean_ctor_get(v___y_56_, 2);
v_options_69_ = lean_ctor_get(v_toCold_66_, 2);
lean_inc_ref(v_options_69_);
lean_inc_ref(v_lctx_68_);
v___x_70_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_70_, 0, v_env_64_);
lean_ctor_set(v___x_70_, 1, v_mctx_67_);
lean_ctor_set(v___x_70_, 2, v_lctx_68_);
lean_ctor_set(v___x_70_, 3, v_options_69_);
v___x_71_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v_msgData_55_);
v___x_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__9___boxed(lean_object* v_msgData_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__9(v_msgData_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(lean_object* v_msg_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_ref_86_; lean_object* v___x_87_; lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_96_; 
v_ref_86_ = lean_ctor_get(v___y_83_, 2);
v___x_87_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__9(v_msg_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_);
v_a_88_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_96_ == 0)
{
v___x_90_ = v___x_87_;
v_isShared_91_ = v_isSharedCheck_96_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_87_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_96_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_92_; lean_object* v___x_94_; 
lean_inc(v_ref_86_);
v___x_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_92_, 0, v_ref_86_);
lean_ctor_set(v___x_92_, 1, v_a_88_);
if (v_isShared_91_ == 0)
{
lean_ctor_set_tag(v___x_90_, 1);
lean_ctor_set(v___x_90_, 0, v___x_92_);
v___x_94_ = v___x_90_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg___boxed(lean_object* v_msg_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v_msg_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg(lean_object* v_x_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_a_110_ = lean_ctor_get(v_x_104_, 0);
lean_inc(v_a_110_);
lean_dec_ref_known(v_x_104_, 1);
v___x_111_ = l_Lean_stringToMessageData(v_a_110_);
v___x_112_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_111_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
return v___x_112_;
}
else
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_120_; 
v_a_113_ = lean_ctor_get(v_x_104_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v_x_104_);
if (v_isSharedCheck_120_ == 0)
{
v___x_115_ = v_x_104_;
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v_x_104_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set_tag(v___x_115_, 0);
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_a_113_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg___boxed(lean_object* v_x_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg(v_x_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_127_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_box(0);
v___x_129_ = l_Lean_Elab_abortCommandExceptionId;
v___x_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_128_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg(){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___closed__0);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg___boxed(lean_object* v___y_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg();
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___redArg(lean_object* v_constName_136_, uint8_t v_checkMeta_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v___x_143_; lean_object* v_env_144_; uint8_t v___x_145_; 
v___x_143_ = lean_st_ref_get(v___y_141_);
v_env_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc_ref(v_env_144_);
lean_dec(v___x_143_);
lean_inc(v_constName_136_);
v___x_145_ = lean_has_compile_error(v_env_144_, v_constName_136_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v_env_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_146_ = lean_st_ref_get(v___y_141_);
v_env_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc_ref(v_env_147_);
lean_dec(v___x_146_);
v___x_148_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_140_);
v___x_149_ = l_Lean_Environment_evalConst___redArg(v_env_147_, v___x_148_, v_constName_136_, v_checkMeta_137_);
lean_dec(v_constName_136_);
lean_dec_ref(v___x_148_);
lean_dec_ref(v_env_147_);
v___x_150_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg(v___x_149_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
return v___x_150_;
}
else
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg();
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v___x_152_; lean_object* v_env_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
lean_dec_ref_known(v___x_151_, 1);
v___x_152_ = lean_st_ref_get(v___y_141_);
v_env_153_ = lean_ctor_get(v___x_152_, 0);
lean_inc_ref(v_env_153_);
lean_dec(v___x_152_);
v___x_154_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_140_);
v___x_155_ = l_Lean_Environment_evalConst___redArg(v_env_153_, v___x_154_, v_constName_136_, v_checkMeta_137_);
lean_dec(v_constName_136_);
lean_dec_ref(v___x_154_);
lean_dec_ref(v_env_153_);
v___x_156_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg(v___x_155_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
return v___x_156_;
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
lean_dec(v_constName_136_);
v_a_157_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_151_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_151_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___redArg___boxed(lean_object* v_constName_165_, lean_object* v_checkMeta_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
uint8_t v_checkMeta_boxed_172_; lean_object* v_res_173_; 
v_checkMeta_boxed_172_ = lean_unbox(v_checkMeta_166_);
v_res_173_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___redArg(v_constName_165_, v_checkMeta_boxed_172_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
return v_res_173_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(lean_object* v___x_174_, lean_object* v___x_175_, lean_object* v_as_176_, size_t v_i_177_, size_t v_stop_178_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_usize_dec_eq(v_i_177_, v_stop_178_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = lean_array_uget_borrowed(v_as_176_, v_i_177_);
v___x_185_ = l_Lean_Environment_isImportedConst(v___x_174_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = lean_nat_dec_lt(v___x_186_, v___x_175_);
if (v___x_187_ == 0)
{
goto v___jp_179_;
}
else
{
return v___x_187_;
}
}
else
{
goto v___jp_179_;
}
}
else
{
uint8_t v___x_188_; 
v___x_188_ = 0;
return v___x_188_;
}
v___jp_179_:
{
size_t v___x_180_; size_t v___x_181_; 
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_add(v_i_177_, v___x_180_);
v_i_177_ = v___x_181_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6___boxed(lean_object* v___x_189_, lean_object* v___x_190_, lean_object* v_as_191_, lean_object* v_i_192_, lean_object* v_stop_193_){
_start:
{
size_t v_i_boxed_194_; size_t v_stop_boxed_195_; uint8_t v_res_196_; lean_object* v_r_197_; 
v_i_boxed_194_ = lean_unbox_usize(v_i_192_);
lean_dec(v_i_192_);
v_stop_boxed_195_ = lean_unbox_usize(v_stop_193_);
lean_dec(v_stop_193_);
v_res_196_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(v___x_189_, v___x_190_, v_as_191_, v_i_boxed_194_, v_stop_boxed_195_);
lean_dec_ref(v_as_191_);
lean_dec(v___x_190_);
lean_dec_ref(v___x_189_);
v_r_197_ = lean_box(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7(lean_object* v_o_201_, lean_object* v_k_202_, uint8_t v_v_203_){
_start:
{
lean_object* v_map_204_; uint8_t v_hasTrace_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_219_; 
v_map_204_ = lean_ctor_get(v_o_201_, 0);
v_hasTrace_205_ = lean_ctor_get_uint8(v_o_201_, sizeof(void*)*1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_o_201_);
if (v_isSharedCheck_219_ == 0)
{
v___x_207_ = v_o_201_;
v_isShared_208_ = v_isSharedCheck_219_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_map_204_);
lean_dec(v_o_201_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_219_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_209_, 0, v_v_203_);
lean_inc(v_k_202_);
v___x_210_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_202_, v___x_209_, v_map_204_);
if (v_hasTrace_205_ == 0)
{
lean_object* v___x_211_; uint8_t v___x_212_; lean_object* v___x_214_; 
v___x_211_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___closed__1));
v___x_212_ = l_Lean_Name_isPrefixOf(v___x_211_, v_k_202_);
lean_dec(v_k_202_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_210_);
v___x_214_ = v___x_207_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_210_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_ctor_set_uint8(v___x_214_, sizeof(void*)*1, v___x_212_);
return v___x_214_;
}
}
else
{
lean_object* v___x_217_; 
lean_dec(v_k_202_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_210_);
v___x_217_ = v___x_207_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_210_);
lean_ctor_set_uint8(v_reuseFailAlloc_218_, sizeof(void*)*1, v_hasTrace_205_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7___boxed(lean_object* v_o_220_, lean_object* v_k_221_, lean_object* v_v_222_){
_start:
{
uint8_t v_v_boxed_223_; lean_object* v_res_224_; 
v_v_boxed_223_ = lean_unbox(v_v_222_);
v_res_224_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7(v_o_220_, v_k_221_, v_v_boxed_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4(lean_object* v_opts_225_, lean_object* v_opt_226_, uint8_t v_val_227_){
_start:
{
lean_object* v_name_228_; lean_object* v___x_229_; 
v_name_228_ = lean_ctor_get(v_opt_226_, 0);
lean_inc(v_name_228_);
lean_dec_ref(v_opt_226_);
v___x_229_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4_spec__7(v_opts_225_, v_name_228_, v_val_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4___boxed(lean_object* v_opts_230_, lean_object* v_opt_231_, lean_object* v_val_232_){
_start:
{
uint8_t v_val_boxed_233_; lean_object* v_res_234_; 
v_val_boxed_233_ = lean_unbox(v_val_232_);
v_res_234_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4(v_opts_230_, v_opt_231_, v_val_boxed_233_);
return v_res_234_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_235_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg(){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__1);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___boxed(lean_object* v___dummy_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg();
return v_res_241_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg___closed__0);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
return v___x_245_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1___redArg();
return v___x_246_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = lean_box(0);
v___x_254_ = lean_unsigned_to_nat(16u);
v___x_255_ = lean_mk_array(v___x_254_, v___x_253_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7);
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___x_256_);
return v___x_258_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_261_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9));
v___x_262_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8);
v___x_263_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
lean_ctor_set(v___x_263_, 2, v___x_261_);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11));
v___x_266_ = l_Lean_stringToMessageData(v___x_265_);
return v___x_266_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__13(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0);
v___x_269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
lean_ctor_set(v___x_269_, 2, v___x_267_);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_270_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__13, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__13_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__13);
v___x_271_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
v___x_272_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0);
v___x_273_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
v___x_274_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
lean_ctor_set(v___x_274_, 1, v___x_272_);
lean_ctor_set(v___x_274_, 2, v___x_271_);
lean_ctor_set(v___x_274_, 3, v___x_272_);
lean_ctor_set(v___x_274_, 4, v___x_272_);
lean_ctor_set(v___x_274_, 5, v___x_272_);
lean_ctor_set(v___x_274_, 6, v___x_272_);
lean_ctor_set(v___x_274_, 7, v___x_270_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0(uint8_t v_checkMeta_275_, lean_object* v_checkType_276_, uint8_t v_safety_277_, lean_object* v_value_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___y_285_; lean_object* v___y_286_; lean_object* v___y_287_; uint8_t v___y_288_; lean_object* v___y_289_; lean_object* v___y_290_; uint8_t v___y_291_; uint16_t v___y_292_; lean_object* v___y_293_; lean_object* v___y_294_; lean_object* v___y_295_; uint8_t v___y_340_; lean_object* v___y_341_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___y_347_; uint8_t v___y_348_; uint16_t v___y_349_; lean_object* v_nextMacroScope_350_; lean_object* v_ngen_351_; lean_object* v_auxDeclNGen_352_; lean_object* v_traceState_353_; lean_object* v_recordedDeps_354_; lean_object* v_messages_355_; lean_object* v_infoState_356_; lean_object* v_snapshotTasks_357_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___y_360_; uint8_t v___y_364_; lean_object* v___y_365_; lean_object* v___y_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; uint8_t v___y_372_; uint16_t v___y_373_; lean_object* v___y_374_; lean_object* v___y_375_; uint8_t v___y_376_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; uint8_t v___y_398_; lean_object* v___y_399_; uint8_t v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; uint16_t v___y_414_; lean_object* v___y_415_; lean_object* v___y_416_; uint8_t v___y_417_; lean_object* v___y_418_; lean_object* v___y_419_; uint8_t v___y_420_; lean_object* v___y_421_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v_nextMacroScope_463_; lean_object* v_ngen_464_; lean_object* v_auxDeclNGen_465_; lean_object* v_traceState_466_; lean_object* v_recordedDeps_467_; lean_object* v_messages_468_; lean_object* v_infoState_469_; lean_object* v_snapshotTasks_470_; uint16_t v___y_471_; lean_object* v___y_472_; uint8_t v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; lean_object* v___y_479_; lean_object* v___y_480_; uint8_t v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; uint16_t v___y_487_; lean_object* v___y_488_; uint8_t v___y_489_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; uint8_t v___y_497_; lean_object* v___y_498_; uint8_t v___y_499_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; uint8_t v___y_522_; lean_object* v___y_523_; uint8_t v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_537_; uint16_t v___y_538_; uint8_t v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; uint8_t v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; uint8_t v___y_586_; lean_object* v___y_587_; lean_object* v___y_588_; lean_object* v___y_589_; lean_object* v___y_590_; lean_object* v___y_591_; lean_object* v_nextMacroScope_592_; lean_object* v_ngen_593_; lean_object* v_auxDeclNGen_594_; lean_object* v_traceState_595_; lean_object* v_recordedDeps_596_; lean_object* v_messages_597_; lean_object* v_infoState_598_; lean_object* v_snapshotTasks_599_; lean_object* v___y_600_; uint16_t v___y_601_; lean_object* v___y_602_; uint8_t v___y_603_; lean_object* v___y_604_; lean_object* v___y_605_; uint16_t v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; uint8_t v___y_613_; uint8_t v___y_614_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_619_; uint8_t v___y_620_; lean_object* v___y_638_; lean_object* v___y_639_; uint8_t v___y_640_; lean_object* v___y_641_; lean_object* v___y_642_; uint8_t v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v_nextMacroScope_796_; lean_object* v_ngen_797_; lean_object* v_auxDeclNGen_798_; lean_object* v_traceState_799_; lean_object* v_recordedDeps_800_; lean_object* v_messages_801_; lean_object* v_infoState_802_; lean_object* v_snapshotTasks_803_; lean_object* v___y_804_; lean_object* v___x_823_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_823_ = lean_st_ref_get(v___y_282_);
lean_inc_ref(v_value_278_);
v___x_837_ = l_Lean_Expr_getUsedConstants(v_value_278_);
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = lean_array_get_size(v___x_837_);
v___x_840_ = lean_nat_dec_lt(v___x_838_, v___x_839_);
if (v___x_840_ == 0)
{
lean_dec_ref(v___x_837_);
lean_dec(v___x_823_);
goto v___jp_824_;
}
else
{
if (v___x_840_ == 0)
{
lean_dec_ref(v___x_837_);
lean_dec(v___x_823_);
goto v___jp_824_;
}
else
{
lean_object* v_env_841_; size_t v___x_842_; size_t v___x_843_; uint8_t v___x_844_; 
v_env_841_ = lean_ctor_get(v___x_823_, 0);
lean_inc_ref(v_env_841_);
lean_dec(v___x_823_);
v___x_842_ = ((size_t)0ULL);
v___x_843_ = lean_usize_of_nat(v___x_839_);
v___x_844_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(v_env_841_, v___x_839_, v___x_837_, v___x_842_, v___x_843_);
lean_dec_ref(v___x_837_);
lean_dec_ref(v_env_841_);
if (v___x_844_ == 0)
{
goto v___jp_824_;
}
else
{
goto v___jp_752_;
}
}
}
v___jp_284_:
{
lean_object* v_toCold_296_; lean_object* v_currRecDepth_297_; lean_object* v_ref_298_; uint8_t v_suppressElabErrors_299_; uint8_t v_checkDeprecated_300_; uint8_t v_isRecordingDeps_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_338_; 
v_toCold_296_ = lean_ctor_get(v___y_294_, 0);
v_currRecDepth_297_ = lean_ctor_get(v___y_294_, 1);
v_ref_298_ = lean_ctor_get(v___y_294_, 2);
v_suppressElabErrors_299_ = lean_ctor_get_uint8(v___y_294_, sizeof(void*)*3 + 2);
v_checkDeprecated_300_ = lean_ctor_get_uint8(v___y_294_, sizeof(void*)*3 + 3);
v_isRecordingDeps_301_ = lean_ctor_get_uint8(v___y_294_, sizeof(void*)*3 + 4);
v_isSharedCheck_338_ = !lean_is_exclusive(v___y_294_);
if (v_isSharedCheck_338_ == 0)
{
v___x_303_ = v___y_294_;
v_isShared_304_ = v_isSharedCheck_338_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_ref_298_);
lean_inc(v_currRecDepth_297_);
lean_inc(v_toCold_296_);
lean_dec(v___y_294_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_338_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v_fileName_305_; lean_object* v_fileMap_306_; lean_object* v_currNamespace_307_; lean_object* v_openDecls_308_; lean_object* v_initHeartbeats_309_; lean_object* v_maxHeartbeats_310_; lean_object* v_quotContext_311_; lean_object* v_currMacroScope_312_; lean_object* v_cancelTk_x3f_313_; lean_object* v_inheritedTraceOptions_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_335_; 
v_fileName_305_ = lean_ctor_get(v_toCold_296_, 0);
v_fileMap_306_ = lean_ctor_get(v_toCold_296_, 1);
v_currNamespace_307_ = lean_ctor_get(v_toCold_296_, 4);
v_openDecls_308_ = lean_ctor_get(v_toCold_296_, 5);
v_initHeartbeats_309_ = lean_ctor_get(v_toCold_296_, 6);
v_maxHeartbeats_310_ = lean_ctor_get(v_toCold_296_, 7);
v_quotContext_311_ = lean_ctor_get(v_toCold_296_, 8);
v_currMacroScope_312_ = lean_ctor_get(v_toCold_296_, 9);
v_cancelTk_x3f_313_ = lean_ctor_get(v_toCold_296_, 10);
v_inheritedTraceOptions_314_ = lean_ctor_get(v_toCold_296_, 11);
v_isSharedCheck_335_ = !lean_is_exclusive(v_toCold_296_);
if (v_isSharedCheck_335_ == 0)
{
lean_object* v_unused_336_; lean_object* v_unused_337_; 
v_unused_336_ = lean_ctor_get(v_toCold_296_, 3);
lean_dec(v_unused_336_);
v_unused_337_ = lean_ctor_get(v_toCold_296_, 2);
lean_dec(v_unused_337_);
v___x_316_ = v_toCold_296_;
v_isShared_317_ = v_isSharedCheck_335_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_inheritedTraceOptions_314_);
lean_inc(v_cancelTk_x3f_313_);
lean_inc(v_currMacroScope_312_);
lean_inc(v_quotContext_311_);
lean_inc(v_maxHeartbeats_310_);
lean_inc(v_initHeartbeats_309_);
lean_inc(v_openDecls_308_);
lean_inc(v_currNamespace_307_);
lean_inc(v_fileMap_306_);
lean_inc(v_fileName_305_);
lean_dec(v_toCold_296_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_335_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_318_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v___y_287_, v___y_285_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 3, v___x_318_);
lean_ctor_set(v___x_316_, 2, v___y_287_);
v___x_320_ = v___x_316_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_fileName_305_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_fileMap_306_);
lean_ctor_set(v_reuseFailAlloc_334_, 2, v___y_287_);
lean_ctor_set(v_reuseFailAlloc_334_, 3, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_334_, 4, v_currNamespace_307_);
lean_ctor_set(v_reuseFailAlloc_334_, 5, v_openDecls_308_);
lean_ctor_set(v_reuseFailAlloc_334_, 6, v_initHeartbeats_309_);
lean_ctor_set(v_reuseFailAlloc_334_, 7, v_maxHeartbeats_310_);
lean_ctor_set(v_reuseFailAlloc_334_, 8, v_quotContext_311_);
lean_ctor_set(v_reuseFailAlloc_334_, 9, v_currMacroScope_312_);
lean_ctor_set(v_reuseFailAlloc_334_, 10, v_cancelTk_x3f_313_);
lean_ctor_set(v_reuseFailAlloc_334_, 11, v_inheritedTraceOptions_314_);
v___x_320_ = v_reuseFailAlloc_334_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_322_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_320_);
v___x_322_ = v___x_303_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_currRecDepth_297_);
lean_ctor_set(v_reuseFailAlloc_333_, 2, v_ref_298_);
lean_ctor_set_uint8(v_reuseFailAlloc_333_, sizeof(void*)*3 + 2, v_suppressElabErrors_299_);
lean_ctor_set_uint8(v_reuseFailAlloc_333_, sizeof(void*)*3 + 3, v_checkDeprecated_300_);
lean_ctor_set_uint8(v_reuseFailAlloc_333_, sizeof(void*)*3 + 4, v_isRecordingDeps_301_);
v___x_322_ = v_reuseFailAlloc_333_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
lean_object* v___x_323_; 
lean_ctor_set_uint16(v___x_322_, sizeof(void*)*3, v___y_292_);
v___x_323_ = l_Lean_addAndCompile(v___y_289_, v___y_288_, v___y_291_, v___x_322_, v___y_295_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v___x_324_; 
lean_dec_ref_known(v___x_323_, 1);
v___x_324_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___redArg(v___y_290_, v_checkMeta_275_, v___y_293_, v___y_286_, v___x_322_, v___y_295_);
lean_dec(v___y_295_);
lean_dec_ref(v___x_322_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_293_);
return v___x_324_;
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec_ref(v___x_322_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_293_);
lean_dec(v___y_290_);
lean_dec(v___y_286_);
v_a_325_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_323_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_323_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
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
}
}
}
v___jp_339_:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
lean_inc_ref(v___y_342_);
v___x_361_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_361_, 0, v___y_360_);
lean_ctor_set(v___x_361_, 1, v_nextMacroScope_350_);
lean_ctor_set(v___x_361_, 2, v_ngen_351_);
lean_ctor_set(v___x_361_, 3, v_auxDeclNGen_352_);
lean_ctor_set(v___x_361_, 4, v_traceState_353_);
lean_ctor_set(v___x_361_, 5, v___y_342_);
lean_ctor_set(v___x_361_, 6, v_recordedDeps_354_);
lean_ctor_set(v___x_361_, 7, v_messages_355_);
lean_ctor_set(v___x_361_, 8, v_infoState_356_);
lean_ctor_set(v___x_361_, 9, v_snapshotTasks_357_);
v___x_362_ = lean_st_ref_put(v___y_359_, v___x_361_);
v___y_285_ = v___y_344_;
v___y_286_ = v___y_345_;
v___y_287_ = v___y_346_;
v___y_288_ = v___y_340_;
v___y_289_ = v___y_341_;
v___y_290_ = v___y_347_;
v___y_291_ = v___y_348_;
v___y_292_ = v___y_349_;
v___y_293_ = v___y_358_;
v___y_294_ = v___y_343_;
v___y_295_ = v___y_359_;
goto v___jp_284_;
}
v___jp_363_:
{
lean_object* v___x_377_; lean_object* v_env_378_; lean_object* v_nextMacroScope_379_; lean_object* v_ngen_380_; lean_object* v_auxDeclNGen_381_; lean_object* v_traceState_382_; lean_object* v_recordedDeps_383_; lean_object* v_messages_384_; lean_object* v_infoState_385_; lean_object* v_snapshotTasks_386_; uint16_t v___x_387_; uint16_t v___x_388_; uint16_t v___x_389_; uint8_t v___x_390_; 
v___x_377_ = lean_st_ref_take(v___y_374_);
v_env_378_ = lean_ctor_get(v___x_377_, 0);
lean_inc_ref(v_env_378_);
v_nextMacroScope_379_ = lean_ctor_get(v___x_377_, 1);
lean_inc(v_nextMacroScope_379_);
v_ngen_380_ = lean_ctor_get(v___x_377_, 2);
lean_inc_ref(v_ngen_380_);
v_auxDeclNGen_381_ = lean_ctor_get(v___x_377_, 3);
lean_inc_ref(v_auxDeclNGen_381_);
v_traceState_382_ = lean_ctor_get(v___x_377_, 4);
lean_inc_ref(v_traceState_382_);
v_recordedDeps_383_ = lean_ctor_get(v___x_377_, 6);
lean_inc_ref(v_recordedDeps_383_);
v_messages_384_ = lean_ctor_get(v___x_377_, 7);
lean_inc_ref(v_messages_384_);
v_infoState_385_ = lean_ctor_get(v___x_377_, 8);
lean_inc_ref(v_infoState_385_);
v_snapshotTasks_386_ = lean_ctor_get(v___x_377_, 9);
lean_inc_ref(v_snapshotTasks_386_);
lean_dec(v___x_377_);
v___x_387_ = 512;
v___x_388_ = lean_uint16_land(v___y_373_, v___x_387_);
v___x_389_ = 0;
v___x_390_ = lean_uint16_dec_eq(v___x_388_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_Kernel_enableDiag(v_env_378_, v___y_364_);
v___y_340_ = v___y_364_;
v___y_341_ = v___y_365_;
v___y_342_ = v___y_366_;
v___y_343_ = v___y_367_;
v___y_344_ = v___y_368_;
v___y_345_ = v___y_369_;
v___y_346_ = v___y_370_;
v___y_347_ = v___y_371_;
v___y_348_ = v___y_372_;
v___y_349_ = v___y_373_;
v_nextMacroScope_350_ = v_nextMacroScope_379_;
v_ngen_351_ = v_ngen_380_;
v_auxDeclNGen_352_ = v_auxDeclNGen_381_;
v_traceState_353_ = v_traceState_382_;
v_recordedDeps_354_ = v_recordedDeps_383_;
v_messages_355_ = v_messages_384_;
v_infoState_356_ = v_infoState_385_;
v_snapshotTasks_357_ = v_snapshotTasks_386_;
v___y_358_ = v___y_375_;
v___y_359_ = v___y_374_;
v___y_360_ = v___x_391_;
goto v___jp_339_;
}
else
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_Kernel_enableDiag(v_env_378_, v___y_376_);
v___y_340_ = v___y_364_;
v___y_341_ = v___y_365_;
v___y_342_ = v___y_366_;
v___y_343_ = v___y_367_;
v___y_344_ = v___y_368_;
v___y_345_ = v___y_369_;
v___y_346_ = v___y_370_;
v___y_347_ = v___y_371_;
v___y_348_ = v___y_372_;
v___y_349_ = v___y_373_;
v_nextMacroScope_350_ = v_nextMacroScope_379_;
v_ngen_351_ = v_ngen_380_;
v_auxDeclNGen_352_ = v_auxDeclNGen_381_;
v_traceState_353_ = v_traceState_382_;
v_recordedDeps_354_ = v_recordedDeps_383_;
v_messages_355_ = v_messages_384_;
v_infoState_356_ = v_infoState_385_;
v_snapshotTasks_357_ = v_snapshotTasks_386_;
v___y_358_ = v___y_375_;
v___y_359_ = v___y_374_;
v___y_360_ = v___x_392_;
goto v___jp_339_;
}
}
v___jp_393_:
{
uint16_t v___x_405_; lean_object* v___x_406_; lean_object* v_env_407_; uint8_t v___x_408_; uint16_t v___x_409_; uint16_t v___x_410_; uint16_t v___x_411_; uint8_t v___x_412_; 
v___x_405_ = l_Lean_OptionFlags_ofOptions(v___y_404_);
v___x_406_ = lean_st_ref_get(v___y_402_);
v_env_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc_ref(v_env_407_);
lean_dec(v___x_406_);
v___x_408_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_407_);
lean_dec_ref(v_env_407_);
v___x_409_ = 512;
v___x_410_ = lean_uint16_land(v___x_405_, v___x_409_);
v___x_411_ = 0;
v___x_412_ = lean_uint16_dec_eq(v___x_410_, v___x_411_);
if (v___x_412_ == 0)
{
if (v___x_408_ == 0)
{
v___y_364_ = v___y_398_;
v___y_365_ = v___y_397_;
v___y_366_ = v___y_399_;
v___y_367_ = v___y_394_;
v___y_368_ = v___y_395_;
v___y_369_ = v___y_396_;
v___y_370_ = v___y_404_;
v___y_371_ = v___y_401_;
v___y_372_ = v___y_400_;
v___y_373_ = v___x_405_;
v___y_374_ = v___y_402_;
v___y_375_ = v___y_403_;
v___y_376_ = v___x_408_;
goto v___jp_363_;
}
else
{
v___y_285_ = v___y_395_;
v___y_286_ = v___y_396_;
v___y_287_ = v___y_404_;
v___y_288_ = v___y_398_;
v___y_289_ = v___y_397_;
v___y_290_ = v___y_401_;
v___y_291_ = v___y_400_;
v___y_292_ = v___x_405_;
v___y_293_ = v___y_403_;
v___y_294_ = v___y_394_;
v___y_295_ = v___y_402_;
goto v___jp_284_;
}
}
else
{
if (v___x_408_ == 0)
{
v___y_285_ = v___y_395_;
v___y_286_ = v___y_396_;
v___y_287_ = v___y_404_;
v___y_288_ = v___y_398_;
v___y_289_ = v___y_397_;
v___y_290_ = v___y_401_;
v___y_291_ = v___y_400_;
v___y_292_ = v___x_405_;
v___y_293_ = v___y_403_;
v___y_294_ = v___y_394_;
v___y_295_ = v___y_402_;
goto v___jp_284_;
}
else
{
v___y_364_ = v___y_398_;
v___y_365_ = v___y_397_;
v___y_366_ = v___y_399_;
v___y_367_ = v___y_394_;
v___y_368_ = v___y_395_;
v___y_369_ = v___y_396_;
v___y_370_ = v___y_404_;
v___y_371_ = v___y_401_;
v___y_372_ = v___y_400_;
v___y_373_ = v___x_405_;
v___y_374_ = v___y_402_;
v___y_375_ = v___y_403_;
v___y_376_ = v___y_400_;
goto v___jp_363_;
}
}
}
v___jp_413_:
{
lean_object* v_toCold_426_; lean_object* v_currRecDepth_427_; lean_object* v_ref_428_; uint8_t v_suppressElabErrors_429_; uint8_t v_checkDeprecated_430_; uint8_t v_isRecordingDeps_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_461_; 
v_toCold_426_ = lean_ctor_get(v___y_424_, 0);
v_currRecDepth_427_ = lean_ctor_get(v___y_424_, 1);
v_ref_428_ = lean_ctor_get(v___y_424_, 2);
v_suppressElabErrors_429_ = lean_ctor_get_uint8(v___y_424_, sizeof(void*)*3 + 2);
v_checkDeprecated_430_ = lean_ctor_get_uint8(v___y_424_, sizeof(void*)*3 + 3);
v_isRecordingDeps_431_ = lean_ctor_get_uint8(v___y_424_, sizeof(void*)*3 + 4);
v_isSharedCheck_461_ = !lean_is_exclusive(v___y_424_);
if (v_isSharedCheck_461_ == 0)
{
v___x_433_ = v___y_424_;
v_isShared_434_ = v_isSharedCheck_461_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_ref_428_);
lean_inc(v_currRecDepth_427_);
lean_inc(v_toCold_426_);
lean_dec(v___y_424_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_461_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v_fileName_435_; lean_object* v_fileMap_436_; lean_object* v_currNamespace_437_; lean_object* v_openDecls_438_; lean_object* v_initHeartbeats_439_; lean_object* v_maxHeartbeats_440_; lean_object* v_quotContext_441_; lean_object* v_currMacroScope_442_; lean_object* v_cancelTk_x3f_443_; lean_object* v_inheritedTraceOptions_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_458_; 
v_fileName_435_ = lean_ctor_get(v_toCold_426_, 0);
v_fileMap_436_ = lean_ctor_get(v_toCold_426_, 1);
v_currNamespace_437_ = lean_ctor_get(v_toCold_426_, 4);
v_openDecls_438_ = lean_ctor_get(v_toCold_426_, 5);
v_initHeartbeats_439_ = lean_ctor_get(v_toCold_426_, 6);
v_maxHeartbeats_440_ = lean_ctor_get(v_toCold_426_, 7);
v_quotContext_441_ = lean_ctor_get(v_toCold_426_, 8);
v_currMacroScope_442_ = lean_ctor_get(v_toCold_426_, 9);
v_cancelTk_x3f_443_ = lean_ctor_get(v_toCold_426_, 10);
v_inheritedTraceOptions_444_ = lean_ctor_get(v_toCold_426_, 11);
v_isSharedCheck_458_ = !lean_is_exclusive(v_toCold_426_);
if (v_isSharedCheck_458_ == 0)
{
lean_object* v_unused_459_; lean_object* v_unused_460_; 
v_unused_459_ = lean_ctor_get(v_toCold_426_, 3);
lean_dec(v_unused_459_);
v_unused_460_ = lean_ctor_get(v_toCold_426_, 2);
lean_dec(v_unused_460_);
v___x_446_ = v_toCold_426_;
v_isShared_447_ = v_isSharedCheck_458_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_inheritedTraceOptions_444_);
lean_inc(v_cancelTk_x3f_443_);
lean_inc(v_currMacroScope_442_);
lean_inc(v_quotContext_441_);
lean_inc(v_maxHeartbeats_440_);
lean_inc(v_initHeartbeats_439_);
lean_inc(v_openDecls_438_);
lean_inc(v_currNamespace_437_);
lean_inc(v_fileMap_436_);
lean_inc(v_fileName_435_);
lean_dec(v_toCold_426_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_458_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v___y_423_, v___y_415_);
lean_inc_ref(v___y_423_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 3, v___x_448_);
lean_ctor_set(v___x_446_, 2, v___y_423_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_fileName_435_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_fileMap_436_);
lean_ctor_set(v_reuseFailAlloc_457_, 2, v___y_423_);
lean_ctor_set(v_reuseFailAlloc_457_, 3, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_457_, 4, v_currNamespace_437_);
lean_ctor_set(v_reuseFailAlloc_457_, 5, v_openDecls_438_);
lean_ctor_set(v_reuseFailAlloc_457_, 6, v_initHeartbeats_439_);
lean_ctor_set(v_reuseFailAlloc_457_, 7, v_maxHeartbeats_440_);
lean_ctor_set(v_reuseFailAlloc_457_, 8, v_quotContext_441_);
lean_ctor_set(v_reuseFailAlloc_457_, 9, v_currMacroScope_442_);
lean_ctor_set(v_reuseFailAlloc_457_, 10, v_cancelTk_x3f_443_);
lean_ctor_set(v_reuseFailAlloc_457_, 11, v_inheritedTraceOptions_444_);
v___x_450_ = v_reuseFailAlloc_457_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_452_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v___x_450_);
v___x_452_ = v___x_433_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_450_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_currRecDepth_427_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v_ref_428_);
lean_ctor_set_uint8(v_reuseFailAlloc_456_, sizeof(void*)*3 + 2, v_suppressElabErrors_429_);
lean_ctor_set_uint8(v_reuseFailAlloc_456_, sizeof(void*)*3 + 3, v_checkDeprecated_430_);
lean_ctor_set_uint8(v_reuseFailAlloc_456_, sizeof(void*)*3 + 4, v_isRecordingDeps_431_);
v___x_452_ = v_reuseFailAlloc_456_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_ctor_set_uint16(v___x_452_, sizeof(void*)*3, v___y_414_);
if (v_isRecordingDeps_431_ == 0)
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = l_Lean_Compiler_compiler_relaxedMetaCheck;
v___x_454_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4(v___y_423_, v___x_453_, v___y_417_);
v___y_394_ = v___x_452_;
v___y_395_ = v___y_415_;
v___y_396_ = v___y_416_;
v___y_397_ = v___y_418_;
v___y_398_ = v___y_417_;
v___y_399_ = v___y_421_;
v___y_400_ = v___y_420_;
v___y_401_ = v___y_419_;
v___y_402_ = v___y_425_;
v___y_403_ = v___y_422_;
v___y_404_ = v___x_454_;
goto v___jp_393_;
}
else
{
lean_object* v___x_455_; 
v___x_455_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v___y_423_);
v___y_394_ = v___x_452_;
v___y_395_ = v___y_415_;
v___y_396_ = v___y_416_;
v___y_397_ = v___y_418_;
v___y_398_ = v___y_417_;
v___y_399_ = v___y_421_;
v___y_400_ = v___y_420_;
v___y_401_ = v___y_419_;
v___y_402_ = v___y_425_;
v___y_403_ = v___y_422_;
v___y_404_ = v___x_455_;
goto v___jp_393_;
}
}
}
}
}
}
v___jp_462_:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
lean_inc_ref(v___y_475_);
v___x_484_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_484_, 0, v___y_483_);
lean_ctor_set(v___x_484_, 1, v_nextMacroScope_463_);
lean_ctor_set(v___x_484_, 2, v_ngen_464_);
lean_ctor_set(v___x_484_, 3, v_auxDeclNGen_465_);
lean_ctor_set(v___x_484_, 4, v_traceState_466_);
lean_ctor_set(v___x_484_, 5, v___y_475_);
lean_ctor_set(v___x_484_, 6, v_recordedDeps_467_);
lean_ctor_set(v___x_484_, 7, v_messages_468_);
lean_ctor_set(v___x_484_, 8, v_infoState_469_);
lean_ctor_set(v___x_484_, 9, v_snapshotTasks_470_);
v___x_485_ = lean_st_ref_put(v___y_472_, v___x_484_);
v___y_414_ = v___y_471_;
v___y_415_ = v___y_478_;
v___y_416_ = v___y_479_;
v___y_417_ = v___y_473_;
v___y_418_ = v___y_474_;
v___y_419_ = v___y_480_;
v___y_420_ = v___y_481_;
v___y_421_ = v___y_475_;
v___y_422_ = v___y_482_;
v___y_423_ = v___y_476_;
v___y_424_ = v___y_477_;
v___y_425_ = v___y_472_;
goto v___jp_413_;
}
v___jp_486_:
{
lean_object* v___x_500_; lean_object* v_env_501_; lean_object* v_nextMacroScope_502_; lean_object* v_ngen_503_; lean_object* v_auxDeclNGen_504_; lean_object* v_traceState_505_; lean_object* v_recordedDeps_506_; lean_object* v_messages_507_; lean_object* v_infoState_508_; lean_object* v_snapshotTasks_509_; uint16_t v___x_510_; uint16_t v___x_511_; uint16_t v___x_512_; uint8_t v___x_513_; 
v___x_500_ = lean_st_ref_take(v___y_488_);
v_env_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc_ref(v_env_501_);
v_nextMacroScope_502_ = lean_ctor_get(v___x_500_, 1);
lean_inc(v_nextMacroScope_502_);
v_ngen_503_ = lean_ctor_get(v___x_500_, 2);
lean_inc_ref(v_ngen_503_);
v_auxDeclNGen_504_ = lean_ctor_get(v___x_500_, 3);
lean_inc_ref(v_auxDeclNGen_504_);
v_traceState_505_ = lean_ctor_get(v___x_500_, 4);
lean_inc_ref(v_traceState_505_);
v_recordedDeps_506_ = lean_ctor_get(v___x_500_, 6);
lean_inc_ref(v_recordedDeps_506_);
v_messages_507_ = lean_ctor_get(v___x_500_, 7);
lean_inc_ref(v_messages_507_);
v_infoState_508_ = lean_ctor_get(v___x_500_, 8);
lean_inc_ref(v_infoState_508_);
v_snapshotTasks_509_ = lean_ctor_get(v___x_500_, 9);
lean_inc_ref(v_snapshotTasks_509_);
lean_dec(v___x_500_);
v___x_510_ = 512;
v___x_511_ = lean_uint16_land(v___y_487_, v___x_510_);
v___x_512_ = 0;
v___x_513_ = lean_uint16_dec_eq(v___x_511_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; 
v___x_514_ = l_Lean_Kernel_enableDiag(v_env_501_, v___y_489_);
v_nextMacroScope_463_ = v_nextMacroScope_502_;
v_ngen_464_ = v_ngen_503_;
v_auxDeclNGen_465_ = v_auxDeclNGen_504_;
v_traceState_466_ = v_traceState_505_;
v_recordedDeps_467_ = v_recordedDeps_506_;
v_messages_468_ = v_messages_507_;
v_infoState_469_ = v_infoState_508_;
v_snapshotTasks_470_ = v_snapshotTasks_509_;
v___y_471_ = v___y_487_;
v___y_472_ = v___y_488_;
v___y_473_ = v___y_489_;
v___y_474_ = v___y_490_;
v___y_475_ = v___y_491_;
v___y_476_ = v___y_492_;
v___y_477_ = v___y_493_;
v___y_478_ = v___y_494_;
v___y_479_ = v___y_495_;
v___y_480_ = v___y_496_;
v___y_481_ = v___y_497_;
v___y_482_ = v___y_498_;
v___y_483_ = v___x_514_;
goto v___jp_462_;
}
else
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_Kernel_enableDiag(v_env_501_, v___y_499_);
v_nextMacroScope_463_ = v_nextMacroScope_502_;
v_ngen_464_ = v_ngen_503_;
v_auxDeclNGen_465_ = v_auxDeclNGen_504_;
v_traceState_466_ = v_traceState_505_;
v_recordedDeps_467_ = v_recordedDeps_506_;
v_messages_468_ = v_messages_507_;
v_infoState_469_ = v_infoState_508_;
v_snapshotTasks_470_ = v_snapshotTasks_509_;
v___y_471_ = v___y_487_;
v___y_472_ = v___y_488_;
v___y_473_ = v___y_489_;
v___y_474_ = v___y_490_;
v___y_475_ = v___y_491_;
v___y_476_ = v___y_492_;
v___y_477_ = v___y_493_;
v___y_478_ = v___y_494_;
v___y_479_ = v___y_495_;
v___y_480_ = v___y_496_;
v___y_481_ = v___y_497_;
v___y_482_ = v___y_498_;
v___y_483_ = v___x_515_;
goto v___jp_462_;
}
}
v___jp_516_:
{
uint16_t v___x_528_; lean_object* v___x_529_; lean_object* v_env_530_; uint8_t v___x_531_; uint16_t v___x_532_; uint16_t v___x_533_; uint16_t v___x_534_; uint8_t v___x_535_; 
v___x_528_ = l_Lean_OptionFlags_ofOptions(v___y_527_);
v___x_529_ = lean_st_ref_get(v___y_520_);
v_env_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc_ref(v_env_530_);
lean_dec(v___x_529_);
v___x_531_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_530_);
lean_dec_ref(v_env_530_);
v___x_532_ = 512;
v___x_533_ = lean_uint16_land(v___x_528_, v___x_532_);
v___x_534_ = 0;
v___x_535_ = lean_uint16_dec_eq(v___x_533_, v___x_534_);
if (v___x_535_ == 0)
{
if (v___x_531_ == 0)
{
v___y_487_ = v___x_528_;
v___y_488_ = v___y_520_;
v___y_489_ = v___y_522_;
v___y_490_ = v___y_521_;
v___y_491_ = v___y_523_;
v___y_492_ = v___y_527_;
v___y_493_ = v___y_517_;
v___y_494_ = v___y_518_;
v___y_495_ = v___y_519_;
v___y_496_ = v___y_525_;
v___y_497_ = v___y_524_;
v___y_498_ = v___y_526_;
v___y_499_ = v___x_531_;
goto v___jp_486_;
}
else
{
v___y_414_ = v___x_528_;
v___y_415_ = v___y_518_;
v___y_416_ = v___y_519_;
v___y_417_ = v___y_522_;
v___y_418_ = v___y_521_;
v___y_419_ = v___y_525_;
v___y_420_ = v___y_524_;
v___y_421_ = v___y_523_;
v___y_422_ = v___y_526_;
v___y_423_ = v___y_527_;
v___y_424_ = v___y_517_;
v___y_425_ = v___y_520_;
goto v___jp_413_;
}
}
else
{
if (v___x_531_ == 0)
{
v___y_414_ = v___x_528_;
v___y_415_ = v___y_518_;
v___y_416_ = v___y_519_;
v___y_417_ = v___y_522_;
v___y_418_ = v___y_521_;
v___y_419_ = v___y_525_;
v___y_420_ = v___y_524_;
v___y_421_ = v___y_523_;
v___y_422_ = v___y_526_;
v___y_423_ = v___y_527_;
v___y_424_ = v___y_517_;
v___y_425_ = v___y_520_;
goto v___jp_413_;
}
else
{
v___y_487_ = v___x_528_;
v___y_488_ = v___y_520_;
v___y_489_ = v___y_522_;
v___y_490_ = v___y_521_;
v___y_491_ = v___y_523_;
v___y_492_ = v___y_527_;
v___y_493_ = v___y_517_;
v___y_494_ = v___y_518_;
v___y_495_ = v___y_519_;
v___y_496_ = v___y_525_;
v___y_497_ = v___y_524_;
v___y_498_ = v___y_526_;
v___y_499_ = v___y_524_;
goto v___jp_486_;
}
}
}
v___jp_536_:
{
lean_object* v_toCold_548_; lean_object* v_currRecDepth_549_; lean_object* v_ref_550_; uint8_t v_suppressElabErrors_551_; uint8_t v_checkDeprecated_552_; uint8_t v_isRecordingDeps_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_584_; 
v_toCold_548_ = lean_ctor_get(v___y_546_, 0);
v_currRecDepth_549_ = lean_ctor_get(v___y_546_, 1);
v_ref_550_ = lean_ctor_get(v___y_546_, 2);
v_suppressElabErrors_551_ = lean_ctor_get_uint8(v___y_546_, sizeof(void*)*3 + 2);
v_checkDeprecated_552_ = lean_ctor_get_uint8(v___y_546_, sizeof(void*)*3 + 3);
v_isRecordingDeps_553_ = lean_ctor_get_uint8(v___y_546_, sizeof(void*)*3 + 4);
v_isSharedCheck_584_ = !lean_is_exclusive(v___y_546_);
if (v_isSharedCheck_584_ == 0)
{
v___x_555_ = v___y_546_;
v_isShared_556_ = v_isSharedCheck_584_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_ref_550_);
lean_inc(v_currRecDepth_549_);
lean_inc(v_toCold_548_);
lean_dec(v___y_546_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_584_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v_fileName_557_; lean_object* v_fileMap_558_; lean_object* v_currNamespace_559_; lean_object* v_openDecls_560_; lean_object* v_initHeartbeats_561_; lean_object* v_maxHeartbeats_562_; lean_object* v_quotContext_563_; lean_object* v_currMacroScope_564_; lean_object* v_cancelTk_x3f_565_; lean_object* v_inheritedTraceOptions_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_581_; 
v_fileName_557_ = lean_ctor_get(v_toCold_548_, 0);
v_fileMap_558_ = lean_ctor_get(v_toCold_548_, 1);
v_currNamespace_559_ = lean_ctor_get(v_toCold_548_, 4);
v_openDecls_560_ = lean_ctor_get(v_toCold_548_, 5);
v_initHeartbeats_561_ = lean_ctor_get(v_toCold_548_, 6);
v_maxHeartbeats_562_ = lean_ctor_get(v_toCold_548_, 7);
v_quotContext_563_ = lean_ctor_get(v_toCold_548_, 8);
v_currMacroScope_564_ = lean_ctor_get(v_toCold_548_, 9);
v_cancelTk_x3f_565_ = lean_ctor_get(v_toCold_548_, 10);
v_inheritedTraceOptions_566_ = lean_ctor_get(v_toCold_548_, 11);
v_isSharedCheck_581_ = !lean_is_exclusive(v_toCold_548_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; lean_object* v_unused_583_; 
v_unused_582_ = lean_ctor_get(v_toCold_548_, 3);
lean_dec(v_unused_582_);
v_unused_583_ = lean_ctor_get(v_toCold_548_, 2);
lean_dec(v_unused_583_);
v___x_568_ = v_toCold_548_;
v_isShared_569_ = v_isSharedCheck_581_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_inheritedTraceOptions_566_);
lean_inc(v_cancelTk_x3f_565_);
lean_inc(v_currMacroScope_564_);
lean_inc(v_quotContext_563_);
lean_inc(v_maxHeartbeats_562_);
lean_inc(v_initHeartbeats_561_);
lean_inc(v_openDecls_560_);
lean_inc(v_currNamespace_559_);
lean_inc(v_fileMap_558_);
lean_inc(v_fileName_557_);
lean_dec(v_toCold_548_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_581_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_570_ = l_Lean_maxRecDepth;
v___x_571_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v___y_541_, v___x_570_);
lean_inc_ref(v___y_541_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 3, v___x_571_);
lean_ctor_set(v___x_568_, 2, v___y_541_);
v___x_573_ = v___x_568_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_fileName_557_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_fileMap_558_);
lean_ctor_set(v_reuseFailAlloc_580_, 2, v___y_541_);
lean_ctor_set(v_reuseFailAlloc_580_, 3, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_580_, 4, v_currNamespace_559_);
lean_ctor_set(v_reuseFailAlloc_580_, 5, v_openDecls_560_);
lean_ctor_set(v_reuseFailAlloc_580_, 6, v_initHeartbeats_561_);
lean_ctor_set(v_reuseFailAlloc_580_, 7, v_maxHeartbeats_562_);
lean_ctor_set(v_reuseFailAlloc_580_, 8, v_quotContext_563_);
lean_ctor_set(v_reuseFailAlloc_580_, 9, v_currMacroScope_564_);
lean_ctor_set(v_reuseFailAlloc_580_, 10, v_cancelTk_x3f_565_);
lean_ctor_set(v_reuseFailAlloc_580_, 11, v_inheritedTraceOptions_566_);
v___x_573_ = v_reuseFailAlloc_580_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_575_; 
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_573_);
v___x_575_ = v___x_555_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_currRecDepth_549_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_ref_550_);
lean_ctor_set_uint8(v_reuseFailAlloc_579_, sizeof(void*)*3 + 2, v_suppressElabErrors_551_);
lean_ctor_set_uint8(v_reuseFailAlloc_579_, sizeof(void*)*3 + 3, v_checkDeprecated_552_);
lean_ctor_set_uint8(v_reuseFailAlloc_579_, sizeof(void*)*3 + 4, v_isRecordingDeps_553_);
v___x_575_ = v_reuseFailAlloc_579_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_ctor_set_uint16(v___x_575_, sizeof(void*)*3, v___y_538_);
if (v_isRecordingDeps_553_ == 0)
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_577_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4(v___y_541_, v___x_576_, v_isRecordingDeps_553_);
v___y_517_ = v___x_575_;
v___y_518_ = v___x_570_;
v___y_519_ = v___y_537_;
v___y_520_ = v___y_547_;
v___y_521_ = v___y_540_;
v___y_522_ = v___y_539_;
v___y_523_ = v___y_544_;
v___y_524_ = v___y_543_;
v___y_525_ = v___y_542_;
v___y_526_ = v___y_545_;
v___y_527_ = v___x_577_;
goto v___jp_516_;
}
else
{
lean_object* v___x_578_; 
v___x_578_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v___y_541_);
v___y_517_ = v___x_575_;
v___y_518_ = v___x_570_;
v___y_519_ = v___y_537_;
v___y_520_ = v___y_547_;
v___y_521_ = v___y_540_;
v___y_522_ = v___y_539_;
v___y_523_ = v___y_544_;
v___y_524_ = v___y_543_;
v___y_525_ = v___y_542_;
v___y_526_ = v___y_545_;
v___y_527_ = v___x_578_;
goto v___jp_516_;
}
}
}
}
}
}
v___jp_585_:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
lean_inc_ref(v___y_589_);
v___x_606_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_606_, 0, v___y_605_);
lean_ctor_set(v___x_606_, 1, v_nextMacroScope_592_);
lean_ctor_set(v___x_606_, 2, v_ngen_593_);
lean_ctor_set(v___x_606_, 3, v_auxDeclNGen_594_);
lean_ctor_set(v___x_606_, 4, v_traceState_595_);
lean_ctor_set(v___x_606_, 5, v___y_589_);
lean_ctor_set(v___x_606_, 6, v_recordedDeps_596_);
lean_ctor_set(v___x_606_, 7, v_messages_597_);
lean_ctor_set(v___x_606_, 8, v_infoState_598_);
lean_ctor_set(v___x_606_, 9, v_snapshotTasks_599_);
v___x_607_ = lean_st_ref_put(v___y_590_, v___x_606_);
v___y_537_ = v___y_600_;
v___y_538_ = v___y_601_;
v___y_539_ = v___y_586_;
v___y_540_ = v___y_587_;
v___y_541_ = v___y_588_;
v___y_542_ = v___y_602_;
v___y_543_ = v___y_603_;
v___y_544_ = v___y_589_;
v___y_545_ = v___y_604_;
v___y_546_ = v___y_591_;
v___y_547_ = v___y_590_;
goto v___jp_536_;
}
v___jp_608_:
{
lean_object* v___x_621_; lean_object* v_env_622_; lean_object* v_nextMacroScope_623_; lean_object* v_ngen_624_; lean_object* v_auxDeclNGen_625_; lean_object* v_traceState_626_; lean_object* v_recordedDeps_627_; lean_object* v_messages_628_; lean_object* v_infoState_629_; lean_object* v_snapshotTasks_630_; uint16_t v___x_631_; uint16_t v___x_632_; uint16_t v___x_633_; uint8_t v___x_634_; 
v___x_621_ = lean_st_ref_take(v___y_617_);
v_env_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc_ref(v_env_622_);
v_nextMacroScope_623_ = lean_ctor_get(v___x_621_, 1);
lean_inc(v_nextMacroScope_623_);
v_ngen_624_ = lean_ctor_get(v___x_621_, 2);
lean_inc_ref(v_ngen_624_);
v_auxDeclNGen_625_ = lean_ctor_get(v___x_621_, 3);
lean_inc_ref(v_auxDeclNGen_625_);
v_traceState_626_ = lean_ctor_get(v___x_621_, 4);
lean_inc_ref(v_traceState_626_);
v_recordedDeps_627_ = lean_ctor_get(v___x_621_, 6);
lean_inc_ref(v_recordedDeps_627_);
v_messages_628_ = lean_ctor_get(v___x_621_, 7);
lean_inc_ref(v_messages_628_);
v_infoState_629_ = lean_ctor_get(v___x_621_, 8);
lean_inc_ref(v_infoState_629_);
v_snapshotTasks_630_ = lean_ctor_get(v___x_621_, 9);
lean_inc_ref(v_snapshotTasks_630_);
lean_dec(v___x_621_);
v___x_631_ = 512;
v___x_632_ = lean_uint16_land(v___y_609_, v___x_631_);
v___x_633_ = 0;
v___x_634_ = lean_uint16_dec_eq(v___x_632_, v___x_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; 
v___x_635_ = l_Lean_Kernel_enableDiag(v_env_622_, v___y_613_);
v___y_586_ = v___y_613_;
v___y_587_ = v___y_612_;
v___y_588_ = v___y_611_;
v___y_589_ = v___y_616_;
v___y_590_ = v___y_617_;
v___y_591_ = v___y_618_;
v_nextMacroScope_592_ = v_nextMacroScope_623_;
v_ngen_593_ = v_ngen_624_;
v_auxDeclNGen_594_ = v_auxDeclNGen_625_;
v_traceState_595_ = v_traceState_626_;
v_recordedDeps_596_ = v_recordedDeps_627_;
v_messages_597_ = v_messages_628_;
v_infoState_598_ = v_infoState_629_;
v_snapshotTasks_599_ = v_snapshotTasks_630_;
v___y_600_ = v___y_610_;
v___y_601_ = v___y_609_;
v___y_602_ = v___y_615_;
v___y_603_ = v___y_614_;
v___y_604_ = v___y_619_;
v___y_605_ = v___x_635_;
goto v___jp_585_;
}
else
{
lean_object* v___x_636_; 
v___x_636_ = l_Lean_Kernel_enableDiag(v_env_622_, v___y_620_);
v___y_586_ = v___y_613_;
v___y_587_ = v___y_612_;
v___y_588_ = v___y_611_;
v___y_589_ = v___y_616_;
v___y_590_ = v___y_617_;
v___y_591_ = v___y_618_;
v_nextMacroScope_592_ = v_nextMacroScope_623_;
v_ngen_593_ = v_ngen_624_;
v_auxDeclNGen_594_ = v_auxDeclNGen_625_;
v_traceState_595_ = v_traceState_626_;
v_recordedDeps_596_ = v_recordedDeps_627_;
v_messages_597_ = v_messages_628_;
v_infoState_598_ = v_infoState_629_;
v_snapshotTasks_599_ = v_snapshotTasks_630_;
v___y_600_ = v___y_610_;
v___y_601_ = v___y_609_;
v___y_602_ = v___y_615_;
v___y_603_ = v___y_614_;
v___y_604_ = v___y_619_;
v___y_605_ = v___x_636_;
goto v___jp_585_;
}
}
v___jp_637_:
{
uint16_t v___x_648_; lean_object* v___x_649_; lean_object* v_env_650_; uint8_t v___x_651_; uint16_t v___x_652_; uint16_t v___x_653_; uint16_t v___x_654_; uint8_t v___x_655_; 
v___x_648_ = l_Lean_OptionFlags_ofOptions(v___y_647_);
v___x_649_ = lean_st_ref_get(v___y_641_);
v_env_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc_ref(v_env_650_);
lean_dec(v___x_649_);
v___x_651_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_650_);
lean_dec_ref(v_env_650_);
v___x_652_ = 512;
v___x_653_ = lean_uint16_land(v___x_648_, v___x_652_);
v___x_654_ = 0;
v___x_655_ = lean_uint16_dec_eq(v___x_653_, v___x_654_);
if (v___x_655_ == 0)
{
if (v___x_651_ == 0)
{
v___y_609_ = v___x_648_;
v___y_610_ = v___y_638_;
v___y_611_ = v___y_647_;
v___y_612_ = v___y_639_;
v___y_613_ = v___y_640_;
v___y_614_ = v___y_643_;
v___y_615_ = v___y_644_;
v___y_616_ = v___y_642_;
v___y_617_ = v___y_641_;
v___y_618_ = v___y_645_;
v___y_619_ = v___y_646_;
v___y_620_ = v___x_651_;
goto v___jp_608_;
}
else
{
v___y_537_ = v___y_638_;
v___y_538_ = v___x_648_;
v___y_539_ = v___y_640_;
v___y_540_ = v___y_639_;
v___y_541_ = v___y_647_;
v___y_542_ = v___y_644_;
v___y_543_ = v___y_643_;
v___y_544_ = v___y_642_;
v___y_545_ = v___y_646_;
v___y_546_ = v___y_645_;
v___y_547_ = v___y_641_;
goto v___jp_536_;
}
}
else
{
if (v___x_651_ == 0)
{
v___y_537_ = v___y_638_;
v___y_538_ = v___x_648_;
v___y_539_ = v___y_640_;
v___y_540_ = v___y_639_;
v___y_541_ = v___y_647_;
v___y_542_ = v___y_644_;
v___y_543_ = v___y_643_;
v___y_544_ = v___y_642_;
v___y_545_ = v___y_646_;
v___y_546_ = v___y_645_;
v___y_547_ = v___y_641_;
goto v___jp_536_;
}
else
{
v___y_609_ = v___x_648_;
v___y_610_ = v___y_638_;
v___y_611_ = v___y_647_;
v___y_612_ = v___y_639_;
v___y_613_ = v___y_640_;
v___y_614_ = v___y_643_;
v___y_615_ = v___y_644_;
v___y_616_ = v___y_642_;
v___y_617_ = v___y_641_;
v___y_618_ = v___y_645_;
v___y_619_ = v___y_646_;
v___y_620_ = v___y_643_;
goto v___jp_608_;
}
}
}
v___jp_656_:
{
lean_object* v___x_666_; 
lean_inc(v___y_665_);
lean_inc_ref(v___y_664_);
lean_inc(v___y_663_);
lean_inc_ref(v___y_662_);
lean_inc_ref(v___y_661_);
v___x_666_ = lean_infer_type(v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc_n(v_a_667_, 2);
lean_dec_ref_known(v___x_666_, 1);
lean_inc(v___y_665_);
lean_inc_ref(v___y_664_);
lean_inc(v___y_663_);
lean_inc_ref(v___y_662_);
v___x_668_ = lean_apply_6(v_checkType_276_, v_a_667_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, lean_box(0));
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v_env_676_; lean_object* v_nextMacroScope_677_; lean_object* v_ngen_678_; lean_object* v_auxDeclNGen_679_; lean_object* v_traceState_680_; lean_object* v_recordedDeps_681_; lean_object* v_messages_682_; lean_object* v_infoState_683_; lean_object* v_snapshotTasks_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_734_; 
lean_dec_ref_known(v___x_668_, 1);
v___x_669_ = lean_array_to_list(v___y_659_);
lean_inc_n(v___y_660_, 2);
v___x_670_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_670_, 0, v___y_660_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
lean_ctor_set(v___x_670_, 2, v_a_667_);
v___x_671_ = lean_box(0);
lean_inc(v___y_658_);
v___x_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_672_, 0, v___y_660_);
lean_ctor_set(v___x_672_, 1, v___y_658_);
v___x_673_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_673_, 0, v___x_670_);
lean_ctor_set(v___x_673_, 1, v___y_661_);
lean_ctor_set(v___x_673_, 2, v___x_671_);
lean_ctor_set(v___x_673_, 3, v___x_672_);
lean_ctor_set_uint8(v___x_673_, sizeof(void*)*4, v_safety_277_);
v___x_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
v___x_675_ = lean_st_ref_take(v___y_665_);
v_env_676_ = lean_ctor_get(v___x_675_, 0);
v_nextMacroScope_677_ = lean_ctor_get(v___x_675_, 1);
v_ngen_678_ = lean_ctor_get(v___x_675_, 2);
v_auxDeclNGen_679_ = lean_ctor_get(v___x_675_, 3);
v_traceState_680_ = lean_ctor_get(v___x_675_, 4);
v_recordedDeps_681_ = lean_ctor_get(v___x_675_, 6);
v_messages_682_ = lean_ctor_get(v___x_675_, 7);
v_infoState_683_ = lean_ctor_get(v___x_675_, 8);
v_snapshotTasks_684_ = lean_ctor_get(v___x_675_, 9);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; 
v_unused_735_ = lean_ctor_get(v___x_675_, 5);
lean_dec(v_unused_735_);
v___x_686_ = v___x_675_;
v_isShared_687_ = v_isSharedCheck_734_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_snapshotTasks_684_);
lean_inc(v_infoState_683_);
lean_inc(v_messages_682_);
lean_inc(v_recordedDeps_681_);
lean_inc(v_traceState_680_);
lean_inc(v_auxDeclNGen_679_);
lean_inc(v_ngen_678_);
lean_inc(v_nextMacroScope_677_);
lean_inc(v_env_676_);
lean_dec(v___x_675_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_734_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_692_; 
lean_inc(v___y_660_);
v___x_688_ = l_Lean_markMeta(v_env_676_, v___y_660_);
v___x_689_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0);
v___x_690_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 5, v___x_690_);
lean_ctor_set(v___x_686_, 0, v___x_688_);
v___x_692_ = v___x_686_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_nextMacroScope_677_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v_ngen_678_);
lean_ctor_set(v_reuseFailAlloc_733_, 3, v_auxDeclNGen_679_);
lean_ctor_set(v_reuseFailAlloc_733_, 4, v_traceState_680_);
lean_ctor_set(v_reuseFailAlloc_733_, 5, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_733_, 6, v_recordedDeps_681_);
lean_ctor_set(v_reuseFailAlloc_733_, 7, v_messages_682_);
lean_ctor_set(v_reuseFailAlloc_733_, 8, v_infoState_683_);
lean_ctor_set(v_reuseFailAlloc_733_, 9, v_snapshotTasks_684_);
v___x_692_ = v_reuseFailAlloc_733_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v_mctx_695_; lean_object* v_zetaDeltaFVarIds_696_; lean_object* v_postponed_697_; lean_object* v_diag_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_731_; 
v___x_693_ = lean_st_ref_put(v___y_665_, v___x_692_);
v___x_694_ = lean_st_ref_take(v___y_663_);
v_mctx_695_ = lean_ctor_get(v___x_694_, 0);
v_zetaDeltaFVarIds_696_ = lean_ctor_get(v___x_694_, 2);
v_postponed_697_ = lean_ctor_get(v___x_694_, 3);
v_diag_698_ = lean_ctor_get(v___x_694_, 4);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_731_ == 0)
{
lean_object* v_unused_732_; 
v_unused_732_ = lean_ctor_get(v___x_694_, 1);
lean_dec(v_unused_732_);
v___x_700_ = v___x_694_;
v_isShared_701_ = v_isSharedCheck_731_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_diag_698_);
lean_inc(v_postponed_697_);
lean_inc(v_zetaDeltaFVarIds_696_);
lean_inc(v_mctx_695_);
lean_dec(v___x_694_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_731_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_702_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
v___x_703_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
v___x_704_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_704_, 0, v___x_689_);
lean_ctor_set(v___x_704_, 1, v___x_689_);
lean_ctor_set(v___x_704_, 2, v___y_657_);
v___x_705_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_705_, 0, v___x_702_);
lean_ctor_set(v___x_705_, 1, v___x_689_);
lean_ctor_set(v___x_705_, 2, v___x_703_);
lean_ctor_set(v___x_705_, 3, v___x_689_);
lean_ctor_set(v___x_705_, 4, v___x_689_);
lean_ctor_set(v___x_705_, 5, v___x_689_);
lean_ctor_set(v___x_705_, 6, v___x_689_);
lean_ctor_set(v___x_705_, 7, v___x_704_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 1, v___x_705_);
v___x_707_ = v___x_700_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_mctx_695_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_730_, 2, v_zetaDeltaFVarIds_696_);
lean_ctor_set(v_reuseFailAlloc_730_, 3, v_postponed_697_);
lean_ctor_set(v_reuseFailAlloc_730_, 4, v_diag_698_);
v___x_707_ = v_reuseFailAlloc_730_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v_env_710_; lean_object* v_checked_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_708_ = lean_st_ref_put(v___y_663_, v___x_707_);
v___x_709_ = lean_st_ref_get(v___y_665_);
v_env_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc_ref(v_env_710_);
lean_dec(v___x_709_);
v_checked_711_ = lean_ctor_get(v_env_710_, 2);
lean_inc_ref(v_checked_711_);
lean_dec_ref(v_env_710_);
v___x_712_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4));
v___x_713_ = l_Lean_traceBlock___redArg(v___x_712_, v_checked_711_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_toCold_714_; uint8_t v_isRecordingDeps_715_; lean_object* v_options_716_; uint8_t v___x_717_; uint8_t v___x_718_; 
lean_dec_ref_known(v___x_713_, 1);
v_toCold_714_ = lean_ctor_get(v___y_664_, 0);
v_isRecordingDeps_715_ = lean_ctor_get_uint8(v___y_664_, sizeof(void*)*3 + 4);
v_options_716_ = lean_ctor_get(v_toCold_714_, 2);
v___x_717_ = 1;
v___x_718_ = 0;
if (v_isRecordingDeps_715_ == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = l_Lean_Elab_async;
lean_inc_ref(v_options_716_);
v___x_720_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__4(v_options_716_, v___x_719_, v_isRecordingDeps_715_);
v___y_638_ = v___y_663_;
v___y_639_ = v___x_674_;
v___y_640_ = v___x_717_;
v___y_641_ = v___y_665_;
v___y_642_ = v___x_690_;
v___y_643_ = v___x_718_;
v___y_644_ = v___y_660_;
v___y_645_ = v___y_664_;
v___y_646_ = v___y_662_;
v___y_647_ = v___x_720_;
goto v___jp_637_;
}
else
{
lean_object* v___x_721_; 
lean_inc_ref(v_options_716_);
v___x_721_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_716_);
v___y_638_ = v___y_663_;
v___y_639_ = v___x_674_;
v___y_640_ = v___x_717_;
v___y_641_ = v___y_665_;
v___y_642_ = v___x_690_;
v___y_643_ = v___x_718_;
v___y_644_ = v___y_660_;
v___y_645_ = v___y_664_;
v___y_646_ = v___y_662_;
v___y_647_ = v___x_721_;
goto v___jp_637_;
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec_ref_known(v___x_674_, 1);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_660_);
v_a_722_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_713_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_713_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
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
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
lean_dec(v_a_667_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_657_);
v_a_736_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___x_668_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_668_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_657_);
lean_dec_ref(v_checkType_276_);
v_a_744_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_666_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_666_);
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
v___jp_752_:
{
lean_object* v___x_753_; lean_object* v_env_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_753_ = lean_st_ref_get(v___y_282_);
v_env_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc_ref(v_env_754_);
lean_dec(v___x_753_);
v___x_755_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6));
v___x_756_ = l_Lean_Core_mkFreshUserName(v___x_755_, v___y_281_, v___y_282_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_756_, 1);
v___x_758_ = l_Lean_mkPrivateName(v_env_754_, v_a_757_);
lean_dec_ref(v_env_754_);
v___x_759_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_value_278_, v___y_280_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v_params_764_; lean_object* v___x_765_; uint8_t v___x_766_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc_n(v_a_760_, 2);
lean_dec_ref_known(v___x_759_, 1);
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10);
v___x_763_ = l_Lean_collectLevelParams(v___x_762_, v_a_760_);
v_params_764_ = lean_ctor_get(v___x_763_, 2);
lean_inc_ref(v_params_764_);
lean_dec_ref(v___x_763_);
v___x_765_ = lean_box(0);
v___x_766_ = l_Lean_Expr_hasMVar(v_a_760_);
if (v___x_766_ == 0)
{
v___y_657_ = v___x_761_;
v___y_658_ = v___x_765_;
v___y_659_ = v_params_764_;
v___y_660_ = v___x_758_;
v___y_661_ = v_a_760_;
v___y_662_ = v___y_279_;
v___y_663_ = v___y_280_;
v___y_664_ = v___y_281_;
v___y_665_ = v___y_282_;
goto v___jp_656_;
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_767_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12);
lean_inc(v_a_760_);
v___x_768_ = l_Lean_indentExpr(v_a_760_);
v___x_769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_769_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_dec_ref_known(v___x_770_, 1);
v___y_657_ = v___x_761_;
v___y_658_ = v___x_765_;
v___y_659_ = v_params_764_;
v___y_660_ = v___x_758_;
v___y_661_ = v_a_760_;
v___y_662_ = v___y_279_;
v___y_663_ = v___y_280_;
v___y_664_ = v___y_281_;
v___y_665_ = v___y_282_;
goto v___jp_656_;
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v_params_764_);
lean_dec(v_a_760_);
lean_dec(v___x_758_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec_ref(v_checkType_276_);
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
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
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v___x_758_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec_ref(v_checkType_276_);
v_a_779_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_759_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_759_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec_ref(v_env_754_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec_ref(v_value_278_);
lean_dec_ref(v_checkType_276_);
v_a_787_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_756_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_756_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
v___jp_795_:
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_mctx_809_; lean_object* v_zetaDeltaFVarIds_810_; lean_object* v_postponed_811_; lean_object* v_diag_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_821_; 
v___x_805_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1);
v___x_806_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_806_, 0, v___y_804_);
lean_ctor_set(v___x_806_, 1, v_nextMacroScope_796_);
lean_ctor_set(v___x_806_, 2, v_ngen_797_);
lean_ctor_set(v___x_806_, 3, v_auxDeclNGen_798_);
lean_ctor_set(v___x_806_, 4, v_traceState_799_);
lean_ctor_set(v___x_806_, 5, v___x_805_);
lean_ctor_set(v___x_806_, 6, v_recordedDeps_800_);
lean_ctor_set(v___x_806_, 7, v_messages_801_);
lean_ctor_set(v___x_806_, 8, v_infoState_802_);
lean_ctor_set(v___x_806_, 9, v_snapshotTasks_803_);
v___x_807_ = lean_st_ref_put(v___y_282_, v___x_806_);
v___x_808_ = lean_st_ref_take(v___y_280_);
v_mctx_809_ = lean_ctor_get(v___x_808_, 0);
v_zetaDeltaFVarIds_810_ = lean_ctor_get(v___x_808_, 2);
v_postponed_811_ = lean_ctor_get(v___x_808_, 3);
v_diag_812_ = lean_ctor_get(v___x_808_, 4);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v___x_808_, 1);
lean_dec(v_unused_822_);
v___x_814_ = v___x_808_;
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_diag_812_);
lean_inc(v_postponed_811_);
lean_inc(v_zetaDeltaFVarIds_810_);
lean_inc(v_mctx_809_);
lean_dec(v___x_808_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 1, v___x_816_);
v___x_818_ = v___x_814_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_mctx_809_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v___x_816_);
lean_ctor_set(v_reuseFailAlloc_820_, 2, v_zetaDeltaFVarIds_810_);
lean_ctor_set(v_reuseFailAlloc_820_, 3, v_postponed_811_);
lean_ctor_set(v_reuseFailAlloc_820_, 4, v_diag_812_);
v___x_818_ = v_reuseFailAlloc_820_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
lean_object* v___x_819_; 
v___x_819_ = lean_st_ref_put(v___y_280_, v___x_818_);
goto v___jp_752_;
}
}
}
v___jp_824_:
{
lean_object* v___x_825_; lean_object* v_env_826_; lean_object* v_nextMacroScope_827_; lean_object* v_ngen_828_; lean_object* v_auxDeclNGen_829_; lean_object* v_traceState_830_; lean_object* v_recordedDeps_831_; lean_object* v_messages_832_; lean_object* v_infoState_833_; lean_object* v_snapshotTasks_834_; lean_object* v___x_835_; 
v___x_825_ = lean_st_ref_take(v___y_282_);
v_env_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc_ref_n(v_env_826_, 2);
v_nextMacroScope_827_ = lean_ctor_get(v___x_825_, 1);
lean_inc(v_nextMacroScope_827_);
v_ngen_828_ = lean_ctor_get(v___x_825_, 2);
lean_inc_ref(v_ngen_828_);
v_auxDeclNGen_829_ = lean_ctor_get(v___x_825_, 3);
lean_inc_ref(v_auxDeclNGen_829_);
v_traceState_830_ = lean_ctor_get(v___x_825_, 4);
lean_inc_ref(v_traceState_830_);
v_recordedDeps_831_ = lean_ctor_get(v___x_825_, 6);
lean_inc_ref(v_recordedDeps_831_);
v_messages_832_ = lean_ctor_get(v___x_825_, 7);
lean_inc_ref(v_messages_832_);
v_infoState_833_ = lean_ctor_get(v___x_825_, 8);
lean_inc_ref(v_infoState_833_);
v_snapshotTasks_834_ = lean_ctor_get(v___x_825_, 9);
lean_inc_ref(v_snapshotTasks_834_);
lean_dec(v___x_825_);
v___x_835_ = l_Lean_Environment_importEnv_x3f(v_env_826_);
if (lean_obj_tag(v___x_835_) == 0)
{
v_nextMacroScope_796_ = v_nextMacroScope_827_;
v_ngen_797_ = v_ngen_828_;
v_auxDeclNGen_798_ = v_auxDeclNGen_829_;
v_traceState_799_ = v_traceState_830_;
v_recordedDeps_800_ = v_recordedDeps_831_;
v_messages_801_ = v_messages_832_;
v_infoState_802_ = v_infoState_833_;
v_snapshotTasks_803_ = v_snapshotTasks_834_;
v___y_804_ = v_env_826_;
goto v___jp_795_;
}
else
{
lean_object* v_val_836_; 
lean_dec_ref(v_env_826_);
v_val_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_val_836_);
lean_dec_ref_known(v___x_835_, 1);
v_nextMacroScope_796_ = v_nextMacroScope_827_;
v_ngen_797_ = v_ngen_828_;
v_auxDeclNGen_798_ = v_auxDeclNGen_829_;
v_traceState_799_ = v_traceState_830_;
v_recordedDeps_800_ = v_recordedDeps_831_;
v_messages_801_ = v_messages_832_;
v_infoState_802_ = v_infoState_833_;
v_snapshotTasks_803_ = v_snapshotTasks_834_;
v___y_804_ = v_val_836_;
goto v___jp_795_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___boxed(lean_object* v_checkMeta_845_, lean_object* v_checkType_846_, lean_object* v_safety_847_, lean_object* v_value_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
uint8_t v_checkMeta_boxed_854_; uint8_t v_safety_boxed_855_; lean_object* v_res_856_; 
v_checkMeta_boxed_854_ = lean_unbox(v_checkMeta_845_);
v_safety_boxed_855_ = lean_unbox(v_safety_847_);
v_res_856_ = l_Lean_Meta_evalExprCore___redArg___lam__0(v_checkMeta_boxed_854_, v_checkType_846_, v_safety_boxed_855_, v_value_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg(lean_object* v_env_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v___x_861_; lean_object* v_nextMacroScope_862_; lean_object* v_ngen_863_; lean_object* v_auxDeclNGen_864_; lean_object* v_traceState_865_; lean_object* v_recordedDeps_866_; lean_object* v_messages_867_; lean_object* v_infoState_868_; lean_object* v_snapshotTasks_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_895_; 
v___x_861_ = lean_st_ref_take(v___y_859_);
v_nextMacroScope_862_ = lean_ctor_get(v___x_861_, 1);
v_ngen_863_ = lean_ctor_get(v___x_861_, 2);
v_auxDeclNGen_864_ = lean_ctor_get(v___x_861_, 3);
v_traceState_865_ = lean_ctor_get(v___x_861_, 4);
v_recordedDeps_866_ = lean_ctor_get(v___x_861_, 6);
v_messages_867_ = lean_ctor_get(v___x_861_, 7);
v_infoState_868_ = lean_ctor_get(v___x_861_, 8);
v_snapshotTasks_869_ = lean_ctor_get(v___x_861_, 9);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_895_ == 0)
{
lean_object* v_unused_896_; lean_object* v_unused_897_; 
v_unused_896_ = lean_ctor_get(v___x_861_, 5);
lean_dec(v_unused_896_);
v_unused_897_ = lean_ctor_get(v___x_861_, 0);
lean_dec(v_unused_897_);
v___x_871_ = v___x_861_;
v_isShared_872_ = v_isSharedCheck_895_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_snapshotTasks_869_);
lean_inc(v_infoState_868_);
lean_inc(v_messages_867_);
lean_inc(v_recordedDeps_866_);
lean_inc(v_traceState_865_);
lean_inc(v_auxDeclNGen_864_);
lean_inc(v_ngen_863_);
lean_inc(v_nextMacroScope_862_);
lean_dec(v___x_861_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_895_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_873_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 5, v___x_873_);
lean_ctor_set(v___x_871_, 0, v_env_857_);
v___x_875_ = v___x_871_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_env_857_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_nextMacroScope_862_);
lean_ctor_set(v_reuseFailAlloc_894_, 2, v_ngen_863_);
lean_ctor_set(v_reuseFailAlloc_894_, 3, v_auxDeclNGen_864_);
lean_ctor_set(v_reuseFailAlloc_894_, 4, v_traceState_865_);
lean_ctor_set(v_reuseFailAlloc_894_, 5, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_894_, 6, v_recordedDeps_866_);
lean_ctor_set(v_reuseFailAlloc_894_, 7, v_messages_867_);
lean_ctor_set(v_reuseFailAlloc_894_, 8, v_infoState_868_);
lean_ctor_set(v_reuseFailAlloc_894_, 9, v_snapshotTasks_869_);
v___x_875_ = v_reuseFailAlloc_894_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_mctx_878_; lean_object* v_zetaDeltaFVarIds_879_; lean_object* v_postponed_880_; lean_object* v_diag_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_892_; 
v___x_876_ = lean_st_ref_put(v___y_859_, v___x_875_);
v___x_877_ = lean_st_ref_take(v___y_858_);
v_mctx_878_ = lean_ctor_get(v___x_877_, 0);
v_zetaDeltaFVarIds_879_ = lean_ctor_get(v___x_877_, 2);
v_postponed_880_ = lean_ctor_get(v___x_877_, 3);
v_diag_881_ = lean_ctor_get(v___x_877_, 4);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v___x_877_, 1);
lean_dec(v_unused_893_);
v___x_883_ = v___x_877_;
v_isShared_884_ = v_isSharedCheck_892_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_diag_881_);
lean_inc(v_postponed_880_);
lean_inc(v_zetaDeltaFVarIds_879_);
lean_inc(v_mctx_878_);
lean_dec(v___x_877_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_892_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_885_ = lean_box(0);
v___x_886_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__14);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 1, v___x_886_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_mctx_878_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_891_, 2, v_zetaDeltaFVarIds_879_);
lean_ctor_set(v_reuseFailAlloc_891_, 3, v_postponed_880_);
lean_ctor_set(v_reuseFailAlloc_891_, 4, v_diag_881_);
v___x_888_ = v_reuseFailAlloc_891_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = lean_st_ref_put(v___y_858_, v___x_888_);
v___x_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_890_, 0, v___x_885_);
return v___x_890_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg___boxed(lean_object* v_env_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg(v_env_898_, v___y_899_, v___y_900_);
lean_dec(v___y_900_);
lean_dec(v___y_899_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(lean_object* v_env_903_, lean_object* v_x_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v___x_910_; lean_object* v_env_911_; lean_object* v_a_913_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_910_ = lean_st_ref_get(v___y_908_);
v_env_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc_ref(v_env_911_);
lean_dec(v___x_910_);
v___x_923_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg(v_env_903_, v___y_906_, v___y_908_);
lean_dec_ref(v___x_923_);
lean_inc(v___y_908_);
lean_inc_ref(v___y_907_);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
v___x_924_ = lean_apply_5(v_x_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, lean_box(0));
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_925_);
lean_dec_ref_known(v___x_924_, 1);
v___x_926_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg(v_env_911_, v___y_906_, v___y_908_);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_933_ == 0)
{
lean_object* v_unused_934_; 
v_unused_934_ = lean_ctor_get(v___x_926_, 0);
lean_dec(v_unused_934_);
v___x_928_ = v___x_926_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_dec(v___x_926_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v_a_925_);
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_925_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
else
{
lean_object* v_a_935_; 
v_a_935_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_935_);
lean_dec_ref_known(v___x_924_, 1);
v_a_913_ = v_a_935_;
goto v___jp_912_;
}
v___jp_912_:
{
lean_object* v___x_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
v___x_914_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg(v_env_911_, v___y_906_, v___y_908_);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_921_ == 0)
{
lean_object* v_unused_922_; 
v_unused_922_ = lean_ctor_get(v___x_914_, 0);
lean_dec(v_unused_922_);
v___x_916_ = v___x_914_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_dec(v___x_914_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
lean_ctor_set_tag(v___x_916_, 1);
lean_ctor_set(v___x_916_, 0, v_a_913_);
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_913_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg___boxed(lean_object* v_env_936_, lean_object* v_x_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(v_env_936_, v_x_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg(lean_object* v_value_944_, lean_object* v_checkType_945_, uint8_t v_safety_946_, uint8_t v_checkMeta_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___f_955_; lean_object* v___x_956_; lean_object* v_env_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_953_ = lean_box(v_checkMeta_947_);
v___x_954_ = lean_box(v_safety_946_);
v___f_955_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExprCore___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_955_, 0, v___x_953_);
lean_closure_set(v___f_955_, 1, v_checkType_945_);
lean_closure_set(v___f_955_, 2, v___x_954_);
lean_closure_set(v___f_955_, 3, v_value_944_);
v___x_956_ = lean_st_ref_get(v_a_951_);
v_env_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc_ref(v_env_957_);
lean_dec(v___x_956_);
v___x_958_ = l_Lean_Environment_unlockAsync(v_env_957_);
v___x_959_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(v___x_958_, v___f_955_, v_a_948_, v_a_949_, v_a_950_, v_a_951_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___boxed(lean_object* v_value_960_, lean_object* v_checkType_961_, lean_object* v_safety_962_, lean_object* v_checkMeta_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_){
_start:
{
uint8_t v_safety_boxed_969_; uint8_t v_checkMeta_boxed_970_; lean_object* v_res_971_; 
v_safety_boxed_969_ = lean_unbox(v_safety_962_);
v_checkMeta_boxed_970_ = lean_unbox(v_checkMeta_963_);
v_res_971_ = l_Lean_Meta_evalExprCore___redArg(v_value_960_, v_checkType_961_, v_safety_boxed_969_, v_checkMeta_boxed_970_, v_a_964_, v_a_965_, v_a_966_, v_a_967_);
lean_dec(v_a_967_);
lean_dec_ref(v_a_966_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore(lean_object* v_00_u03b1_972_, lean_object* v_value_973_, lean_object* v_checkType_974_, uint8_t v_safety_975_, uint8_t v_checkMeta_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_Meta_evalExprCore___redArg(v_value_973_, v_checkType_974_, v_safety_975_, v_checkMeta_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___boxed(lean_object* v_00_u03b1_983_, lean_object* v_value_984_, lean_object* v_checkType_985_, lean_object* v_safety_986_, lean_object* v_checkMeta_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_){
_start:
{
uint8_t v_safety_boxed_993_; uint8_t v_checkMeta_boxed_994_; lean_object* v_res_995_; 
v_safety_boxed_993_ = lean_unbox(v_safety_986_);
v_checkMeta_boxed_994_ = lean_unbox(v_checkMeta_987_);
v_res_995_ = l_Lean_Meta_evalExprCore(v_00_u03b1_983_, v_value_984_, v_checkType_985_, v_safety_boxed_993_, v_checkMeta_boxed_994_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
lean_dec(v_a_991_);
lean_dec_ref(v_a_990_);
lean_dec(v_a_989_);
lean_dec_ref(v_a_988_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1_spec__1(lean_object* v_00_u03b2_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1___redArg(){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1___redArg___boxed(lean_object* v___dummy_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1___redArg();
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_evalExprCore_spec__1(lean_object* v_00_u03b2_1002_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5(lean_object* v_00_u03b1_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___redArg();
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__5(v_00_u03b1_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3(lean_object* v_00_u03b1_1018_, lean_object* v_constName_1019_, uint8_t v_checkMeta_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___redArg(v_constName_1019_, v_checkMeta_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3___boxed(lean_object* v_00_u03b1_1027_, lean_object* v_constName_1028_, lean_object* v_checkMeta_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
uint8_t v_checkMeta_boxed_1035_; lean_object* v_res_1036_; 
v_checkMeta_boxed_1035_ = lean_unbox(v_checkMeta_1029_);
v_res_1036_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3(v_00_u03b1_1027_, v_constName_1028_, v_checkMeta_boxed_1035_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5(lean_object* v_00_u03b1_1037_, lean_object* v_msg_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v_msg_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___boxed(lean_object* v_00_u03b1_1045_, lean_object* v_msg_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5(v_00_u03b1_1045_, v_msg_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7(lean_object* v_00_u03b1_1053_, lean_object* v_env_1054_, lean_object* v_x_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(v_env_1054_, v_x_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___boxed(lean_object* v_00_u03b1_1062_, lean_object* v_env_1063_, lean_object* v_x_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7(v_00_u03b1_1062_, v_env_1063_, v_x_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4(lean_object* v_00_u03b1_1071_, lean_object* v_x_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___redArg(v_x_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1079_, lean_object* v_x_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__3_spec__4(v_00_u03b1_1079_, v_x_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12(lean_object* v_env_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___redArg(v_env_1087_, v___y_1089_, v___y_1091_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12___boxed(lean_object* v_env_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__12(v_env_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
return v_res_1100_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1102_ = ((lean_object*)(l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0));
v___x_1103_ = l_Lean_stringToMessageData(v___x_1102_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0(lean_object* v_typeName_1104_, lean_object* v_type_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_Meta_whnfD(v_type_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1125_; 
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1114_ = v___x_1111_;
v_isShared_1115_ = v_isSharedCheck_1125_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1111_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1125_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
uint8_t v___x_1116_; 
v___x_1116_ = l_Lean_Expr_isConstOf(v_a_1112_, v_typeName_1104_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
lean_del_object(v___x_1114_);
v___x_1117_ = lean_obj_once(&l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1, &l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1);
v___x_1118_ = l_Lean_indentExpr(v_a_1112_);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_1119_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
return v___x_1120_;
}
else
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
lean_dec(v_a_1112_);
v___x_1121_ = lean_box(0);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v___x_1121_);
v___x_1123_ = v___x_1114_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
v_a_1126_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1111_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1111_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed(lean_object* v_typeName_1134_, lean_object* v_type_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lean_Meta_evalExpr_x27___redArg___lam__0(v_typeName_1134_, v_type_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v_typeName_1134_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object* v_typeName_1142_, lean_object* v_value_1143_, uint8_t v_safety_1144_, uint8_t v_checkMeta_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v___f_1151_; lean_object* v___x_1152_; 
v___f_1151_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1151_, 0, v_typeName_1142_);
v___x_1152_ = l_Lean_Meta_evalExprCore___redArg(v_value_1143_, v___f_1151_, v_safety_1144_, v_checkMeta_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___boxed(lean_object* v_typeName_1153_, lean_object* v_value_1154_, lean_object* v_safety_1155_, lean_object* v_checkMeta_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
uint8_t v_safety_boxed_1162_; uint8_t v_checkMeta_boxed_1163_; lean_object* v_res_1164_; 
v_safety_boxed_1162_ = lean_unbox(v_safety_1155_);
v_checkMeta_boxed_1163_ = lean_unbox(v_checkMeta_1156_);
v_res_1164_ = l_Lean_Meta_evalExpr_x27___redArg(v_typeName_1153_, v_value_1154_, v_safety_boxed_1162_, v_checkMeta_boxed_1163_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_);
lean_dec(v_a_1160_);
lean_dec_ref(v_a_1159_);
lean_dec(v_a_1158_);
lean_dec_ref(v_a_1157_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27(lean_object* v_00_u03b1_1165_, lean_object* v_typeName_1166_, lean_object* v_value_1167_, uint8_t v_safety_1168_, uint8_t v_checkMeta_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_Meta_evalExpr_x27___redArg(v_typeName_1166_, v_value_1167_, v_safety_1168_, v_checkMeta_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___boxed(lean_object* v_00_u03b1_1176_, lean_object* v_typeName_1177_, lean_object* v_value_1178_, lean_object* v_safety_1179_, lean_object* v_checkMeta_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_){
_start:
{
uint8_t v_safety_boxed_1186_; uint8_t v_checkMeta_boxed_1187_; lean_object* v_res_1188_; 
v_safety_boxed_1186_ = lean_unbox(v_safety_1179_);
v_checkMeta_boxed_1187_ = lean_unbox(v_checkMeta_1180_);
v_res_1188_ = l_Lean_Meta_evalExpr_x27(v_00_u03b1_1176_, v_typeName_1177_, v_value_1178_, v_safety_boxed_1186_, v_checkMeta_boxed_1187_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
lean_dec(v_a_1182_);
lean_dec_ref(v_a_1181_);
return v_res_1188_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = ((lean_object*)(l_Lean_Meta_evalExpr___redArg___lam__0___closed__1));
v___x_1193_ = l_Lean_stringToMessageData(v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0(lean_object* v_expectedType_1194_, lean_object* v_type_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; 
lean_inc_ref(v_expectedType_1194_);
lean_inc_ref(v_type_1195_);
v___x_1201_ = l_Lean_Meta_isExprDefEq(v_type_1195_, v_expectedType_1194_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1226_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1204_ = v___x_1201_;
v_isShared_1205_ = v_isSharedCheck_1226_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1201_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1226_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
uint8_t v___x_1206_; 
v___x_1206_ = lean_unbox(v_a_1202_);
lean_dec(v_a_1202_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
lean_del_object(v___x_1204_);
v___x_1207_ = lean_box(0);
v___x_1208_ = ((lean_object*)(l_Lean_Meta_evalExpr___redArg___lam__0___closed__0));
v___x_1209_ = l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(v_type_1195_, v_expectedType_1194_, v___x_1207_, v___x_1208_, v___y_1196_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1211_ = lean_obj_once(&l_Lean_Meta_evalExpr___redArg___lam__0___closed__2, &l_Lean_Meta_evalExpr___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__2);
v___x_1212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
lean_ctor_set(v___x_1212_, 1, v_a_1210_);
v___x_1213_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_1212_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
return v___x_1213_;
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
v_a_1214_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1209_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1209_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
else
{
lean_object* v___x_1222_; lean_object* v___x_1224_; 
lean_dec_ref(v_type_1195_);
lean_dec_ref(v_expectedType_1194_);
v___x_1222_ = lean_box(0);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1222_);
v___x_1224_ = v___x_1204_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1222_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
lean_dec_ref(v_type_1195_);
lean_dec_ref(v_expectedType_1194_);
v_a_1227_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1201_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1201_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___boxed(lean_object* v_expectedType_1235_, lean_object* v_type_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lean_Meta_evalExpr___redArg___lam__0(v_expectedType_1235_, v_type_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
lean_dec(v___y_1240_);
lean_dec_ref(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg(lean_object* v_expectedType_1243_, lean_object* v_value_1244_, uint8_t v_safety_1245_, uint8_t v_checkMeta_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v___f_1252_; lean_object* v___x_1253_; 
v___f_1252_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExpr___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1252_, 0, v_expectedType_1243_);
v___x_1253_ = l_Lean_Meta_evalExprCore___redArg(v_value_1244_, v___f_1252_, v_safety_1245_, v_checkMeta_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___boxed(lean_object* v_expectedType_1254_, lean_object* v_value_1255_, lean_object* v_safety_1256_, lean_object* v_checkMeta_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_){
_start:
{
uint8_t v_safety_boxed_1263_; uint8_t v_checkMeta_boxed_1264_; lean_object* v_res_1265_; 
v_safety_boxed_1263_ = lean_unbox(v_safety_1256_);
v_checkMeta_boxed_1264_ = lean_unbox(v_checkMeta_1257_);
v_res_1265_ = l_Lean_Meta_evalExpr___redArg(v_expectedType_1254_, v_value_1255_, v_safety_boxed_1263_, v_checkMeta_boxed_1264_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr(lean_object* v_00_u03b1_1266_, lean_object* v_expectedType_1267_, lean_object* v_value_1268_, uint8_t v_safety_1269_, uint8_t v_checkMeta_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = l_Lean_Meta_evalExpr___redArg(v_expectedType_1267_, v_value_1268_, v_safety_1269_, v_checkMeta_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___boxed(lean_object* v_00_u03b1_1277_, lean_object* v_expectedType_1278_, lean_object* v_value_1279_, lean_object* v_safety_1280_, lean_object* v_checkMeta_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
uint8_t v_safety_boxed_1287_; uint8_t v_checkMeta_boxed_1288_; lean_object* v_res_1289_; 
v_safety_boxed_1287_ = lean_unbox(v_safety_1280_);
v_checkMeta_boxed_1288_ = lean_unbox(v_checkMeta_1281_);
v_res_1289_ = l_Lean_Meta_evalExpr(v_00_u03b1_1277_, v_expectedType_1278_, v_value_1279_, v_safety_boxed_1287_, v_checkMeta_boxed_1288_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_);
lean_dec(v_a_1285_);
lean_dec_ref(v_a_1284_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
return v_res_1289_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Eval(builtin);
}
#ifdef __cplusplus
}
#endif
