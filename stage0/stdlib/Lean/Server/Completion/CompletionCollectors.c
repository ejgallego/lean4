// Lean compiler output
// Module: Lean.Server.Completion.CompletionCollectors
// Imports: public import Lean.Data.FuzzyMatching public import Lean.Elab.Tactic.Doc public import Lean.Server.Completion.CompletionResolution public import Lean.Server.Completion.EligibleHeaderDecls public import Lean.Server.RequestCancellation
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_String_charactersIn(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Server_Completion_allowCompletion(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Server_RequestCancellation_requestCancelled;
uint8_t l_Lean_Name_isInternal(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_Zipper_prependNode___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
extern lean_object* l_Lean_errorExplanationExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_PrivateName_0__Lean_isPrivatePrefix_go(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_DataValue_str(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Server_Completion_getDotCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_TreeSet_ofArray___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Server_Completion_getDotIdCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCoreUnfoldingAnnotations(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
uint8_t l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getEligibleHeaderDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_getAliasState(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Data_Trie_findPrefix___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getNamespaces(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_ErrorExplanation_summaryWithSeverity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_takeWhile___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_forEligibleDeclsM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "keyword"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Server.Completion.CompletionCollectors"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "_private.Lean.Server.Completion.CompletionCollectors.0.Lean.Server.Completion.truncate.go"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_Completion_dotCompletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_Completion_dotCompletion___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_Completion_dotCompletion___closed__0 = (const lean_object*)&l_Lean_Server_Completion_dotCompletion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "field"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_fieldIdCompletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Server_Completion_fieldIdCompletion___closed__0 = (const lean_object*)&l_Lean_Server_Completion_fieldIdCompletion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_value;
static const lean_string_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "), "};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__2 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__0;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__1;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__2;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__3;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "error name"};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_value;
static const lean_array_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_Completion_endSectionCompletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_Completion_endSectionCompletion___closed__0 = (const lean_object*)&l_Lean_Server_Completion_endSectionCompletion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object* v_item_3_, lean_object* v_id_x3f_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_uri_8_; lean_object* v_pos_9_; lean_object* v_completionInfoPos_10_; lean_object* v_label_11_; lean_object* v_detail_x3f_12_; lean_object* v_documentation_x3f_13_; lean_object* v_kind_x3f_14_; lean_object* v_textEdit_x3f_15_; lean_object* v_sortText_x3f_16_; lean_object* v_tags_x3f_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_32_; 
v_uri_8_ = lean_ctor_get(v_a_5_, 0);
v_pos_9_ = lean_ctor_get(v_a_5_, 1);
v_completionInfoPos_10_ = lean_ctor_get(v_a_5_, 2);
v_label_11_ = lean_ctor_get(v_item_3_, 0);
v_detail_x3f_12_ = lean_ctor_get(v_item_3_, 1);
v_documentation_x3f_13_ = lean_ctor_get(v_item_3_, 2);
v_kind_x3f_14_ = lean_ctor_get(v_item_3_, 3);
v_textEdit_x3f_15_ = lean_ctor_get(v_item_3_, 4);
v_sortText_x3f_16_ = lean_ctor_get(v_item_3_, 5);
v_tags_x3f_17_ = lean_ctor_get(v_item_3_, 7);
v_isSharedCheck_32_ = !lean_is_exclusive(v_item_3_);
if (v_isSharedCheck_32_ == 0)
{
lean_object* v_unused_33_; 
v_unused_33_ = lean_ctor_get(v_item_3_, 6);
lean_dec(v_unused_33_);
v___x_19_ = v_item_3_;
v_isShared_20_ = v_isSharedCheck_32_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_tags_x3f_17_);
lean_inc(v_sortText_x3f_16_);
lean_inc(v_textEdit_x3f_15_);
lean_inc(v_kind_x3f_14_);
lean_inc(v_documentation_x3f_13_);
lean_inc(v_detail_x3f_12_);
lean_inc(v_label_11_);
lean_dec(v_item_3_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_32_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
lean_inc(v_completionInfoPos_10_);
v___x_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_21_, 0, v_completionInfoPos_10_);
lean_inc_ref(v_pos_9_);
lean_inc_ref(v_uri_8_);
v___x_22_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_22_, 0, v_uri_8_);
lean_ctor_set(v___x_22_, 1, v_pos_9_);
lean_ctor_set(v___x_22_, 2, v___x_21_);
lean_ctor_set(v___x_22_, 3, v_id_x3f_4_);
v___x_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 6, v___x_23_);
v___x_25_ = v___x_19_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_label_11_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v_detail_x3f_12_);
lean_ctor_set(v_reuseFailAlloc_31_, 2, v_documentation_x3f_13_);
lean_ctor_set(v_reuseFailAlloc_31_, 3, v_kind_x3f_14_);
lean_ctor_set(v_reuseFailAlloc_31_, 4, v_textEdit_x3f_15_);
lean_ctor_set(v_reuseFailAlloc_31_, 5, v_sortText_x3f_16_);
lean_ctor_set(v_reuseFailAlloc_31_, 6, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_31_, 7, v_tags_x3f_17_);
v___x_25_ = v_reuseFailAlloc_31_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_26_ = lean_st_ref_take(v_a_6_);
v___x_27_ = lean_array_push(v___x_26_, v___x_25_);
v___x_28_ = lean_st_ref_put(v_a_6_, v___x_27_);
v___x_29_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object* v_item_34_, lean_object* v_id_x3f_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_34_, v_id_x3f_35_, v_a_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object* v_item_40_, lean_object* v_id_x3f_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_40_, v_id_x3f_41_, v_a_42_, v_a_43_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object* v_item_51_, lean_object* v_id_x3f_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(v_item_51_, v_id_x3f_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object* v_label_62_, lean_object* v_id_63_, uint8_t v_kind_64_, lean_object* v_tags_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v_item_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_69_ = 1;
v___x_70_ = l_Lean_Name_toString(v_label_62_, v___x_69_);
v___x_71_ = lean_box(0);
v___x_72_ = lean_box(v_kind_64_);
v___x_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v_tags_65_);
v_item_75_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_75_, 0, v___x_70_);
lean_ctor_set(v_item_75_, 1, v___x_71_);
lean_ctor_set(v_item_75_, 2, v___x_71_);
lean_ctor_set(v_item_75_, 3, v___x_73_);
lean_ctor_set(v_item_75_, 4, v___x_71_);
lean_ctor_set(v_item_75_, 5, v___x_71_);
lean_ctor_set(v_item_75_, 6, v___x_71_);
lean_ctor_set(v_item_75_, 7, v___x_74_);
v___x_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_76_, 0, v_id_63_);
v___x_77_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_75_, v___x_76_, v_a_66_, v_a_67_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object* v_label_78_, lean_object* v_id_79_, lean_object* v_kind_80_, lean_object* v_tags_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
uint8_t v_kind_boxed_85_; lean_object* v_res_86_; 
v_kind_boxed_85_ = lean_unbox(v_kind_80_);
v_res_86_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_78_, v_id_79_, v_kind_boxed_85_, v_tags_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object* v_label_87_, lean_object* v_id_88_, uint8_t v_kind_89_, lean_object* v_tags_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_87_, v_id_88_, v_kind_89_, v_tags_90_, v_a_91_, v_a_92_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object* v_label_100_, lean_object* v_id_101_, lean_object* v_kind_102_, lean_object* v_tags_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_kind_boxed_112_; lean_object* v_res_113_; 
v_kind_boxed_112_ = lean_unbox(v_kind_102_);
v_res_113_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(v_label_100_, v_id_101_, v_kind_boxed_112_, v_tags_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object* v_label_114_, lean_object* v_declName_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; lean_object* v_env_124_; uint8_t v___x_125_; lean_object* v___x_126_; 
v___x_123_ = lean_st_ref_get(v_a_121_);
v_env_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc_ref(v_env_124_);
lean_dec(v___x_123_);
v___x_125_ = 0;
lean_inc(v_declName_115_);
v___x_126_ = l_Lean_Environment_find_x3f(v_env_124_, v_declName_115_, v___x_125_);
if (lean_obj_tag(v___x_126_) == 1)
{
lean_object* v_val_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_156_; 
v_val_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_156_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_156_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_val_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_156_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_Server_Completion_getCompletionKindForDecl(v_val_127_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
lean_dec(v_val_127_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_133_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
lean_inc(v_declName_115_);
v___x_133_ = l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(v_declName_115_, v_a_121_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_a_134_);
lean_dec_ref_known(v___x_133_, 1);
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 0);
lean_ctor_set(v___x_129_, 0, v_declName_115_);
v___x_136_ = v___x_129_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_declName_115_);
v___x_136_ = v_reuseFailAlloc_139_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
uint8_t v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_unbox(v_a_132_);
lean_dec(v_a_132_);
v___x_138_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_114_, v___x_136_, v___x_137_, v_a_134_, v_a_116_, v_a_117_);
return v___x_138_;
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_a_132_);
lean_del_object(v___x_129_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v_a_140_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_133_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_133_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_del_object(v___x_129_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v_a_148_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_131_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_131_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec(v___x_126_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v___x_157_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object* v_label_159_, lean_object* v_declName_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_159_, v_declName_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object* v_label_169_, lean_object* v_declName_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_169_, v_declName_170_, v_a_171_, v_a_172_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object* v_label_180_, lean_object* v_declName_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(v_label_180_, v_declName_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object* v_keyword_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_item_204_; lean_object* v___x_205_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1));
v___x_202_ = lean_box(0);
v___x_203_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2));
v_item_204_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_204_, 0, v_keyword_197_);
lean_ctor_set(v_item_204_, 1, v___x_201_);
lean_ctor_set(v_item_204_, 2, v___x_202_);
lean_ctor_set(v_item_204_, 3, v___x_203_);
lean_ctor_set(v_item_204_, 4, v___x_202_);
lean_ctor_set(v_item_204_, 5, v___x_202_);
lean_ctor_set(v_item_204_, 6, v___x_202_);
lean_ctor_set(v_item_204_, 7, v___x_202_);
v___x_205_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_204_, v___x_202_, v_a_198_, v_a_199_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object* v_keyword_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object* v_keyword_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_211_, v_a_212_, v_a_213_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object* v_keyword_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(v_keyword_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec_ref(v_a_224_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object* v_ns_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v_item_246_; lean_object* v___x_247_; 
v___x_241_ = 1;
v___x_242_ = l_Lean_Name_toString(v_ns_237_, v___x_241_);
v___x_243_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1));
v___x_244_ = lean_box(0);
v___x_245_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2));
v_item_246_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_246_, 0, v___x_242_);
lean_ctor_set(v_item_246_, 1, v___x_243_);
lean_ctor_set(v_item_246_, 2, v___x_244_);
lean_ctor_set(v_item_246_, 3, v___x_245_);
lean_ctor_set(v_item_246_, 4, v___x_244_);
lean_ctor_set(v_item_246_, 5, v___x_244_);
lean_ctor_set(v_item_246_, 6, v___x_244_);
lean_ctor_set(v_item_246_, 7, v___x_244_);
v___x_247_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_246_, v___x_244_, v_a_238_, v_a_239_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object* v_ns_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object* v_ns_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_253_, v_a_254_, v_a_255_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object* v_ns_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(v_ns_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_a_265_);
lean_dec_ref(v_a_264_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object* v___x_273_, lean_object* v_x_274_, lean_object* v___x_275_, lean_object* v_a_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_st_mk_ref(v___x_273_);
lean_inc_ref(v_a_276_);
lean_inc(v___x_282_);
v___x_283_ = lean_apply_8(v_x_274_, v___x_275_, v___x_282_, v_a_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, lean_box(0));
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_312_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_312_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_312_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_312_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
if (lean_obj_tag(v_a_284_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_298_; 
lean_dec(v___x_282_);
v_a_288_ = lean_ctor_get(v_a_284_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v_a_284_);
if (v_isSharedCheck_298_ == 0)
{
v___x_290_ = v_a_284_;
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v_a_284_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_297_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_295_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_293_);
v___x_295_ = v___x_286_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_311_; 
v_a_299_ = lean_ctor_get(v_a_284_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v_a_284_);
if (v_isSharedCheck_311_ == 0)
{
v___x_301_ = v_a_284_;
v_isShared_302_ = v_isSharedCheck_311_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v_a_284_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_311_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_303_ = lean_st_ref_get(v___x_282_);
lean_dec(v___x_282_);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v_a_299_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_304_);
v___x_306_ = v___x_301_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_304_);
v___x_306_ = v_reuseFailAlloc_310_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_308_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_306_);
v___x_308_ = v___x_286_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v___x_282_);
v_a_313_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_283_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_283_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object* v___x_321_, lean_object* v_x_322_, lean_object* v___x_323_, lean_object* v_a_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(v___x_321_, v_x_322_, v___x_323_, v_a_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec_ref(v_a_324_);
return v_res_330_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = l_Lean_Server_RequestCancellation_requestCancelled;
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object* v_uri_335_, lean_object* v_pos_336_, lean_object* v_completionInfoPos_337_, lean_object* v_ctx_338_, lean_object* v_lctx_339_, lean_object* v_x_340_, lean_object* v_a_341_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___f_345_; lean_object* v___x_346_; 
v___x_343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_343_, 0, v_uri_335_);
lean_ctor_set(v___x_343_, 1, v_pos_336_);
lean_ctor_set(v___x_343_, 2, v_completionInfoPos_337_);
v___x_344_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
lean_inc_ref(v_a_341_);
v___f_345_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed), 9, 4);
lean_closure_set(v___f_345_, 0, v___x_344_);
lean_closure_set(v___f_345_, 1, v_x_340_);
lean_closure_set(v___f_345_, 2, v___x_343_);
lean_closure_set(v___f_345_, 3, v_a_341_);
v___x_346_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_338_, v_lctx_339_, v___f_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_367_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_367_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_367_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_367_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
if (lean_obj_tag(v_a_347_) == 0)
{
lean_object* v___x_351_; lean_object* v___x_353_; 
lean_dec_ref_known(v_a_347_, 1);
v___x_351_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_366_; 
v_a_355_ = lean_ctor_get(v_a_347_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v_a_347_);
if (v_isSharedCheck_366_ == 0)
{
v___x_357_ = v_a_347_;
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v_a_347_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v_snd_359_; lean_object* v___x_361_; 
v_snd_359_ = lean_ctor_get(v_a_355_, 1);
lean_inc(v_snd_359_);
lean_dec(v_a_355_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v_snd_359_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_snd_359_);
v___x_361_ = v_reuseFailAlloc_365_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_361_);
v___x_363_ = v___x_349_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
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
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_368_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_346_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_346_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object* v_uri_376_, lean_object* v_pos_377_, lean_object* v_completionInfoPos_378_, lean_object* v_ctx_379_, lean_object* v_lctx_380_, lean_object* v_x_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_376_, v_pos_377_, v_completionInfoPos_378_, v_ctx_379_, v_lctx_380_, v_x_381_, v_a_382_);
lean_dec_ref(v_a_382_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object* v_declName_385_, lean_object* v_a_386_){
_start:
{
lean_object* v___x_388_; 
lean_inc(v_declName_385_);
v___x_388_ = l_Lean_privateToUserName_x3f(v_declName_385_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v_declName_385_);
v___x_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
return v___x_390_;
}
else
{
lean_object* v_val_391_; lean_object* v___x_392_; lean_object* v_env_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v_val_391_ = lean_ctor_get(v___x_388_, 0);
v___x_392_ = lean_st_ref_get(v_a_386_);
v_env_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc_ref(v_env_393_);
lean_dec(v___x_392_);
lean_inc(v_val_391_);
v___x_394_ = l_Lean_mkPrivateName(v_env_393_, v_val_391_);
lean_dec_ref(v_env_393_);
v___x_395_ = lean_name_eq(v___x_394_, v_declName_385_);
lean_dec(v_declName_385_);
lean_dec(v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_403_; 
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_403_ == 0)
{
lean_object* v_unused_404_; 
v_unused_404_ = lean_ctor_get(v___x_388_, 0);
lean_dec(v_unused_404_);
v___x_397_ = v___x_388_;
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
else
{
lean_dec(v___x_388_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_399_ = lean_box(0);
if (v_isShared_398_ == 0)
{
lean_ctor_set_tag(v___x_397_, 0);
lean_ctor_set(v___x_397_, 0, v___x_399_);
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
else
{
lean_object* v___x_405_; 
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_388_);
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object* v_declName_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_406_, v_a_407_);
lean_dec(v_a_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object* v_declName_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_410_, v_a_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object* v_declName_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(v_declName_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object* v_ns_424_, lean_object* v_id_425_, uint8_t v_danglingDot_426_, lean_object* v_declName_427_, lean_object* v_a_428_){
_start:
{
lean_object* v___x_433_; lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_481_; 
v___x_433_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_427_, v_a_428_);
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_481_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_481_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_481_;
goto v_resetjp_435_;
}
v___jp_430_:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_box(0);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
v_resetjp_435_:
{
if (lean_obj_tag(v_a_434_) == 1)
{
lean_object* v_val_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_476_; 
v_val_438_ = lean_ctor_get(v_a_434_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v_a_434_);
if (v_isSharedCheck_476_ == 0)
{
v___x_440_ = v_a_434_;
v_isShared_441_ = v_isSharedCheck_476_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_val_438_);
lean_dec(v_a_434_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_476_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
uint8_t v___x_442_; 
v___x_442_ = l_Lean_Name_isPrefixOf(v_ns_424_, v_val_438_);
if (v___x_442_ == 0)
{
lean_del_object(v___x_440_);
lean_dec(v_val_438_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = lean_box(0);
v___x_444_ = l_Lean_Name_replacePrefix(v_val_438_, v_ns_424_, v___x_443_);
if (v_danglingDot_426_ == 0)
{
if (lean_obj_tag(v_id_425_) == 1)
{
if (lean_obj_tag(v___x_444_) == 1)
{
lean_object* v_pre_445_; lean_object* v_str_446_; lean_object* v_pre_447_; lean_object* v_str_448_; uint8_t v___x_449_; 
v_pre_445_ = lean_ctor_get(v_id_425_, 0);
v_str_446_ = lean_ctor_get(v_id_425_, 1);
v_pre_447_ = lean_ctor_get(v___x_444_, 0);
v_str_448_ = lean_ctor_get(v___x_444_, 1);
v___x_449_ = lean_name_eq(v_pre_445_, v_pre_447_);
if (v___x_449_ == 0)
{
uint8_t v___x_450_; 
v___x_450_ = l_Lean_Name_isAnonymous(v_pre_445_);
if (v___x_450_ == 0)
{
lean_dec_ref_known(v___x_444_, 2);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
uint8_t v___x_451_; 
v___x_451_ = l_Lean_String_charactersIn(v_str_446_, v_str_448_);
if (v___x_451_ == 0)
{
lean_dec_ref_known(v___x_444_, 2);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
lean_object* v___x_453_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_444_);
v___x_453_ = v___x_440_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_444_);
v___x_453_ = v_reuseFailAlloc_457_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
lean_object* v___x_455_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_453_);
v___x_455_ = v___x_436_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
}
else
{
uint8_t v___x_458_; 
lean_inc_ref(v_str_448_);
lean_dec_ref_known(v___x_444_, 2);
v___x_458_ = l_Lean_String_charactersIn(v_str_446_, v_str_448_);
if (v___x_458_ == 0)
{
lean_dec_ref(v_str_448_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
lean_object* v___x_459_; lean_object* v___x_461_; 
v___x_459_ = l_Lean_Name_str___override(v___x_443_, v_str_448_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_459_);
v___x_461_ = v___x_440_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_459_);
v___x_461_ = v_reuseFailAlloc_465_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v___x_463_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_461_);
v___x_463_ = v___x_436_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
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
}
else
{
lean_dec(v___x_444_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
}
else
{
lean_dec(v___x_444_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
}
else
{
uint8_t v___x_466_; 
v___x_466_ = l_Lean_Name_isPrefixOf(v_id_425_, v___x_444_);
if (v___x_466_ == 0)
{
lean_dec(v___x_444_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = l_Lean_Name_replacePrefix(v___x_444_, v_id_425_, v___x_443_);
v___x_468_ = l_Lean_Name_isAtomic(v___x_467_);
if (v___x_468_ == 0)
{
lean_dec(v___x_467_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
uint8_t v___x_469_; 
v___x_469_ = l_Lean_Name_isAnonymous(v___x_467_);
if (v___x_469_ == 0)
{
lean_object* v___x_471_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_467_);
v___x_471_ = v___x_440_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_467_);
v___x_471_ = v_reuseFailAlloc_475_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
lean_object* v___x_473_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_471_);
v___x_473_ = v___x_436_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_471_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
else
{
lean_dec(v___x_467_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_477_; lean_object* v___x_479_; 
lean_dec(v_a_434_);
v___x_477_ = lean_box(0);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_477_);
v___x_479_ = v___x_436_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object* v_ns_482_, lean_object* v_id_483_, lean_object* v_danglingDot_484_, lean_object* v_declName_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
uint8_t v_danglingDot_boxed_488_; lean_object* v_res_489_; 
v_danglingDot_boxed_488_ = lean_unbox(v_danglingDot_484_);
v_res_489_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_482_, v_id_483_, v_danglingDot_boxed_488_, v_declName_485_, v_a_486_);
lean_dec(v_a_486_);
lean_dec(v_id_483_);
lean_dec(v_ns_482_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object* v_ns_490_, lean_object* v_id_491_, uint8_t v_danglingDot_492_, lean_object* v_declName_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_490_, v_id_491_, v_danglingDot_492_, v_declName_493_, v_a_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object* v_ns_500_, lean_object* v_id_501_, lean_object* v_danglingDot_502_, lean_object* v_declName_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
uint8_t v_danglingDot_boxed_509_; lean_object* v_res_510_; 
v_danglingDot_boxed_509_ = lean_unbox(v_danglingDot_502_);
v_res_510_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(v_ns_500_, v_id_501_, v_danglingDot_boxed_509_, v_declName_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
lean_dec(v_a_505_);
lean_dec_ref(v_a_504_);
lean_dec(v_id_501_);
lean_dec(v_ns_500_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object* v___y_511_, lean_object* v_toPure_512_, lean_object* v_a_513_){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v_a_513_);
lean_ctor_set(v___x_514_, 1, v___y_511_);
v___x_515_ = lean_apply_2(v_toPure_512_, lean_box(0), v___x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object* v_f_516_, lean_object* v_decl_517_, lean_object* v_ci_518_, lean_object* v_toPure_519_, lean_object* v_toBind_520_, lean_object* v_____r_521_, lean_object* v___y_522_){
_start:
{
lean_object* v___x_523_; lean_object* v___f_524_; lean_object* v___x_525_; 
v___x_523_ = lean_apply_2(v_f_516_, v_decl_517_, v_ci_518_);
v___f_524_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_524_, 0, v___y_522_);
lean_closure_set(v___f_524_, 1, v_toPure_519_);
v___x_525_ = lean_apply_4(v_toBind_520_, lean_box(0), lean_box(0), v___x_523_, v___f_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object* v___f_526_, lean_object* v_____x_527_){
_start:
{
lean_object* v_fst_528_; lean_object* v_snd_529_; lean_object* v___x_530_; 
v_fst_528_ = lean_ctor_get(v_____x_527_, 0);
lean_inc(v_fst_528_);
v_snd_529_ = lean_ctor_get(v_____x_527_, 1);
lean_inc(v_snd_529_);
lean_dec_ref(v_____x_527_);
v___x_530_ = lean_apply_2(v___f_526_, v_fst_528_, v_snd_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object* v_toPure_534_, lean_object* v_toBind_535_, lean_object* v___f_536_, lean_object* v_____x_537_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_538_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0));
v___x_539_ = lean_apply_2(v_toPure_534_, lean_box(0), v___x_538_);
v___x_540_ = lean_apply_4(v_toBind_535_, lean_box(0), lean_box(0), v___x_539_, v___f_536_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object* v_toPure_541_, lean_object* v_toBind_542_, lean_object* v___f_543_, lean_object* v_____x_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(v_toPure_541_, v_toBind_542_, v___f_543_, v_____x_544_);
lean_dec_ref(v_____x_544_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object* v_snd_546_, lean_object* v_toPure_547_, lean_object* v_a_548_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v_a_548_);
lean_ctor_set(v___x_549_, 1, v_snd_546_);
v___x_550_ = lean_apply_2(v_toPure_547_, lean_box(0), v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object* v___f_551_, lean_object* v_toPure_552_, lean_object* v_toBind_553_, lean_object* v_inst_554_, lean_object* v___f_555_, lean_object* v_____x_556_){
_start:
{
lean_object* v_fst_557_; lean_object* v_snd_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v_fst_557_ = lean_ctor_get(v_____x_556_, 0);
lean_inc(v_fst_557_);
v_snd_558_ = lean_ctor_get(v_____x_556_, 1);
lean_inc(v_snd_558_);
lean_dec_ref(v_____x_556_);
v___x_559_ = lean_unsigned_to_nat(10000u);
v___x_560_ = lean_nat_dec_le(v___x_559_, v_fst_557_);
lean_dec(v_fst_557_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v___f_555_);
lean_dec(v_inst_554_);
lean_dec(v_toBind_553_);
lean_dec(v_toPure_552_);
v___x_561_ = lean_box(0);
v___x_562_ = lean_apply_2(v___f_551_, v___x_561_, v_snd_558_);
return v___x_562_;
}
else
{
lean_object* v___f_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec(v___f_551_);
v___f_563_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4), 3, 2);
lean_closure_set(v___f_563_, 0, v_snd_558_);
lean_closure_set(v___f_563_, 1, v_toPure_552_);
lean_inc(v_toBind_553_);
v___x_564_ = lean_apply_4(v_toBind_553_, lean_box(0), lean_box(0), v_inst_554_, v___f_563_);
v___x_565_ = lean_apply_4(v_toBind_553_, lean_box(0), lean_box(0), v___x_564_, v___f_555_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object* v_toPure_566_, lean_object* v_toBind_567_, lean_object* v___f_568_, lean_object* v_____x_569_){
_start:
{
lean_object* v_snd_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_579_; 
v_snd_570_ = lean_ctor_get(v_____x_569_, 1);
v_isSharedCheck_579_ = !lean_is_exclusive(v_____x_569_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; 
v_unused_580_ = lean_ctor_get(v_____x_569_, 0);
lean_dec(v_unused_580_);
v___x_572_ = v_____x_569_;
v_isShared_573_ = v_isSharedCheck_579_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_snd_570_);
lean_dec(v_____x_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_579_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
lean_inc(v_snd_570_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 0, v_snd_570_);
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_snd_570_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_snd_570_);
v___x_575_ = v_reuseFailAlloc_578_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = lean_apply_2(v_toPure_566_, lean_box(0), v___x_575_);
v___x_577_ = lean_apply_4(v_toBind_567_, lean_box(0), lean_box(0), v___x_576_, v___f_568_);
return v___x_577_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object* v_f_581_, lean_object* v_toPure_582_, lean_object* v_toBind_583_, lean_object* v_inst_584_, lean_object* v_decl_585_, lean_object* v_ci_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___f_588_; lean_object* v___f_589_; lean_object* v___f_590_; lean_object* v___f_591_; lean_object* v___f_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
lean_inc_n(v_toBind_583_, 4);
lean_inc_n(v_toPure_582_, 4);
v___f_588_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1), 7, 5);
lean_closure_set(v___f_588_, 0, v_f_581_);
lean_closure_set(v___f_588_, 1, v_decl_585_);
lean_closure_set(v___f_588_, 2, v_ci_586_);
lean_closure_set(v___f_588_, 3, v_toPure_582_);
lean_closure_set(v___f_588_, 4, v_toBind_583_);
lean_inc_ref(v___f_588_);
v___f_589_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_589_, 0, v___f_588_);
v___f_590_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_590_, 0, v_toPure_582_);
lean_closure_set(v___f_590_, 1, v_toBind_583_);
lean_closure_set(v___f_590_, 2, v___f_589_);
v___f_591_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5), 6, 5);
lean_closure_set(v___f_591_, 0, v___f_588_);
lean_closure_set(v___f_591_, 1, v_toPure_582_);
lean_closure_set(v___f_591_, 2, v_toBind_583_);
lean_closure_set(v___f_591_, 3, v_inst_584_);
lean_closure_set(v___f_591_, 4, v___f_590_);
v___f_592_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6), 4, 3);
lean_closure_set(v___f_592_, 0, v_toPure_582_);
lean_closure_set(v___f_592_, 1, v_toBind_583_);
lean_closure_set(v___f_592_, 2, v___f_591_);
v___x_593_ = lean_box(0);
v___x_594_ = lean_unsigned_to_nat(1u);
v___x_595_ = lean_nat_add(v___y_587_, v___x_594_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_593_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_apply_2(v_toPure_582_, lean_box(0), v___x_596_);
v___x_598_ = lean_apply_4(v_toBind_583_, lean_box(0), lean_box(0), v___x_597_, v___f_592_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object* v_f_599_, lean_object* v_toPure_600_, lean_object* v_toBind_601_, lean_object* v_inst_602_, lean_object* v_decl_603_, lean_object* v_ci_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(v_f_599_, v_toPure_600_, v_toBind_601_, v_inst_602_, v_decl_603_, v_ci_604_, v___y_605_);
lean_dec(v___y_605_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object* v_toPure_607_, lean_object* v_____x_608_){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = lean_box(0);
v___x_610_ = lean_apply_2(v_toPure_607_, lean_box(0), v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object* v_toPure_611_, lean_object* v_____x_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(v_toPure_611_, v_____x_612_);
lean_dec_ref(v_____x_612_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object* v_inst_614_, lean_object* v_inst_615_, lean_object* v_inst_616_, lean_object* v_inst_617_, lean_object* v_f_618_){
_start:
{
lean_object* v_toApplicative_619_; lean_object* v_toBind_620_; lean_object* v___f_621_; lean_object* v___f_622_; lean_object* v___f_623_; lean_object* v___f_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v_getEnv_631_; lean_object* v_modifyEnv_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_650_; 
v_toApplicative_619_ = lean_ctor_get(v_inst_614_, 0);
lean_inc_ref(v_toApplicative_619_);
v_toBind_620_ = lean_ctor_get(v_inst_614_, 1);
lean_inc(v_toBind_620_);
lean_inc_ref_n(v_inst_614_, 7);
v___f_621_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_621_, 0, v_inst_614_);
v___f_622_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_622_, 0, v_inst_614_);
v___f_623_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_623_, 0, v_inst_614_);
v___f_624_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_624_, 0, v_inst_614_);
v___x_625_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_625_, 0, lean_box(0));
lean_closure_set(v___x_625_, 1, lean_box(0));
lean_closure_set(v___x_625_, 2, v_inst_614_);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___f_621_);
v___x_627_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_627_, 0, lean_box(0));
lean_closure_set(v___x_627_, 1, lean_box(0));
lean_closure_set(v___x_627_, 2, v_inst_614_);
v___x_628_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
lean_ctor_set(v___x_628_, 2, v___f_622_);
lean_ctor_set(v___x_628_, 3, v___f_623_);
lean_ctor_set(v___x_628_, 4, v___f_624_);
v___x_629_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_629_, 0, lean_box(0));
lean_closure_set(v___x_629_, 1, lean_box(0));
lean_closure_set(v___x_629_, 2, v_inst_614_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_628_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v_getEnv_631_ = lean_ctor_get(v_inst_615_, 0);
v_modifyEnv_632_ = lean_ctor_get(v_inst_615_, 1);
v_isSharedCheck_650_ = !lean_is_exclusive(v_inst_615_);
if (v_isSharedCheck_650_ == 0)
{
v___x_634_ = v_inst_615_;
v_isShared_635_ = v_isSharedCheck_650_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_modifyEnv_632_);
lean_inc(v_getEnv_631_);
lean_dec(v_inst_615_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_650_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___f_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
lean_inc_ref(v_inst_614_);
v___x_636_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_636_, 0, lean_box(0));
lean_closure_set(v___x_636_, 1, lean_box(0));
lean_closure_set(v___x_636_, 2, v_inst_614_);
lean_inc_ref(v___x_636_);
v___f_637_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_637_, 0, v_modifyEnv_632_);
lean_closure_set(v___f_637_, 1, v___x_636_);
v___x_638_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 5);
lean_closure_set(v___x_638_, 0, lean_box(0));
lean_closure_set(v___x_638_, 1, lean_box(0));
lean_closure_set(v___x_638_, 2, v_inst_614_);
lean_closure_set(v___x_638_, 3, lean_box(0));
lean_closure_set(v___x_638_, 4, v_getEnv_631_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v___f_637_);
lean_ctor_set(v___x_634_, 0, v___x_638_);
v___x_640_ = v___x_634_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___f_637_);
v___x_640_ = v_reuseFailAlloc_649_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v_toPure_641_; lean_object* v___f_642_; lean_object* v___f_643_; lean_object* v___f_644_; lean_object* v___x_645_; lean_object* v___x_515__overap_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v_toPure_641_ = lean_ctor_get(v_toApplicative_619_, 1);
lean_inc_n(v_toPure_641_, 2);
lean_dec_ref(v_toApplicative_619_);
lean_inc(v_toBind_620_);
v___f_642_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_642_, 0, v_f_618_);
lean_closure_set(v___f_642_, 1, v_toPure_641_);
lean_closure_set(v___f_642_, 2, v_toBind_620_);
lean_closure_set(v___f_642_, 3, v_inst_617_);
v___f_643_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_643_, 0, v_inst_616_);
lean_closure_set(v___f_643_, 1, v___x_636_);
v___f_644_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed), 2, 1);
lean_closure_set(v___f_644_, 0, v_toPure_641_);
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_515__overap_646_ = l_Lean_Server_Completion_forEligibleDeclsM___redArg(v___x_630_, v___x_640_, v___f_643_, v___f_642_);
v___x_647_ = lean_apply_1(v___x_515__overap_646_, v___x_645_);
v___x_648_ = lean_apply_4(v_toBind_620_, lean_box(0), lean_box(0), v___x_647_, v___f_644_);
return v___x_648_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object* v_m_651_, lean_object* v_inst_652_, lean_object* v_inst_653_, lean_object* v_inst_654_, lean_object* v_inst_655_, lean_object* v_f_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(v_inst_652_, v_inst_653_, v_inst_654_, v_inst_655_, v_f_656_);
return v___x_657_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object* v_id_658_, lean_object* v_declName_659_, uint8_t v_danglingDot_660_){
_start:
{
if (v_danglingDot_660_ == 0)
{
if (lean_obj_tag(v_id_658_) == 1)
{
lean_object* v_pre_661_; 
v_pre_661_ = lean_ctor_get(v_id_658_, 0);
if (lean_obj_tag(v_pre_661_) == 0)
{
if (lean_obj_tag(v_declName_659_) == 1)
{
lean_object* v_pre_662_; 
v_pre_662_ = lean_ctor_get(v_declName_659_, 0);
if (lean_obj_tag(v_pre_662_) == 0)
{
lean_object* v_str_663_; lean_object* v_str_664_; uint8_t v___x_665_; 
v_str_663_ = lean_ctor_get(v_id_658_, 1);
v_str_664_ = lean_ctor_get(v_declName_659_, 1);
v___x_665_ = l_Lean_String_charactersIn(v_str_663_, v_str_664_);
return v___x_665_;
}
else
{
return v_danglingDot_660_;
}
}
else
{
return v_danglingDot_660_;
}
}
else
{
return v_danglingDot_660_;
}
}
else
{
return v_danglingDot_660_;
}
}
else
{
uint8_t v___x_666_; 
v___x_666_ = 0;
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object* v_id_667_, lean_object* v_declName_668_, lean_object* v_danglingDot_669_){
_start:
{
uint8_t v_danglingDot_boxed_670_; uint8_t v_res_671_; lean_object* v_r_672_; 
v_danglingDot_boxed_670_ = lean_unbox(v_danglingDot_669_);
v_res_671_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_667_, v_declName_668_, v_danglingDot_boxed_670_);
lean_dec(v_declName_668_);
lean_dec(v_id_667_);
v_r_672_ = lean_box(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object* v_msg_676_){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0));
v___x_678_ = lean_panic_fn_borrowed(v___x_677_, v_msg_676_);
return v___x_678_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_682_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2));
v___x_683_ = lean_unsigned_to_nat(26u);
v___x_684_ = lean_unsigned_to_nat(177u);
v___x_685_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1));
v___x_686_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0));
v___x_687_ = l_mkPanicMessageWithDecl(v___x_686_, v___x_685_, v___x_684_, v___x_683_, v___x_682_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object* v_newLen_688_, lean_object* v_id_689_){
_start:
{
switch(lean_obj_tag(v_id_689_))
{
case 0:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec(v_newLen_688_);
v___x_690_ = lean_unsigned_to_nat(0u);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v_id_689_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
return v___x_691_;
}
case 1:
{
lean_object* v_pre_692_; lean_object* v_str_693_; lean_object* v___x_694_; lean_object* v_snd_695_; lean_object* v___y_697_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v_pre_692_ = lean_ctor_get(v_id_689_, 0);
v_str_693_ = lean_ctor_get(v_id_689_, 1);
lean_inc(v_pre_692_);
lean_inc(v_newLen_688_);
v___x_694_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_688_, v_pre_692_);
v_snd_695_ = lean_ctor_get(v___x_694_, 1);
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = lean_nat_add(v_snd_695_, v___x_709_);
v___x_711_ = lean_nat_dec_le(v_newLen_688_, v___x_710_);
lean_dec(v___x_710_);
if (v___x_711_ == 0)
{
uint8_t v___x_712_; 
lean_inc(v_snd_695_);
lean_dec_ref(v___x_694_);
v___x_712_ = l_Lean_Name_isAnonymous(v_pre_692_);
if (v___x_712_ == 0)
{
v___y_697_ = v___x_709_;
goto v___jp_696_;
}
else
{
lean_object* v___x_713_; 
v___x_713_ = lean_unsigned_to_nat(0u);
v___y_697_ = v___x_713_;
goto v___jp_696_;
}
}
else
{
lean_dec_ref_known(v_id_689_, 2);
lean_dec(v_newLen_688_);
return v___x_694_;
}
v___jp_696_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v_len_x27_700_; uint8_t v___x_701_; 
v___x_698_ = lean_nat_add(v_snd_695_, v___y_697_);
v___x_699_ = lean_string_length(v_str_693_);
v_len_x27_700_ = lean_nat_add(v___x_698_, v___x_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_nat_dec_le(v_len_x27_700_, v_newLen_688_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
lean_inc_ref(v_str_693_);
lean_inc(v_pre_692_);
lean_dec(v_len_x27_700_);
lean_dec_ref_known(v_id_689_, 2);
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_nat_sub(v_newLen_688_, v___y_697_);
v___x_704_ = lean_nat_sub(v___x_703_, v_snd_695_);
lean_dec(v_snd_695_);
lean_dec(v___x_703_);
v___x_705_ = lean_string_utf8_extract(v_str_693_, v___x_702_, v___x_704_);
lean_dec(v___x_704_);
lean_dec_ref(v_str_693_);
v___x_706_ = l_Lean_Name_str___override(v_pre_692_, v___x_705_);
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
lean_ctor_set(v___x_707_, 1, v_newLen_688_);
return v___x_707_;
}
else
{
lean_object* v___x_708_; 
lean_dec(v_snd_695_);
lean_dec(v_newLen_688_);
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v_id_689_);
lean_ctor_set(v___x_708_, 1, v_len_x27_700_);
return v___x_708_;
}
}
}
default: 
{
lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec_ref_known(v_id_689_, 2);
lean_dec(v_newLen_688_);
v___x_714_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3);
v___x_715_ = l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(v___x_714_);
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object* v_id_716_, lean_object* v_newLen_717_){
_start:
{
lean_object* v___x_718_; lean_object* v_fst_719_; 
v___x_718_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_717_, v_id_716_);
v_fst_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_fst_719_);
lean_dec_ref(v___x_718_);
return v_fst_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object* v_matchUsingNamespace_720_, lean_object* v_ns_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
if (lean_obj_tag(v_ns_721_) == 1)
{
lean_object* v_pre_731_; lean_object* v___x_732_; 
v_pre_731_ = lean_ctor_get(v_ns_721_, 0);
lean_inc(v_pre_731_);
lean_inc_ref(v_matchUsingNamespace_720_);
lean_inc(v_a_729_);
lean_inc_ref(v_a_728_);
lean_inc(v_a_727_);
lean_inc_ref(v_a_726_);
lean_inc_ref(v_a_725_);
lean_inc(v_a_724_);
lean_inc_ref(v_a_723_);
v___x_732_ = lean_apply_10(v_matchUsingNamespace_720_, v_ns_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, lean_box(0));
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
if (lean_obj_tag(v_a_733_) == 0)
{
lean_dec_ref_known(v_a_733_, 1);
lean_dec(v_pre_731_);
lean_dec_ref(v_matchUsingNamespace_720_);
return v___x_732_;
}
else
{
lean_object* v_a_734_; lean_object* v_snd_735_; 
lean_dec_ref_known(v___x_732_, 1);
v_a_734_ = lean_ctor_get(v_a_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v_a_733_, 1);
v_snd_735_ = lean_ctor_get(v_a_734_, 1);
lean_inc(v_snd_735_);
lean_dec(v_a_734_);
v_ns_721_ = v_pre_731_;
v_a_722_ = v_snd_735_;
goto _start;
}
}
else
{
lean_dec(v_pre_731_);
lean_dec_ref(v_matchUsingNamespace_720_);
return v___x_732_;
}
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec(v_ns_721_);
lean_dec_ref(v_matchUsingNamespace_720_);
v___x_737_ = lean_box(0);
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
lean_ctor_set(v___x_738_, 1, v_a_722_);
v___x_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
return v___x_740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object* v_matchUsingNamespace_741_, lean_object* v_ns_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_741_, v_ns_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_);
lean_dec(v_a_750_);
lean_dec_ref(v_a_749_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec(v_a_745_);
lean_dec_ref(v_a_744_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object* v_id_753_, uint8_t v_danglingDot_754_, lean_object* v_declName_755_, lean_object* v_ns_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_788_; 
v___x_766_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_756_, v_id_753_, v_danglingDot_754_, v_declName_755_, v___y_764_);
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_788_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_788_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_788_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
if (lean_obj_tag(v_a_767_) == 1)
{
lean_object* v_val_771_; lean_object* v___x_772_; lean_object* v___y_774_; 
v_val_771_ = lean_ctor_get(v_a_767_, 0);
v___x_772_ = lean_box(0);
if (lean_obj_tag(v___y_757_) == 0)
{
v___y_774_ = v_a_767_;
goto v___jp_773_;
}
else
{
lean_object* v_val_780_; uint8_t v___x_781_; 
v_val_780_ = lean_ctor_get(v___y_757_, 0);
v___x_781_ = l_Lean_Name_isSuffixOf(v_val_771_, v_val_780_);
if (v___x_781_ == 0)
{
lean_dec_ref_known(v_a_767_, 1);
v___y_774_ = v___y_757_;
goto v___jp_773_;
}
else
{
lean_dec_ref_known(v___y_757_, 1);
v___y_774_ = v_a_767_;
goto v___jp_773_;
}
}
v___jp_773_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_778_; 
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_772_);
lean_ctor_set(v___x_775_, 1, v___y_774_);
v___x_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v___x_776_);
v___x_778_ = v___x_769_;
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
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_786_; 
lean_dec(v_a_767_);
v___x_782_ = lean_box(0);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
lean_ctor_set(v___x_783_, 1, v___y_757_);
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v___x_784_);
v___x_786_ = v___x_769_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_784_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object* v_id_789_, lean_object* v_danglingDot_790_, lean_object* v_declName_791_, lean_object* v_ns_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
uint8_t v_danglingDot_boxed_802_; lean_object* v_res_803_; 
v_danglingDot_boxed_802_ = lean_unbox(v_danglingDot_790_);
v_res_803_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_789_, v_danglingDot_boxed_802_, v_declName_791_, v_ns_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v_ns_792_);
lean_dec(v_id_789_);
return v_res_803_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object* v_a_804_, lean_object* v_x_805_){
_start:
{
if (lean_obj_tag(v_x_805_) == 0)
{
uint8_t v___x_806_; 
v___x_806_ = 0;
return v___x_806_;
}
else
{
lean_object* v_head_807_; lean_object* v_tail_808_; uint8_t v___x_809_; 
v_head_807_ = lean_ctor_get(v_x_805_, 0);
v_tail_808_ = lean_ctor_get(v_x_805_, 1);
v___x_809_ = lean_name_eq(v_a_804_, v_head_807_);
if (v___x_809_ == 0)
{
v_x_805_ = v_tail_808_;
goto _start;
}
else
{
return v___x_809_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object* v_a_811_, lean_object* v_x_812_){
_start:
{
uint8_t v_res_813_; lean_object* v_r_814_; 
v_res_813_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_a_811_, v_x_812_);
lean_dec(v_x_812_);
lean_dec(v_a_811_);
v_r_814_ = lean_box(v_res_813_);
return v_r_814_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object* v_declName_815_, lean_object* v_id_816_, uint8_t v_danglingDot_817_, lean_object* v_as_x27_818_, lean_object* v_b_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
if (lean_obj_tag(v_as_x27_818_) == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
lean_dec(v_declName_815_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v_b_819_);
lean_ctor_set(v___x_823_, 1, v___y_820_);
v___x_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
v___x_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
return v___x_825_;
}
else
{
lean_object* v_head_826_; lean_object* v_tail_827_; lean_object* v___x_828_; 
v_head_826_ = lean_ctor_get(v_as_x27_818_, 0);
v_tail_827_ = lean_ctor_get(v_as_x27_818_, 1);
v___x_828_ = lean_box(0);
if (lean_obj_tag(v_head_826_) == 0)
{
lean_object* v_ns_829_; lean_object* v_except_830_; uint8_t v___x_831_; 
v_ns_829_ = lean_ctor_get(v_head_826_, 0);
v_except_830_ = lean_ctor_get(v_head_826_, 1);
v___x_831_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_815_, v_except_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; lean_object* v_a_833_; 
lean_inc(v_declName_815_);
v___x_832_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_829_, v_id_816_, v_danglingDot_817_, v_declName_815_, v___y_821_);
v_a_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_a_833_);
lean_dec_ref(v___x_832_);
if (lean_obj_tag(v_a_833_) == 1)
{
if (lean_obj_tag(v___y_820_) == 0)
{
v_as_x27_818_ = v_tail_827_;
v_b_819_ = v___x_828_;
v___y_820_ = v_a_833_;
goto _start;
}
else
{
lean_object* v_val_835_; lean_object* v_val_836_; uint8_t v___x_837_; 
v_val_835_ = lean_ctor_get(v_a_833_, 0);
v_val_836_ = lean_ctor_get(v___y_820_, 0);
v___x_837_ = l_Lean_Name_isSuffixOf(v_val_835_, v_val_836_);
if (v___x_837_ == 0)
{
lean_dec_ref_known(v_a_833_, 1);
v_as_x27_818_ = v_tail_827_;
v_b_819_ = v___x_828_;
goto _start;
}
else
{
lean_dec_ref_known(v___y_820_, 1);
v_as_x27_818_ = v_tail_827_;
v_b_819_ = v___x_828_;
v___y_820_ = v_a_833_;
goto _start;
}
}
}
else
{
lean_dec(v_a_833_);
v_as_x27_818_ = v_tail_827_;
v_b_819_ = v___x_828_;
goto _start;
}
}
else
{
v_as_x27_818_ = v_tail_827_;
v_b_819_ = v___x_828_;
goto _start;
}
}
else
{
v_as_x27_818_ = v_tail_827_;
v_b_819_ = v___x_828_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_declName_843_, lean_object* v_id_844_, lean_object* v_danglingDot_845_, lean_object* v_as_x27_846_, lean_object* v_b_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
uint8_t v_danglingDot_boxed_851_; lean_object* v_res_852_; 
v_danglingDot_boxed_851_ = lean_unbox(v_danglingDot_845_);
v_res_852_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_843_, v_id_844_, v_danglingDot_boxed_851_, v_as_x27_846_, v_b_847_, v___y_848_, v___y_849_);
lean_dec(v___y_849_);
lean_dec(v_as_x27_846_);
lean_dec(v_id_844_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object* v_declName_853_, lean_object* v_id_854_, uint8_t v_danglingDot_855_, lean_object* v_as_856_, lean_object* v_as_x27_857_, lean_object* v_b_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
if (lean_obj_tag(v_as_x27_857_) == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
lean_dec(v_declName_853_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v_b_858_);
lean_ctor_set(v___x_868_, 1, v___y_859_);
v___x_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
v___x_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
return v___x_870_;
}
else
{
lean_object* v_head_871_; lean_object* v_tail_872_; lean_object* v___x_873_; 
v_head_871_ = lean_ctor_get(v_as_x27_857_, 0);
v_tail_872_ = lean_ctor_get(v_as_x27_857_, 1);
v___x_873_ = lean_box(0);
if (lean_obj_tag(v_head_871_) == 0)
{
lean_object* v_ns_874_; lean_object* v_except_875_; uint8_t v___x_876_; 
v_ns_874_ = lean_ctor_get(v_head_871_, 0);
v_except_875_ = lean_ctor_get(v_head_871_, 1);
v___x_876_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_853_, v_except_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; lean_object* v_a_878_; 
lean_inc(v_declName_853_);
v___x_877_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_874_, v_id_854_, v_danglingDot_855_, v_declName_853_, v___y_866_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref(v___x_877_);
if (lean_obj_tag(v_a_878_) == 1)
{
if (lean_obj_tag(v___y_859_) == 0)
{
lean_object* v___x_879_; 
v___x_879_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_853_, v_id_854_, v_danglingDot_855_, v_tail_872_, v___x_873_, v_a_878_, v___y_866_);
return v___x_879_;
}
else
{
lean_object* v_val_880_; lean_object* v_val_881_; uint8_t v___x_882_; 
v_val_880_ = lean_ctor_get(v_a_878_, 0);
v_val_881_ = lean_ctor_get(v___y_859_, 0);
v___x_882_ = l_Lean_Name_isSuffixOf(v_val_880_, v_val_881_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; 
lean_dec_ref_known(v_a_878_, 1);
v___x_883_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_853_, v_id_854_, v_danglingDot_855_, v_tail_872_, v___x_873_, v___y_859_, v___y_866_);
return v___x_883_;
}
else
{
lean_object* v___x_884_; 
lean_dec_ref_known(v___y_859_, 1);
v___x_884_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_853_, v_id_854_, v_danglingDot_855_, v_tail_872_, v___x_873_, v_a_878_, v___y_866_);
return v___x_884_;
}
}
}
else
{
lean_object* v___x_885_; 
lean_dec(v_a_878_);
v___x_885_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_853_, v_id_854_, v_danglingDot_855_, v_tail_872_, v___x_873_, v___y_859_, v___y_866_);
return v___x_885_;
}
}
else
{
lean_object* v___x_886_; 
v___x_886_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_853_, v_id_854_, v_danglingDot_855_, v_tail_872_, v___x_873_, v___y_859_, v___y_866_);
return v___x_886_;
}
}
else
{
lean_object* v___x_887_; 
v___x_887_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_853_, v_id_854_, v_danglingDot_855_, v_tail_872_, v___x_873_, v___y_859_, v___y_866_);
return v___x_887_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object* v_declName_888_, lean_object* v_id_889_, lean_object* v_danglingDot_890_, lean_object* v_as_891_, lean_object* v_as_x27_892_, lean_object* v_b_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
uint8_t v_danglingDot_boxed_903_; lean_object* v_res_904_; 
v_danglingDot_boxed_903_ = lean_unbox(v_danglingDot_890_);
v_res_904_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_888_, v_id_889_, v_danglingDot_boxed_903_, v_as_891_, v_as_x27_892_, v_b_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v_as_x27_892_);
lean_dec(v_as_891_);
lean_dec(v_id_889_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object* v_ctx_905_, lean_object* v_declName_906_, lean_object* v_id_907_, uint8_t v_danglingDot_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
lean_object* v_a_918_; lean_object* v_toCommandContextInfo_921_; lean_object* v_currNamespace_922_; lean_object* v_openDecls_923_; lean_object* v___x_924_; lean_object* v_matchUsingNamespace_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_toCommandContextInfo_921_ = lean_ctor_get(v_ctx_905_, 0);
lean_inc_ref(v_toCommandContextInfo_921_);
lean_dec_ref(v_ctx_905_);
v_currNamespace_922_ = lean_ctor_get(v_toCommandContextInfo_921_, 5);
lean_inc(v_currNamespace_922_);
v_openDecls_923_ = lean_ctor_get(v_toCommandContextInfo_921_, 6);
lean_inc(v_openDecls_923_);
lean_dec_ref(v_toCommandContextInfo_921_);
v___x_924_ = lean_box(v_danglingDot_908_);
lean_inc(v_declName_906_);
lean_inc(v_id_907_);
v_matchUsingNamespace_925_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed), 13, 3);
lean_closure_set(v_matchUsingNamespace_925_, 0, v_id_907_);
lean_closure_set(v_matchUsingNamespace_925_, 1, v___x_924_);
lean_closure_set(v_matchUsingNamespace_925_, 2, v_declName_906_);
v___x_926_ = lean_box(0);
v___x_927_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_925_, v_currNamespace_922_, v___x_926_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
if (lean_obj_tag(v_a_928_) == 0)
{
lean_object* v_a_929_; 
lean_dec(v_openDecls_923_);
lean_dec(v_id_907_);
lean_dec(v_declName_906_);
v_a_929_ = lean_ctor_get(v_a_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v_a_928_, 1);
v_a_918_ = v_a_929_;
goto v___jp_917_;
}
else
{
lean_object* v_a_930_; lean_object* v_snd_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_a_930_ = lean_ctor_get(v_a_928_, 0);
lean_inc(v_a_930_);
lean_dec_ref_known(v_a_928_, 1);
v_snd_931_ = lean_ctor_get(v_a_930_, 1);
lean_inc(v_snd_931_);
lean_dec(v_a_930_);
v___x_932_ = lean_box(0);
lean_inc(v_declName_906_);
v___x_933_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_906_, v_id_907_, v_danglingDot_908_, v_openDecls_923_, v_openDecls_923_, v___x_932_, v_snd_931_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_);
lean_dec(v_openDecls_923_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v_a_935_; lean_object* v_snd_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
v_a_935_ = lean_ctor_get(v_a_934_, 0);
lean_inc(v_a_935_);
lean_dec(v_a_934_);
v_snd_936_ = lean_ctor_get(v_a_935_, 1);
lean_inc(v_snd_936_);
lean_dec(v_a_935_);
v___x_937_ = lean_box(0);
v___x_938_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_907_, v_danglingDot_908_, v_declName_906_, v___x_937_, v_snd_936_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_);
lean_dec(v_id_907_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_955_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_955_ == 0)
{
v___x_941_ = v___x_938_;
v_isShared_942_ = v_isSharedCheck_955_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_938_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_955_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_954_; 
v_a_943_ = lean_ctor_get(v_a_939_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v_a_939_);
if (v_isSharedCheck_954_ == 0)
{
v___x_945_ = v_a_939_;
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v_a_939_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v_snd_947_; lean_object* v___x_949_; 
v_snd_947_ = lean_ctor_get(v_a_943_, 1);
lean_inc(v_snd_947_);
lean_dec(v_a_943_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v_snd_947_);
v___x_949_ = v___x_945_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_snd_947_);
v___x_949_ = v_reuseFailAlloc_953_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_951_; 
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 0, v___x_949_);
v___x_951_ = v___x_941_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_949_);
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
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
v_a_956_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_938_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_938_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
lean_dec(v_id_907_);
lean_dec(v_declName_906_);
v_a_964_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_933_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_933_);
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
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec(v_openDecls_923_);
lean_dec(v_id_907_);
lean_dec(v_declName_906_);
v_a_972_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_927_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_927_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
v___jp_917_:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_919_, 0, v_a_918_);
v___x_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object* v_ctx_980_, lean_object* v_declName_981_, lean_object* v_id_982_, lean_object* v_danglingDot_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
uint8_t v_danglingDot_boxed_992_; lean_object* v_res_993_; 
v_danglingDot_boxed_992_ = lean_unbox(v_danglingDot_983_);
v_res_993_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_980_, v_declName_981_, v_id_982_, v_danglingDot_boxed_992_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_, v_a_989_, v_a_990_);
lean_dec(v_a_990_);
lean_dec_ref(v_a_989_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
lean_dec_ref(v_a_986_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object* v_declName_994_, lean_object* v_id_995_, uint8_t v_danglingDot_996_, lean_object* v_as_997_, lean_object* v_as_x27_998_, lean_object* v_b_999_, lean_object* v_a_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_994_, v_id_995_, v_danglingDot_996_, v_as_997_, v_as_x27_998_, v_b_999_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object* v_declName_1011_, lean_object* v_id_1012_, lean_object* v_danglingDot_1013_, lean_object* v_as_1014_, lean_object* v_as_x27_1015_, lean_object* v_b_1016_, lean_object* v_a_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
uint8_t v_danglingDot_boxed_1027_; lean_object* v_res_1028_; 
v_danglingDot_boxed_1027_ = lean_unbox(v_danglingDot_1013_);
v_res_1028_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(v_declName_1011_, v_id_1012_, v_danglingDot_boxed_1027_, v_as_1014_, v_as_x27_1015_, v_b_1016_, v_a_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec(v_as_x27_1015_);
lean_dec(v_as_1014_);
lean_dec(v_id_1012_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object* v_declName_1029_, lean_object* v_id_1030_, uint8_t v_danglingDot_1031_, lean_object* v_as_1032_, lean_object* v_as_x27_1033_, lean_object* v_b_1034_, lean_object* v_a_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_1029_, v_id_1030_, v_danglingDot_1031_, v_as_x27_1033_, v_b_1034_, v___y_1036_, v___y_1043_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object* v_declName_1046_, lean_object* v_id_1047_, lean_object* v_danglingDot_1048_, lean_object* v_as_1049_, lean_object* v_as_x27_1050_, lean_object* v_b_1051_, lean_object* v_a_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
uint8_t v_danglingDot_boxed_1062_; lean_object* v_res_1063_; 
v_danglingDot_boxed_1062_ = lean_unbox(v_danglingDot_1048_);
v_res_1063_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(v_declName_1046_, v_id_1047_, v_danglingDot_boxed_1062_, v_as_1049_, v_as_x27_1050_, v_b_1051_, v_a_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v_as_x27_1050_);
lean_dec(v_as_1049_);
lean_dec(v_id_1047_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object* v___x_1064_, lean_object* v_ctx_1065_, lean_object* v_id_1066_, uint8_t v_danglingDot_1067_, lean_object* v_a_1068_, lean_object* v_b_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_a_1079_; lean_object* v_it_1083_; lean_object* v___x_1086_; lean_object* v_it_1088_; lean_object* v_fst_1089_; lean_object* v_it_1114_; lean_object* v_fst_1115_; 
v___x_1086_ = lean_box(0);
if (lean_obj_tag(v_a_1068_) == 0)
{
lean_object* v_a_1117_; lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1185_; 
v_a_1117_ = lean_ctor_get(v_a_1068_, 0);
v_a_1118_ = lean_ctor_get(v_a_1068_, 1);
v_isSharedCheck_1185_ = !lean_is_exclusive(v_a_1068_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1120_ = v_a_1068_;
v_isShared_1121_ = v_isSharedCheck_1185_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_inc(v_a_1117_);
lean_dec(v_a_1068_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1185_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v_it_1123_; lean_object* v_it_u2082_1128_; 
v_it_u2082_1128_ = lean_ctor_get(v_a_1117_, 1);
lean_inc(v_it_u2082_1128_);
if (lean_obj_tag(v_it_u2082_1128_) == 0)
{
lean_object* v_it_u2081_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1153_; 
v_it_u2081_1129_ = lean_ctor_get(v_a_1117_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_a_1117_);
if (v_isSharedCheck_1153_ == 0)
{
lean_object* v_unused_1154_; 
v_unused_1154_ = lean_ctor_get(v_a_1117_, 1);
lean_dec(v_unused_1154_);
v___x_1131_ = v_a_1117_;
v_isShared_1132_ = v_isSharedCheck_1153_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_it_u2081_1129_);
lean_dec(v_a_1117_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1153_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v_array_1133_; lean_object* v_pos_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1152_; 
v_array_1133_ = lean_ctor_get(v_it_u2081_1129_, 0);
v_pos_1134_ = lean_ctor_get(v_it_u2081_1129_, 1);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_it_u2081_1129_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1136_ = v_it_u2081_1129_;
v_isShared_1137_ = v_isSharedCheck_1152_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_pos_1134_);
lean_inc(v_array_1133_);
lean_dec(v_it_u2081_1129_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1152_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = lean_array_get_size(v_array_1133_);
v___x_1139_ = lean_nat_dec_lt(v_pos_1134_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; 
lean_del_object(v___x_1136_);
lean_dec(v_pos_1134_);
lean_dec_ref(v_array_1133_);
lean_del_object(v___x_1131_);
lean_del_object(v___x_1120_);
v___x_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1140_, 0, v_a_1118_);
v_a_1068_ = v___x_1140_;
goto _start;
}
else
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1145_; 
v___x_1142_ = lean_unsigned_to_nat(1u);
v___x_1143_ = lean_nat_add(v_pos_1134_, v___x_1142_);
lean_inc_ref(v_array_1133_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 1, v___x_1143_);
v___x_1145_ = v___x_1136_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_array_1133_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1149_; 
v___x_1146_ = lean_array_fget(v_array_1133_, v_pos_1134_);
lean_dec(v_pos_1134_);
lean_dec_ref(v_array_1133_);
v___x_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
if (v_isShared_1132_ == 0)
{
lean_ctor_set(v___x_1131_, 1, v___x_1147_);
lean_ctor_set(v___x_1131_, 0, v___x_1145_);
v___x_1149_ = v___x_1131_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v___x_1147_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
v_it_1123_ = v___x_1149_;
goto v___jp_1122_;
}
}
}
}
}
}
else
{
lean_object* v_val_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1184_; 
v_val_1155_ = lean_ctor_get(v_it_u2082_1128_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_it_u2082_1128_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1157_ = v_it_u2082_1128_;
v_isShared_1158_ = v_isSharedCheck_1184_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_val_1155_);
lean_dec(v_it_u2082_1128_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1184_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
if (lean_obj_tag(v_val_1155_) == 0)
{
lean_object* v_it_u2081_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
lean_del_object(v___x_1157_);
v_it_u2081_1159_ = lean_ctor_get(v_a_1117_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_a_1117_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; 
v_unused_1168_ = lean_ctor_get(v_a_1117_, 1);
lean_dec(v_unused_1168_);
v___x_1161_ = v_a_1117_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_it_u2081_1159_);
lean_dec(v_a_1117_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1163_ = lean_box(0);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 1, v___x_1163_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_it_u2081_1159_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
v_it_1123_ = v___x_1165_;
goto v___jp_1122_;
}
}
}
else
{
lean_object* v_it_u2081_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1182_; 
lean_del_object(v___x_1120_);
v_it_u2081_1169_ = lean_ctor_get(v_a_1117_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_a_1117_);
if (v_isSharedCheck_1182_ == 0)
{
lean_object* v_unused_1183_; 
v_unused_1183_ = lean_ctor_get(v_a_1117_, 1);
lean_dec(v_unused_1183_);
v___x_1171_ = v_a_1117_;
v_isShared_1172_ = v_isSharedCheck_1182_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_it_u2081_1169_);
lean_dec(v_a_1117_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1182_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v_key_1173_; lean_object* v_tail_1174_; lean_object* v___x_1176_; 
v_key_1173_ = lean_ctor_get(v_val_1155_, 0);
lean_inc(v_key_1173_);
v_tail_1174_ = lean_ctor_get(v_val_1155_, 2);
lean_inc(v_tail_1174_);
lean_dec_ref_known(v_val_1155_, 3);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 0, v_tail_1174_);
v___x_1176_ = v___x_1157_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_tail_1174_);
v___x_1176_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
lean_object* v___x_1178_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 1, v___x_1176_);
v___x_1178_ = v___x_1171_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_it_u2081_1169_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v_a_1118_);
v_it_1088_ = v___x_1179_;
v_fst_1089_ = v_key_1173_;
goto v___jp_1087_;
}
}
}
}
}
}
v___jp_1122_:
{
lean_object* v___x_1125_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 0, v_it_1123_);
v___x_1125_ = v___x_1120_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_it_1123_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_a_1118_);
v___x_1125_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
v_a_1068_ = v___x_1125_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1186_; 
v_a_1186_ = lean_ctor_get(v_a_1068_, 0);
lean_inc(v_a_1186_);
lean_dec_ref_known(v_a_1068_, 1);
switch(lean_obj_tag(v_a_1186_))
{
case 0:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
lean_dec(v_id_1066_);
lean_dec_ref(v_ctx_1065_);
lean_dec_ref(v___x_1064_);
v___x_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_b_1069_);
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
return v___x_1188_;
}
case 1:
{
lean_object* v_a_1189_; lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1208_; 
v_a_1189_ = lean_ctor_get(v_a_1186_, 0);
v_a_1190_ = lean_ctor_get(v_a_1186_, 1);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_a_1186_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1192_ = v_a_1186_;
v_isShared_1193_ = v_isSharedCheck_1208_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_inc(v_a_1189_);
lean_dec(v_a_1186_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1208_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v_start_1194_; lean_object* v_stop_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; 
v_start_1194_ = lean_ctor_get(v_a_1189_, 1);
v_stop_1195_ = lean_ctor_get(v_a_1189_, 2);
v___x_1196_ = lean_unsigned_to_nat(0u);
v___x_1197_ = lean_nat_sub(v_stop_1195_, v_start_1194_);
v___x_1198_ = lean_nat_dec_lt(v___x_1196_, v___x_1197_);
lean_dec(v___x_1197_);
if (v___x_1198_ == 0)
{
lean_del_object(v___x_1192_);
lean_dec_ref(v_a_1189_);
v_it_1083_ = v_a_1190_;
goto v___jp_1082_;
}
else
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v_z_1202_; 
v___x_1199_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_a_1189_);
v___x_1200_ = l_Subarray_drop___redArg(v_a_1189_, v___x_1199_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1200_);
v_z_1202_ = v___x_1192_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_a_1190_);
v_z_1202_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Subarray_get___redArg(v_a_1189_, v___x_1196_);
lean_dec_ref(v_a_1189_);
switch(lean_obj_tag(v___x_1203_))
{
case 0:
{
lean_object* v_key_1204_; 
v_key_1204_ = lean_ctor_get(v___x_1203_, 0);
lean_inc(v_key_1204_);
lean_dec_ref_known(v___x_1203_, 2);
v_it_1114_ = v_z_1202_;
v_fst_1115_ = v_key_1204_;
goto v___jp_1113_;
}
case 1:
{
lean_object* v_node_1205_; lean_object* v___x_1206_; 
v_node_1205_ = lean_ctor_get(v___x_1203_, 0);
lean_inc(v_node_1205_);
lean_dec_ref_known(v___x_1203_, 1);
v___x_1206_ = l_Lean_PersistentHashMap_Zipper_prependNode___redArg(v_node_1205_, v_z_1202_);
v_it_1083_ = v___x_1206_;
goto v___jp_1082_;
}
default: 
{
v_it_1083_ = v_z_1202_;
goto v___jp_1082_;
}
}
}
}
}
}
default: 
{
lean_object* v_vals_1209_; lean_object* v_keys_1210_; lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1227_; 
v_vals_1209_ = lean_ctor_get(v_a_1186_, 1);
v_keys_1210_ = lean_ctor_get(v_a_1186_, 0);
v_a_1211_ = lean_ctor_get(v_a_1186_, 2);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_a_1186_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1213_ = v_a_1186_;
v_isShared_1214_ = v_isSharedCheck_1227_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_inc(v_vals_1209_);
lean_inc(v_keys_1210_);
lean_dec(v_a_1186_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1227_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v_start_1215_; lean_object* v_stop_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; 
v_start_1215_ = lean_ctor_get(v_vals_1209_, 1);
v_stop_1216_ = lean_ctor_get(v_vals_1209_, 2);
v___x_1217_ = lean_unsigned_to_nat(0u);
v___x_1218_ = lean_nat_sub(v_stop_1216_, v_start_1215_);
v___x_1219_ = lean_nat_dec_lt(v___x_1217_, v___x_1218_);
lean_dec(v___x_1218_);
if (v___x_1219_ == 0)
{
lean_del_object(v___x_1213_);
lean_dec_ref(v_keys_1210_);
lean_dec_ref(v_vals_1209_);
v_it_1083_ = v_a_1211_;
goto v___jp_1082_;
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1224_; 
v___x_1220_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_keys_1210_);
v___x_1221_ = l_Subarray_drop___redArg(v_keys_1210_, v___x_1220_);
v___x_1222_ = l_Subarray_drop___redArg(v_vals_1209_, v___x_1220_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___x_1222_);
lean_ctor_set(v___x_1213_, 0, v___x_1221_);
v___x_1224_ = v___x_1213_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1226_, 2, v_a_1211_);
v___x_1224_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Subarray_get___redArg(v_keys_1210_, v___x_1217_);
lean_dec_ref(v_keys_1210_);
v_it_1114_ = v___x_1224_;
v_fst_1115_ = v___x_1225_;
goto v___jp_1113_;
}
}
}
}
}
}
v___jp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1080_, 0, v_a_1079_);
v___x_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
return v___x_1081_;
}
v___jp_1082_:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1084_, 0, v_it_1083_);
v_a_1068_ = v___x_1084_;
goto _start;
}
v___jp_1087_:
{
uint8_t v___x_1090_; 
v___x_1090_ = l_Lean_Name_isInternal(v_fst_1089_);
if (v___x_1090_ == 0)
{
uint8_t v___x_1091_; uint8_t v___x_1092_; 
v___x_1091_ = 1;
lean_inc(v_fst_1089_);
lean_inc_ref(v___x_1064_);
v___x_1092_ = l_Lean_Environment_contains(v___x_1064_, v_fst_1089_, v___x_1091_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; 
lean_inc(v_id_1066_);
lean_inc_ref(v_ctx_1065_);
v___x_1093_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_1065_, v_fst_1089_, v_id_1066_, v_danglingDot_1067_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1094_);
lean_dec_ref_known(v___x_1093_, 1);
if (lean_obj_tag(v_a_1094_) == 0)
{
lean_object* v_a_1095_; 
lean_dec_ref(v_it_1088_);
lean_dec(v_id_1066_);
lean_dec_ref(v_ctx_1065_);
lean_dec_ref(v___x_1064_);
v_a_1095_ = lean_ctor_get(v_a_1094_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v_a_1094_, 1);
v_a_1079_ = v_a_1095_;
goto v___jp_1078_;
}
else
{
lean_object* v_a_1096_; 
v_a_1096_ = lean_ctor_get(v_a_1094_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v_a_1094_, 1);
if (lean_obj_tag(v_a_1096_) == 1)
{
lean_object* v_val_1097_; lean_object* v___x_1098_; 
v_val_1097_ = lean_ctor_get(v_a_1096_, 0);
lean_inc(v_val_1097_);
lean_dec_ref_known(v_a_1096_, 1);
v___x_1098_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_val_1097_, v___y_1070_, v___y_1071_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v___x_1098_, 1);
if (lean_obj_tag(v_a_1099_) == 0)
{
lean_object* v_a_1100_; 
lean_dec_ref(v_it_1088_);
lean_dec(v_id_1066_);
lean_dec_ref(v_ctx_1065_);
lean_dec_ref(v___x_1064_);
v_a_1100_ = lean_ctor_get(v_a_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v_a_1099_, 1);
v_a_1079_ = v_a_1100_;
goto v___jp_1078_;
}
else
{
lean_dec_ref_known(v_a_1099_, 1);
v_a_1068_ = v_it_1088_;
v_b_1069_ = v___x_1086_;
goto _start;
}
}
else
{
lean_dec_ref(v_it_1088_);
lean_dec(v_id_1066_);
lean_dec_ref(v_ctx_1065_);
lean_dec_ref(v___x_1064_);
return v___x_1098_;
}
}
else
{
lean_dec(v_a_1096_);
v_a_1068_ = v_it_1088_;
v_b_1069_ = v___x_1086_;
goto _start;
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec_ref(v_it_1088_);
lean_dec(v_id_1066_);
lean_dec_ref(v_ctx_1065_);
lean_dec_ref(v___x_1064_);
v_a_1103_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1093_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1093_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
else
{
lean_dec(v_fst_1089_);
v_a_1068_ = v_it_1088_;
v_b_1069_ = v___x_1086_;
goto _start;
}
}
else
{
lean_dec(v_fst_1089_);
v_a_1068_ = v_it_1088_;
v_b_1069_ = v___x_1086_;
goto _start;
}
}
v___jp_1113_:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_it_1114_);
v_it_1088_ = v___x_1116_;
v_fst_1089_ = v_fst_1115_;
goto v___jp_1087_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object* v___x_1228_, lean_object* v_ctx_1229_, lean_object* v_id_1230_, lean_object* v_danglingDot_1231_, lean_object* v_a_1232_, lean_object* v_b_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
uint8_t v_danglingDot_boxed_1242_; lean_object* v_res_1243_; 
v_danglingDot_boxed_1242_ = lean_unbox(v_danglingDot_1231_);
v_res_1243_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v___x_1228_, v_ctx_1229_, v_id_1230_, v_danglingDot_boxed_1242_, v_a_1232_, v_b_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
lean_dec(v___y_1240_);
lean_dec_ref(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object* v_ctx_1244_, lean_object* v_id_1245_, uint8_t v_danglingDot_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v___x_1255_; lean_object* v_env_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1255_ = lean_st_ref_get(v_a_1253_);
v_env_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc_ref_n(v_env_1256_, 2);
lean_dec(v___x_1255_);
v___x_1257_ = l_Lean_Environment_getNamespaces(v_env_1256_);
v___x_1258_ = lean_box(0);
v___x_1259_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_env_1256_, v_ctx_1244_, v_id_1245_, v_danglingDot_1246_, v___x_1257_, v___x_1258_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
if (lean_obj_tag(v_a_1260_) == 0)
{
return v___x_1259_;
}
else
{
lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1268_; 
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1268_ == 0)
{
lean_object* v_unused_1269_; 
v_unused_1269_ = lean_ctor_get(v___x_1259_, 0);
lean_dec(v_unused_1269_);
v___x_1262_ = v___x_1259_;
v_isShared_1263_ = v_isSharedCheck_1268_;
goto v_resetjp_1261_;
}
else
{
lean_dec(v___x_1259_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1268_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1264_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 0, v___x_1264_);
v___x_1266_ = v___x_1262_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
else
{
return v___x_1259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object* v_ctx_1270_, lean_object* v_id_1271_, lean_object* v_danglingDot_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_){
_start:
{
uint8_t v_danglingDot_boxed_1281_; lean_object* v_res_1282_; 
v_danglingDot_boxed_1281_ = lean_unbox(v_danglingDot_1272_);
v_res_1282_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_1270_, v_id_1271_, v_danglingDot_boxed_1281_, v_a_1273_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
lean_dec(v_a_1279_);
lean_dec_ref(v_a_1278_);
lean_dec(v_a_1277_);
lean_dec_ref(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1273_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object* v___x_1283_, lean_object* v_ctx_1284_, lean_object* v_id_1285_, uint8_t v_danglingDot_1286_, lean_object* v_inst_1287_, lean_object* v_R_1288_, lean_object* v_a_1289_, lean_object* v_b_1290_, lean_object* v_c_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v___x_1283_, v_ctx_1284_, v_id_1285_, v_danglingDot_1286_, v_a_1289_, v_b_1290_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object** _args){
lean_object* v___x_1301_ = _args[0];
lean_object* v_ctx_1302_ = _args[1];
lean_object* v_id_1303_ = _args[2];
lean_object* v_danglingDot_1304_ = _args[3];
lean_object* v_inst_1305_ = _args[4];
lean_object* v_R_1306_ = _args[5];
lean_object* v_a_1307_ = _args[6];
lean_object* v_b_1308_ = _args[7];
lean_object* v_c_1309_ = _args[8];
lean_object* v___y_1310_ = _args[9];
lean_object* v___y_1311_ = _args[10];
lean_object* v___y_1312_ = _args[11];
lean_object* v___y_1313_ = _args[12];
lean_object* v___y_1314_ = _args[13];
lean_object* v___y_1315_ = _args[14];
lean_object* v___y_1316_ = _args[15];
lean_object* v___y_1317_ = _args[16];
_start:
{
uint8_t v_danglingDot_boxed_1318_; lean_object* v_res_1319_; 
v_danglingDot_boxed_1318_ = lean_unbox(v_danglingDot_1304_);
v_res_1319_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(v___x_1301_, v_ctx_1302_, v_id_1303_, v_danglingDot_boxed_1318_, v_inst_1305_, v_R_1306_, v_a_1307_, v_b_1308_, v_c_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object* v_n_1320_){
_start:
{
if (lean_obj_tag(v_n_1320_) == 2)
{
lean_object* v_pre_1321_; lean_object* v_i_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; 
v_pre_1321_ = lean_ctor_get(v_n_1320_, 0);
v_i_1322_ = lean_ctor_get(v_n_1320_, 1);
v___x_1323_ = lean_unsigned_to_nat(0u);
v___x_1324_ = lean_nat_dec_eq(v_i_1322_, v___x_1323_);
if (v___x_1324_ == 0)
{
lean_inc_ref(v_n_1320_);
return v_n_1320_;
}
else
{
uint8_t v___x_1325_; 
v___x_1325_ = l___private_Lean_PrivateName_0__Lean_isPrivatePrefix_go(v_pre_1321_);
if (v___x_1325_ == 0)
{
lean_inc_ref(v_n_1320_);
return v_n_1320_;
}
else
{
lean_object* v___x_1326_; 
v___x_1326_ = lean_box(0);
return v___x_1326_;
}
}
}
else
{
lean_inc(v_n_1320_);
return v_n_1320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object* v_n_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_1327_);
lean_dec(v_n_1327_);
return v_res_1328_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object* v_n_u2081_1329_, lean_object* v_n_u2082_1330_){
_start:
{
lean_object* v_n_u2081_1331_; lean_object* v_n_u2082_1332_; 
v_n_u2081_1331_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2081_1329_);
lean_dec(v_n_u2081_1329_);
v_n_u2082_1332_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2082_1330_);
lean_dec(v_n_u2082_1330_);
switch(lean_obj_tag(v_n_u2081_1331_))
{
case 0:
{
if (lean_obj_tag(v_n_u2082_1332_) == 0)
{
uint8_t v___x_1333_; 
v___x_1333_ = 1;
return v___x_1333_;
}
else
{
uint8_t v___x_1334_; 
lean_dec(v_n_u2082_1332_);
v___x_1334_ = 0;
return v___x_1334_;
}
}
case 1:
{
if (lean_obj_tag(v_n_u2082_1332_) == 1)
{
lean_object* v_pre_1335_; lean_object* v_str_1336_; lean_object* v_pre_1337_; lean_object* v_str_1338_; uint8_t v___x_1339_; 
v_pre_1335_ = lean_ctor_get(v_n_u2081_1331_, 0);
lean_inc(v_pre_1335_);
v_str_1336_ = lean_ctor_get(v_n_u2081_1331_, 1);
lean_inc_ref(v_str_1336_);
lean_dec_ref_known(v_n_u2081_1331_, 2);
v_pre_1337_ = lean_ctor_get(v_n_u2082_1332_, 0);
lean_inc(v_pre_1337_);
v_str_1338_ = lean_ctor_get(v_n_u2082_1332_, 1);
lean_inc_ref(v_str_1338_);
lean_dec_ref_known(v_n_u2082_1332_, 2);
v___x_1339_ = lean_string_compare(v_str_1336_, v_str_1338_);
lean_dec_ref(v_str_1338_);
lean_dec_ref(v_str_1336_);
if (v___x_1339_ == 1)
{
v_n_u2081_1329_ = v_pre_1335_;
v_n_u2082_1330_ = v_pre_1337_;
goto _start;
}
else
{
lean_dec(v_pre_1337_);
lean_dec(v_pre_1335_);
return v___x_1339_;
}
}
else
{
uint8_t v___x_1341_; 
lean_dec_ref_known(v_n_u2081_1331_, 2);
lean_dec(v_n_u2082_1332_);
v___x_1341_ = 2;
return v___x_1341_;
}
}
default: 
{
switch(lean_obj_tag(v_n_u2082_1332_))
{
case 0:
{
uint8_t v___x_1342_; 
lean_dec_ref_known(v_n_u2081_1331_, 2);
v___x_1342_ = 2;
return v___x_1342_;
}
case 1:
{
uint8_t v___x_1343_; 
lean_dec_ref_known(v_n_u2082_1332_, 2);
lean_dec_ref_known(v_n_u2081_1331_, 2);
v___x_1343_ = 0;
return v___x_1343_;
}
default: 
{
lean_object* v_pre_1344_; lean_object* v_i_1345_; lean_object* v_pre_1346_; lean_object* v_i_1347_; uint8_t v___x_1348_; 
v_pre_1344_ = lean_ctor_get(v_n_u2081_1331_, 0);
lean_inc(v_pre_1344_);
v_i_1345_ = lean_ctor_get(v_n_u2081_1331_, 1);
lean_inc(v_i_1345_);
lean_dec_ref_known(v_n_u2081_1331_, 2);
v_pre_1346_ = lean_ctor_get(v_n_u2082_1332_, 0);
lean_inc(v_pre_1346_);
v_i_1347_ = lean_ctor_get(v_n_u2082_1332_, 1);
lean_inc(v_i_1347_);
lean_dec_ref_known(v_n_u2082_1332_, 2);
v___x_1348_ = lean_nat_dec_lt(v_i_1345_, v_i_1347_);
if (v___x_1348_ == 0)
{
uint8_t v___x_1349_; 
v___x_1349_ = lean_nat_dec_eq(v_i_1345_, v_i_1347_);
lean_dec(v_i_1347_);
lean_dec(v_i_1345_);
if (v___x_1349_ == 0)
{
uint8_t v___x_1350_; 
lean_dec(v_pre_1346_);
lean_dec(v_pre_1344_);
v___x_1350_ = 2;
return v___x_1350_;
}
else
{
v_n_u2081_1329_ = v_pre_1344_;
v_n_u2082_1330_ = v_pre_1346_;
goto _start;
}
}
else
{
uint8_t v___x_1352_; 
lean_dec(v_i_1347_);
lean_dec(v_pre_1346_);
lean_dec(v_i_1345_);
lean_dec(v_pre_1344_);
v___x_1352_ = 0;
return v___x_1352_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object* v_n_u2081_1353_, lean_object* v_n_u2082_1354_){
_start:
{
uint8_t v_res_1355_; lean_object* v_r_1356_; 
v_res_1355_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_n_u2081_1353_, v_n_u2082_1354_);
v_r_1356_ = lean_box(v_res_1355_);
return v_r_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object* v_names_1358_){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0));
v___x_1360_ = l_Std_TreeSet_ofArray___redArg(v_names_1358_, v___x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object* v_names_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_names_1361_);
lean_dec_ref(v_names_1361_);
return v_res_1362_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object* v_k_1363_, lean_object* v_t_1364_){
_start:
{
if (lean_obj_tag(v_t_1364_) == 0)
{
lean_object* v_k_1365_; lean_object* v_l_1366_; lean_object* v_r_1367_; uint8_t v___x_1368_; 
v_k_1365_ = lean_ctor_get(v_t_1364_, 1);
lean_inc(v_k_1365_);
v_l_1366_ = lean_ctor_get(v_t_1364_, 3);
lean_inc(v_l_1366_);
v_r_1367_ = lean_ctor_get(v_t_1364_, 4);
lean_inc(v_r_1367_);
lean_dec_ref_known(v_t_1364_, 5);
lean_inc(v_k_1363_);
v___x_1368_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1363_, v_k_1365_);
switch(v___x_1368_)
{
case 0:
{
lean_dec(v_r_1367_);
v_t_1364_ = v_l_1366_;
goto _start;
}
case 1:
{
uint8_t v___x_1370_; 
lean_dec(v_r_1367_);
lean_dec(v_l_1366_);
lean_dec(v_k_1363_);
v___x_1370_ = 1;
return v___x_1370_;
}
default: 
{
lean_dec(v_l_1366_);
v_t_1364_ = v_r_1367_;
goto _start;
}
}
}
else
{
uint8_t v___x_1372_; 
lean_dec(v_k_1363_);
v___x_1372_ = 0;
return v___x_1372_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object* v_k_1373_, lean_object* v_t_1374_){
_start:
{
uint8_t v_res_1375_; lean_object* v_r_1376_; 
v_res_1375_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1373_, v_t_1374_);
v_r_1376_ = lean_box(v_res_1375_);
return v_r_1376_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object* v_k_1377_, lean_object* v_v_1378_, lean_object* v_t_1379_){
_start:
{
if (lean_obj_tag(v_t_1379_) == 0)
{
lean_object* v_size_1380_; lean_object* v_k_1381_; lean_object* v_v_1382_; lean_object* v_l_1383_; lean_object* v_r_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1664_; 
v_size_1380_ = lean_ctor_get(v_t_1379_, 0);
v_k_1381_ = lean_ctor_get(v_t_1379_, 1);
v_v_1382_ = lean_ctor_get(v_t_1379_, 2);
v_l_1383_ = lean_ctor_get(v_t_1379_, 3);
v_r_1384_ = lean_ctor_get(v_t_1379_, 4);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_t_1379_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1386_ = v_t_1379_;
v_isShared_1387_ = v_isSharedCheck_1664_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_r_1384_);
lean_inc(v_l_1383_);
lean_inc(v_v_1382_);
lean_inc(v_k_1381_);
lean_inc(v_size_1380_);
lean_dec(v_t_1379_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1664_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
uint8_t v___x_1388_; 
lean_inc(v_k_1381_);
lean_inc(v_k_1377_);
v___x_1388_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1377_, v_k_1381_);
switch(v___x_1388_)
{
case 0:
{
lean_object* v_impl_1389_; lean_object* v___x_1390_; 
lean_dec(v_size_1380_);
v_impl_1389_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1377_, v_v_1378_, v_l_1383_);
v___x_1390_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1384_) == 0)
{
lean_object* v_size_1391_; lean_object* v_size_1392_; lean_object* v_k_1393_; lean_object* v_v_1394_; lean_object* v_l_1395_; lean_object* v_r_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v_size_1391_ = lean_ctor_get(v_r_1384_, 0);
v_size_1392_ = lean_ctor_get(v_impl_1389_, 0);
v_k_1393_ = lean_ctor_get(v_impl_1389_, 1);
v_v_1394_ = lean_ctor_get(v_impl_1389_, 2);
v_l_1395_ = lean_ctor_get(v_impl_1389_, 3);
v_r_1396_ = lean_ctor_get(v_impl_1389_, 4);
lean_inc(v_r_1396_);
v___x_1397_ = lean_unsigned_to_nat(3u);
v___x_1398_ = lean_nat_mul(v___x_1397_, v_size_1391_);
v___x_1399_ = lean_nat_dec_lt(v___x_1398_, v_size_1392_);
lean_dec(v___x_1398_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1403_; 
lean_dec(v_r_1396_);
v___x_1400_ = lean_nat_add(v___x_1390_, v_size_1392_);
v___x_1401_ = lean_nat_add(v___x_1400_, v_size_1391_);
lean_dec(v___x_1400_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 3, v_impl_1389_);
lean_ctor_set(v___x_1386_, 0, v___x_1401_);
v___x_1403_ = v___x_1386_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1404_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1404_, 3, v_impl_1389_);
lean_ctor_set(v_reuseFailAlloc_1404_, 4, v_r_1384_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
else
{
lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1470_; 
lean_inc(v_l_1395_);
lean_inc(v_v_1394_);
lean_inc(v_k_1393_);
lean_inc(v_size_1392_);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_impl_1389_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; lean_object* v_unused_1472_; lean_object* v_unused_1473_; lean_object* v_unused_1474_; lean_object* v_unused_1475_; 
v_unused_1471_ = lean_ctor_get(v_impl_1389_, 4);
lean_dec(v_unused_1471_);
v_unused_1472_ = lean_ctor_get(v_impl_1389_, 3);
lean_dec(v_unused_1472_);
v_unused_1473_ = lean_ctor_get(v_impl_1389_, 2);
lean_dec(v_unused_1473_);
v_unused_1474_ = lean_ctor_get(v_impl_1389_, 1);
lean_dec(v_unused_1474_);
v_unused_1475_ = lean_ctor_get(v_impl_1389_, 0);
lean_dec(v_unused_1475_);
v___x_1406_ = v_impl_1389_;
v_isShared_1407_ = v_isSharedCheck_1470_;
goto v_resetjp_1405_;
}
else
{
lean_dec(v_impl_1389_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1470_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v_size_1408_; lean_object* v_size_1409_; lean_object* v_k_1410_; lean_object* v_v_1411_; lean_object* v_l_1412_; lean_object* v_r_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; 
v_size_1408_ = lean_ctor_get(v_l_1395_, 0);
v_size_1409_ = lean_ctor_get(v_r_1396_, 0);
v_k_1410_ = lean_ctor_get(v_r_1396_, 1);
v_v_1411_ = lean_ctor_get(v_r_1396_, 2);
v_l_1412_ = lean_ctor_get(v_r_1396_, 3);
v_r_1413_ = lean_ctor_get(v_r_1396_, 4);
v___x_1414_ = lean_unsigned_to_nat(2u);
v___x_1415_ = lean_nat_mul(v___x_1414_, v_size_1408_);
v___x_1416_ = lean_nat_dec_lt(v_size_1409_, v___x_1415_);
lean_dec(v___x_1415_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1445_; 
lean_inc(v_r_1413_);
lean_inc(v_l_1412_);
lean_inc(v_v_1411_);
lean_inc(v_k_1410_);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_r_1396_);
if (v_isSharedCheck_1445_ == 0)
{
lean_object* v_unused_1446_; lean_object* v_unused_1447_; lean_object* v_unused_1448_; lean_object* v_unused_1449_; lean_object* v_unused_1450_; 
v_unused_1446_ = lean_ctor_get(v_r_1396_, 4);
lean_dec(v_unused_1446_);
v_unused_1447_ = lean_ctor_get(v_r_1396_, 3);
lean_dec(v_unused_1447_);
v_unused_1448_ = lean_ctor_get(v_r_1396_, 2);
lean_dec(v_unused_1448_);
v_unused_1449_ = lean_ctor_get(v_r_1396_, 1);
lean_dec(v_unused_1449_);
v_unused_1450_ = lean_ctor_get(v_r_1396_, 0);
lean_dec(v_unused_1450_);
v___x_1418_ = v_r_1396_;
v_isShared_1419_ = v_isSharedCheck_1445_;
goto v_resetjp_1417_;
}
else
{
lean_dec(v_r_1396_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1445_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___x_1433_; lean_object* v___y_1435_; 
v___x_1420_ = lean_nat_add(v___x_1390_, v_size_1392_);
lean_dec(v_size_1392_);
v___x_1421_ = lean_nat_add(v___x_1420_, v_size_1391_);
lean_dec(v___x_1420_);
v___x_1433_ = lean_nat_add(v___x_1390_, v_size_1408_);
if (lean_obj_tag(v_l_1412_) == 0)
{
lean_object* v_size_1443_; 
v_size_1443_ = lean_ctor_get(v_l_1412_, 0);
lean_inc(v_size_1443_);
v___y_1435_ = v_size_1443_;
goto v___jp_1434_;
}
else
{
lean_object* v___x_1444_; 
v___x_1444_ = lean_unsigned_to_nat(0u);
v___y_1435_ = v___x_1444_;
goto v___jp_1434_;
}
v___jp_1422_:
{
lean_object* v___x_1426_; lean_object* v___x_1428_; 
v___x_1426_ = lean_nat_add(v___y_1424_, v___y_1425_);
lean_dec(v___y_1425_);
lean_dec(v___y_1424_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 4, v_r_1384_);
lean_ctor_set(v___x_1418_, 3, v_r_1413_);
lean_ctor_set(v___x_1418_, 2, v_v_1382_);
lean_ctor_set(v___x_1418_, 1, v_k_1381_);
lean_ctor_set(v___x_1418_, 0, v___x_1426_);
v___x_1428_ = v___x_1418_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1426_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1432_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1432_, 3, v_r_1413_);
lean_ctor_set(v_reuseFailAlloc_1432_, 4, v_r_1384_);
v___x_1428_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
lean_object* v___x_1430_; 
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 4, v___x_1428_);
lean_ctor_set(v___x_1406_, 3, v___y_1423_);
lean_ctor_set(v___x_1406_, 2, v_v_1411_);
lean_ctor_set(v___x_1406_, 1, v_k_1410_);
lean_ctor_set(v___x_1406_, 0, v___x_1421_);
v___x_1430_ = v___x_1406_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1421_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v_k_1410_);
lean_ctor_set(v_reuseFailAlloc_1431_, 2, v_v_1411_);
lean_ctor_set(v_reuseFailAlloc_1431_, 3, v___y_1423_);
lean_ctor_set(v_reuseFailAlloc_1431_, 4, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
v___jp_1434_:
{
lean_object* v___x_1436_; lean_object* v___x_1438_; 
v___x_1436_ = lean_nat_add(v___x_1433_, v___y_1435_);
lean_dec(v___y_1435_);
lean_dec(v___x_1433_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v_l_1412_);
lean_ctor_set(v___x_1386_, 3, v_l_1395_);
lean_ctor_set(v___x_1386_, 2, v_v_1394_);
lean_ctor_set(v___x_1386_, 1, v_k_1393_);
lean_ctor_set(v___x_1386_, 0, v___x_1436_);
v___x_1438_ = v___x_1386_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_k_1393_);
lean_ctor_set(v_reuseFailAlloc_1442_, 2, v_v_1394_);
lean_ctor_set(v_reuseFailAlloc_1442_, 3, v_l_1395_);
lean_ctor_set(v_reuseFailAlloc_1442_, 4, v_l_1412_);
v___x_1438_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_nat_add(v___x_1390_, v_size_1391_);
if (lean_obj_tag(v_r_1413_) == 0)
{
lean_object* v_size_1440_; 
v_size_1440_ = lean_ctor_get(v_r_1413_, 0);
lean_inc(v_size_1440_);
v___y_1423_ = v___x_1438_;
v___y_1424_ = v___x_1439_;
v___y_1425_ = v_size_1440_;
goto v___jp_1422_;
}
else
{
lean_object* v___x_1441_; 
v___x_1441_ = lean_unsigned_to_nat(0u);
v___y_1423_ = v___x_1438_;
v___y_1424_ = v___x_1439_;
v___y_1425_ = v___x_1441_;
goto v___jp_1422_;
}
}
}
}
}
else
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1456_; 
lean_del_object(v___x_1386_);
v___x_1451_ = lean_nat_add(v___x_1390_, v_size_1392_);
lean_dec(v_size_1392_);
v___x_1452_ = lean_nat_add(v___x_1451_, v_size_1391_);
lean_dec(v___x_1451_);
v___x_1453_ = lean_nat_add(v___x_1390_, v_size_1391_);
v___x_1454_ = lean_nat_add(v___x_1453_, v_size_1409_);
lean_dec(v___x_1453_);
lean_inc_ref(v_r_1384_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 4, v_r_1384_);
lean_ctor_set(v___x_1406_, 3, v_r_1396_);
lean_ctor_set(v___x_1406_, 2, v_v_1382_);
lean_ctor_set(v___x_1406_, 1, v_k_1381_);
lean_ctor_set(v___x_1406_, 0, v___x_1454_);
v___x_1456_ = v___x_1406_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1454_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1469_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1469_, 3, v_r_1396_);
lean_ctor_set(v_reuseFailAlloc_1469_, 4, v_r_1384_);
v___x_1456_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
v_isSharedCheck_1463_ = !lean_is_exclusive(v_r_1384_);
if (v_isSharedCheck_1463_ == 0)
{
lean_object* v_unused_1464_; lean_object* v_unused_1465_; lean_object* v_unused_1466_; lean_object* v_unused_1467_; lean_object* v_unused_1468_; 
v_unused_1464_ = lean_ctor_get(v_r_1384_, 4);
lean_dec(v_unused_1464_);
v_unused_1465_ = lean_ctor_get(v_r_1384_, 3);
lean_dec(v_unused_1465_);
v_unused_1466_ = lean_ctor_get(v_r_1384_, 2);
lean_dec(v_unused_1466_);
v_unused_1467_ = lean_ctor_get(v_r_1384_, 1);
lean_dec(v_unused_1467_);
v_unused_1468_ = lean_ctor_get(v_r_1384_, 0);
lean_dec(v_unused_1468_);
v___x_1458_ = v_r_1384_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_dec(v_r_1384_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 4, v___x_1456_);
lean_ctor_set(v___x_1458_, 3, v_l_1395_);
lean_ctor_set(v___x_1458_, 2, v_v_1394_);
lean_ctor_set(v___x_1458_, 1, v_k_1393_);
lean_ctor_set(v___x_1458_, 0, v___x_1452_);
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1452_);
lean_ctor_set(v_reuseFailAlloc_1462_, 1, v_k_1393_);
lean_ctor_set(v_reuseFailAlloc_1462_, 2, v_v_1394_);
lean_ctor_set(v_reuseFailAlloc_1462_, 3, v_l_1395_);
lean_ctor_set(v_reuseFailAlloc_1462_, 4, v___x_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1476_; 
v_l_1476_ = lean_ctor_get(v_impl_1389_, 3);
if (lean_obj_tag(v_l_1476_) == 0)
{
lean_object* v_r_1477_; lean_object* v_k_1478_; lean_object* v_v_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1490_; 
lean_inc_ref(v_l_1476_);
v_r_1477_ = lean_ctor_get(v_impl_1389_, 4);
v_k_1478_ = lean_ctor_get(v_impl_1389_, 1);
v_v_1479_ = lean_ctor_get(v_impl_1389_, 2);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_impl_1389_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; lean_object* v_unused_1492_; 
v_unused_1491_ = lean_ctor_get(v_impl_1389_, 3);
lean_dec(v_unused_1491_);
v_unused_1492_ = lean_ctor_get(v_impl_1389_, 0);
lean_dec(v_unused_1492_);
v___x_1481_ = v_impl_1389_;
v_isShared_1482_ = v_isSharedCheck_1490_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_r_1477_);
lean_inc(v_v_1479_);
lean_inc(v_k_1478_);
lean_dec(v_impl_1389_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1490_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; lean_object* v___x_1485_; 
v___x_1483_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1477_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 3, v_r_1477_);
lean_ctor_set(v___x_1481_, 2, v_v_1382_);
lean_ctor_set(v___x_1481_, 1, v_k_1381_);
lean_ctor_set(v___x_1481_, 0, v___x_1390_);
v___x_1485_ = v___x_1481_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1489_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1489_, 3, v_r_1477_);
lean_ctor_set(v_reuseFailAlloc_1489_, 4, v_r_1477_);
v___x_1485_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_object* v___x_1487_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v___x_1485_);
lean_ctor_set(v___x_1386_, 3, v_l_1476_);
lean_ctor_set(v___x_1386_, 2, v_v_1479_);
lean_ctor_set(v___x_1386_, 1, v_k_1478_);
lean_ctor_set(v___x_1386_, 0, v___x_1483_);
v___x_1487_ = v___x_1386_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1483_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v_k_1478_);
lean_ctor_set(v_reuseFailAlloc_1488_, 2, v_v_1479_);
lean_ctor_set(v_reuseFailAlloc_1488_, 3, v_l_1476_);
lean_ctor_set(v_reuseFailAlloc_1488_, 4, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
else
{
lean_object* v_r_1493_; 
v_r_1493_ = lean_ctor_get(v_impl_1389_, 4);
lean_inc(v_r_1493_);
if (lean_obj_tag(v_r_1493_) == 0)
{
lean_object* v_k_1494_; lean_object* v_v_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1518_; 
lean_inc(v_l_1476_);
v_k_1494_ = lean_ctor_get(v_impl_1389_, 1);
v_v_1495_ = lean_ctor_get(v_impl_1389_, 2);
v_isSharedCheck_1518_ = !lean_is_exclusive(v_impl_1389_);
if (v_isSharedCheck_1518_ == 0)
{
lean_object* v_unused_1519_; lean_object* v_unused_1520_; lean_object* v_unused_1521_; 
v_unused_1519_ = lean_ctor_get(v_impl_1389_, 4);
lean_dec(v_unused_1519_);
v_unused_1520_ = lean_ctor_get(v_impl_1389_, 3);
lean_dec(v_unused_1520_);
v_unused_1521_ = lean_ctor_get(v_impl_1389_, 0);
lean_dec(v_unused_1521_);
v___x_1497_ = v_impl_1389_;
v_isShared_1498_ = v_isSharedCheck_1518_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_v_1495_);
lean_inc(v_k_1494_);
lean_dec(v_impl_1389_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1518_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v_k_1499_; lean_object* v_v_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1514_; 
v_k_1499_ = lean_ctor_get(v_r_1493_, 1);
v_v_1500_ = lean_ctor_get(v_r_1493_, 2);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_r_1493_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; lean_object* v_unused_1516_; lean_object* v_unused_1517_; 
v_unused_1515_ = lean_ctor_get(v_r_1493_, 4);
lean_dec(v_unused_1515_);
v_unused_1516_ = lean_ctor_get(v_r_1493_, 3);
lean_dec(v_unused_1516_);
v_unused_1517_ = lean_ctor_get(v_r_1493_, 0);
lean_dec(v_unused_1517_);
v___x_1502_ = v_r_1493_;
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_v_1500_);
lean_inc(v_k_1499_);
lean_dec(v_r_1493_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1506_; 
v___x_1504_ = lean_unsigned_to_nat(3u);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 4, v_l_1476_);
lean_ctor_set(v___x_1502_, 3, v_l_1476_);
lean_ctor_set(v___x_1502_, 2, v_v_1495_);
lean_ctor_set(v___x_1502_, 1, v_k_1494_);
lean_ctor_set(v___x_1502_, 0, v___x_1390_);
v___x_1506_ = v___x_1502_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v_k_1494_);
lean_ctor_set(v_reuseFailAlloc_1513_, 2, v_v_1495_);
lean_ctor_set(v_reuseFailAlloc_1513_, 3, v_l_1476_);
lean_ctor_set(v_reuseFailAlloc_1513_, 4, v_l_1476_);
v___x_1506_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
lean_object* v___x_1508_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 4, v_l_1476_);
lean_ctor_set(v___x_1497_, 2, v_v_1382_);
lean_ctor_set(v___x_1497_, 1, v_k_1381_);
lean_ctor_set(v___x_1497_, 0, v___x_1390_);
v___x_1508_ = v___x_1497_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1512_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1512_, 3, v_l_1476_);
lean_ctor_set(v_reuseFailAlloc_1512_, 4, v_l_1476_);
v___x_1508_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
lean_object* v___x_1510_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v___x_1508_);
lean_ctor_set(v___x_1386_, 3, v___x_1506_);
lean_ctor_set(v___x_1386_, 2, v_v_1500_);
lean_ctor_set(v___x_1386_, 1, v_k_1499_);
lean_ctor_set(v___x_1386_, 0, v___x_1504_);
v___x_1510_ = v___x_1386_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1504_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_k_1499_);
lean_ctor_set(v_reuseFailAlloc_1511_, 2, v_v_1500_);
lean_ctor_set(v_reuseFailAlloc_1511_, 3, v___x_1506_);
lean_ctor_set(v_reuseFailAlloc_1511_, 4, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1524_; 
v___x_1522_ = lean_unsigned_to_nat(2u);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v_r_1493_);
lean_ctor_set(v___x_1386_, 3, v_impl_1389_);
lean_ctor_set(v___x_1386_, 0, v___x_1522_);
v___x_1524_ = v___x_1386_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1522_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1525_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1525_, 3, v_impl_1389_);
lean_ctor_set(v_reuseFailAlloc_1525_, 4, v_r_1493_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1527_; 
lean_dec(v_v_1382_);
lean_dec(v_k_1381_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 2, v_v_1378_);
lean_ctor_set(v___x_1386_, 1, v_k_1377_);
v___x_1527_ = v___x_1386_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_size_1380_);
lean_ctor_set(v_reuseFailAlloc_1528_, 1, v_k_1377_);
lean_ctor_set(v_reuseFailAlloc_1528_, 2, v_v_1378_);
lean_ctor_set(v_reuseFailAlloc_1528_, 3, v_l_1383_);
lean_ctor_set(v_reuseFailAlloc_1528_, 4, v_r_1384_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
default: 
{
lean_object* v_impl_1529_; lean_object* v___x_1530_; 
lean_dec(v_size_1380_);
v_impl_1529_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1377_, v_v_1378_, v_r_1384_);
v___x_1530_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1383_) == 0)
{
lean_object* v_size_1531_; lean_object* v_size_1532_; lean_object* v_k_1533_; lean_object* v_v_1534_; lean_object* v_l_1535_; lean_object* v_r_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; uint8_t v___x_1539_; 
v_size_1531_ = lean_ctor_get(v_l_1383_, 0);
v_size_1532_ = lean_ctor_get(v_impl_1529_, 0);
v_k_1533_ = lean_ctor_get(v_impl_1529_, 1);
v_v_1534_ = lean_ctor_get(v_impl_1529_, 2);
v_l_1535_ = lean_ctor_get(v_impl_1529_, 3);
lean_inc(v_l_1535_);
v_r_1536_ = lean_ctor_get(v_impl_1529_, 4);
v___x_1537_ = lean_unsigned_to_nat(3u);
v___x_1538_ = lean_nat_mul(v___x_1537_, v_size_1531_);
v___x_1539_ = lean_nat_dec_lt(v___x_1538_, v_size_1532_);
lean_dec(v___x_1538_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1543_; 
lean_dec(v_l_1535_);
v___x_1540_ = lean_nat_add(v___x_1530_, v_size_1531_);
v___x_1541_ = lean_nat_add(v___x_1540_, v_size_1532_);
lean_dec(v___x_1540_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v_impl_1529_);
lean_ctor_set(v___x_1386_, 0, v___x_1541_);
v___x_1543_ = v___x_1386_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1544_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1544_, 3, v_l_1383_);
lean_ctor_set(v_reuseFailAlloc_1544_, 4, v_impl_1529_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
else
{
lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1608_; 
lean_inc(v_r_1536_);
lean_inc(v_v_1534_);
lean_inc(v_k_1533_);
lean_inc(v_size_1532_);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_impl_1529_);
if (v_isSharedCheck_1608_ == 0)
{
lean_object* v_unused_1609_; lean_object* v_unused_1610_; lean_object* v_unused_1611_; lean_object* v_unused_1612_; lean_object* v_unused_1613_; 
v_unused_1609_ = lean_ctor_get(v_impl_1529_, 4);
lean_dec(v_unused_1609_);
v_unused_1610_ = lean_ctor_get(v_impl_1529_, 3);
lean_dec(v_unused_1610_);
v_unused_1611_ = lean_ctor_get(v_impl_1529_, 2);
lean_dec(v_unused_1611_);
v_unused_1612_ = lean_ctor_get(v_impl_1529_, 1);
lean_dec(v_unused_1612_);
v_unused_1613_ = lean_ctor_get(v_impl_1529_, 0);
lean_dec(v_unused_1613_);
v___x_1546_ = v_impl_1529_;
v_isShared_1547_ = v_isSharedCheck_1608_;
goto v_resetjp_1545_;
}
else
{
lean_dec(v_impl_1529_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1608_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v_size_1548_; lean_object* v_k_1549_; lean_object* v_v_1550_; lean_object* v_l_1551_; lean_object* v_r_1552_; lean_object* v_size_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; uint8_t v___x_1556_; 
v_size_1548_ = lean_ctor_get(v_l_1535_, 0);
v_k_1549_ = lean_ctor_get(v_l_1535_, 1);
v_v_1550_ = lean_ctor_get(v_l_1535_, 2);
v_l_1551_ = lean_ctor_get(v_l_1535_, 3);
v_r_1552_ = lean_ctor_get(v_l_1535_, 4);
v_size_1553_ = lean_ctor_get(v_r_1536_, 0);
v___x_1554_ = lean_unsigned_to_nat(2u);
v___x_1555_ = lean_nat_mul(v___x_1554_, v_size_1553_);
v___x_1556_ = lean_nat_dec_lt(v_size_1548_, v___x_1555_);
lean_dec(v___x_1555_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1584_; 
lean_inc(v_r_1552_);
lean_inc(v_l_1551_);
lean_inc(v_v_1550_);
lean_inc(v_k_1549_);
v_isSharedCheck_1584_ = !lean_is_exclusive(v_l_1535_);
if (v_isSharedCheck_1584_ == 0)
{
lean_object* v_unused_1585_; lean_object* v_unused_1586_; lean_object* v_unused_1587_; lean_object* v_unused_1588_; lean_object* v_unused_1589_; 
v_unused_1585_ = lean_ctor_get(v_l_1535_, 4);
lean_dec(v_unused_1585_);
v_unused_1586_ = lean_ctor_get(v_l_1535_, 3);
lean_dec(v_unused_1586_);
v_unused_1587_ = lean_ctor_get(v_l_1535_, 2);
lean_dec(v_unused_1587_);
v_unused_1588_ = lean_ctor_get(v_l_1535_, 1);
lean_dec(v_unused_1588_);
v_unused_1589_ = lean_ctor_get(v_l_1535_, 0);
lean_dec(v_unused_1589_);
v___x_1558_ = v_l_1535_;
v_isShared_1559_ = v_isSharedCheck_1584_;
goto v_resetjp_1557_;
}
else
{
lean_dec(v_l_1535_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1584_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1574_; 
v___x_1560_ = lean_nat_add(v___x_1530_, v_size_1531_);
v___x_1561_ = lean_nat_add(v___x_1560_, v_size_1532_);
lean_dec(v_size_1532_);
if (lean_obj_tag(v_l_1551_) == 0)
{
lean_object* v_size_1582_; 
v_size_1582_ = lean_ctor_get(v_l_1551_, 0);
lean_inc(v_size_1582_);
v___y_1574_ = v_size_1582_;
goto v___jp_1573_;
}
else
{
lean_object* v___x_1583_; 
v___x_1583_ = lean_unsigned_to_nat(0u);
v___y_1574_ = v___x_1583_;
goto v___jp_1573_;
}
v___jp_1562_:
{
lean_object* v___x_1566_; lean_object* v___x_1568_; 
v___x_1566_ = lean_nat_add(v___y_1563_, v___y_1565_);
lean_dec(v___y_1565_);
lean_dec(v___y_1563_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 4, v_r_1536_);
lean_ctor_set(v___x_1558_, 3, v_r_1552_);
lean_ctor_set(v___x_1558_, 2, v_v_1534_);
lean_ctor_set(v___x_1558_, 1, v_k_1533_);
lean_ctor_set(v___x_1558_, 0, v___x_1566_);
v___x_1568_ = v___x_1558_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v_k_1533_);
lean_ctor_set(v_reuseFailAlloc_1572_, 2, v_v_1534_);
lean_ctor_set(v_reuseFailAlloc_1572_, 3, v_r_1552_);
lean_ctor_set(v_reuseFailAlloc_1572_, 4, v_r_1536_);
v___x_1568_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___x_1570_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v___x_1568_);
lean_ctor_set(v___x_1546_, 3, v___y_1564_);
lean_ctor_set(v___x_1546_, 2, v_v_1550_);
lean_ctor_set(v___x_1546_, 1, v_k_1549_);
lean_ctor_set(v___x_1546_, 0, v___x_1561_);
v___x_1570_ = v___x_1546_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v_k_1549_);
lean_ctor_set(v_reuseFailAlloc_1571_, 2, v_v_1550_);
lean_ctor_set(v_reuseFailAlloc_1571_, 3, v___y_1564_);
lean_ctor_set(v_reuseFailAlloc_1571_, 4, v___x_1568_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
v___jp_1573_:
{
lean_object* v___x_1575_; lean_object* v___x_1577_; 
v___x_1575_ = lean_nat_add(v___x_1560_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec(v___x_1560_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v_l_1551_);
lean_ctor_set(v___x_1386_, 0, v___x_1575_);
v___x_1577_ = v___x_1386_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1575_);
lean_ctor_set(v_reuseFailAlloc_1581_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1581_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1581_, 3, v_l_1383_);
lean_ctor_set(v_reuseFailAlloc_1581_, 4, v_l_1551_);
v___x_1577_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_nat_add(v___x_1530_, v_size_1553_);
if (lean_obj_tag(v_r_1552_) == 0)
{
lean_object* v_size_1579_; 
v_size_1579_ = lean_ctor_get(v_r_1552_, 0);
lean_inc(v_size_1579_);
v___y_1563_ = v___x_1578_;
v___y_1564_ = v___x_1577_;
v___y_1565_ = v_size_1579_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_unsigned_to_nat(0u);
v___y_1563_ = v___x_1578_;
v___y_1564_ = v___x_1577_;
v___y_1565_ = v___x_1580_;
goto v___jp_1562_;
}
}
}
}
}
else
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
lean_del_object(v___x_1386_);
v___x_1590_ = lean_nat_add(v___x_1530_, v_size_1531_);
v___x_1591_ = lean_nat_add(v___x_1590_, v_size_1532_);
lean_dec(v_size_1532_);
v___x_1592_ = lean_nat_add(v___x_1590_, v_size_1548_);
lean_dec(v___x_1590_);
lean_inc_ref(v_l_1383_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v_l_1535_);
lean_ctor_set(v___x_1546_, 3, v_l_1383_);
lean_ctor_set(v___x_1546_, 2, v_v_1382_);
lean_ctor_set(v___x_1546_, 1, v_k_1381_);
lean_ctor_set(v___x_1546_, 0, v___x_1592_);
v___x_1594_ = v___x_1546_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1592_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1607_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1607_, 3, v_l_1383_);
lean_ctor_set(v_reuseFailAlloc_1607_, 4, v_l_1535_);
v___x_1594_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
v_isSharedCheck_1601_ = !lean_is_exclusive(v_l_1383_);
if (v_isSharedCheck_1601_ == 0)
{
lean_object* v_unused_1602_; lean_object* v_unused_1603_; lean_object* v_unused_1604_; lean_object* v_unused_1605_; lean_object* v_unused_1606_; 
v_unused_1602_ = lean_ctor_get(v_l_1383_, 4);
lean_dec(v_unused_1602_);
v_unused_1603_ = lean_ctor_get(v_l_1383_, 3);
lean_dec(v_unused_1603_);
v_unused_1604_ = lean_ctor_get(v_l_1383_, 2);
lean_dec(v_unused_1604_);
v_unused_1605_ = lean_ctor_get(v_l_1383_, 1);
lean_dec(v_unused_1605_);
v_unused_1606_ = lean_ctor_get(v_l_1383_, 0);
lean_dec(v_unused_1606_);
v___x_1596_ = v_l_1383_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_dec(v_l_1383_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 4, v_r_1536_);
lean_ctor_set(v___x_1596_, 3, v___x_1594_);
lean_ctor_set(v___x_1596_, 2, v_v_1534_);
lean_ctor_set(v___x_1596_, 1, v_k_1533_);
lean_ctor_set(v___x_1596_, 0, v___x_1591_);
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v_k_1533_);
lean_ctor_set(v_reuseFailAlloc_1600_, 2, v_v_1534_);
lean_ctor_set(v_reuseFailAlloc_1600_, 3, v___x_1594_);
lean_ctor_set(v_reuseFailAlloc_1600_, 4, v_r_1536_);
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
}
}
else
{
lean_object* v_l_1614_; 
v_l_1614_ = lean_ctor_get(v_impl_1529_, 3);
lean_inc(v_l_1614_);
if (lean_obj_tag(v_l_1614_) == 0)
{
lean_object* v_r_1615_; lean_object* v_k_1616_; lean_object* v_v_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1640_; 
v_r_1615_ = lean_ctor_get(v_impl_1529_, 4);
v_k_1616_ = lean_ctor_get(v_impl_1529_, 1);
v_v_1617_ = lean_ctor_get(v_impl_1529_, 2);
v_isSharedCheck_1640_ = !lean_is_exclusive(v_impl_1529_);
if (v_isSharedCheck_1640_ == 0)
{
lean_object* v_unused_1641_; lean_object* v_unused_1642_; 
v_unused_1641_ = lean_ctor_get(v_impl_1529_, 3);
lean_dec(v_unused_1641_);
v_unused_1642_ = lean_ctor_get(v_impl_1529_, 0);
lean_dec(v_unused_1642_);
v___x_1619_ = v_impl_1529_;
v_isShared_1620_ = v_isSharedCheck_1640_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_r_1615_);
lean_inc(v_v_1617_);
lean_inc(v_k_1616_);
lean_dec(v_impl_1529_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1640_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v_k_1621_; lean_object* v_v_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1636_; 
v_k_1621_ = lean_ctor_get(v_l_1614_, 1);
v_v_1622_ = lean_ctor_get(v_l_1614_, 2);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_l_1614_);
if (v_isSharedCheck_1636_ == 0)
{
lean_object* v_unused_1637_; lean_object* v_unused_1638_; lean_object* v_unused_1639_; 
v_unused_1637_ = lean_ctor_get(v_l_1614_, 4);
lean_dec(v_unused_1637_);
v_unused_1638_ = lean_ctor_get(v_l_1614_, 3);
lean_dec(v_unused_1638_);
v_unused_1639_ = lean_ctor_get(v_l_1614_, 0);
lean_dec(v_unused_1639_);
v___x_1624_ = v_l_1614_;
v_isShared_1625_ = v_isSharedCheck_1636_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_v_1622_);
lean_inc(v_k_1621_);
lean_dec(v_l_1614_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1636_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1628_; 
v___x_1626_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1615_, 2);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 4, v_r_1615_);
lean_ctor_set(v___x_1624_, 3, v_r_1615_);
lean_ctor_set(v___x_1624_, 2, v_v_1382_);
lean_ctor_set(v___x_1624_, 1, v_k_1381_);
lean_ctor_set(v___x_1624_, 0, v___x_1530_);
v___x_1628_ = v___x_1624_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1635_, 3, v_r_1615_);
lean_ctor_set(v_reuseFailAlloc_1635_, 4, v_r_1615_);
v___x_1628_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
lean_object* v___x_1630_; 
lean_inc(v_r_1615_);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 3, v_r_1615_);
lean_ctor_set(v___x_1619_, 0, v___x_1530_);
v___x_1630_ = v___x_1619_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_k_1616_);
lean_ctor_set(v_reuseFailAlloc_1634_, 2, v_v_1617_);
lean_ctor_set(v_reuseFailAlloc_1634_, 3, v_r_1615_);
lean_ctor_set(v_reuseFailAlloc_1634_, 4, v_r_1615_);
v___x_1630_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
lean_object* v___x_1632_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v___x_1630_);
lean_ctor_set(v___x_1386_, 3, v___x_1628_);
lean_ctor_set(v___x_1386_, 2, v_v_1622_);
lean_ctor_set(v___x_1386_, 1, v_k_1621_);
lean_ctor_set(v___x_1386_, 0, v___x_1626_);
v___x_1632_ = v___x_1386_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1626_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_k_1621_);
lean_ctor_set(v_reuseFailAlloc_1633_, 2, v_v_1622_);
lean_ctor_set(v_reuseFailAlloc_1633_, 3, v___x_1628_);
lean_ctor_set(v_reuseFailAlloc_1633_, 4, v___x_1630_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
}
else
{
lean_object* v_r_1643_; 
v_r_1643_ = lean_ctor_get(v_impl_1529_, 4);
lean_inc(v_r_1643_);
if (lean_obj_tag(v_r_1643_) == 0)
{
lean_object* v_k_1644_; lean_object* v_v_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1656_; 
v_k_1644_ = lean_ctor_get(v_impl_1529_, 1);
v_v_1645_ = lean_ctor_get(v_impl_1529_, 2);
v_isSharedCheck_1656_ = !lean_is_exclusive(v_impl_1529_);
if (v_isSharedCheck_1656_ == 0)
{
lean_object* v_unused_1657_; lean_object* v_unused_1658_; lean_object* v_unused_1659_; 
v_unused_1657_ = lean_ctor_get(v_impl_1529_, 4);
lean_dec(v_unused_1657_);
v_unused_1658_ = lean_ctor_get(v_impl_1529_, 3);
lean_dec(v_unused_1658_);
v_unused_1659_ = lean_ctor_get(v_impl_1529_, 0);
lean_dec(v_unused_1659_);
v___x_1647_ = v_impl_1529_;
v_isShared_1648_ = v_isSharedCheck_1656_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_v_1645_);
lean_inc(v_k_1644_);
lean_dec(v_impl_1529_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1656_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1649_ = lean_unsigned_to_nat(3u);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 4, v_l_1614_);
lean_ctor_set(v___x_1647_, 2, v_v_1382_);
lean_ctor_set(v___x_1647_, 1, v_k_1381_);
lean_ctor_set(v___x_1647_, 0, v___x_1530_);
v___x_1651_ = v___x_1647_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1655_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1655_, 3, v_l_1614_);
lean_ctor_set(v_reuseFailAlloc_1655_, 4, v_l_1614_);
v___x_1651_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1653_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v_r_1643_);
lean_ctor_set(v___x_1386_, 3, v___x_1651_);
lean_ctor_set(v___x_1386_, 2, v_v_1645_);
lean_ctor_set(v___x_1386_, 1, v_k_1644_);
lean_ctor_set(v___x_1386_, 0, v___x_1649_);
v___x_1653_ = v___x_1386_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v___x_1649_);
lean_ctor_set(v_reuseFailAlloc_1654_, 1, v_k_1644_);
lean_ctor_set(v_reuseFailAlloc_1654_, 2, v_v_1645_);
lean_ctor_set(v_reuseFailAlloc_1654_, 3, v___x_1651_);
lean_ctor_set(v_reuseFailAlloc_1654_, 4, v_r_1643_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
else
{
lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1660_ = lean_unsigned_to_nat(2u);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 4, v_impl_1529_);
lean_ctor_set(v___x_1386_, 3, v_r_1643_);
lean_ctor_set(v___x_1386_, 0, v___x_1660_);
v___x_1662_ = v___x_1386_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1663_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1663_, 3, v_r_1643_);
lean_ctor_set(v_reuseFailAlloc_1663_, 4, v_impl_1529_);
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
}
}
}
else
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = lean_unsigned_to_nat(1u);
v___x_1666_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
lean_ctor_set(v___x_1666_, 1, v_k_1377_);
lean_ctor_set(v___x_1666_, 2, v_v_1378_);
lean_ctor_set(v___x_1666_, 3, v_t_1379_);
lean_ctor_set(v___x_1666_, 4, v_t_1379_);
return v___x_1666_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object* v_as_1667_, size_t v_sz_1668_, size_t v_i_1669_, lean_object* v_b_1670_){
_start:
{
lean_object* v___y_1673_; uint8_t v___x_1677_; 
v___x_1677_ = lean_usize_dec_lt(v_i_1669_, v_sz_1668_);
if (v___x_1677_ == 0)
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1678_, 0, v_b_1670_);
return v___x_1678_;
}
else
{
lean_object* v_a_1679_; uint8_t v___x_1680_; 
v_a_1679_ = lean_array_uget_borrowed(v_as_1667_, v_i_1669_);
lean_inc(v_b_1670_);
lean_inc(v_a_1679_);
v___x_1680_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_a_1679_, v_b_1670_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = lean_box(0);
lean_inc(v_a_1679_);
v___x_1682_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_a_1679_, v___x_1681_, v_b_1670_);
v___y_1673_ = v___x_1682_;
goto v___jp_1672_;
}
else
{
v___y_1673_ = v_b_1670_;
goto v___jp_1672_;
}
}
v___jp_1672_:
{
size_t v___x_1674_; size_t v___x_1675_; 
v___x_1674_ = ((size_t)1ULL);
v___x_1675_ = lean_usize_add(v_i_1669_, v___x_1674_);
v_i_1669_ = v___x_1675_;
v_b_1670_ = v___y_1673_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object* v_as_1683_, lean_object* v_sz_1684_, lean_object* v_i_1685_, lean_object* v_b_1686_, lean_object* v___y_1687_){
_start:
{
size_t v_sz_boxed_1688_; size_t v_i_boxed_1689_; lean_object* v_res_1690_; 
v_sz_boxed_1688_ = lean_unbox_usize(v_sz_1684_);
lean_dec(v_sz_1684_);
v_i_boxed_1689_ = lean_unbox_usize(v_i_1685_);
lean_dec(v_i_1685_);
v_res_1690_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1683_, v_sz_boxed_1688_, v_i_boxed_1689_, v_b_1686_);
lean_dec_ref(v_as_1683_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object* v_type_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_){
_start:
{
lean_object* v_set_1697_; lean_object* v___x_1698_; 
v_set_1697_ = lean_box(1);
v___x_1698_ = l_Lean_Server_Completion_getDotCompletionTypeNames(v_type_1691_, v_a_1692_, v_a_1693_, v_a_1694_, v_a_1695_);
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; size_t v_sz_1700_; size_t v___x_1701_; lean_object* v___x_1702_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_a_1699_);
lean_dec_ref_known(v___x_1698_, 1);
v_sz_1700_ = lean_array_size(v_a_1699_);
v___x_1701_ = ((size_t)0ULL);
v___x_1702_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_a_1699_, v_sz_1700_, v___x_1701_, v_set_1697_);
lean_dec(v_a_1699_);
return v___x_1702_;
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
v_a_1703_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1698_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1698_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object* v_type_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_type_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_);
lean_dec(v_a_1715_);
lean_dec_ref(v_a_1714_);
lean_dec(v_a_1713_);
lean_dec_ref(v_a_1712_);
return v_res_1717_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object* v_00_u03b2_1718_, lean_object* v_k_1719_, lean_object* v_t_1720_){
_start:
{
uint8_t v___x_1721_; 
v___x_1721_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1719_, v_t_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object* v_00_u03b2_1722_, lean_object* v_k_1723_, lean_object* v_t_1724_){
_start:
{
uint8_t v_res_1725_; lean_object* v_r_1726_; 
v_res_1725_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(v_00_u03b2_1722_, v_k_1723_, v_t_1724_);
v_r_1726_ = lean_box(v_res_1725_);
return v_r_1726_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object* v_00_u03b2_1727_, lean_object* v_k_1728_, lean_object* v_v_1729_, lean_object* v_t_1730_, lean_object* v_hl_1731_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1728_, v_v_1729_, v_t_1730_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object* v_as_1733_, size_t v_sz_1734_, size_t v_i_1735_, lean_object* v_b_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1733_, v_sz_1734_, v_i_1735_, v_b_1736_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object* v_as_1743_, lean_object* v_sz_1744_, lean_object* v_i_1745_, lean_object* v_b_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
size_t v_sz_boxed_1752_; size_t v_i_boxed_1753_; lean_object* v_res_1754_; 
v_sz_boxed_1752_ = lean_unbox_usize(v_sz_1744_);
lean_dec(v_sz_1744_);
v_i_boxed_1753_ = lean_unbox_usize(v_i_1745_);
lean_dec(v_i_1745_);
v_res_1754_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(v_as_1743_, v_sz_boxed_1752_, v_i_boxed_1753_, v_b_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
lean_dec_ref(v_as_1743_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object* v_e_1755_, lean_object* v_declName_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
uint8_t v___y_1763_; uint8_t v___y_1785_; lean_object* v___x_1788_; 
v___x_1788_ = l_Lean_Expr_getAppFn(v_e_1755_);
if (lean_obj_tag(v___x_1788_) == 4)
{
lean_object* v_declName_1789_; lean_object* v___x_1790_; 
v_declName_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc_n(v_declName_1789_, 2);
lean_dec_ref_known(v___x_1788_, 2);
v___x_1790_ = l_Lean_privateToUserName_x3f(v_declName_1789_);
if (lean_obj_tag(v___x_1790_) == 0)
{
uint8_t v___x_1791_; 
v___x_1791_ = lean_name_eq(v_declName_1789_, v_declName_1756_);
lean_dec(v_declName_1789_);
v___y_1785_ = v___x_1791_;
goto v___jp_1784_;
}
else
{
lean_object* v_val_1792_; uint8_t v___x_1793_; 
lean_dec(v_declName_1789_);
v_val_1792_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_val_1792_);
lean_dec_ref_known(v___x_1790_, 1);
v___x_1793_ = lean_name_eq(v_val_1792_, v_declName_1756_);
lean_dec(v_val_1792_);
v___y_1785_ = v___x_1793_;
goto v___jp_1784_;
}
}
else
{
uint8_t v___x_1794_; 
lean_dec_ref(v___x_1788_);
v___x_1794_ = 0;
v___y_1763_ = v___x_1794_;
goto v___jp_1762_;
}
v___jp_1762_:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_e_1755_, v_a_1757_, v_a_1758_, v_a_1759_, v_a_1760_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1775_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1775_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1775_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
if (lean_obj_tag(v_a_1765_) == 1)
{
lean_object* v_val_1769_; 
lean_del_object(v___x_1767_);
v_val_1769_ = lean_ctor_get(v_a_1765_, 0);
lean_inc(v_val_1769_);
lean_dec_ref_known(v_a_1765_, 1);
v_e_1755_ = v_val_1769_;
goto _start;
}
else
{
lean_object* v___x_1771_; lean_object* v___x_1773_; 
lean_dec(v_a_1765_);
v___x_1771_ = lean_box(v___y_1763_);
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 0, v___x_1771_);
v___x_1773_ = v___x_1767_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v___x_1771_);
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
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
v_a_1776_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1764_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1764_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
v___jp_1784_:
{
if (v___y_1785_ == 0)
{
v___y_1763_ = v___y_1785_;
goto v___jp_1762_;
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
lean_dec_ref(v_e_1755_);
v___x_1786_ = lean_box(v___y_1785_);
v___x_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1786_);
return v___x_1787_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object* v_e_1795_, lean_object* v_declName_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v_e_1795_, v_declName_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
lean_dec(v_a_1800_);
lean_dec_ref(v_a_1799_);
lean_dec(v_a_1798_);
lean_dec_ref(v_a_1797_);
lean_dec(v_declName_1796_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object* v_k_1803_, lean_object* v_b_1804_, lean_object* v_c_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v___x_1811_; 
lean_inc(v___y_1809_);
lean_inc_ref(v___y_1808_);
lean_inc(v___y_1807_);
lean_inc_ref(v___y_1806_);
v___x_1811_ = lean_apply_7(v_k_1803_, v_b_1804_, v_c_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, lean_box(0));
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object* v_k_1812_, lean_object* v_b_1813_, lean_object* v_c_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(v_k_1812_, v_b_1813_, v_c_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object* v_type_1821_, lean_object* v_k_1822_, uint8_t v_cleanupAnnotations_1823_, uint8_t v_whnfType_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v___f_1830_; lean_object* v___x_1831_; 
v___f_1830_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1830_, 0, v_k_1822_);
v___x_1831_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1821_, v___f_1830_, v_cleanupAnnotations_1823_, v_whnfType_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1831_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
else
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
v_a_1840_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1831_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1831_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object* v_type_1848_, lean_object* v_k_1849_, lean_object* v_cleanupAnnotations_1850_, lean_object* v_whnfType_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1857_; uint8_t v_whnfType_boxed_1858_; lean_object* v_res_1859_; 
v_cleanupAnnotations_boxed_1857_ = lean_unbox(v_cleanupAnnotations_1850_);
v_whnfType_boxed_1858_ = lean_unbox(v_whnfType_1851_);
v_res_1859_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1848_, v_k_1849_, v_cleanupAnnotations_boxed_1857_, v_whnfType_boxed_1858_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object* v_00_u03b1_1860_, lean_object* v_type_1861_, lean_object* v_k_1862_, uint8_t v_cleanupAnnotations_1863_, uint8_t v_whnfType_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1861_, v_k_1862_, v_cleanupAnnotations_1863_, v_whnfType_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object* v_00_u03b1_1871_, lean_object* v_type_1872_, lean_object* v_k_1873_, lean_object* v_cleanupAnnotations_1874_, lean_object* v_whnfType_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1881_; uint8_t v_whnfType_boxed_1882_; lean_object* v_res_1883_; 
v_cleanupAnnotations_boxed_1881_ = lean_unbox(v_cleanupAnnotations_1874_);
v_whnfType_boxed_1882_ = lean_unbox(v_whnfType_1875_);
v_res_1883_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(v_00_u03b1_1871_, v_type_1872_, v_k_1873_, v_cleanupAnnotations_boxed_1881_, v_whnfType_boxed_1882_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object* v_typeName_1887_, lean_object* v_as_1888_, size_t v_sz_1889_, size_t v_i_1890_, lean_object* v_b_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
uint8_t v___x_1897_; 
v___x_1897_ = lean_usize_dec_lt(v_i_1890_, v_sz_1889_);
if (v___x_1897_ == 0)
{
lean_object* v___x_1898_; 
v___x_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1898_, 0, v_b_1891_);
return v___x_1898_;
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v_a_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
lean_dec_ref(v_b_1891_);
v___x_1899_ = lean_box(0);
v___x_1900_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0));
v_a_1901_ = lean_array_uget_borrowed(v_as_1888_, v_i_1890_);
v___x_1902_ = l_Lean_Expr_fvarId_x21(v_a_1901_);
v___x_1903_ = l_Lean_FVarId_getDecl___redArg(v___x_1902_, v___y_1892_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v___x_1903_, 1);
v___x_1905_ = l_Lean_LocalDecl_type(v_a_1904_);
lean_dec(v_a_1904_);
v___x_1906_ = l_Lean_Expr_consumeMData(v___x_1905_);
lean_dec_ref(v___x_1905_);
v___x_1907_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v___x_1906_, v_typeName_1887_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1921_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1910_ = v___x_1907_;
v_isShared_1911_ = v_isSharedCheck_1921_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1907_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1921_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
uint8_t v___x_1912_; 
v___x_1912_ = lean_unbox(v_a_1908_);
if (v___x_1912_ == 0)
{
size_t v___x_1913_; size_t v___x_1914_; 
lean_del_object(v___x_1910_);
lean_dec(v_a_1908_);
v___x_1913_ = ((size_t)1ULL);
v___x_1914_ = lean_usize_add(v_i_1890_, v___x_1913_);
v_i_1890_ = v___x_1914_;
v_b_1891_ = v___x_1900_;
goto _start;
}
else
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1916_, 0, v_a_1908_);
v___x_1917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
lean_ctor_set(v___x_1917_, 1, v___x_1899_);
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 0, v___x_1917_);
v___x_1919_ = v___x_1910_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v___x_1917_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
v_a_1922_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1907_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1907_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
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
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
v_a_1930_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1903_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1903_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object* v_typeName_1938_, lean_object* v_as_1939_, lean_object* v_sz_1940_, lean_object* v_i_1941_, lean_object* v_b_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
size_t v_sz_boxed_1948_; size_t v_i_boxed_1949_; lean_object* v_res_1950_; 
v_sz_boxed_1948_ = lean_unbox_usize(v_sz_1940_);
lean_dec(v_sz_1940_);
v_i_boxed_1949_ = lean_unbox_usize(v_i_1941_);
lean_dec(v_i_1941_);
v_res_1950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1938_, v_as_1939_, v_sz_boxed_1948_, v_i_boxed_1949_, v_b_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec_ref(v_as_1939_);
lean_dec(v_typeName_1938_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object* v_typeName_1951_, lean_object* v_xs_1952_, lean_object* v_x_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v___x_1959_; size_t v_sz_1960_; size_t v___x_1961_; lean_object* v___x_1962_; 
v___x_1959_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0));
v_sz_1960_ = lean_array_size(v_xs_1952_);
v___x_1961_ = ((size_t)0ULL);
v___x_1962_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1951_, v_xs_1952_, v_sz_1960_, v___x_1961_, v___x_1959_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1977_; 
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1965_ = v___x_1962_;
v_isShared_1966_ = v_isSharedCheck_1977_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1962_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1977_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v_fst_1967_; 
v_fst_1967_ = lean_ctor_get(v_a_1963_, 0);
lean_inc(v_fst_1967_);
lean_dec(v_a_1963_);
if (lean_obj_tag(v_fst_1967_) == 0)
{
uint8_t v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1971_; 
v___x_1968_ = 0;
v___x_1969_ = lean_box(v___x_1968_);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v___x_1969_);
v___x_1971_ = v___x_1965_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
else
{
lean_object* v_val_1973_; lean_object* v___x_1975_; 
v_val_1973_ = lean_ctor_get(v_fst_1967_, 0);
lean_inc(v_val_1973_);
lean_dec_ref_known(v_fst_1967_, 1);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v_val_1973_);
v___x_1975_ = v___x_1965_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_val_1973_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
v_a_1978_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1962_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1962_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object* v_typeName_1986_, lean_object* v_xs_1987_, lean_object* v_x_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(v_typeName_1986_, v_xs_1987_, v_x_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec_ref(v_x_1988_);
lean_dec_ref(v_xs_1987_);
lean_dec(v_typeName_1986_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object* v_typeName_1995_, lean_object* v_info_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_){
_start:
{
lean_object* v___f_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; lean_object* v___x_2005_; 
v___f_2002_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2002_, 0, v_typeName_1995_);
v___x_2003_ = l_Lean_ConstantInfo_type(v_info_1996_);
v___x_2004_ = 0;
v___x_2005_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v___x_2003_, v___f_2002_, v___x_2004_, v___x_2004_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object* v_typeName_2006_, lean_object* v_info_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v_typeName_2006_, v_info_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
lean_dec(v_a_2009_);
lean_dec_ref(v_a_2008_);
lean_dec_ref(v_info_2007_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object* v_e_2014_, lean_object* v___y_2015_){
_start:
{
uint8_t v___x_2017_; 
v___x_2017_ = l_Lean_Expr_hasMVar(v_e_2014_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_e_2014_);
return v___x_2018_;
}
else
{
lean_object* v___x_2019_; lean_object* v_mctx_2020_; lean_object* v___x_2021_; lean_object* v_fst_2022_; lean_object* v_snd_2023_; lean_object* v___x_2024_; lean_object* v_cache_2025_; lean_object* v_zetaDeltaFVarIds_2026_; lean_object* v_postponed_2027_; lean_object* v_diag_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2037_; 
v___x_2019_ = lean_st_ref_get(v___y_2015_);
v_mctx_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc_ref(v_mctx_2020_);
lean_dec(v___x_2019_);
v___x_2021_ = l_Lean_instantiateMVarsCore(v_mctx_2020_, v_e_2014_);
v_fst_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_fst_2022_);
v_snd_2023_ = lean_ctor_get(v___x_2021_, 1);
lean_inc(v_snd_2023_);
lean_dec_ref(v___x_2021_);
v___x_2024_ = lean_st_ref_take(v___y_2015_);
v_cache_2025_ = lean_ctor_get(v___x_2024_, 1);
v_zetaDeltaFVarIds_2026_ = lean_ctor_get(v___x_2024_, 2);
v_postponed_2027_ = lean_ctor_get(v___x_2024_, 3);
v_diag_2028_ = lean_ctor_get(v___x_2024_, 4);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2037_ == 0)
{
lean_object* v_unused_2038_; 
v_unused_2038_ = lean_ctor_get(v___x_2024_, 0);
lean_dec(v_unused_2038_);
v___x_2030_ = v___x_2024_;
v_isShared_2031_ = v_isSharedCheck_2037_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_diag_2028_);
lean_inc(v_postponed_2027_);
lean_inc(v_zetaDeltaFVarIds_2026_);
lean_inc(v_cache_2025_);
lean_dec(v___x_2024_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2037_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v_snd_2023_);
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_snd_2023_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v_cache_2025_);
lean_ctor_set(v_reuseFailAlloc_2036_, 2, v_zetaDeltaFVarIds_2026_);
lean_ctor_set(v_reuseFailAlloc_2036_, 3, v_postponed_2027_);
lean_ctor_set(v_reuseFailAlloc_2036_, 4, v_diag_2028_);
v___x_2033_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2034_ = lean_st_ref_put(v___y_2015_, v___x_2033_);
v___x_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2035_, 0, v_fst_2022_);
return v___x_2035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object* v_e_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2039_, v___y_2040_);
lean_dec(v___y_2040_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object* v_e_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v___x_2049_; 
v___x_2049_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2043_, v___y_2045_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object* v_e_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(v_e_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object* v_type_2057_, lean_object* v_k_2058_, uint8_t v_cleanupAnnotations_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
lean_object* v___f_2065_; uint8_t v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___f_2065_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2065_, 0, v_k_2058_);
v___x_2066_ = 0;
v___x_2067_ = lean_box(0);
v___x_2068_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2066_, v___x_2067_, v_type_2057_, v___f_2065_, v_cleanupAnnotations_2059_, v___x_2066_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
v_a_2069_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2068_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2068_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
v_a_2077_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2068_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2068_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object* v_type_2085_, lean_object* v_k_2086_, lean_object* v_cleanupAnnotations_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2093_; lean_object* v_res_2094_; 
v_cleanupAnnotations_boxed_2093_ = lean_unbox(v_cleanupAnnotations_2087_);
v_res_2094_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2085_, v_k_2086_, v_cleanupAnnotations_boxed_2093_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object* v_00_u03b1_2095_, lean_object* v_type_2096_, lean_object* v_k_2097_, uint8_t v_cleanupAnnotations_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
lean_object* v___x_2104_; 
v___x_2104_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2096_, v_k_2097_, v_cleanupAnnotations_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object* v_00_u03b1_2105_, lean_object* v_type_2106_, lean_object* v_k_2107_, lean_object* v_cleanupAnnotations_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2114_; lean_object* v_res_2115_; 
v_cleanupAnnotations_boxed_2114_ = lean_unbox(v_cleanupAnnotations_2108_);
v_res_2115_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(v_00_u03b1_2105_, v_type_2106_, v_k_2107_, v_cleanupAnnotations_boxed_2114_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object* v_typeNameSet_2116_, lean_object* v_x_2117_, lean_object* v_type_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(v_typeNameSet_2116_, v_x_2117_, v_type_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
lean_dec_ref(v_x_2117_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object* v_typeNameSet_2125_, lean_object* v_type_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_){
_start:
{
lean_object* v___f_2132_; lean_object* v_a_2134_; lean_object* v___x_2183_; 
lean_inc(v_typeNameSet_2125_);
v___f_2132_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2132_, 0, v_typeNameSet_2125_);
lean_inc_ref(v_type_2126_);
v___x_2183_ = l_Lean_Meta_whnfCoreUnfoldingAnnotations(v_type_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; 
lean_dec_ref(v_type_2126_);
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
lean_dec_ref_known(v___x_2183_, 1);
v_a_2134_ = v_a_2184_;
goto v___jp_2133_;
}
else
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2197_; 
v_a_2185_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2187_ = v___x_2183_;
v_isShared_2188_ = v_isSharedCheck_2197_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2183_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2197_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
uint8_t v___x_2189_; 
v___x_2189_ = l_Lean_Exception_isInterrupt(v_a_2185_);
if (v___x_2189_ == 0)
{
uint8_t v___x_2190_; 
lean_inc(v_a_2185_);
v___x_2190_ = l_Lean_Exception_isRuntime(v_a_2185_);
if (v___x_2190_ == 0)
{
lean_del_object(v___x_2187_);
lean_dec(v_a_2185_);
v_a_2134_ = v_type_2126_;
goto v___jp_2133_;
}
else
{
lean_object* v___x_2192_; 
lean_dec_ref(v___f_2132_);
lean_dec_ref(v_type_2126_);
lean_dec(v_typeNameSet_2125_);
if (v_isShared_2188_ == 0)
{
v___x_2192_ = v___x_2187_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2185_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
else
{
lean_object* v___x_2195_; 
lean_dec_ref(v___f_2132_);
lean_dec_ref(v_type_2126_);
lean_dec(v_typeNameSet_2125_);
if (v_isShared_2188_ == 0)
{
v___x_2195_ = v___x_2187_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2185_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
v___jp_2133_:
{
uint8_t v___x_2135_; 
v___x_2135_ = l_Lean_Expr_isForall(v_a_2134_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; 
lean_dec_ref(v___f_2132_);
v___x_2136_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_a_2134_, v_a_2128_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2172_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2172_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2172_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2141_; 
v___x_2141_ = l_Lean_Expr_getAppFn(v_a_2137_);
if (lean_obj_tag(v___x_2141_) == 4)
{
lean_object* v_declName_2142_; uint8_t v___x_2143_; 
v_declName_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_declName_2142_);
lean_dec_ref_known(v___x_2141_, 2);
lean_inc(v_typeNameSet_2125_);
v___x_2143_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_declName_2142_, v_typeNameSet_2125_);
if (v___x_2143_ == 0)
{
lean_object* v___x_2144_; 
lean_del_object(v___x_2139_);
v___x_2144_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_a_2137_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2155_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2147_ = v___x_2144_;
v_isShared_2148_ = v_isSharedCheck_2155_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2144_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2155_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
if (lean_obj_tag(v_a_2145_) == 1)
{
lean_object* v_val_2149_; 
lean_del_object(v___x_2147_);
v_val_2149_ = lean_ctor_get(v_a_2145_, 0);
lean_inc(v_val_2149_);
lean_dec_ref_known(v_a_2145_, 1);
v_type_2126_ = v_val_2149_;
goto _start;
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2153_; 
lean_dec(v_a_2145_);
lean_dec(v_typeNameSet_2125_);
v___x_2151_ = lean_box(v___x_2143_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 0, v___x_2151_);
v___x_2153_ = v___x_2147_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2151_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec(v_typeNameSet_2125_);
v_a_2156_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2144_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2144_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_object* v___x_2164_; lean_object* v___x_2166_; 
lean_dec(v_a_2137_);
lean_dec(v_typeNameSet_2125_);
v___x_2164_ = lean_box(v___x_2143_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2164_);
v___x_2166_ = v___x_2139_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2164_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
else
{
lean_object* v___x_2168_; lean_object* v___x_2170_; 
lean_dec_ref(v___x_2141_);
lean_dec(v_a_2137_);
lean_dec(v_typeNameSet_2125_);
v___x_2168_ = lean_box(v___x_2135_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2168_);
v___x_2170_ = v___x_2139_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2168_);
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
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec(v_typeNameSet_2125_);
v_a_2173_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2136_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2136_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
else
{
uint8_t v___x_2181_; lean_object* v___x_2182_; 
lean_dec(v_typeNameSet_2125_);
v___x_2181_ = 0;
v___x_2182_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_a_2134_, v___f_2132_, v___x_2181_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_);
return v___x_2182_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object* v_typeNameSet_2198_, lean_object* v_x_2199_, lean_object* v_type_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2198_, v_type_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object* v_typeNameSet_2207_, lean_object* v_type_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2207_, v_type_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object* v_typeNameSet_2215_, lean_object* v_info_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = l_Lean_ConstantInfo_type(v_info_2216_);
v___x_2223_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2215_, v___x_2222_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object* v_typeNameSet_2224_, lean_object* v_info_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v_typeNameSet_2224_, v_info_2225_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_);
lean_dec(v_a_2229_);
lean_dec_ref(v_a_2228_);
lean_dec(v_a_2227_);
lean_dec_ref(v_a_2226_);
lean_dec_ref(v_info_2225_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object* v_matchAlias_2232_, lean_object* v_addAlias_2233_, lean_object* v_alias_2234_, lean_object* v_declNames_2235_, lean_object* v_ns_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v___x_2245_; uint8_t v___x_2246_; 
lean_inc_ref(v_matchAlias_2232_);
lean_inc(v_alias_2234_);
lean_inc(v_ns_2236_);
v___x_2245_ = lean_apply_2(v_matchAlias_2232_, v_ns_2236_, v_alias_2234_);
v___x_2246_ = lean_unbox(v___x_2245_);
if (v___x_2246_ == 0)
{
if (lean_obj_tag(v_ns_2236_) == 1)
{
lean_object* v_pre_2247_; 
v_pre_2247_ = lean_ctor_get(v_ns_2236_, 0);
lean_inc(v_pre_2247_);
lean_dec_ref_known(v_ns_2236_, 2);
v_ns_2236_ = v_pre_2247_;
goto _start;
}
else
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
lean_dec(v_ns_2236_);
lean_dec(v_declNames_2235_);
lean_dec(v_alias_2234_);
lean_dec_ref(v_addAlias_2233_);
lean_dec_ref(v_matchAlias_2232_);
v___x_2249_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
return v___x_2250_;
}
}
else
{
lean_object* v___x_2251_; 
lean_dec(v_ns_2236_);
lean_dec_ref(v_matchAlias_2232_);
lean_inc(v_a_2243_);
lean_inc_ref(v_a_2242_);
lean_inc(v_a_2241_);
lean_inc_ref(v_a_2240_);
lean_inc_ref(v_a_2239_);
lean_inc(v_a_2238_);
lean_inc_ref(v_a_2237_);
v___x_2251_ = lean_apply_10(v_addAlias_2233_, v_alias_2234_, v_declNames_2235_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_, v_a_2243_, lean_box(0));
return v___x_2251_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object* v_matchAlias_2252_, lean_object* v_addAlias_2253_, lean_object* v_alias_2254_, lean_object* v_declNames_2255_, lean_object* v_ns_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v_matchAlias_2252_, v_addAlias_2253_, v_alias_2254_, v_declNames_2255_, v_ns_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
lean_dec(v_a_2263_);
lean_dec_ref(v_a_2262_);
lean_dec(v_a_2261_);
lean_dec_ref(v_a_2260_);
lean_dec_ref(v_a_2259_);
lean_dec(v_a_2258_);
lean_dec_ref(v_a_2257_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object* v_a_2268_){
_start:
{
uint8_t v___x_2270_; 
v___x_2270_ = l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(v_a_2268_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
else
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = ((lean_object*)(l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0));
v___x_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2273_);
return v___x_2274_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object* v_a_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2275_);
lean_dec_ref(v_a_2275_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object* v_a_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2278_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object* v_a_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(v_a_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec_ref(v_a_2285_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object* v_ctx_2292_, lean_object* v_id_2293_, uint8_t v_danglingDot_2294_, lean_object* v_declName_2295_, lean_object* v_decl_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v___x_2305_; 
lean_inc(v_declName_2295_);
v___x_2305_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_2292_, v_declName_2295_, v_id_2293_, v_danglingDot_2294_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2358_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2308_ = v___x_2305_;
v_isShared_2309_ = v_isSharedCheck_2358_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2305_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2358_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
if (lean_obj_tag(v_a_2306_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2320_; 
lean_dec_ref(v_decl_2296_);
lean_dec(v_declName_2295_);
v_a_2310_ = lean_ctor_get(v_a_2306_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v_a_2306_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2312_ = v_a_2306_;
v_isShared_2313_ = v_isSharedCheck_2320_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v_a_2306_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2320_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
lean_object* v___x_2317_; 
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 0, v___x_2315_);
v___x_2317_ = v___x_2308_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2315_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
}
else
{
lean_object* v_a_2321_; 
v_a_2321_ = lean_ctor_get(v_a_2306_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v_a_2306_, 1);
if (lean_obj_tag(v_a_2321_) == 1)
{
lean_object* v_val_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2353_; 
lean_del_object(v___x_2308_);
v_val_2322_ = lean_ctor_get(v_a_2321_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_a_2321_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2324_ = v_a_2321_;
v_isShared_2325_ = v_isSharedCheck_2353_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_val_2322_);
lean_dec(v_a_2321_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2353_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v_kind_2326_; lean_object* v_tags_2327_; lean_object* v___x_2328_; 
v_kind_2326_ = lean_ctor_get(v_decl_2296_, 1);
lean_inc_ref(v_kind_2326_);
v_tags_2327_ = lean_ctor_get(v_decl_2296_, 2);
lean_inc_ref(v_tags_2327_);
lean_dec_ref(v_decl_2296_);
lean_inc(v___y_2303_);
lean_inc_ref(v___y_2302_);
lean_inc(v___y_2301_);
lean_inc_ref(v___y_2300_);
v___x_2328_ = lean_apply_5(v_kind_2326_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, lean_box(0));
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; lean_object* v___x_2330_; 
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2328_, 1);
lean_inc(v___y_2303_);
lean_inc_ref(v___y_2302_);
lean_inc(v___y_2301_);
lean_inc_ref(v___y_2300_);
v___x_2330_ = lean_apply_5(v_tags_2327_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, lean_box(0));
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; lean_object* v___x_2333_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
if (v_isShared_2325_ == 0)
{
lean_ctor_set_tag(v___x_2324_, 0);
lean_ctor_set(v___x_2324_, 0, v_declName_2295_);
v___x_2333_ = v___x_2324_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_declName_2295_);
v___x_2333_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
uint8_t v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = lean_unbox(v_a_2329_);
lean_dec(v_a_2329_);
v___x_2335_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_2322_, v___x_2333_, v___x_2334_, v_a_2331_, v___y_2297_, v___y_2298_);
return v___x_2335_;
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec(v_a_2329_);
lean_del_object(v___x_2324_);
lean_dec(v_val_2322_);
lean_dec(v_declName_2295_);
v_a_2337_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2330_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2330_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2352_; 
lean_dec_ref(v_tags_2327_);
lean_del_object(v___x_2324_);
lean_dec(v_val_2322_);
lean_dec(v_declName_2295_);
v_a_2345_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2347_ = v___x_2328_;
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2328_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2350_; 
if (v_isShared_2348_ == 0)
{
v___x_2350_ = v___x_2347_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_a_2345_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
}
}
else
{
lean_object* v___x_2354_; lean_object* v___x_2356_; 
lean_dec(v_a_2321_);
lean_dec_ref(v_decl_2296_);
lean_dec(v_declName_2295_);
v___x_2354_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 0, v___x_2354_);
v___x_2356_ = v___x_2308_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2354_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
}
else
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2366_; 
lean_dec_ref(v_decl_2296_);
lean_dec(v_declName_2295_);
v_a_2359_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2361_ = v___x_2305_;
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2305_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2362_ == 0)
{
v___x_2364_ = v___x_2361_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_a_2359_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object* v_ctx_2367_, lean_object* v_id_2368_, lean_object* v_danglingDot_2369_, lean_object* v_declName_2370_, lean_object* v_decl_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
uint8_t v_danglingDot_boxed_2380_; lean_object* v_res_2381_; 
v_danglingDot_boxed_2380_ = lean_unbox(v_danglingDot_2369_);
v_res_2381_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(v_ctx_2367_, v_id_2368_, v_danglingDot_boxed_2380_, v_declName_2370_, v_decl_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_dec(v___y_2376_);
lean_dec_ref(v___y_2375_);
lean_dec_ref(v___y_2374_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
return v_res_2381_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object* v_id_2382_, uint8_t v_danglingDot_2383_, lean_object* v_ns_2384_, lean_object* v_alias_2385_){
_start:
{
uint8_t v___x_2386_; 
v___x_2386_ = l_Lean_Name_isPrefixOf(v_ns_2384_, v_alias_2385_);
if (v___x_2386_ == 0)
{
lean_dec(v_alias_2385_);
return v___x_2386_;
}
else
{
lean_object* v___x_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v___x_2387_ = lean_box(0);
v___x_2388_ = l_Lean_Name_replacePrefix(v_alias_2385_, v_ns_2384_, v___x_2387_);
v___x_2389_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2382_, v___x_2388_, v_danglingDot_2383_);
lean_dec(v___x_2388_);
return v___x_2389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object* v_id_2390_, lean_object* v_danglingDot_2391_, lean_object* v_ns_2392_, lean_object* v_alias_2393_){
_start:
{
uint8_t v_danglingDot_boxed_2394_; uint8_t v_res_2395_; lean_object* v_r_2396_; 
v_danglingDot_boxed_2394_ = lean_unbox(v_danglingDot_2391_);
v_res_2395_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(v_id_2390_, v_danglingDot_boxed_2394_, v_ns_2392_, v_alias_2393_);
lean_dec(v_ns_2392_);
lean_dec(v_id_2390_);
v_r_2396_ = lean_box(v_res_2395_);
return v_r_2396_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object* v_a_2397_, lean_object* v___x_2398_, lean_object* v_alias_2399_, lean_object* v_as_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_){
_start:
{
if (lean_obj_tag(v_as_2400_) == 0)
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
lean_dec_ref(v___x_2398_);
v___x_2408_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
return v___x_2409_;
}
else
{
lean_object* v_head_2410_; lean_object* v_tail_2411_; uint8_t v___x_2412_; 
v_head_2410_ = lean_ctor_get(v_as_2400_, 0);
lean_inc_n(v_head_2410_, 2);
v_tail_2411_ = lean_ctor_get(v_as_2400_, 1);
lean_inc(v_tail_2411_);
lean_dec_ref_known(v_as_2400_, 2);
lean_inc_ref(v___x_2398_);
v___x_2412_ = l_Lean_Server_Completion_allowCompletion(v_a_2397_, v___x_2398_, v_head_2410_);
if (v___x_2412_ == 0)
{
lean_dec(v_head_2410_);
v_as_2400_ = v_tail_2411_;
goto _start;
}
else
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2414_ = l_Lean_Name_getString_x21(v_alias_2399_);
v___x_2415_ = lean_box(0);
v___x_2416_ = l_Lean_Name_str___override(v___x_2415_, v___x_2414_);
v___x_2417_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_2416_, v_head_2410_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_dec_ref_known(v___x_2417_, 1);
v_as_2400_ = v_tail_2411_;
goto _start;
}
else
{
lean_dec(v_tail_2411_);
lean_dec_ref(v___x_2398_);
return v___x_2417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object* v_a_2419_, lean_object* v___x_2420_, lean_object* v_alias_2421_, lean_object* v_as_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2419_, v___x_2420_, v_alias_2421_, v_as_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
lean_dec(v___y_2428_);
lean_dec_ref(v___y_2427_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v_alias_2421_);
lean_dec_ref(v_a_2419_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object* v_a_2431_, lean_object* v_env_2432_, lean_object* v_alias_2433_, lean_object* v_declNames_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2431_, v_env_2432_, v_alias_2433_, v_declNames_2434_, v___y_2435_, v___y_2436_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object* v_a_2444_, lean_object* v_env_2445_, lean_object* v_alias_2446_, lean_object* v_declNames_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(v_a_2444_, v_env_2445_, v_alias_2446_, v_declNames_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
lean_dec(v_alias_2446_);
lean_dec_ref(v_a_2444_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object* v___f_2457_, lean_object* v___f_2458_, lean_object* v_currNamespace_2459_, lean_object* v_alias_2460_, lean_object* v_declNames_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v___f_2457_, v___f_2458_, v_alias_2460_, v_declNames_2461_, v_currNamespace_2459_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object* v___f_2471_, lean_object* v___f_2472_, lean_object* v_currNamespace_2473_, lean_object* v_alias_2474_, lean_object* v_declNames_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(v___f_2471_, v___f_2472_, v_currNamespace_2473_, v_alias_2474_, v_declNames_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object* v_f_2485_, lean_object* v_x_2486_, lean_object* v_x_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
if (lean_obj_tag(v_x_2487_) == 0)
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
lean_dec_ref(v_f_2485_);
v___x_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2496_, 0, v_x_2486_);
v___x_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
return v___x_2497_;
}
else
{
lean_object* v_key_2498_; lean_object* v_value_2499_; lean_object* v_tail_2500_; lean_object* v___x_2501_; 
v_key_2498_ = lean_ctor_get(v_x_2487_, 0);
lean_inc(v_key_2498_);
v_value_2499_ = lean_ctor_get(v_x_2487_, 1);
lean_inc(v_value_2499_);
v_tail_2500_ = lean_ctor_get(v_x_2487_, 2);
lean_inc(v_tail_2500_);
lean_dec_ref_known(v_x_2487_, 3);
lean_inc_ref(v_f_2485_);
lean_inc(v___y_2494_);
lean_inc_ref(v___y_2493_);
lean_inc(v___y_2492_);
lean_inc_ref(v___y_2491_);
lean_inc_ref(v___y_2490_);
lean_inc(v___y_2489_);
lean_inc_ref(v___y_2488_);
v___x_2501_ = lean_apply_10(v_f_2485_, v_key_2498_, v_value_2499_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, lean_box(0));
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
lean_inc(v_a_2502_);
if (lean_obj_tag(v_a_2502_) == 0)
{
lean_dec_ref_known(v_a_2502_, 1);
lean_dec(v_tail_2500_);
lean_dec_ref(v_f_2485_);
return v___x_2501_;
}
else
{
lean_object* v_a_2503_; 
lean_dec_ref_known(v___x_2501_, 1);
v_a_2503_ = lean_ctor_get(v_a_2502_, 0);
lean_inc(v_a_2503_);
lean_dec_ref_known(v_a_2502_, 1);
v_x_2486_ = v_a_2503_;
v_x_2487_ = v_tail_2500_;
goto _start;
}
}
else
{
lean_dec(v_tail_2500_);
lean_dec_ref(v_f_2485_);
return v___x_2501_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object* v_f_2505_, lean_object* v_x_2506_, lean_object* v_x_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_2505_, v_x_2506_, v_x_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object* v_f_2517_, lean_object* v_as_2518_, size_t v_i_2519_, size_t v_stop_2520_, lean_object* v_b_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
uint8_t v___x_2530_; 
v___x_2530_ = lean_usize_dec_eq(v_i_2519_, v_stop_2520_);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2531_ = lean_array_uget_borrowed(v_as_2518_, v_i_2519_);
v___x_2532_ = lean_box(0);
lean_inc(v___x_2531_);
lean_inc_ref(v_f_2517_);
v___x_2533_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_2517_, v___x_2532_, v___x_2531_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
if (lean_obj_tag(v_a_2534_) == 0)
{
lean_dec_ref(v_f_2517_);
return v___x_2533_;
}
else
{
lean_object* v_a_2535_; size_t v___x_2536_; size_t v___x_2537_; 
lean_inc_ref(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
v_a_2535_ = lean_ctor_get(v_a_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v_a_2534_, 1);
v___x_2536_ = ((size_t)1ULL);
v___x_2537_ = lean_usize_add(v_i_2519_, v___x_2536_);
v_i_2519_ = v___x_2537_;
v_b_2521_ = v_a_2535_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_2517_);
return v___x_2533_;
}
}
else
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
lean_dec_ref(v_f_2517_);
v___x_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2539_, 0, v_b_2521_);
v___x_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2539_);
return v___x_2540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object* v_f_2541_, lean_object* v_as_2542_, lean_object* v_i_2543_, lean_object* v_stop_2544_, lean_object* v_b_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
size_t v_i_boxed_2554_; size_t v_stop_boxed_2555_; lean_object* v_res_2556_; 
v_i_boxed_2554_ = lean_unbox_usize(v_i_2543_);
lean_dec(v_i_2543_);
v_stop_boxed_2555_ = lean_unbox_usize(v_stop_2544_);
lean_dec(v_stop_2544_);
v_res_2556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_2541_, v_as_2542_, v_i_boxed_2554_, v_stop_boxed_2555_, v_b_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec_ref(v_as_2542_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object* v_f_2557_, lean_object* v_x_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
lean_object* v___x_2569_; 
lean_inc(v___y_2567_);
lean_inc_ref(v___y_2566_);
lean_inc(v___y_2565_);
lean_inc_ref(v___y_2564_);
lean_inc_ref(v___y_2563_);
lean_inc(v___y_2562_);
lean_inc_ref(v___y_2561_);
v___x_2569_ = lean_apply_10(v_f_2557_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, lean_box(0));
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_f_2570_, lean_object* v_x_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(v_f_2570_, v_x_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec_ref(v___y_2576_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object* v_f_2583_, lean_object* v_keys_2584_, lean_object* v_vals_2585_, lean_object* v_i_2586_, lean_object* v_acc_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v___x_2596_; uint8_t v___x_2597_; 
v___x_2596_ = lean_array_get_size(v_keys_2584_);
v___x_2597_ = lean_nat_dec_lt(v_i_2586_, v___x_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_dec(v_i_2586_);
lean_dec_ref(v_f_2583_);
v___x_2598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2598_, 0, v_acc_2587_);
v___x_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2598_);
return v___x_2599_;
}
else
{
lean_object* v_k_2600_; lean_object* v_v_2601_; lean_object* v___x_2602_; 
v_k_2600_ = lean_array_fget_borrowed(v_keys_2584_, v_i_2586_);
v_v_2601_ = lean_array_fget_borrowed(v_vals_2585_, v_i_2586_);
lean_inc_ref(v_f_2583_);
lean_inc(v___y_2594_);
lean_inc_ref(v___y_2593_);
lean_inc(v___y_2592_);
lean_inc_ref(v___y_2591_);
lean_inc_ref(v___y_2590_);
lean_inc(v___y_2589_);
lean_inc_ref(v___y_2588_);
lean_inc(v_v_2601_);
lean_inc(v_k_2600_);
v___x_2602_ = lean_apply_11(v_f_2583_, v_acc_2587_, v_k_2600_, v_v_2601_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, lean_box(0));
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
lean_inc(v_a_2603_);
if (lean_obj_tag(v_a_2603_) == 0)
{
lean_dec_ref_known(v_a_2603_, 1);
lean_dec(v_i_2586_);
lean_dec_ref(v_f_2583_);
return v___x_2602_;
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
lean_dec_ref_known(v___x_2602_, 1);
v_a_2604_ = lean_ctor_get(v_a_2603_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v_a_2603_, 1);
v___x_2605_ = lean_unsigned_to_nat(1u);
v___x_2606_ = lean_nat_add(v_i_2586_, v___x_2605_);
lean_dec(v_i_2586_);
v_i_2586_ = v___x_2606_;
v_acc_2587_ = v_a_2604_;
goto _start;
}
}
else
{
lean_dec(v_i_2586_);
lean_dec_ref(v_f_2583_);
return v___x_2602_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object* v_f_2608_, lean_object* v_keys_2609_, lean_object* v_vals_2610_, lean_object* v_i_2611_, lean_object* v_acc_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_2608_, v_keys_2609_, v_vals_2610_, v_i_2611_, v_acc_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec_ref(v___y_2615_);
lean_dec(v___y_2614_);
lean_dec_ref(v___y_2613_);
lean_dec_ref(v_vals_2610_);
lean_dec_ref(v_keys_2609_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object* v_f_2622_, lean_object* v_as_2623_, size_t v_i_2624_, size_t v_stop_2625_, lean_object* v_b_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v_a_2636_; lean_object* v___y_2641_; uint8_t v___x_2644_; 
v___x_2644_ = lean_usize_dec_eq(v_i_2624_, v_stop_2625_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2645_; 
v___x_2645_ = lean_array_uget_borrowed(v_as_2623_, v_i_2624_);
switch(lean_obj_tag(v___x_2645_))
{
case 0:
{
lean_object* v_key_2646_; lean_object* v_val_2647_; lean_object* v___x_2648_; 
v_key_2646_ = lean_ctor_get(v___x_2645_, 0);
v_val_2647_ = lean_ctor_get(v___x_2645_, 1);
lean_inc_ref(v_f_2622_);
lean_inc(v___y_2633_);
lean_inc_ref(v___y_2632_);
lean_inc(v___y_2631_);
lean_inc_ref(v___y_2630_);
lean_inc_ref(v___y_2629_);
lean_inc(v___y_2628_);
lean_inc_ref(v___y_2627_);
lean_inc(v_val_2647_);
lean_inc(v_key_2646_);
v___x_2648_ = lean_apply_11(v_f_2622_, v_b_2626_, v_key_2646_, v_val_2647_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, lean_box(0));
v___y_2641_ = v___x_2648_;
goto v___jp_2640_;
}
case 1:
{
lean_object* v_node_2649_; lean_object* v___x_2650_; 
v_node_2649_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_node_2649_);
lean_inc_ref(v_f_2622_);
v___x_2650_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_2622_, v_node_2649_, v_b_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
v___y_2641_ = v___x_2650_;
goto v___jp_2640_;
}
default: 
{
v_a_2636_ = v_b_2626_;
goto v___jp_2635_;
}
}
}
else
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
lean_dec_ref(v_f_2622_);
v___x_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2651_, 0, v_b_2626_);
v___x_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2651_);
return v___x_2652_;
}
v___jp_2635_:
{
size_t v___x_2637_; size_t v___x_2638_; 
v___x_2637_ = ((size_t)1ULL);
v___x_2638_ = lean_usize_add(v_i_2624_, v___x_2637_);
v_i_2624_ = v___x_2638_;
v_b_2626_ = v_a_2636_;
goto _start;
}
v___jp_2640_:
{
if (lean_obj_tag(v___y_2641_) == 0)
{
lean_object* v_a_2642_; 
v_a_2642_ = lean_ctor_get(v___y_2641_, 0);
if (lean_obj_tag(v_a_2642_) == 0)
{
lean_dec_ref(v_f_2622_);
return v___y_2641_;
}
else
{
lean_object* v_a_2643_; 
lean_inc_ref(v_a_2642_);
lean_dec_ref_known(v___y_2641_, 1);
v_a_2643_ = lean_ctor_get(v_a_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref_known(v_a_2642_, 1);
v_a_2636_ = v_a_2643_;
goto v___jp_2635_;
}
}
else
{
lean_dec_ref(v_f_2622_);
return v___y_2641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object* v_f_2653_, lean_object* v_x_2654_, lean_object* v_x_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
if (lean_obj_tag(v_x_2654_) == 0)
{
lean_object* v_es_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2678_; 
v_es_2664_ = lean_ctor_get(v_x_2654_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v_x_2654_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2666_ = v_x_2654_;
v_isShared_2667_ = v_isSharedCheck_2678_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_es_2664_);
lean_dec(v_x_2654_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2678_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; uint8_t v___x_2670_; 
v___x_2668_ = lean_unsigned_to_nat(0u);
v___x_2669_ = lean_array_get_size(v_es_2664_);
v___x_2670_ = lean_nat_dec_lt(v___x_2668_, v___x_2669_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2672_; 
lean_dec_ref(v_es_2664_);
lean_dec_ref(v_f_2653_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set_tag(v___x_2666_, 1);
lean_ctor_set(v___x_2666_, 0, v_x_2655_);
v___x_2672_ = v___x_2666_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_x_2655_);
v___x_2672_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2672_);
return v___x_2673_;
}
}
else
{
size_t v___x_2675_; size_t v___x_2676_; lean_object* v___x_2677_; 
lean_del_object(v___x_2666_);
v___x_2675_ = ((size_t)0ULL);
v___x_2676_ = lean_usize_of_nat(v___x_2669_);
v___x_2677_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_2653_, v_es_2664_, v___x_2675_, v___x_2676_, v_x_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
lean_dec_ref(v_es_2664_);
return v___x_2677_;
}
}
}
else
{
lean_object* v_ks_2679_; lean_object* v_vs_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v_ks_2679_ = lean_ctor_get(v_x_2654_, 0);
lean_inc_ref(v_ks_2679_);
v_vs_2680_ = lean_ctor_get(v_x_2654_, 1);
lean_inc_ref(v_vs_2680_);
lean_dec_ref_known(v_x_2654_, 2);
v___x_2681_ = lean_unsigned_to_nat(0u);
v___x_2682_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_2653_, v_ks_2679_, v_vs_2680_, v___x_2681_, v_x_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
lean_dec_ref(v_vs_2680_);
lean_dec_ref(v_ks_2679_);
return v___x_2682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object* v_f_2683_, lean_object* v_x_2684_, lean_object* v_x_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_2683_, v_x_2684_, v_x_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object* v_f_2695_, lean_object* v_as_2696_, lean_object* v_i_2697_, lean_object* v_stop_2698_, lean_object* v_b_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
size_t v_i_boxed_2708_; size_t v_stop_boxed_2709_; lean_object* v_res_2710_; 
v_i_boxed_2708_ = lean_unbox_usize(v_i_2697_);
lean_dec(v_i_2697_);
v_stop_boxed_2709_ = lean_unbox_usize(v_stop_2698_);
lean_dec(v_stop_2698_);
v_res_2710_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_2695_, v_as_2696_, v_i_boxed_2708_, v_stop_boxed_2709_, v_b_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec_ref(v_as_2696_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object* v_map_2711_, lean_object* v_f_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v___f_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___f_2721_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_2721_, 0, v_f_2712_);
v___x_2722_ = lean_box(0);
v___x_2723_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v___f_2721_, v_map_2711_, v___x_2722_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object* v_map_2724_, lean_object* v_f_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_2724_, v_f_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec_ref(v___y_2728_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object* v_s_2735_, lean_object* v_f_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v_map_u2081_2745_; lean_object* v_map_u2082_2746_; lean_object* v_buckets_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; uint8_t v___x_2750_; 
v_map_u2081_2745_ = lean_ctor_get(v_s_2735_, 0);
lean_inc_ref(v_map_u2081_2745_);
v_map_u2082_2746_ = lean_ctor_get(v_s_2735_, 1);
lean_inc_ref(v_map_u2082_2746_);
lean_dec_ref(v_s_2735_);
v_buckets_2747_ = lean_ctor_get(v_map_u2081_2745_, 1);
lean_inc_ref(v_buckets_2747_);
lean_dec_ref(v_map_u2081_2745_);
v___x_2748_ = lean_unsigned_to_nat(0u);
v___x_2749_ = lean_array_get_size(v_buckets_2747_);
v___x_2750_ = lean_nat_dec_lt(v___x_2748_, v___x_2749_);
if (v___x_2750_ == 0)
{
lean_object* v___x_2751_; 
lean_dec_ref(v_buckets_2747_);
v___x_2751_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_2746_, v_f_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
return v___x_2751_;
}
else
{
lean_object* v___x_2752_; size_t v___x_2753_; size_t v___x_2754_; lean_object* v___x_2755_; 
v___x_2752_ = lean_box(0);
v___x_2753_ = ((size_t)0ULL);
v___x_2754_ = lean_usize_of_nat(v___x_2749_);
lean_inc_ref(v_f_2736_);
v___x_2755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_2736_, v_buckets_2747_, v___x_2753_, v___x_2754_, v___x_2752_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
lean_dec_ref(v_buckets_2747_);
if (lean_obj_tag(v___x_2755_) == 0)
{
lean_object* v_a_2756_; 
v_a_2756_ = lean_ctor_get(v___x_2755_, 0);
if (lean_obj_tag(v_a_2756_) == 0)
{
lean_dec_ref(v_map_u2082_2746_);
lean_dec_ref(v_f_2736_);
return v___x_2755_;
}
else
{
lean_object* v___x_2757_; 
lean_dec_ref_known(v___x_2755_, 1);
v___x_2757_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_2746_, v_f_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
return v___x_2757_;
}
}
else
{
lean_dec_ref(v_map_u2082_2746_);
lean_dec_ref(v_f_2736_);
return v___x_2755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object* v_s_2758_, lean_object* v_f_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_2758_, v_f_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec(v___y_2761_);
lean_dec_ref(v___y_2760_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object* v_f_2769_, lean_object* v_decl_2770_, lean_object* v_ci_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v___y_2782_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; uint8_t v___x_2823_; 
v___x_2820_ = lean_unsigned_to_nat(1u);
v___x_2821_ = lean_nat_add(v___y_2772_, v___x_2820_);
v___x_2822_ = lean_unsigned_to_nat(10000u);
v___x_2823_ = lean_nat_dec_le(v___x_2822_, v___x_2821_);
if (v___x_2823_ == 0)
{
v___y_2782_ = v___x_2821_;
goto v___jp_2781_;
}
else
{
lean_object* v___x_2824_; lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2841_; 
lean_dec(v___x_2821_);
v___x_2824_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_2775_);
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2827_ = v___x_2824_;
v_isShared_2828_ = v_isSharedCheck_2841_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2824_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2841_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
if (lean_obj_tag(v_a_2825_) == 0)
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2839_; 
lean_dec_ref(v_ci_2771_);
lean_dec(v_decl_2770_);
lean_dec_ref(v_f_2769_);
v_a_2829_ = lean_ctor_get(v_a_2825_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v_a_2825_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2831_ = v_a_2825_;
v_isShared_2832_ = v_isSharedCheck_2839_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v_a_2825_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2839_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2829_);
v___x_2834_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
lean_object* v___x_2836_; 
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v___x_2834_);
v___x_2836_ = v___x_2827_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v___x_2834_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
else
{
lean_object* v___x_2840_; 
lean_dec_ref_known(v_a_2825_, 1);
lean_del_object(v___x_2827_);
v___x_2840_ = lean_unsigned_to_nat(0u);
v___y_2782_ = v___x_2840_;
goto v___jp_2781_;
}
}
}
v___jp_2781_:
{
lean_object* v___x_2783_; 
lean_inc(v___y_2779_);
lean_inc_ref(v___y_2778_);
lean_inc(v___y_2777_);
lean_inc_ref(v___y_2776_);
lean_inc_ref(v___y_2775_);
lean_inc(v___y_2774_);
lean_inc_ref(v___y_2773_);
v___x_2783_ = lean_apply_10(v_f_2769_, v_decl_2770_, v_ci_2771_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, lean_box(0));
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2811_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2786_ = v___x_2783_;
v_isShared_2787_ = v_isSharedCheck_2811_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2783_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2811_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
if (lean_obj_tag(v_a_2784_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2798_; 
lean_dec(v___y_2782_);
v_a_2788_ = lean_ctor_get(v_a_2784_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_a_2784_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2790_ = v_a_2784_;
v_isShared_2791_ = v_isSharedCheck_2798_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v_a_2784_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2798_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
lean_object* v___x_2795_; 
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v___x_2793_);
v___x_2795_ = v___x_2786_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v___x_2793_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
else
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2810_; 
v_a_2799_ = lean_ctor_get(v_a_2784_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v_a_2784_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2801_ = v_a_2784_;
v_isShared_2802_ = v_isSharedCheck_2810_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v_a_2784_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2810_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2803_; lean_object* v___x_2805_; 
v___x_2803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2803_, 0, v_a_2799_);
lean_ctor_set(v___x_2803_, 1, v___y_2782_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 0, v___x_2803_);
v___x_2805_ = v___x_2801_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2803_);
v___x_2805_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
lean_object* v___x_2807_; 
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v___x_2805_);
v___x_2807_ = v___x_2786_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v___x_2805_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_dec(v___y_2782_);
v_a_2812_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2783_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2783_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object* v_f_2842_, lean_object* v_decl_2843_, lean_object* v_ci_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(v_f_2842_, v_decl_2843_, v_ci_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object* v_f_2855_, lean_object* v_keys_2856_, lean_object* v_vals_2857_, lean_object* v_i_2858_, lean_object* v_acc_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
lean_object* v___x_2869_; uint8_t v___x_2870_; 
v___x_2869_ = lean_array_get_size(v_keys_2856_);
v___x_2870_ = lean_nat_dec_lt(v_i_2858_, v___x_2869_);
if (v___x_2870_ == 0)
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
lean_dec(v_i_2858_);
lean_dec_ref(v_f_2855_);
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v_acc_2859_);
lean_ctor_set(v___x_2871_, 1, v___y_2860_);
v___x_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
v___x_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2872_);
return v___x_2873_;
}
else
{
lean_object* v_k_2874_; lean_object* v_v_2875_; lean_object* v___x_2876_; 
v_k_2874_ = lean_array_fget_borrowed(v_keys_2856_, v_i_2858_);
v_v_2875_ = lean_array_fget_borrowed(v_vals_2857_, v_i_2858_);
lean_inc_ref(v_f_2855_);
lean_inc(v___y_2867_);
lean_inc_ref(v___y_2866_);
lean_inc(v___y_2865_);
lean_inc_ref(v___y_2864_);
lean_inc_ref(v___y_2863_);
lean_inc(v___y_2862_);
lean_inc_ref(v___y_2861_);
lean_inc(v_v_2875_);
lean_inc(v_k_2874_);
v___x_2876_ = lean_apply_12(v_f_2855_, v_acc_2859_, v_k_2874_, v_v_2875_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, lean_box(0));
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
if (lean_obj_tag(v_a_2877_) == 0)
{
lean_dec_ref_known(v_a_2877_, 1);
lean_dec(v_i_2858_);
lean_dec_ref(v_f_2855_);
return v___x_2876_;
}
else
{
lean_object* v_a_2878_; lean_object* v_fst_2879_; lean_object* v_snd_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
lean_dec_ref_known(v___x_2876_, 1);
v_a_2878_ = lean_ctor_get(v_a_2877_, 0);
lean_inc(v_a_2878_);
lean_dec_ref_known(v_a_2877_, 1);
v_fst_2879_ = lean_ctor_get(v_a_2878_, 0);
lean_inc(v_fst_2879_);
v_snd_2880_ = lean_ctor_get(v_a_2878_, 1);
lean_inc(v_snd_2880_);
lean_dec(v_a_2878_);
v___x_2881_ = lean_unsigned_to_nat(1u);
v___x_2882_ = lean_nat_add(v_i_2858_, v___x_2881_);
lean_dec(v_i_2858_);
v_i_2858_ = v___x_2882_;
v_acc_2859_ = v_fst_2879_;
v___y_2860_ = v_snd_2880_;
goto _start;
}
}
else
{
lean_dec(v_i_2858_);
lean_dec_ref(v_f_2855_);
return v___x_2876_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object* v_f_2884_, lean_object* v_keys_2885_, lean_object* v_vals_2886_, lean_object* v_i_2887_, lean_object* v_acc_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_2884_, v_keys_2885_, v_vals_2886_, v_i_2887_, v_acc_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
lean_dec(v___y_2896_);
lean_dec_ref(v___y_2895_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec(v___y_2891_);
lean_dec_ref(v___y_2890_);
lean_dec_ref(v_vals_2886_);
lean_dec_ref(v_keys_2885_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object* v_f_2899_, lean_object* v_as_2900_, size_t v_i_2901_, size_t v_stop_2902_, lean_object* v_b_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v_fst_2914_; lean_object* v_snd_2915_; lean_object* v___y_2920_; uint8_t v___x_2925_; 
v___x_2925_ = lean_usize_dec_eq(v_i_2901_, v_stop_2902_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_array_uget_borrowed(v_as_2900_, v_i_2901_);
switch(lean_obj_tag(v___x_2926_))
{
case 0:
{
lean_object* v_key_2927_; lean_object* v_val_2928_; lean_object* v___x_2929_; 
v_key_2927_ = lean_ctor_get(v___x_2926_, 0);
v_val_2928_ = lean_ctor_get(v___x_2926_, 1);
lean_inc_ref(v_f_2899_);
lean_inc(v___y_2911_);
lean_inc_ref(v___y_2910_);
lean_inc(v___y_2909_);
lean_inc_ref(v___y_2908_);
lean_inc_ref(v___y_2907_);
lean_inc(v___y_2906_);
lean_inc_ref(v___y_2905_);
lean_inc(v_val_2928_);
lean_inc(v_key_2927_);
v___x_2929_ = lean_apply_12(v_f_2899_, v_b_2903_, v_key_2927_, v_val_2928_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, lean_box(0));
v___y_2920_ = v___x_2929_;
goto v___jp_2919_;
}
case 1:
{
lean_object* v_node_2930_; lean_object* v___x_2931_; 
v_node_2930_ = lean_ctor_get(v___x_2926_, 0);
lean_inc(v_node_2930_);
lean_inc_ref(v_f_2899_);
v___x_2931_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_2899_, v_node_2930_, v_b_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
v___y_2920_ = v___x_2931_;
goto v___jp_2919_;
}
default: 
{
v_fst_2914_ = v_b_2903_;
v_snd_2915_ = v___y_2904_;
goto v___jp_2913_;
}
}
}
else
{
lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
lean_dec_ref(v_f_2899_);
v___x_2932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2932_, 0, v_b_2903_);
lean_ctor_set(v___x_2932_, 1, v___y_2904_);
v___x_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
v___x_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
return v___x_2934_;
}
v___jp_2913_:
{
size_t v___x_2916_; size_t v___x_2917_; 
v___x_2916_ = ((size_t)1ULL);
v___x_2917_ = lean_usize_add(v_i_2901_, v___x_2916_);
v_i_2901_ = v___x_2917_;
v_b_2903_ = v_fst_2914_;
v___y_2904_ = v_snd_2915_;
goto _start;
}
v___jp_2919_:
{
if (lean_obj_tag(v___y_2920_) == 0)
{
lean_object* v_a_2921_; 
v_a_2921_ = lean_ctor_get(v___y_2920_, 0);
if (lean_obj_tag(v_a_2921_) == 0)
{
lean_dec_ref(v_f_2899_);
return v___y_2920_;
}
else
{
lean_object* v_a_2922_; lean_object* v_fst_2923_; lean_object* v_snd_2924_; 
lean_inc_ref(v_a_2921_);
lean_dec_ref_known(v___y_2920_, 1);
v_a_2922_ = lean_ctor_get(v_a_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v_a_2921_, 1);
v_fst_2923_ = lean_ctor_get(v_a_2922_, 0);
lean_inc(v_fst_2923_);
v_snd_2924_ = lean_ctor_get(v_a_2922_, 1);
lean_inc(v_snd_2924_);
lean_dec(v_a_2922_);
v_fst_2914_ = v_fst_2923_;
v_snd_2915_ = v_snd_2924_;
goto v___jp_2913_;
}
}
else
{
lean_dec_ref(v_f_2899_);
return v___y_2920_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object* v_f_2935_, lean_object* v_x_2936_, lean_object* v_x_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
if (lean_obj_tag(v_x_2936_) == 0)
{
lean_object* v_es_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2962_; 
v_es_2947_ = lean_ctor_get(v_x_2936_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v_x_2936_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2949_ = v_x_2936_;
v_isShared_2950_ = v_isSharedCheck_2962_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_es_2947_);
lean_dec(v_x_2936_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2962_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; 
v___x_2951_ = lean_unsigned_to_nat(0u);
v___x_2952_ = lean_array_get_size(v_es_2947_);
v___x_2953_ = lean_nat_dec_lt(v___x_2951_, v___x_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2954_; lean_object* v___x_2956_; 
lean_dec_ref(v_es_2947_);
lean_dec_ref(v_f_2935_);
v___x_2954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2954_, 0, v_x_2937_);
lean_ctor_set(v___x_2954_, 1, v___y_2938_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set_tag(v___x_2949_, 1);
lean_ctor_set(v___x_2949_, 0, v___x_2954_);
v___x_2956_ = v___x_2949_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v___x_2954_);
v___x_2956_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2957_; 
v___x_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
return v___x_2957_;
}
}
else
{
size_t v___x_2959_; size_t v___x_2960_; lean_object* v___x_2961_; 
lean_del_object(v___x_2949_);
v___x_2959_ = ((size_t)0ULL);
v___x_2960_ = lean_usize_of_nat(v___x_2952_);
v___x_2961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_2935_, v_es_2947_, v___x_2959_, v___x_2960_, v_x_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
lean_dec_ref(v_es_2947_);
return v___x_2961_;
}
}
}
else
{
lean_object* v_ks_2963_; lean_object* v_vs_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v_ks_2963_ = lean_ctor_get(v_x_2936_, 0);
lean_inc_ref(v_ks_2963_);
v_vs_2964_ = lean_ctor_get(v_x_2936_, 1);
lean_inc_ref(v_vs_2964_);
lean_dec_ref_known(v_x_2936_, 2);
v___x_2965_ = lean_unsigned_to_nat(0u);
v___x_2966_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_2935_, v_ks_2963_, v_vs_2964_, v___x_2965_, v_x_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
lean_dec_ref(v_vs_2964_);
lean_dec_ref(v_ks_2963_);
return v___x_2966_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object* v_f_2967_, lean_object* v_x_2968_, lean_object* v_x_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_){
_start:
{
lean_object* v_res_2979_; 
v_res_2979_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_2967_, v_x_2968_, v_x_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2973_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object* v_f_2980_, lean_object* v_as_2981_, lean_object* v_i_2982_, lean_object* v_stop_2983_, lean_object* v_b_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
size_t v_i_boxed_2994_; size_t v_stop_boxed_2995_; lean_object* v_res_2996_; 
v_i_boxed_2994_ = lean_unbox_usize(v_i_2982_);
lean_dec(v_i_2982_);
v_stop_boxed_2995_ = lean_unbox_usize(v_stop_2983_);
lean_dec(v_stop_2983_);
v_res_2996_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_2980_, v_as_2981_, v_i_boxed_2994_, v_stop_boxed_2995_, v_b_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec_ref(v_as_2981_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_f_2997_, lean_object* v_x_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_){
_start:
{
lean_object* v___x_3010_; 
lean_inc(v___y_3008_);
lean_inc_ref(v___y_3007_);
lean_inc(v___y_3006_);
lean_inc_ref(v___y_3005_);
lean_inc_ref(v___y_3004_);
lean_inc(v___y_3003_);
lean_inc_ref(v___y_3002_);
v___x_3010_ = lean_apply_11(v_f_2997_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, lean_box(0));
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_f_3011_, lean_object* v_x_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v_res_3024_; 
v_res_3024_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(v_f_3011_, v_x_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object* v_map_3025_, lean_object* v_f_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v___f_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___f_3036_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_3036_, 0, v_f_3026_);
v___x_3037_ = lean_box(0);
v___x_3038_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v___f_3036_, v_map_3025_, v___x_3037_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_map_3039_, lean_object* v_f_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_3039_, v_f_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object* v_f_3051_, lean_object* v_x_3052_, lean_object* v_x_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_){
_start:
{
if (lean_obj_tag(v_x_3053_) == 0)
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
lean_dec_ref(v_f_3051_);
v___x_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3063_, 0, v_x_3052_);
lean_ctor_set(v___x_3063_, 1, v___y_3054_);
v___x_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
v___x_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3064_);
return v___x_3065_;
}
else
{
lean_object* v_key_3066_; lean_object* v_value_3067_; lean_object* v_tail_3068_; lean_object* v___x_3069_; 
v_key_3066_ = lean_ctor_get(v_x_3053_, 0);
lean_inc(v_key_3066_);
v_value_3067_ = lean_ctor_get(v_x_3053_, 1);
lean_inc(v_value_3067_);
v_tail_3068_ = lean_ctor_get(v_x_3053_, 2);
lean_inc(v_tail_3068_);
lean_dec_ref_known(v_x_3053_, 3);
lean_inc_ref(v_f_3051_);
lean_inc(v___y_3061_);
lean_inc_ref(v___y_3060_);
lean_inc(v___y_3059_);
lean_inc_ref(v___y_3058_);
lean_inc_ref(v___y_3057_);
lean_inc(v___y_3056_);
lean_inc_ref(v___y_3055_);
v___x_3069_ = lean_apply_11(v_f_3051_, v_key_3066_, v_value_3067_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, lean_box(0));
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
if (lean_obj_tag(v_a_3070_) == 0)
{
lean_dec_ref_known(v_a_3070_, 1);
lean_dec(v_tail_3068_);
lean_dec_ref(v_f_3051_);
return v___x_3069_;
}
else
{
lean_object* v_a_3071_; lean_object* v_fst_3072_; lean_object* v_snd_3073_; 
lean_dec_ref_known(v___x_3069_, 1);
v_a_3071_ = lean_ctor_get(v_a_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref_known(v_a_3070_, 1);
v_fst_3072_ = lean_ctor_get(v_a_3071_, 0);
lean_inc(v_fst_3072_);
v_snd_3073_ = lean_ctor_get(v_a_3071_, 1);
lean_inc(v_snd_3073_);
lean_dec(v_a_3071_);
v_x_3052_ = v_fst_3072_;
v_x_3053_ = v_tail_3068_;
v___y_3054_ = v_snd_3073_;
goto _start;
}
}
else
{
lean_dec(v_tail_3068_);
lean_dec_ref(v_f_3051_);
return v___x_3069_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_f_3075_, lean_object* v_x_3076_, lean_object* v_x_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v_res_3087_; 
v_res_3087_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_3075_, v_x_3076_, v_x_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
lean_dec(v___y_3083_);
lean_dec_ref(v___y_3082_);
lean_dec_ref(v___y_3081_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object* v_f_3088_, lean_object* v_as_3089_, size_t v_i_3090_, size_t v_stop_3091_, lean_object* v_b_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_){
_start:
{
uint8_t v___x_3102_; 
v___x_3102_ = lean_usize_dec_eq(v_i_3090_, v_stop_3091_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3103_ = lean_array_uget_borrowed(v_as_3089_, v_i_3090_);
v___x_3104_ = lean_box(0);
lean_inc(v___x_3103_);
lean_inc_ref(v_f_3088_);
v___x_3105_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_3088_, v___x_3104_, v___x_3103_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
if (lean_obj_tag(v_a_3106_) == 0)
{
lean_dec_ref(v_f_3088_);
return v___x_3105_;
}
else
{
lean_object* v_a_3107_; lean_object* v_fst_3108_; lean_object* v_snd_3109_; size_t v___x_3110_; size_t v___x_3111_; 
lean_inc_ref(v_a_3106_);
lean_dec_ref_known(v___x_3105_, 1);
v_a_3107_ = lean_ctor_get(v_a_3106_, 0);
lean_inc(v_a_3107_);
lean_dec_ref_known(v_a_3106_, 1);
v_fst_3108_ = lean_ctor_get(v_a_3107_, 0);
lean_inc(v_fst_3108_);
v_snd_3109_ = lean_ctor_get(v_a_3107_, 1);
lean_inc(v_snd_3109_);
lean_dec(v_a_3107_);
v___x_3110_ = ((size_t)1ULL);
v___x_3111_ = lean_usize_add(v_i_3090_, v___x_3110_);
v_i_3090_ = v___x_3111_;
v_b_3092_ = v_fst_3108_;
v___y_3093_ = v_snd_3109_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_3088_);
return v___x_3105_;
}
}
else
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
lean_dec_ref(v_f_3088_);
v___x_3113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3113_, 0, v_b_3092_);
lean_ctor_set(v___x_3113_, 1, v___y_3093_);
v___x_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
v___x_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
return v___x_3115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object* v_f_3116_, lean_object* v_as_3117_, lean_object* v_i_3118_, lean_object* v_stop_3119_, lean_object* v_b_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
size_t v_i_boxed_3130_; size_t v_stop_boxed_3131_; lean_object* v_res_3132_; 
v_i_boxed_3130_ = lean_unbox_usize(v_i_3118_);
lean_dec(v_i_3118_);
v_stop_boxed_3131_ = lean_unbox_usize(v_stop_3119_);
lean_dec(v_stop_3119_);
v_res_3132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_3116_, v_as_3117_, v_i_boxed_3130_, v_stop_boxed_3131_, v_b_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec_ref(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3122_);
lean_dec_ref(v_as_3117_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object* v_env_3133_, lean_object* v_f_3134_, lean_object* v_name_3135_, lean_object* v_c_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
uint8_t v___x_3146_; 
lean_inc(v_name_3135_);
v___x_3146_ = l_Lean_Meta_allowCompletion(v_env_3133_, v_name_3135_);
if (v___x_3146_ == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
lean_dec_ref(v_c_3136_);
lean_dec(v_name_3135_);
lean_dec_ref(v_f_3134_);
v___x_3147_ = lean_box(0);
v___x_3148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
lean_ctor_set(v___x_3148_, 1, v___y_3137_);
v___x_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
v___x_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3149_);
return v___x_3150_;
}
else
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
lean_inc_ref(v_c_3136_);
v___x_3151_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionKindForDecl___boxed), 6, 1);
lean_closure_set(v___x_3151_, 0, v_c_3136_);
lean_inc(v_name_3135_);
v___x_3152_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionTagsForDecl___boxed), 6, 1);
lean_closure_set(v___x_3152_, 0, v_name_3135_);
v___x_3153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3153_, 0, v_c_3136_);
lean_ctor_set(v___x_3153_, 1, v___x_3151_);
lean_ctor_set(v___x_3153_, 2, v___x_3152_);
lean_inc(v___y_3144_);
lean_inc_ref(v___y_3143_);
lean_inc(v___y_3142_);
lean_inc_ref(v___y_3141_);
lean_inc_ref(v___y_3140_);
lean_inc(v___y_3139_);
lean_inc_ref(v___y_3138_);
v___x_3154_ = lean_apply_11(v_f_3134_, v_name_3135_, v___x_3153_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, lean_box(0));
return v___x_3154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object* v_env_3155_, lean_object* v_f_3156_, lean_object* v_name_3157_, lean_object* v_c_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(v_env_3155_, v_f_3156_, v_name_3157_, v_c_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object* v_f_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
lean_object* v___x_3179_; lean_object* v_env_3180_; lean_object* v___f_3181_; lean_object* v___x_3182_; 
v___x_3179_ = lean_st_ref_get(v___y_3177_);
v_env_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc_ref_n(v_env_3180_, 3);
lean_dec(v___x_3179_);
lean_inc_ref(v_f_3169_);
v___f_3181_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed), 13, 2);
lean_closure_set(v___f_3181_, 0, v_env_3180_);
lean_closure_set(v___f_3181_, 1, v_f_3169_);
v___x_3182_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_3180_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v_buckets_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; uint8_t v___x_3187_; 
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
lean_inc(v_a_3183_);
lean_dec_ref_known(v___x_3182_, 1);
v_buckets_3184_ = lean_ctor_get(v_a_3183_, 1);
lean_inc_ref(v_buckets_3184_);
lean_dec(v_a_3183_);
v___x_3185_ = lean_unsigned_to_nat(0u);
v___x_3186_ = lean_array_get_size(v_buckets_3184_);
v___x_3187_ = lean_nat_dec_lt(v___x_3185_, v___x_3186_);
if (v___x_3187_ == 0)
{
lean_object* v___x_3188_; lean_object* v_map_u2082_3189_; lean_object* v___x_3190_; 
lean_dec_ref(v_buckets_3184_);
lean_dec_ref(v_f_3169_);
v___x_3188_ = l_Lean_Environment_constants(v_env_3180_);
v_map_u2082_3189_ = lean_ctor_get(v___x_3188_, 1);
lean_inc_ref(v_map_u2082_3189_);
lean_dec_ref(v___x_3188_);
v___x_3190_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_3189_, v___f_3181_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_);
return v___x_3190_;
}
else
{
lean_object* v___x_3191_; size_t v___x_3192_; size_t v___x_3193_; lean_object* v___x_3194_; 
v___x_3191_ = lean_box(0);
v___x_3192_ = ((size_t)0ULL);
v___x_3193_ = lean_usize_of_nat(v___x_3186_);
v___x_3194_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_3169_, v_buckets_3184_, v___x_3192_, v___x_3193_, v___x_3191_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_);
lean_dec_ref(v_buckets_3184_);
if (lean_obj_tag(v___x_3194_) == 0)
{
lean_object* v_a_3195_; 
v_a_3195_ = lean_ctor_get(v___x_3194_, 0);
if (lean_obj_tag(v_a_3195_) == 0)
{
lean_dec_ref(v___f_3181_);
lean_dec_ref(v_env_3180_);
return v___x_3194_;
}
else
{
lean_object* v_a_3196_; lean_object* v_snd_3197_; lean_object* v___x_3198_; lean_object* v_map_u2082_3199_; lean_object* v___x_3200_; 
lean_inc_ref(v_a_3195_);
lean_dec_ref_known(v___x_3194_, 1);
v_a_3196_ = lean_ctor_get(v_a_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref_known(v_a_3195_, 1);
v_snd_3197_ = lean_ctor_get(v_a_3196_, 1);
lean_inc(v_snd_3197_);
lean_dec(v_a_3196_);
v___x_3198_ = l_Lean_Environment_constants(v_env_3180_);
v_map_u2082_3199_ = lean_ctor_get(v___x_3198_, 1);
lean_inc_ref(v_map_u2082_3199_);
lean_dec_ref(v___x_3198_);
v___x_3200_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_3199_, v___f_3181_, v_snd_3197_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_);
return v___x_3200_;
}
}
else
{
lean_dec_ref(v___f_3181_);
lean_dec_ref(v_env_3180_);
return v___x_3194_;
}
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
lean_dec_ref(v___f_3181_);
lean_dec_ref(v_env_3180_);
lean_dec(v___y_3170_);
lean_dec_ref(v_f_3169_);
v_a_3201_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3182_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3182_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object* v_f_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v_f_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec_ref(v___y_3213_);
lean_dec(v___y_3212_);
lean_dec_ref(v___y_3211_);
return v_res_3219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object* v_f_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v___f_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___f_3229_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3229_, 0, v_f_3220_);
v___x_3230_ = lean_unsigned_to_nat(0u);
v___x_3231_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v___f_3229_, v___x_3230_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_a_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3251_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3234_ = v___x_3231_;
v_isShared_3235_ = v_isSharedCheck_3251_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_a_3232_);
lean_dec(v___x_3231_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3251_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
if (lean_obj_tag(v_a_3232_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3246_; 
v_a_3236_ = lean_ctor_get(v_a_3232_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v_a_3232_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3238_ = v_a_3232_;
v_isShared_3239_ = v_isSharedCheck_3246_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v_a_3232_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3246_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3243_; 
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 0, v___x_3241_);
v___x_3243_ = v___x_3234_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v___x_3241_);
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
else
{
lean_object* v___x_3247_; lean_object* v___x_3249_; 
lean_dec_ref_known(v_a_3232_, 1);
v___x_3247_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 0, v___x_3247_);
v___x_3249_ = v___x_3234_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3247_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
else
{
lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3259_; 
v_a_3252_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3254_ = v___x_3231_;
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_dec(v___x_3231_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3252_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object* v_f_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v_res_3269_; 
v_res_3269_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v_f_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
return v_res_3269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object* v_id_3272_, uint8_t v_danglingDot_3273_, lean_object* v_as_3274_, size_t v_sz_3275_, size_t v_i_3276_, lean_object* v_b_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_){
_start:
{
uint8_t v___x_3281_; 
v___x_3281_ = lean_usize_dec_lt(v_i_3276_, v_sz_3275_);
if (v___x_3281_ == 0)
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_b_3277_);
v___x_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
else
{
lean_object* v_snd_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3337_; 
v_snd_3284_ = lean_ctor_get(v_b_3277_, 1);
v_isSharedCheck_3337_ = !lean_is_exclusive(v_b_3277_);
if (v_isSharedCheck_3337_ == 0)
{
lean_object* v_unused_3338_; 
v_unused_3338_ = lean_ctor_get(v_b_3277_, 0);
lean_dec(v_unused_3338_);
v___x_3286_ = v_b_3277_;
v_isShared_3287_ = v_isSharedCheck_3337_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_snd_3284_);
lean_dec(v_b_3277_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3337_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3288_; lean_object* v_a_3290_; lean_object* v_a_3297_; 
v___x_3288_ = lean_box(0);
v_a_3297_ = lean_array_uget(v_as_3274_, v_i_3276_);
if (lean_obj_tag(v_a_3297_) == 0)
{
v_a_3290_ = v_snd_3284_;
goto v___jp_3289_;
}
else
{
lean_object* v_val_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3336_; 
lean_dec(v_snd_3284_);
v_val_3298_ = lean_ctor_get(v_a_3297_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v_a_3297_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3300_ = v_a_3297_;
v_isShared_3301_ = v_isSharedCheck_3336_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_val_3298_);
lean_dec(v_a_3297_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3336_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; uint8_t v___x_3304_; 
v___x_3302_ = lean_box(0);
v___x_3303_ = l_Lean_LocalDecl_userName(v_val_3298_);
v___x_3304_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3272_, v___x_3303_, v_danglingDot_3273_);
if (v___x_3304_ == 0)
{
lean_dec(v___x_3303_);
lean_del_object(v___x_3300_);
lean_dec(v_val_3298_);
v_a_3290_ = v___x_3302_;
goto v___jp_3289_;
}
else
{
lean_object* v___x_3305_; lean_object* v___x_3307_; 
v___x_3305_ = l_Lean_LocalDecl_fvarId(v_val_3298_);
lean_dec(v_val_3298_);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 0, v___x_3305_);
v___x_3307_ = v___x_3300_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v___x_3305_);
v___x_3307_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
uint8_t v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3308_ = 5;
v___x_3309_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3310_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3303_, v___x_3307_, v___x_3308_, v___x_3309_, v___y_3278_, v___y_3279_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3326_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3313_ = v___x_3310_;
v_isShared_3314_ = v_isSharedCheck_3326_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3310_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3326_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
if (lean_obj_tag(v_a_3311_) == 0)
{
lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3325_; 
lean_del_object(v___x_3286_);
v_a_3315_ = lean_ctor_get(v_a_3311_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v_a_3311_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3317_ = v_a_3311_;
v_isShared_3318_ = v_isSharedCheck_3325_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v_a_3311_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3325_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3318_ == 0)
{
v___x_3320_ = v___x_3317_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3315_);
v___x_3320_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
lean_object* v___x_3322_; 
if (v_isShared_3314_ == 0)
{
lean_ctor_set(v___x_3313_, 0, v___x_3320_);
v___x_3322_ = v___x_3313_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3311_, 1);
lean_del_object(v___x_3313_);
v_a_3290_ = v___x_3302_;
goto v___jp_3289_;
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_del_object(v___x_3286_);
v_a_3327_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3310_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3310_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
}
}
}
v___jp_3289_:
{
lean_object* v___x_3292_; 
if (v_isShared_3287_ == 0)
{
lean_ctor_set(v___x_3286_, 1, v_a_3290_);
lean_ctor_set(v___x_3286_, 0, v___x_3288_);
v___x_3292_ = v___x_3286_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3288_);
lean_ctor_set(v_reuseFailAlloc_3296_, 1, v_a_3290_);
v___x_3292_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
size_t v___x_3293_; size_t v___x_3294_; 
v___x_3293_ = ((size_t)1ULL);
v___x_3294_ = lean_usize_add(v_i_3276_, v___x_3293_);
v_i_3276_ = v___x_3294_;
v_b_3277_ = v___x_3292_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object* v_id_3339_, lean_object* v_danglingDot_3340_, lean_object* v_as_3341_, lean_object* v_sz_3342_, lean_object* v_i_3343_, lean_object* v_b_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
uint8_t v_danglingDot_boxed_3348_; size_t v_sz_boxed_3349_; size_t v_i_boxed_3350_; lean_object* v_res_3351_; 
v_danglingDot_boxed_3348_ = lean_unbox(v_danglingDot_3340_);
v_sz_boxed_3349_ = lean_unbox_usize(v_sz_3342_);
lean_dec(v_sz_3342_);
v_i_boxed_3350_ = lean_unbox_usize(v_i_3343_);
lean_dec(v_i_3343_);
v_res_3351_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_3339_, v_danglingDot_boxed_3348_, v_as_3341_, v_sz_boxed_3349_, v_i_boxed_3350_, v_b_3344_, v___y_3345_, v___y_3346_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec_ref(v_as_3341_);
lean_dec(v_id_3339_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object* v_id_3352_, uint8_t v_danglingDot_3353_, lean_object* v_as_3354_, size_t v_sz_3355_, size_t v_i_3356_, lean_object* v_b_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_){
_start:
{
uint8_t v___x_3366_; 
v___x_3366_ = lean_usize_dec_lt(v_i_3356_, v_sz_3355_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3367_, 0, v_b_3357_);
v___x_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
return v___x_3368_;
}
else
{
lean_object* v_snd_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3422_; 
v_snd_3369_ = lean_ctor_get(v_b_3357_, 1);
v_isSharedCheck_3422_ = !lean_is_exclusive(v_b_3357_);
if (v_isSharedCheck_3422_ == 0)
{
lean_object* v_unused_3423_; 
v_unused_3423_ = lean_ctor_get(v_b_3357_, 0);
lean_dec(v_unused_3423_);
v___x_3371_ = v_b_3357_;
v_isShared_3372_ = v_isSharedCheck_3422_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_snd_3369_);
lean_dec(v_b_3357_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3422_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3373_; lean_object* v_a_3375_; lean_object* v_a_3382_; 
v___x_3373_ = lean_box(0);
v_a_3382_ = lean_array_uget(v_as_3354_, v_i_3356_);
if (lean_obj_tag(v_a_3382_) == 0)
{
v_a_3375_ = v_snd_3369_;
goto v___jp_3374_;
}
else
{
lean_object* v_val_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3421_; 
lean_dec(v_snd_3369_);
v_val_3383_ = lean_ctor_get(v_a_3382_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v_a_3382_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3385_ = v_a_3382_;
v_isShared_3386_ = v_isSharedCheck_3421_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_val_3383_);
lean_dec(v_a_3382_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3421_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; uint8_t v___x_3389_; 
v___x_3387_ = lean_box(0);
v___x_3388_ = l_Lean_LocalDecl_userName(v_val_3383_);
v___x_3389_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3352_, v___x_3388_, v_danglingDot_3353_);
if (v___x_3389_ == 0)
{
lean_dec(v___x_3388_);
lean_del_object(v___x_3385_);
lean_dec(v_val_3383_);
v_a_3375_ = v___x_3387_;
goto v___jp_3374_;
}
else
{
lean_object* v___x_3390_; lean_object* v___x_3392_; 
v___x_3390_ = l_Lean_LocalDecl_fvarId(v_val_3383_);
lean_dec(v_val_3383_);
if (v_isShared_3386_ == 0)
{
lean_ctor_set(v___x_3385_, 0, v___x_3390_);
v___x_3392_ = v___x_3385_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
uint8_t v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3393_ = 5;
v___x_3394_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3395_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3388_, v___x_3392_, v___x_3393_, v___x_3394_, v___y_3358_, v___y_3359_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3411_; 
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3398_ = v___x_3395_;
v_isShared_3399_ = v_isSharedCheck_3411_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3395_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3411_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
if (lean_obj_tag(v_a_3396_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3410_; 
lean_del_object(v___x_3371_);
v_a_3400_ = lean_ctor_get(v_a_3396_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v_a_3396_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3402_ = v_a_3396_;
v_isShared_3403_ = v_isSharedCheck_3410_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v_a_3396_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3410_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v___x_3405_; 
if (v_isShared_3403_ == 0)
{
v___x_3405_ = v___x_3402_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3400_);
v___x_3405_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
lean_object* v___x_3407_; 
if (v_isShared_3399_ == 0)
{
lean_ctor_set(v___x_3398_, 0, v___x_3405_);
v___x_3407_ = v___x_3398_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3396_, 1);
lean_del_object(v___x_3398_);
v_a_3375_ = v___x_3387_;
goto v___jp_3374_;
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_del_object(v___x_3371_);
v_a_3412_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3395_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3395_);
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
}
v___jp_3374_:
{
lean_object* v___x_3377_; 
if (v_isShared_3372_ == 0)
{
lean_ctor_set(v___x_3371_, 1, v_a_3375_);
lean_ctor_set(v___x_3371_, 0, v___x_3373_);
v___x_3377_ = v___x_3371_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v___x_3373_);
lean_ctor_set(v_reuseFailAlloc_3381_, 1, v_a_3375_);
v___x_3377_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
size_t v___x_3378_; size_t v___x_3379_; lean_object* v___x_3380_; 
v___x_3378_ = ((size_t)1ULL);
v___x_3379_ = lean_usize_add(v_i_3356_, v___x_3378_);
v___x_3380_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_3352_, v_danglingDot_3353_, v_as_3354_, v_sz_3355_, v___x_3379_, v___x_3377_, v___y_3358_, v___y_3359_);
return v___x_3380_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object* v_id_3424_, lean_object* v_danglingDot_3425_, lean_object* v_as_3426_, lean_object* v_sz_3427_, lean_object* v_i_3428_, lean_object* v_b_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_){
_start:
{
uint8_t v_danglingDot_boxed_3438_; size_t v_sz_boxed_3439_; size_t v_i_boxed_3440_; lean_object* v_res_3441_; 
v_danglingDot_boxed_3438_ = lean_unbox(v_danglingDot_3425_);
v_sz_boxed_3439_ = lean_unbox_usize(v_sz_3427_);
lean_dec(v_sz_3427_);
v_i_boxed_3440_ = lean_unbox_usize(v_i_3428_);
lean_dec(v_i_3428_);
v_res_3441_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_3424_, v_danglingDot_boxed_3438_, v_as_3426_, v_sz_boxed_3439_, v_i_boxed_3440_, v_b_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec_ref(v_as_3426_);
lean_dec(v_id_3424_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object* v_init_3442_, lean_object* v_id_3443_, uint8_t v_danglingDot_3444_, lean_object* v_n_3445_, lean_object* v_b_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
if (lean_obj_tag(v_n_3445_) == 0)
{
lean_object* v_cs_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; size_t v_sz_3458_; size_t v___x_3459_; lean_object* v___x_3460_; 
v_cs_3455_ = lean_ctor_get(v_n_3445_, 0);
v___x_3456_ = lean_box(0);
v___x_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
lean_ctor_set(v___x_3457_, 1, v_b_3446_);
v_sz_3458_ = lean_array_size(v_cs_3455_);
v___x_3459_ = ((size_t)0ULL);
v___x_3460_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_3442_, v_id_3443_, v_danglingDot_3444_, v_cs_3455_, v_sz_3458_, v___x_3459_, v___x_3457_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3497_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3463_ = v___x_3460_;
v_isShared_3464_ = v_isSharedCheck_3497_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3460_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3497_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
if (lean_obj_tag(v_a_3461_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3475_; 
v_a_3465_ = lean_ctor_get(v_a_3461_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v_a_3461_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3467_ = v_a_3461_;
v_isShared_3468_ = v_isSharedCheck_3475_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_a_3465_);
lean_dec(v_a_3461_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3475_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3470_; 
if (v_isShared_3468_ == 0)
{
v___x_3470_ = v___x_3467_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3465_);
v___x_3470_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
lean_object* v___x_3472_; 
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3470_);
v___x_3472_ = v___x_3463_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v___x_3470_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
else
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3496_; 
v_a_3476_ = lean_ctor_get(v_a_3461_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v_a_3461_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3478_ = v_a_3461_;
v_isShared_3479_ = v_isSharedCheck_3496_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v_a_3461_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3496_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v_fst_3480_; 
v_fst_3480_ = lean_ctor_get(v_a_3476_, 0);
if (lean_obj_tag(v_fst_3480_) == 0)
{
lean_object* v_snd_3481_; lean_object* v___x_3482_; lean_object* v___x_3484_; 
v_snd_3481_ = lean_ctor_get(v_a_3476_, 1);
lean_inc(v_snd_3481_);
lean_dec(v_a_3476_);
v___x_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3482_, 0, v_snd_3481_);
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 0, v___x_3482_);
v___x_3484_ = v___x_3478_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v___x_3482_);
v___x_3484_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3486_; 
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3484_);
v___x_3486_ = v___x_3463_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v___x_3484_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
}
else
{
lean_object* v_val_3489_; lean_object* v___x_3491_; 
lean_inc_ref(v_fst_3480_);
lean_dec(v_a_3476_);
v_val_3489_ = lean_ctor_get(v_fst_3480_, 0);
lean_inc(v_val_3489_);
lean_dec_ref_known(v_fst_3480_, 1);
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 0, v_val_3489_);
v___x_3491_ = v___x_3478_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_val_3489_);
v___x_3491_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
lean_object* v___x_3493_; 
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3491_);
v___x_3493_ = v___x_3463_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3491_);
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
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
v_a_3498_ = lean_ctor_get(v___x_3460_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___x_3460_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3460_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_a_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
else
{
lean_object* v_vs_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; size_t v_sz_3509_; size_t v___x_3510_; lean_object* v___x_3511_; 
v_vs_3506_ = lean_ctor_get(v_n_3445_, 0);
v___x_3507_ = lean_box(0);
v___x_3508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
lean_ctor_set(v___x_3508_, 1, v_b_3446_);
v_sz_3509_ = lean_array_size(v_vs_3506_);
v___x_3510_ = ((size_t)0ULL);
v___x_3511_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_3443_, v_danglingDot_3444_, v_vs_3506_, v_sz_3509_, v___x_3510_, v___x_3508_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3548_; 
v_a_3512_ = lean_ctor_get(v___x_3511_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3514_ = v___x_3511_;
v_isShared_3515_ = v_isSharedCheck_3548_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3511_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3548_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
if (lean_obj_tag(v_a_3512_) == 0)
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3526_; 
v_a_3516_ = lean_ctor_get(v_a_3512_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v_a_3512_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3518_ = v_a_3512_;
v_isShared_3519_ = v_isSharedCheck_3526_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v_a_3512_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3526_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
lean_object* v___x_3523_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v___x_3521_);
v___x_3523_ = v___x_3514_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3521_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
}
}
}
}
else
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3547_; 
v_a_3527_ = lean_ctor_get(v_a_3512_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v_a_3512_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3529_ = v_a_3512_;
v_isShared_3530_ = v_isSharedCheck_3547_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v_a_3512_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3547_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v_fst_3531_; 
v_fst_3531_ = lean_ctor_get(v_a_3527_, 0);
if (lean_obj_tag(v_fst_3531_) == 0)
{
lean_object* v_snd_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
v_snd_3532_ = lean_ctor_get(v_a_3527_, 1);
lean_inc(v_snd_3532_);
lean_dec(v_a_3527_);
v___x_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3533_, 0, v_snd_3532_);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v___x_3533_);
v___x_3535_ = v___x_3529_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3537_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v___x_3535_);
v___x_3537_ = v___x_3514_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3535_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
else
{
lean_object* v_val_3540_; lean_object* v___x_3542_; 
lean_inc_ref(v_fst_3531_);
lean_dec(v_a_3527_);
v_val_3540_ = lean_ctor_get(v_fst_3531_, 0);
lean_inc(v_val_3540_);
lean_dec_ref_known(v_fst_3531_, 1);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v_val_3540_);
v___x_3542_ = v___x_3529_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_val_3540_);
v___x_3542_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
lean_object* v___x_3544_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v___x_3542_);
v___x_3544_ = v___x_3514_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v___x_3542_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3556_; 
v_a_3549_ = lean_ctor_get(v___x_3511_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3551_ = v___x_3511_;
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3511_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3549_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object* v_init_3557_, lean_object* v_id_3558_, uint8_t v_danglingDot_3559_, lean_object* v_as_3560_, size_t v_sz_3561_, size_t v_i_3562_, lean_object* v_b_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_){
_start:
{
uint8_t v___x_3572_; 
v___x_3572_ = lean_usize_dec_lt(v_i_3562_, v_sz_3561_);
if (v___x_3572_ == 0)
{
lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3573_, 0, v_b_3563_);
v___x_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3573_);
return v___x_3574_;
}
else
{
lean_object* v_snd_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3628_; 
v_snd_3575_ = lean_ctor_get(v_b_3563_, 1);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_b_3563_);
if (v_isSharedCheck_3628_ == 0)
{
lean_object* v_unused_3629_; 
v_unused_3629_ = lean_ctor_get(v_b_3563_, 0);
lean_dec(v_unused_3629_);
v___x_3577_ = v_b_3563_;
v_isShared_3578_ = v_isSharedCheck_3628_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_snd_3575_);
lean_dec(v_b_3563_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3628_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3579_; lean_object* v_a_3580_; lean_object* v___x_3581_; 
v___x_3579_ = lean_box(0);
v_a_3580_ = lean_array_uget_borrowed(v_as_3560_, v_i_3562_);
lean_inc(v_snd_3575_);
v___x_3581_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3557_, v_id_3558_, v_danglingDot_3559_, v_a_3580_, v_snd_3575_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3619_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3584_ = v___x_3581_;
v_isShared_3585_ = v_isSharedCheck_3619_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3619_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
if (lean_obj_tag(v_a_3582_) == 0)
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3596_; 
lean_del_object(v___x_3577_);
lean_dec(v_snd_3575_);
v_a_3586_ = lean_ctor_get(v_a_3582_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v_a_3582_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3588_ = v_a_3582_;
v_isShared_3589_ = v_isSharedCheck_3596_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v_a_3582_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3596_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3591_; 
if (v_isShared_3589_ == 0)
{
v___x_3591_ = v___x_3588_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3586_);
v___x_3591_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
lean_object* v___x_3593_; 
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3591_);
v___x_3593_ = v___x_3584_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3591_);
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
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3618_; 
v_a_3597_ = lean_ctor_get(v_a_3582_, 0);
v_isSharedCheck_3618_ = !lean_is_exclusive(v_a_3582_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3599_ = v_a_3582_;
v_isShared_3600_ = v_isSharedCheck_3618_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v_a_3582_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3618_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
if (lean_obj_tag(v_a_3597_) == 0)
{
lean_object* v___x_3601_; lean_object* v___x_3603_; 
v___x_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3601_, 0, v_a_3597_);
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3601_);
v___x_3603_ = v___x_3577_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3601_);
lean_ctor_set(v_reuseFailAlloc_3610_, 1, v_snd_3575_);
v___x_3603_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
lean_object* v___x_3605_; 
if (v_isShared_3600_ == 0)
{
lean_ctor_set(v___x_3599_, 0, v___x_3603_);
v___x_3605_ = v___x_3599_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v___x_3603_);
v___x_3605_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
lean_object* v___x_3607_; 
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3605_);
v___x_3607_ = v___x_3584_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3605_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
else
{
lean_object* v_a_3611_; lean_object* v___x_3613_; 
lean_del_object(v___x_3599_);
lean_del_object(v___x_3584_);
lean_dec(v_snd_3575_);
v_a_3611_ = lean_ctor_get(v_a_3597_, 0);
lean_inc(v_a_3611_);
lean_dec_ref_known(v_a_3597_, 1);
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 1, v_a_3611_);
lean_ctor_set(v___x_3577_, 0, v___x_3579_);
v___x_3613_ = v___x_3577_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v___x_3579_);
lean_ctor_set(v_reuseFailAlloc_3617_, 1, v_a_3611_);
v___x_3613_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
size_t v___x_3614_; size_t v___x_3615_; 
v___x_3614_ = ((size_t)1ULL);
v___x_3615_ = lean_usize_add(v_i_3562_, v___x_3614_);
v_i_3562_ = v___x_3615_;
v_b_3563_ = v___x_3613_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3627_; 
lean_del_object(v___x_3577_);
lean_dec(v_snd_3575_);
v_a_3620_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3627_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3627_ == 0)
{
v___x_3622_ = v___x_3581_;
v_isShared_3623_ = v_isSharedCheck_3627_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v___x_3581_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3627_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___x_3625_; 
if (v_isShared_3623_ == 0)
{
v___x_3625_ = v___x_3622_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v_a_3620_);
v___x_3625_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
return v___x_3625_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object* v_init_3630_, lean_object* v_id_3631_, lean_object* v_danglingDot_3632_, lean_object* v_as_3633_, lean_object* v_sz_3634_, lean_object* v_i_3635_, lean_object* v_b_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
uint8_t v_danglingDot_boxed_3645_; size_t v_sz_boxed_3646_; size_t v_i_boxed_3647_; lean_object* v_res_3648_; 
v_danglingDot_boxed_3645_ = lean_unbox(v_danglingDot_3632_);
v_sz_boxed_3646_ = lean_unbox_usize(v_sz_3634_);
lean_dec(v_sz_3634_);
v_i_boxed_3647_ = lean_unbox_usize(v_i_3635_);
lean_dec(v_i_3635_);
v_res_3648_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_3630_, v_id_3631_, v_danglingDot_boxed_3645_, v_as_3633_, v_sz_boxed_3646_, v_i_boxed_3647_, v_b_3636_, v___y_3637_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
lean_dec(v___y_3643_);
lean_dec_ref(v___y_3642_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec_ref(v___y_3639_);
lean_dec(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec_ref(v_as_3633_);
lean_dec(v_id_3631_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object* v_init_3649_, lean_object* v_id_3650_, lean_object* v_danglingDot_3651_, lean_object* v_n_3652_, lean_object* v_b_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_){
_start:
{
uint8_t v_danglingDot_boxed_3662_; lean_object* v_res_3663_; 
v_danglingDot_boxed_3662_ = lean_unbox(v_danglingDot_3651_);
v_res_3663_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3649_, v_id_3650_, v_danglingDot_boxed_3662_, v_n_3652_, v_b_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_);
lean_dec(v___y_3660_);
lean_dec_ref(v___y_3659_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
lean_dec_ref(v_n_3652_);
lean_dec(v_id_3650_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object* v_id_3664_, uint8_t v_danglingDot_3665_, lean_object* v_as_3666_, size_t v_sz_3667_, size_t v_i_3668_, lean_object* v_b_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_){
_start:
{
uint8_t v___x_3673_; 
v___x_3673_ = lean_usize_dec_lt(v_i_3668_, v_sz_3667_);
if (v___x_3673_ == 0)
{
lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3674_, 0, v_b_3669_);
v___x_3675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
return v___x_3675_;
}
else
{
lean_object* v_snd_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3729_; 
v_snd_3676_ = lean_ctor_get(v_b_3669_, 1);
v_isSharedCheck_3729_ = !lean_is_exclusive(v_b_3669_);
if (v_isSharedCheck_3729_ == 0)
{
lean_object* v_unused_3730_; 
v_unused_3730_ = lean_ctor_get(v_b_3669_, 0);
lean_dec(v_unused_3730_);
v___x_3678_ = v_b_3669_;
v_isShared_3679_ = v_isSharedCheck_3729_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_snd_3676_);
lean_dec(v_b_3669_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3729_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
lean_object* v___x_3680_; lean_object* v_a_3682_; lean_object* v_a_3689_; 
v___x_3680_ = lean_box(0);
v_a_3689_ = lean_array_uget(v_as_3666_, v_i_3668_);
if (lean_obj_tag(v_a_3689_) == 0)
{
v_a_3682_ = v_snd_3676_;
goto v___jp_3681_;
}
else
{
lean_object* v_val_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3728_; 
lean_dec(v_snd_3676_);
v_val_3690_ = lean_ctor_get(v_a_3689_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_a_3689_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3692_ = v_a_3689_;
v_isShared_3693_ = v_isSharedCheck_3728_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_val_3690_);
lean_dec(v_a_3689_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3728_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v___x_3694_ = lean_box(0);
v___x_3695_ = l_Lean_LocalDecl_userName(v_val_3690_);
v___x_3696_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3664_, v___x_3695_, v_danglingDot_3665_);
if (v___x_3696_ == 0)
{
lean_dec(v___x_3695_);
lean_del_object(v___x_3692_);
lean_dec(v_val_3690_);
v_a_3682_ = v___x_3694_;
goto v___jp_3681_;
}
else
{
lean_object* v___x_3697_; lean_object* v___x_3699_; 
v___x_3697_ = l_Lean_LocalDecl_fvarId(v_val_3690_);
lean_dec(v_val_3690_);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v___x_3697_);
v___x_3699_ = v___x_3692_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3697_);
v___x_3699_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
uint8_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; 
v___x_3700_ = 5;
v___x_3701_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3702_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3695_, v___x_3699_, v___x_3700_, v___x_3701_, v___y_3670_, v___y_3671_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v_a_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3718_; 
v_a_3703_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3705_ = v___x_3702_;
v_isShared_3706_ = v_isSharedCheck_3718_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_a_3703_);
lean_dec(v___x_3702_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3718_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
if (lean_obj_tag(v_a_3703_) == 0)
{
lean_object* v_a_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3717_; 
lean_del_object(v___x_3678_);
v_a_3707_ = lean_ctor_get(v_a_3703_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v_a_3703_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3709_ = v_a_3703_;
v_isShared_3710_ = v_isSharedCheck_3717_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_a_3707_);
lean_dec(v_a_3703_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3717_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3707_);
v___x_3712_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
lean_object* v___x_3714_; 
if (v_isShared_3706_ == 0)
{
lean_ctor_set(v___x_3705_, 0, v___x_3712_);
v___x_3714_ = v___x_3705_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v___x_3712_);
v___x_3714_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
return v___x_3714_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3703_, 1);
lean_del_object(v___x_3705_);
v_a_3682_ = v___x_3694_;
goto v___jp_3681_;
}
}
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_del_object(v___x_3678_);
v_a_3719_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3702_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3702_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
}
}
}
v___jp_3681_:
{
lean_object* v___x_3684_; 
if (v_isShared_3679_ == 0)
{
lean_ctor_set(v___x_3678_, 1, v_a_3682_);
lean_ctor_set(v___x_3678_, 0, v___x_3680_);
v___x_3684_ = v___x_3678_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3680_);
lean_ctor_set(v_reuseFailAlloc_3688_, 1, v_a_3682_);
v___x_3684_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
size_t v___x_3685_; size_t v___x_3686_; 
v___x_3685_ = ((size_t)1ULL);
v___x_3686_ = lean_usize_add(v_i_3668_, v___x_3685_);
v_i_3668_ = v___x_3686_;
v_b_3669_ = v___x_3684_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object* v_id_3731_, lean_object* v_danglingDot_3732_, lean_object* v_as_3733_, lean_object* v_sz_3734_, lean_object* v_i_3735_, lean_object* v_b_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_){
_start:
{
uint8_t v_danglingDot_boxed_3740_; size_t v_sz_boxed_3741_; size_t v_i_boxed_3742_; lean_object* v_res_3743_; 
v_danglingDot_boxed_3740_ = lean_unbox(v_danglingDot_3732_);
v_sz_boxed_3741_ = lean_unbox_usize(v_sz_3734_);
lean_dec(v_sz_3734_);
v_i_boxed_3742_ = lean_unbox_usize(v_i_3735_);
lean_dec(v_i_3735_);
v_res_3743_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_3731_, v_danglingDot_boxed_3740_, v_as_3733_, v_sz_boxed_3741_, v_i_boxed_3742_, v_b_3736_, v___y_3737_, v___y_3738_);
lean_dec(v___y_3738_);
lean_dec_ref(v___y_3737_);
lean_dec_ref(v_as_3733_);
lean_dec(v_id_3731_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object* v_id_3744_, uint8_t v_danglingDot_3745_, lean_object* v_as_3746_, size_t v_sz_3747_, size_t v_i_3748_, lean_object* v_b_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
uint8_t v___x_3758_; 
v___x_3758_ = lean_usize_dec_lt(v_i_3748_, v_sz_3747_);
if (v___x_3758_ == 0)
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3759_, 0, v_b_3749_);
v___x_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
return v___x_3760_;
}
else
{
lean_object* v_snd_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3814_; 
v_snd_3761_ = lean_ctor_get(v_b_3749_, 1);
v_isSharedCheck_3814_ = !lean_is_exclusive(v_b_3749_);
if (v_isSharedCheck_3814_ == 0)
{
lean_object* v_unused_3815_; 
v_unused_3815_ = lean_ctor_get(v_b_3749_, 0);
lean_dec(v_unused_3815_);
v___x_3763_ = v_b_3749_;
v_isShared_3764_ = v_isSharedCheck_3814_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_snd_3761_);
lean_dec(v_b_3749_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3814_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3765_; lean_object* v_a_3767_; lean_object* v_a_3774_; 
v___x_3765_ = lean_box(0);
v_a_3774_ = lean_array_uget(v_as_3746_, v_i_3748_);
if (lean_obj_tag(v_a_3774_) == 0)
{
v_a_3767_ = v_snd_3761_;
goto v___jp_3766_;
}
else
{
lean_object* v_val_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3813_; 
lean_dec(v_snd_3761_);
v_val_3775_ = lean_ctor_get(v_a_3774_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v_a_3774_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3777_ = v_a_3774_;
v_isShared_3778_ = v_isSharedCheck_3813_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_val_3775_);
lean_dec(v_a_3774_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3813_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; uint8_t v___x_3781_; 
v___x_3779_ = lean_box(0);
v___x_3780_ = l_Lean_LocalDecl_userName(v_val_3775_);
v___x_3781_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3744_, v___x_3780_, v_danglingDot_3745_);
if (v___x_3781_ == 0)
{
lean_dec(v___x_3780_);
lean_del_object(v___x_3777_);
lean_dec(v_val_3775_);
v_a_3767_ = v___x_3779_;
goto v___jp_3766_;
}
else
{
lean_object* v___x_3782_; lean_object* v___x_3784_; 
v___x_3782_ = l_Lean_LocalDecl_fvarId(v_val_3775_);
lean_dec(v_val_3775_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3782_);
v___x_3784_ = v___x_3777_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v___x_3782_);
v___x_3784_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
uint8_t v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; 
v___x_3785_ = 5;
v___x_3786_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3787_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3780_, v___x_3784_, v___x_3785_, v___x_3786_, v___y_3750_, v___y_3751_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3803_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3790_ = v___x_3787_;
v_isShared_3791_ = v_isSharedCheck_3803_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3787_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3803_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
if (lean_obj_tag(v_a_3788_) == 0)
{
lean_object* v_a_3792_; lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3802_; 
lean_del_object(v___x_3763_);
v_a_3792_ = lean_ctor_get(v_a_3788_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v_a_3788_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3794_ = v_a_3788_;
v_isShared_3795_ = v_isSharedCheck_3802_;
goto v_resetjp_3793_;
}
else
{
lean_inc(v_a_3792_);
lean_dec(v_a_3788_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3802_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3797_; 
if (v_isShared_3795_ == 0)
{
v___x_3797_ = v___x_3794_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3792_);
v___x_3797_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
lean_object* v___x_3799_; 
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3797_);
v___x_3799_ = v___x_3790_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v___x_3797_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3788_, 1);
lean_del_object(v___x_3790_);
v_a_3767_ = v___x_3779_;
goto v___jp_3766_;
}
}
}
else
{
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
lean_del_object(v___x_3763_);
v_a_3804_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3806_ = v___x_3787_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3787_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3804_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
}
}
}
v___jp_3766_:
{
lean_object* v___x_3769_; 
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 1, v_a_3767_);
lean_ctor_set(v___x_3763_, 0, v___x_3765_);
v___x_3769_ = v___x_3763_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v___x_3765_);
lean_ctor_set(v_reuseFailAlloc_3773_, 1, v_a_3767_);
v___x_3769_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
size_t v___x_3770_; size_t v___x_3771_; lean_object* v___x_3772_; 
v___x_3770_ = ((size_t)1ULL);
v___x_3771_ = lean_usize_add(v_i_3748_, v___x_3770_);
v___x_3772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_3744_, v_danglingDot_3745_, v_as_3746_, v_sz_3747_, v___x_3771_, v___x_3769_, v___y_3750_, v___y_3751_);
return v___x_3772_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object* v_id_3816_, lean_object* v_danglingDot_3817_, lean_object* v_as_3818_, lean_object* v_sz_3819_, lean_object* v_i_3820_, lean_object* v_b_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
uint8_t v_danglingDot_boxed_3830_; size_t v_sz_boxed_3831_; size_t v_i_boxed_3832_; lean_object* v_res_3833_; 
v_danglingDot_boxed_3830_ = lean_unbox(v_danglingDot_3817_);
v_sz_boxed_3831_ = lean_unbox_usize(v_sz_3819_);
lean_dec(v_sz_3819_);
v_i_boxed_3832_ = lean_unbox_usize(v_i_3820_);
lean_dec(v_i_3820_);
v_res_3833_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_3816_, v_danglingDot_boxed_3830_, v_as_3818_, v_sz_boxed_3831_, v_i_boxed_3832_, v_b_3821_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec_ref(v___y_3824_);
lean_dec(v___y_3823_);
lean_dec_ref(v___y_3822_);
lean_dec_ref(v_as_3818_);
lean_dec(v_id_3816_);
return v_res_3833_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object* v_id_3834_, uint8_t v_danglingDot_3835_, lean_object* v_t_3836_, lean_object* v_init_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_){
_start:
{
lean_object* v_b_3847_; lean_object* v_root_3850_; lean_object* v_tail_3851_; lean_object* v___x_3852_; 
v_root_3850_ = lean_ctor_get(v_t_3836_, 0);
v_tail_3851_ = lean_ctor_get(v_t_3836_, 1);
v___x_3852_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3837_, v_id_3834_, v_danglingDot_3835_, v_root_3850_, v_init_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
if (lean_obj_tag(v___x_3852_) == 0)
{
lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3914_; 
v_a_3853_ = lean_ctor_get(v___x_3852_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3855_ = v___x_3852_;
v_isShared_3856_ = v_isSharedCheck_3914_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_dec(v___x_3852_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3914_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
if (lean_obj_tag(v_a_3853_) == 0)
{
lean_object* v_a_3857_; lean_object* v___x_3859_; uint8_t v_isShared_3860_; uint8_t v_isSharedCheck_3867_; 
v_a_3857_ = lean_ctor_get(v_a_3853_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v_a_3853_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3859_ = v_a_3853_;
v_isShared_3860_ = v_isSharedCheck_3867_;
goto v_resetjp_3858_;
}
else
{
lean_inc(v_a_3857_);
lean_dec(v_a_3853_);
v___x_3859_ = lean_box(0);
v_isShared_3860_ = v_isSharedCheck_3867_;
goto v_resetjp_3858_;
}
v_resetjp_3858_:
{
lean_object* v___x_3862_; 
if (v_isShared_3860_ == 0)
{
v___x_3862_ = v___x_3859_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3857_);
v___x_3862_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
lean_object* v___x_3864_; 
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 0, v___x_3862_);
v___x_3864_ = v___x_3855_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v___x_3862_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
else
{
lean_object* v_a_3868_; 
lean_del_object(v___x_3855_);
v_a_3868_ = lean_ctor_get(v_a_3853_, 0);
lean_inc(v_a_3868_);
lean_dec_ref_known(v_a_3853_, 1);
if (lean_obj_tag(v_a_3868_) == 0)
{
lean_object* v_a_3869_; 
v_a_3869_ = lean_ctor_get(v_a_3868_, 0);
lean_inc(v_a_3869_);
lean_dec_ref_known(v_a_3868_, 1);
v_b_3847_ = v_a_3869_;
goto v___jp_3846_;
}
else
{
lean_object* v_a_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; size_t v_sz_3873_; size_t v___x_3874_; lean_object* v___x_3875_; 
v_a_3870_ = lean_ctor_get(v_a_3868_, 0);
lean_inc(v_a_3870_);
lean_dec_ref_known(v_a_3868_, 1);
v___x_3871_ = lean_box(0);
v___x_3872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
lean_ctor_set(v___x_3872_, 1, v_a_3870_);
v_sz_3873_ = lean_array_size(v_tail_3851_);
v___x_3874_ = ((size_t)0ULL);
v___x_3875_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_3834_, v_danglingDot_3835_, v_tail_3851_, v_sz_3873_, v___x_3874_, v___x_3872_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
if (lean_obj_tag(v___x_3875_) == 0)
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3905_; 
v_a_3876_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3878_ = v___x_3875_;
v_isShared_3879_ = v_isSharedCheck_3905_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3875_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3905_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
if (lean_obj_tag(v_a_3876_) == 0)
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3890_; 
v_a_3880_ = lean_ctor_get(v_a_3876_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v_a_3876_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3882_ = v_a_3876_;
v_isShared_3883_ = v_isSharedCheck_3890_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v_a_3876_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3890_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
lean_object* v___x_3887_; 
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 0, v___x_3885_);
v___x_3887_ = v___x_3878_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v___x_3885_);
v___x_3887_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
return v___x_3887_;
}
}
}
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3904_; 
v_a_3891_ = lean_ctor_get(v_a_3876_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v_a_3876_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3893_ = v_a_3876_;
v_isShared_3894_ = v_isSharedCheck_3904_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v_a_3876_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3904_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v_fst_3895_; 
v_fst_3895_ = lean_ctor_get(v_a_3891_, 0);
if (lean_obj_tag(v_fst_3895_) == 0)
{
lean_object* v_snd_3896_; lean_object* v___x_3898_; 
v_snd_3896_ = lean_ctor_get(v_a_3891_, 1);
lean_inc(v_snd_3896_);
lean_dec(v_a_3891_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 0, v_snd_3896_);
v___x_3898_ = v___x_3893_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_snd_3896_);
v___x_3898_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
lean_object* v___x_3900_; 
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 0, v___x_3898_);
v___x_3900_ = v___x_3878_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
else
{
lean_object* v_val_3903_; 
lean_inc_ref(v_fst_3895_);
lean_del_object(v___x_3893_);
lean_dec(v_a_3891_);
lean_del_object(v___x_3878_);
v_val_3903_ = lean_ctor_get(v_fst_3895_, 0);
lean_inc(v_val_3903_);
lean_dec_ref_known(v_fst_3895_, 1);
v_b_3847_ = v_val_3903_;
goto v___jp_3846_;
}
}
}
}
}
else
{
lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3913_; 
v_a_3906_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3908_ = v___x_3875_;
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v___x_3875_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3911_; 
if (v_isShared_3909_ == 0)
{
v___x_3911_ = v___x_3908_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3906_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3922_; 
v_a_3915_ = lean_ctor_get(v___x_3852_, 0);
v_isSharedCheck_3922_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3917_ = v___x_3852_;
v_isShared_3918_ = v_isSharedCheck_3922_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_a_3915_);
lean_dec(v___x_3852_);
v___x_3917_ = lean_box(0);
v_isShared_3918_ = v_isSharedCheck_3922_;
goto v_resetjp_3916_;
}
v_resetjp_3916_:
{
lean_object* v___x_3920_; 
if (v_isShared_3918_ == 0)
{
v___x_3920_ = v___x_3917_;
goto v_reusejp_3919_;
}
else
{
lean_object* v_reuseFailAlloc_3921_; 
v_reuseFailAlloc_3921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3921_, 0, v_a_3915_);
v___x_3920_ = v_reuseFailAlloc_3921_;
goto v_reusejp_3919_;
}
v_reusejp_3919_:
{
return v___x_3920_;
}
}
}
v___jp_3846_:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3848_, 0, v_b_3847_);
v___x_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3848_);
return v___x_3849_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object* v_id_3923_, lean_object* v_danglingDot_3924_, lean_object* v_t_3925_, lean_object* v_init_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_){
_start:
{
uint8_t v_danglingDot_boxed_3935_; lean_object* v_res_3936_; 
v_danglingDot_boxed_3935_ = lean_unbox(v_danglingDot_3924_);
v_res_3936_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_3923_, v_danglingDot_boxed_3935_, v_t_3925_, v_init_3926_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_);
lean_dec(v___y_3933_);
lean_dec_ref(v___y_3932_);
lean_dec(v___y_3931_);
lean_dec_ref(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3928_);
lean_dec_ref(v___y_3927_);
lean_dec_ref(v_t_3925_);
lean_dec(v_id_3923_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object* v_as_3937_, size_t v_sz_3938_, size_t v_i_3939_, lean_object* v_b_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
uint8_t v___x_3944_; 
v___x_3944_ = lean_usize_dec_lt(v_i_3939_, v_sz_3938_);
if (v___x_3944_ == 0)
{
lean_object* v___x_3945_; lean_object* v___x_3946_; 
v___x_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3945_, 0, v_b_3940_);
v___x_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3945_);
return v___x_3946_;
}
else
{
lean_object* v___x_3947_; lean_object* v_a_3948_; lean_object* v___x_3949_; 
v___x_3947_ = lean_box(0);
v_a_3948_ = lean_array_uget_borrowed(v_as_3937_, v_i_3939_);
lean_inc(v_a_3948_);
v___x_3949_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_a_3948_, v___y_3941_, v___y_3942_);
if (lean_obj_tag(v___x_3949_) == 0)
{
lean_object* v_a_3950_; 
v_a_3950_ = lean_ctor_get(v___x_3949_, 0);
if (lean_obj_tag(v_a_3950_) == 0)
{
return v___x_3949_;
}
else
{
size_t v___x_3951_; size_t v___x_3952_; 
lean_dec_ref_known(v___x_3949_, 1);
v___x_3951_ = ((size_t)1ULL);
v___x_3952_ = lean_usize_add(v_i_3939_, v___x_3951_);
v_i_3939_ = v___x_3952_;
v_b_3940_ = v___x_3947_;
goto _start;
}
}
else
{
return v___x_3949_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object* v_as_3954_, lean_object* v_sz_3955_, lean_object* v_i_3956_, lean_object* v_b_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_){
_start:
{
size_t v_sz_boxed_3961_; size_t v_i_boxed_3962_; lean_object* v_res_3963_; 
v_sz_boxed_3961_ = lean_unbox_usize(v_sz_3955_);
lean_dec(v_sz_3955_);
v_i_boxed_3962_ = lean_unbox_usize(v_i_3956_);
lean_dec(v_i_3956_);
v_res_3963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_3954_, v_sz_boxed_3961_, v_i_boxed_3962_, v_b_3957_, v___y_3958_, v___y_3959_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec_ref(v_as_3954_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object* v___x_3964_, lean_object* v_ns_3965_, lean_object* v_id_3966_, uint8_t v_danglingDot_3967_, lean_object* v_a_3968_, lean_object* v___x_3969_, lean_object* v_alias_3970_, lean_object* v_declNames_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_){
_start:
{
uint8_t v___x_3983_; 
v___x_3983_ = l_Lean_Name_isPrefixOf(v_ns_3965_, v_alias_3970_);
if (v___x_3983_ == 0)
{
lean_dec(v_declNames_3971_);
lean_dec(v_alias_3970_);
lean_dec_ref(v___x_3969_);
goto v___jp_3980_;
}
else
{
lean_object* v___x_3984_; lean_object* v___x_3985_; uint8_t v___x_3986_; 
v___x_3984_ = lean_box(0);
lean_inc(v_alias_3970_);
v___x_3985_ = l_Lean_Name_replacePrefix(v_alias_3970_, v_ns_3965_, v___x_3984_);
v___x_3986_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3966_, v___x_3985_, v_danglingDot_3967_);
lean_dec(v___x_3985_);
if (v___x_3986_ == 0)
{
lean_dec(v_declNames_3971_);
lean_dec(v_alias_3970_);
lean_dec_ref(v___x_3969_);
goto v___jp_3980_;
}
else
{
lean_object* v___x_3987_; 
v___x_3987_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_3968_, v___x_3969_, v_alias_3970_, v_declNames_3971_, v___y_3972_, v___y_3973_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_);
lean_dec(v_alias_3970_);
return v___x_3987_;
}
}
v___jp_3980_:
{
lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3964_);
v___x_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3981_);
return v___x_3982_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object* v___x_3988_, lean_object* v_ns_3989_, lean_object* v_id_3990_, lean_object* v_danglingDot_3991_, lean_object* v_a_3992_, lean_object* v___x_3993_, lean_object* v_alias_3994_, lean_object* v_declNames_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
uint8_t v_danglingDot_boxed_4004_; lean_object* v_res_4005_; 
v_danglingDot_boxed_4004_ = lean_unbox(v_danglingDot_3991_);
v_res_4005_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(v___x_3988_, v_ns_3989_, v_id_3990_, v_danglingDot_boxed_4004_, v_a_3992_, v___x_3993_, v_alias_3994_, v_declNames_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec(v___y_4000_);
lean_dec_ref(v___y_3999_);
lean_dec_ref(v___y_3998_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
lean_dec_ref(v_a_3992_);
lean_dec(v_id_3990_);
lean_dec(v_ns_3989_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object* v_id_4006_, uint8_t v_danglingDot_4007_, lean_object* v_a_4008_, lean_object* v___x_4009_, lean_object* v_as_x27_4010_, lean_object* v_b_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_){
_start:
{
lean_object* v_a_4021_; 
if (lean_obj_tag(v_as_x27_4010_) == 0)
{
lean_object* v___x_4024_; lean_object* v___x_4025_; 
lean_dec_ref(v___x_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_id_4006_);
v___x_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4024_, 0, v_b_4011_);
v___x_4025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4025_, 0, v___x_4024_);
return v___x_4025_;
}
else
{
lean_object* v_head_4026_; lean_object* v_tail_4027_; lean_object* v___x_4028_; 
v_head_4026_ = lean_ctor_get(v_as_x27_4010_, 0);
v_tail_4027_ = lean_ctor_get(v_as_x27_4010_, 1);
v___x_4028_ = lean_box(0);
if (lean_obj_tag(v_head_4026_) == 0)
{
lean_object* v_ns_4029_; lean_object* v___x_4030_; lean_object* v___f_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v_ns_4029_ = lean_ctor_get(v_head_4026_, 0);
v___x_4030_ = lean_box(v_danglingDot_4007_);
lean_inc_ref_n(v___x_4009_, 2);
lean_inc_ref(v_a_4008_);
lean_inc(v_id_4006_);
lean_inc(v_ns_4029_);
v___f_4031_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_4031_, 0, v___x_4028_);
lean_closure_set(v___f_4031_, 1, v_ns_4029_);
lean_closure_set(v___f_4031_, 2, v_id_4006_);
lean_closure_set(v___f_4031_, 3, v___x_4030_);
lean_closure_set(v___f_4031_, 4, v_a_4008_);
lean_closure_set(v___f_4031_, 5, v___x_4009_);
v___x_4032_ = l_Lean_getAliasState(v___x_4009_);
v___x_4033_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4032_, v___f_4031_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_);
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_object* v_a_4034_; 
v_a_4034_ = lean_ctor_get(v___x_4033_, 0);
lean_inc(v_a_4034_);
lean_dec_ref_known(v___x_4033_, 1);
if (lean_obj_tag(v_a_4034_) == 0)
{
lean_object* v_a_4035_; 
lean_dec_ref(v___x_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_id_4006_);
v_a_4035_ = lean_ctor_get(v_a_4034_, 0);
lean_inc(v_a_4035_);
lean_dec_ref_known(v_a_4034_, 1);
v_a_4021_ = v_a_4035_;
goto v___jp_4020_;
}
else
{
lean_dec_ref_known(v_a_4034_, 1);
v_as_x27_4010_ = v_tail_4027_;
v_b_4011_ = v___x_4028_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_id_4006_);
return v___x_4033_;
}
}
else
{
lean_object* v_id_4037_; lean_object* v_declName_4038_; uint8_t v___x_4039_; 
v_id_4037_ = lean_ctor_get(v_head_4026_, 0);
v_declName_4038_ = lean_ctor_get(v_head_4026_, 1);
lean_inc(v_declName_4038_);
lean_inc_ref(v___x_4009_);
v___x_4039_ = l_Lean_Server_Completion_allowCompletion(v_a_4008_, v___x_4009_, v_declName_4038_);
if (v___x_4039_ == 0)
{
v_as_x27_4010_ = v_tail_4027_;
v_b_4011_ = v___x_4028_;
goto _start;
}
else
{
uint8_t v___x_4041_; 
v___x_4041_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_4006_, v_id_4037_, v_danglingDot_4007_);
if (v___x_4041_ == 0)
{
v_as_x27_4010_ = v_tail_4027_;
v_b_4011_ = v___x_4028_;
goto _start;
}
else
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; 
v___x_4043_ = l_Lean_Name_getString_x21(v_id_4037_);
v___x_4044_ = lean_box(0);
v___x_4045_ = l_Lean_Name_str___override(v___x_4044_, v___x_4043_);
lean_inc(v_declName_4038_);
v___x_4046_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_4045_, v_declName_4038_, v___y_4012_, v___y_4013_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_);
if (lean_obj_tag(v___x_4046_) == 0)
{
lean_dec_ref_known(v___x_4046_, 1);
v_as_x27_4010_ = v_tail_4027_;
v_b_4011_ = v___x_4028_;
goto _start;
}
else
{
lean_dec_ref(v___x_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_id_4006_);
return v___x_4046_;
}
}
}
}
}
v___jp_4020_:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4022_, 0, v_a_4021_);
v___x_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4023_, 0, v___x_4022_);
return v___x_4023_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object* v_id_4048_, lean_object* v_danglingDot_4049_, lean_object* v_a_4050_, lean_object* v___x_4051_, lean_object* v_as_x27_4052_, lean_object* v_b_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
uint8_t v_danglingDot_boxed_4062_; lean_object* v_res_4063_; 
v_danglingDot_boxed_4062_ = lean_unbox(v_danglingDot_4049_);
v_res_4063_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4048_, v_danglingDot_boxed_4062_, v_a_4050_, v___x_4051_, v_as_x27_4052_, v_b_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_);
lean_dec(v___y_4060_);
lean_dec_ref(v___y_4059_);
lean_dec(v___y_4058_);
lean_dec_ref(v___y_4057_);
lean_dec_ref(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4054_);
lean_dec(v_as_x27_4052_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object* v_id_4064_, uint8_t v_danglingDot_4065_, lean_object* v_a_4066_, lean_object* v___x_4067_, lean_object* v_as_4068_, lean_object* v_as_x27_4069_, lean_object* v_b_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v_a_4080_; 
if (lean_obj_tag(v_as_x27_4069_) == 0)
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
lean_dec_ref(v___x_4067_);
lean_dec_ref(v_a_4066_);
lean_dec(v_id_4064_);
v___x_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4083_, 0, v_b_4070_);
v___x_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4083_);
return v___x_4084_;
}
else
{
lean_object* v_head_4085_; lean_object* v_tail_4086_; lean_object* v___x_4087_; 
v_head_4085_ = lean_ctor_get(v_as_x27_4069_, 0);
v_tail_4086_ = lean_ctor_get(v_as_x27_4069_, 1);
v___x_4087_ = lean_box(0);
if (lean_obj_tag(v_head_4085_) == 0)
{
lean_object* v_ns_4088_; lean_object* v___x_4089_; lean_object* v___f_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v_ns_4088_ = lean_ctor_get(v_head_4085_, 0);
v___x_4089_ = lean_box(v_danglingDot_4065_);
lean_inc_ref_n(v___x_4067_, 2);
lean_inc_ref(v_a_4066_);
lean_inc(v_id_4064_);
lean_inc(v_ns_4088_);
v___f_4090_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_4090_, 0, v___x_4087_);
lean_closure_set(v___f_4090_, 1, v_ns_4088_);
lean_closure_set(v___f_4090_, 2, v_id_4064_);
lean_closure_set(v___f_4090_, 3, v___x_4089_);
lean_closure_set(v___f_4090_, 4, v_a_4066_);
lean_closure_set(v___f_4090_, 5, v___x_4067_);
v___x_4091_ = l_Lean_getAliasState(v___x_4067_);
v___x_4092_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4091_, v___f_4090_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
lean_inc(v_a_4093_);
lean_dec_ref_known(v___x_4092_, 1);
if (lean_obj_tag(v_a_4093_) == 0)
{
lean_object* v_a_4094_; 
lean_dec_ref(v___x_4067_);
lean_dec_ref(v_a_4066_);
lean_dec(v_id_4064_);
v_a_4094_ = lean_ctor_get(v_a_4093_, 0);
lean_inc(v_a_4094_);
lean_dec_ref_known(v_a_4093_, 1);
v_a_4080_ = v_a_4094_;
goto v___jp_4079_;
}
else
{
lean_object* v___x_4095_; 
lean_dec_ref_known(v_a_4093_, 1);
v___x_4095_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4064_, v_danglingDot_4065_, v_a_4066_, v___x_4067_, v_tail_4086_, v___x_4087_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
return v___x_4095_;
}
}
else
{
lean_dec_ref(v___x_4067_);
lean_dec_ref(v_a_4066_);
lean_dec(v_id_4064_);
return v___x_4092_;
}
}
else
{
lean_object* v_id_4096_; lean_object* v_declName_4097_; uint8_t v___x_4098_; 
v_id_4096_ = lean_ctor_get(v_head_4085_, 0);
v_declName_4097_ = lean_ctor_get(v_head_4085_, 1);
lean_inc(v_declName_4097_);
lean_inc_ref(v___x_4067_);
v___x_4098_ = l_Lean_Server_Completion_allowCompletion(v_a_4066_, v___x_4067_, v_declName_4097_);
if (v___x_4098_ == 0)
{
lean_object* v___x_4099_; 
v___x_4099_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4064_, v_danglingDot_4065_, v_a_4066_, v___x_4067_, v_tail_4086_, v___x_4087_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
return v___x_4099_;
}
else
{
uint8_t v___x_4100_; 
v___x_4100_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_4064_, v_id_4096_, v_danglingDot_4065_);
if (v___x_4100_ == 0)
{
lean_object* v___x_4101_; 
v___x_4101_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4064_, v_danglingDot_4065_, v_a_4066_, v___x_4067_, v_tail_4086_, v___x_4087_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
return v___x_4101_;
}
else
{
lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4102_ = l_Lean_Name_getString_x21(v_id_4096_);
v___x_4103_ = lean_box(0);
v___x_4104_ = l_Lean_Name_str___override(v___x_4103_, v___x_4102_);
lean_inc(v_declName_4097_);
v___x_4105_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_4104_, v_declName_4097_, v___y_4071_, v___y_4072_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
if (lean_obj_tag(v___x_4105_) == 0)
{
lean_object* v___x_4106_; 
lean_dec_ref_known(v___x_4105_, 1);
v___x_4106_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4064_, v_danglingDot_4065_, v_a_4066_, v___x_4067_, v_tail_4086_, v___x_4087_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
return v___x_4106_;
}
else
{
lean_dec_ref(v___x_4067_);
lean_dec_ref(v_a_4066_);
lean_dec(v_id_4064_);
return v___x_4105_;
}
}
}
}
}
v___jp_4079_:
{
lean_object* v___x_4081_; lean_object* v___x_4082_; 
v___x_4081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4081_, 0, v_a_4080_);
v___x_4082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4081_);
return v___x_4082_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object* v_id_4107_, lean_object* v_danglingDot_4108_, lean_object* v_a_4109_, lean_object* v___x_4110_, lean_object* v_as_4111_, lean_object* v_as_x27_4112_, lean_object* v_b_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_){
_start:
{
uint8_t v_danglingDot_boxed_4122_; lean_object* v_res_4123_; 
v_danglingDot_boxed_4122_ = lean_unbox(v_danglingDot_4108_);
v_res_4123_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_4107_, v_danglingDot_boxed_4122_, v_a_4109_, v___x_4110_, v_as_4111_, v_as_x27_4112_, v_b_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec_ref(v___y_4116_);
lean_dec(v___y_4115_);
lean_dec_ref(v___y_4114_);
lean_dec(v_as_x27_4112_);
lean_dec(v_as_4111_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object* v_ctx_4124_, lean_object* v_stx_4125_, lean_object* v_id_4126_, lean_object* v_hoverInfo_4127_, uint8_t v_danglingDot_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_){
_start:
{
lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v___y_4140_; lean_object* v___y_4141_; lean_object* v___y_4142_; lean_object* v___y_4143_; uint8_t v___y_4144_; lean_object* v___y_4145_; lean_object* v___y_4146_; lean_object* v___y_4147_; lean_object* v___y_4148_; lean_object* v_id_4189_; uint8_t v_danglingDot_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4197_; lean_object* v_id_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; uint8_t v___x_4220_; 
v___x_4220_ = l_Lean_Name_hasMacroScopes(v_id_4126_);
if (v___x_4220_ == 0)
{
v_id_4209_ = v_id_4126_;
v___y_4210_ = v_a_4129_;
v___y_4211_ = v_a_4130_;
v___y_4212_ = v_a_4131_;
v___y_4213_ = v_a_4132_;
v___y_4214_ = v_a_4133_;
v___y_4215_ = v_a_4134_;
v___y_4216_ = v_a_4135_;
goto v___jp_4208_;
}
else
{
lean_object* v___x_4221_; 
v___x_4221_ = l_Lean_Syntax_getHeadInfo(v_stx_4125_);
if (lean_obj_tag(v___x_4221_) == 0)
{
lean_object* v_id_4222_; 
lean_dec_ref_known(v___x_4221_, 4);
v_id_4222_ = l_Lean_Name_eraseMacroScopes(v_id_4126_);
lean_dec(v_id_4126_);
v_id_4209_ = v_id_4222_;
v___y_4210_ = v_a_4129_;
v___y_4211_ = v_a_4130_;
v___y_4212_ = v_a_4131_;
v___y_4213_ = v_a_4132_;
v___y_4214_ = v_a_4133_;
v___y_4215_ = v_a_4134_;
v___y_4216_ = v_a_4135_;
goto v___jp_4208_;
}
else
{
lean_object* v___x_4223_; lean_object* v___x_4224_; 
lean_dec(v___x_4221_);
lean_dec(v_hoverInfo_4127_);
lean_dec(v_id_4126_);
lean_dec_ref(v_ctx_4124_);
v___x_4223_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4223_);
return v___x_4224_;
}
}
v___jp_4137_:
{
lean_object* v___x_4149_; lean_object* v_env_4150_; lean_object* v___x_4151_; 
v___x_4149_ = lean_st_ref_get(v___y_4145_);
v_env_4150_ = lean_ctor_get(v___x_4149_, 0);
lean_inc_ref(v_env_4150_);
lean_dec(v___x_4149_);
v___x_4151_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___y_4143_, v___y_4142_, v___y_4138_, v___y_4146_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_object* v_a_4152_; 
v_a_4152_ = lean_ctor_get(v___x_4151_, 0);
if (lean_obj_tag(v_a_4152_) == 0)
{
lean_dec_ref(v_env_4150_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
return v___x_4151_;
}
else
{
lean_object* v___x_4153_; lean_object* v_a_4154_; 
lean_dec_ref_known(v___x_4151_, 1);
v___x_4153_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_4146_);
v_a_4154_ = lean_ctor_get(v___x_4153_, 0);
if (lean_obj_tag(v_a_4154_) == 0)
{
lean_dec_ref(v_env_4150_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
return v___x_4153_;
}
else
{
lean_object* v___x_4155_; 
lean_dec_ref(v___x_4153_);
lean_inc_ref(v_env_4150_);
v___x_4155_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_4150_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_object* v_toCommandContextInfo_4156_; lean_object* v_a_4157_; lean_object* v_currNamespace_4158_; lean_object* v_openDecls_4159_; lean_object* v___f_4160_; lean_object* v___f_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v_toCommandContextInfo_4156_ = lean_ctor_get(v_ctx_4124_, 0);
v_a_4157_ = lean_ctor_get(v___x_4155_, 0);
lean_inc_n(v_a_4157_, 2);
lean_dec_ref_known(v___x_4155_, 1);
v_currNamespace_4158_ = lean_ctor_get(v_toCommandContextInfo_4156_, 5);
v_openDecls_4159_ = lean_ctor_get(v_toCommandContextInfo_4156_, 6);
lean_inc_ref_n(v_env_4150_, 2);
v___f_4160_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed), 12, 2);
lean_closure_set(v___f_4160_, 0, v_a_4157_);
lean_closure_set(v___f_4160_, 1, v_env_4150_);
lean_inc(v_currNamespace_4158_);
v___f_4161_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed), 13, 3);
lean_closure_set(v___f_4161_, 0, v___y_4141_);
lean_closure_set(v___f_4161_, 1, v___f_4160_);
lean_closure_set(v___f_4161_, 2, v_currNamespace_4158_);
v___x_4162_ = lean_box(0);
lean_inc(v___y_4140_);
v___x_4163_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v___y_4140_, v___y_4144_, v_a_4157_, v_env_4150_, v_openDecls_4159_, v_openDecls_4159_, v___x_4162_, v___y_4142_, v___y_4138_, v___y_4146_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
if (lean_obj_tag(v_a_4164_) == 0)
{
lean_dec_ref(v___f_4161_);
lean_dec_ref(v_env_4150_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
return v___x_4163_;
}
else
{
lean_object* v___x_4165_; lean_object* v___x_4166_; 
lean_dec_ref_known(v___x_4163_, 1);
lean_inc_ref(v_env_4150_);
v___x_4165_ = l_Lean_getAliasState(v_env_4150_);
v___x_4166_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4165_, v___f_4161_, v___y_4142_, v___y_4138_, v___y_4146_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
if (lean_obj_tag(v_a_4167_) == 0)
{
lean_dec_ref(v_env_4150_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
return v___x_4166_;
}
else
{
lean_dec_ref_known(v___x_4166_, 1);
if (v___y_4144_ == 0)
{
if (lean_obj_tag(v___y_4140_) == 1)
{
lean_object* v_pre_4168_; 
v_pre_4168_ = lean_ctor_get(v___y_4140_, 0);
if (lean_obj_tag(v_pre_4168_) == 0)
{
lean_object* v_str_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; size_t v_sz_4172_; size_t v___x_4173_; lean_object* v___x_4174_; 
v_str_4169_ = lean_ctor_get(v___y_4140_, 1);
v___x_4170_ = l_Lean_Parser_getTokenTable(v_env_4150_);
v___x_4171_ = l_Lean_Data_Trie_findPrefix___redArg(v___x_4170_, v_str_4169_);
lean_dec_ref(v___x_4170_);
v_sz_4172_ = lean_array_size(v___x_4171_);
v___x_4173_ = ((size_t)0ULL);
v___x_4174_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v___x_4171_, v_sz_4172_, v___x_4173_, v___x_4162_, v___y_4142_, v___y_4138_);
lean_dec_ref(v___x_4171_);
if (lean_obj_tag(v___x_4174_) == 0)
{
lean_object* v_a_4175_; 
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
if (lean_obj_tag(v_a_4175_) == 0)
{
lean_dec_ref_known(v___y_4140_, 2);
lean_dec_ref(v_ctx_4124_);
return v___x_4174_;
}
else
{
lean_object* v___x_4176_; 
lean_dec_ref_known(v___x_4174_, 1);
v___x_4176_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4124_, v___y_4140_, v___y_4144_, v___y_4142_, v___y_4138_, v___y_4146_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
return v___x_4176_;
}
}
else
{
lean_dec_ref_known(v___y_4140_, 2);
lean_dec_ref(v_ctx_4124_);
return v___x_4174_;
}
}
else
{
lean_object* v___x_4177_; 
lean_dec_ref(v_env_4150_);
v___x_4177_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4124_, v___y_4140_, v___y_4144_, v___y_4142_, v___y_4138_, v___y_4146_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
return v___x_4177_;
}
}
else
{
lean_object* v___x_4178_; 
lean_dec_ref(v_env_4150_);
v___x_4178_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4124_, v___y_4140_, v___y_4144_, v___y_4142_, v___y_4138_, v___y_4146_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
return v___x_4178_;
}
}
else
{
lean_object* v___x_4179_; 
lean_dec_ref(v_env_4150_);
v___x_4179_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4124_, v___y_4140_, v___y_4144_, v___y_4142_, v___y_4138_, v___y_4146_, v___y_4148_, v___y_4147_, v___y_4139_, v___y_4145_);
return v___x_4179_;
}
}
}
else
{
lean_dec_ref(v_env_4150_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
return v___x_4166_;
}
}
}
else
{
lean_dec_ref(v___f_4161_);
lean_dec_ref(v_env_4150_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
return v___x_4163_;
}
}
else
{
lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4187_; 
lean_dec_ref(v_env_4150_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
v_a_4180_ = lean_ctor_get(v___x_4155_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4182_ = v___x_4155_;
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v___x_4155_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4180_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_env_4150_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v_ctx_4124_);
return v___x_4151_;
}
}
v___jp_4188_:
{
lean_object* v___x_4198_; lean_object* v___f_4199_; lean_object* v___x_4200_; lean_object* v___f_4201_; uint8_t v___x_4202_; 
v___x_4198_ = lean_box(v_danglingDot_4190_);
lean_inc_n(v_id_4189_, 2);
lean_inc_ref(v_ctx_4124_);
v___f_4199_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed), 13, 3);
lean_closure_set(v___f_4199_, 0, v_ctx_4124_);
lean_closure_set(v___f_4199_, 1, v_id_4189_);
lean_closure_set(v___f_4199_, 2, v___x_4198_);
v___x_4200_ = lean_box(v_danglingDot_4190_);
v___f_4201_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4201_, 0, v_id_4189_);
lean_closure_set(v___f_4201_, 1, v___x_4200_);
v___x_4202_ = l_Lean_Name_isAtomic(v_id_4189_);
if (v___x_4202_ == 0)
{
v___y_4138_ = v___y_4192_;
v___y_4139_ = v___y_4196_;
v___y_4140_ = v_id_4189_;
v___y_4141_ = v___f_4201_;
v___y_4142_ = v___y_4191_;
v___y_4143_ = v___f_4199_;
v___y_4144_ = v_danglingDot_4190_;
v___y_4145_ = v___y_4197_;
v___y_4146_ = v___y_4193_;
v___y_4147_ = v___y_4195_;
v___y_4148_ = v___y_4194_;
goto v___jp_4137_;
}
else
{
lean_object* v_lctx_4203_; lean_object* v_decls_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v_lctx_4203_ = lean_ctor_get(v___y_4194_, 2);
v_decls_4204_ = lean_ctor_get(v_lctx_4203_, 1);
v___x_4205_ = lean_box(0);
v___x_4206_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_4189_, v_danglingDot_4190_, v_decls_4204_, v___x_4205_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v_a_4207_; 
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
if (lean_obj_tag(v_a_4207_) == 0)
{
lean_dec_ref(v___f_4201_);
lean_dec_ref(v___f_4199_);
lean_dec(v_id_4189_);
lean_dec_ref(v_ctx_4124_);
return v___x_4206_;
}
else
{
lean_dec_ref_known(v___x_4206_, 1);
v___y_4138_ = v___y_4192_;
v___y_4139_ = v___y_4196_;
v___y_4140_ = v_id_4189_;
v___y_4141_ = v___f_4201_;
v___y_4142_ = v___y_4191_;
v___y_4143_ = v___f_4199_;
v___y_4144_ = v_danglingDot_4190_;
v___y_4145_ = v___y_4197_;
v___y_4146_ = v___y_4193_;
v___y_4147_ = v___y_4195_;
v___y_4148_ = v___y_4194_;
goto v___jp_4137_;
}
}
else
{
lean_dec_ref(v___f_4201_);
lean_dec_ref(v___f_4199_);
lean_dec(v_id_4189_);
lean_dec_ref(v_ctx_4124_);
return v___x_4206_;
}
}
}
v___jp_4208_:
{
if (lean_obj_tag(v_hoverInfo_4127_) == 1)
{
lean_object* v_delta_4217_; lean_object* v_id_4218_; uint8_t v_danglingDot_4219_; 
v_delta_4217_ = lean_ctor_get(v_hoverInfo_4127_, 0);
lean_inc(v_delta_4217_);
lean_dec_ref_known(v_hoverInfo_4127_, 1);
v_id_4218_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(v_id_4209_, v_delta_4217_);
v_danglingDot_4219_ = 0;
v_id_4189_ = v_id_4218_;
v_danglingDot_4190_ = v_danglingDot_4219_;
v___y_4191_ = v___y_4210_;
v___y_4192_ = v___y_4211_;
v___y_4193_ = v___y_4212_;
v___y_4194_ = v___y_4213_;
v___y_4195_ = v___y_4214_;
v___y_4196_ = v___y_4215_;
v___y_4197_ = v___y_4216_;
goto v___jp_4188_;
}
else
{
lean_dec(v_hoverInfo_4127_);
v_id_4189_ = v_id_4209_;
v_danglingDot_4190_ = v_danglingDot_4128_;
v___y_4191_ = v___y_4210_;
v___y_4192_ = v___y_4211_;
v___y_4193_ = v___y_4212_;
v___y_4194_ = v___y_4213_;
v___y_4195_ = v___y_4214_;
v___y_4196_ = v___y_4215_;
v___y_4197_ = v___y_4216_;
goto v___jp_4188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object* v_ctx_4225_, lean_object* v_stx_4226_, lean_object* v_id_4227_, lean_object* v_hoverInfo_4228_, lean_object* v_danglingDot_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_, lean_object* v_a_4237_){
_start:
{
uint8_t v_danglingDot_boxed_4238_; lean_object* v_res_4239_; 
v_danglingDot_boxed_4238_ = lean_unbox(v_danglingDot_4229_);
v_res_4239_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(v_ctx_4225_, v_stx_4226_, v_id_4227_, v_hoverInfo_4228_, v_danglingDot_boxed_4238_, v_a_4230_, v_a_4231_, v_a_4232_, v_a_4233_, v_a_4234_, v_a_4235_, v_a_4236_);
lean_dec(v_a_4236_);
lean_dec_ref(v_a_4235_);
lean_dec(v_a_4234_);
lean_dec_ref(v_a_4233_);
lean_dec_ref(v_a_4232_);
lean_dec(v_a_4231_);
lean_dec_ref(v_a_4230_);
lean_dec(v_stx_4226_);
return v_res_4239_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object* v_a_4240_, lean_object* v___x_4241_, lean_object* v_alias_4242_, lean_object* v_as_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v___x_4252_; 
v___x_4252_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_4240_, v___x_4241_, v_alias_4242_, v_as_4243_, v___y_4244_, v___y_4245_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
return v___x_4252_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object* v_a_4253_, lean_object* v___x_4254_, lean_object* v_alias_4255_, lean_object* v_as_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_){
_start:
{
lean_object* v_res_4265_; 
v_res_4265_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(v_a_4253_, v___x_4254_, v_alias_4255_, v_as_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_);
lean_dec(v___y_4263_);
lean_dec_ref(v___y_4262_);
lean_dec(v___y_4261_);
lean_dec_ref(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec(v___y_4258_);
lean_dec_ref(v___y_4257_);
lean_dec(v_alias_4255_);
lean_dec_ref(v_a_4253_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object* v_00_u03b2_4266_, lean_object* v_s_4267_, lean_object* v_f_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
lean_object* v___x_4277_; 
v___x_4277_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_4267_, v_f_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
return v___x_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object* v_00_u03b2_4278_, lean_object* v_s_4279_, lean_object* v_f_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(v_00_u03b2_4278_, v_s_4279_, v_f_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
lean_dec(v___y_4287_);
lean_dec_ref(v___y_4286_);
lean_dec(v___y_4285_);
lean_dec_ref(v___y_4284_);
lean_dec_ref(v___y_4283_);
lean_dec(v___y_4282_);
lean_dec_ref(v___y_4281_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object* v_id_4290_, uint8_t v_danglingDot_4291_, lean_object* v_a_4292_, lean_object* v___x_4293_, lean_object* v_as_4294_, lean_object* v_as_x27_4295_, lean_object* v_b_4296_, lean_object* v_a_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v___x_4306_; 
v___x_4306_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_4290_, v_danglingDot_4291_, v_a_4292_, v___x_4293_, v_as_4294_, v_as_x27_4295_, v_b_4296_, v___y_4298_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
return v___x_4306_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object* v_id_4307_, lean_object* v_danglingDot_4308_, lean_object* v_a_4309_, lean_object* v___x_4310_, lean_object* v_as_4311_, lean_object* v_as_x27_4312_, lean_object* v_b_4313_, lean_object* v_a_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_){
_start:
{
uint8_t v_danglingDot_boxed_4323_; lean_object* v_res_4324_; 
v_danglingDot_boxed_4323_ = lean_unbox(v_danglingDot_4308_);
v_res_4324_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(v_id_4307_, v_danglingDot_boxed_4323_, v_a_4309_, v___x_4310_, v_as_4311_, v_as_x27_4312_, v_b_4313_, v_a_4314_, v___y_4315_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v___y_4319_);
lean_dec_ref(v___y_4318_);
lean_dec_ref(v___y_4317_);
lean_dec(v___y_4316_);
lean_dec_ref(v___y_4315_);
lean_dec(v_as_x27_4312_);
lean_dec(v_as_4311_);
return v_res_4324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object* v_as_4325_, size_t v_sz_4326_, size_t v_i_4327_, lean_object* v_b_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_){
_start:
{
lean_object* v___x_4337_; 
v___x_4337_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_4325_, v_sz_4326_, v_i_4327_, v_b_4328_, v___y_4329_, v___y_4330_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object* v_as_4338_, lean_object* v_sz_4339_, lean_object* v_i_4340_, lean_object* v_b_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_){
_start:
{
size_t v_sz_boxed_4350_; size_t v_i_boxed_4351_; lean_object* v_res_4352_; 
v_sz_boxed_4350_ = lean_unbox_usize(v_sz_4339_);
lean_dec(v_sz_4339_);
v_i_boxed_4351_ = lean_unbox_usize(v_i_4340_);
lean_dec(v_i_4340_);
v_res_4352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(v_as_4338_, v_sz_boxed_4350_, v_i_boxed_4351_, v_b_4341_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
lean_dec_ref(v___y_4344_);
lean_dec(v___y_4343_);
lean_dec_ref(v___y_4342_);
lean_dec_ref(v_as_4338_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object* v_00_u03b2_4353_, lean_object* v_f_4354_, lean_object* v_x_4355_, lean_object* v_x_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v___x_4365_; 
v___x_4365_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_4354_, v_x_4355_, v_x_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
return v___x_4365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object* v_00_u03b2_4366_, lean_object* v_f_4367_, lean_object* v_x_4368_, lean_object* v_x_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_){
_start:
{
lean_object* v_res_4378_; 
v_res_4378_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(v_00_u03b2_4366_, v_f_4367_, v_x_4368_, v_x_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec_ref(v___y_4372_);
lean_dec(v___y_4371_);
lean_dec_ref(v___y_4370_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object* v_00_u03b2_4379_, lean_object* v_map_4380_, lean_object* v_f_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_){
_start:
{
lean_object* v___x_4390_; 
v___x_4390_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_4380_, v_f_4381_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
return v___x_4390_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4391_, lean_object* v_map_4392_, lean_object* v_f_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_){
_start:
{
lean_object* v_res_4402_; 
v_res_4402_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(v_00_u03b2_4391_, v_map_4392_, v_f_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
lean_dec(v___y_4400_);
lean_dec_ref(v___y_4399_);
lean_dec(v___y_4398_);
lean_dec_ref(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec(v___y_4395_);
lean_dec_ref(v___y_4394_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object* v_00_u03b2_4403_, lean_object* v_f_4404_, lean_object* v_as_4405_, size_t v_i_4406_, size_t v_stop_4407_, lean_object* v_b_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_){
_start:
{
lean_object* v___x_4417_; 
v___x_4417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_4404_, v_as_4405_, v_i_4406_, v_stop_4407_, v_b_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_);
return v___x_4417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_4418_, lean_object* v_f_4419_, lean_object* v_as_4420_, lean_object* v_i_4421_, lean_object* v_stop_4422_, lean_object* v_b_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_){
_start:
{
size_t v_i_boxed_4432_; size_t v_stop_boxed_4433_; lean_object* v_res_4434_; 
v_i_boxed_4432_ = lean_unbox_usize(v_i_4421_);
lean_dec(v_i_4421_);
v_stop_boxed_4433_ = lean_unbox_usize(v_stop_4422_);
lean_dec(v_stop_4422_);
v_res_4434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(v_00_u03b2_4418_, v_f_4419_, v_as_4420_, v_i_boxed_4432_, v_stop_boxed_4433_, v_b_4423_, v___y_4424_, v___y_4425_, v___y_4426_, v___y_4427_, v___y_4428_, v___y_4429_, v___y_4430_);
lean_dec(v___y_4430_);
lean_dec_ref(v___y_4429_);
lean_dec(v___y_4428_);
lean_dec_ref(v___y_4427_);
lean_dec_ref(v___y_4426_);
lean_dec(v___y_4425_);
lean_dec_ref(v___y_4424_);
lean_dec_ref(v_as_4420_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object* v_id_4435_, uint8_t v_danglingDot_4436_, lean_object* v_a_4437_, lean_object* v___x_4438_, lean_object* v_as_4439_, lean_object* v_as_x27_4440_, lean_object* v_b_4441_, lean_object* v_a_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_){
_start:
{
lean_object* v___x_4451_; 
v___x_4451_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4435_, v_danglingDot_4436_, v_a_4437_, v___x_4438_, v_as_x27_4440_, v_b_4441_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_, v___y_4448_, v___y_4449_);
return v___x_4451_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object* v_id_4452_, lean_object* v_danglingDot_4453_, lean_object* v_a_4454_, lean_object* v___x_4455_, lean_object* v_as_4456_, lean_object* v_as_x27_4457_, lean_object* v_b_4458_, lean_object* v_a_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
uint8_t v_danglingDot_boxed_4468_; lean_object* v_res_4469_; 
v_danglingDot_boxed_4468_ = lean_unbox(v_danglingDot_4453_);
v_res_4469_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(v_id_4452_, v_danglingDot_boxed_4468_, v_a_4454_, v___x_4455_, v_as_4456_, v_as_x27_4457_, v_b_4458_, v_a_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec_ref(v___y_4462_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec(v_as_x27_4457_);
lean_dec(v_as_4456_);
return v_res_4469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_4470_, lean_object* v_map_4471_, lean_object* v_f_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
lean_object* v___x_4482_; 
v___x_4482_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_4471_, v_f_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_4483_, lean_object* v_map_4484_, lean_object* v_f_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_){
_start:
{
lean_object* v_res_4495_; 
v_res_4495_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(v_00_u03b2_4483_, v_map_4484_, v_f_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v___y_4491_);
lean_dec_ref(v___y_4490_);
lean_dec_ref(v___y_4489_);
lean_dec(v___y_4488_);
lean_dec_ref(v___y_4487_);
return v_res_4495_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object* v_map_4496_, lean_object* v_f_4497_, lean_object* v_init_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_){
_start:
{
lean_object* v___x_4507_; 
v___x_4507_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4497_, v_map_4496_, v_init_4498_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_);
return v___x_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_map_4508_, lean_object* v_f_4509_, lean_object* v_init_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_){
_start:
{
lean_object* v_res_4519_; 
v_res_4519_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(v_map_4508_, v_f_4509_, v_init_4510_, v___y_4511_, v___y_4512_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_);
lean_dec(v___y_4517_);
lean_dec_ref(v___y_4516_);
lean_dec(v___y_4515_);
lean_dec_ref(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___y_4512_);
lean_dec_ref(v___y_4511_);
return v_res_4519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object* v_00_u03c3_4520_, lean_object* v_00_u03b2_4521_, lean_object* v_map_4522_, lean_object* v_f_4523_, lean_object* v_init_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_){
_start:
{
lean_object* v___x_4533_; 
v___x_4533_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4523_, v_map_4522_, v_init_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_);
return v___x_4533_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03c3_4534_, lean_object* v_00_u03b2_4535_, lean_object* v_map_4536_, lean_object* v_f_4537_, lean_object* v_init_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
lean_object* v_res_4547_; 
v_res_4547_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(v_00_u03c3_4534_, v_00_u03b2_4535_, v_map_4536_, v_f_4537_, v_init_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
lean_dec(v___y_4545_);
lean_dec_ref(v___y_4544_);
lean_dec(v___y_4543_);
lean_dec_ref(v___y_4542_);
lean_dec_ref(v___y_4541_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
return v_res_4547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object* v_id_4548_, uint8_t v_danglingDot_4549_, lean_object* v_as_4550_, size_t v_sz_4551_, size_t v_i_4552_, lean_object* v_b_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_){
_start:
{
lean_object* v___x_4562_; 
v___x_4562_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_4548_, v_danglingDot_4549_, v_as_4550_, v_sz_4551_, v_i_4552_, v_b_4553_, v___y_4554_, v___y_4555_);
return v___x_4562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object* v_id_4563_, lean_object* v_danglingDot_4564_, lean_object* v_as_4565_, lean_object* v_sz_4566_, lean_object* v_i_4567_, lean_object* v_b_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_){
_start:
{
uint8_t v_danglingDot_boxed_4577_; size_t v_sz_boxed_4578_; size_t v_i_boxed_4579_; lean_object* v_res_4580_; 
v_danglingDot_boxed_4577_ = lean_unbox(v_danglingDot_4564_);
v_sz_boxed_4578_ = lean_unbox_usize(v_sz_4566_);
lean_dec(v_sz_4566_);
v_i_boxed_4579_ = lean_unbox_usize(v_i_4567_);
lean_dec(v_i_4567_);
v_res_4580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(v_id_4563_, v_danglingDot_boxed_4577_, v_as_4565_, v_sz_boxed_4578_, v_i_boxed_4579_, v_b_4568_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_, v___y_4574_, v___y_4575_);
lean_dec(v___y_4575_);
lean_dec_ref(v___y_4574_);
lean_dec(v___y_4573_);
lean_dec_ref(v___y_4572_);
lean_dec_ref(v___y_4571_);
lean_dec(v___y_4570_);
lean_dec_ref(v___y_4569_);
lean_dec_ref(v_as_4565_);
lean_dec(v_id_4563_);
return v_res_4580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object* v_map_4581_, lean_object* v_f_4582_, lean_object* v_init_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_){
_start:
{
lean_object* v___x_4593_; 
v___x_4593_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4582_, v_map_4581_, v_init_4583_, v___y_4584_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_, v___y_4591_);
return v___x_4593_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object* v_map_4594_, lean_object* v_f_4595_, lean_object* v_init_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_){
_start:
{
lean_object* v_res_4606_; 
v_res_4606_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(v_map_4594_, v_f_4595_, v_init_4596_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_);
lean_dec(v___y_4604_);
lean_dec_ref(v___y_4603_);
lean_dec(v___y_4602_);
lean_dec_ref(v___y_4601_);
lean_dec_ref(v___y_4600_);
lean_dec(v___y_4599_);
lean_dec_ref(v___y_4598_);
return v_res_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object* v_00_u03c3_4607_, lean_object* v_00_u03b2_4608_, lean_object* v_map_4609_, lean_object* v_f_4610_, lean_object* v_init_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_){
_start:
{
lean_object* v___x_4621_; 
v___x_4621_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4610_, v_map_4609_, v_init_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_, v___y_4619_);
return v___x_4621_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object* v_00_u03c3_4622_, lean_object* v_00_u03b2_4623_, lean_object* v_map_4624_, lean_object* v_f_4625_, lean_object* v_init_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_){
_start:
{
lean_object* v_res_4636_; 
v_res_4636_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(v_00_u03c3_4622_, v_00_u03b2_4623_, v_map_4624_, v_f_4625_, v_init_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_, v___y_4631_, v___y_4632_, v___y_4633_, v___y_4634_);
lean_dec(v___y_4634_);
lean_dec_ref(v___y_4633_);
lean_dec(v___y_4632_);
lean_dec_ref(v___y_4631_);
lean_dec_ref(v___y_4630_);
lean_dec(v___y_4629_);
lean_dec_ref(v___y_4628_);
return v_res_4636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object* v_00_u03c3_4637_, lean_object* v_00_u03b1_4638_, lean_object* v_00_u03b2_4639_, lean_object* v_f_4640_, lean_object* v_x_4641_, lean_object* v_x_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_){
_start:
{
lean_object* v___x_4651_; 
v___x_4651_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4640_, v_x_4641_, v_x_4642_, v___y_4643_, v___y_4644_, v___y_4645_, v___y_4646_, v___y_4647_, v___y_4648_, v___y_4649_);
return v___x_4651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object* v_00_u03c3_4652_, lean_object* v_00_u03b1_4653_, lean_object* v_00_u03b2_4654_, lean_object* v_f_4655_, lean_object* v_x_4656_, lean_object* v_x_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_){
_start:
{
lean_object* v_res_4666_; 
v_res_4666_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(v_00_u03c3_4652_, v_00_u03b1_4653_, v_00_u03b2_4654_, v_f_4655_, v_x_4656_, v_x_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v___y_4662_);
lean_dec_ref(v___y_4661_);
lean_dec_ref(v___y_4660_);
lean_dec(v___y_4659_);
lean_dec_ref(v___y_4658_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object* v_id_4667_, uint8_t v_danglingDot_4668_, lean_object* v_as_4669_, size_t v_sz_4670_, size_t v_i_4671_, lean_object* v_b_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_){
_start:
{
lean_object* v___x_4681_; 
v___x_4681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_4667_, v_danglingDot_4668_, v_as_4669_, v_sz_4670_, v_i_4671_, v_b_4672_, v___y_4673_, v___y_4674_);
return v___x_4681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object* v_id_4682_, lean_object* v_danglingDot_4683_, lean_object* v_as_4684_, lean_object* v_sz_4685_, lean_object* v_i_4686_, lean_object* v_b_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_){
_start:
{
uint8_t v_danglingDot_boxed_4696_; size_t v_sz_boxed_4697_; size_t v_i_boxed_4698_; lean_object* v_res_4699_; 
v_danglingDot_boxed_4696_ = lean_unbox(v_danglingDot_4683_);
v_sz_boxed_4697_ = lean_unbox_usize(v_sz_4685_);
lean_dec(v_sz_4685_);
v_i_boxed_4698_ = lean_unbox_usize(v_i_4686_);
lean_dec(v_i_4686_);
v_res_4699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(v_id_4682_, v_danglingDot_boxed_4696_, v_as_4684_, v_sz_boxed_4697_, v_i_boxed_4698_, v_b_4687_, v___y_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_);
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4693_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec_ref(v___y_4690_);
lean_dec(v___y_4689_);
lean_dec_ref(v___y_4688_);
lean_dec_ref(v_as_4684_);
lean_dec(v_id_4682_);
return v_res_4699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object* v_00_u03c3_4700_, lean_object* v_00_u03b1_4701_, lean_object* v_00_u03b2_4702_, lean_object* v_f_4703_, lean_object* v_x_4704_, lean_object* v_x_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v___x_4715_; 
v___x_4715_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4703_, v_x_4704_, v_x_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_, v___y_4711_, v___y_4712_, v___y_4713_);
return v___x_4715_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object* v_00_u03c3_4716_, lean_object* v_00_u03b1_4717_, lean_object* v_00_u03b2_4718_, lean_object* v_f_4719_, lean_object* v_x_4720_, lean_object* v_x_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_){
_start:
{
lean_object* v_res_4731_; 
v_res_4731_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(v_00_u03c3_4716_, v_00_u03b1_4717_, v_00_u03b2_4718_, v_f_4719_, v_x_4720_, v_x_4721_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_);
lean_dec(v___y_4729_);
lean_dec_ref(v___y_4728_);
lean_dec(v___y_4727_);
lean_dec_ref(v___y_4726_);
lean_dec_ref(v___y_4725_);
lean_dec(v___y_4724_);
lean_dec_ref(v___y_4723_);
return v_res_4731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object* v_00_u03b1_4732_, lean_object* v_00_u03b2_4733_, lean_object* v_00_u03c3_4734_, lean_object* v_f_4735_, lean_object* v_as_4736_, size_t v_i_4737_, size_t v_stop_4738_, lean_object* v_b_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_){
_start:
{
lean_object* v___x_4748_; 
v___x_4748_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_4735_, v_as_4736_, v_i_4737_, v_stop_4738_, v_b_4739_, v___y_4740_, v___y_4741_, v___y_4742_, v___y_4743_, v___y_4744_, v___y_4745_, v___y_4746_);
return v___x_4748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object* v_00_u03b1_4749_, lean_object* v_00_u03b2_4750_, lean_object* v_00_u03c3_4751_, lean_object* v_f_4752_, lean_object* v_as_4753_, lean_object* v_i_4754_, lean_object* v_stop_4755_, lean_object* v_b_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_){
_start:
{
size_t v_i_boxed_4765_; size_t v_stop_boxed_4766_; lean_object* v_res_4767_; 
v_i_boxed_4765_ = lean_unbox_usize(v_i_4754_);
lean_dec(v_i_4754_);
v_stop_boxed_4766_ = lean_unbox_usize(v_stop_4755_);
lean_dec(v_stop_4755_);
v_res_4767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(v_00_u03b1_4749_, v_00_u03b2_4750_, v_00_u03c3_4751_, v_f_4752_, v_as_4753_, v_i_boxed_4765_, v_stop_boxed_4766_, v_b_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
lean_dec(v___y_4763_);
lean_dec_ref(v___y_4762_);
lean_dec(v___y_4761_);
lean_dec_ref(v___y_4760_);
lean_dec_ref(v___y_4759_);
lean_dec(v___y_4758_);
lean_dec_ref(v___y_4757_);
lean_dec_ref(v_as_4753_);
return v_res_4767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object* v_00_u03c3_4768_, lean_object* v_00_u03b1_4769_, lean_object* v_00_u03b2_4770_, lean_object* v_f_4771_, lean_object* v_keys_4772_, lean_object* v_vals_4773_, lean_object* v_heq_4774_, lean_object* v_i_4775_, lean_object* v_acc_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_){
_start:
{
lean_object* v___x_4785_; 
v___x_4785_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_4771_, v_keys_4772_, v_vals_4773_, v_i_4775_, v_acc_4776_, v___y_4777_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_, v___y_4782_, v___y_4783_);
return v___x_4785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object** _args){
lean_object* v_00_u03c3_4786_ = _args[0];
lean_object* v_00_u03b1_4787_ = _args[1];
lean_object* v_00_u03b2_4788_ = _args[2];
lean_object* v_f_4789_ = _args[3];
lean_object* v_keys_4790_ = _args[4];
lean_object* v_vals_4791_ = _args[5];
lean_object* v_heq_4792_ = _args[6];
lean_object* v_i_4793_ = _args[7];
lean_object* v_acc_4794_ = _args[8];
lean_object* v___y_4795_ = _args[9];
lean_object* v___y_4796_ = _args[10];
lean_object* v___y_4797_ = _args[11];
lean_object* v___y_4798_ = _args[12];
lean_object* v___y_4799_ = _args[13];
lean_object* v___y_4800_ = _args[14];
lean_object* v___y_4801_ = _args[15];
lean_object* v___y_4802_ = _args[16];
_start:
{
lean_object* v_res_4803_; 
v_res_4803_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(v_00_u03c3_4786_, v_00_u03b1_4787_, v_00_u03b2_4788_, v_f_4789_, v_keys_4790_, v_vals_4791_, v_heq_4792_, v_i_4793_, v_acc_4794_, v___y_4795_, v___y_4796_, v___y_4797_, v___y_4798_, v___y_4799_, v___y_4800_, v___y_4801_);
lean_dec(v___y_4801_);
lean_dec_ref(v___y_4800_);
lean_dec(v___y_4799_);
lean_dec_ref(v___y_4798_);
lean_dec_ref(v___y_4797_);
lean_dec(v___y_4796_);
lean_dec_ref(v___y_4795_);
lean_dec_ref(v_vals_4791_);
lean_dec_ref(v_keys_4790_);
return v_res_4803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object* v_00_u03b1_4804_, lean_object* v_00_u03b2_4805_, lean_object* v_00_u03c3_4806_, lean_object* v_f_4807_, lean_object* v_as_4808_, size_t v_i_4809_, size_t v_stop_4810_, lean_object* v_b_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_){
_start:
{
lean_object* v___x_4821_; 
v___x_4821_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_4807_, v_as_4808_, v_i_4809_, v_stop_4810_, v_b_4811_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_, v___y_4816_, v___y_4817_, v___y_4818_, v___y_4819_);
return v___x_4821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object** _args){
lean_object* v_00_u03b1_4822_ = _args[0];
lean_object* v_00_u03b2_4823_ = _args[1];
lean_object* v_00_u03c3_4824_ = _args[2];
lean_object* v_f_4825_ = _args[3];
lean_object* v_as_4826_ = _args[4];
lean_object* v_i_4827_ = _args[5];
lean_object* v_stop_4828_ = _args[6];
lean_object* v_b_4829_ = _args[7];
lean_object* v___y_4830_ = _args[8];
lean_object* v___y_4831_ = _args[9];
lean_object* v___y_4832_ = _args[10];
lean_object* v___y_4833_ = _args[11];
lean_object* v___y_4834_ = _args[12];
lean_object* v___y_4835_ = _args[13];
lean_object* v___y_4836_ = _args[14];
lean_object* v___y_4837_ = _args[15];
lean_object* v___y_4838_ = _args[16];
_start:
{
size_t v_i_boxed_4839_; size_t v_stop_boxed_4840_; lean_object* v_res_4841_; 
v_i_boxed_4839_ = lean_unbox_usize(v_i_4827_);
lean_dec(v_i_4827_);
v_stop_boxed_4840_ = lean_unbox_usize(v_stop_4828_);
lean_dec(v_stop_4828_);
v_res_4841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(v_00_u03b1_4822_, v_00_u03b2_4823_, v_00_u03c3_4824_, v_f_4825_, v_as_4826_, v_i_boxed_4839_, v_stop_boxed_4840_, v_b_4829_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_, v___y_4836_, v___y_4837_);
lean_dec(v___y_4837_);
lean_dec_ref(v___y_4836_);
lean_dec(v___y_4835_);
lean_dec_ref(v___y_4834_);
lean_dec_ref(v___y_4833_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
lean_dec_ref(v_as_4826_);
return v_res_4841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object* v_00_u03c3_4842_, lean_object* v_00_u03b1_4843_, lean_object* v_00_u03b2_4844_, lean_object* v_f_4845_, lean_object* v_keys_4846_, lean_object* v_vals_4847_, lean_object* v_heq_4848_, lean_object* v_i_4849_, lean_object* v_acc_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v___x_4860_; 
v___x_4860_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_4845_, v_keys_4846_, v_vals_4847_, v_i_4849_, v_acc_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_, v___y_4858_);
return v___x_4860_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object** _args){
lean_object* v_00_u03c3_4861_ = _args[0];
lean_object* v_00_u03b1_4862_ = _args[1];
lean_object* v_00_u03b2_4863_ = _args[2];
lean_object* v_f_4864_ = _args[3];
lean_object* v_keys_4865_ = _args[4];
lean_object* v_vals_4866_ = _args[5];
lean_object* v_heq_4867_ = _args[6];
lean_object* v_i_4868_ = _args[7];
lean_object* v_acc_4869_ = _args[8];
lean_object* v___y_4870_ = _args[9];
lean_object* v___y_4871_ = _args[10];
lean_object* v___y_4872_ = _args[11];
lean_object* v___y_4873_ = _args[12];
lean_object* v___y_4874_ = _args[13];
lean_object* v___y_4875_ = _args[14];
lean_object* v___y_4876_ = _args[15];
lean_object* v___y_4877_ = _args[16];
lean_object* v___y_4878_ = _args[17];
_start:
{
lean_object* v_res_4879_; 
v_res_4879_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(v_00_u03c3_4861_, v_00_u03b1_4862_, v_00_u03b2_4863_, v_f_4864_, v_keys_4865_, v_vals_4866_, v_heq_4867_, v_i_4868_, v_acc_4869_, v___y_4870_, v___y_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_);
lean_dec(v___y_4877_);
lean_dec_ref(v___y_4876_);
lean_dec(v___y_4875_);
lean_dec_ref(v___y_4874_);
lean_dec_ref(v___y_4873_);
lean_dec(v___y_4872_);
lean_dec_ref(v___y_4871_);
lean_dec_ref(v_vals_4866_);
lean_dec_ref(v_keys_4865_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object* v_uri_4880_, lean_object* v_pos_4881_, lean_object* v_completionInfoPos_4882_, lean_object* v_ctx_4883_, lean_object* v_lctx_4884_, lean_object* v_stx_4885_, lean_object* v_id_4886_, lean_object* v_hoverInfo_4887_, uint8_t v_danglingDot_4888_, lean_object* v_a_4889_){
_start:
{
lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; 
v___x_4891_ = lean_box(v_danglingDot_4888_);
lean_inc_ref(v_ctx_4883_);
v___x_4892_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed), 13, 5);
lean_closure_set(v___x_4892_, 0, v_ctx_4883_);
lean_closure_set(v___x_4892_, 1, v_stx_4885_);
lean_closure_set(v___x_4892_, 2, v_id_4886_);
lean_closure_set(v___x_4892_, 3, v_hoverInfo_4887_);
lean_closure_set(v___x_4892_, 4, v___x_4891_);
v___x_4893_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_4880_, v_pos_4881_, v_completionInfoPos_4882_, v_ctx_4883_, v_lctx_4884_, v___x_4892_, v_a_4889_);
return v___x_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object* v_uri_4894_, lean_object* v_pos_4895_, lean_object* v_completionInfoPos_4896_, lean_object* v_ctx_4897_, lean_object* v_lctx_4898_, lean_object* v_stx_4899_, lean_object* v_id_4900_, lean_object* v_hoverInfo_4901_, lean_object* v_danglingDot_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_){
_start:
{
uint8_t v_danglingDot_boxed_4905_; lean_object* v_res_4906_; 
v_danglingDot_boxed_4905_ = lean_unbox(v_danglingDot_4902_);
v_res_4906_ = l_Lean_Server_Completion_idCompletion(v_uri_4894_, v_pos_4895_, v_completionInfoPos_4896_, v_ctx_4897_, v_lctx_4898_, v_stx_4899_, v_id_4900_, v_hoverInfo_4901_, v_danglingDot_boxed_4905_, v_a_4903_);
lean_dec_ref(v_a_4903_);
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object* v_e_4907_, lean_object* v___y_4908_){
_start:
{
uint8_t v___x_4910_; 
v___x_4910_ = l_Lean_Expr_hasMVar(v_e_4907_);
if (v___x_4910_ == 0)
{
lean_object* v___x_4911_; lean_object* v___x_4912_; 
v___x_4911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4911_, 0, v_e_4907_);
v___x_4912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4912_, 0, v___x_4911_);
return v___x_4912_;
}
else
{
lean_object* v___x_4913_; lean_object* v_mctx_4914_; lean_object* v___x_4915_; lean_object* v_fst_4916_; lean_object* v_snd_4917_; lean_object* v___x_4918_; lean_object* v_cache_4919_; lean_object* v_zetaDeltaFVarIds_4920_; lean_object* v_postponed_4921_; lean_object* v_diag_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4932_; 
v___x_4913_ = lean_st_ref_get(v___y_4908_);
v_mctx_4914_ = lean_ctor_get(v___x_4913_, 0);
lean_inc_ref(v_mctx_4914_);
lean_dec(v___x_4913_);
v___x_4915_ = l_Lean_instantiateMVarsCore(v_mctx_4914_, v_e_4907_);
v_fst_4916_ = lean_ctor_get(v___x_4915_, 0);
lean_inc(v_fst_4916_);
v_snd_4917_ = lean_ctor_get(v___x_4915_, 1);
lean_inc(v_snd_4917_);
lean_dec_ref(v___x_4915_);
v___x_4918_ = lean_st_ref_take(v___y_4908_);
v_cache_4919_ = lean_ctor_get(v___x_4918_, 1);
v_zetaDeltaFVarIds_4920_ = lean_ctor_get(v___x_4918_, 2);
v_postponed_4921_ = lean_ctor_get(v___x_4918_, 3);
v_diag_4922_ = lean_ctor_get(v___x_4918_, 4);
v_isSharedCheck_4932_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4932_ == 0)
{
lean_object* v_unused_4933_; 
v_unused_4933_ = lean_ctor_get(v___x_4918_, 0);
lean_dec(v_unused_4933_);
v___x_4924_ = v___x_4918_;
v_isShared_4925_ = v_isSharedCheck_4932_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_diag_4922_);
lean_inc(v_postponed_4921_);
lean_inc(v_zetaDeltaFVarIds_4920_);
lean_inc(v_cache_4919_);
lean_dec(v___x_4918_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4932_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v___x_4927_; 
if (v_isShared_4925_ == 0)
{
lean_ctor_set(v___x_4924_, 0, v_snd_4917_);
v___x_4927_ = v___x_4924_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4931_; 
v_reuseFailAlloc_4931_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4931_, 0, v_snd_4917_);
lean_ctor_set(v_reuseFailAlloc_4931_, 1, v_cache_4919_);
lean_ctor_set(v_reuseFailAlloc_4931_, 2, v_zetaDeltaFVarIds_4920_);
lean_ctor_set(v_reuseFailAlloc_4931_, 3, v_postponed_4921_);
lean_ctor_set(v_reuseFailAlloc_4931_, 4, v_diag_4922_);
v___x_4927_ = v_reuseFailAlloc_4931_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; 
v___x_4928_ = lean_st_ref_put(v___y_4908_, v___x_4927_);
v___x_4929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4929_, 0, v_fst_4916_);
v___x_4930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4930_, 0, v___x_4929_);
return v___x_4930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object* v_e_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_){
_start:
{
lean_object* v_res_4937_; 
v_res_4937_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_4934_, v___y_4935_);
lean_dec(v___y_4935_);
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object* v_e_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_){
_start:
{
lean_object* v___x_4947_; 
v___x_4947_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_4938_, v___y_4943_);
return v___x_4947_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object* v_e_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_){
_start:
{
lean_object* v_res_4957_; 
v_res_4957_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(v_e_4948_, v___y_4949_, v___y_4950_, v___y_4951_, v___y_4952_, v___y_4953_, v___y_4954_, v___y_4955_);
lean_dec(v___y_4955_);
lean_dec_ref(v___y_4954_);
lean_dec(v___y_4953_);
lean_dec_ref(v___y_4952_);
lean_dec_ref(v___y_4951_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object* v_00___4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_){
_start:
{
lean_object* v___x_4967_; lean_object* v___x_4968_; 
v___x_4967_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_4968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4968_, 0, v___x_4967_);
return v___x_4968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object* v_00___4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_){
_start:
{
lean_object* v_res_4978_; 
v_res_4978_ = l_Lean_Server_Completion_dotCompletion___lam__0(v_00___4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_, v___y_4974_, v___y_4975_, v___y_4976_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
lean_dec_ref(v___y_4972_);
lean_dec(v___y_4971_);
lean_dec_ref(v___y_4970_);
return v_res_4978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object* v_a_4979_, lean_object* v___f_4980_, lean_object* v_declName_4981_, lean_object* v_decl_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_){
_start:
{
lean_object* v_unnormedTypeName_4991_; uint8_t v___x_4992_; 
v_unnormedTypeName_4991_ = l_Lean_Name_getPrefix(v_declName_4981_);
v___x_4992_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_unnormedTypeName_4991_, v_a_4979_);
if (v___x_4992_ == 0)
{
lean_object* v___x_4993_; lean_object* v___x_4994_; 
lean_dec_ref(v_decl_4982_);
lean_dec(v_declName_4981_);
v___x_4993_ = lean_box(0);
lean_inc(v___y_4989_);
lean_inc_ref(v___y_4988_);
lean_inc(v___y_4987_);
lean_inc_ref(v___y_4986_);
lean_inc_ref(v___y_4985_);
lean_inc(v___y_4984_);
lean_inc_ref(v___y_4983_);
v___x_4994_ = lean_apply_9(v___f_4980_, v___x_4993_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, lean_box(0));
return v___x_4994_;
}
else
{
lean_object* v___x_4995_; lean_object* v_a_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5055_; 
v___x_4995_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_4981_, v___y_4989_);
v_a_4996_ = lean_ctor_get(v___x_4995_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_4995_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_4998_ = v___x_4995_;
v_isShared_4999_ = v_isSharedCheck_5055_;
goto v_resetjp_4997_;
}
else
{
lean_inc(v_a_4996_);
lean_dec(v___x_4995_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5055_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
if (lean_obj_tag(v_a_4996_) == 1)
{
lean_object* v_val_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5050_; 
lean_del_object(v___x_4998_);
v_val_5000_ = lean_ctor_get(v_a_4996_, 0);
v_isSharedCheck_5050_ = !lean_is_exclusive(v_a_4996_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5002_ = v_a_4996_;
v_isShared_5003_ = v_isSharedCheck_5050_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_val_5000_);
lean_dec(v_a_4996_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5050_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v_info_5004_; lean_object* v_kind_5005_; lean_object* v_tags_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; 
v_info_5004_ = lean_ctor_get(v_decl_4982_, 0);
lean_inc_ref(v_info_5004_);
v_kind_5005_ = lean_ctor_get(v_decl_4982_, 1);
lean_inc_ref(v_kind_5005_);
v_tags_5006_ = lean_ctor_get(v_decl_4982_, 2);
lean_inc_ref(v_tags_5006_);
lean_dec_ref(v_decl_4982_);
v___x_5007_ = l_Lean_Name_getPrefix(v_val_5000_);
lean_dec(v_val_5000_);
v___x_5008_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v___x_5007_, v_info_5004_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_);
if (lean_obj_tag(v___x_5008_) == 0)
{
lean_object* v_a_5009_; uint8_t v___x_5010_; 
v_a_5009_ = lean_ctor_get(v___x_5008_, 0);
lean_inc(v_a_5009_);
lean_dec_ref_known(v___x_5008_, 1);
v___x_5010_ = lean_unbox(v_a_5009_);
lean_dec(v_a_5009_);
if (v___x_5010_ == 0)
{
lean_object* v___x_5011_; lean_object* v___x_5012_; 
lean_dec_ref(v_tags_5006_);
lean_dec_ref(v_kind_5005_);
lean_dec_ref(v_info_5004_);
lean_del_object(v___x_5002_);
v___x_5011_ = lean_box(0);
lean_inc(v___y_4989_);
lean_inc_ref(v___y_4988_);
lean_inc(v___y_4987_);
lean_inc_ref(v___y_4986_);
lean_inc_ref(v___y_4985_);
lean_inc(v___y_4984_);
lean_inc_ref(v___y_4983_);
v___x_5012_ = lean_apply_9(v___f_4980_, v___x_5011_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, lean_box(0));
return v___x_5012_;
}
else
{
lean_object* v___x_5013_; 
lean_dec_ref(v___f_4980_);
lean_inc(v___y_4989_);
lean_inc_ref(v___y_4988_);
lean_inc(v___y_4987_);
lean_inc_ref(v___y_4986_);
v___x_5013_ = lean_apply_5(v_kind_5005_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, lean_box(0));
if (lean_obj_tag(v___x_5013_) == 0)
{
lean_object* v_a_5014_; lean_object* v___x_5015_; 
v_a_5014_ = lean_ctor_get(v___x_5013_, 0);
lean_inc(v_a_5014_);
lean_dec_ref_known(v___x_5013_, 1);
lean_inc(v___y_4989_);
lean_inc_ref(v___y_4988_);
lean_inc(v___y_4987_);
lean_inc_ref(v___y_4986_);
v___x_5015_ = lean_apply_5(v_tags_5006_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, lean_box(0));
if (lean_obj_tag(v___x_5015_) == 0)
{
lean_object* v_a_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5022_; 
v_a_5016_ = lean_ctor_get(v___x_5015_, 0);
lean_inc(v_a_5016_);
lean_dec_ref_known(v___x_5015_, 1);
v___x_5017_ = l_Lean_ConstantInfo_name(v_info_5004_);
lean_dec_ref(v_info_5004_);
v___x_5018_ = l_Lean_Name_getString_x21(v___x_5017_);
v___x_5019_ = lean_box(0);
v___x_5020_ = l_Lean_Name_str___override(v___x_5019_, v___x_5018_);
if (v_isShared_5003_ == 0)
{
lean_ctor_set_tag(v___x_5002_, 0);
lean_ctor_set(v___x_5002_, 0, v___x_5017_);
v___x_5022_ = v___x_5002_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v___x_5017_);
v___x_5022_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
uint8_t v___x_5023_; lean_object* v___x_5024_; 
v___x_5023_ = lean_unbox(v_a_5014_);
lean_dec(v_a_5014_);
v___x_5024_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5020_, v___x_5022_, v___x_5023_, v_a_5016_, v___y_4983_, v___y_4984_);
return v___x_5024_;
}
}
else
{
lean_object* v_a_5026_; lean_object* v___x_5028_; uint8_t v_isShared_5029_; uint8_t v_isSharedCheck_5033_; 
lean_dec(v_a_5014_);
lean_dec_ref(v_info_5004_);
lean_del_object(v___x_5002_);
v_a_5026_ = lean_ctor_get(v___x_5015_, 0);
v_isSharedCheck_5033_ = !lean_is_exclusive(v___x_5015_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5028_ = v___x_5015_;
v_isShared_5029_ = v_isSharedCheck_5033_;
goto v_resetjp_5027_;
}
else
{
lean_inc(v_a_5026_);
lean_dec(v___x_5015_);
v___x_5028_ = lean_box(0);
v_isShared_5029_ = v_isSharedCheck_5033_;
goto v_resetjp_5027_;
}
v_resetjp_5027_:
{
lean_object* v___x_5031_; 
if (v_isShared_5029_ == 0)
{
v___x_5031_ = v___x_5028_;
goto v_reusejp_5030_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v_a_5026_);
v___x_5031_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5030_;
}
v_reusejp_5030_:
{
return v___x_5031_;
}
}
}
}
else
{
lean_object* v_a_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5041_; 
lean_dec_ref(v_tags_5006_);
lean_dec_ref(v_info_5004_);
lean_del_object(v___x_5002_);
v_a_5034_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5036_ = v___x_5013_;
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_a_5034_);
lean_dec(v___x_5013_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v___x_5039_; 
if (v_isShared_5037_ == 0)
{
v___x_5039_ = v___x_5036_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_a_5034_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
}
}
else
{
lean_object* v_a_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5049_; 
lean_dec_ref(v_tags_5006_);
lean_dec_ref(v_kind_5005_);
lean_dec_ref(v_info_5004_);
lean_del_object(v___x_5002_);
lean_dec_ref(v___f_4980_);
v_a_5042_ = lean_ctor_get(v___x_5008_, 0);
v_isSharedCheck_5049_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5049_ == 0)
{
v___x_5044_ = v___x_5008_;
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_a_5042_);
lean_dec(v___x_5008_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v___x_5047_; 
if (v_isShared_5045_ == 0)
{
v___x_5047_ = v___x_5044_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v_a_5042_);
v___x_5047_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
return v___x_5047_;
}
}
}
}
}
else
{
lean_object* v___x_5051_; lean_object* v___x_5053_; 
lean_dec(v_a_4996_);
lean_dec_ref(v_decl_4982_);
lean_dec_ref(v___f_4980_);
v___x_5051_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_4999_ == 0)
{
lean_ctor_set(v___x_4998_, 0, v___x_5051_);
v___x_5053_ = v___x_4998_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v___x_5051_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object* v_a_5056_, lean_object* v___f_5057_, lean_object* v_declName_5058_, lean_object* v_decl_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_){
_start:
{
lean_object* v_res_5068_; 
v_res_5068_ = l_Lean_Server_Completion_dotCompletion___lam__1(v_a_5056_, v___f_5057_, v_declName_5058_, v_decl_5059_, v___y_5060_, v___y_5061_, v___y_5062_, v___y_5063_, v___y_5064_, v___y_5065_, v___y_5066_);
lean_dec(v___y_5066_);
lean_dec_ref(v___y_5065_);
lean_dec(v___y_5064_);
lean_dec_ref(v___y_5063_);
lean_dec_ref(v___y_5062_);
lean_dec(v___y_5061_);
lean_dec_ref(v___y_5060_);
return v_res_5068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__2(lean_object* v___f_5069_, lean_object* v_expr_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_){
_start:
{
lean_object* v_a_5083_; lean_object* v___y_5087_; lean_object* v___y_5097_; lean_object* v_a_5098_; lean_object* v___x_5101_; 
lean_inc(v___y_5077_);
lean_inc_ref(v___y_5076_);
lean_inc(v___y_5075_);
lean_inc_ref(v___y_5074_);
v___x_5101_ = lean_infer_type(v_expr_5070_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_);
if (lean_obj_tag(v___x_5101_) == 0)
{
lean_object* v_a_5102_; lean_object* v___x_5103_; lean_object* v_a_5104_; lean_object* v_a_5105_; lean_object* v___x_5106_; 
v_a_5102_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5101_, 1);
v___x_5103_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_a_5102_, v___y_5075_);
v_a_5104_ = lean_ctor_get(v___x_5103_, 0);
lean_inc(v_a_5104_);
lean_dec_ref(v___x_5103_);
v_a_5105_ = lean_ctor_get(v_a_5104_, 0);
lean_inc(v_a_5105_);
lean_dec(v_a_5104_);
v___x_5106_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_a_5105_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_);
if (lean_obj_tag(v___x_5106_) == 0)
{
lean_object* v_a_5107_; 
v_a_5107_ = lean_ctor_get(v___x_5106_, 0);
lean_inc(v_a_5107_);
lean_dec_ref_known(v___x_5106_, 1);
v_a_5083_ = v_a_5107_;
goto v___jp_5082_;
}
else
{
lean_object* v_a_5108_; lean_object* v___x_5110_; uint8_t v_isShared_5111_; uint8_t v_isSharedCheck_5115_; 
v_a_5108_ = lean_ctor_get(v___x_5106_, 0);
v_isSharedCheck_5115_ = !lean_is_exclusive(v___x_5106_);
if (v_isSharedCheck_5115_ == 0)
{
v___x_5110_ = v___x_5106_;
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
else
{
lean_inc(v_a_5108_);
lean_dec(v___x_5106_);
v___x_5110_ = lean_box(0);
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
v_resetjp_5109_:
{
lean_object* v___x_5113_; 
lean_inc(v_a_5108_);
if (v_isShared_5111_ == 0)
{
v___x_5113_ = v___x_5110_;
goto v_reusejp_5112_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v_a_5108_);
v___x_5113_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5112_;
}
v_reusejp_5112_:
{
v___y_5097_ = v___x_5113_;
v_a_5098_ = v_a_5108_;
goto v___jp_5096_;
}
}
}
}
else
{
lean_object* v_a_5116_; lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5123_; 
v_a_5116_ = lean_ctor_get(v___x_5101_, 0);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5101_);
if (v_isSharedCheck_5123_ == 0)
{
v___x_5118_ = v___x_5101_;
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
else
{
lean_inc(v_a_5116_);
lean_dec(v___x_5101_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5121_; 
lean_inc(v_a_5116_);
if (v_isShared_5119_ == 0)
{
v___x_5121_ = v___x_5118_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_a_5116_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
v___y_5097_ = v___x_5121_;
v_a_5098_ = v_a_5116_;
goto v___jp_5096_;
}
}
}
v___jp_5079_:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; 
v___x_5080_ = lean_box(0);
lean_inc(v___y_5077_);
lean_inc_ref(v___y_5076_);
lean_inc(v___y_5075_);
lean_inc_ref(v___y_5074_);
lean_inc_ref(v___y_5073_);
lean_inc(v___y_5072_);
lean_inc_ref(v___y_5071_);
v___x_5081_ = lean_apply_9(v___f_5069_, v___x_5080_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, lean_box(0));
return v___x_5081_;
}
v___jp_5082_:
{
if (lean_obj_tag(v_a_5083_) == 0)
{
lean_object* v___f_5084_; lean_object* v___x_5085_; 
v___f_5084_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__1___boxed), 12, 2);
lean_closure_set(v___f_5084_, 0, v_a_5083_);
lean_closure_set(v___f_5084_, 1, v___f_5069_);
v___x_5085_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5084_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_);
return v___x_5085_;
}
else
{
goto v___jp_5079_;
}
}
v___jp_5086_:
{
lean_object* v_a_5088_; lean_object* v___x_5090_; uint8_t v_isShared_5091_; uint8_t v_isSharedCheck_5095_; 
v_a_5088_ = lean_ctor_get(v___y_5087_, 0);
v_isSharedCheck_5095_ = !lean_is_exclusive(v___y_5087_);
if (v_isSharedCheck_5095_ == 0)
{
v___x_5090_ = v___y_5087_;
v_isShared_5091_ = v_isSharedCheck_5095_;
goto v_resetjp_5089_;
}
else
{
lean_inc(v_a_5088_);
lean_dec(v___y_5087_);
v___x_5090_ = lean_box(0);
v_isShared_5091_ = v_isSharedCheck_5095_;
goto v_resetjp_5089_;
}
v_resetjp_5089_:
{
lean_object* v___x_5093_; 
if (v_isShared_5091_ == 0)
{
v___x_5093_ = v___x_5090_;
goto v_reusejp_5092_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v_a_5088_);
v___x_5093_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5092_;
}
v_reusejp_5092_:
{
return v___x_5093_;
}
}
}
v___jp_5096_:
{
uint8_t v___x_5099_; 
v___x_5099_ = l_Lean_Exception_isInterrupt(v_a_5098_);
if (v___x_5099_ == 0)
{
uint8_t v___x_5100_; 
v___x_5100_ = l_Lean_Exception_isRuntime(v_a_5098_);
if (v___x_5100_ == 0)
{
lean_dec_ref(v___y_5097_);
goto v___jp_5079_;
}
else
{
lean_dec_ref(v___f_5069_);
v___y_5087_ = v___y_5097_;
goto v___jp_5086_;
}
}
else
{
lean_dec_ref(v_a_5098_);
lean_dec_ref(v___f_5069_);
v___y_5087_ = v___y_5097_;
goto v___jp_5086_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__2___boxed(lean_object* v___f_5124_, lean_object* v_expr_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_){
_start:
{
lean_object* v_res_5134_; 
v_res_5134_ = l_Lean_Server_Completion_dotCompletion___lam__2(v___f_5124_, v_expr_5125_, v___y_5126_, v___y_5127_, v___y_5128_, v___y_5129_, v___y_5130_, v___y_5131_, v___y_5132_);
lean_dec(v___y_5132_);
lean_dec_ref(v___y_5131_);
lean_dec(v___y_5130_);
lean_dec_ref(v___y_5129_);
lean_dec_ref(v___y_5128_);
lean_dec(v___y_5127_);
lean_dec_ref(v___y_5126_);
return v_res_5134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object* v_uri_5136_, lean_object* v_pos_5137_, lean_object* v_completionInfoPos_5138_, lean_object* v_ctx_5139_, lean_object* v_info_5140_, lean_object* v_a_5141_){
_start:
{
lean_object* v_lctx_5143_; lean_object* v_expr_5144_; lean_object* v___f_5145_; lean_object* v___f_5146_; lean_object* v___x_5147_; 
v_lctx_5143_ = lean_ctor_get(v_info_5140_, 1);
lean_inc_ref(v_lctx_5143_);
v_expr_5144_ = lean_ctor_get(v_info_5140_, 3);
lean_inc_ref(v_expr_5144_);
lean_dec_ref(v_info_5140_);
v___f_5145_ = ((lean_object*)(l_Lean_Server_Completion_dotCompletion___closed__0));
v___f_5146_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__2___boxed), 10, 2);
lean_closure_set(v___f_5146_, 0, v___f_5145_);
lean_closure_set(v___f_5146_, 1, v_expr_5144_);
v___x_5147_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5136_, v_pos_5137_, v_completionInfoPos_5138_, v_ctx_5139_, v_lctx_5143_, v___f_5146_, v_a_5141_);
return v___x_5147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object* v_uri_5148_, lean_object* v_pos_5149_, lean_object* v_completionInfoPos_5150_, lean_object* v_ctx_5151_, lean_object* v_info_5152_, lean_object* v_a_5153_, lean_object* v_a_5154_){
_start:
{
lean_object* v_res_5155_; 
v_res_5155_ = l_Lean_Server_Completion_dotCompletion(v_uri_5148_, v_pos_5149_, v_completionInfoPos_5150_, v_ctx_5151_, v_info_5152_, v_a_5153_);
lean_dec_ref(v_a_5153_);
return v_res_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object* v___x_5156_, lean_object* v___f_5157_, lean_object* v_id_5158_, lean_object* v_declName_5159_, lean_object* v_decl_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_){
_start:
{
lean_object* v___x_5169_; uint8_t v___x_5170_; 
v___x_5169_ = l_Lean_Name_getPrefix(v_declName_5159_);
lean_inc(v___x_5156_);
v___x_5170_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v___x_5169_, v___x_5156_);
if (v___x_5170_ == 0)
{
lean_object* v___x_5171_; lean_object* v___x_5172_; 
lean_dec_ref(v_decl_5160_);
lean_dec(v_declName_5159_);
lean_dec(v___x_5156_);
v___x_5171_ = lean_box(0);
lean_inc(v___y_5167_);
lean_inc_ref(v___y_5166_);
lean_inc(v___y_5165_);
lean_inc_ref(v___y_5164_);
lean_inc_ref(v___y_5163_);
lean_inc(v___y_5162_);
lean_inc_ref(v___y_5161_);
v___x_5172_ = lean_apply_9(v___f_5157_, v___x_5171_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, lean_box(0));
return v___x_5172_;
}
else
{
lean_object* v___x_5173_; lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5264_; 
v___x_5173_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_5159_, v___y_5167_);
v_a_5174_ = lean_ctor_get(v___x_5173_, 0);
v_isSharedCheck_5264_ = !lean_is_exclusive(v___x_5173_);
if (v_isSharedCheck_5264_ == 0)
{
v___x_5176_ = v___x_5173_;
v_isShared_5177_ = v_isSharedCheck_5264_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v___x_5173_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5264_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
if (lean_obj_tag(v_a_5174_) == 1)
{
lean_object* v_val_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5259_; 
lean_del_object(v___x_5176_);
v_val_5178_ = lean_ctor_get(v_a_5174_, 0);
v_isSharedCheck_5259_ = !lean_is_exclusive(v_a_5174_);
if (v_isSharedCheck_5259_ == 0)
{
v___x_5180_ = v_a_5174_;
v_isShared_5181_ = v_isSharedCheck_5259_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_val_5178_);
lean_dec(v_a_5174_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5259_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v_info_5182_; lean_object* v_kind_5183_; lean_object* v_tags_5184_; lean_object* v___x_5185_; 
v_info_5182_ = lean_ctor_get(v_decl_5160_, 0);
lean_inc_ref(v_info_5182_);
v_kind_5183_ = lean_ctor_get(v_decl_5160_, 1);
lean_inc_ref(v_kind_5183_);
v_tags_5184_ = lean_ctor_get(v_decl_5160_, 2);
lean_inc_ref(v_tags_5184_);
lean_dec_ref(v_decl_5160_);
v___x_5185_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v___x_5156_, v_info_5182_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
if (lean_obj_tag(v___x_5185_) == 0)
{
lean_object* v_a_5186_; uint8_t v___x_5187_; 
v_a_5186_ = lean_ctor_get(v___x_5185_, 0);
lean_inc(v_a_5186_);
lean_dec_ref_known(v___x_5185_, 1);
v___x_5187_ = lean_unbox(v_a_5186_);
lean_dec(v_a_5186_);
if (v___x_5187_ == 0)
{
lean_object* v___x_5188_; lean_object* v___x_5189_; 
lean_dec_ref(v_tags_5184_);
lean_dec_ref(v_kind_5183_);
lean_dec_ref(v_info_5182_);
lean_del_object(v___x_5180_);
lean_dec(v_val_5178_);
v___x_5188_ = lean_box(0);
lean_inc(v___y_5167_);
lean_inc_ref(v___y_5166_);
lean_inc(v___y_5165_);
lean_inc_ref(v___y_5164_);
lean_inc_ref(v___y_5163_);
lean_inc(v___y_5162_);
lean_inc_ref(v___y_5161_);
v___x_5189_ = lean_apply_9(v___f_5157_, v___x_5188_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, lean_box(0));
return v___x_5189_;
}
else
{
lean_object* v___x_5190_; 
lean_dec_ref(v___f_5157_);
lean_inc(v___y_5167_);
lean_inc_ref(v___y_5166_);
lean_inc(v___y_5165_);
lean_inc_ref(v___y_5164_);
v___x_5190_ = lean_apply_5(v_kind_5183_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, lean_box(0));
if (lean_obj_tag(v___x_5190_) == 0)
{
lean_object* v_a_5191_; lean_object* v___x_5192_; 
v_a_5191_ = lean_ctor_get(v___x_5190_, 0);
lean_inc(v_a_5191_);
lean_dec_ref_known(v___x_5190_, 1);
lean_inc(v___y_5167_);
lean_inc_ref(v___y_5166_);
lean_inc(v___y_5165_);
lean_inc_ref(v___y_5164_);
v___x_5192_ = lean_apply_5(v_tags_5184_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, lean_box(0));
if (lean_obj_tag(v___x_5192_) == 0)
{
lean_object* v_a_5193_; uint8_t v___x_5194_; 
v_a_5193_ = lean_ctor_get(v___x_5192_, 0);
lean_inc(v_a_5193_);
lean_dec_ref_known(v___x_5192_, 1);
v___x_5194_ = l_Lean_Name_isAnonymous(v_id_5158_);
if (v___x_5194_ == 0)
{
lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v_a_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5216_; 
lean_del_object(v___x_5180_);
v___x_5195_ = l_Lean_Name_getPrefix(v_val_5178_);
v___x_5196_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v___x_5195_, v_id_5158_, v___x_5194_, v_val_5178_, v___y_5167_);
lean_dec(v___x_5195_);
v_a_5197_ = lean_ctor_get(v___x_5196_, 0);
v_isSharedCheck_5216_ = !lean_is_exclusive(v___x_5196_);
if (v_isSharedCheck_5216_ == 0)
{
v___x_5199_ = v___x_5196_;
v_isShared_5200_ = v_isSharedCheck_5216_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_a_5197_);
lean_dec(v___x_5196_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5216_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
if (lean_obj_tag(v_a_5197_) == 1)
{
lean_object* v_val_5201_; lean_object* v___x_5203_; uint8_t v_isShared_5204_; uint8_t v_isSharedCheck_5211_; 
lean_del_object(v___x_5199_);
v_val_5201_ = lean_ctor_get(v_a_5197_, 0);
v_isSharedCheck_5211_ = !lean_is_exclusive(v_a_5197_);
if (v_isSharedCheck_5211_ == 0)
{
v___x_5203_ = v_a_5197_;
v_isShared_5204_ = v_isSharedCheck_5211_;
goto v_resetjp_5202_;
}
else
{
lean_inc(v_val_5201_);
lean_dec(v_a_5197_);
v___x_5203_ = lean_box(0);
v_isShared_5204_ = v_isSharedCheck_5211_;
goto v_resetjp_5202_;
}
v_resetjp_5202_:
{
lean_object* v___x_5205_; lean_object* v___x_5207_; 
v___x_5205_ = l_Lean_ConstantInfo_name(v_info_5182_);
lean_dec_ref(v_info_5182_);
if (v_isShared_5204_ == 0)
{
lean_ctor_set_tag(v___x_5203_, 0);
lean_ctor_set(v___x_5203_, 0, v___x_5205_);
v___x_5207_ = v___x_5203_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v___x_5205_);
v___x_5207_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
uint8_t v___x_5208_; lean_object* v___x_5209_; 
v___x_5208_ = lean_unbox(v_a_5191_);
lean_dec(v_a_5191_);
v___x_5209_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_5201_, v___x_5207_, v___x_5208_, v_a_5193_, v___y_5161_, v___y_5162_);
return v___x_5209_;
}
}
}
else
{
lean_object* v___x_5212_; lean_object* v___x_5214_; 
lean_dec(v_a_5197_);
lean_dec(v_a_5193_);
lean_dec(v_a_5191_);
lean_dec_ref(v_info_5182_);
v___x_5212_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5200_ == 0)
{
lean_ctor_set(v___x_5199_, 0, v___x_5212_);
v___x_5214_ = v___x_5199_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v___x_5212_);
v___x_5214_ = v_reuseFailAlloc_5215_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
return v___x_5214_;
}
}
}
}
else
{
lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5222_; 
lean_dec(v_val_5178_);
v___x_5217_ = l_Lean_ConstantInfo_name(v_info_5182_);
lean_dec_ref(v_info_5182_);
v___x_5218_ = l_Lean_Name_getString_x21(v___x_5217_);
v___x_5219_ = lean_box(0);
v___x_5220_ = l_Lean_Name_str___override(v___x_5219_, v___x_5218_);
if (v_isShared_5181_ == 0)
{
lean_ctor_set_tag(v___x_5180_, 0);
lean_ctor_set(v___x_5180_, 0, v___x_5217_);
v___x_5222_ = v___x_5180_;
goto v_reusejp_5221_;
}
else
{
lean_object* v_reuseFailAlloc_5234_; 
v_reuseFailAlloc_5234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5234_, 0, v___x_5217_);
v___x_5222_ = v_reuseFailAlloc_5234_;
goto v_reusejp_5221_;
}
v_reusejp_5221_:
{
uint8_t v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5226_; uint8_t v_isShared_5227_; uint8_t v_isSharedCheck_5232_; 
v___x_5223_ = lean_unbox(v_a_5191_);
lean_dec(v_a_5191_);
v___x_5224_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5220_, v___x_5222_, v___x_5223_, v_a_5193_, v___y_5161_, v___y_5162_);
v_isSharedCheck_5232_ = !lean_is_exclusive(v___x_5224_);
if (v_isSharedCheck_5232_ == 0)
{
lean_object* v_unused_5233_; 
v_unused_5233_ = lean_ctor_get(v___x_5224_, 0);
lean_dec(v_unused_5233_);
v___x_5226_ = v___x_5224_;
v_isShared_5227_ = v_isSharedCheck_5232_;
goto v_resetjp_5225_;
}
else
{
lean_dec(v___x_5224_);
v___x_5226_ = lean_box(0);
v_isShared_5227_ = v_isSharedCheck_5232_;
goto v_resetjp_5225_;
}
v_resetjp_5225_:
{
lean_object* v___x_5228_; lean_object* v___x_5230_; 
v___x_5228_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5227_ == 0)
{
lean_ctor_set(v___x_5226_, 0, v___x_5228_);
v___x_5230_ = v___x_5226_;
goto v_reusejp_5229_;
}
else
{
lean_object* v_reuseFailAlloc_5231_; 
v_reuseFailAlloc_5231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5231_, 0, v___x_5228_);
v___x_5230_ = v_reuseFailAlloc_5231_;
goto v_reusejp_5229_;
}
v_reusejp_5229_:
{
return v___x_5230_;
}
}
}
}
}
else
{
lean_object* v_a_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5242_; 
lean_dec(v_a_5191_);
lean_dec_ref(v_info_5182_);
lean_del_object(v___x_5180_);
lean_dec(v_val_5178_);
v_a_5235_ = lean_ctor_get(v___x_5192_, 0);
v_isSharedCheck_5242_ = !lean_is_exclusive(v___x_5192_);
if (v_isSharedCheck_5242_ == 0)
{
v___x_5237_ = v___x_5192_;
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_a_5235_);
lean_dec(v___x_5192_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5240_; 
if (v_isShared_5238_ == 0)
{
v___x_5240_ = v___x_5237_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5241_; 
v_reuseFailAlloc_5241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5241_, 0, v_a_5235_);
v___x_5240_ = v_reuseFailAlloc_5241_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
return v___x_5240_;
}
}
}
}
else
{
lean_object* v_a_5243_; lean_object* v___x_5245_; uint8_t v_isShared_5246_; uint8_t v_isSharedCheck_5250_; 
lean_dec_ref(v_tags_5184_);
lean_dec_ref(v_info_5182_);
lean_del_object(v___x_5180_);
lean_dec(v_val_5178_);
v_a_5243_ = lean_ctor_get(v___x_5190_, 0);
v_isSharedCheck_5250_ = !lean_is_exclusive(v___x_5190_);
if (v_isSharedCheck_5250_ == 0)
{
v___x_5245_ = v___x_5190_;
v_isShared_5246_ = v_isSharedCheck_5250_;
goto v_resetjp_5244_;
}
else
{
lean_inc(v_a_5243_);
lean_dec(v___x_5190_);
v___x_5245_ = lean_box(0);
v_isShared_5246_ = v_isSharedCheck_5250_;
goto v_resetjp_5244_;
}
v_resetjp_5244_:
{
lean_object* v___x_5248_; 
if (v_isShared_5246_ == 0)
{
v___x_5248_ = v___x_5245_;
goto v_reusejp_5247_;
}
else
{
lean_object* v_reuseFailAlloc_5249_; 
v_reuseFailAlloc_5249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5249_, 0, v_a_5243_);
v___x_5248_ = v_reuseFailAlloc_5249_;
goto v_reusejp_5247_;
}
v_reusejp_5247_:
{
return v___x_5248_;
}
}
}
}
}
else
{
lean_object* v_a_5251_; lean_object* v___x_5253_; uint8_t v_isShared_5254_; uint8_t v_isSharedCheck_5258_; 
lean_dec_ref(v_tags_5184_);
lean_dec_ref(v_kind_5183_);
lean_dec_ref(v_info_5182_);
lean_del_object(v___x_5180_);
lean_dec(v_val_5178_);
lean_dec_ref(v___f_5157_);
v_a_5251_ = lean_ctor_get(v___x_5185_, 0);
v_isSharedCheck_5258_ = !lean_is_exclusive(v___x_5185_);
if (v_isSharedCheck_5258_ == 0)
{
v___x_5253_ = v___x_5185_;
v_isShared_5254_ = v_isSharedCheck_5258_;
goto v_resetjp_5252_;
}
else
{
lean_inc(v_a_5251_);
lean_dec(v___x_5185_);
v___x_5253_ = lean_box(0);
v_isShared_5254_ = v_isSharedCheck_5258_;
goto v_resetjp_5252_;
}
v_resetjp_5252_:
{
lean_object* v___x_5256_; 
if (v_isShared_5254_ == 0)
{
v___x_5256_ = v___x_5253_;
goto v_reusejp_5255_;
}
else
{
lean_object* v_reuseFailAlloc_5257_; 
v_reuseFailAlloc_5257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5257_, 0, v_a_5251_);
v___x_5256_ = v_reuseFailAlloc_5257_;
goto v_reusejp_5255_;
}
v_reusejp_5255_:
{
return v___x_5256_;
}
}
}
}
}
else
{
lean_object* v___x_5260_; lean_object* v___x_5262_; 
lean_dec(v_a_5174_);
lean_dec_ref(v_decl_5160_);
lean_dec_ref(v___f_5157_);
lean_dec(v___x_5156_);
v___x_5260_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5177_ == 0)
{
lean_ctor_set(v___x_5176_, 0, v___x_5260_);
v___x_5262_ = v___x_5176_;
goto v_reusejp_5261_;
}
else
{
lean_object* v_reuseFailAlloc_5263_; 
v_reuseFailAlloc_5263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5263_, 0, v___x_5260_);
v___x_5262_ = v_reuseFailAlloc_5263_;
goto v_reusejp_5261_;
}
v_reusejp_5261_:
{
return v___x_5262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object* v___x_5265_, lean_object* v___f_5266_, lean_object* v_id_5267_, lean_object* v_declName_5268_, lean_object* v_decl_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_){
_start:
{
lean_object* v_res_5278_; 
v_res_5278_ = l_Lean_Server_Completion_dotIdCompletion___lam__1(v___x_5265_, v___f_5266_, v_id_5267_, v_declName_5268_, v_decl_5269_, v___y_5270_, v___y_5271_, v___y_5272_, v___y_5273_, v___y_5274_, v___y_5275_, v___y_5276_);
lean_dec(v___y_5276_);
lean_dec_ref(v___y_5275_);
lean_dec(v___y_5274_);
lean_dec_ref(v___y_5273_);
lean_dec_ref(v___y_5272_);
lean_dec(v___y_5271_);
lean_dec_ref(v___y_5270_);
lean_dec(v_id_5267_);
return v_res_5278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object* v_expectedType_x3f_5279_, lean_object* v___f_5280_, lean_object* v_id_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_){
_start:
{
if (lean_obj_tag(v_expectedType_x3f_5279_) == 1)
{
lean_object* v_val_5290_; lean_object* v___x_5291_; 
v_val_5290_ = lean_ctor_get(v_expectedType_x3f_5279_, 0);
lean_inc(v_val_5290_);
lean_dec_ref_known(v_expectedType_x3f_5279_, 1);
v___x_5291_ = l_Lean_Server_Completion_getDotIdCompletionTypeNames(v_val_5290_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_);
if (lean_obj_tag(v___x_5291_) == 0)
{
lean_object* v_a_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; uint8_t v___x_5295_; 
v_a_5292_ = lean_ctor_get(v___x_5291_, 0);
lean_inc(v_a_5292_);
lean_dec_ref_known(v___x_5291_, 1);
v___x_5293_ = lean_array_get_size(v_a_5292_);
v___x_5294_ = lean_unsigned_to_nat(0u);
v___x_5295_ = lean_nat_dec_eq(v___x_5293_, v___x_5294_);
if (v___x_5295_ == 0)
{
lean_object* v___x_5296_; lean_object* v___f_5297_; lean_object* v___x_5298_; 
v___x_5296_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_a_5292_);
lean_dec(v_a_5292_);
v___f_5297_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed), 13, 3);
lean_closure_set(v___f_5297_, 0, v___x_5296_);
lean_closure_set(v___f_5297_, 1, v___f_5280_);
lean_closure_set(v___f_5297_, 2, v_id_5281_);
v___x_5298_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5297_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_);
return v___x_5298_;
}
else
{
lean_object* v___x_5299_; lean_object* v___x_5300_; 
lean_dec(v_a_5292_);
lean_dec(v_id_5281_);
v___x_5299_ = lean_box(0);
lean_inc(v___y_5288_);
lean_inc_ref(v___y_5287_);
lean_inc(v___y_5286_);
lean_inc_ref(v___y_5285_);
lean_inc_ref(v___y_5284_);
lean_inc(v___y_5283_);
lean_inc_ref(v___y_5282_);
v___x_5300_ = lean_apply_9(v___f_5280_, v___x_5299_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_, lean_box(0));
return v___x_5300_;
}
}
else
{
lean_object* v_a_5301_; lean_object* v___x_5303_; uint8_t v_isShared_5304_; uint8_t v_isSharedCheck_5308_; 
lean_dec(v_id_5281_);
lean_dec_ref(v___f_5280_);
v_a_5301_ = lean_ctor_get(v___x_5291_, 0);
v_isSharedCheck_5308_ = !lean_is_exclusive(v___x_5291_);
if (v_isSharedCheck_5308_ == 0)
{
v___x_5303_ = v___x_5291_;
v_isShared_5304_ = v_isSharedCheck_5308_;
goto v_resetjp_5302_;
}
else
{
lean_inc(v_a_5301_);
lean_dec(v___x_5291_);
v___x_5303_ = lean_box(0);
v_isShared_5304_ = v_isSharedCheck_5308_;
goto v_resetjp_5302_;
}
v_resetjp_5302_:
{
lean_object* v___x_5306_; 
if (v_isShared_5304_ == 0)
{
v___x_5306_ = v___x_5303_;
goto v_reusejp_5305_;
}
else
{
lean_object* v_reuseFailAlloc_5307_; 
v_reuseFailAlloc_5307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5307_, 0, v_a_5301_);
v___x_5306_ = v_reuseFailAlloc_5307_;
goto v_reusejp_5305_;
}
v_reusejp_5305_:
{
return v___x_5306_;
}
}
}
}
else
{
lean_object* v___x_5309_; lean_object* v___x_5310_; 
lean_dec(v_id_5281_);
lean_dec_ref(v___f_5280_);
lean_dec(v_expectedType_x3f_5279_);
v___x_5309_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_5310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5310_, 0, v___x_5309_);
return v___x_5310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object* v_expectedType_x3f_5311_, lean_object* v___f_5312_, lean_object* v_id_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_){
_start:
{
lean_object* v_res_5322_; 
v_res_5322_ = l_Lean_Server_Completion_dotIdCompletion___lam__0(v_expectedType_x3f_5311_, v___f_5312_, v_id_5313_, v___y_5314_, v___y_5315_, v___y_5316_, v___y_5317_, v___y_5318_, v___y_5319_, v___y_5320_);
lean_dec(v___y_5320_);
lean_dec_ref(v___y_5319_);
lean_dec(v___y_5318_);
lean_dec_ref(v___y_5317_);
lean_dec_ref(v___y_5316_);
lean_dec(v___y_5315_);
lean_dec_ref(v___y_5314_);
return v_res_5322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object* v_uri_5323_, lean_object* v_pos_5324_, lean_object* v_completionInfoPos_5325_, lean_object* v_ctx_5326_, lean_object* v_lctx_5327_, lean_object* v_id_5328_, lean_object* v_expectedType_x3f_5329_, lean_object* v_a_5330_){
_start:
{
lean_object* v___f_5332_; lean_object* v___y_5333_; lean_object* v___x_5334_; 
v___f_5332_ = ((lean_object*)(l_Lean_Server_Completion_dotCompletion___closed__0));
v___y_5333_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed), 11, 3);
lean_closure_set(v___y_5333_, 0, v_expectedType_x3f_5329_);
lean_closure_set(v___y_5333_, 1, v___f_5332_);
lean_closure_set(v___y_5333_, 2, v_id_5328_);
v___x_5334_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5323_, v_pos_5324_, v_completionInfoPos_5325_, v_ctx_5326_, v_lctx_5327_, v___y_5333_, v_a_5330_);
return v___x_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object* v_uri_5335_, lean_object* v_pos_5336_, lean_object* v_completionInfoPos_5337_, lean_object* v_ctx_5338_, lean_object* v_lctx_5339_, lean_object* v_id_5340_, lean_object* v_expectedType_x3f_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_){
_start:
{
lean_object* v_res_5344_; 
v_res_5344_ = l_Lean_Server_Completion_dotIdCompletion(v_uri_5335_, v_pos_5336_, v_completionInfoPos_5337_, v_ctx_5338_, v_lctx_5339_, v_id_5340_, v_expectedType_x3f_5341_, v_a_5342_);
lean_dec_ref(v_a_5342_);
return v_res_5344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object* v___y_5351_, lean_object* v_as_5352_, size_t v_sz_5353_, size_t v_i_5354_, lean_object* v_b_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_){
_start:
{
lean_object* v_a_5360_; uint8_t v___x_5364_; 
v___x_5364_ = lean_usize_dec_lt(v_i_5354_, v_sz_5353_);
if (v___x_5364_ == 0)
{
lean_object* v___x_5365_; lean_object* v___x_5366_; 
v___x_5365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5365_, 0, v_b_5355_);
v___x_5366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5366_, 0, v___x_5365_);
return v___x_5366_;
}
else
{
lean_object* v___x_5367_; lean_object* v_a_5368_; 
v___x_5367_ = lean_box(0);
v_a_5368_ = lean_array_uget_borrowed(v_as_5352_, v_i_5354_);
if (lean_obj_tag(v_a_5368_) == 1)
{
lean_object* v_str_5369_; uint8_t v___x_5370_; 
v_str_5369_ = lean_ctor_get(v_a_5368_, 1);
v___x_5370_ = l_Lean_String_charactersIn(v___y_5351_, v_str_5369_);
if (v___x_5370_ == 0)
{
v_a_5360_ = v___x_5367_;
goto v___jp_5359_;
}
else
{
lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5371_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1));
v___x_5372_ = lean_box(0);
v___x_5373_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2));
lean_inc_ref(v_str_5369_);
v___x_5374_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5374_, 0, v_str_5369_);
lean_ctor_set(v___x_5374_, 1, v___x_5371_);
lean_ctor_set(v___x_5374_, 2, v___x_5372_);
lean_ctor_set(v___x_5374_, 3, v___x_5373_);
lean_ctor_set(v___x_5374_, 4, v___x_5372_);
lean_ctor_set(v___x_5374_, 5, v___x_5372_);
lean_ctor_set(v___x_5374_, 6, v___x_5372_);
lean_ctor_set(v___x_5374_, 7, v___x_5372_);
v___x_5375_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v___x_5374_, v___x_5372_, v___y_5356_, v___y_5357_);
if (lean_obj_tag(v___x_5375_) == 0)
{
lean_object* v_a_5376_; 
v_a_5376_ = lean_ctor_get(v___x_5375_, 0);
if (lean_obj_tag(v_a_5376_) == 0)
{
return v___x_5375_;
}
else
{
lean_dec_ref_known(v___x_5375_, 1);
v_a_5360_ = v___x_5367_;
goto v___jp_5359_;
}
}
else
{
return v___x_5375_;
}
}
}
else
{
v_a_5360_ = v___x_5367_;
goto v___jp_5359_;
}
}
v___jp_5359_:
{
size_t v___x_5361_; size_t v___x_5362_; 
v___x_5361_ = ((size_t)1ULL);
v___x_5362_ = lean_usize_add(v_i_5354_, v___x_5361_);
v_i_5354_ = v___x_5362_;
v_b_5355_ = v_a_5360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object* v___y_5377_, lean_object* v_as_5378_, lean_object* v_sz_5379_, lean_object* v_i_5380_, lean_object* v_b_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_){
_start:
{
size_t v_sz_boxed_5385_; size_t v_i_boxed_5386_; lean_object* v_res_5387_; 
v_sz_boxed_5385_ = lean_unbox_usize(v_sz_5379_);
lean_dec(v_sz_5379_);
v_i_boxed_5386_ = lean_unbox_usize(v_i_5380_);
lean_dec(v_i_5380_);
v_res_5387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5377_, v_as_5378_, v_sz_boxed_5385_, v_i_boxed_5386_, v_b_5381_, v___y_5382_, v___y_5383_);
lean_dec(v___y_5383_);
lean_dec_ref(v___y_5382_);
lean_dec_ref(v_as_5378_);
lean_dec_ref(v___y_5377_);
return v_res_5387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object* v_structName_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_){
_start:
{
lean_object* v___x_5398_; lean_object* v_env_5399_; uint8_t v___x_5400_; lean_object* v_fieldNames_5401_; lean_object* v___x_5402_; size_t v_sz_5403_; size_t v___x_5404_; lean_object* v___x_5405_; 
v___x_5398_ = lean_st_ref_get(v___y_5396_);
v_env_5399_ = lean_ctor_get(v___x_5398_, 0);
lean_inc_ref(v_env_5399_);
lean_dec(v___x_5398_);
v___x_5400_ = 0;
v_fieldNames_5401_ = l_Lean_getStructureFieldsFlattened(v_env_5399_, v_structName_5388_, v___x_5400_);
v___x_5402_ = lean_box(0);
v_sz_5403_ = lean_array_size(v_fieldNames_5401_);
v___x_5404_ = ((size_t)0ULL);
v___x_5405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5389_, v_fieldNames_5401_, v_sz_5403_, v___x_5404_, v___x_5402_, v___y_5390_, v___y_5391_);
lean_dec_ref(v_fieldNames_5401_);
if (lean_obj_tag(v___x_5405_) == 0)
{
lean_object* v_a_5406_; 
v_a_5406_ = lean_ctor_get(v___x_5405_, 0);
if (lean_obj_tag(v_a_5406_) == 0)
{
return v___x_5405_;
}
else
{
lean_object* v___x_5408_; uint8_t v_isShared_5409_; uint8_t v_isSharedCheck_5414_; 
v_isSharedCheck_5414_ = !lean_is_exclusive(v___x_5405_);
if (v_isSharedCheck_5414_ == 0)
{
lean_object* v_unused_5415_; 
v_unused_5415_ = lean_ctor_get(v___x_5405_, 0);
lean_dec(v_unused_5415_);
v___x_5408_ = v___x_5405_;
v_isShared_5409_ = v_isSharedCheck_5414_;
goto v_resetjp_5407_;
}
else
{
lean_dec(v___x_5405_);
v___x_5408_ = lean_box(0);
v_isShared_5409_ = v_isSharedCheck_5414_;
goto v_resetjp_5407_;
}
v_resetjp_5407_:
{
lean_object* v___x_5410_; lean_object* v___x_5412_; 
v___x_5410_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 0, v___x_5410_);
v___x_5412_ = v___x_5408_;
goto v_reusejp_5411_;
}
else
{
lean_object* v_reuseFailAlloc_5413_; 
v_reuseFailAlloc_5413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5413_, 0, v___x_5410_);
v___x_5412_ = v_reuseFailAlloc_5413_;
goto v_reusejp_5411_;
}
v_reusejp_5411_:
{
return v___x_5412_;
}
}
}
}
else
{
return v___x_5405_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object* v_structName_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_){
_start:
{
lean_object* v_res_5426_; 
v_res_5426_ = l_Lean_Server_Completion_fieldIdCompletion___lam__0(v_structName_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_);
lean_dec(v___y_5424_);
lean_dec_ref(v___y_5423_);
lean_dec(v___y_5422_);
lean_dec_ref(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec_ref(v___y_5417_);
return v_res_5426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object* v_uri_5428_, lean_object* v_pos_5429_, lean_object* v_completionInfoPos_5430_, lean_object* v_ctx_5431_, lean_object* v_lctx_5432_, lean_object* v_id_5433_, lean_object* v_structName_5434_, lean_object* v_a_5435_){
_start:
{
lean_object* v___y_5438_; 
if (lean_obj_tag(v_id_5433_) == 0)
{
lean_object* v___x_5441_; 
v___x_5441_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v___y_5438_ = v___x_5441_;
goto v___jp_5437_;
}
else
{
lean_object* v_val_5442_; uint8_t v___x_5443_; lean_object* v___x_5444_; 
v_val_5442_ = lean_ctor_get(v_id_5433_, 0);
lean_inc(v_val_5442_);
lean_dec_ref_known(v_id_5433_, 1);
v___x_5443_ = 1;
v___x_5444_ = l_Lean_Name_toString(v_val_5442_, v___x_5443_);
v___y_5438_ = v___x_5444_;
goto v___jp_5437_;
}
v___jp_5437_:
{
lean_object* v___f_5439_; lean_object* v___x_5440_; 
v___f_5439_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed), 10, 2);
lean_closure_set(v___f_5439_, 0, v_structName_5434_);
lean_closure_set(v___f_5439_, 1, v___y_5438_);
v___x_5440_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5428_, v_pos_5429_, v_completionInfoPos_5430_, v_ctx_5431_, v_lctx_5432_, v___f_5439_, v_a_5435_);
return v___x_5440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object* v_uri_5445_, lean_object* v_pos_5446_, lean_object* v_completionInfoPos_5447_, lean_object* v_ctx_5448_, lean_object* v_lctx_5449_, lean_object* v_id_5450_, lean_object* v_structName_5451_, lean_object* v_a_5452_, lean_object* v_a_5453_){
_start:
{
lean_object* v_res_5454_; 
v_res_5454_ = l_Lean_Server_Completion_fieldIdCompletion(v_uri_5445_, v_pos_5446_, v_completionInfoPos_5447_, v_ctx_5448_, v_lctx_5449_, v_id_5450_, v_structName_5451_, v_a_5452_);
lean_dec_ref(v_a_5452_);
return v_res_5454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object* v___y_5455_, lean_object* v_as_5456_, size_t v_sz_5457_, size_t v_i_5458_, lean_object* v_b_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v___x_5468_; 
v___x_5468_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5455_, v_as_5456_, v_sz_5457_, v_i_5458_, v_b_5459_, v___y_5460_, v___y_5461_);
return v___x_5468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object* v___y_5469_, lean_object* v_as_5470_, lean_object* v_sz_5471_, lean_object* v_i_5472_, lean_object* v_b_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_){
_start:
{
size_t v_sz_boxed_5482_; size_t v_i_boxed_5483_; lean_object* v_res_5484_; 
v_sz_boxed_5482_ = lean_unbox_usize(v_sz_5471_);
lean_dec(v_sz_5471_);
v_i_boxed_5483_ = lean_unbox_usize(v_i_5472_);
lean_dec(v_i_5472_);
v_res_5484_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(v___y_5469_, v_as_5470_, v_sz_boxed_5482_, v_i_boxed_5483_, v_b_5473_, v___y_5474_, v___y_5475_, v___y_5476_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_);
lean_dec(v___y_5480_);
lean_dec_ref(v___y_5479_);
lean_dec(v___y_5478_);
lean_dec_ref(v___y_5477_);
lean_dec_ref(v___y_5476_);
lean_dec(v___y_5475_);
lean_dec_ref(v___y_5474_);
lean_dec_ref(v_as_5470_);
lean_dec_ref(v___y_5469_);
return v_res_5484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object* v_fst_5485_, lean_object* v_caps_5486_, lean_object* v_mkItem_5487_, lean_object* v_stx_5488_, lean_object* v_ctx_5489_, uint8_t v_snd_5490_, lean_object* v_x_5491_, lean_object* v_____s_5492_){
_start:
{
lean_object* v_fst_5493_; lean_object* v_snd_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5547_; 
v_fst_5493_ = lean_ctor_get(v_x_5491_, 0);
v_snd_5494_ = lean_ctor_get(v_x_5491_, 1);
v_isSharedCheck_5547_ = !lean_is_exclusive(v_x_5491_);
if (v_isSharedCheck_5547_ == 0)
{
v___x_5496_ = v_x_5491_;
v_isShared_5497_ = v_isSharedCheck_5547_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_snd_5494_);
lean_inc(v_fst_5493_);
lean_dec(v_x_5491_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5547_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
lean_object* v___y_5499_; uint8_t v___x_5505_; lean_object* v___x_5506_; uint8_t v___x_5507_; lean_object* v___y_5509_; lean_object* v___y_5510_; 
v___x_5505_ = 1;
lean_inc(v_fst_5493_);
v___x_5506_ = l_Lean_Name_toString(v_fst_5493_, v___x_5505_);
v___x_5507_ = l_Lean_String_charactersIn(v_fst_5485_, v___x_5506_);
lean_dec_ref(v___x_5506_);
if (v___x_5507_ == 0)
{
lean_object* v___x_5529_; 
lean_del_object(v___x_5496_);
lean_dec(v_snd_5494_);
lean_dec(v_fst_5493_);
lean_dec_ref(v_ctx_5489_);
lean_dec_ref(v_mkItem_5487_);
v___x_5529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5529_, 0, v_____s_5492_);
return v___x_5529_;
}
else
{
lean_object* v_textDocument_x3f_5530_; 
v_textDocument_x3f_5530_ = lean_ctor_get(v_caps_5486_, 0);
if (lean_obj_tag(v_textDocument_x3f_5530_) == 0)
{
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5531_; lean_object* v_completion_x3f_5532_; 
v_val_5531_ = lean_ctor_get(v_textDocument_x3f_5530_, 0);
v_completion_x3f_5532_ = lean_ctor_get(v_val_5531_, 0);
if (lean_obj_tag(v_completion_x3f_5532_) == 0)
{
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5533_; 
v_val_5533_ = lean_ctor_get(v_completion_x3f_5532_, 0);
if (lean_obj_tag(v_val_5533_) == 0)
{
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5534_; 
v_val_5534_ = lean_ctor_get(v_val_5533_, 0);
if (lean_obj_tag(v_val_5534_) == 0)
{
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5535_; uint8_t v___x_5536_; 
v_val_5535_ = lean_ctor_get(v_val_5534_, 0);
v___x_5536_ = lean_unbox(v_val_5535_);
if (v___x_5536_ == 0)
{
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
uint8_t v___x_5537_; lean_object* v___x_5538_; 
v___x_5537_ = 0;
v___x_5538_ = l_Lean_Syntax_getRange_x3f(v_stx_5488_, v___x_5537_);
if (lean_obj_tag(v___x_5538_) == 1)
{
lean_object* v_val_5539_; 
v_val_5539_ = lean_ctor_get(v___x_5538_, 0);
lean_inc(v_val_5539_);
lean_dec_ref_known(v___x_5538_, 1);
if (v_snd_5490_ == 0)
{
lean_object* v_start_5540_; lean_object* v_stop_5541_; 
v_start_5540_ = lean_ctor_get(v_val_5539_, 0);
lean_inc(v_start_5540_);
v_stop_5541_ = lean_ctor_get(v_val_5539_, 1);
lean_inc(v_stop_5541_);
lean_dec(v_val_5539_);
v___y_5509_ = v_start_5540_;
v___y_5510_ = v_stop_5541_;
goto v___jp_5508_;
}
else
{
lean_object* v_start_5542_; lean_object* v_stop_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; 
v_start_5542_ = lean_ctor_get(v_val_5539_, 0);
lean_inc(v_start_5542_);
v_stop_5543_ = lean_ctor_get(v_val_5539_, 1);
lean_inc(v_stop_5543_);
lean_dec(v_val_5539_);
v___x_5544_ = lean_unsigned_to_nat(1u);
v___x_5545_ = lean_nat_add(v_stop_5543_, v___x_5544_);
lean_dec(v_stop_5543_);
v___y_5509_ = v_start_5542_;
v___y_5510_ = v___x_5545_;
goto v___jp_5508_;
}
}
else
{
lean_object* v___x_5546_; 
lean_dec(v___x_5538_);
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
v___x_5546_ = lean_box(0);
v___y_5499_ = v___x_5546_;
goto v___jp_5498_;
}
}
}
}
}
}
}
v___jp_5498_:
{
lean_object* v___x_5500_; lean_object* v_items_5501_; lean_object* v___x_5502_; 
v___x_5500_ = lean_apply_3(v_mkItem_5487_, v_fst_5493_, v_snd_5494_, v___y_5499_);
v_items_5501_ = lean_array_push(v_____s_5492_, v___x_5500_);
v___x_5502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5502_, 0, v_items_5501_);
return v___x_5502_;
}
v___jp_5503_:
{
lean_object* v___x_5504_; 
v___x_5504_ = lean_box(0);
v___y_5499_ = v___x_5504_;
goto v___jp_5498_;
}
v___jp_5508_:
{
lean_object* v_toCommandContextInfo_5511_; lean_object* v___x_5513_; uint8_t v_isShared_5514_; uint8_t v_isSharedCheck_5526_; 
v_toCommandContextInfo_5511_ = lean_ctor_get(v_ctx_5489_, 0);
v_isSharedCheck_5526_ = !lean_is_exclusive(v_ctx_5489_);
if (v_isSharedCheck_5526_ == 0)
{
lean_object* v_unused_5527_; lean_object* v_unused_5528_; 
v_unused_5527_ = lean_ctor_get(v_ctx_5489_, 2);
lean_dec(v_unused_5527_);
v_unused_5528_ = lean_ctor_get(v_ctx_5489_, 1);
lean_dec(v_unused_5528_);
v___x_5513_ = v_ctx_5489_;
v_isShared_5514_ = v_isSharedCheck_5526_;
goto v_resetjp_5512_;
}
else
{
lean_inc(v_toCommandContextInfo_5511_);
lean_dec(v_ctx_5489_);
v___x_5513_ = lean_box(0);
v_isShared_5514_ = v_isSharedCheck_5526_;
goto v_resetjp_5512_;
}
v_resetjp_5512_:
{
lean_object* v_fileMap_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v_range_5519_; 
v_fileMap_5515_ = lean_ctor_get(v_toCommandContextInfo_5511_, 2);
lean_inc_ref_n(v_fileMap_5515_, 2);
lean_dec_ref(v_toCommandContextInfo_5511_);
v___x_5516_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5515_, v___y_5509_);
lean_dec(v___y_5509_);
v___x_5517_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5515_, v___y_5510_);
lean_dec(v___y_5510_);
if (v_isShared_5497_ == 0)
{
lean_ctor_set(v___x_5496_, 1, v___x_5517_);
lean_ctor_set(v___x_5496_, 0, v___x_5516_);
v_range_5519_ = v___x_5496_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v___x_5516_);
lean_ctor_set(v_reuseFailAlloc_5525_, 1, v___x_5517_);
v_range_5519_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5518_;
}
v_reusejp_5518_:
{
lean_object* v___x_5520_; lean_object* v___x_5522_; 
lean_inc(v_fst_5493_);
v___x_5520_ = l_Lean_Name_toString(v_fst_5493_, v___x_5507_);
lean_inc_ref(v_range_5519_);
if (v_isShared_5514_ == 0)
{
lean_ctor_set(v___x_5513_, 2, v_range_5519_);
lean_ctor_set(v___x_5513_, 1, v_range_5519_);
lean_ctor_set(v___x_5513_, 0, v___x_5520_);
v___x_5522_ = v___x_5513_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v___x_5520_);
lean_ctor_set(v_reuseFailAlloc_5524_, 1, v_range_5519_);
lean_ctor_set(v_reuseFailAlloc_5524_, 2, v_range_5519_);
v___x_5522_ = v_reuseFailAlloc_5524_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
lean_object* v___x_5523_; 
v___x_5523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5523_, 0, v___x_5522_);
v___y_5499_ = v___x_5523_;
goto v___jp_5498_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object* v_fst_5548_, lean_object* v_caps_5549_, lean_object* v_mkItem_5550_, lean_object* v_stx_5551_, lean_object* v_ctx_5552_, lean_object* v_snd_5553_, lean_object* v_x_5554_, lean_object* v_____s_5555_){
_start:
{
uint8_t v_snd_1154__boxed_5556_; lean_object* v_res_5557_; 
v_snd_1154__boxed_5556_ = lean_unbox(v_snd_5553_);
v_res_5557_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(v_fst_5548_, v_caps_5549_, v_mkItem_5550_, v_stx_5551_, v_ctx_5552_, v_snd_1154__boxed_5556_, v_x_5554_, v_____s_5555_);
lean_dec(v_stx_5551_);
lean_dec_ref(v_caps_5549_);
lean_dec_ref(v_fst_5548_);
return v_res_5557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object* v_inst_5559_, lean_object* v_entries_5560_, lean_object* v_stx_5561_, lean_object* v_caps_5562_, lean_object* v_ctx_5563_, lean_object* v_mkItem_5564_){
_start:
{
lean_object* v_fst_5566_; uint8_t v_snd_5567_; uint8_t v___x_5572_; lean_object* v___x_5573_; 
v___x_5572_ = 0;
v___x_5573_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5561_, v___x_5572_, v___x_5572_);
if (lean_obj_tag(v___x_5573_) == 0)
{
lean_object* v___x_5574_; 
v___x_5574_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_5566_ = v___x_5574_;
v_snd_5567_ = v___x_5572_;
goto v___jp_5565_;
}
else
{
lean_object* v_val_5575_; lean_object* v_str_5576_; lean_object* v_startPos_5577_; lean_object* v_stopPos_5578_; uint8_t v___x_5581_; 
v_val_5575_ = lean_ctor_get(v___x_5573_, 0);
lean_inc(v_val_5575_);
lean_dec_ref_known(v___x_5573_, 1);
v_str_5576_ = lean_ctor_get(v_val_5575_, 0);
lean_inc_ref(v_str_5576_);
v_startPos_5577_ = lean_ctor_get(v_val_5575_, 1);
lean_inc(v_startPos_5577_);
v_stopPos_5578_ = lean_ctor_get(v_val_5575_, 2);
lean_inc(v_stopPos_5578_);
lean_dec(v_val_5575_);
v___x_5581_ = lean_string_utf8_at_end(v_str_5576_, v_stopPos_5578_);
if (v___x_5581_ == 0)
{
uint32_t v___x_5582_; uint32_t v___x_5583_; uint8_t v___x_5584_; 
v___x_5582_ = lean_string_utf8_get(v_str_5576_, v_stopPos_5578_);
v___x_5583_ = 46;
v___x_5584_ = lean_uint32_dec_eq(v___x_5582_, v___x_5583_);
if (v___x_5584_ == 0)
{
goto v___jp_5579_;
}
else
{
lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; 
v___x_5585_ = lean_string_utf8_extract(v_str_5576_, v_startPos_5577_, v_stopPos_5578_);
lean_dec(v_stopPos_5578_);
lean_dec(v_startPos_5577_);
lean_dec_ref(v_str_5576_);
v___x_5586_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_5587_ = lean_string_append(v___x_5585_, v___x_5586_);
v_fst_5566_ = v___x_5587_;
v_snd_5567_ = v___x_5584_;
goto v___jp_5565_;
}
}
else
{
goto v___jp_5579_;
}
v___jp_5579_:
{
lean_object* v___x_5580_; 
v___x_5580_ = lean_string_utf8_extract(v_str_5576_, v_startPos_5577_, v_stopPos_5578_);
lean_dec(v_stopPos_5578_);
lean_dec(v_startPos_5577_);
lean_dec_ref(v_str_5576_);
v_fst_5566_ = v___x_5580_;
v_snd_5567_ = v___x_5572_;
goto v___jp_5565_;
}
}
v___jp_5565_:
{
lean_object* v___x_5568_; lean_object* v___f_5569_; lean_object* v_items_5570_; lean_object* v___x_5571_; 
v___x_5568_ = lean_box(v_snd_5567_);
v___f_5569_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_5569_, 0, v_fst_5566_);
lean_closure_set(v___f_5569_, 1, v_caps_5562_);
lean_closure_set(v___f_5569_, 2, v_mkItem_5564_);
lean_closure_set(v___f_5569_, 3, v_stx_5561_);
lean_closure_set(v___f_5569_, 4, v_ctx_5563_);
lean_closure_set(v___f_5569_, 5, v___x_5568_);
v_items_5570_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v___x_5571_ = lean_apply_4(v_inst_5559_, lean_box(0), v_entries_5560_, v_items_5570_, v___f_5569_);
return v___x_5571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object* v_Coll_5588_, lean_object* v_00_u03b1_5589_, lean_object* v_inst_5590_, lean_object* v_entries_5591_, lean_object* v_stx_5592_, lean_object* v_caps_5593_, lean_object* v_ctx_5594_, lean_object* v_mkItem_5595_){
_start:
{
lean_object* v___x_5596_; 
v___x_5596_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(v_inst_5590_, v_entries_5591_, v_stx_5592_, v_caps_5593_, v_ctx_5594_, v_mkItem_5595_);
return v___x_5596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object* v___x_5602_, lean_object* v_completionInfoPos_5603_, lean_object* v_uri_5604_, lean_object* v_pos_5605_, lean_object* v_name_5606_, lean_object* v_decl_5607_, lean_object* v_textEdit_x3f_5608_){
_start:
{
lean_object* v_map_5609_; uint8_t v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___y_5614_; lean_object* v___x_5628_; 
v_map_5609_ = lean_ctor_get(v___x_5602_, 0);
v___x_5610_ = 1;
lean_inc(v_name_5606_);
v___x_5611_ = l_Lean_Name_toString(v_name_5606_, v___x_5610_);
v___x_5612_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__0));
v___x_5628_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5609_, v_name_5606_);
lean_dec(v_name_5606_);
if (lean_obj_tag(v___x_5628_) == 0)
{
lean_object* v_defValue_5629_; 
v_defValue_5629_ = lean_ctor_get(v_decl_5607_, 2);
lean_inc_ref(v_defValue_5629_);
v___y_5614_ = v_defValue_5629_;
goto v___jp_5613_;
}
else
{
lean_object* v_val_5630_; 
v_val_5630_ = lean_ctor_get(v___x_5628_, 0);
lean_inc(v_val_5630_);
lean_dec_ref_known(v___x_5628_, 1);
v___y_5614_ = v_val_5630_;
goto v___jp_5613_;
}
v___jp_5613_:
{
lean_object* v_descr_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; 
v_descr_5615_ = lean_ctor_get(v_decl_5607_, 3);
lean_inc_ref(v_descr_5615_);
lean_dec_ref(v_decl_5607_);
v___x_5616_ = l_Lean_DataValue_str(v___y_5614_);
v___x_5617_ = lean_string_append(v___x_5612_, v___x_5616_);
lean_dec_ref(v___x_5616_);
v___x_5618_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__1));
v___x_5619_ = lean_string_append(v___x_5617_, v___x_5618_);
v___x_5620_ = lean_string_append(v___x_5619_, v_descr_5615_);
lean_dec_ref(v_descr_5615_);
v___x_5621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5621_, 0, v___x_5620_);
v___x_5622_ = lean_box(0);
v___x_5623_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__2));
v___x_5624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5624_, 0, v_completionInfoPos_5603_);
v___x_5625_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5625_, 0, v_uri_5604_);
lean_ctor_set(v___x_5625_, 1, v_pos_5605_);
lean_ctor_set(v___x_5625_, 2, v___x_5624_);
lean_ctor_set(v___x_5625_, 3, v___x_5622_);
v___x_5626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5626_, 0, v___x_5625_);
v___x_5627_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5627_, 0, v___x_5611_);
lean_ctor_set(v___x_5627_, 1, v___x_5621_);
lean_ctor_set(v___x_5627_, 2, v___x_5622_);
lean_ctor_set(v___x_5627_, 3, v___x_5623_);
lean_ctor_set(v___x_5627_, 4, v_textEdit_x3f_5608_);
lean_ctor_set(v___x_5627_, 5, v___x_5622_);
lean_ctor_set(v___x_5627_, 6, v___x_5626_);
lean_ctor_set(v___x_5627_, 7, v___x_5622_);
return v___x_5627_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object* v___x_5631_, lean_object* v_completionInfoPos_5632_, lean_object* v_uri_5633_, lean_object* v_pos_5634_, lean_object* v_name_5635_, lean_object* v_decl_5636_, lean_object* v_textEdit_x3f_5637_){
_start:
{
lean_object* v_res_5638_; 
v_res_5638_ = l_Lean_Server_Completion_optionCompletion___lam__0(v___x_5631_, v_completionInfoPos_5632_, v_uri_5633_, v_pos_5634_, v_name_5635_, v_decl_5636_, v_textEdit_x3f_5637_);
lean_dec_ref(v___x_5631_);
return v_res_5638_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object* v_mkItem_5639_, lean_object* v_fst_5640_, lean_object* v_stx_5641_, lean_object* v_ctx_5642_, uint8_t v_snd_5643_, lean_object* v_caps_5644_, lean_object* v_init_5645_, lean_object* v_x_5646_){
_start:
{
if (lean_obj_tag(v_x_5646_) == 0)
{
lean_object* v_k_5647_; lean_object* v_v_5648_; lean_object* v_l_5649_; lean_object* v_r_5650_; lean_object* v___x_5651_; lean_object* v_a_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5697_; 
v_k_5647_ = lean_ctor_get(v_x_5646_, 1);
lean_inc(v_k_5647_);
v_v_5648_ = lean_ctor_get(v_x_5646_, 2);
lean_inc(v_v_5648_);
v_l_5649_ = lean_ctor_get(v_x_5646_, 3);
lean_inc(v_l_5649_);
v_r_5650_ = lean_ctor_get(v_x_5646_, 4);
lean_inc(v_r_5650_);
lean_dec_ref_known(v_x_5646_, 5);
lean_inc_ref(v_ctx_5642_);
lean_inc_ref(v_mkItem_5639_);
v___x_5651_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5639_, v_fst_5640_, v_stx_5641_, v_ctx_5642_, v_snd_5643_, v_caps_5644_, v_init_5645_, v_l_5649_);
v_a_5652_ = lean_ctor_get(v___x_5651_, 0);
v_isSharedCheck_5697_ = !lean_is_exclusive(v___x_5651_);
if (v_isSharedCheck_5697_ == 0)
{
v___x_5654_ = v___x_5651_;
v_isShared_5655_ = v_isSharedCheck_5697_;
goto v_resetjp_5653_;
}
else
{
lean_inc(v_a_5652_);
lean_dec(v___x_5651_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5697_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v___y_5657_; uint8_t v___x_5663_; lean_object* v___x_5664_; uint8_t v___x_5665_; lean_object* v___y_5667_; lean_object* v___y_5668_; 
v___x_5663_ = 1;
lean_inc(v_k_5647_);
v___x_5664_ = l_Lean_Name_toString(v_k_5647_, v___x_5663_);
v___x_5665_ = l_Lean_String_charactersIn(v_fst_5640_, v___x_5664_);
lean_dec_ref(v___x_5664_);
if (v___x_5665_ == 0)
{
lean_del_object(v___x_5654_);
lean_dec(v_v_5648_);
lean_dec(v_k_5647_);
v_init_5645_ = v_a_5652_;
v_x_5646_ = v_r_5650_;
goto _start;
}
else
{
lean_object* v_textDocument_x3f_5680_; 
v_textDocument_x3f_5680_ = lean_ctor_get(v_caps_5644_, 0);
if (lean_obj_tag(v_textDocument_x3f_5680_) == 0)
{
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5681_; lean_object* v_completion_x3f_5682_; 
v_val_5681_ = lean_ctor_get(v_textDocument_x3f_5680_, 0);
v_completion_x3f_5682_ = lean_ctor_get(v_val_5681_, 0);
if (lean_obj_tag(v_completion_x3f_5682_) == 0)
{
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5683_; 
v_val_5683_ = lean_ctor_get(v_completion_x3f_5682_, 0);
if (lean_obj_tag(v_val_5683_) == 0)
{
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5684_; 
v_val_5684_ = lean_ctor_get(v_val_5683_, 0);
if (lean_obj_tag(v_val_5684_) == 0)
{
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5685_; uint8_t v___x_5686_; 
v_val_5685_ = lean_ctor_get(v_val_5684_, 0);
v___x_5686_ = lean_unbox(v_val_5685_);
if (v___x_5686_ == 0)
{
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
uint8_t v___x_5687_; lean_object* v___x_5688_; 
v___x_5687_ = 0;
v___x_5688_ = l_Lean_Syntax_getRange_x3f(v_stx_5641_, v___x_5687_);
if (lean_obj_tag(v___x_5688_) == 1)
{
lean_object* v_val_5689_; 
v_val_5689_ = lean_ctor_get(v___x_5688_, 0);
lean_inc(v_val_5689_);
lean_dec_ref_known(v___x_5688_, 1);
if (v_snd_5643_ == 0)
{
lean_object* v_start_5690_; lean_object* v_stop_5691_; 
v_start_5690_ = lean_ctor_get(v_val_5689_, 0);
lean_inc(v_start_5690_);
v_stop_5691_ = lean_ctor_get(v_val_5689_, 1);
lean_inc(v_stop_5691_);
lean_dec(v_val_5689_);
v___y_5667_ = v_start_5690_;
v___y_5668_ = v_stop_5691_;
goto v___jp_5666_;
}
else
{
lean_object* v_start_5692_; lean_object* v_stop_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; 
v_start_5692_ = lean_ctor_get(v_val_5689_, 0);
lean_inc(v_start_5692_);
v_stop_5693_ = lean_ctor_get(v_val_5689_, 1);
lean_inc(v_stop_5693_);
lean_dec(v_val_5689_);
v___x_5694_ = lean_unsigned_to_nat(1u);
v___x_5695_ = lean_nat_add(v_stop_5693_, v___x_5694_);
lean_dec(v_stop_5693_);
v___y_5667_ = v_start_5692_;
v___y_5668_ = v___x_5695_;
goto v___jp_5666_;
}
}
else
{
lean_object* v___x_5696_; 
lean_dec(v___x_5688_);
lean_del_object(v___x_5654_);
v___x_5696_ = lean_box(0);
v___y_5657_ = v___x_5696_;
goto v___jp_5656_;
}
}
}
}
}
}
}
v___jp_5656_:
{
lean_object* v___x_5658_; lean_object* v_items_5659_; 
lean_inc_ref(v_mkItem_5639_);
v___x_5658_ = lean_apply_3(v_mkItem_5639_, v_k_5647_, v_v_5648_, v___y_5657_);
v_items_5659_ = lean_array_push(v_a_5652_, v___x_5658_);
v_init_5645_ = v_items_5659_;
v_x_5646_ = v_r_5650_;
goto _start;
}
v___jp_5661_:
{
lean_object* v___x_5662_; 
v___x_5662_ = lean_box(0);
v___y_5657_ = v___x_5662_;
goto v___jp_5656_;
}
v___jp_5666_:
{
lean_object* v_toCommandContextInfo_5669_; lean_object* v_fileMap_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v_range_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5677_; 
v_toCommandContextInfo_5669_ = lean_ctor_get(v_ctx_5642_, 0);
v_fileMap_5670_ = lean_ctor_get(v_toCommandContextInfo_5669_, 2);
lean_inc_ref_n(v_fileMap_5670_, 2);
v___x_5671_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5670_, v___y_5667_);
lean_dec(v___y_5667_);
v___x_5672_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5670_, v___y_5668_);
lean_dec(v___y_5668_);
v_range_5673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_range_5673_, 0, v___x_5671_);
lean_ctor_set(v_range_5673_, 1, v___x_5672_);
lean_inc(v_k_5647_);
v___x_5674_ = l_Lean_Name_toString(v_k_5647_, v___x_5665_);
lean_inc_ref(v_range_5673_);
v___x_5675_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5675_, 0, v___x_5674_);
lean_ctor_set(v___x_5675_, 1, v_range_5673_);
lean_ctor_set(v___x_5675_, 2, v_range_5673_);
if (v_isShared_5655_ == 0)
{
lean_ctor_set(v___x_5654_, 0, v___x_5675_);
v___x_5677_ = v___x_5654_;
goto v_reusejp_5676_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v___x_5675_);
v___x_5677_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
v___y_5657_ = v___x_5677_;
goto v___jp_5656_;
}
}
}
}
else
{
lean_object* v___x_5698_; 
lean_dec_ref(v_ctx_5642_);
lean_dec_ref(v_mkItem_5639_);
v___x_5698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5698_, 0, v_init_5645_);
return v___x_5698_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object* v_mkItem_5699_, lean_object* v_fst_5700_, lean_object* v_stx_5701_, lean_object* v_ctx_5702_, lean_object* v_snd_5703_, lean_object* v_caps_5704_, lean_object* v_init_5705_, lean_object* v_x_5706_){
_start:
{
uint8_t v_snd_1525__boxed_5707_; lean_object* v_res_5708_; 
v_snd_1525__boxed_5707_ = lean_unbox(v_snd_5703_);
v_res_5708_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5699_, v_fst_5700_, v_stx_5701_, v_ctx_5702_, v_snd_1525__boxed_5707_, v_caps_5704_, v_init_5705_, v_x_5706_);
lean_dec_ref(v_caps_5704_);
lean_dec(v_stx_5701_);
lean_dec_ref(v_fst_5700_);
return v_res_5708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object* v_entries_5709_, lean_object* v_stx_5710_, lean_object* v_caps_5711_, lean_object* v_ctx_5712_, lean_object* v_mkItem_5713_){
_start:
{
lean_object* v_fst_5715_; uint8_t v_snd_5716_; uint8_t v___x_5720_; lean_object* v___x_5721_; 
v___x_5720_ = 0;
v___x_5721_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5710_, v___x_5720_, v___x_5720_);
if (lean_obj_tag(v___x_5721_) == 0)
{
lean_object* v___x_5722_; 
v___x_5722_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_5715_ = v___x_5722_;
v_snd_5716_ = v___x_5720_;
goto v___jp_5714_;
}
else
{
lean_object* v_val_5723_; lean_object* v_str_5724_; lean_object* v_startPos_5725_; lean_object* v_stopPos_5726_; uint8_t v___x_5729_; 
v_val_5723_ = lean_ctor_get(v___x_5721_, 0);
lean_inc(v_val_5723_);
lean_dec_ref_known(v___x_5721_, 1);
v_str_5724_ = lean_ctor_get(v_val_5723_, 0);
lean_inc_ref(v_str_5724_);
v_startPos_5725_ = lean_ctor_get(v_val_5723_, 1);
lean_inc(v_startPos_5725_);
v_stopPos_5726_ = lean_ctor_get(v_val_5723_, 2);
lean_inc(v_stopPos_5726_);
lean_dec(v_val_5723_);
v___x_5729_ = lean_string_utf8_at_end(v_str_5724_, v_stopPos_5726_);
if (v___x_5729_ == 0)
{
uint32_t v___x_5730_; uint32_t v___x_5731_; uint8_t v___x_5732_; 
v___x_5730_ = lean_string_utf8_get(v_str_5724_, v_stopPos_5726_);
v___x_5731_ = 46;
v___x_5732_ = lean_uint32_dec_eq(v___x_5730_, v___x_5731_);
if (v___x_5732_ == 0)
{
goto v___jp_5727_;
}
else
{
lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; 
v___x_5733_ = lean_string_utf8_extract(v_str_5724_, v_startPos_5725_, v_stopPos_5726_);
lean_dec(v_stopPos_5726_);
lean_dec(v_startPos_5725_);
lean_dec_ref(v_str_5724_);
v___x_5734_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_5735_ = lean_string_append(v___x_5733_, v___x_5734_);
v_fst_5715_ = v___x_5735_;
v_snd_5716_ = v___x_5732_;
goto v___jp_5714_;
}
}
else
{
goto v___jp_5727_;
}
v___jp_5727_:
{
lean_object* v___x_5728_; 
v___x_5728_ = lean_string_utf8_extract(v_str_5724_, v_startPos_5725_, v_stopPos_5726_);
lean_dec(v_stopPos_5726_);
lean_dec(v_startPos_5725_);
lean_dec_ref(v_str_5724_);
v_fst_5715_ = v___x_5728_;
v_snd_5716_ = v___x_5720_;
goto v___jp_5714_;
}
}
v___jp_5714_:
{
lean_object* v_items_5717_; lean_object* v___x_5718_; lean_object* v_a_5719_; 
v_items_5717_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v___x_5718_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5713_, v_fst_5715_, v_stx_5710_, v_ctx_5712_, v_snd_5716_, v_caps_5711_, v_items_5717_, v_entries_5709_);
lean_dec_ref(v_fst_5715_);
v_a_5719_ = lean_ctor_get(v___x_5718_, 0);
lean_inc(v_a_5719_);
lean_dec_ref(v___x_5718_);
return v_a_5719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object* v_entries_5736_, lean_object* v_stx_5737_, lean_object* v_caps_5738_, lean_object* v_ctx_5739_, lean_object* v_mkItem_5740_){
_start:
{
lean_object* v_res_5741_; 
v_res_5741_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_entries_5736_, v_stx_5737_, v_caps_5738_, v_ctx_5739_, v_mkItem_5740_);
lean_dec_ref(v_caps_5738_);
lean_dec(v_stx_5737_);
return v_res_5741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object* v_completionInfoPos_5742_, lean_object* v_uri_5743_, lean_object* v_pos_5744_, lean_object* v_stx_5745_, lean_object* v_caps_5746_, lean_object* v_ctx_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v_ref_5753_; lean_object* v___x_5754_; 
v_ref_5753_ = lean_ctor_get(v___y_5750_, 2);
v___x_5754_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_5754_) == 0)
{
lean_object* v_a_5755_; lean_object* v___x_5757_; uint8_t v_isShared_5758_; uint8_t v_isSharedCheck_5767_; 
v_a_5755_ = lean_ctor_get(v___x_5754_, 0);
v_isSharedCheck_5767_ = !lean_is_exclusive(v___x_5754_);
if (v_isSharedCheck_5767_ == 0)
{
v___x_5757_ = v___x_5754_;
v_isShared_5758_ = v_isSharedCheck_5767_;
goto v_resetjp_5756_;
}
else
{
lean_inc(v_a_5755_);
lean_dec(v___x_5754_);
v___x_5757_ = lean_box(0);
v_isShared_5758_ = v_isSharedCheck_5767_;
goto v_resetjp_5756_;
}
v_resetjp_5756_:
{
lean_object* v___x_5759_; lean_object* v___f_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5765_; 
v___x_5759_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5750_);
v___f_5760_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5760_, 0, v___x_5759_);
lean_closure_set(v___f_5760_, 1, v_completionInfoPos_5742_);
lean_closure_set(v___f_5760_, 2, v_uri_5743_);
lean_closure_set(v___f_5760_, 3, v_pos_5744_);
v___x_5761_ = lean_unsigned_to_nat(1u);
v___x_5762_ = l_Lean_Syntax_getArg(v_stx_5745_, v___x_5761_);
v___x_5763_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_a_5755_, v___x_5762_, v_caps_5746_, v_ctx_5747_, v___f_5760_);
lean_dec(v___x_5762_);
if (v_isShared_5758_ == 0)
{
lean_ctor_set(v___x_5757_, 0, v___x_5763_);
v___x_5765_ = v___x_5757_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v___x_5763_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
return v___x_5765_;
}
}
}
else
{
lean_object* v_a_5768_; lean_object* v___x_5770_; uint8_t v_isShared_5771_; uint8_t v_isSharedCheck_5779_; 
lean_dec_ref(v_ctx_5747_);
lean_dec_ref(v_pos_5744_);
lean_dec_ref(v_uri_5743_);
lean_dec(v_completionInfoPos_5742_);
v_a_5768_ = lean_ctor_get(v___x_5754_, 0);
v_isSharedCheck_5779_ = !lean_is_exclusive(v___x_5754_);
if (v_isSharedCheck_5779_ == 0)
{
v___x_5770_ = v___x_5754_;
v_isShared_5771_ = v_isSharedCheck_5779_;
goto v_resetjp_5769_;
}
else
{
lean_inc(v_a_5768_);
lean_dec(v___x_5754_);
v___x_5770_ = lean_box(0);
v_isShared_5771_ = v_isSharedCheck_5779_;
goto v_resetjp_5769_;
}
v_resetjp_5769_:
{
lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5777_; 
v___x_5772_ = lean_io_error_to_string(v_a_5768_);
v___x_5773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5773_, 0, v___x_5772_);
v___x_5774_ = l_Lean_MessageData_ofFormat(v___x_5773_);
lean_inc(v_ref_5753_);
v___x_5775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5775_, 0, v_ref_5753_);
lean_ctor_set(v___x_5775_, 1, v___x_5774_);
if (v_isShared_5771_ == 0)
{
lean_ctor_set(v___x_5770_, 0, v___x_5775_);
v___x_5777_ = v___x_5770_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5778_; 
v_reuseFailAlloc_5778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5778_, 0, v___x_5775_);
v___x_5777_ = v_reuseFailAlloc_5778_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
return v___x_5777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object* v_completionInfoPos_5780_, lean_object* v_uri_5781_, lean_object* v_pos_5782_, lean_object* v_stx_5783_, lean_object* v_caps_5784_, lean_object* v_ctx_5785_, lean_object* v___y_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_){
_start:
{
lean_object* v_res_5791_; 
v_res_5791_ = l_Lean_Server_Completion_optionCompletion___lam__1(v_completionInfoPos_5780_, v_uri_5781_, v_pos_5782_, v_stx_5783_, v_caps_5784_, v_ctx_5785_, v___y_5786_, v___y_5787_, v___y_5788_, v___y_5789_);
lean_dec(v___y_5789_);
lean_dec_ref(v___y_5788_);
lean_dec(v___y_5787_);
lean_dec_ref(v___y_5786_);
lean_dec_ref(v_caps_5784_);
lean_dec(v_stx_5783_);
return v_res_5791_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__0(void){
_start:
{
lean_object* v___x_5792_; 
v___x_5792_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_5792_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__1(void){
_start:
{
lean_object* v___x_5793_; lean_object* v___x_5794_; 
v___x_5793_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__0, &l_Lean_Server_Completion_optionCompletion___closed__0_once, _init_l_Lean_Server_Completion_optionCompletion___closed__0);
v___x_5794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5794_, 0, v___x_5793_);
return v___x_5794_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__2(void){
_start:
{
lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; 
v___x_5795_ = lean_unsigned_to_nat(32u);
v___x_5796_ = lean_mk_empty_array_with_capacity(v___x_5795_);
v___x_5797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5797_, 0, v___x_5796_);
return v___x_5797_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__3(void){
_start:
{
size_t v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; 
v___x_5798_ = ((size_t)5ULL);
v___x_5799_ = lean_unsigned_to_nat(0u);
v___x_5800_ = lean_unsigned_to_nat(32u);
v___x_5801_ = lean_mk_empty_array_with_capacity(v___x_5800_);
v___x_5802_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__2, &l_Lean_Server_Completion_optionCompletion___closed__2_once, _init_l_Lean_Server_Completion_optionCompletion___closed__2);
v___x_5803_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5803_, 0, v___x_5802_);
lean_ctor_set(v___x_5803_, 1, v___x_5801_);
lean_ctor_set(v___x_5803_, 2, v___x_5799_);
lean_ctor_set(v___x_5803_, 3, v___x_5799_);
lean_ctor_set_usize(v___x_5803_, 4, v___x_5798_);
return v___x_5803_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__4(void){
_start:
{
lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; 
v___x_5804_ = lean_box(1);
v___x_5805_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__3, &l_Lean_Server_Completion_optionCompletion___closed__3_once, _init_l_Lean_Server_Completion_optionCompletion___closed__3);
v___x_5806_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__1, &l_Lean_Server_Completion_optionCompletion___closed__1_once, _init_l_Lean_Server_Completion_optionCompletion___closed__1);
v___x_5807_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5807_, 0, v___x_5806_);
lean_ctor_set(v___x_5807_, 1, v___x_5805_);
lean_ctor_set(v___x_5807_, 2, v___x_5804_);
return v___x_5807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object* v_uri_5808_, lean_object* v_pos_5809_, lean_object* v_completionInfoPos_5810_, lean_object* v_ctx_5811_, lean_object* v_stx_5812_, lean_object* v_caps_5813_){
_start:
{
lean_object* v___f_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; 
lean_inc_ref(v_ctx_5811_);
v___f_5815_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__1___boxed), 11, 6);
lean_closure_set(v___f_5815_, 0, v_completionInfoPos_5810_);
lean_closure_set(v___f_5815_, 1, v_uri_5808_);
lean_closure_set(v___f_5815_, 2, v_pos_5809_);
lean_closure_set(v___f_5815_, 3, v_stx_5812_);
lean_closure_set(v___f_5815_, 4, v_caps_5813_);
lean_closure_set(v___f_5815_, 5, v_ctx_5811_);
v___x_5816_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_5817_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_5811_, v___x_5816_, v___f_5815_);
return v___x_5817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object* v_uri_5818_, lean_object* v_pos_5819_, lean_object* v_completionInfoPos_5820_, lean_object* v_ctx_5821_, lean_object* v_stx_5822_, lean_object* v_caps_5823_, lean_object* v_a_5824_){
_start:
{
lean_object* v_res_5825_; 
v_res_5825_ = l_Lean_Server_Completion_optionCompletion(v_uri_5818_, v_pos_5819_, v_completionInfoPos_5820_, v_ctx_5821_, v_stx_5822_, v_caps_5823_);
return v_res_5825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object* v_completionInfoPos_5835_, lean_object* v_uri_5836_, lean_object* v_pos_5837_, lean_object* v_name_5838_, lean_object* v_explan_5839_, lean_object* v_textEdit_x3f_5840_){
_start:
{
lean_object* v_metadata_5841_; lean_object* v_removedVersion_x3f_5842_; uint8_t v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; uint8_t v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; 
v_metadata_5841_ = lean_ctor_get(v_explan_5839_, 1);
v_removedVersion_x3f_5842_ = lean_ctor_get(v_metadata_5841_, 2);
v___x_5843_ = 1;
v___x_5844_ = l_Lean_Name_toString(v_name_5838_, v___x_5843_);
v___x_5845_ = ((lean_object*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1));
v___x_5846_ = 1;
v___x_5847_ = l_Lean_ErrorExplanation_summaryWithSeverity(v_explan_5839_);
v___x_5848_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5848_, 0, v___x_5847_);
lean_ctor_set_uint8(v___x_5848_, sizeof(void*)*1, v___x_5846_);
v___x_5849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5849_, 0, v___x_5848_);
v___x_5850_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__2));
v___x_5851_ = lean_box(0);
v___x_5852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5852_, 0, v_completionInfoPos_5835_);
v___x_5853_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5853_, 0, v_uri_5836_);
lean_ctor_set(v___x_5853_, 1, v_pos_5837_);
lean_ctor_set(v___x_5853_, 2, v___x_5852_);
lean_ctor_set(v___x_5853_, 3, v___x_5851_);
v___x_5854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5854_, 0, v___x_5853_);
if (lean_obj_tag(v_removedVersion_x3f_5842_) == 0)
{
lean_object* v___x_5855_; 
v___x_5855_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5855_, 0, v___x_5844_);
lean_ctor_set(v___x_5855_, 1, v___x_5845_);
lean_ctor_set(v___x_5855_, 2, v___x_5849_);
lean_ctor_set(v___x_5855_, 3, v___x_5850_);
lean_ctor_set(v___x_5855_, 4, v_textEdit_x3f_5840_);
lean_ctor_set(v___x_5855_, 5, v___x_5851_);
lean_ctor_set(v___x_5855_, 6, v___x_5854_);
lean_ctor_set(v___x_5855_, 7, v___x_5851_);
return v___x_5855_;
}
else
{
lean_object* v___x_5856_; lean_object* v___x_5857_; 
v___x_5856_ = ((lean_object*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3));
v___x_5857_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5844_);
lean_ctor_set(v___x_5857_, 1, v___x_5845_);
lean_ctor_set(v___x_5857_, 2, v___x_5849_);
lean_ctor_set(v___x_5857_, 3, v___x_5850_);
lean_ctor_set(v___x_5857_, 4, v_textEdit_x3f_5840_);
lean_ctor_set(v___x_5857_, 5, v___x_5851_);
lean_ctor_set(v___x_5857_, 6, v___x_5854_);
lean_ctor_set(v___x_5857_, 7, v___x_5856_);
return v___x_5857_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object* v_completionInfoPos_5858_, lean_object* v_uri_5859_, lean_object* v_pos_5860_, lean_object* v_name_5861_, lean_object* v_explan_5862_, lean_object* v_textEdit_x3f_5863_){
_start:
{
lean_object* v_res_5864_; 
v_res_5864_ = l_Lean_Server_Completion_errorNameCompletion___lam__0(v_completionInfoPos_5858_, v_uri_5859_, v_pos_5860_, v_name_5861_, v_explan_5862_, v_textEdit_x3f_5863_);
lean_dec_ref(v_explan_5862_);
return v_res_5864_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object* v_init_5865_, lean_object* v_x_5866_){
_start:
{
if (lean_obj_tag(v_x_5866_) == 0)
{
lean_object* v_k_5867_; lean_object* v_v_5868_; lean_object* v_l_5869_; lean_object* v_r_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; 
v_k_5867_ = lean_ctor_get(v_x_5866_, 1);
v_v_5868_ = lean_ctor_get(v_x_5866_, 2);
v_l_5869_ = lean_ctor_get(v_x_5866_, 3);
v_r_5870_ = lean_ctor_get(v_x_5866_, 4);
v___x_5871_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_5865_, v_l_5869_);
lean_inc(v_v_5868_);
lean_inc(v_k_5867_);
v___x_5872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5872_, 0, v_k_5867_);
lean_ctor_set(v___x_5872_, 1, v_v_5868_);
v___x_5873_ = lean_array_push(v___x_5871_, v___x_5872_);
v_init_5865_ = v___x_5873_;
v_x_5866_ = v_r_5870_;
goto _start;
}
else
{
return v_init_5865_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object* v_init_5875_, lean_object* v_x_5876_){
_start:
{
lean_object* v_res_5877_; 
v_res_5877_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_5875_, v_x_5876_);
lean_dec(v_x_5876_);
return v_res_5877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object* v_hi_5878_, lean_object* v_pivot_5879_, lean_object* v_as_5880_, lean_object* v_i_5881_, lean_object* v_k_5882_){
_start:
{
uint8_t v___x_5883_; 
v___x_5883_ = lean_nat_dec_lt(v_k_5882_, v_hi_5878_);
if (v___x_5883_ == 0)
{
lean_object* v___x_5884_; lean_object* v___x_5885_; 
lean_dec(v_k_5882_);
lean_dec_ref(v_pivot_5879_);
v___x_5884_ = lean_array_fswap(v_as_5880_, v_i_5881_, v_hi_5878_);
v___x_5885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5885_, 0, v_i_5881_);
lean_ctor_set(v___x_5885_, 1, v___x_5884_);
return v___x_5885_;
}
else
{
lean_object* v___x_5886_; lean_object* v_fst_5887_; lean_object* v_fst_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; uint8_t v___x_5891_; 
v___x_5886_ = lean_array_fget_borrowed(v_as_5880_, v_k_5882_);
v_fst_5887_ = lean_ctor_get(v___x_5886_, 0);
v_fst_5888_ = lean_ctor_get(v_pivot_5879_, 0);
lean_inc(v_fst_5887_);
v___x_5889_ = l_Lean_Name_toString(v_fst_5887_, v___x_5883_);
lean_inc(v_fst_5888_);
v___x_5890_ = l_Lean_Name_toString(v_fst_5888_, v___x_5883_);
v___x_5891_ = lean_string_dec_lt(v___x_5889_, v___x_5890_);
lean_dec_ref(v___x_5890_);
lean_dec_ref(v___x_5889_);
if (v___x_5891_ == 0)
{
lean_object* v___x_5892_; lean_object* v___x_5893_; 
v___x_5892_ = lean_unsigned_to_nat(1u);
v___x_5893_ = lean_nat_add(v_k_5882_, v___x_5892_);
lean_dec(v_k_5882_);
v_k_5882_ = v___x_5893_;
goto _start;
}
else
{
lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; 
v___x_5895_ = lean_array_fswap(v_as_5880_, v_i_5881_, v_k_5882_);
v___x_5896_ = lean_unsigned_to_nat(1u);
v___x_5897_ = lean_nat_add(v_i_5881_, v___x_5896_);
lean_dec(v_i_5881_);
v___x_5898_ = lean_nat_add(v_k_5882_, v___x_5896_);
lean_dec(v_k_5882_);
v_as_5880_ = v___x_5895_;
v_i_5881_ = v___x_5897_;
v_k_5882_ = v___x_5898_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_hi_5900_, lean_object* v_pivot_5901_, lean_object* v_as_5902_, lean_object* v_i_5903_, lean_object* v_k_5904_){
_start:
{
lean_object* v_res_5905_; 
v_res_5905_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_5900_, v_pivot_5901_, v_as_5902_, v_i_5903_, v_k_5904_);
lean_dec(v_hi_5900_);
return v_res_5905_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t v___x_5906_, lean_object* v_e_5907_, lean_object* v_e_x27_5908_){
_start:
{
lean_object* v_fst_5909_; lean_object* v_fst_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; uint8_t v___x_5913_; 
v_fst_5909_ = lean_ctor_get(v_e_5907_, 0);
lean_inc(v_fst_5909_);
lean_dec_ref(v_e_5907_);
v_fst_5910_ = lean_ctor_get(v_e_x27_5908_, 0);
lean_inc(v_fst_5910_);
lean_dec_ref(v_e_x27_5908_);
v___x_5911_ = l_Lean_Name_toString(v_fst_5909_, v___x_5906_);
v___x_5912_ = l_Lean_Name_toString(v_fst_5910_, v___x_5906_);
v___x_5913_ = lean_string_dec_lt(v___x_5911_, v___x_5912_);
lean_dec_ref(v___x_5912_);
lean_dec_ref(v___x_5911_);
return v___x_5913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_5914_, lean_object* v_e_5915_, lean_object* v_e_x27_5916_){
_start:
{
uint8_t v___x_1720__boxed_5917_; uint8_t v_res_5918_; lean_object* v_r_5919_; 
v___x_1720__boxed_5917_ = lean_unbox(v___x_5914_);
v_res_5918_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_1720__boxed_5917_, v_e_5915_, v_e_x27_5916_);
v_r_5919_ = lean_box(v_res_5918_);
return v_r_5919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object* v_n_5920_, lean_object* v_as_5921_, lean_object* v_lo_5922_, lean_object* v_hi_5923_){
_start:
{
lean_object* v___y_5925_; uint8_t v___x_5935_; 
v___x_5935_ = lean_nat_dec_lt(v_lo_5922_, v_hi_5923_);
if (v___x_5935_ == 0)
{
lean_dec(v_lo_5922_);
return v_as_5921_;
}
else
{
lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v_mid_5938_; lean_object* v___y_5940_; lean_object* v___y_5946_; lean_object* v___x_5951_; lean_object* v___x_5952_; uint8_t v___x_5953_; 
v___x_5936_ = lean_nat_add(v_lo_5922_, v_hi_5923_);
v___x_5937_ = lean_unsigned_to_nat(1u);
v_mid_5938_ = lean_nat_shiftr(v___x_5936_, v___x_5937_);
lean_dec(v___x_5936_);
v___x_5951_ = lean_array_fget_borrowed(v_as_5921_, v_mid_5938_);
v___x_5952_ = lean_array_fget_borrowed(v_as_5921_, v_lo_5922_);
lean_inc(v___x_5952_);
lean_inc(v___x_5951_);
v___x_5953_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5935_, v___x_5951_, v___x_5952_);
if (v___x_5953_ == 0)
{
v___y_5946_ = v_as_5921_;
goto v___jp_5945_;
}
else
{
lean_object* v___x_5954_; 
v___x_5954_ = lean_array_fswap(v_as_5921_, v_lo_5922_, v_mid_5938_);
v___y_5946_ = v___x_5954_;
goto v___jp_5945_;
}
v___jp_5939_:
{
lean_object* v___x_5941_; lean_object* v___x_5942_; uint8_t v___x_5943_; 
v___x_5941_ = lean_array_fget_borrowed(v___y_5940_, v_mid_5938_);
v___x_5942_ = lean_array_fget_borrowed(v___y_5940_, v_hi_5923_);
lean_inc(v___x_5942_);
lean_inc(v___x_5941_);
v___x_5943_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5935_, v___x_5941_, v___x_5942_);
if (v___x_5943_ == 0)
{
lean_dec(v_mid_5938_);
v___y_5925_ = v___y_5940_;
goto v___jp_5924_;
}
else
{
lean_object* v___x_5944_; 
v___x_5944_ = lean_array_fswap(v___y_5940_, v_mid_5938_, v_hi_5923_);
lean_dec(v_mid_5938_);
v___y_5925_ = v___x_5944_;
goto v___jp_5924_;
}
}
v___jp_5945_:
{
lean_object* v___x_5947_; lean_object* v___x_5948_; uint8_t v___x_5949_; 
v___x_5947_ = lean_array_fget_borrowed(v___y_5946_, v_hi_5923_);
v___x_5948_ = lean_array_fget_borrowed(v___y_5946_, v_lo_5922_);
lean_inc(v___x_5948_);
lean_inc(v___x_5947_);
v___x_5949_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5935_, v___x_5947_, v___x_5948_);
if (v___x_5949_ == 0)
{
v___y_5940_ = v___y_5946_;
goto v___jp_5939_;
}
else
{
lean_object* v___x_5950_; 
v___x_5950_ = lean_array_fswap(v___y_5946_, v_lo_5922_, v_hi_5923_);
v___y_5940_ = v___x_5950_;
goto v___jp_5939_;
}
}
}
v___jp_5924_:
{
lean_object* v_pivot_5926_; lean_object* v___x_5927_; lean_object* v_fst_5928_; lean_object* v_snd_5929_; uint8_t v___x_5930_; 
v_pivot_5926_ = lean_array_fget(v___y_5925_, v_hi_5923_);
lean_inc_n(v_lo_5922_, 2);
v___x_5927_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_5923_, v_pivot_5926_, v___y_5925_, v_lo_5922_, v_lo_5922_);
v_fst_5928_ = lean_ctor_get(v___x_5927_, 0);
lean_inc(v_fst_5928_);
v_snd_5929_ = lean_ctor_get(v___x_5927_, 1);
lean_inc(v_snd_5929_);
lean_dec_ref(v___x_5927_);
v___x_5930_ = lean_nat_dec_le(v_hi_5923_, v_fst_5928_);
if (v___x_5930_ == 0)
{
lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; 
v___x_5931_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_5920_, v_snd_5929_, v_lo_5922_, v_fst_5928_);
v___x_5932_ = lean_unsigned_to_nat(1u);
v___x_5933_ = lean_nat_add(v_fst_5928_, v___x_5932_);
lean_dec(v_fst_5928_);
v_as_5921_ = v___x_5931_;
v_lo_5922_ = v___x_5933_;
goto _start;
}
else
{
lean_dec(v_fst_5928_);
lean_dec(v_lo_5922_);
return v_snd_5929_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object* v_n_5955_, lean_object* v_as_5956_, lean_object* v_lo_5957_, lean_object* v_hi_5958_){
_start:
{
lean_object* v_res_5959_; 
v_res_5959_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_5955_, v_as_5956_, v_lo_5957_, v_hi_5958_);
lean_dec(v_hi_5958_);
lean_dec(v_n_5955_);
return v_res_5959_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object* v___y_5962_){
_start:
{
lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v_env_5966_; lean_object* v___x_5967_; lean_object* v_toEnvExtension_5968_; lean_object* v_asyncMode_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___y_5977_; lean_object* v___y_5978_; uint8_t v___x_5981_; 
v___x_5964_ = lean_box(1);
v___x_5965_ = lean_st_ref_get(v___y_5962_);
v_env_5966_ = lean_ctor_get(v___x_5965_, 0);
lean_inc_ref(v_env_5966_);
lean_dec(v___x_5965_);
v___x_5967_ = l_Lean_errorExplanationExt;
v_toEnvExtension_5968_ = lean_ctor_get(v___x_5967_, 0);
v_asyncMode_5969_ = lean_ctor_get(v_toEnvExtension_5968_, 2);
v___x_5970_ = lean_box(0);
v___x_5971_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_5964_, v___x_5967_, v_env_5966_, v_asyncMode_5969_, v___x_5970_);
v___x_5972_ = lean_unsigned_to_nat(0u);
v___x_5973_ = ((lean_object*)(l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0));
v___x_5974_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v___x_5973_, v___x_5971_);
lean_dec(v___x_5971_);
v___x_5975_ = lean_array_get_size(v___x_5974_);
v___x_5981_ = lean_nat_dec_eq(v___x_5975_, v___x_5972_);
if (v___x_5981_ == 0)
{
lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___y_5985_; uint8_t v___x_5987_; 
v___x_5982_ = lean_unsigned_to_nat(1u);
v___x_5983_ = lean_nat_sub(v___x_5975_, v___x_5982_);
v___x_5987_ = lean_nat_dec_le(v___x_5972_, v___x_5983_);
if (v___x_5987_ == 0)
{
lean_inc(v___x_5983_);
v___y_5985_ = v___x_5983_;
goto v___jp_5984_;
}
else
{
v___y_5985_ = v___x_5972_;
goto v___jp_5984_;
}
v___jp_5984_:
{
uint8_t v___x_5986_; 
v___x_5986_ = lean_nat_dec_le(v___y_5985_, v___x_5983_);
if (v___x_5986_ == 0)
{
lean_dec(v___x_5983_);
lean_inc(v___y_5985_);
v___y_5977_ = v___y_5985_;
v___y_5978_ = v___y_5985_;
goto v___jp_5976_;
}
else
{
v___y_5977_ = v___y_5985_;
v___y_5978_ = v___x_5983_;
goto v___jp_5976_;
}
}
}
else
{
lean_object* v___x_5988_; 
v___x_5988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5988_, 0, v___x_5974_);
return v___x_5988_;
}
v___jp_5976_:
{
lean_object* v___x_5979_; lean_object* v___x_5980_; 
v___x_5979_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v___x_5975_, v___x_5974_, v___y_5977_, v___y_5978_);
lean_dec(v___y_5978_);
v___x_5980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5980_, 0, v___x_5979_);
return v___x_5980_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object* v___y_5989_, lean_object* v___y_5990_){
_start:
{
lean_object* v_res_5991_; 
v_res_5991_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_5989_);
lean_dec(v___y_5989_);
return v_res_5991_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object* v_mkItem_5992_, lean_object* v_fst_5993_, lean_object* v_stx_5994_, lean_object* v_ctx_5995_, uint8_t v_snd_5996_, lean_object* v_caps_5997_, lean_object* v_as_5998_, size_t v_sz_5999_, size_t v_i_6000_, lean_object* v_b_6001_){
_start:
{
lean_object* v_a_6003_; uint8_t v___x_6007_; 
v___x_6007_ = lean_usize_dec_lt(v_i_6000_, v_sz_5999_);
if (v___x_6007_ == 0)
{
lean_dec_ref(v_ctx_5995_);
lean_dec_ref(v_mkItem_5992_);
return v_b_6001_;
}
else
{
lean_object* v_a_6008_; lean_object* v_fst_6009_; lean_object* v_snd_6010_; lean_object* v___x_6012_; uint8_t v_isShared_6013_; uint8_t v_isSharedCheck_6052_; 
v_a_6008_ = lean_array_uget(v_as_5998_, v_i_6000_);
v_fst_6009_ = lean_ctor_get(v_a_6008_, 0);
v_snd_6010_ = lean_ctor_get(v_a_6008_, 1);
v_isSharedCheck_6052_ = !lean_is_exclusive(v_a_6008_);
if (v_isSharedCheck_6052_ == 0)
{
v___x_6012_ = v_a_6008_;
v_isShared_6013_ = v_isSharedCheck_6052_;
goto v_resetjp_6011_;
}
else
{
lean_inc(v_snd_6010_);
lean_inc(v_fst_6009_);
lean_dec(v_a_6008_);
v___x_6012_ = lean_box(0);
v_isShared_6013_ = v_isSharedCheck_6052_;
goto v_resetjp_6011_;
}
v_resetjp_6011_:
{
lean_object* v___y_6015_; lean_object* v___x_6020_; uint8_t v___x_6021_; lean_object* v___y_6023_; lean_object* v___y_6024_; 
lean_inc(v_fst_6009_);
v___x_6020_ = l_Lean_Name_toString(v_fst_6009_, v___x_6007_);
v___x_6021_ = l_Lean_String_charactersIn(v_fst_5993_, v___x_6020_);
lean_dec_ref(v___x_6020_);
if (v___x_6021_ == 0)
{
lean_del_object(v___x_6012_);
lean_dec(v_snd_6010_);
lean_dec(v_fst_6009_);
v_a_6003_ = v_b_6001_;
goto v___jp_6002_;
}
else
{
lean_object* v_textDocument_x3f_6035_; 
v_textDocument_x3f_6035_ = lean_ctor_get(v_caps_5997_, 0);
if (lean_obj_tag(v_textDocument_x3f_6035_) == 0)
{
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6036_; lean_object* v_completion_x3f_6037_; 
v_val_6036_ = lean_ctor_get(v_textDocument_x3f_6035_, 0);
v_completion_x3f_6037_ = lean_ctor_get(v_val_6036_, 0);
if (lean_obj_tag(v_completion_x3f_6037_) == 0)
{
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6038_; 
v_val_6038_ = lean_ctor_get(v_completion_x3f_6037_, 0);
if (lean_obj_tag(v_val_6038_) == 0)
{
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6039_; 
v_val_6039_ = lean_ctor_get(v_val_6038_, 0);
if (lean_obj_tag(v_val_6039_) == 0)
{
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6040_; uint8_t v___x_6041_; 
v_val_6040_ = lean_ctor_get(v_val_6039_, 0);
v___x_6041_ = lean_unbox(v_val_6040_);
if (v___x_6041_ == 0)
{
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
uint8_t v___x_6042_; lean_object* v___x_6043_; 
v___x_6042_ = 0;
v___x_6043_ = l_Lean_Syntax_getRange_x3f(v_stx_5994_, v___x_6042_);
if (lean_obj_tag(v___x_6043_) == 1)
{
lean_object* v_val_6044_; 
v_val_6044_ = lean_ctor_get(v___x_6043_, 0);
lean_inc(v_val_6044_);
lean_dec_ref_known(v___x_6043_, 1);
if (v_snd_5996_ == 0)
{
lean_object* v_start_6045_; lean_object* v_stop_6046_; 
v_start_6045_ = lean_ctor_get(v_val_6044_, 0);
lean_inc(v_start_6045_);
v_stop_6046_ = lean_ctor_get(v_val_6044_, 1);
lean_inc(v_stop_6046_);
lean_dec(v_val_6044_);
v___y_6023_ = v_start_6045_;
v___y_6024_ = v_stop_6046_;
goto v___jp_6022_;
}
else
{
lean_object* v_start_6047_; lean_object* v_stop_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; 
v_start_6047_ = lean_ctor_get(v_val_6044_, 0);
lean_inc(v_start_6047_);
v_stop_6048_ = lean_ctor_get(v_val_6044_, 1);
lean_inc(v_stop_6048_);
lean_dec(v_val_6044_);
v___x_6049_ = lean_unsigned_to_nat(1u);
v___x_6050_ = lean_nat_add(v_stop_6048_, v___x_6049_);
lean_dec(v_stop_6048_);
v___y_6023_ = v_start_6047_;
v___y_6024_ = v___x_6050_;
goto v___jp_6022_;
}
}
else
{
lean_object* v___x_6051_; 
lean_dec(v___x_6043_);
lean_del_object(v___x_6012_);
v___x_6051_ = lean_box(0);
v___y_6015_ = v___x_6051_;
goto v___jp_6014_;
}
}
}
}
}
}
}
v___jp_6014_:
{
lean_object* v___x_6016_; lean_object* v_items_6017_; 
lean_inc_ref(v_mkItem_5992_);
v___x_6016_ = lean_apply_3(v_mkItem_5992_, v_fst_6009_, v_snd_6010_, v___y_6015_);
v_items_6017_ = lean_array_push(v_b_6001_, v___x_6016_);
v_a_6003_ = v_items_6017_;
goto v___jp_6002_;
}
v___jp_6018_:
{
lean_object* v___x_6019_; 
v___x_6019_ = lean_box(0);
v___y_6015_ = v___x_6019_;
goto v___jp_6014_;
}
v___jp_6022_:
{
lean_object* v_toCommandContextInfo_6025_; lean_object* v_fileMap_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v_range_6030_; 
v_toCommandContextInfo_6025_ = lean_ctor_get(v_ctx_5995_, 0);
v_fileMap_6026_ = lean_ctor_get(v_toCommandContextInfo_6025_, 2);
lean_inc_ref_n(v_fileMap_6026_, 2);
v___x_6027_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_6026_, v___y_6023_);
lean_dec(v___y_6023_);
v___x_6028_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_6026_, v___y_6024_);
lean_dec(v___y_6024_);
if (v_isShared_6013_ == 0)
{
lean_ctor_set(v___x_6012_, 1, v___x_6028_);
lean_ctor_set(v___x_6012_, 0, v___x_6027_);
v_range_6030_ = v___x_6012_;
goto v_reusejp_6029_;
}
else
{
lean_object* v_reuseFailAlloc_6034_; 
v_reuseFailAlloc_6034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6034_, 0, v___x_6027_);
lean_ctor_set(v_reuseFailAlloc_6034_, 1, v___x_6028_);
v_range_6030_ = v_reuseFailAlloc_6034_;
goto v_reusejp_6029_;
}
v_reusejp_6029_:
{
lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; 
lean_inc(v_fst_6009_);
v___x_6031_ = l_Lean_Name_toString(v_fst_6009_, v___x_6021_);
lean_inc_ref(v_range_6030_);
v___x_6032_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6032_, 0, v___x_6031_);
lean_ctor_set(v___x_6032_, 1, v_range_6030_);
lean_ctor_set(v___x_6032_, 2, v_range_6030_);
v___x_6033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6033_, 0, v___x_6032_);
v___y_6015_ = v___x_6033_;
goto v___jp_6014_;
}
}
}
}
v___jp_6002_:
{
size_t v___x_6004_; size_t v___x_6005_; 
v___x_6004_ = ((size_t)1ULL);
v___x_6005_ = lean_usize_add(v_i_6000_, v___x_6004_);
v_i_6000_ = v___x_6005_;
v_b_6001_ = v_a_6003_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object* v_mkItem_6053_, lean_object* v_fst_6054_, lean_object* v_stx_6055_, lean_object* v_ctx_6056_, lean_object* v_snd_6057_, lean_object* v_caps_6058_, lean_object* v_as_6059_, lean_object* v_sz_6060_, lean_object* v_i_6061_, lean_object* v_b_6062_){
_start:
{
uint8_t v_snd_1844__boxed_6063_; size_t v_sz_boxed_6064_; size_t v_i_boxed_6065_; lean_object* v_res_6066_; 
v_snd_1844__boxed_6063_ = lean_unbox(v_snd_6057_);
v_sz_boxed_6064_ = lean_unbox_usize(v_sz_6060_);
lean_dec(v_sz_6060_);
v_i_boxed_6065_ = lean_unbox_usize(v_i_6061_);
lean_dec(v_i_6061_);
v_res_6066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6053_, v_fst_6054_, v_stx_6055_, v_ctx_6056_, v_snd_1844__boxed_6063_, v_caps_6058_, v_as_6059_, v_sz_boxed_6064_, v_i_boxed_6065_, v_b_6062_);
lean_dec_ref(v_as_6059_);
lean_dec_ref(v_caps_6058_);
lean_dec(v_stx_6055_);
lean_dec_ref(v_fst_6054_);
return v_res_6066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object* v_entries_6067_, lean_object* v_stx_6068_, lean_object* v_caps_6069_, lean_object* v_ctx_6070_, lean_object* v_mkItem_6071_){
_start:
{
lean_object* v_fst_6073_; uint8_t v_snd_6074_; uint8_t v___x_6079_; lean_object* v___x_6080_; 
v___x_6079_ = 0;
v___x_6080_ = l_Lean_Syntax_getSubstring_x3f(v_stx_6068_, v___x_6079_, v___x_6079_);
if (lean_obj_tag(v___x_6080_) == 0)
{
lean_object* v___x_6081_; 
v___x_6081_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_6073_ = v___x_6081_;
v_snd_6074_ = v___x_6079_;
goto v___jp_6072_;
}
else
{
lean_object* v_val_6082_; lean_object* v_str_6083_; lean_object* v_startPos_6084_; lean_object* v_stopPos_6085_; uint8_t v___x_6088_; 
v_val_6082_ = lean_ctor_get(v___x_6080_, 0);
lean_inc(v_val_6082_);
lean_dec_ref_known(v___x_6080_, 1);
v_str_6083_ = lean_ctor_get(v_val_6082_, 0);
lean_inc_ref(v_str_6083_);
v_startPos_6084_ = lean_ctor_get(v_val_6082_, 1);
lean_inc(v_startPos_6084_);
v_stopPos_6085_ = lean_ctor_get(v_val_6082_, 2);
lean_inc(v_stopPos_6085_);
lean_dec(v_val_6082_);
v___x_6088_ = lean_string_utf8_at_end(v_str_6083_, v_stopPos_6085_);
if (v___x_6088_ == 0)
{
uint32_t v___x_6089_; uint32_t v___x_6090_; uint8_t v___x_6091_; 
v___x_6089_ = lean_string_utf8_get(v_str_6083_, v_stopPos_6085_);
v___x_6090_ = 46;
v___x_6091_ = lean_uint32_dec_eq(v___x_6089_, v___x_6090_);
if (v___x_6091_ == 0)
{
goto v___jp_6086_;
}
else
{
lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; 
v___x_6092_ = lean_string_utf8_extract(v_str_6083_, v_startPos_6084_, v_stopPos_6085_);
lean_dec(v_stopPos_6085_);
lean_dec(v_startPos_6084_);
lean_dec_ref(v_str_6083_);
v___x_6093_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_6094_ = lean_string_append(v___x_6092_, v___x_6093_);
v_fst_6073_ = v___x_6094_;
v_snd_6074_ = v___x_6091_;
goto v___jp_6072_;
}
}
else
{
goto v___jp_6086_;
}
v___jp_6086_:
{
lean_object* v___x_6087_; 
v___x_6087_ = lean_string_utf8_extract(v_str_6083_, v_startPos_6084_, v_stopPos_6085_);
lean_dec(v_stopPos_6085_);
lean_dec(v_startPos_6084_);
lean_dec_ref(v_str_6083_);
v_fst_6073_ = v___x_6087_;
v_snd_6074_ = v___x_6079_;
goto v___jp_6072_;
}
}
v___jp_6072_:
{
lean_object* v_items_6075_; size_t v_sz_6076_; size_t v___x_6077_; lean_object* v___x_6078_; 
v_items_6075_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v_sz_6076_ = lean_array_size(v_entries_6067_);
v___x_6077_ = ((size_t)0ULL);
v___x_6078_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6071_, v_fst_6073_, v_stx_6068_, v_ctx_6070_, v_snd_6074_, v_caps_6069_, v_entries_6067_, v_sz_6076_, v___x_6077_, v_items_6075_);
lean_dec_ref(v_fst_6073_);
return v___x_6078_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object* v_entries_6095_, lean_object* v_stx_6096_, lean_object* v_caps_6097_, lean_object* v_ctx_6098_, lean_object* v_mkItem_6099_){
_start:
{
lean_object* v_res_6100_; 
v_res_6100_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_entries_6095_, v_stx_6096_, v_caps_6097_, v_ctx_6098_, v_mkItem_6099_);
lean_dec_ref(v_caps_6097_);
lean_dec(v_stx_6096_);
lean_dec_ref(v_entries_6095_);
return v_res_6100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object* v_partialId_6101_, lean_object* v_caps_6102_, lean_object* v_ctx_6103_, lean_object* v___f_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_){
_start:
{
lean_object* v___x_6110_; lean_object* v_a_6111_; lean_object* v___x_6113_; uint8_t v_isShared_6114_; uint8_t v_isSharedCheck_6119_; 
v___x_6110_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6108_);
v_a_6111_ = lean_ctor_get(v___x_6110_, 0);
v_isSharedCheck_6119_ = !lean_is_exclusive(v___x_6110_);
if (v_isSharedCheck_6119_ == 0)
{
v___x_6113_ = v___x_6110_;
v_isShared_6114_ = v_isSharedCheck_6119_;
goto v_resetjp_6112_;
}
else
{
lean_inc(v_a_6111_);
lean_dec(v___x_6110_);
v___x_6113_ = lean_box(0);
v_isShared_6114_ = v_isSharedCheck_6119_;
goto v_resetjp_6112_;
}
v_resetjp_6112_:
{
lean_object* v___x_6115_; lean_object* v___x_6117_; 
v___x_6115_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_a_6111_, v_partialId_6101_, v_caps_6102_, v_ctx_6103_, v___f_6104_);
lean_dec(v_a_6111_);
if (v_isShared_6114_ == 0)
{
lean_ctor_set(v___x_6113_, 0, v___x_6115_);
v___x_6117_ = v___x_6113_;
goto v_reusejp_6116_;
}
else
{
lean_object* v_reuseFailAlloc_6118_; 
v_reuseFailAlloc_6118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6118_, 0, v___x_6115_);
v___x_6117_ = v_reuseFailAlloc_6118_;
goto v_reusejp_6116_;
}
v_reusejp_6116_:
{
return v___x_6117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object* v_partialId_6120_, lean_object* v_caps_6121_, lean_object* v_ctx_6122_, lean_object* v___f_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_, lean_object* v___y_6128_){
_start:
{
lean_object* v_res_6129_; 
v_res_6129_ = l_Lean_Server_Completion_errorNameCompletion___lam__1(v_partialId_6120_, v_caps_6121_, v_ctx_6122_, v___f_6123_, v___y_6124_, v___y_6125_, v___y_6126_, v___y_6127_);
lean_dec(v___y_6127_);
lean_dec_ref(v___y_6126_);
lean_dec(v___y_6125_);
lean_dec_ref(v___y_6124_);
lean_dec_ref(v_caps_6121_);
lean_dec(v_partialId_6120_);
return v_res_6129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object* v_uri_6130_, lean_object* v_pos_6131_, lean_object* v_completionInfoPos_6132_, lean_object* v_ctx_6133_, lean_object* v_partialId_6134_, lean_object* v_caps_6135_){
_start:
{
lean_object* v___f_6137_; lean_object* v___f_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; 
v___f_6137_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6137_, 0, v_completionInfoPos_6132_);
lean_closure_set(v___f_6137_, 1, v_uri_6130_);
lean_closure_set(v___f_6137_, 2, v_pos_6131_);
lean_inc_ref(v_ctx_6133_);
v___f_6138_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed), 9, 4);
lean_closure_set(v___f_6138_, 0, v_partialId_6134_);
lean_closure_set(v___f_6138_, 1, v_caps_6135_);
lean_closure_set(v___f_6138_, 2, v_ctx_6133_);
lean_closure_set(v___f_6138_, 3, v___f_6137_);
v___x_6139_ = lean_unsigned_to_nat(32u);
v___x_6140_ = lean_mk_empty_array_with_capacity(v___x_6139_);
lean_dec_ref(v___x_6140_);
v___x_6141_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_6142_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6133_, v___x_6141_, v___f_6138_);
return v___x_6142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object* v_uri_6143_, lean_object* v_pos_6144_, lean_object* v_completionInfoPos_6145_, lean_object* v_ctx_6146_, lean_object* v_partialId_6147_, lean_object* v_caps_6148_, lean_object* v_a_6149_){
_start:
{
lean_object* v_res_6150_; 
v_res_6150_ = l_Lean_Server_Completion_errorNameCompletion(v_uri_6143_, v_pos_6144_, v_completionInfoPos_6145_, v_ctx_6146_, v_partialId_6147_, v_caps_6148_);
return v_res_6150_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_, lean_object* v___y_6154_){
_start:
{
lean_object* v___x_6156_; 
v___x_6156_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6154_);
return v___x_6156_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_, lean_object* v___y_6160_, lean_object* v___y_6161_){
_start:
{
lean_object* v_res_6162_; 
v_res_6162_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(v___y_6157_, v___y_6158_, v___y_6159_, v___y_6160_);
lean_dec(v___y_6160_);
lean_dec_ref(v___y_6159_);
lean_dec(v___y_6158_);
lean_dec_ref(v___y_6157_);
return v_res_6162_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object* v_init_6163_, lean_object* v_t_6164_){
_start:
{
lean_object* v___x_6165_; 
v___x_6165_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_6163_, v_t_6164_);
return v___x_6165_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object* v_init_6166_, lean_object* v_t_6167_){
_start:
{
lean_object* v_res_6168_; 
v_res_6168_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(v_init_6166_, v_t_6167_);
lean_dec(v_t_6167_);
return v_res_6168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object* v_n_6169_, lean_object* v_as_6170_, lean_object* v_lo_6171_, lean_object* v_hi_6172_, lean_object* v_w_6173_, lean_object* v_hlo_6174_, lean_object* v_hhi_6175_){
_start:
{
lean_object* v___x_6176_; 
v___x_6176_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_6169_, v_as_6170_, v_lo_6171_, v_hi_6172_);
return v___x_6176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object* v_n_6177_, lean_object* v_as_6178_, lean_object* v_lo_6179_, lean_object* v_hi_6180_, lean_object* v_w_6181_, lean_object* v_hlo_6182_, lean_object* v_hhi_6183_){
_start:
{
lean_object* v_res_6184_; 
v_res_6184_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(v_n_6177_, v_as_6178_, v_lo_6179_, v_hi_6180_, v_w_6181_, v_hlo_6182_, v_hhi_6183_);
lean_dec(v_hi_6180_);
lean_dec(v_n_6177_);
return v_res_6184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object* v_n_6185_, lean_object* v_lo_6186_, lean_object* v_hi_6187_, lean_object* v_hhi_6188_, lean_object* v_pivot_6189_, lean_object* v_as_6190_, lean_object* v_i_6191_, lean_object* v_k_6192_, lean_object* v_ilo_6193_, lean_object* v_ik_6194_, lean_object* v_w_6195_){
_start:
{
lean_object* v___x_6196_; 
v___x_6196_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_6187_, v_pivot_6189_, v_as_6190_, v_i_6191_, v_k_6192_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object* v_n_6197_, lean_object* v_lo_6198_, lean_object* v_hi_6199_, lean_object* v_hhi_6200_, lean_object* v_pivot_6201_, lean_object* v_as_6202_, lean_object* v_i_6203_, lean_object* v_k_6204_, lean_object* v_ilo_6205_, lean_object* v_ik_6206_, lean_object* v_w_6207_){
_start:
{
lean_object* v_res_6208_; 
v_res_6208_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(v_n_6197_, v_lo_6198_, v_hi_6199_, v_hhi_6200_, v_pivot_6201_, v_as_6202_, v_i_6203_, v_k_6204_, v_ilo_6205_, v_ik_6206_, v_w_6207_);
lean_dec(v_hi_6199_);
lean_dec(v_lo_6198_);
lean_dec(v_n_6197_);
return v_res_6208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object* v_completionInfoPos_6209_, lean_object* v_uri_6210_, lean_object* v_pos_6211_, size_t v_sz_6212_, size_t v_i_6213_, lean_object* v_bs_6214_){
_start:
{
uint8_t v___x_6215_; 
v___x_6215_ = lean_usize_dec_lt(v_i_6213_, v_sz_6212_);
if (v___x_6215_ == 0)
{
lean_dec_ref(v_pos_6211_);
lean_dec_ref(v_uri_6210_);
lean_dec(v_completionInfoPos_6209_);
return v_bs_6214_;
}
else
{
lean_object* v_v_6216_; lean_object* v_userName_6217_; lean_object* v_docString_6218_; lean_object* v___x_6219_; lean_object* v_bs_x27_6220_; lean_object* v___x_6221_; lean_object* v___y_6223_; 
v_v_6216_ = lean_array_uget_borrowed(v_bs_6214_, v_i_6213_);
v_userName_6217_ = lean_ctor_get(v_v_6216_, 1);
lean_inc_ref(v_userName_6217_);
v_docString_6218_ = lean_ctor_get(v_v_6216_, 3);
lean_inc(v_docString_6218_);
v___x_6219_ = lean_unsigned_to_nat(0u);
v_bs_x27_6220_ = lean_array_uset(v_bs_6214_, v_i_6213_, v___x_6219_);
v___x_6221_ = lean_box(0);
if (lean_obj_tag(v_docString_6218_) == 0)
{
v___y_6223_ = v___x_6221_;
goto v___jp_6222_;
}
else
{
lean_object* v_val_6233_; lean_object* v___x_6235_; uint8_t v_isShared_6236_; uint8_t v_isSharedCheck_6242_; 
v_val_6233_ = lean_ctor_get(v_docString_6218_, 0);
v_isSharedCheck_6242_ = !lean_is_exclusive(v_docString_6218_);
if (v_isSharedCheck_6242_ == 0)
{
v___x_6235_ = v_docString_6218_;
v_isShared_6236_ = v_isSharedCheck_6242_;
goto v_resetjp_6234_;
}
else
{
lean_inc(v_val_6233_);
lean_dec(v_docString_6218_);
v___x_6235_ = lean_box(0);
v_isShared_6236_ = v_isSharedCheck_6242_;
goto v_resetjp_6234_;
}
v_resetjp_6234_:
{
uint8_t v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6240_; 
v___x_6237_ = 1;
v___x_6238_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6238_, 0, v_val_6233_);
lean_ctor_set_uint8(v___x_6238_, sizeof(void*)*1, v___x_6237_);
if (v_isShared_6236_ == 0)
{
lean_ctor_set(v___x_6235_, 0, v___x_6238_);
v___x_6240_ = v___x_6235_;
goto v_reusejp_6239_;
}
else
{
lean_object* v_reuseFailAlloc_6241_; 
v_reuseFailAlloc_6241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6241_, 0, v___x_6238_);
v___x_6240_ = v_reuseFailAlloc_6241_;
goto v_reusejp_6239_;
}
v_reusejp_6239_:
{
v___y_6223_ = v___x_6240_;
goto v___jp_6222_;
}
}
}
v___jp_6222_:
{
lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6228_; size_t v___x_6229_; size_t v___x_6230_; lean_object* v___x_6231_; 
v___x_6224_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2));
lean_inc(v_completionInfoPos_6209_);
v___x_6225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6225_, 0, v_completionInfoPos_6209_);
lean_inc_ref(v_pos_6211_);
lean_inc_ref(v_uri_6210_);
v___x_6226_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6226_, 0, v_uri_6210_);
lean_ctor_set(v___x_6226_, 1, v_pos_6211_);
lean_ctor_set(v___x_6226_, 2, v___x_6225_);
lean_ctor_set(v___x_6226_, 3, v___x_6221_);
v___x_6227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6227_, 0, v___x_6226_);
v___x_6228_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6228_, 0, v_userName_6217_);
lean_ctor_set(v___x_6228_, 1, v___x_6221_);
lean_ctor_set(v___x_6228_, 2, v___y_6223_);
lean_ctor_set(v___x_6228_, 3, v___x_6224_);
lean_ctor_set(v___x_6228_, 4, v___x_6221_);
lean_ctor_set(v___x_6228_, 5, v___x_6221_);
lean_ctor_set(v___x_6228_, 6, v___x_6227_);
lean_ctor_set(v___x_6228_, 7, v___x_6221_);
v___x_6229_ = ((size_t)1ULL);
v___x_6230_ = lean_usize_add(v_i_6213_, v___x_6229_);
v___x_6231_ = lean_array_uset(v_bs_x27_6220_, v_i_6213_, v___x_6228_);
v_i_6213_ = v___x_6230_;
v_bs_6214_ = v___x_6231_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6243_, lean_object* v_uri_6244_, lean_object* v_pos_6245_, lean_object* v_sz_6246_, lean_object* v_i_6247_, lean_object* v_bs_6248_){
_start:
{
size_t v_sz_boxed_6249_; size_t v_i_boxed_6250_; lean_object* v_res_6251_; 
v_sz_boxed_6249_ = lean_unbox_usize(v_sz_6246_);
lean_dec(v_sz_6246_);
v_i_boxed_6250_ = lean_unbox_usize(v_i_6247_);
lean_dec(v_i_6247_);
v_res_6251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6243_, v_uri_6244_, v_pos_6245_, v_sz_boxed_6249_, v_i_boxed_6250_, v_bs_6248_);
return v_res_6251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t v___x_6252_, lean_object* v_completionInfoPos_6253_, lean_object* v_uri_6254_, lean_object* v_pos_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_, lean_object* v___y_6258_, lean_object* v___y_6259_){
_start:
{
lean_object* v___x_6261_; 
v___x_6261_ = l_Lean_Elab_Tactic_Doc_allTacticDocs(v___x_6252_, v___y_6256_, v___y_6257_, v___y_6258_, v___y_6259_);
if (lean_obj_tag(v___x_6261_) == 0)
{
lean_object* v_a_6262_; lean_object* v___x_6264_; uint8_t v_isShared_6265_; uint8_t v_isSharedCheck_6272_; 
v_a_6262_ = lean_ctor_get(v___x_6261_, 0);
v_isSharedCheck_6272_ = !lean_is_exclusive(v___x_6261_);
if (v_isSharedCheck_6272_ == 0)
{
v___x_6264_ = v___x_6261_;
v_isShared_6265_ = v_isSharedCheck_6272_;
goto v_resetjp_6263_;
}
else
{
lean_inc(v_a_6262_);
lean_dec(v___x_6261_);
v___x_6264_ = lean_box(0);
v_isShared_6265_ = v_isSharedCheck_6272_;
goto v_resetjp_6263_;
}
v_resetjp_6263_:
{
size_t v_sz_6266_; size_t v___x_6267_; lean_object* v___x_6268_; lean_object* v___x_6270_; 
v_sz_6266_ = lean_array_size(v_a_6262_);
v___x_6267_ = ((size_t)0ULL);
v___x_6268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6253_, v_uri_6254_, v_pos_6255_, v_sz_6266_, v___x_6267_, v_a_6262_);
if (v_isShared_6265_ == 0)
{
lean_ctor_set(v___x_6264_, 0, v___x_6268_);
v___x_6270_ = v___x_6264_;
goto v_reusejp_6269_;
}
else
{
lean_object* v_reuseFailAlloc_6271_; 
v_reuseFailAlloc_6271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6271_, 0, v___x_6268_);
v___x_6270_ = v_reuseFailAlloc_6271_;
goto v_reusejp_6269_;
}
v_reusejp_6269_:
{
return v___x_6270_;
}
}
}
else
{
lean_object* v_a_6273_; lean_object* v___x_6275_; uint8_t v_isShared_6276_; uint8_t v_isSharedCheck_6280_; 
lean_dec_ref(v_pos_6255_);
lean_dec_ref(v_uri_6254_);
lean_dec(v_completionInfoPos_6253_);
v_a_6273_ = lean_ctor_get(v___x_6261_, 0);
v_isSharedCheck_6280_ = !lean_is_exclusive(v___x_6261_);
if (v_isSharedCheck_6280_ == 0)
{
v___x_6275_ = v___x_6261_;
v_isShared_6276_ = v_isSharedCheck_6280_;
goto v_resetjp_6274_;
}
else
{
lean_inc(v_a_6273_);
lean_dec(v___x_6261_);
v___x_6275_ = lean_box(0);
v_isShared_6276_ = v_isSharedCheck_6280_;
goto v_resetjp_6274_;
}
v_resetjp_6274_:
{
lean_object* v___x_6278_; 
if (v_isShared_6276_ == 0)
{
v___x_6278_ = v___x_6275_;
goto v_reusejp_6277_;
}
else
{
lean_object* v_reuseFailAlloc_6279_; 
v_reuseFailAlloc_6279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6279_, 0, v_a_6273_);
v___x_6278_ = v_reuseFailAlloc_6279_;
goto v_reusejp_6277_;
}
v_reusejp_6277_:
{
return v___x_6278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object* v___x_6281_, lean_object* v_completionInfoPos_6282_, lean_object* v_uri_6283_, lean_object* v_pos_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_){
_start:
{
uint8_t v___x_494__boxed_6290_; lean_object* v_res_6291_; 
v___x_494__boxed_6290_ = lean_unbox(v___x_6281_);
v_res_6291_ = l_Lean_Server_Completion_tacticCompletion___lam__0(v___x_494__boxed_6290_, v_completionInfoPos_6282_, v_uri_6283_, v_pos_6284_, v___y_6285_, v___y_6286_, v___y_6287_, v___y_6288_);
lean_dec(v___y_6288_);
lean_dec_ref(v___y_6287_);
lean_dec(v___y_6286_);
lean_dec_ref(v___y_6285_);
return v_res_6291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object* v_uri_6292_, lean_object* v_pos_6293_, lean_object* v_completionInfoPos_6294_, lean_object* v_ctx_6295_){
_start:
{
lean_object* v___x_6297_; uint8_t v___x_6298_; lean_object* v___x_6299_; lean_object* v___f_6300_; lean_object* v___x_6301_; 
v___x_6297_ = l_Lean_LocalContext_empty;
v___x_6298_ = 0;
v___x_6299_ = lean_box(v___x_6298_);
v___f_6300_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_tacticCompletion___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6300_, 0, v___x_6299_);
lean_closure_set(v___f_6300_, 1, v_completionInfoPos_6294_);
lean_closure_set(v___f_6300_, 2, v_uri_6292_);
lean_closure_set(v___f_6300_, 3, v_pos_6293_);
v___x_6301_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6295_, v___x_6297_, v___f_6300_);
return v___x_6301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object* v_uri_6302_, lean_object* v_pos_6303_, lean_object* v_completionInfoPos_6304_, lean_object* v_ctx_6305_, lean_object* v_a_6306_){
_start:
{
lean_object* v_res_6307_; 
v_res_6307_ = l_Lean_Server_Completion_tacticCompletion(v_uri_6302_, v_pos_6303_, v_completionInfoPos_6304_, v_ctx_6305_);
return v_res_6307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object* v_a_6308_, lean_object* v_b_6309_){
_start:
{
lean_object* v_array_6310_; lean_object* v_start_6311_; lean_object* v_stop_6312_; lean_object* v___x_6314_; uint8_t v_isShared_6315_; uint8_t v_isSharedCheck_6325_; 
v_array_6310_ = lean_ctor_get(v_a_6308_, 0);
v_start_6311_ = lean_ctor_get(v_a_6308_, 1);
v_stop_6312_ = lean_ctor_get(v_a_6308_, 2);
v_isSharedCheck_6325_ = !lean_is_exclusive(v_a_6308_);
if (v_isSharedCheck_6325_ == 0)
{
v___x_6314_ = v_a_6308_;
v_isShared_6315_ = v_isSharedCheck_6325_;
goto v_resetjp_6313_;
}
else
{
lean_inc(v_stop_6312_);
lean_inc(v_start_6311_);
lean_inc(v_array_6310_);
lean_dec(v_a_6308_);
v___x_6314_ = lean_box(0);
v_isShared_6315_ = v_isSharedCheck_6325_;
goto v_resetjp_6313_;
}
v_resetjp_6313_:
{
uint8_t v___x_6316_; 
v___x_6316_ = lean_nat_dec_lt(v_start_6311_, v_stop_6312_);
if (v___x_6316_ == 0)
{
lean_del_object(v___x_6314_);
lean_dec(v_stop_6312_);
lean_dec(v_start_6311_);
lean_dec_ref(v_array_6310_);
return v_b_6309_;
}
else
{
lean_object* v___x_6317_; lean_object* v___x_6318_; lean_object* v___x_6320_; 
v___x_6317_ = lean_unsigned_to_nat(1u);
v___x_6318_ = lean_nat_add(v_start_6311_, v___x_6317_);
lean_inc_ref(v_array_6310_);
if (v_isShared_6315_ == 0)
{
lean_ctor_set(v___x_6314_, 1, v___x_6318_);
v___x_6320_ = v___x_6314_;
goto v_reusejp_6319_;
}
else
{
lean_object* v_reuseFailAlloc_6324_; 
v_reuseFailAlloc_6324_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6324_, 0, v_array_6310_);
lean_ctor_set(v_reuseFailAlloc_6324_, 1, v___x_6318_);
lean_ctor_set(v_reuseFailAlloc_6324_, 2, v_stop_6312_);
v___x_6320_ = v_reuseFailAlloc_6324_;
goto v_reusejp_6319_;
}
v_reusejp_6319_:
{
lean_object* v___x_6321_; lean_object* v___x_6322_; 
v___x_6321_ = lean_array_fget(v_array_6310_, v_start_6311_);
lean_dec(v_start_6311_);
lean_dec_ref(v_array_6310_);
v___x_6322_ = lean_array_push(v_b_6309_, v___x_6321_);
v_a_6308_ = v___x_6320_;
v_b_6309_ = v___x_6322_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object* v_scopeNames_6328_, lean_object* v_idx_6329_){
_start:
{
lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; 
v___x_6330_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_6331_ = lean_array_get_size(v_scopeNames_6328_);
v___x_6332_ = l_Array_toSubarray___redArg(v_scopeNames_6328_, v_idx_6329_, v___x_6331_);
v___x_6333_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___x_6334_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v___x_6332_, v___x_6333_);
v___x_6335_ = lean_array_to_list(v___x_6334_);
v___x_6336_ = l_String_intercalate(v___x_6330_, v___x_6335_);
return v___x_6336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object* v_inst_6337_, lean_object* v_R_6338_, lean_object* v_a_6339_, lean_object* v_b_6340_){
_start:
{
lean_object* v___x_6341_; 
v___x_6341_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v_a_6339_, v_b_6340_);
return v___x_6341_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object* v_upperBound_6342_, lean_object* v_next_6343_, lean_object* v_scopeNames_6344_, lean_object* v_idComponents_6345_, lean_object* v_a_6346_, uint8_t v_b_6347_){
_start:
{
uint8_t v___x_6348_; 
v___x_6348_ = lean_nat_dec_lt(v_a_6346_, v_upperBound_6342_);
if (v___x_6348_ == 0)
{
lean_dec(v_a_6346_);
return v_b_6347_;
}
else
{
uint8_t v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; uint8_t v___x_6352_; 
v___x_6349_ = 0;
v___x_6350_ = lean_nat_add(v_next_6343_, v_a_6346_);
v___x_6351_ = lean_array_get_size(v_scopeNames_6344_);
v___x_6352_ = lean_nat_dec_lt(v___x_6350_, v___x_6351_);
if (v___x_6352_ == 0)
{
lean_dec(v___x_6350_);
lean_dec(v_a_6346_);
return v___x_6349_;
}
else
{
lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; uint8_t v___x_6356_; 
v___x_6353_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v___x_6354_ = lean_array_fget_borrowed(v_scopeNames_6344_, v___x_6350_);
lean_dec(v___x_6350_);
v___x_6355_ = lean_array_get_borrowed(v___x_6353_, v_idComponents_6345_, v_a_6346_);
v___x_6356_ = lean_string_dec_eq(v___x_6355_, v___x_6354_);
if (v___x_6356_ == 0)
{
lean_dec(v_a_6346_);
return v___x_6349_;
}
else
{
lean_object* v___x_6357_; lean_object* v___x_6358_; 
v___x_6357_ = lean_unsigned_to_nat(1u);
v___x_6358_ = lean_nat_add(v_a_6346_, v___x_6357_);
lean_dec(v_a_6346_);
v_a_6346_ = v___x_6358_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object* v_upperBound_6360_, lean_object* v_next_6361_, lean_object* v_scopeNames_6362_, lean_object* v_idComponents_6363_, lean_object* v_a_6364_, lean_object* v_b_6365_){
_start:
{
uint8_t v_b_boxed_6366_; uint8_t v_res_6367_; lean_object* v_r_6368_; 
v_b_boxed_6366_ = lean_unbox(v_b_6365_);
v_res_6367_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6360_, v_next_6361_, v_scopeNames_6362_, v_idComponents_6363_, v_a_6364_, v_b_boxed_6366_);
lean_dec_ref(v_idComponents_6363_);
lean_dec_ref(v_scopeNames_6362_);
lean_dec(v_next_6361_);
lean_dec(v_upperBound_6360_);
v_r_6368_ = lean_box(v_res_6367_);
return v_r_6368_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object* v_upperBound_6369_, lean_object* v_idComponents_6370_, lean_object* v_scopeNames_6371_, lean_object* v_a_6372_, lean_object* v_b_6373_){
_start:
{
lean_object* v_a_6375_; uint8_t v___x_6379_; 
v___x_6379_ = lean_nat_dec_lt(v_a_6372_, v_upperBound_6369_);
if (v___x_6379_ == 0)
{
lean_dec(v_a_6372_);
lean_dec_ref(v_scopeNames_6371_);
return v_b_6373_;
}
else
{
lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; uint8_t v___x_6383_; 
v___x_6380_ = lean_array_get_size(v_idComponents_6370_);
v___x_6381_ = lean_unsigned_to_nat(1u);
v___x_6382_ = lean_nat_sub(v___x_6380_, v___x_6381_);
v___x_6383_ = lean_nat_dec_lt(v___x_6382_, v___x_6380_);
if (v___x_6383_ == 0)
{
lean_object* v___x_6384_; lean_object* v___x_6385_; 
lean_dec(v___x_6382_);
lean_inc(v_a_6372_);
lean_inc_ref(v_scopeNames_6371_);
v___x_6384_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6371_, v_a_6372_);
v___x_6385_ = lean_array_push(v_b_6373_, v___x_6384_);
v_a_6375_ = v___x_6385_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; uint8_t v___x_6389_; 
v___x_6386_ = lean_nat_add(v_a_6372_, v___x_6380_);
v___x_6387_ = lean_nat_sub(v___x_6386_, v___x_6381_);
lean_dec(v___x_6386_);
v___x_6388_ = lean_array_get_size(v_scopeNames_6371_);
v___x_6389_ = lean_nat_dec_lt(v___x_6387_, v___x_6388_);
if (v___x_6389_ == 0)
{
lean_dec(v___x_6387_);
lean_dec(v___x_6382_);
v_a_6375_ = v_b_6373_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6390_; lean_object* v___x_6391_; uint8_t v___x_6392_; 
v___x_6390_ = lean_array_fget_borrowed(v_idComponents_6370_, v___x_6382_);
v___x_6391_ = lean_array_fget_borrowed(v_scopeNames_6371_, v___x_6387_);
v___x_6392_ = l_Lean_String_charactersIn(v___x_6390_, v___x_6391_);
if (v___x_6392_ == 0)
{
lean_dec(v___x_6387_);
lean_dec(v___x_6382_);
v_a_6375_ = v_b_6373_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6393_; uint8_t v___x_6394_; 
v___x_6393_ = lean_unsigned_to_nat(0u);
v___x_6394_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v___x_6382_, v_a_6372_, v_scopeNames_6371_, v_idComponents_6370_, v___x_6393_, v___x_6379_);
lean_dec(v___x_6382_);
if (v___x_6394_ == 0)
{
lean_dec(v___x_6387_);
v_a_6375_ = v_b_6373_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6395_; lean_object* v___x_6396_; 
lean_inc_ref(v_scopeNames_6371_);
v___x_6395_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6371_, v___x_6387_);
v___x_6396_ = lean_array_push(v_b_6373_, v___x_6395_);
v_a_6375_ = v___x_6396_;
goto v___jp_6374_;
}
}
}
}
}
v___jp_6374_:
{
lean_object* v___x_6376_; lean_object* v___x_6377_; 
v___x_6376_ = lean_unsigned_to_nat(1u);
v___x_6377_ = lean_nat_add(v_a_6372_, v___x_6376_);
lean_dec(v_a_6372_);
v_a_6372_ = v___x_6377_;
v_b_6373_ = v_a_6375_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object* v_upperBound_6397_, lean_object* v_idComponents_6398_, lean_object* v_scopeNames_6399_, lean_object* v_a_6400_, lean_object* v_b_6401_){
_start:
{
lean_object* v_res_6402_; 
v_res_6402_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6397_, v_idComponents_6398_, v_scopeNames_6399_, v_a_6400_, v_b_6401_);
lean_dec_ref(v_idComponents_6398_);
lean_dec(v_upperBound_6397_);
return v_res_6402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object* v_idComponents_6403_, lean_object* v_scopeNames_6404_){
_start:
{
lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v_r_6407_; lean_object* v___x_6408_; 
v___x_6405_ = lean_unsigned_to_nat(0u);
v___x_6406_ = lean_array_get_size(v_scopeNames_6404_);
v_r_6407_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___x_6408_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v___x_6406_, v_idComponents_6403_, v_scopeNames_6404_, v___x_6405_, v_r_6407_);
return v___x_6408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object* v_idComponents_6409_, lean_object* v_scopeNames_6410_){
_start:
{
lean_object* v_res_6411_; 
v_res_6411_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6409_, v_scopeNames_6410_);
lean_dec_ref(v_idComponents_6409_);
return v_res_6411_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object* v_upperBound_6412_, lean_object* v_next_6413_, lean_object* v_scopeNames_6414_, lean_object* v_idComponents_6415_, lean_object* v_inst_6416_, lean_object* v_R_6417_, lean_object* v_a_6418_, uint8_t v_b_6419_, lean_object* v_c_6420_){
_start:
{
uint8_t v___x_6421_; 
v___x_6421_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6412_, v_next_6413_, v_scopeNames_6414_, v_idComponents_6415_, v_a_6418_, v_b_6419_);
return v___x_6421_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object* v_upperBound_6422_, lean_object* v_next_6423_, lean_object* v_scopeNames_6424_, lean_object* v_idComponents_6425_, lean_object* v_inst_6426_, lean_object* v_R_6427_, lean_object* v_a_6428_, lean_object* v_b_6429_, lean_object* v_c_6430_){
_start:
{
uint8_t v_b_boxed_6431_; uint8_t v_res_6432_; lean_object* v_r_6433_; 
v_b_boxed_6431_ = lean_unbox(v_b_6429_);
v_res_6432_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(v_upperBound_6422_, v_next_6423_, v_scopeNames_6424_, v_idComponents_6425_, v_inst_6426_, v_R_6427_, v_a_6428_, v_b_boxed_6431_, v_c_6430_);
lean_dec_ref(v_idComponents_6425_);
lean_dec_ref(v_scopeNames_6424_);
lean_dec(v_next_6423_);
lean_dec(v_upperBound_6422_);
v_r_6433_ = lean_box(v_res_6432_);
return v_r_6433_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object* v_upperBound_6434_, lean_object* v_idComponents_6435_, lean_object* v_scopeNames_6436_, lean_object* v_inst_6437_, lean_object* v_R_6438_, lean_object* v_a_6439_, lean_object* v_b_6440_, lean_object* v_c_6441_){
_start:
{
lean_object* v___x_6442_; 
v___x_6442_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6434_, v_idComponents_6435_, v_scopeNames_6436_, v_a_6439_, v_b_6440_);
return v___x_6442_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object* v_upperBound_6443_, lean_object* v_idComponents_6444_, lean_object* v_scopeNames_6445_, lean_object* v_inst_6446_, lean_object* v_R_6447_, lean_object* v_a_6448_, lean_object* v_b_6449_, lean_object* v_c_6450_){
_start:
{
lean_object* v_res_6451_; 
v_res_6451_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(v_upperBound_6443_, v_idComponents_6444_, v_scopeNames_6445_, v_inst_6446_, v_R_6447_, v_a_6448_, v_b_6449_, v_c_6450_);
lean_dec_ref(v_idComponents_6444_);
lean_dec(v_upperBound_6443_);
return v_res_6451_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object* v_x_6452_){
_start:
{
lean_object* v___x_6453_; lean_object* v___x_6454_; uint8_t v___x_6455_; 
v___x_6453_ = lean_string_utf8_byte_size(v_x_6452_);
v___x_6454_ = lean_unsigned_to_nat(0u);
v___x_6455_ = lean_nat_dec_eq(v___x_6453_, v___x_6454_);
if (v___x_6455_ == 0)
{
uint8_t v___x_6456_; 
v___x_6456_ = 1;
return v___x_6456_;
}
else
{
uint8_t v___x_6457_; 
v___x_6457_ = 0;
return v___x_6457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object* v_x_6458_){
_start:
{
uint8_t v_res_6459_; lean_object* v_r_6460_; 
v_res_6459_ = l_Lean_Server_Completion_endSectionCompletion___lam__0(v_x_6458_);
lean_dec_ref(v_x_6458_);
v_r_6460_ = lean_box(v_res_6459_);
return v_r_6460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t v_sz_6461_, size_t v_i_6462_, lean_object* v_bs_6463_){
_start:
{
uint8_t v___x_6464_; 
v___x_6464_ = lean_usize_dec_lt(v_i_6462_, v_sz_6461_);
if (v___x_6464_ == 0)
{
return v_bs_6463_;
}
else
{
lean_object* v_v_6465_; lean_object* v___x_6466_; lean_object* v_bs_x27_6467_; lean_object* v___x_6468_; size_t v___x_6469_; size_t v___x_6470_; lean_object* v___x_6471_; 
v_v_6465_ = lean_array_uget(v_bs_6463_, v_i_6462_);
v___x_6466_ = lean_unsigned_to_nat(0u);
v_bs_x27_6467_ = lean_array_uset(v_bs_6463_, v_i_6462_, v___x_6466_);
v___x_6468_ = l_Lean_Name_toString(v_v_6465_, v___x_6464_);
v___x_6469_ = ((size_t)1ULL);
v___x_6470_ = lean_usize_add(v_i_6462_, v___x_6469_);
v___x_6471_ = lean_array_uset(v_bs_x27_6467_, v_i_6462_, v___x_6468_);
v_i_6462_ = v___x_6470_;
v_bs_6463_ = v___x_6471_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object* v_sz_6473_, lean_object* v_i_6474_, lean_object* v_bs_6475_){
_start:
{
size_t v_sz_boxed_6476_; size_t v_i_boxed_6477_; lean_object* v_res_6478_; 
v_sz_boxed_6476_ = lean_unbox_usize(v_sz_6473_);
lean_dec(v_sz_6473_);
v_i_boxed_6477_ = lean_unbox_usize(v_i_6474_);
lean_dec(v_i_6474_);
v_res_6478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_boxed_6476_, v_i_boxed_6477_, v_bs_6475_);
return v_res_6478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object* v_completionInfoPos_6479_, lean_object* v_uri_6480_, lean_object* v_pos_6481_, size_t v_sz_6482_, size_t v_i_6483_, lean_object* v_bs_6484_){
_start:
{
uint8_t v___x_6485_; 
v___x_6485_ = lean_usize_dec_lt(v_i_6483_, v_sz_6482_);
if (v___x_6485_ == 0)
{
lean_dec_ref(v_pos_6481_);
lean_dec_ref(v_uri_6480_);
lean_dec(v_completionInfoPos_6479_);
return v_bs_6484_;
}
else
{
lean_object* v_v_6486_; lean_object* v___x_6487_; lean_object* v_bs_x27_6488_; lean_object* v___x_6489_; lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v___x_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; size_t v___x_6495_; size_t v___x_6496_; lean_object* v___x_6497_; 
v_v_6486_ = lean_array_uget(v_bs_6484_, v_i_6483_);
v___x_6487_ = lean_unsigned_to_nat(0u);
v_bs_x27_6488_ = lean_array_uset(v_bs_6484_, v_i_6483_, v___x_6487_);
v___x_6489_ = lean_box(0);
v___x_6490_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2));
lean_inc(v_completionInfoPos_6479_);
v___x_6491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6491_, 0, v_completionInfoPos_6479_);
lean_inc_ref(v_pos_6481_);
lean_inc_ref(v_uri_6480_);
v___x_6492_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6492_, 0, v_uri_6480_);
lean_ctor_set(v___x_6492_, 1, v_pos_6481_);
lean_ctor_set(v___x_6492_, 2, v___x_6491_);
lean_ctor_set(v___x_6492_, 3, v___x_6489_);
v___x_6493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6493_, 0, v___x_6492_);
v___x_6494_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6494_, 0, v_v_6486_);
lean_ctor_set(v___x_6494_, 1, v___x_6489_);
lean_ctor_set(v___x_6494_, 2, v___x_6489_);
lean_ctor_set(v___x_6494_, 3, v___x_6490_);
lean_ctor_set(v___x_6494_, 4, v___x_6489_);
lean_ctor_set(v___x_6494_, 5, v___x_6489_);
lean_ctor_set(v___x_6494_, 6, v___x_6493_);
lean_ctor_set(v___x_6494_, 7, v___x_6489_);
v___x_6495_ = ((size_t)1ULL);
v___x_6496_ = lean_usize_add(v_i_6483_, v___x_6495_);
v___x_6497_ = lean_array_uset(v_bs_x27_6488_, v_i_6483_, v___x_6494_);
v_i_6483_ = v___x_6496_;
v_bs_6484_ = v___x_6497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6499_, lean_object* v_uri_6500_, lean_object* v_pos_6501_, lean_object* v_sz_6502_, lean_object* v_i_6503_, lean_object* v_bs_6504_){
_start:
{
size_t v_sz_boxed_6505_; size_t v_i_boxed_6506_; lean_object* v_res_6507_; 
v_sz_boxed_6505_ = lean_unbox_usize(v_sz_6502_);
lean_dec(v_sz_6502_);
v_i_boxed_6506_ = lean_unbox_usize(v_i_6503_);
lean_dec(v_i_6503_);
v_res_6507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6499_, v_uri_6500_, v_pos_6501_, v_sz_boxed_6505_, v_i_boxed_6506_, v_bs_6504_);
return v_res_6507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object* v_uri_6509_, lean_object* v_pos_6510_, lean_object* v_completionInfoPos_6511_, lean_object* v_id_x3f_6512_, uint8_t v_danglingDot_6513_, lean_object* v_scopeNames_6514_){
_start:
{
lean_object* v___f_6516_; lean_object* v_idComponents_6518_; lean_object* v___y_6529_; 
v___f_6516_ = ((lean_object*)(l_Lean_Server_Completion_endSectionCompletion___closed__0));
if (lean_obj_tag(v_id_x3f_6512_) == 0)
{
lean_object* v___x_6532_; 
v___x_6532_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___y_6529_ = v___x_6532_;
goto v___jp_6528_;
}
else
{
lean_object* v_val_6533_; lean_object* v___x_6534_; lean_object* v___x_6535_; size_t v_sz_6536_; size_t v___x_6537_; lean_object* v___x_6538_; 
v_val_6533_ = lean_ctor_get(v_id_x3f_6512_, 0);
lean_inc(v_val_6533_);
lean_dec_ref_known(v_id_x3f_6512_, 1);
v___x_6534_ = l_Lean_Name_components(v_val_6533_);
v___x_6535_ = lean_array_mk(v___x_6534_);
v_sz_6536_ = lean_array_size(v___x_6535_);
v___x_6537_ = ((size_t)0ULL);
v___x_6538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_6536_, v___x_6537_, v___x_6535_);
v___y_6529_ = v___x_6538_;
goto v___jp_6528_;
}
v___jp_6517_:
{
lean_object* v___x_6519_; lean_object* v___x_6520_; lean_object* v___x_6521_; lean_object* v_scopeNames_6522_; lean_object* v_candidates_6523_; size_t v_sz_6524_; size_t v___x_6525_; lean_object* v___x_6526_; lean_object* v___x_6527_; 
v___x_6519_ = lean_array_mk(v_scopeNames_6514_);
v___x_6520_ = lean_array_pop(v___x_6519_);
v___x_6521_ = l_Array_takeWhile___redArg(v___f_6516_, v___x_6520_);
lean_dec_ref(v___x_6520_);
v_scopeNames_6522_ = l_Array_reverse___redArg(v___x_6521_);
v_candidates_6523_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6518_, v_scopeNames_6522_);
lean_dec_ref(v_idComponents_6518_);
v_sz_6524_ = lean_array_size(v_candidates_6523_);
v___x_6525_ = ((size_t)0ULL);
v___x_6526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6511_, v_uri_6509_, v_pos_6510_, v_sz_6524_, v___x_6525_, v_candidates_6523_);
v___x_6527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6527_, 0, v___x_6526_);
return v___x_6527_;
}
v___jp_6528_:
{
if (v_danglingDot_6513_ == 0)
{
v_idComponents_6518_ = v___y_6529_;
goto v___jp_6517_;
}
else
{
lean_object* v___x_6530_; lean_object* v_idComponents_6531_; 
v___x_6530_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_idComponents_6531_ = lean_array_push(v___y_6529_, v___x_6530_);
v_idComponents_6518_ = v_idComponents_6531_;
goto v___jp_6517_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object* v_uri_6539_, lean_object* v_pos_6540_, lean_object* v_completionInfoPos_6541_, lean_object* v_id_x3f_6542_, lean_object* v_danglingDot_6543_, lean_object* v_scopeNames_6544_, lean_object* v_a_6545_){
_start:
{
uint8_t v_danglingDot_boxed_6546_; lean_object* v_res_6547_; 
v_danglingDot_boxed_6546_ = lean_unbox(v_danglingDot_6543_);
v_res_6547_ = l_Lean_Server_Completion_endSectionCompletion(v_uri_6539_, v_pos_6540_, v_completionInfoPos_6541_, v_id_x3f_6542_, v_danglingDot_boxed_6546_, v_scopeNames_6544_);
return v_res_6547_;
}
}
lean_object* runtime_initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_RequestCancellation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* initialize_Lean_Server_RequestCancellation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionCollectors(builtin);
}
#ifdef __cplusplus
}
#endif
