// Lean compiler output
// Module: Lean.Meta.Native
// Imports: public import Lean.Meta.Basic import Lean.Util.CollectLevelParams import Lean.Elab.DeclarationRange import Lean.Compiler.Options
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
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_declRangeExt;
uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_collectLevelParams(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_relaxedMetaCheck;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
extern lean_object* l_Lean_Elab_async;
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadEnvMetaM;
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadOptionsCoreM;
lean_object* l_Lean_instMonadOptionsOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_evalConst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Tactic `"};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "` failed: Could not evaluate decidable instance. Error: "};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__6;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__9;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__10;
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` failed. Error: "};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__11_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__0;
static lean_once_cell_t l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__0;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__1;
static const lean_array_object l_Lean_Meta_nativeEqTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__2 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__2_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__3;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_native"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__4 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__4_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 17, 188, 127, 248, 12, 59, 169)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__5 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__5_value;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "decl"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__6 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__6_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__6_value),LEAN_SCALAR_PTR_LITERAL(122, 197, 108, 116, 168, 105, 88, 191)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__7 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__7_value;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ax"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__8 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__8_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__8_value),LEAN_SCALAR_PTR_LITERAL(79, 222, 122, 135, 172, 245, 68, 224)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__9 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__9_value;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__10 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__10_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__11 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__11_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__12;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__13;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__14;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__15;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__16 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__16_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__16_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__17 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__17_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__18;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "` failed: Cannot native decide proposition with metavariables:"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__19 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__19_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__20;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "` failed: Cannot native decide proposition with free variables:"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__21 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__21_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__22;
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Meta_NativeEqTrueResult_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_prf_7_; lean_object* v___x_8_; 
v_prf_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_prf_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_prf_7_);
return v___x_8_;
}
else
{
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Meta_NativeEqTrueResult_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim___redArg(lean_object* v_t_21_, lean_object* v_success_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_21_, v_success_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_success_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_25_, v_success_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim___redArg(lean_object* v_t_29_, lean_object* v_notTrue_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_29_, v_notTrue_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_notTrue_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_33_, v_notTrue_35_);
return v___x_36_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_instMonadEIO___redArg();
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0);
v___x_39_ = l_StateRefT_x27_instMonad___redArg(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6(void){
_start:
{
lean_object* v___x_44_; lean_object* v___f_45_; 
v___x_44_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_45_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_45_, 0, v___x_44_);
return v___f_45_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7(void){
_start:
{
lean_object* v___x_46_; lean_object* v___f_47_; 
v___x_46_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_47_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_47_, 0, v___x_46_);
return v___f_47_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8(void){
_start:
{
lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___x_50_; 
v___f_48_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7);
v___f_49_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6);
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v___f_49_);
lean_ctor_set(v___x_50_, 1, v___f_48_);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9(void){
_start:
{
lean_object* v___x_51_; lean_object* v___f_52_; 
v___x_51_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8);
v___f_52_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_52_, 0, v___x_51_);
return v___f_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10(void){
_start:
{
lean_object* v___x_53_; lean_object* v___f_54_; 
v___x_53_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8);
v___f_54_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_54_, 0, v___x_53_);
return v___f_54_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11(void){
_start:
{
lean_object* v___f_55_; lean_object* v___f_56_; lean_object* v___x_57_; 
v___f_55_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10);
v___f_56_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v___f_56_);
lean_ctor_set(v___x_57_, 1, v___f_55_);
return v___x_57_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_62_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_63_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15));
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14));
v___x_65_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_64_, v___x_63_, v___x_62_);
return v___x_65_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17(void){
_start:
{
lean_object* v___x_66_; lean_object* v___f_67_; lean_object* v___f_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16);
v___f_67_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13));
v___f_68_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12));
v___x_69_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_68_, v___f_67_, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = l_Lean_Core_instMonadOptionsCoreM;
v___x_71_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15));
v___x_72_ = l_Lean_instMonadOptionsOfMonadLift___redArg(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19(void){
_start:
{
lean_object* v___x_73_; lean_object* v___f_74_; lean_object* v___x_75_; 
v___x_73_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18);
v___f_74_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13));
v___x_75_ = l_Lean_instMonadOptionsOfMonadLift___redArg(v___f_74_, v___x_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(lean_object* v_auxDeclName_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_toApplicative_83_; lean_object* v_toFunctor_84_; lean_object* v_toSeq_85_; lean_object* v_toSeqLeft_86_; lean_object* v_toSeqRight_87_; lean_object* v___f_88_; lean_object* v___f_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___f_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v_toApplicative_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_137_; 
v___x_82_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1);
v_toApplicative_83_ = lean_ctor_get(v___x_82_, 0);
v_toFunctor_84_ = lean_ctor_get(v_toApplicative_83_, 0);
v_toSeq_85_ = lean_ctor_get(v_toApplicative_83_, 2);
v_toSeqLeft_86_ = lean_ctor_get(v_toApplicative_83_, 3);
v_toSeqRight_87_ = lean_ctor_get(v_toApplicative_83_, 4);
v___f_88_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2));
v___f_89_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3));
lean_inc_ref_n(v_toFunctor_84_, 2);
v___f_90_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_90_, 0, v_toFunctor_84_);
v___f_91_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_91_, 0, v_toFunctor_84_);
v___x_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_92_, 0, v___f_90_);
lean_ctor_set(v___x_92_, 1, v___f_91_);
lean_inc(v_toSeqRight_87_);
v___f_93_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_93_, 0, v_toSeqRight_87_);
lean_inc(v_toSeqLeft_86_);
v___f_94_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_94_, 0, v_toSeqLeft_86_);
lean_inc(v_toSeq_85_);
v___f_95_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_95_, 0, v_toSeq_85_);
v___x_96_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_96_, 0, v___x_92_);
lean_ctor_set(v___x_96_, 1, v___f_88_);
lean_ctor_set(v___x_96_, 2, v___f_95_);
lean_ctor_set(v___x_96_, 3, v___f_94_);
lean_ctor_set(v___x_96_, 4, v___f_93_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___f_89_);
v___x_98_ = l_StateRefT_x27_instMonad___redArg(v___x_97_);
v_toApplicative_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_137_ == 0)
{
lean_object* v_unused_138_; 
v_unused_138_ = lean_ctor_get(v___x_98_, 1);
lean_dec(v_unused_138_);
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_137_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_toApplicative_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_137_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v_toFunctor_103_; lean_object* v_toSeq_104_; lean_object* v_toSeqLeft_105_; lean_object* v_toSeqRight_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_135_; 
v_toFunctor_103_ = lean_ctor_get(v_toApplicative_99_, 0);
v_toSeq_104_ = lean_ctor_get(v_toApplicative_99_, 2);
v_toSeqLeft_105_ = lean_ctor_get(v_toApplicative_99_, 3);
v_toSeqRight_106_ = lean_ctor_get(v_toApplicative_99_, 4);
v_isSharedCheck_135_ = !lean_is_exclusive(v_toApplicative_99_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v_toApplicative_99_, 1);
lean_dec(v_unused_136_);
v___x_108_ = v_toApplicative_99_;
v_isShared_109_ = v_isSharedCheck_135_;
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
v_isShared_109_ = v_isSharedCheck_135_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___x_119_; 
v___f_110_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4));
v___f_111_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5));
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
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___f_110_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v___f_117_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v___f_116_);
lean_ctor_set(v_reuseFailAlloc_134_, 4, v___f_115_);
v___x_119_ = v_reuseFailAlloc_134_;
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
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v___f_111_);
v___x_121_ = v_reuseFailAlloc_133_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v_toMonadRef_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_63__overap_131_; lean_object* v___x_132_; 
v___x_122_ = l_Lean_Meta_instMonadEnvMetaM;
v___x_123_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11);
v___x_124_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17);
v_toMonadRef_125_ = lean_ctor_get(v___x_124_, 0);
v___x_126_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_121_);
v___x_127_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_126_, v___x_121_);
lean_inc_ref(v_toMonadRef_125_);
v___x_128_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_128_, 0, v___x_123_);
lean_ctor_set(v___x_128_, 1, v_toMonadRef_125_);
lean_ctor_set(v___x_128_, 2, v___x_127_);
v___x_129_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19);
v___x_130_ = 1;
v___x_63__overap_131_ = l_Lean_evalConst___redArg(v___x_121_, v___x_122_, v___x_128_, v___x_129_, v_auxDeclName_76_, v___x_130_);
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
v___x_132_ = lean_apply_5(v___x_63__overap_131_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, lean_box(0));
return v___x_132_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___boxed(lean_object* v_auxDeclName_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(v_auxDeclName_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(lean_object* v_e_146_, lean_object* v___y_147_){
_start:
{
uint8_t v___x_149_; 
v___x_149_ = l_Lean_Expr_hasMVar(v_e_146_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; 
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v_e_146_);
return v___x_150_;
}
else
{
lean_object* v___x_151_; lean_object* v_mctx_152_; lean_object* v___x_153_; lean_object* v_fst_154_; lean_object* v_snd_155_; lean_object* v___x_156_; lean_object* v_cache_157_; lean_object* v_zetaDeltaFVarIds_158_; lean_object* v_postponed_159_; lean_object* v_diag_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_169_; 
v___x_151_ = lean_st_ref_get(v___y_147_);
v_mctx_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_ref(v_mctx_152_);
lean_dec(v___x_151_);
v___x_153_ = l_Lean_instantiateMVarsCore(v_mctx_152_, v_e_146_);
v_fst_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_fst_154_);
v_snd_155_ = lean_ctor_get(v___x_153_, 1);
lean_inc(v_snd_155_);
lean_dec_ref(v___x_153_);
v___x_156_ = lean_st_ref_take(v___y_147_);
v_cache_157_ = lean_ctor_get(v___x_156_, 1);
v_zetaDeltaFVarIds_158_ = lean_ctor_get(v___x_156_, 2);
v_postponed_159_ = lean_ctor_get(v___x_156_, 3);
v_diag_160_ = lean_ctor_get(v___x_156_, 4);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_169_ == 0)
{
lean_object* v_unused_170_; 
v_unused_170_ = lean_ctor_get(v___x_156_, 0);
lean_dec(v_unused_170_);
v___x_162_ = v___x_156_;
v_isShared_163_ = v_isSharedCheck_169_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_diag_160_);
lean_inc(v_postponed_159_);
lean_inc(v_zetaDeltaFVarIds_158_);
lean_inc(v_cache_157_);
lean_dec(v___x_156_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_169_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v_snd_155_);
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_snd_155_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v_cache_157_);
lean_ctor_set(v_reuseFailAlloc_168_, 2, v_zetaDeltaFVarIds_158_);
lean_ctor_set(v_reuseFailAlloc_168_, 3, v_postponed_159_);
lean_ctor_set(v_reuseFailAlloc_168_, 4, v_diag_160_);
v___x_165_ = v_reuseFailAlloc_168_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_st_ref_put(v___y_147_, v___x_165_);
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v_fst_154_);
return v___x_167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg___boxed(lean_object* v_e_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_171_, v___y_172_);
lean_dec(v___y_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(lean_object* v_e_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_175_, v___y_177_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___boxed(lean_object* v_e_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(v_e_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(lean_object* v_kind_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___x_192_; lean_object* v_auxDeclNGen_193_; lean_object* v___x_194_; lean_object* v_env_195_; lean_object* v___x_196_; lean_object* v_fst_197_; lean_object* v_snd_198_; lean_object* v___x_199_; lean_object* v_env_200_; lean_object* v_nextMacroScope_201_; lean_object* v_ngen_202_; lean_object* v_traceState_203_; lean_object* v_cache_204_; lean_object* v_recordedDeps_205_; lean_object* v_messages_206_; lean_object* v_infoState_207_; lean_object* v_snapshotTasks_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_217_; 
v___x_192_ = lean_st_ref_get(v___y_190_);
v_auxDeclNGen_193_ = lean_ctor_get(v___x_192_, 3);
lean_inc_ref(v_auxDeclNGen_193_);
lean_dec(v___x_192_);
v___x_194_ = lean_st_ref_get(v___y_190_);
v_env_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc_ref(v_env_195_);
lean_dec(v___x_194_);
v___x_196_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_195_, v_auxDeclNGen_193_, v_kind_189_);
v_fst_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_fst_197_);
v_snd_198_ = lean_ctor_get(v___x_196_, 1);
lean_inc(v_snd_198_);
lean_dec_ref(v___x_196_);
v___x_199_ = lean_st_ref_take(v___y_190_);
v_env_200_ = lean_ctor_get(v___x_199_, 0);
v_nextMacroScope_201_ = lean_ctor_get(v___x_199_, 1);
v_ngen_202_ = lean_ctor_get(v___x_199_, 2);
v_traceState_203_ = lean_ctor_get(v___x_199_, 4);
v_cache_204_ = lean_ctor_get(v___x_199_, 5);
v_recordedDeps_205_ = lean_ctor_get(v___x_199_, 6);
v_messages_206_ = lean_ctor_get(v___x_199_, 7);
v_infoState_207_ = lean_ctor_get(v___x_199_, 8);
v_snapshotTasks_208_ = lean_ctor_get(v___x_199_, 9);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_217_ == 0)
{
lean_object* v_unused_218_; 
v_unused_218_ = lean_ctor_get(v___x_199_, 3);
lean_dec(v_unused_218_);
v___x_210_ = v___x_199_;
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_snapshotTasks_208_);
lean_inc(v_infoState_207_);
lean_inc(v_messages_206_);
lean_inc(v_recordedDeps_205_);
lean_inc(v_cache_204_);
lean_inc(v_traceState_203_);
lean_inc(v_ngen_202_);
lean_inc(v_nextMacroScope_201_);
lean_inc(v_env_200_);
lean_dec(v___x_199_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 3, v_snd_198_);
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_env_200_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_nextMacroScope_201_);
lean_ctor_set(v_reuseFailAlloc_216_, 2, v_ngen_202_);
lean_ctor_set(v_reuseFailAlloc_216_, 3, v_snd_198_);
lean_ctor_set(v_reuseFailAlloc_216_, 4, v_traceState_203_);
lean_ctor_set(v_reuseFailAlloc_216_, 5, v_cache_204_);
lean_ctor_set(v_reuseFailAlloc_216_, 6, v_recordedDeps_205_);
lean_ctor_set(v_reuseFailAlloc_216_, 7, v_messages_206_);
lean_ctor_set(v_reuseFailAlloc_216_, 8, v_infoState_207_);
lean_ctor_set(v_reuseFailAlloc_216_, 9, v_snapshotTasks_208_);
v___x_213_ = v_reuseFailAlloc_216_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_st_ref_put(v___y_190_, v___x_213_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v_fst_197_);
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg___boxed(lean_object* v_kind_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v_kind_219_, v___y_220_);
lean_dec(v___y_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(lean_object* v_kind_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v_kind_223_, v___y_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___boxed(lean_object* v_kind_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(v_kind_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(lean_object* v_opts_237_, lean_object* v_opt_238_){
_start:
{
lean_object* v_name_239_; lean_object* v_defValue_240_; lean_object* v_map_241_; lean_object* v___x_242_; 
v_name_239_ = lean_ctor_get(v_opt_238_, 0);
v_defValue_240_ = lean_ctor_get(v_opt_238_, 1);
v_map_241_ = lean_ctor_get(v_opts_237_, 0);
v___x_242_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_241_, v_name_239_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_inc(v_defValue_240_);
return v_defValue_240_;
}
else
{
lean_object* v_val_243_; 
v_val_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_val_243_);
lean_dec_ref_known(v___x_242_, 1);
if (lean_obj_tag(v_val_243_) == 3)
{
lean_object* v_v_244_; 
v_v_244_ = lean_ctor_get(v_val_243_, 0);
lean_inc(v_v_244_);
lean_dec_ref_known(v_val_243_, 1);
return v_v_244_;
}
else
{
lean_dec(v_val_243_);
lean_inc(v_defValue_240_);
return v_defValue_240_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5___boxed(lean_object* v_opts_245_, lean_object* v_opt_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v_opts_245_, v_opt_246_);
lean_dec_ref(v_opt_246_);
lean_dec_ref(v_opts_245_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10(lean_object* v_o_251_, lean_object* v_k_252_, uint8_t v_v_253_){
_start:
{
lean_object* v_map_254_; uint8_t v_hasTrace_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_269_; 
v_map_254_ = lean_ctor_get(v_o_251_, 0);
v_hasTrace_255_ = lean_ctor_get_uint8(v_o_251_, sizeof(void*)*1);
v_isSharedCheck_269_ = !lean_is_exclusive(v_o_251_);
if (v_isSharedCheck_269_ == 0)
{
v___x_257_ = v_o_251_;
v_isShared_258_ = v_isSharedCheck_269_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_map_254_);
lean_dec(v_o_251_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_269_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_259_, 0, v_v_253_);
lean_inc(v_k_252_);
v___x_260_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_252_, v___x_259_, v_map_254_);
if (v_hasTrace_255_ == 0)
{
lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_264_; 
v___x_261_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___closed__1));
v___x_262_ = l_Lean_Name_isPrefixOf(v___x_261_, v_k_252_);
lean_dec(v_k_252_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_260_);
v___x_264_ = v___x_257_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_260_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*1, v___x_262_);
return v___x_264_;
}
}
else
{
lean_object* v___x_267_; 
lean_dec(v_k_252_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_260_);
v___x_267_ = v___x_257_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_260_);
lean_ctor_set_uint8(v_reuseFailAlloc_268_, sizeof(void*)*1, v_hasTrace_255_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10___boxed(lean_object* v_o_270_, lean_object* v_k_271_, lean_object* v_v_272_){
_start:
{
uint8_t v_v_boxed_273_; lean_object* v_res_274_; 
v_v_boxed_273_ = lean_unbox(v_v_272_);
v_res_274_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10(v_o_270_, v_k_271_, v_v_boxed_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6(lean_object* v_opts_275_, lean_object* v_opt_276_, uint8_t v_val_277_){
_start:
{
lean_object* v_name_278_; lean_object* v___x_279_; 
v_name_278_ = lean_ctor_get(v_opt_276_, 0);
lean_inc(v_name_278_);
lean_dec_ref(v_opt_276_);
v___x_279_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6_spec__10(v_opts_275_, v_name_278_, v_val_277_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6___boxed(lean_object* v_opts_280_, lean_object* v_opt_281_, lean_object* v_val_282_){
_start:
{
uint8_t v_val_boxed_283_; lean_object* v_res_284_; 
v_val_boxed_283_ = lean_unbox(v_val_282_);
v_res_284_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6(v_opts_280_, v_opt_281_, v_val_boxed_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(lean_object* v_msgData_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; lean_object* v_env_292_; uint8_t v___x_293_; lean_object* v_env_294_; lean_object* v___x_295_; lean_object* v_toCold_296_; lean_object* v_mctx_297_; lean_object* v_lctx_298_; lean_object* v_options_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_291_ = lean_st_ref_get(v___y_289_);
v_env_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc_ref(v_env_292_);
lean_dec(v___x_291_);
v___x_293_ = 0;
v_env_294_ = l_Lean_Environment_setRecordingDeps(v_env_292_, v___x_293_);
v___x_295_ = lean_st_ref_get(v___y_287_);
v_toCold_296_ = lean_ctor_get(v___y_288_, 0);
v_mctx_297_ = lean_ctor_get(v___x_295_, 0);
lean_inc_ref(v_mctx_297_);
lean_dec(v___x_295_);
v_lctx_298_ = lean_ctor_get(v___y_286_, 2);
v_options_299_ = lean_ctor_get(v_toCold_296_, 2);
lean_inc_ref(v_options_299_);
lean_inc_ref(v_lctx_298_);
v___x_300_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_300_, 0, v_env_294_);
lean_ctor_set(v___x_300_, 1, v_mctx_297_);
lean_ctor_set(v___x_300_, 2, v_lctx_298_);
lean_ctor_set(v___x_300_, 3, v_options_299_);
v___x_301_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
lean_ctor_set(v___x_301_, 1, v_msgData_285_);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5___boxed(lean_object* v_msgData_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(v_msgData_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(lean_object* v_msg_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_ref_316_; lean_object* v___x_317_; lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_326_; 
v_ref_316_ = lean_ctor_get(v___y_313_, 2);
v___x_317_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(v_msg_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
v_a_318_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_326_ == 0)
{
v___x_320_ = v___x_317_;
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_322_; lean_object* v___x_324_; 
lean_inc(v_ref_316_);
v___x_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_322_, 0, v_ref_316_);
lean_ctor_set(v___x_322_, 1, v_a_318_);
if (v_isShared_321_ == 0)
{
lean_ctor_set_tag(v___x_320_, 1);
lean_ctor_set(v___x_320_, 0, v___x_322_);
v___x_324_ = v___x_320_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg___boxed(lean_object* v_msg_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v_msg_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
return v_res_333_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_334_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0);
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg(){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__1);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___boxed(lean_object* v___dummy_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg();
return v_res_340_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_box(0);
v___x_342_ = l_Lean_Elab_abortCommandExceptionId;
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0);
v___x_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___boxed(lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(lean_object* v_x_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_a_355_ = lean_ctor_get(v_x_349_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v_x_349_, 1);
v___x_356_ = l_Lean_stringToMessageData(v_a_355_);
v___x_357_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_356_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
return v___x_357_;
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
v_a_358_ = lean_ctor_get(v_x_349_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v_x_349_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v_x_349_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v_x_349_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 0);
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg___boxed(lean_object* v_x_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v_x_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(lean_object* v_constName_373_, uint8_t v_checkMeta_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v___x_380_; lean_object* v_env_381_; uint8_t v___x_382_; 
v___x_380_ = lean_st_ref_get(v___y_378_);
v_env_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc_ref(v_env_381_);
lean_dec(v___x_380_);
lean_inc(v_constName_373_);
v___x_382_ = lean_has_compile_error(v_env_381_, v_constName_373_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; lean_object* v_env_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_383_ = lean_st_ref_get(v___y_378_);
v_env_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc_ref(v_env_384_);
lean_dec(v___x_383_);
v___x_385_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_377_);
v___x_386_ = l_Lean_Environment_evalConst___redArg(v_env_384_, v___x_385_, v_constName_373_, v_checkMeta_374_);
lean_dec(v_constName_373_);
lean_dec_ref(v___x_385_);
lean_dec_ref(v_env_384_);
v___x_387_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v___x_386_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
return v___x_387_;
}
else
{
lean_object* v___x_388_; 
v___x_388_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v___x_389_; lean_object* v_env_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref_known(v___x_388_, 1);
v___x_389_ = lean_st_ref_get(v___y_378_);
v_env_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc_ref(v_env_390_);
lean_dec(v___x_389_);
v___x_391_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_377_);
v___x_392_ = l_Lean_Environment_evalConst___redArg(v_env_390_, v___x_391_, v_constName_373_, v_checkMeta_374_);
lean_dec(v_constName_373_);
lean_dec_ref(v___x_391_);
lean_dec_ref(v_env_390_);
v___x_393_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v___x_392_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
return v___x_393_;
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec(v_constName_373_);
v_a_394_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_388_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_388_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg___boxed(lean_object* v_constName_402_, lean_object* v_checkMeta_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
uint8_t v_checkMeta_boxed_409_; lean_object* v_res_410_; 
v_checkMeta_boxed_409_ = lean_unbox(v_checkMeta_403_);
v_res_410_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(v_constName_402_, v_checkMeta_boxed_409_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
return v_res_410_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__0));
v___x_413_ = l_Lean_stringToMessageData(v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__3(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__2));
v___x_416_ = l_Lean_stringToMessageData(v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__6(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_box(0);
v___x_421_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__5));
v___x_422_ = l_Lean_mkConst(v___x_421_, v___x_420_);
return v___x_422_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg___closed__0);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__7, &l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
return v___x_426_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9(void){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___redArg();
return v___x_427_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__7, &l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
return v___x_429_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__11));
v___x_432_ = l_Lean_stringToMessageData(v___x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0(lean_object* v___x_433_, lean_object* v_tacticName_434_, lean_object* v___x_435_, lean_object* v___x_436_, lean_object* v_a_437_, lean_object* v___x_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_828_; 
v___x_444_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v___x_433_, v___y_442_);
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_828_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_828_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_828_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_463_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__6, &l_Lean_Meta_nativeEqTrue___lam__0___closed__6_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__6);
lean_inc_n(v_a_445_, 2);
v___x_464_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_464_, 0, v_a_445_);
lean_ctor_set(v___x_464_, 1, v___x_435_);
lean_ctor_set(v___x_464_, 2, v___x_463_);
v___x_465_ = lean_box(1);
v___x_466_ = 1;
v___x_467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_467_, 0, v_a_445_);
lean_ctor_set(v___x_467_, 1, v___x_436_);
v___x_468_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_468_, 0, v___x_464_);
lean_ctor_set(v___x_468_, 1, v_a_437_);
lean_ctor_set(v___x_468_, 2, v___x_465_);
lean_ctor_set(v___x_468_, 3, v___x_467_);
lean_ctor_set_uint8(v___x_468_, sizeof(void*)*4, v___x_466_);
if (v_isShared_448_ == 0)
{
lean_ctor_set_tag(v___x_447_, 1);
lean_ctor_set(v___x_447_, 0, v___x_468_);
v___x_470_ = v___x_447_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_827_;
goto v_reusejp_469_;
}
v___jp_449_:
{
uint8_t v___x_450_; lean_object* v___x_451_; 
v___x_450_ = 1;
v___x_451_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(v_a_445_, v___x_450_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_dec_ref(v___y_441_);
lean_dec(v_tacticName_434_);
return v___x_451_;
}
else
{
lean_object* v_a_452_; uint8_t v___x_453_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
v___x_453_ = l_Lean_Exception_isInterrupt(v_a_452_);
if (v___x_453_ == 0)
{
uint8_t v___x_454_; 
lean_inc(v_a_452_);
v___x_454_ = l_Lean_Exception_isRuntime(v_a_452_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
lean_inc(v_a_452_);
lean_dec_ref_known(v___x_451_, 1);
v___x_455_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_456_ = l_Lean_MessageData_ofName(v_tacticName_434_);
v___x_457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_455_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__3, &l_Lean_Meta_nativeEqTrue___lam__0___closed__3_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__3);
v___x_459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
v___x_460_ = l_Lean_Exception_toMessageData(v_a_452_);
v___x_461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_461_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec_ref(v___y_441_);
return v___x_462_;
}
else
{
lean_dec_ref(v___y_441_);
lean_dec(v_tacticName_434_);
return v___x_451_;
}
}
else
{
lean_dec_ref(v___y_441_);
lean_dec(v_tacticName_434_);
return v___x_451_;
}
}
}
v_reusejp_469_:
{
lean_object* v___x_471_; lean_object* v_env_472_; lean_object* v_nextMacroScope_473_; lean_object* v_ngen_474_; lean_object* v_auxDeclNGen_475_; lean_object* v_traceState_476_; lean_object* v_recordedDeps_477_; lean_object* v_messages_478_; lean_object* v_infoState_479_; lean_object* v_snapshotTasks_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_825_; 
v___x_471_ = lean_st_ref_take(v___y_442_);
v_env_472_ = lean_ctor_get(v___x_471_, 0);
v_nextMacroScope_473_ = lean_ctor_get(v___x_471_, 1);
v_ngen_474_ = lean_ctor_get(v___x_471_, 2);
v_auxDeclNGen_475_ = lean_ctor_get(v___x_471_, 3);
v_traceState_476_ = lean_ctor_get(v___x_471_, 4);
v_recordedDeps_477_ = lean_ctor_get(v___x_471_, 6);
v_messages_478_ = lean_ctor_get(v___x_471_, 7);
v_infoState_479_ = lean_ctor_get(v___x_471_, 8);
v_snapshotTasks_480_ = lean_ctor_get(v___x_471_, 9);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_825_ == 0)
{
lean_object* v_unused_826_; 
v_unused_826_ = lean_ctor_get(v___x_471_, 5);
lean_dec(v_unused_826_);
v___x_482_ = v___x_471_;
v_isShared_483_ = v_isSharedCheck_825_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_snapshotTasks_480_);
lean_inc(v_infoState_479_);
lean_inc(v_messages_478_);
lean_inc(v_recordedDeps_477_);
lean_inc(v_traceState_476_);
lean_inc(v_auxDeclNGen_475_);
lean_inc(v_ngen_474_);
lean_inc(v_nextMacroScope_473_);
lean_inc(v_env_472_);
lean_dec(v___x_471_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_825_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
lean_inc(v_a_445_);
v___x_484_ = l_Lean_markMeta(v_env_472_, v_a_445_);
v___x_485_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__7, &l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7);
v___x_486_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__8, &l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 5, v___x_486_);
lean_ctor_set(v___x_482_, 0, v___x_484_);
v___x_488_ = v___x_482_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_nextMacroScope_473_);
lean_ctor_set(v_reuseFailAlloc_824_, 2, v_ngen_474_);
lean_ctor_set(v_reuseFailAlloc_824_, 3, v_auxDeclNGen_475_);
lean_ctor_set(v_reuseFailAlloc_824_, 4, v_traceState_476_);
lean_ctor_set(v_reuseFailAlloc_824_, 5, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_824_, 6, v_recordedDeps_477_);
lean_ctor_set(v_reuseFailAlloc_824_, 7, v_messages_478_);
lean_ctor_set(v_reuseFailAlloc_824_, 8, v_infoState_479_);
lean_ctor_set(v_reuseFailAlloc_824_, 9, v_snapshotTasks_480_);
v___x_488_ = v_reuseFailAlloc_824_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v_mctx_491_; lean_object* v_zetaDeltaFVarIds_492_; lean_object* v_postponed_493_; lean_object* v_diag_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_822_; 
v___x_489_ = lean_st_ref_put(v___y_442_, v___x_488_);
v___x_490_ = lean_st_ref_take(v___y_440_);
v_mctx_491_ = lean_ctor_get(v___x_490_, 0);
v_zetaDeltaFVarIds_492_ = lean_ctor_get(v___x_490_, 2);
v_postponed_493_ = lean_ctor_get(v___x_490_, 3);
v_diag_494_ = lean_ctor_get(v___x_490_, 4);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v___x_490_, 1);
lean_dec(v_unused_823_);
v___x_496_ = v___x_490_;
v_isShared_497_ = v_isSharedCheck_822_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_diag_494_);
lean_inc(v_postponed_493_);
lean_inc(v_zetaDeltaFVarIds_492_);
lean_inc(v_mctx_491_);
lean_dec(v___x_490_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_822_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_498_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__9, &l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9);
v___x_499_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__10, &l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10);
v___x_500_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_500_, 0, v___x_485_);
lean_ctor_set(v___x_500_, 1, v___x_485_);
lean_ctor_set(v___x_500_, 2, v___x_438_);
v___x_501_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_501_, 0, v___x_498_);
lean_ctor_set(v___x_501_, 1, v___x_485_);
lean_ctor_set(v___x_501_, 2, v___x_499_);
lean_ctor_set(v___x_501_, 3, v___x_485_);
lean_ctor_set(v___x_501_, 4, v___x_485_);
lean_ctor_set(v___x_501_, 5, v___x_485_);
lean_ctor_set(v___x_501_, 6, v___x_485_);
lean_ctor_set(v___x_501_, 7, v___x_500_);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 1, v___x_501_);
v___x_503_ = v___x_496_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_mctx_491_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_821_, 2, v_zetaDeltaFVarIds_492_);
lean_ctor_set(v_reuseFailAlloc_821_, 3, v_postponed_493_);
lean_ctor_set(v_reuseFailAlloc_821_, 4, v_diag_494_);
v___x_503_ = v_reuseFailAlloc_821_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_504_; lean_object* v_toCold_505_; lean_object* v_currRecDepth_506_; lean_object* v_ref_507_; uint8_t v_suppressElabErrors_508_; uint8_t v_checkDeprecated_509_; uint8_t v_isRecordingDeps_510_; lean_object* v_fileName_511_; lean_object* v_fileMap_512_; lean_object* v_options_513_; lean_object* v_currNamespace_514_; lean_object* v_openDecls_515_; lean_object* v_initHeartbeats_516_; lean_object* v_maxHeartbeats_517_; lean_object* v_quotContext_518_; lean_object* v_currMacroScope_519_; lean_object* v_cancelTk_x3f_520_; lean_object* v_inheritedTraceOptions_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_819_; 
v___x_504_ = lean_st_ref_put(v___y_440_, v___x_503_);
v_toCold_505_ = lean_ctor_get(v___y_441_, 0);
lean_inc_ref(v_toCold_505_);
v_currRecDepth_506_ = lean_ctor_get(v___y_441_, 1);
v_ref_507_ = lean_ctor_get(v___y_441_, 2);
v_suppressElabErrors_508_ = lean_ctor_get_uint8(v___y_441_, sizeof(void*)*3 + 2);
v_checkDeprecated_509_ = lean_ctor_get_uint8(v___y_441_, sizeof(void*)*3 + 3);
v_isRecordingDeps_510_ = lean_ctor_get_uint8(v___y_441_, sizeof(void*)*3 + 4);
v_fileName_511_ = lean_ctor_get(v_toCold_505_, 0);
v_fileMap_512_ = lean_ctor_get(v_toCold_505_, 1);
v_options_513_ = lean_ctor_get(v_toCold_505_, 2);
v_currNamespace_514_ = lean_ctor_get(v_toCold_505_, 4);
v_openDecls_515_ = lean_ctor_get(v_toCold_505_, 5);
v_initHeartbeats_516_ = lean_ctor_get(v_toCold_505_, 6);
v_maxHeartbeats_517_ = lean_ctor_get(v_toCold_505_, 7);
v_quotContext_518_ = lean_ctor_get(v_toCold_505_, 8);
v_currMacroScope_519_ = lean_ctor_get(v_toCold_505_, 9);
v_cancelTk_x3f_520_ = lean_ctor_get(v_toCold_505_, 10);
v_inheritedTraceOptions_521_ = lean_ctor_get(v_toCold_505_, 11);
v_isSharedCheck_819_ = !lean_is_exclusive(v_toCold_505_);
if (v_isSharedCheck_819_ == 0)
{
lean_object* v_unused_820_; 
v_unused_820_ = lean_ctor_get(v_toCold_505_, 3);
lean_dec(v_unused_820_);
v___x_523_ = v_toCold_505_;
v_isShared_524_ = v_isSharedCheck_819_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_inheritedTraceOptions_521_);
lean_inc(v_cancelTk_x3f_520_);
lean_inc(v_currMacroScope_519_);
lean_inc(v_quotContext_518_);
lean_inc(v_maxHeartbeats_517_);
lean_inc(v_initHeartbeats_516_);
lean_inc(v_openDecls_515_);
lean_inc(v_currNamespace_514_);
lean_inc(v_options_513_);
lean_inc(v_fileMap_512_);
lean_inc(v_fileName_511_);
lean_dec(v_toCold_505_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_819_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
uint8_t v___x_525_; uint8_t v___x_526_; lean_object* v___y_528_; lean_object* v___y_529_; uint16_t v___y_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___y_597_; lean_object* v___y_598_; uint16_t v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v_nextMacroScope_602_; lean_object* v_ngen_603_; lean_object* v_auxDeclNGen_604_; lean_object* v_traceState_605_; lean_object* v_recordedDeps_606_; lean_object* v_messages_607_; lean_object* v_infoState_608_; lean_object* v_snapshotTasks_609_; lean_object* v___y_610_; lean_object* v___y_614_; lean_object* v___y_615_; uint16_t v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; uint8_t v___y_619_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_650_; uint16_t v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_692_; lean_object* v___y_693_; uint16_t v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v_nextMacroScope_697_; lean_object* v_ngen_698_; lean_object* v_auxDeclNGen_699_; lean_object* v_traceState_700_; lean_object* v_recordedDeps_701_; lean_object* v_messages_702_; lean_object* v_infoState_703_; lean_object* v_snapshotTasks_704_; lean_object* v___y_705_; lean_object* v___y_709_; lean_object* v___y_710_; uint16_t v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; uint8_t v___y_714_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_745_; uint16_t v___y_746_; lean_object* v_fileName_747_; lean_object* v_fileMap_748_; lean_object* v_currNamespace_749_; lean_object* v_openDecls_750_; lean_object* v_initHeartbeats_751_; lean_object* v_maxHeartbeats_752_; lean_object* v_quotContext_753_; lean_object* v_currMacroScope_754_; lean_object* v_cancelTk_x3f_755_; lean_object* v_inheritedTraceOptions_756_; lean_object* v_currRecDepth_757_; lean_object* v_ref_758_; uint8_t v_suppressElabErrors_759_; uint8_t v_checkDeprecated_760_; uint8_t v_isRecordingDeps_761_; lean_object* v___y_762_; lean_object* v___y_773_; lean_object* v_nextMacroScope_774_; lean_object* v_ngen_775_; lean_object* v_auxDeclNGen_776_; lean_object* v_traceState_777_; lean_object* v_recordedDeps_778_; lean_object* v_messages_779_; lean_object* v_infoState_780_; lean_object* v_snapshotTasks_781_; uint16_t v___y_782_; lean_object* v___y_783_; lean_object* v___y_787_; uint16_t v___y_788_; uint8_t v___y_789_; lean_object* v___y_807_; 
v___x_525_ = 1;
v___x_526_ = 0;
if (v_isRecordingDeps_510_ == 0)
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = l_Lean_Elab_async;
v___x_817_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6(v_options_513_, v___x_816_, v_isRecordingDeps_510_);
v___y_807_ = v___x_817_;
goto v___jp_806_;
}
else
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_513_);
v___y_807_ = v___x_818_;
goto v___jp_806_;
}
v___jp_527_:
{
lean_object* v_toCold_533_; lean_object* v_currRecDepth_534_; lean_object* v_ref_535_; uint8_t v_suppressElabErrors_536_; uint8_t v_checkDeprecated_537_; uint8_t v_isRecordingDeps_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_595_; 
v_toCold_533_ = lean_ctor_get(v___y_531_, 0);
v_currRecDepth_534_ = lean_ctor_get(v___y_531_, 1);
v_ref_535_ = lean_ctor_get(v___y_531_, 2);
v_suppressElabErrors_536_ = lean_ctor_get_uint8(v___y_531_, sizeof(void*)*3 + 2);
v_checkDeprecated_537_ = lean_ctor_get_uint8(v___y_531_, sizeof(void*)*3 + 3);
v_isRecordingDeps_538_ = lean_ctor_get_uint8(v___y_531_, sizeof(void*)*3 + 4);
v_isSharedCheck_595_ = !lean_is_exclusive(v___y_531_);
if (v_isSharedCheck_595_ == 0)
{
v___x_540_ = v___y_531_;
v_isShared_541_ = v_isSharedCheck_595_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_ref_535_);
lean_inc(v_currRecDepth_534_);
lean_inc(v_toCold_533_);
lean_dec(v___y_531_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_595_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v_fileName_542_; lean_object* v_fileMap_543_; lean_object* v_currNamespace_544_; lean_object* v_openDecls_545_; lean_object* v_initHeartbeats_546_; lean_object* v_maxHeartbeats_547_; lean_object* v_quotContext_548_; lean_object* v_currMacroScope_549_; lean_object* v_cancelTk_x3f_550_; lean_object* v_inheritedTraceOptions_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_592_; 
v_fileName_542_ = lean_ctor_get(v_toCold_533_, 0);
v_fileMap_543_ = lean_ctor_get(v_toCold_533_, 1);
v_currNamespace_544_ = lean_ctor_get(v_toCold_533_, 4);
v_openDecls_545_ = lean_ctor_get(v_toCold_533_, 5);
v_initHeartbeats_546_ = lean_ctor_get(v_toCold_533_, 6);
v_maxHeartbeats_547_ = lean_ctor_get(v_toCold_533_, 7);
v_quotContext_548_ = lean_ctor_get(v_toCold_533_, 8);
v_currMacroScope_549_ = lean_ctor_get(v_toCold_533_, 9);
v_cancelTk_x3f_550_ = lean_ctor_get(v_toCold_533_, 10);
v_inheritedTraceOptions_551_ = lean_ctor_get(v_toCold_533_, 11);
v_isSharedCheck_592_ = !lean_is_exclusive(v_toCold_533_);
if (v_isSharedCheck_592_ == 0)
{
lean_object* v_unused_593_; lean_object* v_unused_594_; 
v_unused_593_ = lean_ctor_get(v_toCold_533_, 3);
lean_dec(v_unused_593_);
v_unused_594_ = lean_ctor_get(v_toCold_533_, 2);
lean_dec(v_unused_594_);
v___x_553_ = v_toCold_533_;
v_isShared_554_ = v_isSharedCheck_592_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_inheritedTraceOptions_551_);
lean_inc(v_cancelTk_x3f_550_);
lean_inc(v_currMacroScope_549_);
lean_inc(v_quotContext_548_);
lean_inc(v_maxHeartbeats_547_);
lean_inc(v_initHeartbeats_546_);
lean_inc(v_openDecls_545_);
lean_inc(v_currNamespace_544_);
lean_inc(v_fileMap_543_);
lean_inc(v_fileName_542_);
lean_dec(v_toCold_533_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_592_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_555_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v___y_529_, v___y_528_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 3, v___x_555_);
lean_ctor_set(v___x_553_, 2, v___y_529_);
v___x_557_ = v___x_553_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_fileName_542_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_fileMap_543_);
lean_ctor_set(v_reuseFailAlloc_591_, 2, v___y_529_);
lean_ctor_set(v_reuseFailAlloc_591_, 3, v___x_555_);
lean_ctor_set(v_reuseFailAlloc_591_, 4, v_currNamespace_544_);
lean_ctor_set(v_reuseFailAlloc_591_, 5, v_openDecls_545_);
lean_ctor_set(v_reuseFailAlloc_591_, 6, v_initHeartbeats_546_);
lean_ctor_set(v_reuseFailAlloc_591_, 7, v_maxHeartbeats_547_);
lean_ctor_set(v_reuseFailAlloc_591_, 8, v_quotContext_548_);
lean_ctor_set(v_reuseFailAlloc_591_, 9, v_currMacroScope_549_);
lean_ctor_set(v_reuseFailAlloc_591_, 10, v_cancelTk_x3f_550_);
lean_ctor_set(v_reuseFailAlloc_591_, 11, v_inheritedTraceOptions_551_);
v___x_557_ = v_reuseFailAlloc_591_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_559_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_557_);
v___x_559_ = v___x_540_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_currRecDepth_534_);
lean_ctor_set(v_reuseFailAlloc_590_, 2, v_ref_535_);
lean_ctor_set_uint8(v_reuseFailAlloc_590_, sizeof(void*)*3 + 2, v_suppressElabErrors_536_);
lean_ctor_set_uint8(v_reuseFailAlloc_590_, sizeof(void*)*3 + 3, v_checkDeprecated_537_);
lean_ctor_set_uint8(v_reuseFailAlloc_590_, sizeof(void*)*3 + 4, v_isRecordingDeps_538_);
v___x_559_ = v_reuseFailAlloc_590_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; 
lean_ctor_set_uint16(v___x_559_, sizeof(void*)*3, v___y_530_);
v___x_560_ = l_Lean_addAndCompile(v___x_470_, v___x_525_, v___x_526_, v___x_559_, v___y_532_);
lean_dec_ref(v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_dec_ref_known(v___x_560_, 1);
goto v___jp_449_;
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_589_; 
lean_dec(v_a_445_);
v_a_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_589_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_589_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_589_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
uint8_t v___x_565_; 
v___x_565_ = l_Lean_Exception_isInterrupt(v_a_561_);
if (v___x_565_ == 0)
{
uint8_t v___x_566_; 
lean_inc(v_a_561_);
v___x_566_ = l_Lean_Exception_isRuntime(v_a_561_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
lean_del_object(v___x_563_);
v___x_567_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_568_ = l_Lean_MessageData_ofName(v_tacticName_434_);
v___x_569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__12, &l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12);
v___x_571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = l_Lean_Exception_toMessageData(v_a_561_);
v___x_573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_571_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_573_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec_ref(v___y_441_);
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v___x_584_; 
lean_dec_ref(v___y_441_);
lean_dec(v_tacticName_434_);
if (v_isShared_564_ == 0)
{
v___x_584_ = v___x_563_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_561_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
else
{
lean_object* v___x_587_; 
lean_dec_ref(v___y_441_);
lean_dec(v_tacticName_434_);
if (v_isShared_564_ == 0)
{
v___x_587_ = v___x_563_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_561_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
}
}
}
}
v___jp_596_:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_611_, 0, v___y_610_);
lean_ctor_set(v___x_611_, 1, v_nextMacroScope_602_);
lean_ctor_set(v___x_611_, 2, v_ngen_603_);
lean_ctor_set(v___x_611_, 3, v_auxDeclNGen_604_);
lean_ctor_set(v___x_611_, 4, v_traceState_605_);
lean_ctor_set(v___x_611_, 5, v___x_486_);
lean_ctor_set(v___x_611_, 6, v_recordedDeps_606_);
lean_ctor_set(v___x_611_, 7, v_messages_607_);
lean_ctor_set(v___x_611_, 8, v_infoState_608_);
lean_ctor_set(v___x_611_, 9, v_snapshotTasks_609_);
v___x_612_ = lean_st_ref_put(v___y_600_, v___x_611_);
v___y_528_ = v___y_597_;
v___y_529_ = v___y_598_;
v___y_530_ = v___y_599_;
v___y_531_ = v___y_601_;
v___y_532_ = v___y_600_;
goto v___jp_527_;
}
v___jp_613_:
{
lean_object* v___x_620_; lean_object* v_env_621_; lean_object* v_nextMacroScope_622_; lean_object* v_ngen_623_; lean_object* v_auxDeclNGen_624_; lean_object* v_traceState_625_; lean_object* v_recordedDeps_626_; lean_object* v_messages_627_; lean_object* v_infoState_628_; lean_object* v_snapshotTasks_629_; uint16_t v___x_630_; uint16_t v___x_631_; uint16_t v___x_632_; uint8_t v___x_633_; 
v___x_620_ = lean_st_ref_take(v___y_617_);
v_env_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc_ref(v_env_621_);
v_nextMacroScope_622_ = lean_ctor_get(v___x_620_, 1);
lean_inc(v_nextMacroScope_622_);
v_ngen_623_ = lean_ctor_get(v___x_620_, 2);
lean_inc_ref(v_ngen_623_);
v_auxDeclNGen_624_ = lean_ctor_get(v___x_620_, 3);
lean_inc_ref(v_auxDeclNGen_624_);
v_traceState_625_ = lean_ctor_get(v___x_620_, 4);
lean_inc_ref(v_traceState_625_);
v_recordedDeps_626_ = lean_ctor_get(v___x_620_, 6);
lean_inc_ref(v_recordedDeps_626_);
v_messages_627_ = lean_ctor_get(v___x_620_, 7);
lean_inc_ref(v_messages_627_);
v_infoState_628_ = lean_ctor_get(v___x_620_, 8);
lean_inc_ref(v_infoState_628_);
v_snapshotTasks_629_ = lean_ctor_get(v___x_620_, 9);
lean_inc_ref(v_snapshotTasks_629_);
lean_dec(v___x_620_);
v___x_630_ = 512;
v___x_631_ = lean_uint16_land(v___y_616_, v___x_630_);
v___x_632_ = 0;
v___x_633_ = lean_uint16_dec_eq(v___x_631_, v___x_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_Kernel_enableDiag(v_env_621_, v___x_525_);
v___y_597_ = v___y_614_;
v___y_598_ = v___y_615_;
v___y_599_ = v___y_616_;
v___y_600_ = v___y_617_;
v___y_601_ = v___y_618_;
v_nextMacroScope_602_ = v_nextMacroScope_622_;
v_ngen_603_ = v_ngen_623_;
v_auxDeclNGen_604_ = v_auxDeclNGen_624_;
v_traceState_605_ = v_traceState_625_;
v_recordedDeps_606_ = v_recordedDeps_626_;
v_messages_607_ = v_messages_627_;
v_infoState_608_ = v_infoState_628_;
v_snapshotTasks_609_ = v_snapshotTasks_629_;
v___y_610_ = v___x_634_;
goto v___jp_596_;
}
else
{
lean_object* v___x_635_; 
v___x_635_ = l_Lean_Kernel_enableDiag(v_env_621_, v___y_619_);
v___y_597_ = v___y_614_;
v___y_598_ = v___y_615_;
v___y_599_ = v___y_616_;
v___y_600_ = v___y_617_;
v___y_601_ = v___y_618_;
v_nextMacroScope_602_ = v_nextMacroScope_622_;
v_ngen_603_ = v_ngen_623_;
v_auxDeclNGen_604_ = v_auxDeclNGen_624_;
v_traceState_605_ = v_traceState_625_;
v_recordedDeps_606_ = v_recordedDeps_626_;
v_messages_607_ = v_messages_627_;
v_infoState_608_ = v_infoState_628_;
v_snapshotTasks_609_ = v_snapshotTasks_629_;
v___y_610_ = v___x_635_;
goto v___jp_596_;
}
}
v___jp_636_:
{
uint16_t v___x_641_; lean_object* v___x_642_; lean_object* v_env_643_; uint8_t v___x_644_; uint16_t v___x_645_; uint16_t v___x_646_; uint16_t v___x_647_; uint8_t v___x_648_; 
v___x_641_ = l_Lean_OptionFlags_ofOptions(v___y_640_);
v___x_642_ = lean_st_ref_get(v___y_638_);
v_env_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc_ref(v_env_643_);
lean_dec(v___x_642_);
v___x_644_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_643_);
lean_dec_ref(v_env_643_);
v___x_645_ = 512;
v___x_646_ = lean_uint16_land(v___x_641_, v___x_645_);
v___x_647_ = 0;
v___x_648_ = lean_uint16_dec_eq(v___x_646_, v___x_647_);
if (v___x_648_ == 0)
{
if (v___x_644_ == 0)
{
v___y_614_ = v___y_637_;
v___y_615_ = v___y_640_;
v___y_616_ = v___x_641_;
v___y_617_ = v___y_638_;
v___y_618_ = v___y_639_;
v___y_619_ = v___x_644_;
goto v___jp_613_;
}
else
{
v___y_528_ = v___y_637_;
v___y_529_ = v___y_640_;
v___y_530_ = v___x_641_;
v___y_531_ = v___y_639_;
v___y_532_ = v___y_638_;
goto v___jp_527_;
}
}
else
{
if (v___x_644_ == 0)
{
v___y_528_ = v___y_637_;
v___y_529_ = v___y_640_;
v___y_530_ = v___x_641_;
v___y_531_ = v___y_639_;
v___y_532_ = v___y_638_;
goto v___jp_527_;
}
else
{
v___y_614_ = v___y_637_;
v___y_615_ = v___y_640_;
v___y_616_ = v___x_641_;
v___y_617_ = v___y_638_;
v___y_618_ = v___y_639_;
v___y_619_ = v___x_526_;
goto v___jp_613_;
}
}
}
v___jp_649_:
{
lean_object* v_toCold_655_; lean_object* v_currRecDepth_656_; lean_object* v_ref_657_; uint8_t v_suppressElabErrors_658_; uint8_t v_checkDeprecated_659_; uint8_t v_isRecordingDeps_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_690_; 
v_toCold_655_ = lean_ctor_get(v___y_653_, 0);
v_currRecDepth_656_ = lean_ctor_get(v___y_653_, 1);
v_ref_657_ = lean_ctor_get(v___y_653_, 2);
v_suppressElabErrors_658_ = lean_ctor_get_uint8(v___y_653_, sizeof(void*)*3 + 2);
v_checkDeprecated_659_ = lean_ctor_get_uint8(v___y_653_, sizeof(void*)*3 + 3);
v_isRecordingDeps_660_ = lean_ctor_get_uint8(v___y_653_, sizeof(void*)*3 + 4);
v_isSharedCheck_690_ = !lean_is_exclusive(v___y_653_);
if (v_isSharedCheck_690_ == 0)
{
v___x_662_ = v___y_653_;
v_isShared_663_ = v_isSharedCheck_690_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_ref_657_);
lean_inc(v_currRecDepth_656_);
lean_inc(v_toCold_655_);
lean_dec(v___y_653_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_690_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v_fileName_664_; lean_object* v_fileMap_665_; lean_object* v_currNamespace_666_; lean_object* v_openDecls_667_; lean_object* v_initHeartbeats_668_; lean_object* v_maxHeartbeats_669_; lean_object* v_quotContext_670_; lean_object* v_currMacroScope_671_; lean_object* v_cancelTk_x3f_672_; lean_object* v_inheritedTraceOptions_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_687_; 
v_fileName_664_ = lean_ctor_get(v_toCold_655_, 0);
v_fileMap_665_ = lean_ctor_get(v_toCold_655_, 1);
v_currNamespace_666_ = lean_ctor_get(v_toCold_655_, 4);
v_openDecls_667_ = lean_ctor_get(v_toCold_655_, 5);
v_initHeartbeats_668_ = lean_ctor_get(v_toCold_655_, 6);
v_maxHeartbeats_669_ = lean_ctor_get(v_toCold_655_, 7);
v_quotContext_670_ = lean_ctor_get(v_toCold_655_, 8);
v_currMacroScope_671_ = lean_ctor_get(v_toCold_655_, 9);
v_cancelTk_x3f_672_ = lean_ctor_get(v_toCold_655_, 10);
v_inheritedTraceOptions_673_ = lean_ctor_get(v_toCold_655_, 11);
v_isSharedCheck_687_ = !lean_is_exclusive(v_toCold_655_);
if (v_isSharedCheck_687_ == 0)
{
lean_object* v_unused_688_; lean_object* v_unused_689_; 
v_unused_688_ = lean_ctor_get(v_toCold_655_, 3);
lean_dec(v_unused_688_);
v_unused_689_ = lean_ctor_get(v_toCold_655_, 2);
lean_dec(v_unused_689_);
v___x_675_ = v_toCold_655_;
v_isShared_676_ = v_isSharedCheck_687_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_inheritedTraceOptions_673_);
lean_inc(v_cancelTk_x3f_672_);
lean_inc(v_currMacroScope_671_);
lean_inc(v_quotContext_670_);
lean_inc(v_maxHeartbeats_669_);
lean_inc(v_initHeartbeats_668_);
lean_inc(v_openDecls_667_);
lean_inc(v_currNamespace_666_);
lean_inc(v_fileMap_665_);
lean_inc(v_fileName_664_);
lean_dec(v_toCold_655_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_687_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v___y_652_, v___y_650_);
lean_inc_ref(v___y_652_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 3, v___x_677_);
lean_ctor_set(v___x_675_, 2, v___y_652_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_fileName_664_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_fileMap_665_);
lean_ctor_set(v_reuseFailAlloc_686_, 2, v___y_652_);
lean_ctor_set(v_reuseFailAlloc_686_, 3, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_686_, 4, v_currNamespace_666_);
lean_ctor_set(v_reuseFailAlloc_686_, 5, v_openDecls_667_);
lean_ctor_set(v_reuseFailAlloc_686_, 6, v_initHeartbeats_668_);
lean_ctor_set(v_reuseFailAlloc_686_, 7, v_maxHeartbeats_669_);
lean_ctor_set(v_reuseFailAlloc_686_, 8, v_quotContext_670_);
lean_ctor_set(v_reuseFailAlloc_686_, 9, v_currMacroScope_671_);
lean_ctor_set(v_reuseFailAlloc_686_, 10, v_cancelTk_x3f_672_);
lean_ctor_set(v_reuseFailAlloc_686_, 11, v_inheritedTraceOptions_673_);
v___x_679_ = v_reuseFailAlloc_686_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_681_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_679_);
v___x_681_ = v___x_662_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_currRecDepth_656_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v_ref_657_);
lean_ctor_set_uint8(v_reuseFailAlloc_685_, sizeof(void*)*3 + 2, v_suppressElabErrors_658_);
lean_ctor_set_uint8(v_reuseFailAlloc_685_, sizeof(void*)*3 + 3, v_checkDeprecated_659_);
lean_ctor_set_uint8(v_reuseFailAlloc_685_, sizeof(void*)*3 + 4, v_isRecordingDeps_660_);
v___x_681_ = v_reuseFailAlloc_685_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_ctor_set_uint16(v___x_681_, sizeof(void*)*3, v___y_651_);
if (v_isRecordingDeps_660_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = l_Lean_Compiler_compiler_relaxedMetaCheck;
v___x_683_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6(v___y_652_, v___x_682_, v___x_525_);
v___y_637_ = v___y_650_;
v___y_638_ = v___y_654_;
v___y_639_ = v___x_681_;
v___y_640_ = v___x_683_;
goto v___jp_636_;
}
else
{
lean_object* v___x_684_; 
v___x_684_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v___y_652_);
v___y_637_ = v___y_650_;
v___y_638_ = v___y_654_;
v___y_639_ = v___x_681_;
v___y_640_ = v___x_684_;
goto v___jp_636_;
}
}
}
}
}
}
v___jp_691_:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_706_, 0, v___y_705_);
lean_ctor_set(v___x_706_, 1, v_nextMacroScope_697_);
lean_ctor_set(v___x_706_, 2, v_ngen_698_);
lean_ctor_set(v___x_706_, 3, v_auxDeclNGen_699_);
lean_ctor_set(v___x_706_, 4, v_traceState_700_);
lean_ctor_set(v___x_706_, 5, v___x_486_);
lean_ctor_set(v___x_706_, 6, v_recordedDeps_701_);
lean_ctor_set(v___x_706_, 7, v_messages_702_);
lean_ctor_set(v___x_706_, 8, v_infoState_703_);
lean_ctor_set(v___x_706_, 9, v_snapshotTasks_704_);
v___x_707_ = lean_st_ref_put(v___y_693_, v___x_706_);
v___y_650_ = v___y_692_;
v___y_651_ = v___y_694_;
v___y_652_ = v___y_695_;
v___y_653_ = v___y_696_;
v___y_654_ = v___y_693_;
goto v___jp_649_;
}
v___jp_708_:
{
lean_object* v___x_715_; lean_object* v_env_716_; lean_object* v_nextMacroScope_717_; lean_object* v_ngen_718_; lean_object* v_auxDeclNGen_719_; lean_object* v_traceState_720_; lean_object* v_recordedDeps_721_; lean_object* v_messages_722_; lean_object* v_infoState_723_; lean_object* v_snapshotTasks_724_; uint16_t v___x_725_; uint16_t v___x_726_; uint16_t v___x_727_; uint8_t v___x_728_; 
v___x_715_ = lean_st_ref_take(v___y_710_);
v_env_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc_ref(v_env_716_);
v_nextMacroScope_717_ = lean_ctor_get(v___x_715_, 1);
lean_inc(v_nextMacroScope_717_);
v_ngen_718_ = lean_ctor_get(v___x_715_, 2);
lean_inc_ref(v_ngen_718_);
v_auxDeclNGen_719_ = lean_ctor_get(v___x_715_, 3);
lean_inc_ref(v_auxDeclNGen_719_);
v_traceState_720_ = lean_ctor_get(v___x_715_, 4);
lean_inc_ref(v_traceState_720_);
v_recordedDeps_721_ = lean_ctor_get(v___x_715_, 6);
lean_inc_ref(v_recordedDeps_721_);
v_messages_722_ = lean_ctor_get(v___x_715_, 7);
lean_inc_ref(v_messages_722_);
v_infoState_723_ = lean_ctor_get(v___x_715_, 8);
lean_inc_ref(v_infoState_723_);
v_snapshotTasks_724_ = lean_ctor_get(v___x_715_, 9);
lean_inc_ref(v_snapshotTasks_724_);
lean_dec(v___x_715_);
v___x_725_ = 512;
v___x_726_ = lean_uint16_land(v___y_711_, v___x_725_);
v___x_727_ = 0;
v___x_728_ = lean_uint16_dec_eq(v___x_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
v___x_729_ = l_Lean_Kernel_enableDiag(v_env_716_, v___x_525_);
v___y_692_ = v___y_709_;
v___y_693_ = v___y_710_;
v___y_694_ = v___y_711_;
v___y_695_ = v___y_713_;
v___y_696_ = v___y_712_;
v_nextMacroScope_697_ = v_nextMacroScope_717_;
v_ngen_698_ = v_ngen_718_;
v_auxDeclNGen_699_ = v_auxDeclNGen_719_;
v_traceState_700_ = v_traceState_720_;
v_recordedDeps_701_ = v_recordedDeps_721_;
v_messages_702_ = v_messages_722_;
v_infoState_703_ = v_infoState_723_;
v_snapshotTasks_704_ = v_snapshotTasks_724_;
v___y_705_ = v___x_729_;
goto v___jp_691_;
}
else
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_Kernel_enableDiag(v_env_716_, v___y_714_);
v___y_692_ = v___y_709_;
v___y_693_ = v___y_710_;
v___y_694_ = v___y_711_;
v___y_695_ = v___y_713_;
v___y_696_ = v___y_712_;
v_nextMacroScope_697_ = v_nextMacroScope_717_;
v_ngen_698_ = v_ngen_718_;
v_auxDeclNGen_699_ = v_auxDeclNGen_719_;
v_traceState_700_ = v_traceState_720_;
v_recordedDeps_701_ = v_recordedDeps_721_;
v_messages_702_ = v_messages_722_;
v_infoState_703_ = v_infoState_723_;
v_snapshotTasks_704_ = v_snapshotTasks_724_;
v___y_705_ = v___x_730_;
goto v___jp_691_;
}
}
v___jp_731_:
{
uint16_t v___x_736_; lean_object* v___x_737_; lean_object* v_env_738_; uint8_t v___x_739_; uint16_t v___x_740_; uint16_t v___x_741_; uint16_t v___x_742_; uint8_t v___x_743_; 
v___x_736_ = l_Lean_OptionFlags_ofOptions(v___y_735_);
v___x_737_ = lean_st_ref_get(v___y_733_);
v_env_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc_ref(v_env_738_);
lean_dec(v___x_737_);
v___x_739_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_738_);
lean_dec_ref(v_env_738_);
v___x_740_ = 512;
v___x_741_ = lean_uint16_land(v___x_736_, v___x_740_);
v___x_742_ = 0;
v___x_743_ = lean_uint16_dec_eq(v___x_741_, v___x_742_);
if (v___x_743_ == 0)
{
if (v___x_739_ == 0)
{
v___y_709_ = v___y_732_;
v___y_710_ = v___y_733_;
v___y_711_ = v___x_736_;
v___y_712_ = v___y_734_;
v___y_713_ = v___y_735_;
v___y_714_ = v___x_739_;
goto v___jp_708_;
}
else
{
v___y_650_ = v___y_732_;
v___y_651_ = v___x_736_;
v___y_652_ = v___y_735_;
v___y_653_ = v___y_734_;
v___y_654_ = v___y_733_;
goto v___jp_649_;
}
}
else
{
if (v___x_739_ == 0)
{
v___y_650_ = v___y_732_;
v___y_651_ = v___x_736_;
v___y_652_ = v___y_735_;
v___y_653_ = v___y_734_;
v___y_654_ = v___y_733_;
goto v___jp_649_;
}
else
{
v___y_709_ = v___y_732_;
v___y_710_ = v___y_733_;
v___y_711_ = v___x_736_;
v___y_712_ = v___y_734_;
v___y_713_ = v___y_735_;
v___y_714_ = v___x_526_;
goto v___jp_708_;
}
}
}
v___jp_744_:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_766_; 
v___x_763_ = l_Lean_maxRecDepth;
v___x_764_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v___y_745_, v___x_763_);
lean_inc_ref(v___y_745_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 11, v_inheritedTraceOptions_756_);
lean_ctor_set(v___x_523_, 10, v_cancelTk_x3f_755_);
lean_ctor_set(v___x_523_, 9, v_currMacroScope_754_);
lean_ctor_set(v___x_523_, 8, v_quotContext_753_);
lean_ctor_set(v___x_523_, 7, v_maxHeartbeats_752_);
lean_ctor_set(v___x_523_, 6, v_initHeartbeats_751_);
lean_ctor_set(v___x_523_, 5, v_openDecls_750_);
lean_ctor_set(v___x_523_, 4, v_currNamespace_749_);
lean_ctor_set(v___x_523_, 3, v___x_764_);
lean_ctor_set(v___x_523_, 2, v___y_745_);
lean_ctor_set(v___x_523_, 1, v_fileMap_748_);
lean_ctor_set(v___x_523_, 0, v_fileName_747_);
v___x_766_ = v___x_523_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_fileName_747_);
lean_ctor_set(v_reuseFailAlloc_771_, 1, v_fileMap_748_);
lean_ctor_set(v_reuseFailAlloc_771_, 2, v___y_745_);
lean_ctor_set(v_reuseFailAlloc_771_, 3, v___x_764_);
lean_ctor_set(v_reuseFailAlloc_771_, 4, v_currNamespace_749_);
lean_ctor_set(v_reuseFailAlloc_771_, 5, v_openDecls_750_);
lean_ctor_set(v_reuseFailAlloc_771_, 6, v_initHeartbeats_751_);
lean_ctor_set(v_reuseFailAlloc_771_, 7, v_maxHeartbeats_752_);
lean_ctor_set(v_reuseFailAlloc_771_, 8, v_quotContext_753_);
lean_ctor_set(v_reuseFailAlloc_771_, 9, v_currMacroScope_754_);
lean_ctor_set(v_reuseFailAlloc_771_, 10, v_cancelTk_x3f_755_);
lean_ctor_set(v_reuseFailAlloc_771_, 11, v_inheritedTraceOptions_756_);
v___x_766_ = v_reuseFailAlloc_771_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
lean_object* v___x_767_; 
v___x_767_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_767_, 0, v___x_766_);
lean_ctor_set(v___x_767_, 1, v_currRecDepth_757_);
lean_ctor_set(v___x_767_, 2, v_ref_758_);
lean_ctor_set_uint16(v___x_767_, sizeof(void*)*3, v___y_746_);
lean_ctor_set_uint8(v___x_767_, sizeof(void*)*3 + 2, v_suppressElabErrors_759_);
lean_ctor_set_uint8(v___x_767_, sizeof(void*)*3 + 3, v_checkDeprecated_760_);
lean_ctor_set_uint8(v___x_767_, sizeof(void*)*3 + 4, v_isRecordingDeps_761_);
if (v_isRecordingDeps_761_ == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_769_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__6(v___y_745_, v___x_768_, v_isRecordingDeps_761_);
v___y_732_ = v___x_763_;
v___y_733_ = v___y_762_;
v___y_734_ = v___x_767_;
v___y_735_ = v___x_769_;
goto v___jp_731_;
}
else
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v___y_745_);
v___y_732_ = v___x_763_;
v___y_733_ = v___y_762_;
v___y_734_ = v___x_767_;
v___y_735_ = v___x_770_;
goto v___jp_731_;
}
}
}
v___jp_772_:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_784_, 0, v___y_783_);
lean_ctor_set(v___x_784_, 1, v_nextMacroScope_774_);
lean_ctor_set(v___x_784_, 2, v_ngen_775_);
lean_ctor_set(v___x_784_, 3, v_auxDeclNGen_776_);
lean_ctor_set(v___x_784_, 4, v_traceState_777_);
lean_ctor_set(v___x_784_, 5, v___x_486_);
lean_ctor_set(v___x_784_, 6, v_recordedDeps_778_);
lean_ctor_set(v___x_784_, 7, v_messages_779_);
lean_ctor_set(v___x_784_, 8, v_infoState_780_);
lean_ctor_set(v___x_784_, 9, v_snapshotTasks_781_);
v___x_785_ = lean_st_ref_put(v___y_442_, v___x_784_);
lean_inc(v_ref_507_);
lean_inc(v_currRecDepth_506_);
v___y_745_ = v___y_773_;
v___y_746_ = v___y_782_;
v_fileName_747_ = v_fileName_511_;
v_fileMap_748_ = v_fileMap_512_;
v_currNamespace_749_ = v_currNamespace_514_;
v_openDecls_750_ = v_openDecls_515_;
v_initHeartbeats_751_ = v_initHeartbeats_516_;
v_maxHeartbeats_752_ = v_maxHeartbeats_517_;
v_quotContext_753_ = v_quotContext_518_;
v_currMacroScope_754_ = v_currMacroScope_519_;
v_cancelTk_x3f_755_ = v_cancelTk_x3f_520_;
v_inheritedTraceOptions_756_ = v_inheritedTraceOptions_521_;
v_currRecDepth_757_ = v_currRecDepth_506_;
v_ref_758_ = v_ref_507_;
v_suppressElabErrors_759_ = v_suppressElabErrors_508_;
v_checkDeprecated_760_ = v_checkDeprecated_509_;
v_isRecordingDeps_761_ = v_isRecordingDeps_510_;
v___y_762_ = v___y_442_;
goto v___jp_744_;
}
v___jp_786_:
{
lean_object* v___x_790_; lean_object* v_env_791_; lean_object* v_nextMacroScope_792_; lean_object* v_ngen_793_; lean_object* v_auxDeclNGen_794_; lean_object* v_traceState_795_; lean_object* v_recordedDeps_796_; lean_object* v_messages_797_; lean_object* v_infoState_798_; lean_object* v_snapshotTasks_799_; uint16_t v___x_800_; uint16_t v___x_801_; uint16_t v___x_802_; uint8_t v___x_803_; 
v___x_790_ = lean_st_ref_take(v___y_442_);
v_env_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc_ref(v_env_791_);
v_nextMacroScope_792_ = lean_ctor_get(v___x_790_, 1);
lean_inc(v_nextMacroScope_792_);
v_ngen_793_ = lean_ctor_get(v___x_790_, 2);
lean_inc_ref(v_ngen_793_);
v_auxDeclNGen_794_ = lean_ctor_get(v___x_790_, 3);
lean_inc_ref(v_auxDeclNGen_794_);
v_traceState_795_ = lean_ctor_get(v___x_790_, 4);
lean_inc_ref(v_traceState_795_);
v_recordedDeps_796_ = lean_ctor_get(v___x_790_, 6);
lean_inc_ref(v_recordedDeps_796_);
v_messages_797_ = lean_ctor_get(v___x_790_, 7);
lean_inc_ref(v_messages_797_);
v_infoState_798_ = lean_ctor_get(v___x_790_, 8);
lean_inc_ref(v_infoState_798_);
v_snapshotTasks_799_ = lean_ctor_get(v___x_790_, 9);
lean_inc_ref(v_snapshotTasks_799_);
lean_dec(v___x_790_);
v___x_800_ = 512;
v___x_801_ = lean_uint16_land(v___y_788_, v___x_800_);
v___x_802_ = 0;
v___x_803_ = lean_uint16_dec_eq(v___x_801_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_Kernel_enableDiag(v_env_791_, v___x_525_);
v___y_773_ = v___y_787_;
v_nextMacroScope_774_ = v_nextMacroScope_792_;
v_ngen_775_ = v_ngen_793_;
v_auxDeclNGen_776_ = v_auxDeclNGen_794_;
v_traceState_777_ = v_traceState_795_;
v_recordedDeps_778_ = v_recordedDeps_796_;
v_messages_779_ = v_messages_797_;
v_infoState_780_ = v_infoState_798_;
v_snapshotTasks_781_ = v_snapshotTasks_799_;
v___y_782_ = v___y_788_;
v___y_783_ = v___x_804_;
goto v___jp_772_;
}
else
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_Kernel_enableDiag(v_env_791_, v___y_789_);
v___y_773_ = v___y_787_;
v_nextMacroScope_774_ = v_nextMacroScope_792_;
v_ngen_775_ = v_ngen_793_;
v_auxDeclNGen_776_ = v_auxDeclNGen_794_;
v_traceState_777_ = v_traceState_795_;
v_recordedDeps_778_ = v_recordedDeps_796_;
v_messages_779_ = v_messages_797_;
v_infoState_780_ = v_infoState_798_;
v_snapshotTasks_781_ = v_snapshotTasks_799_;
v___y_782_ = v___y_788_;
v___y_783_ = v___x_805_;
goto v___jp_772_;
}
}
v___jp_806_:
{
uint16_t v___x_808_; lean_object* v___x_809_; lean_object* v_env_810_; uint8_t v___x_811_; uint16_t v___x_812_; uint16_t v___x_813_; uint16_t v___x_814_; uint8_t v___x_815_; 
v___x_808_ = l_Lean_OptionFlags_ofOptions(v___y_807_);
v___x_809_ = lean_st_ref_get(v___y_442_);
v_env_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc_ref(v_env_810_);
lean_dec(v___x_809_);
v___x_811_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_810_);
lean_dec_ref(v_env_810_);
v___x_812_ = 512;
v___x_813_ = lean_uint16_land(v___x_808_, v___x_812_);
v___x_814_ = 0;
v___x_815_ = lean_uint16_dec_eq(v___x_813_, v___x_814_);
if (v___x_815_ == 0)
{
if (v___x_811_ == 0)
{
v___y_787_ = v___y_807_;
v___y_788_ = v___x_808_;
v___y_789_ = v___x_811_;
goto v___jp_786_;
}
else
{
lean_inc(v_ref_507_);
lean_inc(v_currRecDepth_506_);
v___y_745_ = v___y_807_;
v___y_746_ = v___x_808_;
v_fileName_747_ = v_fileName_511_;
v_fileMap_748_ = v_fileMap_512_;
v_currNamespace_749_ = v_currNamespace_514_;
v_openDecls_750_ = v_openDecls_515_;
v_initHeartbeats_751_ = v_initHeartbeats_516_;
v_maxHeartbeats_752_ = v_maxHeartbeats_517_;
v_quotContext_753_ = v_quotContext_518_;
v_currMacroScope_754_ = v_currMacroScope_519_;
v_cancelTk_x3f_755_ = v_cancelTk_x3f_520_;
v_inheritedTraceOptions_756_ = v_inheritedTraceOptions_521_;
v_currRecDepth_757_ = v_currRecDepth_506_;
v_ref_758_ = v_ref_507_;
v_suppressElabErrors_759_ = v_suppressElabErrors_508_;
v_checkDeprecated_760_ = v_checkDeprecated_509_;
v_isRecordingDeps_761_ = v_isRecordingDeps_510_;
v___y_762_ = v___y_442_;
goto v___jp_744_;
}
}
else
{
if (v___x_811_ == 0)
{
lean_inc(v_ref_507_);
lean_inc(v_currRecDepth_506_);
v___y_745_ = v___y_807_;
v___y_746_ = v___x_808_;
v_fileName_747_ = v_fileName_511_;
v_fileMap_748_ = v_fileMap_512_;
v_currNamespace_749_ = v_currNamespace_514_;
v_openDecls_750_ = v_openDecls_515_;
v_initHeartbeats_751_ = v_initHeartbeats_516_;
v_maxHeartbeats_752_ = v_maxHeartbeats_517_;
v_quotContext_753_ = v_quotContext_518_;
v_currMacroScope_754_ = v_currMacroScope_519_;
v_cancelTk_x3f_755_ = v_cancelTk_x3f_520_;
v_inheritedTraceOptions_756_ = v_inheritedTraceOptions_521_;
v_currRecDepth_757_ = v_currRecDepth_506_;
v_ref_758_ = v_ref_507_;
v_suppressElabErrors_759_ = v_suppressElabErrors_508_;
v_checkDeprecated_760_ = v_checkDeprecated_509_;
v_isRecordingDeps_761_ = v_isRecordingDeps_510_;
v___y_762_ = v___y_442_;
goto v___jp_744_;
}
else
{
v___y_787_ = v___y_807_;
v___y_788_ = v___x_808_;
v___y_789_ = v___x_526_;
goto v___jp_786_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0___boxed(lean_object* v___x_829_, lean_object* v_tacticName_830_, lean_object* v___x_831_, lean_object* v___x_832_, lean_object* v_a_833_, lean_object* v___x_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_Meta_nativeEqTrue___lam__0(v___x_829_, v_tacticName_830_, v___x_831_, v___x_832_, v_a_833_, v___x_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
return v_res_840_;
}
}
static lean_object* _init_l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__7, &l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7);
v___x_843_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
lean_ctor_set(v___x_843_, 2, v___x_841_);
return v___x_843_;
}
}
static lean_object* _init_l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_844_ = lean_obj_once(&l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__0, &l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__0_once, _init_l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__0);
v___x_845_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__10, &l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10);
v___x_846_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__7, &l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7);
v___x_847_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__9, &l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9);
v___x_848_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v___x_846_);
lean_ctor_set(v___x_848_, 2, v___x_845_);
lean_ctor_set(v___x_848_, 3, v___x_846_);
lean_ctor_set(v___x_848_, 4, v___x_846_);
lean_ctor_set(v___x_848_, 5, v___x_846_);
lean_ctor_set(v___x_848_, 6, v___x_846_);
lean_ctor_set(v___x_848_, 7, v___x_844_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg(lean_object* v_declName_849_, lean_object* v_declRanges_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
uint8_t v___x_857_; 
v___x_857_ = l_Lean_Name_isAnonymous(v_declName_849_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; lean_object* v_env_859_; lean_object* v___x_860_; lean_object* v___x_861_; uint8_t v___x_862_; 
v___x_858_ = lean_st_ref_get(v___y_852_);
v_env_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc_ref(v_env_859_);
lean_dec(v___x_858_);
v___x_860_ = l_Lean_declRangeExt;
v___x_861_ = lean_box(1);
lean_inc(v_declName_849_);
v___x_862_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_860_, v_env_859_, v_declName_849_, v___x_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; lean_object* v_env_864_; lean_object* v_nextMacroScope_865_; lean_object* v_ngen_866_; lean_object* v_auxDeclNGen_867_; lean_object* v_traceState_868_; lean_object* v_recordedDeps_869_; lean_object* v_messages_870_; lean_object* v_infoState_871_; lean_object* v_snapshotTasks_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_899_; 
v___x_863_ = lean_st_ref_take(v___y_852_);
v_env_864_ = lean_ctor_get(v___x_863_, 0);
v_nextMacroScope_865_ = lean_ctor_get(v___x_863_, 1);
v_ngen_866_ = lean_ctor_get(v___x_863_, 2);
v_auxDeclNGen_867_ = lean_ctor_get(v___x_863_, 3);
v_traceState_868_ = lean_ctor_get(v___x_863_, 4);
v_recordedDeps_869_ = lean_ctor_get(v___x_863_, 6);
v_messages_870_ = lean_ctor_get(v___x_863_, 7);
v_infoState_871_ = lean_ctor_get(v___x_863_, 8);
v_snapshotTasks_872_ = lean_ctor_get(v___x_863_, 9);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v___x_863_, 5);
lean_dec(v_unused_900_);
v___x_874_ = v___x_863_;
v_isShared_875_ = v_isSharedCheck_899_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_snapshotTasks_872_);
lean_inc(v_infoState_871_);
lean_inc(v_messages_870_);
lean_inc(v_recordedDeps_869_);
lean_inc(v_traceState_868_);
lean_inc(v_auxDeclNGen_867_);
lean_inc(v_ngen_866_);
lean_inc(v_nextMacroScope_865_);
lean_inc(v_env_864_);
lean_dec(v___x_863_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_899_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_879_; 
v___x_876_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_860_, v_env_864_, v_declName_849_, v_declRanges_850_, v___x_862_);
v___x_877_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__8, &l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 5, v___x_877_);
lean_ctor_set(v___x_874_, 0, v___x_876_);
v___x_879_ = v___x_874_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_876_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_nextMacroScope_865_);
lean_ctor_set(v_reuseFailAlloc_898_, 2, v_ngen_866_);
lean_ctor_set(v_reuseFailAlloc_898_, 3, v_auxDeclNGen_867_);
lean_ctor_set(v_reuseFailAlloc_898_, 4, v_traceState_868_);
lean_ctor_set(v_reuseFailAlloc_898_, 5, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_898_, 6, v_recordedDeps_869_);
lean_ctor_set(v_reuseFailAlloc_898_, 7, v_messages_870_);
lean_ctor_set(v_reuseFailAlloc_898_, 8, v_infoState_871_);
lean_ctor_set(v_reuseFailAlloc_898_, 9, v_snapshotTasks_872_);
v___x_879_ = v_reuseFailAlloc_898_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v_mctx_882_; lean_object* v_zetaDeltaFVarIds_883_; lean_object* v_postponed_884_; lean_object* v_diag_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_896_; 
v___x_880_ = lean_st_ref_put(v___y_852_, v___x_879_);
v___x_881_ = lean_st_ref_take(v___y_851_);
v_mctx_882_ = lean_ctor_get(v___x_881_, 0);
v_zetaDeltaFVarIds_883_ = lean_ctor_get(v___x_881_, 2);
v_postponed_884_ = lean_ctor_get(v___x_881_, 3);
v_diag_885_ = lean_ctor_get(v___x_881_, 4);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v___x_881_, 1);
lean_dec(v_unused_897_);
v___x_887_ = v___x_881_;
v_isShared_888_ = v_isSharedCheck_896_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_diag_885_);
lean_inc(v_postponed_884_);
lean_inc(v_zetaDeltaFVarIds_883_);
lean_inc(v_mctx_882_);
lean_dec(v___x_881_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_896_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_889_ = lean_box(0);
v___x_890_ = lean_obj_once(&l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1, &l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1_once, _init_l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 1, v___x_890_);
v___x_892_ = v___x_887_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_mctx_882_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_895_, 2, v_zetaDeltaFVarIds_883_);
lean_ctor_set(v_reuseFailAlloc_895_, 3, v_postponed_884_);
lean_ctor_set(v_reuseFailAlloc_895_, 4, v_diag_885_);
v___x_892_ = v_reuseFailAlloc_895_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lean_st_ref_put(v___y_851_, v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_889_);
return v___x_894_;
}
}
}
}
}
else
{
lean_dec_ref(v_declRanges_850_);
lean_dec(v_declName_849_);
goto v___jp_854_;
}
}
else
{
lean_dec_ref(v_declRanges_850_);
lean_dec(v_declName_849_);
goto v___jp_854_;
}
v___jp_854_:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = lean_box(0);
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___boxed(lean_object* v_declName_901_, lean_object* v_declRanges_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg(v_declName_901_, v_declRanges_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec(v___y_903_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(lean_object* v_stx_907_, lean_object* v___y_908_){
_start:
{
uint8_t v___x_910_; lean_object* v___x_911_; 
v___x_910_ = 0;
v___x_911_ = l_Lean_Syntax_getRange_x3f(v_stx_907_, v___x_910_);
if (lean_obj_tag(v___x_911_) == 1)
{
lean_object* v_toCold_912_; lean_object* v_val_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_925_; 
v_toCold_912_ = lean_ctor_get(v___y_908_, 0);
v_val_913_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_925_ == 0)
{
v___x_915_ = v___x_911_;
v_isShared_916_ = v_isSharedCheck_925_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_val_913_);
lean_dec(v___x_911_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_925_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v_fileMap_917_; lean_object* v_start_918_; lean_object* v_stop_919_; lean_object* v___x_920_; lean_object* v___x_922_; 
v_fileMap_917_ = lean_ctor_get(v_toCold_912_, 1);
v_start_918_ = lean_ctor_get(v_val_913_, 0);
lean_inc(v_start_918_);
v_stop_919_ = lean_ctor_get(v_val_913_, 1);
lean_inc(v_stop_919_);
lean_dec(v_val_913_);
lean_inc_ref(v_fileMap_917_);
v___x_920_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_917_, v_start_918_, v_stop_919_);
lean_dec(v_stop_919_);
lean_dec(v_start_918_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 0, v___x_920_);
v___x_922_ = v___x_915_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_920_);
v___x_922_ = v_reuseFailAlloc_924_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; 
v___x_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
return v___x_923_;
}
}
}
else
{
lean_object* v___x_926_; lean_object* v___x_927_; 
lean_dec(v___x_911_);
v___x_926_ = lean_box(0);
v___x_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
return v___x_927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg___boxed(lean_object* v_stx_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(v_stx_928_, v___y_929_);
lean_dec_ref(v___y_929_);
lean_dec(v_stx_928_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(lean_object* v_declName_932_, lean_object* v_rangeStx_933_, lean_object* v_selectionRangeStx_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v___x_940_; lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_957_; 
v___x_940_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(v_rangeStx_933_, v___y_937_);
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_957_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_957_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_957_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
if (lean_obj_tag(v_a_941_) == 1)
{
lean_object* v_val_945_; lean_object* v_a_947_; lean_object* v___x_950_; lean_object* v_a_951_; 
lean_del_object(v___x_943_);
v_val_945_ = lean_ctor_get(v_a_941_, 0);
lean_inc(v_val_945_);
lean_dec_ref_known(v_a_941_, 1);
v___x_950_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(v_selectionRangeStx_934_, v___y_937_);
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref(v___x_950_);
if (lean_obj_tag(v_a_951_) == 0)
{
lean_inc(v_val_945_);
v_a_947_ = v_val_945_;
goto v___jp_946_;
}
else
{
lean_object* v_val_952_; 
v_val_952_ = lean_ctor_get(v_a_951_, 0);
lean_inc(v_val_952_);
lean_dec_ref_known(v_a_951_, 1);
v_a_947_ = v_val_952_;
goto v___jp_946_;
}
v___jp_946_:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v_val_945_);
lean_ctor_set(v___x_948_, 1, v_a_947_);
v___x_949_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg(v_declName_932_, v___x_948_, v___y_936_, v___y_938_);
return v___x_949_;
}
}
else
{
lean_object* v___x_953_; lean_object* v___x_955_; 
lean_dec(v_a_941_);
lean_dec(v_declName_932_);
v___x_953_ = lean_box(0);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_953_);
v___x_955_ = v___x_943_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9___boxed(lean_object* v_declName_958_, lean_object* v_rangeStx_959_, lean_object* v_selectionRangeStx_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(v_declName_958_, v_rangeStx_959_, v_selectionRangeStx_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v_selectionRangeStx_960_);
lean_dec(v_rangeStx_959_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__8(lean_object* v_a_967_, lean_object* v_a_968_){
_start:
{
if (lean_obj_tag(v_a_967_) == 0)
{
lean_object* v___x_969_; 
v___x_969_ = l_List_reverse___redArg(v_a_968_);
return v___x_969_;
}
else
{
lean_object* v_head_970_; lean_object* v_tail_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_980_; 
v_head_970_ = lean_ctor_get(v_a_967_, 0);
v_tail_971_ = lean_ctor_get(v_a_967_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v_a_967_);
if (v_isSharedCheck_980_ == 0)
{
v___x_973_ = v_a_967_;
v_isShared_974_ = v_isSharedCheck_980_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_tail_971_);
lean_inc(v_head_970_);
lean_dec(v_a_967_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_980_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_975_; lean_object* v___x_977_; 
v___x_975_ = l_Lean_mkLevelParam(v_head_970_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 1, v_a_968_);
lean_ctor_set(v___x_973_, 0, v___x_975_);
v___x_977_ = v___x_973_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_a_968_);
v___x_977_ = v_reuseFailAlloc_979_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
v_a_967_ = v_tail_971_;
v_a_968_ = v___x_977_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg(lean_object* v_env_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; lean_object* v_nextMacroScope_986_; lean_object* v_ngen_987_; lean_object* v_auxDeclNGen_988_; lean_object* v_traceState_989_; lean_object* v_recordedDeps_990_; lean_object* v_messages_991_; lean_object* v_infoState_992_; lean_object* v_snapshotTasks_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1019_; 
v___x_985_ = lean_st_ref_take(v___y_983_);
v_nextMacroScope_986_ = lean_ctor_get(v___x_985_, 1);
v_ngen_987_ = lean_ctor_get(v___x_985_, 2);
v_auxDeclNGen_988_ = lean_ctor_get(v___x_985_, 3);
v_traceState_989_ = lean_ctor_get(v___x_985_, 4);
v_recordedDeps_990_ = lean_ctor_get(v___x_985_, 6);
v_messages_991_ = lean_ctor_get(v___x_985_, 7);
v_infoState_992_ = lean_ctor_get(v___x_985_, 8);
v_snapshotTasks_993_ = lean_ctor_get(v___x_985_, 9);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1019_ == 0)
{
lean_object* v_unused_1020_; lean_object* v_unused_1021_; 
v_unused_1020_ = lean_ctor_get(v___x_985_, 5);
lean_dec(v_unused_1020_);
v_unused_1021_ = lean_ctor_get(v___x_985_, 0);
lean_dec(v_unused_1021_);
v___x_995_ = v___x_985_;
v_isShared_996_ = v_isSharedCheck_1019_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_snapshotTasks_993_);
lean_inc(v_infoState_992_);
lean_inc(v_messages_991_);
lean_inc(v_recordedDeps_990_);
lean_inc(v_traceState_989_);
lean_inc(v_auxDeclNGen_988_);
lean_inc(v_ngen_987_);
lean_inc(v_nextMacroScope_986_);
lean_dec(v___x_985_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1019_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_997_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__8, &l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8);
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 5, v___x_997_);
lean_ctor_set(v___x_995_, 0, v_env_981_);
v___x_999_ = v___x_995_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_env_981_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v_nextMacroScope_986_);
lean_ctor_set(v_reuseFailAlloc_1018_, 2, v_ngen_987_);
lean_ctor_set(v_reuseFailAlloc_1018_, 3, v_auxDeclNGen_988_);
lean_ctor_set(v_reuseFailAlloc_1018_, 4, v_traceState_989_);
lean_ctor_set(v_reuseFailAlloc_1018_, 5, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1018_, 6, v_recordedDeps_990_);
lean_ctor_set(v_reuseFailAlloc_1018_, 7, v_messages_991_);
lean_ctor_set(v_reuseFailAlloc_1018_, 8, v_infoState_992_);
lean_ctor_set(v_reuseFailAlloc_1018_, 9, v_snapshotTasks_993_);
v___x_999_ = v_reuseFailAlloc_1018_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v_mctx_1002_; lean_object* v_zetaDeltaFVarIds_1003_; lean_object* v_postponed_1004_; lean_object* v_diag_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1016_; 
v___x_1000_ = lean_st_ref_put(v___y_983_, v___x_999_);
v___x_1001_ = lean_st_ref_take(v___y_982_);
v_mctx_1002_ = lean_ctor_get(v___x_1001_, 0);
v_zetaDeltaFVarIds_1003_ = lean_ctor_get(v___x_1001_, 2);
v_postponed_1004_ = lean_ctor_get(v___x_1001_, 3);
v_diag_1005_ = lean_ctor_get(v___x_1001_, 4);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1016_ == 0)
{
lean_object* v_unused_1017_; 
v_unused_1017_ = lean_ctor_get(v___x_1001_, 1);
lean_dec(v_unused_1017_);
v___x_1007_ = v___x_1001_;
v_isShared_1008_ = v_isSharedCheck_1016_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_diag_1005_);
lean_inc(v_postponed_1004_);
lean_inc(v_zetaDeltaFVarIds_1003_);
lean_inc(v_mctx_1002_);
lean_dec(v___x_1001_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1016_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1009_ = lean_box(0);
v___x_1010_ = lean_obj_once(&l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1, &l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1_once, _init_l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg___closed__1);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 1, v___x_1010_);
v___x_1012_ = v___x_1007_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_mctx_1002_);
lean_ctor_set(v_reuseFailAlloc_1015_, 1, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1015_, 2, v_zetaDeltaFVarIds_1003_);
lean_ctor_set(v_reuseFailAlloc_1015_, 3, v_postponed_1004_);
lean_ctor_set(v_reuseFailAlloc_1015_, 4, v_diag_1005_);
v___x_1012_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_st_ref_put(v___y_982_, v___x_1012_);
v___x_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1009_);
return v___x_1014_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg___boxed(lean_object* v_env_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg(v_env_1022_, v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec(v___y_1023_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(lean_object* v_env_1027_, lean_object* v_x_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v___x_1034_; lean_object* v_env_1035_; lean_object* v_a_1037_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1034_ = lean_st_ref_get(v___y_1032_);
v_env_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc_ref(v_env_1035_);
lean_dec(v___x_1034_);
v___x_1047_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg(v_env_1027_, v___y_1030_, v___y_1032_);
lean_dec_ref(v___x_1047_);
lean_inc(v___y_1032_);
lean_inc_ref(v___y_1031_);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
v___x_1048_ = lean_apply_5(v_x_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, lean_box(0));
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_a_1049_);
lean_dec_ref_known(v___x_1048_, 1);
v___x_1050_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg(v_env_1035_, v___y_1030_, v___y_1032_);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; 
v_unused_1058_ = lean_ctor_get(v___x_1050_, 0);
lean_dec(v_unused_1058_);
v___x_1052_ = v___x_1050_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_dec(v___x_1050_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v_a_1049_);
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1049_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
else
{
lean_object* v_a_1059_; 
v_a_1059_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1048_, 1);
v_a_1037_ = v_a_1059_;
goto v___jp_1036_;
}
v___jp_1036_:
{
lean_object* v___x_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
v___x_1038_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg(v_env_1035_, v___y_1030_, v___y_1032_);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1045_ == 0)
{
lean_object* v_unused_1046_; 
v_unused_1046_ = lean_ctor_get(v___x_1038_, 0);
lean_dec(v_unused_1046_);
v___x_1040_ = v___x_1038_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_dec(v___x_1038_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
lean_ctor_set_tag(v___x_1040_, 1);
lean_ctor_set(v___x_1040_, 0, v_a_1037_);
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1037_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg___boxed(lean_object* v_env_1060_, lean_object* v_x_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(v_env_1060_, v_x_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
return v_res_1067_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__0(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1068_ = lean_box(0);
v___x_1069_ = lean_unsigned_to_nat(16u);
v___x_1070_ = lean_mk_array(v___x_1069_, v___x_1068_);
return v___x_1070_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__1(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1071_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__0, &l_Lean_Meta_nativeEqTrue___closed__0_once, _init_l_Lean_Meta_nativeEqTrue___closed__0);
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
lean_ctor_set(v___x_1073_, 1, v___x_1071_);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__3(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__2));
v___x_1077_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__1, &l_Lean_Meta_nativeEqTrue___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___closed__1);
v___x_1078_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
lean_ctor_set(v___x_1078_, 2, v___x_1076_);
return v___x_1078_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__12(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_unsigned_to_nat(1u);
v___x_1092_ = l_Lean_Level_ofNat(v___x_1091_);
return v___x_1092_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__13(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1093_ = lean_box(0);
v___x_1094_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__12, &l_Lean_Meta_nativeEqTrue___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___closed__12);
v___x_1095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v___x_1093_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__14(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1096_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__13, &l_Lean_Meta_nativeEqTrue___closed__13_once, _init_l_Lean_Meta_nativeEqTrue___closed__13);
v___x_1097_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__11));
v___x_1098_ = l_Lean_mkConst(v___x_1097_, v___x_1096_);
return v___x_1098_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__15(void){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = lean_box(0);
v___x_1100_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__5));
v___x_1101_ = l_Lean_mkConst(v___x_1100_, v___x_1099_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__18(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1106_ = lean_box(0);
v___x_1107_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__17));
v___x_1108_ = l_Lean_mkConst(v___x_1107_, v___x_1106_);
return v___x_1108_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__20(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__19));
v___x_1111_ = l_Lean_stringToMessageData(v___x_1110_);
return v___x_1111_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__22(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__21));
v___x_1114_ = l_Lean_stringToMessageData(v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue(lean_object* v_tacticName_1115_, lean_object* v_e_1116_, lean_object* v_axiomDeclRange_x3f_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___x_1131_; lean_object* v_a_1132_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1218_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; uint8_t v___x_1239_; 
v___x_1131_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_1116_, v_a_1119_);
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref(v___x_1131_);
v___x_1239_ = l_Lean_Expr_hasFVar(v_a_1132_);
if (v___x_1239_ == 0)
{
v___y_1218_ = v_a_1118_;
v___y_1219_ = v_a_1119_;
v___y_1220_ = v_a_1120_;
v___y_1221_ = v_a_1121_;
goto v___jp_1217_;
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
v___x_1240_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_1241_ = l_Lean_MessageData_ofName(v_tacticName_1115_);
v___x_1242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1240_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__22, &l_Lean_Meta_nativeEqTrue___closed__22_once, _init_l_Lean_Meta_nativeEqTrue___closed__22);
v___x_1244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1242_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = l_Lean_indentExpr(v_a_1132_);
v___x_1246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_1246_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_);
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1247_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1247_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
v___jp_1123_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1126_ = lean_box(0);
v___x_1127_ = l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__8(v___y_1124_, v___x_1126_);
v___x_1128_ = l_Lean_mkConst(v___y_1125_, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
return v___x_1130_;
}
v___jp_1133_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v_params_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1214_; 
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__3, &l_Lean_Meta_nativeEqTrue___closed__3_once, _init_l_Lean_Meta_nativeEqTrue___closed__3);
lean_inc(v_a_1132_);
v___x_1140_ = l_Lean_collectLevelParams(v___x_1139_, v_a_1132_);
v_params_1141_ = lean_ctor_get(v___x_1140_, 2);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1214_ == 0)
{
lean_object* v_unused_1215_; lean_object* v_unused_1216_; 
v_unused_1215_ = lean_ctor_get(v___x_1140_, 1);
lean_dec(v_unused_1215_);
v_unused_1216_ = lean_ctor_get(v___x_1140_, 0);
lean_dec(v_unused_1216_);
v___x_1143_ = v___x_1140_;
v_isShared_1144_ = v_isSharedCheck_1214_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_params_1141_);
lean_dec(v___x_1140_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1214_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___f_1151_; lean_object* v___x_1152_; lean_object* v_env_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1145_ = lean_box(0);
v___x_1146_ = lean_array_to_list(v_params_1141_);
v___x_1147_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__5));
lean_inc(v_tacticName_1115_);
v___x_1148_ = l_Lean_Name_append(v___x_1147_, v_tacticName_1115_);
v___x_1149_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__7));
lean_inc(v___x_1148_);
v___x_1150_ = l_Lean_Name_append(v___x_1148_, v___x_1149_);
lean_inc(v_a_1132_);
lean_inc(v___x_1146_);
v___f_1151_ = lean_alloc_closure((void*)(l_Lean_Meta_nativeEqTrue___lam__0___boxed), 11, 6);
lean_closure_set(v___f_1151_, 0, v___x_1150_);
lean_closure_set(v___f_1151_, 1, v_tacticName_1115_);
lean_closure_set(v___f_1151_, 2, v___x_1146_);
lean_closure_set(v___f_1151_, 3, v___x_1145_);
lean_closure_set(v___f_1151_, 4, v_a_1132_);
lean_closure_set(v___f_1151_, 5, v___x_1138_);
v___x_1152_ = lean_st_ref_get(v___y_1137_);
v_env_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc_ref(v_env_1153_);
lean_dec(v___x_1152_);
v___x_1154_ = l_Lean_Environment_unlockAsync(v_env_1153_);
v___x_1155_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(v___x_1154_, v___f_1151_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1205_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1205_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1205_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
uint8_t v___x_1160_; 
v___x_1160_ = lean_unbox(v_a_1156_);
lean_dec(v_a_1156_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
lean_dec(v___x_1148_);
lean_dec(v___x_1146_);
lean_del_object(v___x_1143_);
lean_dec(v_a_1132_);
v___x_1161_ = lean_box(1);
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v___x_1161_);
v___x_1163_ = v___x_1158_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1204_; 
lean_del_object(v___x_1158_);
v___x_1165_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__9));
v___x_1166_ = l_Lean_Name_append(v___x_1148_, v___x_1165_);
v___x_1167_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v___x_1166_, v___y_1137_);
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1170_ = v___x_1167_;
v_isShared_1171_ = v_isSharedCheck_1204_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1167_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1204_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1172_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__14, &l_Lean_Meta_nativeEqTrue___closed__14_once, _init_l_Lean_Meta_nativeEqTrue___closed__14);
v___x_1173_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__15, &l_Lean_Meta_nativeEqTrue___closed__15_once, _init_l_Lean_Meta_nativeEqTrue___closed__15);
v___x_1174_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__18, &l_Lean_Meta_nativeEqTrue___closed__18_once, _init_l_Lean_Meta_nativeEqTrue___closed__18);
v___x_1175_ = l_Lean_mkApp3(v___x_1172_, v___x_1173_, v_a_1132_, v___x_1174_);
lean_inc(v___x_1146_);
lean_inc(v_a_1168_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 2, v___x_1175_);
lean_ctor_set(v___x_1143_, 1, v___x_1146_);
lean_ctor_set(v___x_1143_, 0, v_a_1168_);
v___x_1177_ = v___x_1143_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1168_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v___x_1146_);
lean_ctor_set(v_reuseFailAlloc_1203_, 2, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
uint8_t v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
v___x_1178_ = 0;
v___x_1179_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1179_, 0, v___x_1177_);
lean_ctor_set_uint8(v___x_1179_, sizeof(void*)*1, v___x_1178_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1179_);
v___x_1181_ = v___x_1170_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1182_; 
v___x_1182_ = l_Lean_addDecl(v___x_1181_, v___x_1178_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_dec_ref_known(v___x_1182_, 1);
if (lean_obj_tag(v_axiomDeclRange_x3f_1117_) == 1)
{
lean_object* v_val_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_val_1183_ = lean_ctor_get(v_axiomDeclRange_x3f_1117_, 0);
v___x_1184_ = lean_box(0);
lean_inc(v_a_1168_);
v___x_1185_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(v_a_1168_, v_val_1183_, v___x_1184_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_dec_ref_known(v___x_1185_, 1);
v___y_1124_ = v___x_1146_;
v___y_1125_ = v_a_1168_;
goto v___jp_1123_;
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec(v_a_1168_);
lean_dec(v___x_1146_);
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1185_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
}
else
{
v___y_1124_ = v___x_1146_;
v___y_1125_ = v_a_1168_;
goto v___jp_1123_;
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
lean_dec(v_a_1168_);
lean_dec(v___x_1146_);
v_a_1194_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1182_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1182_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
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
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec(v___x_1148_);
lean_dec(v___x_1146_);
lean_del_object(v___x_1143_);
lean_dec(v_a_1132_);
v_a_1206_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1155_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1155_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
}
v___jp_1217_:
{
uint8_t v___x_1222_; 
v___x_1222_ = l_Lean_Expr_hasMVar(v_a_1132_);
if (v___x_1222_ == 0)
{
v___y_1134_ = v___y_1218_;
v___y_1135_ = v___y_1219_;
v___y_1136_ = v___y_1220_;
v___y_1137_ = v___y_1221_;
goto v___jp_1133_;
}
else
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1238_; 
v___x_1223_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_1224_ = l_Lean_MessageData_ofName(v_tacticName_1115_);
v___x_1225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__20, &l_Lean_Meta_nativeEqTrue___closed__20_once, _init_l_Lean_Meta_nativeEqTrue___closed__20);
v___x_1227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = l_Lean_indentExpr(v_a_1132_);
v___x_1229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1227_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v___x_1230_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_1229_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1233_ = v___x_1230_;
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___x_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
if (v_isShared_1234_ == 0)
{
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_a_1231_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___boxed(lean_object* v_tacticName_1256_, lean_object* v_e_1257_, lean_object* v_axiomDeclRange_x3f_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l_Lean_Meta_nativeEqTrue(v_tacticName_1256_, v_e_1257_, v_axiomDeclRange_x3f_1258_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_);
lean_dec(v_a_1262_);
lean_dec_ref(v_a_1261_);
lean_dec(v_a_1260_);
lean_dec_ref(v_a_1259_);
lean_dec(v_axiomDeclRange_x3f_1258_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3(lean_object* v_00_u03b1_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3(v_00_u03b1_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2(lean_object* v_00_u03b1_1279_, lean_object* v_constName_1280_, uint8_t v_checkMeta_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(v_constName_1280_, v_checkMeta_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___boxed(lean_object* v_00_u03b1_1288_, lean_object* v_constName_1289_, lean_object* v_checkMeta_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
uint8_t v_checkMeta_boxed_1296_; lean_object* v_res_1297_; 
v_checkMeta_boxed_1296_ = lean_unbox(v_checkMeta_1290_);
v_res_1297_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2(v_00_u03b1_1288_, v_constName_1289_, v_checkMeta_boxed_1296_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3(lean_object* v_00_u03b1_1298_, lean_object* v_msg_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v_msg_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___boxed(lean_object* v_00_u03b1_1306_, lean_object* v_msg_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3(v_00_u03b1_1306_, v_msg_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7(lean_object* v_00_u03b2_1314_){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__9, &l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4___redArg(){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__9, &l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4___redArg___boxed(lean_object* v___dummy_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4___redArg();
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_nativeEqTrue_spec__4(lean_object* v_00_u03b2_1320_){
_start:
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__9, &l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7(lean_object* v_00_u03b1_1322_, lean_object* v_env_1323_, lean_object* v_x_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(v_env_1323_, v_x_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___boxed(lean_object* v_00_u03b1_1331_, lean_object* v_env_1332_, lean_object* v_x_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7(v_00_u03b1_1331_, v_env_1332_, v_x_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15(lean_object* v_stx_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(v_stx_1340_, v___y_1343_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___boxed(lean_object* v_stx_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15(v_stx_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v_stx_1347_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(lean_object* v_00_u03b1_1354_, lean_object* v_x_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v_x_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___boxed(lean_object* v_00_u03b1_1362_, lean_object* v_x_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(v_00_u03b1_1362_, v_x_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12(lean_object* v_env_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___redArg(v_env_1370_, v___y_1372_, v___y_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12___boxed(lean_object* v_env_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__12(v_env_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16(lean_object* v_declName_1384_, lean_object* v_declRanges_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___redArg(v_declName_1384_, v_declRanges_1385_, v___y_1387_, v___y_1389_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16___boxed(lean_object* v_declName_1392_, lean_object* v_declRanges_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__16(v_declName_1392_, v_declRanges_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
return v_res_1399_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Native(builtin);
}
#ifdef __cplusplus
}
#endif
