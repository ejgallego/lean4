// Lean compiler output
// Module: Lean.Linter.Coe
// Imports: public import Lean.Elab.Command public import Lean.Elab.InfoTree.Util import Lean.Linter.Init import all Lean.Elab.Term.TermElabM
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_Elab_Term_instImpl_00___x40_Lean_Elab_Term_TermElabM_2377040249____hygCtx___hyg_9_;
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Term_TermElabM_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Term_TermElabM_3465893884____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Linter_deprecatedAttr;
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Term_throwErrorIfErrors_spec__0_spec__1_spec__2(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
uint8_t l_List_elem___at___00Lean_Elab_Term_levelMVarToParam_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__0_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__0_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__0_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__1_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "deprecatedCoercions"};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__1_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__1_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__2_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__0_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__2_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__2_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__1_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(225, 120, 31, 12, 27, 111, 143, 243)}};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__2_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__2_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__3_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Validate that no deprecated coercions are used."};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__3_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__3_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__4_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__3_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__4_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__4_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__5_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__5_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__5_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__6_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__6_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__6_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__7_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Coe"};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__7_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__7_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__5_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__6_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__7_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(104, 245, 251, 188, 163, 69, 36, 187)}};
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__0_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(21, 194, 173, 54, 161, 152, 189, 121)}};
static const lean_ctor_object l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__1_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(154, 196, 227, 214, 191, 242, 190, 69)}};
static const lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_linter_deprecatedCoercions;
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_Coe_coercionsBannedInCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optionCoe"};
static const lean_object* l_Lean_Linter_Coe_coercionsBannedInCore___closed__0 = (const lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__0_value;
static const lean_ctor_object l_Lean_Linter_Coe_coercionsBannedInCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 177, 38, 83, 111, 228, 202, 47)}};
static const lean_object* l_Lean_Linter_Coe_coercionsBannedInCore___closed__1 = (const lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__1_value;
static const lean_string_object l_Lean_Linter_Coe_coercionsBannedInCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "instCoeSubarrayArray"};
static const lean_object* l_Lean_Linter_Coe_coercionsBannedInCore___closed__2 = (const lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__2_value;
static const lean_ctor_object l_Lean_Linter_Coe_coercionsBannedInCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(110, 140, 157, 8, 27, 14, 210, 57)}};
static const lean_object* l_Lean_Linter_Coe_coercionsBannedInCore___closed__3 = (const lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__3_value;
static const lean_array_object l_Lean_Linter_Coe_coercionsBannedInCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__1_value),((lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__3_value)}};
static const lean_object* l_Lean_Linter_Coe_coercionsBannedInCore___closed__4 = (const lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_Coe_coercionsBannedInCore = (const lean_object*)&l_Lean_Linter_Coe_coercionsBannedInCore___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Elab.InfoTree.Util.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.InfoTree.Util"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4_spec__5(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "deprecatedAttr"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__5_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__6_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1_value_aux_1),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 246, 23, 143, 159, 138, 155, 162)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "This term uses the deprecated coercion `"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__3;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__4_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__5;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "This term uses the coercion `"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__7;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "`, which is banned in Lean's core library."};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__9;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elab"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__10_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "linterCoe"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__11_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(209, 122, 173, 243, 24, 185, 201, 144)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__12_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(185, 49, 173, 29, 145, 193, 214, 13)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__12_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Init"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__13_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(152, 102, 12, 179, 200, 220, 30, 26)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__14_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__15 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__15_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__16 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__16_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__17 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__17_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__14_value),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__17_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__18 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__16(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_coeLinter___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_coeLinter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_Coe_coeLinter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_Coe_coeLinter___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Coe_coeLinter___closed__0 = (const lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__0_value;
static const lean_string_object l_Lean_Linter_Coe_coeLinter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "coeLinter"};
static const lean_object* l_Lean_Linter_Coe_coeLinter___closed__1 = (const lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__1_value;
static const lean_ctor_object l_Lean_Linter_Coe_coeLinter___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__5_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Coe_coeLinter___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__6_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_Coe_coeLinter___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__7_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(104, 245, 251, 188, 163, 69, 36, 187)}};
static const lean_ctor_object l_Lean_Linter_Coe_coeLinter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__2_value_aux_2),((lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 112, 251, 217, 194, 245, 186, 89)}};
static const lean_object* l_Lean_Linter_Coe_coeLinter___closed__2 = (const lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__2_value;
static const lean_ctor_object l_Lean_Linter_Coe_coeLinter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__0_value),((lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__2_value)}};
static const lean_object* l_Lean_Linter_Coe_coeLinter___closed__3 = (const lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_Coe_coeLinter = (const lean_object*)&l_Lean_Linter_Coe_coeLinter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_650813316____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_650813316____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_22_ = ((lean_object*)(l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__2_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_));
v___x_23_ = ((lean_object*)(l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__4_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_));
v___x_24_ = ((lean_object*)(l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn___closed__8_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_));
v___x_25_ = l_Lean_Option_register___at___00__private_Lean_Elab_Term_TermElabM_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Term_TermElabM_3465893884____hygCtx___hyg_4__spec__0(v___x_22_, v___x_23_, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4____boxed(lean_object* v_a_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_();
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg___lam__0(lean_object* v_toPure_28_, lean_object* v_____do__lift_29_){
_start:
{
lean_object* v___x_30_; lean_object* v_name_31_; lean_object* v_map_32_; uint8_t v___x_33_; lean_object* v___x_34_; 
v___x_30_ = l_Lean_Linter_Coe_linter_deprecatedCoercions;
v_name_31_ = lean_ctor_get(v___x_30_, 0);
v_map_32_ = lean_ctor_get(v_____do__lift_29_, 0);
v___x_33_ = 1;
v___x_34_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_32_, v_name_31_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_box(v___x_33_);
v___x_36_ = lean_apply_2(v_toPure_28_, lean_box(0), v___x_35_);
return v___x_36_;
}
else
{
lean_object* v_val_37_; 
v_val_37_ = lean_ctor_get(v___x_34_, 0);
lean_inc(v_val_37_);
lean_dec_ref_known(v___x_34_, 1);
if (lean_obj_tag(v_val_37_) == 1)
{
uint8_t v_v_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v_v_38_ = lean_ctor_get_uint8(v_val_37_, 0);
lean_dec_ref_known(v_val_37_, 0);
v___x_39_ = lean_box(v_v_38_);
v___x_40_ = lean_apply_2(v_toPure_28_, lean_box(0), v___x_39_);
return v___x_40_;
}
else
{
lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec(v_val_37_);
v___x_41_ = lean_box(v___x_33_);
v___x_42_ = lean_apply_2(v_toPure_28_, lean_box(0), v___x_41_);
return v___x_42_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg___lam__0___boxed(lean_object* v_toPure_43_, lean_object* v_____do__lift_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg___lam__0(v_toPure_43_, v_____do__lift_44_);
lean_dec_ref(v_____do__lift_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg(lean_object* v_inst_46_, lean_object* v_inst_47_){
_start:
{
lean_object* v_toApplicative_48_; lean_object* v_toBind_49_; lean_object* v_getOptions_50_; lean_object* v_toPure_51_; lean_object* v___f_52_; lean_object* v___x_53_; 
v_toApplicative_48_ = lean_ctor_get(v_inst_46_, 0);
lean_inc_ref(v_toApplicative_48_);
v_toBind_49_ = lean_ctor_get(v_inst_46_, 1);
lean_inc(v_toBind_49_);
lean_dec_ref(v_inst_46_);
v_getOptions_50_ = lean_ctor_get(v_inst_47_, 0);
lean_inc(v_getOptions_50_);
lean_dec_ref(v_inst_47_);
v_toPure_51_ = lean_ctor_get(v_toApplicative_48_, 1);
lean_inc(v_toPure_51_);
lean_dec_ref(v_toApplicative_48_);
v___f_52_ = lean_alloc_closure((void*)(l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_52_, 0, v_toPure_51_);
v___x_53_ = lean_apply_4(v_toBind_49_, lean_box(0), lean_box(0), v_getOptions_50_, v___f_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions(lean_object* v_m_54_, lean_object* v_inst_55_, lean_object* v_inst_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Linter_Coe_shouldWarnOnDeprecatedCoercions___redArg(v_inst_55_, v_inst_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___redArg(lean_object* v___y_71_){
_start:
{
lean_object* v___x_73_; lean_object* v_env_74_; lean_object* v___x_75_; lean_object* v_mainModule_76_; lean_object* v___x_77_; 
v___x_73_ = lean_st_ref_get(v___y_71_);
v_env_74_ = lean_ctor_get(v___x_73_, 0);
lean_inc_ref(v_env_74_);
lean_dec(v___x_73_);
v___x_75_ = l_Lean_Environment_header(v_env_74_);
lean_dec_ref(v_env_74_);
v_mainModule_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_mainModule_76_);
lean_dec_ref(v___x_75_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v_mainModule_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___redArg___boxed(lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___redArg(v___y_78_);
lean_dec(v___y_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0(lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___redArg(v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___boxed(lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0(v___y_85_, v___y_86_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___redArg(lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; lean_object* v_infoState_92_; lean_object* v_trees_93_; lean_object* v___x_94_; 
v___x_91_ = lean_st_ref_get(v___y_89_);
v_infoState_92_ = lean_ctor_get(v___x_91_, 8);
lean_inc_ref(v_infoState_92_);
lean_dec(v___x_91_);
v_trees_93_ = lean_ctor_get(v_infoState_92_, 2);
lean_inc_ref(v_trees_93_);
lean_dec_ref(v_infoState_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v_trees_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___redArg___boxed(lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___redArg(v___y_95_);
lean_dec(v___y_95_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2(lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___redArg(v___y_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___boxed(lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2(v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_105_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_instMonadEIO___redArg();
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg(lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v_toApplicative_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_146_; 
v___x_113_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__0, &l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__0);
v___x_114_ = l_StateRefT_x27_instMonad___redArg(v___x_113_);
v_toApplicative_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_146_ == 0)
{
lean_object* v_unused_147_; 
v_unused_147_ = lean_ctor_get(v___x_114_, 1);
lean_dec(v_unused_147_);
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_146_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_toApplicative_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_146_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v_toFunctor_119_; lean_object* v_toSeq_120_; lean_object* v_toSeqLeft_121_; lean_object* v_toSeqRight_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_144_; 
v_toFunctor_119_ = lean_ctor_get(v_toApplicative_115_, 0);
v_toSeq_120_ = lean_ctor_get(v_toApplicative_115_, 2);
v_toSeqLeft_121_ = lean_ctor_get(v_toApplicative_115_, 3);
v_toSeqRight_122_ = lean_ctor_get(v_toApplicative_115_, 4);
v_isSharedCheck_144_ = !lean_is_exclusive(v_toApplicative_115_);
if (v_isSharedCheck_144_ == 0)
{
lean_object* v_unused_145_; 
v_unused_145_ = lean_ctor_get(v_toApplicative_115_, 1);
lean_dec(v_unused_145_);
v___x_124_ = v_toApplicative_115_;
v_isShared_125_ = v_isSharedCheck_144_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_toSeqRight_122_);
lean_inc(v_toSeqLeft_121_);
lean_inc(v_toSeq_120_);
lean_inc(v_toFunctor_119_);
lean_dec(v_toApplicative_115_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_144_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___f_126_; lean_object* v___f_127_; lean_object* v___f_128_; lean_object* v___f_129_; lean_object* v___x_130_; lean_object* v___f_131_; lean_object* v___f_132_; lean_object* v___f_133_; lean_object* v___x_135_; 
v___f_126_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__1));
v___f_127_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___closed__2));
lean_inc_ref(v_toFunctor_119_);
v___f_128_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_128_, 0, v_toFunctor_119_);
v___f_129_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_129_, 0, v_toFunctor_119_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___f_128_);
lean_ctor_set(v___x_130_, 1, v___f_129_);
v___f_131_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_131_, 0, v_toSeqRight_122_);
v___f_132_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_132_, 0, v_toSeqLeft_121_);
v___f_133_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_133_, 0, v_toSeq_120_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 4, v___f_131_);
lean_ctor_set(v___x_124_, 3, v___f_132_);
lean_ctor_set(v___x_124_, 2, v___f_133_);
lean_ctor_set(v___x_124_, 1, v___f_126_);
lean_ctor_set(v___x_124_, 0, v___x_130_);
v___x_135_ = v___x_124_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v___f_126_);
lean_ctor_set(v_reuseFailAlloc_143_, 2, v___f_133_);
lean_ctor_set(v_reuseFailAlloc_143_, 3, v___f_132_);
lean_ctor_set(v_reuseFailAlloc_143_, 4, v___f_131_);
v___x_135_ = v_reuseFailAlloc_143_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_137_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___f_127_);
lean_ctor_set(v___x_117_, 0, v___x_135_);
v___x_137_ = v___x_117_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v___f_127_);
v___x_137_ = v_reuseFailAlloc_142_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_8439__overap_140_; lean_object* v___x_141_; 
v___x_138_ = lean_box(0);
v___x_139_ = l_instInhabitedOfMonad___redArg(v___x_137_, v___x_138_);
v___x_8439__overap_140_ = lean_panic_fn_borrowed(v___x_139_, v_msg_109_);
lean_dec(v___x_139_);
lean_inc(v___y_111_);
lean_inc_ref(v___y_110_);
v___x_141_ = lean_apply_3(v___x_8439__overap_140_, v___y_110_, v___y_111_, lean_box(0));
return v___x_141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg___boxed(lean_object* v_msg_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg(v_msg_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
return v_res_152_;
}
}
static lean_object* _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_156_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__2));
v___x_157_ = lean_unsigned_to_nat(21u);
v___x_158_ = lean_unsigned_to_nat(65u);
v___x_159_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__1));
v___x_160_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__0));
v___x_161_ = l_mkPanicMessageWithDecl(v___x_160_, v___x_159_, v___x_158_, v___x_157_, v___x_156_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg(lean_object* v_preNode_162_, lean_object* v_postNode_163_, lean_object* v_x_164_, lean_object* v_x_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
switch(lean_obj_tag(v_x_165_))
{
case 0:
{
lean_object* v_i_169_; lean_object* v_t_170_; lean_object* v___x_171_; 
v_i_169_ = lean_ctor_get(v_x_165_, 0);
lean_inc_ref(v_i_169_);
v_t_170_ = lean_ctor_get(v_x_165_, 1);
lean_inc_ref(v_t_170_);
lean_dec_ref_known(v_x_165_, 2);
v___x_171_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_169_, v_x_164_);
v_x_164_ = v___x_171_;
v_x_165_ = v_t_170_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_164_) == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; 
lean_dec_ref_known(v_x_165_, 2);
lean_dec_ref(v_postNode_163_);
lean_dec_ref(v_preNode_162_);
v___x_173_ = lean_obj_once(&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__3, &l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__3_once, _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___closed__3);
v___x_174_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg(v___x_173_, v___y_166_, v___y_167_);
return v___x_174_;
}
else
{
lean_object* v_i_175_; lean_object* v_children_176_; lean_object* v_val_177_; lean_object* v___x_178_; 
v_i_175_ = lean_ctor_get(v_x_165_, 0);
lean_inc_ref_n(v_i_175_, 2);
v_children_176_ = lean_ctor_get(v_x_165_, 1);
lean_inc_ref_n(v_children_176_, 2);
lean_dec_ref_known(v_x_165_, 2);
v_val_177_ = lean_ctor_get(v_x_164_, 0);
lean_inc_n(v_val_177_, 2);
lean_inc_ref(v_preNode_162_);
lean_inc(v___y_167_);
lean_inc_ref(v___y_166_);
v___x_178_ = lean_apply_6(v_preNode_162_, v_val_177_, v_i_175_, v_children_176_, v___y_166_, v___y_167_, lean_box(0));
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; uint8_t v___x_180_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_178_, 1);
v___x_180_ = lean_unbox(v_a_179_);
lean_dec(v_a_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_205_; 
lean_dec_ref(v_preNode_162_);
v_isSharedCheck_205_ = !lean_is_exclusive(v_x_164_);
if (v_isSharedCheck_205_ == 0)
{
lean_object* v_unused_206_; 
v_unused_206_ = lean_ctor_get(v_x_164_, 0);
lean_dec(v_unused_206_);
v___x_182_ = v_x_164_;
v_isShared_183_ = v_isSharedCheck_205_;
goto v_resetjp_181_;
}
else
{
lean_dec(v_x_164_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_205_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_box(0);
lean_inc(v___y_167_);
lean_inc_ref(v___y_166_);
v___x_185_ = lean_apply_7(v_postNode_163_, v_val_177_, v_i_175_, v_children_176_, v___x_184_, v___y_166_, v___y_167_, lean_box(0));
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_196_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_196_ == 0)
{
v___x_188_ = v___x_185_;
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v_a_186_);
v___x_191_ = v___x_182_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_195_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v___x_191_);
v___x_193_ = v___x_188_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
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
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_del_object(v___x_182_);
v_a_197_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_185_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_185_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
else
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_207_ = l_Lean_Elab_Info_updateContext_x3f(v_x_164_, v_i_175_);
v___x_208_ = l_Lean_PersistentArray_toList___redArg(v_children_176_);
v___x_209_ = lean_box(0);
lean_inc_ref(v_postNode_163_);
v___x_210_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___redArg(v_preNode_162_, v_postNode_163_, v___x_207_, v___x_208_, v___x_209_, v___y_166_, v___y_167_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_212_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___x_210_, 1);
lean_inc(v___y_167_);
lean_inc_ref(v___y_166_);
v___x_212_ = lean_apply_7(v_postNode_163_, v_val_177_, v_i_175_, v_children_176_, v_a_211_, v___y_166_, v___y_167_, lean_box(0));
if (lean_obj_tag(v___x_212_) == 0)
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_221_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_221_ == 0)
{
v___x_215_ = v___x_212_;
v_isShared_216_ = v_isSharedCheck_221_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_212_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_221_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v_a_213_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v___x_217_);
v___x_219_ = v___x_215_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
v_a_222_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_212_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_212_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec(v_val_177_);
lean_dec_ref(v_children_176_);
lean_dec_ref(v_i_175_);
lean_dec_ref(v_postNode_163_);
v_a_230_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_210_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_210_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_dec(v_val_177_);
lean_dec_ref(v_children_176_);
lean_dec_ref_known(v_x_164_, 1);
lean_dec_ref(v_i_175_);
lean_dec_ref(v_postNode_163_);
lean_dec_ref(v_preNode_162_);
v_a_238_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_178_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_178_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
default: 
{
lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_253_; 
lean_dec(v_x_164_);
lean_dec_ref(v_postNode_163_);
lean_dec_ref(v_preNode_162_);
v_isSharedCheck_253_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_253_ == 0)
{
lean_object* v_unused_254_; 
v_unused_254_ = lean_ctor_get(v_x_165_, 0);
lean_dec(v_unused_254_);
v___x_247_ = v_x_165_;
v_isShared_248_ = v_isSharedCheck_253_;
goto v_resetjp_246_;
}
else
{
lean_dec(v_x_165_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_253_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_249_ = lean_box(0);
if (v_isShared_248_ == 0)
{
lean_ctor_set_tag(v___x_247_, 0);
lean_ctor_set(v___x_247_, 0, v___x_249_);
v___x_251_ = v___x_247_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___redArg(lean_object* v_preNode_255_, lean_object* v_postNode_256_, lean_object* v___x_257_, lean_object* v_x_258_, lean_object* v_x_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v___x_257_);
lean_dec_ref(v_postNode_256_);
lean_dec_ref(v_preNode_255_);
v___x_263_ = l_List_reverse___redArg(v_x_259_);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
return v___x_264_;
}
else
{
lean_object* v_head_265_; lean_object* v_tail_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_284_; 
v_head_265_ = lean_ctor_get(v_x_258_, 0);
v_tail_266_ = lean_ctor_get(v_x_258_, 1);
v_isSharedCheck_284_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_284_ == 0)
{
v___x_268_ = v_x_258_;
v_isShared_269_ = v_isSharedCheck_284_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_tail_266_);
lean_inc(v_head_265_);
lean_dec(v_x_258_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_284_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; 
lean_inc(v___x_257_);
lean_inc_ref(v_postNode_256_);
lean_inc_ref(v_preNode_255_);
v___x_270_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg(v_preNode_255_, v_postNode_256_, v___x_257_, v_head_265_, v___y_260_, v___y_261_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_273_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_270_, 1);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 1, v_x_259_);
lean_ctor_set(v___x_268_, 0, v_a_271_);
v___x_273_ = v___x_268_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_271_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_x_259_);
v___x_273_ = v_reuseFailAlloc_275_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
v_x_258_ = v_tail_266_;
v_x_259_ = v___x_273_;
goto _start;
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_del_object(v___x_268_);
lean_dec(v_tail_266_);
lean_dec(v_x_259_);
lean_dec(v___x_257_);
lean_dec_ref(v_postNode_256_);
lean_dec_ref(v_preNode_255_);
v_a_276_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_270_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_270_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___redArg___boxed(lean_object* v_preNode_285_, lean_object* v_postNode_286_, lean_object* v___x_287_, lean_object* v_x_288_, lean_object* v_x_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___redArg(v_preNode_285_, v_postNode_286_, v___x_287_, v_x_288_, v_x_289_, v___y_290_, v___y_291_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg___boxed(lean_object* v_preNode_294_, lean_object* v_postNode_295_, lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg(v_preNode_294_, v_postNode_295_, v_x_296_, v_x_297_, v___y_298_, v___y_299_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___lam__0(lean_object* v_postNode_302_, lean_object* v_ci_303_, lean_object* v_i_304_, lean_object* v_cs_305_, lean_object* v_x_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v___x_310_; 
lean_inc(v___y_308_);
lean_inc_ref(v___y_307_);
v___x_310_ = lean_apply_6(v_postNode_302_, v_ci_303_, v_i_304_, v_cs_305_, v___y_307_, v___y_308_, lean_box(0));
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___lam__0___boxed(lean_object* v_postNode_311_, lean_object* v_ci_312_, lean_object* v_i_313_, lean_object* v_cs_314_, lean_object* v_x_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___lam__0(v_postNode_311_, v_ci_312_, v_i_313_, v_cs_314_, v_x_315_, v___y_316_, v___y_317_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
lean_dec(v_x_315_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7(lean_object* v_preNode_320_, lean_object* v_postNode_321_, lean_object* v_ctx_x3f_322_, lean_object* v_t_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
lean_object* v___f_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___f_327_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___lam__0___boxed), 8, 1);
lean_closure_set(v___f_327_, 0, v_postNode_321_);
v___x_328_ = lean_box(0);
v___x_329_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg(v_preNode_320_, v___f_327_, v_ctx_x3f_322_, v_t_323_, v___y_324_, v___y_325_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_336_ == 0)
{
lean_object* v_unused_337_; 
v_unused_337_ = lean_ctor_get(v___x_329_, 0);
lean_dec(v_unused_337_);
v___x_331_ = v___x_329_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_dec(v___x_329_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_328_);
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_328_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
v_a_338_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_329_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_329_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7___boxed(lean_object* v_preNode_346_, lean_object* v_postNode_347_, lean_object* v_ctx_x3f_348_, lean_object* v_t_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7(v_preNode_346_, v_postNode_347_, v_ctx_x3f_348_, v_t_349_, v___y_350_, v___y_351_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
return v_res_353_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_354_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__0);
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1);
v___x_358_ = lean_unsigned_to_nat(0u);
v___x_359_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
lean_ctor_set(v___x_359_, 2, v___x_358_);
lean_ctor_set(v___x_359_, 3, v___x_358_);
lean_ctor_set(v___x_359_, 4, v___x_357_);
lean_ctor_set(v___x_359_, 5, v___x_357_);
lean_ctor_set(v___x_359_, 6, v___x_357_);
lean_ctor_set(v___x_359_, 7, v___x_357_);
lean_ctor_set(v___x_359_, 8, v___x_357_);
lean_ctor_set(v___x_359_, 9, v___x_357_);
lean_ctor_set(v___x_359_, 10, v___x_357_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_unsigned_to_nat(32u);
v___x_361_ = lean_mk_empty_array_with_capacity(v___x_360_);
v___x_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
return v___x_362_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_363_ = ((size_t)5ULL);
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = lean_unsigned_to_nat(32u);
v___x_366_ = lean_mk_empty_array_with_capacity(v___x_365_);
v___x_367_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__3);
v___x_368_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
lean_ctor_set(v___x_368_, 2, v___x_364_);
lean_ctor_set(v___x_368_, 3, v___x_364_);
lean_ctor_set_usize(v___x_368_, 4, v___x_363_);
return v___x_368_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_369_ = lean_box(1);
v___x_370_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__4);
v___x_371_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__1);
v___x_372_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___x_370_);
lean_ctor_set(v___x_372_, 2, v___x_369_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg(lean_object* v_msgData_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; lean_object* v_env_377_; uint8_t v___x_378_; lean_object* v_env_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v_scopes_382_; lean_object* v___x_383_; lean_object* v_opts_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_376_ = lean_st_ref_get(v___y_374_);
v_env_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc_ref(v_env_377_);
lean_dec(v___x_376_);
v___x_378_ = 0;
v_env_379_ = l_Lean_Environment_setRecordingDeps(v_env_377_, v___x_378_);
v___x_380_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_381_ = lean_st_ref_get(v___y_374_);
v_scopes_382_ = lean_ctor_get(v___x_381_, 2);
lean_inc(v_scopes_382_);
lean_dec(v___x_381_);
v___x_383_ = l_List_head_x21___redArg(v___x_380_, v_scopes_382_);
lean_dec(v_scopes_382_);
v_opts_384_ = lean_ctor_get(v___x_383_, 1);
lean_inc_ref(v_opts_384_);
lean_dec(v___x_383_);
v___x_385_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__2);
v___x_386_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___closed__5);
v___x_387_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_387_, 0, v_env_379_);
lean_ctor_set(v___x_387_, 1, v___x_385_);
lean_ctor_set(v___x_387_, 2, v___x_386_);
lean_ctor_set(v___x_387_, 3, v_opts_384_);
v___x_388_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
lean_ctor_set(v___x_388_, 1, v_msgData_373_);
v___x_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg___boxed(lean_object* v_msgData_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg(v_msgData_390_, v___y_391_);
lean_dec(v___y_391_);
return v_res_393_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0(uint8_t v___x_395_, lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_396_) == 1)
{
lean_object* v_pre_397_; 
v_pre_397_ = lean_ctor_get(v_x_396_, 0);
if (lean_obj_tag(v_pre_397_) == 0)
{
lean_object* v_str_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v_str_398_ = lean_ctor_get(v_x_396_, 1);
v___x_399_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0___closed__0));
v___x_400_ = lean_string_dec_eq(v_str_398_, v___x_399_);
return v___x_400_;
}
else
{
return v___x_395_;
}
}
else
{
return v___x_395_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0___boxed(lean_object* v___x_401_, lean_object* v_x_402_){
_start:
{
uint8_t v___x_10644__boxed_403_; uint8_t v_res_404_; lean_object* v_r_405_; 
v___x_10644__boxed_403_ = lean_unbox(v___x_401_);
v_res_404_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___lam__0(v___x_10644__boxed_403_, v_x_402_);
lean_dec(v_x_402_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7(lean_object* v_ref_410_, lean_object* v_msgData_411_, uint8_t v_severity_412_, uint8_t v_isSilent_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v___y_418_; lean_object* v___y_419_; lean_object* v___y_420_; uint8_t v___y_421_; lean_object* v___y_422_; uint8_t v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_483_; uint8_t v___y_484_; uint8_t v___y_485_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_508_; lean_object* v___y_509_; uint8_t v___y_510_; uint8_t v___y_511_; lean_object* v___y_512_; uint8_t v___y_516_; uint8_t v___x_544_; uint8_t v___x_545_; 
v___x_544_ = 2;
v___x_545_ = l_Lean_instBEqMessageSeverity_beq(v_severity_412_, v___x_544_);
if (v___x_545_ == 0)
{
goto v___jp_533_;
}
else
{
uint8_t v___x_546_; 
lean_inc_ref(v_msgData_411_);
v___x_546_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_411_);
if (v___x_546_ == 0)
{
goto v___jp_533_;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec_ref(v_msgData_411_);
v___x_547_ = lean_box(0);
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
v___jp_417_:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_Elab_Command_getScope___redArg(v___y_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v_currNamespace_428_; lean_object* v___x_429_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_a_427_);
lean_dec_ref_known(v___x_426_, 1);
v_currNamespace_428_ = lean_ctor_get(v_a_427_, 2);
lean_inc(v_currNamespace_428_);
lean_dec(v_a_427_);
v___x_429_ = l_Lean_Elab_Command_getScope___redArg(v___y_425_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_465_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_465_ == 0)
{
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_465_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_465_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v_openDecls_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v_env_439_; lean_object* v_messages_440_; lean_object* v_scopes_441_; lean_object* v_usedQuotCtxts_442_; lean_object* v_nextMacroScope_443_; lean_object* v_maxRecDepth_444_; lean_object* v_ngen_445_; lean_object* v_auxDeclNGen_446_; lean_object* v_infoState_447_; lean_object* v_traceState_448_; lean_object* v_snapshotTasks_449_; lean_object* v_prevLinterStates_450_; lean_object* v_codeQualityEntryTasks_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_464_; 
v_openDecls_434_ = lean_ctor_get(v_a_430_, 3);
lean_inc(v_openDecls_434_);
lean_dec(v_a_430_);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v_currNamespace_428_);
lean_ctor_set(v___x_435_, 1, v_openDecls_434_);
v___x_436_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
lean_ctor_set(v___x_436_, 1, v___y_422_);
lean_inc_ref(v___y_419_);
lean_inc_ref(v___y_420_);
v___x_437_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_437_, 0, v___y_420_);
lean_ctor_set(v___x_437_, 1, v___y_418_);
lean_ctor_set(v___x_437_, 2, v___y_424_);
lean_ctor_set(v___x_437_, 3, v___y_419_);
lean_ctor_set(v___x_437_, 4, v___x_436_);
lean_ctor_set_uint8(v___x_437_, sizeof(void*)*5, v___y_423_);
lean_ctor_set_uint8(v___x_437_, sizeof(void*)*5 + 1, v___y_421_);
lean_ctor_set_uint8(v___x_437_, sizeof(void*)*5 + 2, v_isSilent_413_);
v___x_438_ = lean_st_ref_take(v___y_425_);
v_env_439_ = lean_ctor_get(v___x_438_, 0);
v_messages_440_ = lean_ctor_get(v___x_438_, 1);
v_scopes_441_ = lean_ctor_get(v___x_438_, 2);
v_usedQuotCtxts_442_ = lean_ctor_get(v___x_438_, 3);
v_nextMacroScope_443_ = lean_ctor_get(v___x_438_, 4);
v_maxRecDepth_444_ = lean_ctor_get(v___x_438_, 5);
v_ngen_445_ = lean_ctor_get(v___x_438_, 6);
v_auxDeclNGen_446_ = lean_ctor_get(v___x_438_, 7);
v_infoState_447_ = lean_ctor_get(v___x_438_, 8);
v_traceState_448_ = lean_ctor_get(v___x_438_, 9);
v_snapshotTasks_449_ = lean_ctor_get(v___x_438_, 10);
v_prevLinterStates_450_ = lean_ctor_get(v___x_438_, 11);
v_codeQualityEntryTasks_451_ = lean_ctor_get(v___x_438_, 12);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_464_ == 0)
{
v___x_453_ = v___x_438_;
v_isShared_454_ = v_isSharedCheck_464_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_codeQualityEntryTasks_451_);
lean_inc(v_prevLinterStates_450_);
lean_inc(v_snapshotTasks_449_);
lean_inc(v_traceState_448_);
lean_inc(v_infoState_447_);
lean_inc(v_auxDeclNGen_446_);
lean_inc(v_ngen_445_);
lean_inc(v_maxRecDepth_444_);
lean_inc(v_nextMacroScope_443_);
lean_inc(v_usedQuotCtxts_442_);
lean_inc(v_scopes_441_);
lean_inc(v_messages_440_);
lean_inc(v_env_439_);
lean_dec(v___x_438_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_464_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_458_; 
v___x_455_ = lean_box(0);
v___x_456_ = l_Lean_MessageLog_add(v___x_437_, v_messages_440_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 1, v___x_456_);
v___x_458_ = v___x_453_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_env_439_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v___x_456_);
lean_ctor_set(v_reuseFailAlloc_463_, 2, v_scopes_441_);
lean_ctor_set(v_reuseFailAlloc_463_, 3, v_usedQuotCtxts_442_);
lean_ctor_set(v_reuseFailAlloc_463_, 4, v_nextMacroScope_443_);
lean_ctor_set(v_reuseFailAlloc_463_, 5, v_maxRecDepth_444_);
lean_ctor_set(v_reuseFailAlloc_463_, 6, v_ngen_445_);
lean_ctor_set(v_reuseFailAlloc_463_, 7, v_auxDeclNGen_446_);
lean_ctor_set(v_reuseFailAlloc_463_, 8, v_infoState_447_);
lean_ctor_set(v_reuseFailAlloc_463_, 9, v_traceState_448_);
lean_ctor_set(v_reuseFailAlloc_463_, 10, v_snapshotTasks_449_);
lean_ctor_set(v_reuseFailAlloc_463_, 11, v_prevLinterStates_450_);
lean_ctor_set(v_reuseFailAlloc_463_, 12, v_codeQualityEntryTasks_451_);
v___x_458_ = v_reuseFailAlloc_463_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_object* v___x_459_; lean_object* v___x_461_; 
v___x_459_ = lean_st_ref_put(v___y_425_, v___x_458_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_455_);
v___x_461_ = v___x_432_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_455_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
lean_dec(v_currNamespace_428_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_422_);
lean_dec_ref(v___y_418_);
v_a_466_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_429_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_429_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_dec(v___y_424_);
lean_dec_ref(v___y_422_);
lean_dec_ref(v___y_418_);
v_a_474_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_426_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_426_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
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
v___jp_482_:
{
lean_object* v_fileName_488_; lean_object* v_fileMap_489_; uint8_t v_suppressElabErrors_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_506_; 
v_fileName_488_ = lean_ctor_get(v___y_414_, 0);
v_fileMap_489_ = lean_ctor_get(v___y_414_, 1);
v_suppressElabErrors_490_ = lean_ctor_get_uint8(v___y_414_, sizeof(void*)*10);
v___x_491_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_411_);
v___x_492_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg(v___x_491_, v___y_415_);
v_a_493_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_506_ == 0)
{
v___x_495_ = v___x_492_;
v_isShared_496_ = v_isSharedCheck_506_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_492_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_506_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
lean_inc_ref_n(v_fileMap_489_, 2);
v___x_497_ = l_Lean_FileMap_toPosition(v_fileMap_489_, v___y_486_);
lean_dec(v___y_486_);
v___x_498_ = l_Lean_FileMap_toPosition(v_fileMap_489_, v___y_487_);
lean_dec(v___y_487_);
v___x_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
v___x_500_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__0));
if (v_suppressElabErrors_490_ == 0)
{
lean_del_object(v___x_495_);
v___y_418_ = v___x_497_;
v___y_419_ = v___x_500_;
v___y_420_ = v_fileName_488_;
v___y_421_ = v___y_484_;
v___y_422_ = v_a_493_;
v___y_423_ = v___y_485_;
v___y_424_ = v___x_499_;
v___y_425_ = v___y_415_;
goto v___jp_417_;
}
else
{
uint8_t v___x_501_; 
lean_inc(v_a_493_);
lean_inc_ref(v___y_483_);
v___x_501_ = l_Lean_MessageData_hasTag(v___y_483_, v_a_493_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_504_; 
lean_dec_ref_known(v___x_499_, 1);
lean_dec_ref(v___x_497_);
lean_dec(v_a_493_);
v___x_502_ = lean_box(0);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_502_);
v___x_504_ = v___x_495_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
else
{
lean_del_object(v___x_495_);
v___y_418_ = v___x_497_;
v___y_419_ = v___x_500_;
v___y_420_ = v_fileName_488_;
v___y_421_ = v___y_484_;
v___y_422_ = v_a_493_;
v___y_423_ = v___y_485_;
v___y_424_ = v___x_499_;
v___y_425_ = v___y_415_;
goto v___jp_417_;
}
}
}
}
v___jp_507_:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lean_Syntax_getTailPos_x3f(v___y_508_, v___y_510_);
lean_dec(v___y_508_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_inc(v___y_512_);
v___y_483_ = v___y_509_;
v___y_484_ = v___y_511_;
v___y_485_ = v___y_510_;
v___y_486_ = v___y_512_;
v___y_487_ = v___y_512_;
goto v___jp_482_;
}
else
{
lean_object* v_val_514_; 
v_val_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_val_514_);
lean_dec_ref_known(v___x_513_, 1);
v___y_483_ = v___y_509_;
v___y_484_ = v___y_511_;
v___y_485_ = v___y_510_;
v___y_486_ = v___y_512_;
v___y_487_ = v_val_514_;
goto v___jp_482_;
}
}
v___jp_515_:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lean_Elab_Command_getRef___redArg(v___y_414_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v_ref_519_; uint8_t v___x_520_; lean_object* v___f_521_; lean_object* v___x_522_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_518_);
lean_dec_ref_known(v___x_517_, 1);
v_ref_519_ = l_Lean_replaceRef(v_ref_410_, v_a_518_);
lean_dec(v_a_518_);
v___x_520_ = 0;
v___f_521_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___closed__1));
v___x_522_ = l_Lean_Syntax_getPos_x3f(v_ref_519_, v___x_520_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v___x_523_; 
v___x_523_ = lean_unsigned_to_nat(0u);
v___y_508_ = v_ref_519_;
v___y_509_ = v___f_521_;
v___y_510_ = v___x_520_;
v___y_511_ = v___y_516_;
v___y_512_ = v___x_523_;
goto v___jp_507_;
}
else
{
lean_object* v_val_524_; 
v_val_524_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_val_524_);
lean_dec_ref_known(v___x_522_, 1);
v___y_508_ = v_ref_519_;
v___y_509_ = v___f_521_;
v___y_510_ = v___x_520_;
v___y_511_ = v___y_516_;
v___y_512_ = v_val_524_;
goto v___jp_507_;
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec_ref(v_msgData_411_);
v_a_525_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_517_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_517_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
v___jp_533_:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v_scopes_536_; lean_object* v___x_537_; lean_object* v_opts_538_; uint8_t v___x_539_; uint8_t v___x_540_; 
v___x_534_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_535_ = lean_st_ref_get(v___y_415_);
v_scopes_536_ = lean_ctor_get(v___x_535_, 2);
lean_inc(v_scopes_536_);
lean_dec(v___x_535_);
v___x_537_ = l_List_head_x21___redArg(v___x_534_, v_scopes_536_);
lean_dec(v_scopes_536_);
v_opts_538_ = lean_ctor_get(v___x_537_, 1);
lean_inc_ref(v_opts_538_);
lean_dec(v___x_537_);
v___x_539_ = 1;
v___x_540_ = l_Lean_instBEqMessageSeverity_beq(v_severity_412_, v___x_539_);
if (v___x_540_ == 0)
{
lean_dec_ref(v_opts_538_);
v___y_516_ = v_severity_412_;
goto v___jp_515_;
}
else
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = l_Lean_warningAsError;
v___x_542_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Term_throwErrorIfErrors_spec__0_spec__1_spec__2(v_opts_538_, v___x_541_);
lean_dec_ref(v_opts_538_);
if (v___x_542_ == 0)
{
v___y_516_ = v_severity_412_;
goto v___jp_515_;
}
else
{
uint8_t v___x_543_; 
v___x_543_ = 2;
v___y_516_ = v___x_543_;
goto v___jp_515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7___boxed(lean_object* v_ref_549_, lean_object* v_msgData_550_, lean_object* v_severity_551_, lean_object* v_isSilent_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
uint8_t v_severity_boxed_556_; uint8_t v_isSilent_boxed_557_; lean_object* v_res_558_; 
v_severity_boxed_556_ = lean_unbox(v_severity_551_);
v_isSilent_boxed_557_ = lean_unbox(v_isSilent_552_);
v_res_558_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7(v_ref_549_, v_msgData_550_, v_severity_boxed_556_, v_isSilent_boxed_557_, v___y_553_, v___y_554_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v_ref_549_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5(lean_object* v_ref_559_, lean_object* v_msgData_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
uint8_t v___x_564_; uint8_t v___x_565_; lean_object* v___x_566_; 
v___x_564_ = 1;
v___x_565_ = 0;
v___x_566_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7(v_ref_559_, v_msgData_560_, v___x_564_, v___x_565_, v___y_561_, v___y_562_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5___boxed(lean_object* v_ref_567_, lean_object* v_msgData_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5(v_ref_567_, v_msgData_568_, v___y_569_, v___y_570_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec(v_ref_567_);
return v_res_572_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__1(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__0));
v___x_575_ = l_Lean_stringToMessageData(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__3(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__2));
v___x_578_ = l_Lean_stringToMessageData(v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3(lean_object* v_linterOption_579_, lean_object* v_stx_580_, lean_object* v_msg_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v_name_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_603_; 
v_name_585_ = lean_ctor_get(v_linterOption_579_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v_linterOption_579_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v_linterOption_579_, 1);
lean_dec(v_unused_604_);
v___x_587_ = v_linterOption_579_;
v_isShared_588_ = v_isSharedCheck_603_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_name_585_);
lean_dec(v_linterOption_579_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_603_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_592_; 
v___x_589_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__1);
lean_inc(v_name_585_);
v___x_590_ = l_Lean_MessageData_ofName(v_name_585_);
if (v_isShared_588_ == 0)
{
lean_ctor_set_tag(v___x_587_, 7);
lean_ctor_set(v___x_587_, 1, v___x_590_);
lean_ctor_set(v___x_587_, 0, v___x_589_);
v___x_592_ = v___x_587_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_589_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v___x_590_);
v___x_592_ = v_reuseFailAlloc_602_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v_disable_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_593_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___closed__3);
v___x_594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_592_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v_disable_595_ = l_Lean_MessageData_note(v___x_594_);
v___x_596_ = l_Lean_Linter_linterMessageTag;
v___x_597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_597_, 0, v_msg_581_);
lean_ctor_set(v___x_597_, 1, v_disable_595_);
v___x_598_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_599_, 0, v_name_585_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
lean_inc(v_stx_580_);
v___x_600_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_600_, 0, v_stx_580_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = l_Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5(v_stx_580_, v___x_600_, v___y_582_, v___y_583_);
lean_dec(v_stx_580_);
return v___x_601_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3___boxed(lean_object* v_linterOption_605_, lean_object* v_stx_606_, lean_object* v_msg_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3(v_linterOption_605_, v_stx_606_, v_msg_607_, v___y_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
return v_res_611_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4_spec__5(lean_object* v_a_612_, lean_object* v_as_613_, size_t v_i_614_, size_t v_stop_615_){
_start:
{
uint8_t v___x_616_; 
v___x_616_ = lean_usize_dec_eq(v_i_614_, v_stop_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = lean_array_uget_borrowed(v_as_613_, v_i_614_);
v___x_618_ = lean_name_eq(v_a_612_, v___x_617_);
if (v___x_618_ == 0)
{
size_t v___x_619_; size_t v___x_620_; 
v___x_619_ = ((size_t)1ULL);
v___x_620_ = lean_usize_add(v_i_614_, v___x_619_);
v_i_614_ = v___x_620_;
goto _start;
}
else
{
return v___x_618_;
}
}
else
{
uint8_t v___x_622_; 
v___x_622_ = 0;
return v___x_622_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4_spec__5___boxed(lean_object* v_a_623_, lean_object* v_as_624_, lean_object* v_i_625_, lean_object* v_stop_626_){
_start:
{
size_t v_i_boxed_627_; size_t v_stop_boxed_628_; uint8_t v_res_629_; lean_object* v_r_630_; 
v_i_boxed_627_ = lean_unbox_usize(v_i_625_);
lean_dec(v_i_625_);
v_stop_boxed_628_ = lean_unbox_usize(v_stop_626_);
lean_dec(v_stop_626_);
v_res_629_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4_spec__5(v_a_623_, v_as_624_, v_i_boxed_627_, v_stop_boxed_628_);
lean_dec_ref(v_as_624_);
lean_dec(v_a_623_);
v_r_630_ = lean_box(v_res_629_);
return v_r_630_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4(lean_object* v_as_631_, lean_object* v_a_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = lean_array_get_size(v_as_631_);
v___x_635_ = lean_nat_dec_lt(v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
return v___x_635_;
}
else
{
size_t v___x_636_; size_t v___x_637_; uint8_t v___x_638_; 
v___x_636_ = ((size_t)0ULL);
v___x_637_ = lean_usize_of_nat(v___x_634_);
v___x_638_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4_spec__5(v_a_632_, v_as_631_, v___x_636_, v___x_637_);
return v___x_638_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4___boxed(lean_object* v_as_639_, lean_object* v_a_640_){
_start:
{
uint8_t v_res_641_; lean_object* v_r_642_; 
v_res_641_ = l_Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4(v_as_639_, v_a_640_);
lean_dec(v_a_640_);
lean_dec_ref(v_as_639_);
v_r_642_ = lean_box(v_res_641_);
return v_r_642_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__2));
v___x_650_ = l_Lean_stringToMessageData(v___x_649_);
return v___x_650_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__4));
v___x_653_ = l_Lean_stringToMessageData(v___x_652_);
return v___x_653_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__6));
v___x_656_ = l_Lean_stringToMessageData(v___x_655_);
return v___x_656_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__8));
v___x_659_ = l_Lean_stringToMessageData(v___x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg(uint8_t v___x_677_, lean_object* v_i_678_, lean_object* v_a_679_, lean_object* v_as_x27_680_, lean_object* v_b_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
if (lean_obj_tag(v_as_x27_680_) == 0)
{
lean_object* v___x_685_; 
lean_dec_ref(v_i_678_);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v_b_681_);
return v___x_685_;
}
else
{
lean_object* v_head_686_; lean_object* v_tail_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___x_720_; uint8_t v___x_721_; 
v_head_686_ = lean_ctor_get(v_as_x27_680_, 0);
v_tail_687_ = lean_ctor_get(v_as_x27_680_, 1);
v___x_688_ = lean_box(0);
v___x_689_ = l_Lean_Linter_instInhabitedDeprecationEntry_default;
v___x_690_ = l_Lean_Linter_Coe_linter_deprecatedCoercions;
v___x_720_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__12));
v___x_721_ = lean_name_eq(v_a_679_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_722_ = l_Lean_Name_getRoot(v_a_679_);
v___x_723_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__18));
v___x_724_ = l_List_elem___at___00Lean_Elab_Term_levelMVarToParam_spec__0(v___x_722_, v___x_723_);
lean_dec(v___x_722_);
if (v___x_724_ == 0)
{
v___y_692_ = v___y_682_;
v___y_693_ = v___y_683_;
goto v___jp_691_;
}
else
{
goto v___jp_710_;
}
}
else
{
goto v___jp_710_;
}
v___jp_691_:
{
if (v___x_677_ == 0)
{
v_as_x27_680_ = v_tail_687_;
v_b_681_ = v___x_688_;
goto _start;
}
else
{
lean_object* v___x_695_; lean_object* v_env_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_695_ = lean_st_ref_get(v___y_693_);
v_env_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc_ref(v_env_696_);
lean_dec(v___x_695_);
v___x_697_ = l_Lean_Linter_deprecatedAttr;
lean_inc(v_head_686_);
v___x_698_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_689_, v___x_697_, v_env_696_, v_head_686_);
if (lean_obj_tag(v___x_698_) == 1)
{
lean_object* v_stx_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
lean_dec_ref_known(v___x_698_, 1);
v_stx_699_ = lean_ctor_get(v_i_678_, 0);
v___x_700_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__1));
v___x_701_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__3, &l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__3);
lean_inc(v_head_686_);
v___x_702_ = l_Lean_MessageData_ofConstName(v_head_686_, v___x_677_);
v___x_703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__5, &l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__5);
v___x_705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_700_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
lean_inc(v_stx_699_);
v___x_707_ = l_Lean_Linter_logLint___at___00Lean_Linter_Coe_coeLinter_spec__3(v___x_690_, v_stx_699_, v___x_706_, v___y_692_, v___y_693_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_dec_ref_known(v___x_707_, 1);
v_as_x27_680_ = v_tail_687_;
v_b_681_ = v___x_688_;
goto _start;
}
else
{
lean_dec_ref(v_i_678_);
return v___x_707_;
}
}
else
{
lean_dec(v___x_698_);
v_as_x27_680_ = v_tail_687_;
v_b_681_ = v___x_688_;
goto _start;
}
}
}
v___jp_710_:
{
lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_711_ = ((lean_object*)(l_Lean_Linter_Coe_coercionsBannedInCore));
v___x_712_ = l_Array_contains___at___00Lean_Linter_Coe_coeLinter_spec__4(v___x_711_, v_head_686_);
if (v___x_712_ == 0)
{
v___y_692_ = v___y_682_;
v___y_693_ = v___y_683_;
goto v___jp_691_;
}
else
{
lean_object* v_stx_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v_stx_713_ = lean_ctor_get(v_i_678_, 0);
v___x_714_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__7, &l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__7);
lean_inc(v_head_686_);
v___x_715_ = l_Lean_MessageData_ofName(v_head_686_);
v___x_716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_714_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v___x_717_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__9, &l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__9_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___closed__9);
v___x_718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
v___x_719_ = l_Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5(v_stx_713_, v___x_718_, v___y_682_, v___y_683_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_dec_ref_known(v___x_719_, 1);
v___y_692_ = v___y_682_;
v___y_693_ = v___y_683_;
goto v___jp_691_;
}
else
{
lean_dec_ref(v_i_678_);
return v___x_719_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg___boxed(lean_object* v___x_725_, lean_object* v_i_726_, lean_object* v_a_727_, lean_object* v_as_x27_728_, lean_object* v_b_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
uint8_t v___x_11081__boxed_733_; lean_object* v_res_734_; 
v___x_11081__boxed_733_ = lean_unbox(v___x_725_);
v_res_734_ = l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg(v___x_11081__boxed_733_, v_i_726_, v_a_727_, v_as_x27_728_, v_b_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v_as_x27_728_);
lean_dec(v_a_727_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1(lean_object* v___x_735_, uint8_t v___x_736_, lean_object* v_a_737_, lean_object* v___x_738_, uint8_t v___x_739_, lean_object* v_x_740_, lean_object* v_info_741_, lean_object* v_x_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
if (lean_obj_tag(v_info_741_) == 10)
{
lean_object* v_i_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_775_; 
v_i_746_ = lean_ctor_get(v_info_741_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v_info_741_);
if (v_isSharedCheck_775_ == 0)
{
v___x_748_ = v_info_741_;
v_isShared_749_ = v_isSharedCheck_775_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_i_746_);
lean_dec(v_info_741_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_775_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v_value_750_; lean_object* v___x_751_; 
v_value_750_ = lean_ctor_get(v_i_746_, 1);
v___x_751_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_value_750_, v___x_735_);
if (lean_obj_tag(v___x_751_) == 1)
{
lean_object* v_val_752_; lean_object* v___x_753_; 
lean_del_object(v___x_748_);
v_val_752_ = lean_ctor_get(v___x_751_, 0);
lean_inc(v_val_752_);
lean_dec_ref_known(v___x_751_, 1);
v___x_753_ = l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg(v___x_736_, v_i_746_, v_a_737_, v_val_752_, v___x_738_, v___y_743_, v___y_744_);
lean_dec(v_val_752_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_761_; 
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; 
v_unused_762_ = lean_ctor_get(v___x_753_, 0);
lean_dec(v_unused_762_);
v___x_755_ = v___x_753_;
v_isShared_756_ = v_isSharedCheck_761_;
goto v_resetjp_754_;
}
else
{
lean_dec(v___x_753_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_761_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_757_ = lean_box(v___x_739_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_757_);
v___x_759_ = v___x_755_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
v_a_763_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_753_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_753_);
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
lean_object* v___x_771_; lean_object* v___x_773_; 
lean_dec(v___x_751_);
lean_dec_ref(v_i_746_);
v___x_771_ = lean_box(v___x_739_);
if (v_isShared_749_ == 0)
{
lean_ctor_set_tag(v___x_748_, 0);
lean_ctor_set(v___x_748_, 0, v___x_771_);
v___x_773_ = v___x_748_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_771_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_object* v___x_776_; lean_object* v___x_777_; 
lean_dec_ref(v_info_741_);
v___x_776_ = lean_box(v___x_739_);
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
return v___x_777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1___boxed(lean_object* v___x_778_, lean_object* v___x_779_, lean_object* v_a_780_, lean_object* v___x_781_, lean_object* v___x_782_, lean_object* v_x_783_, lean_object* v_info_784_, lean_object* v_x_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
uint8_t v___x_11212__boxed_789_; uint8_t v___x_11215__boxed_790_; lean_object* v_res_791_; 
v___x_11212__boxed_789_ = lean_unbox(v___x_779_);
v___x_11215__boxed_790_ = lean_unbox(v___x_782_);
v_res_791_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1(v___x_778_, v___x_11212__boxed_789_, v_a_780_, v___x_781_, v___x_11215__boxed_790_, v_x_783_, v_info_784_, v_x_785_, v___y_786_, v___y_787_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec_ref(v_x_785_);
lean_dec_ref(v_x_783_);
lean_dec(v_a_780_);
lean_dec(v___x_778_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__0(lean_object* v___x_792_, lean_object* v_x_793_, lean_object* v_x_794_, lean_object* v_x_795_, lean_object* v_x_796_, lean_object* v___y_797_){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_792_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__0___boxed(lean_object* v___x_800_, lean_object* v_x_801_, lean_object* v_x_802_, lean_object* v_x_803_, lean_object* v_x_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__0(v___x_800_, v_x_801_, v_x_802_, v_x_803_, v_x_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v_x_804_);
lean_dec_ref(v_x_803_);
lean_dec_ref(v_x_802_);
lean_dec_ref(v_x_801_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19(uint8_t v___x_813_, lean_object* v_a_814_, lean_object* v_as_815_, size_t v_sz_816_, size_t v_i_817_, lean_object* v_b_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
uint8_t v___x_822_; 
v___x_822_ = lean_usize_dec_lt(v_i_817_, v_sz_816_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; 
lean_dec(v_a_814_);
v___x_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_823_, 0, v_b_818_);
return v___x_823_;
}
else
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___f_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___f_829_; lean_object* v___x_830_; lean_object* v_a_831_; lean_object* v___x_832_; 
lean_dec_ref(v_b_818_);
v___x_824_ = l_Lean_Elab_Term_instImpl_00___x40_Lean_Elab_Term_TermElabM_2377040249____hygCtx___hyg_9_;
v___x_825_ = lean_box(0);
v___f_826_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__0));
v___x_827_ = lean_box(v___x_813_);
v___x_828_ = lean_box(v___x_822_);
lean_inc(v_a_814_);
v___f_829_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1___boxed), 11, 5);
lean_closure_set(v___f_829_, 0, v___x_824_);
lean_closure_set(v___f_829_, 1, v___x_827_);
lean_closure_set(v___f_829_, 2, v_a_814_);
lean_closure_set(v___f_829_, 3, v___x_825_);
lean_closure_set(v___f_829_, 4, v___x_828_);
v___x_830_ = lean_box(0);
v_a_831_ = lean_array_uget_borrowed(v_as_815_, v_i_817_);
lean_inc(v_a_831_);
v___x_832_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7(v___f_829_, v___f_826_, v___x_830_, v_a_831_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v___x_833_; size_t v___x_834_; size_t v___x_835_; 
lean_dec_ref_known(v___x_832_, 1);
v___x_833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__1));
v___x_834_ = ((size_t)1ULL);
v___x_835_ = lean_usize_add(v_i_817_, v___x_834_);
v_i_817_ = v___x_835_;
v_b_818_ = v___x_833_;
goto _start;
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec(v_a_814_);
v_a_837_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_832_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_832_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___boxed(lean_object* v___x_845_, lean_object* v_a_846_, lean_object* v_as_847_, lean_object* v_sz_848_, lean_object* v_i_849_, lean_object* v_b_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
uint8_t v___x_11337__boxed_854_; size_t v_sz_boxed_855_; size_t v_i_boxed_856_; lean_object* v_res_857_; 
v___x_11337__boxed_854_ = lean_unbox(v___x_845_);
v_sz_boxed_855_ = lean_unbox_usize(v_sz_848_);
lean_dec(v_sz_848_);
v_i_boxed_856_ = lean_unbox_usize(v_i_849_);
lean_dec(v_i_849_);
v_res_857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19(v___x_11337__boxed_854_, v_a_846_, v_as_847_, v_sz_boxed_855_, v_i_boxed_856_, v_b_850_, v___y_851_, v___y_852_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec_ref(v_as_847_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13(uint8_t v___x_858_, lean_object* v_a_859_, lean_object* v_as_860_, size_t v_sz_861_, size_t v_i_862_, lean_object* v_b_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
uint8_t v___x_867_; 
v___x_867_ = lean_usize_dec_lt(v_i_862_, v_sz_861_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; 
lean_dec(v_a_859_);
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v_b_863_);
return v___x_868_;
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___f_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___f_874_; lean_object* v___x_875_; lean_object* v_a_876_; lean_object* v___x_877_; 
lean_dec_ref(v_b_863_);
v___x_869_ = l_Lean_Elab_Term_instImpl_00___x40_Lean_Elab_Term_TermElabM_2377040249____hygCtx___hyg_9_;
v___x_870_ = lean_box(0);
v___f_871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__0));
v___x_872_ = lean_box(v___x_858_);
v___x_873_ = lean_box(v___x_867_);
lean_inc(v_a_859_);
v___f_874_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1___boxed), 11, 5);
lean_closure_set(v___f_874_, 0, v___x_869_);
lean_closure_set(v___f_874_, 1, v___x_872_);
lean_closure_set(v___f_874_, 2, v_a_859_);
lean_closure_set(v___f_874_, 3, v___x_870_);
lean_closure_set(v___f_874_, 4, v___x_873_);
v___x_875_ = lean_box(0);
v_a_876_ = lean_array_uget_borrowed(v_as_860_, v_i_862_);
lean_inc(v_a_876_);
v___x_877_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7(v___f_874_, v___f_871_, v___x_875_, v_a_876_, v___y_864_, v___y_865_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v___x_878_; size_t v___x_879_; size_t v___x_880_; lean_object* v___x_881_; 
lean_dec_ref_known(v___x_877_, 1);
v___x_878_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__1));
v___x_879_ = ((size_t)1ULL);
v___x_880_ = lean_usize_add(v_i_862_, v___x_879_);
v___x_881_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19(v___x_858_, v_a_859_, v_as_860_, v_sz_861_, v___x_880_, v___x_878_, v___y_864_, v___y_865_);
return v___x_881_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec(v_a_859_);
v_a_882_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_877_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_877_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___boxed(lean_object* v___x_890_, lean_object* v_a_891_, lean_object* v_as_892_, lean_object* v_sz_893_, lean_object* v_i_894_, lean_object* v_b_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
uint8_t v___x_11407__boxed_899_; size_t v_sz_boxed_900_; size_t v_i_boxed_901_; lean_object* v_res_902_; 
v___x_11407__boxed_899_ = lean_unbox(v___x_890_);
v_sz_boxed_900_ = lean_unbox_usize(v_sz_893_);
lean_dec(v_sz_893_);
v_i_boxed_901_ = lean_unbox_usize(v_i_894_);
lean_dec(v_i_894_);
v_res_902_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13(v___x_11407__boxed_899_, v_a_891_, v_as_892_, v_sz_boxed_900_, v_i_boxed_901_, v_b_895_, v___y_896_, v___y_897_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec_ref(v_as_892_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18(uint8_t v___x_906_, lean_object* v_a_907_, lean_object* v_as_908_, size_t v_sz_909_, size_t v_i_910_, lean_object* v_b_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
uint8_t v___x_915_; 
v___x_915_ = lean_usize_dec_lt(v_i_910_, v_sz_909_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; 
lean_dec(v_a_907_);
v___x_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_916_, 0, v_b_911_);
return v___x_916_;
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___f_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___f_922_; lean_object* v___x_923_; lean_object* v_a_924_; lean_object* v___x_925_; 
lean_dec_ref(v_b_911_);
v___x_917_ = l_Lean_Elab_Term_instImpl_00___x40_Lean_Elab_Term_TermElabM_2377040249____hygCtx___hyg_9_;
v___x_918_ = lean_box(0);
v___f_919_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__0));
v___x_920_ = lean_box(v___x_906_);
v___x_921_ = lean_box(v___x_915_);
lean_inc(v_a_907_);
v___f_922_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1___boxed), 11, 5);
lean_closure_set(v___f_922_, 0, v___x_917_);
lean_closure_set(v___f_922_, 1, v___x_920_);
lean_closure_set(v___f_922_, 2, v_a_907_);
lean_closure_set(v___f_922_, 3, v___x_918_);
lean_closure_set(v___f_922_, 4, v___x_921_);
v___x_923_ = lean_box(0);
v_a_924_ = lean_array_uget_borrowed(v_as_908_, v_i_910_);
lean_inc(v_a_924_);
v___x_925_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7(v___f_922_, v___f_919_, v___x_923_, v_a_924_, v___y_912_, v___y_913_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_926_; size_t v___x_927_; size_t v___x_928_; 
lean_dec_ref_known(v___x_925_, 1);
v___x_926_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18___closed__0));
v___x_927_ = ((size_t)1ULL);
v___x_928_ = lean_usize_add(v_i_910_, v___x_927_);
v_i_910_ = v___x_928_;
v_b_911_ = v___x_926_;
goto _start;
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec(v_a_907_);
v_a_930_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_925_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_925_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18___boxed(lean_object* v___x_938_, lean_object* v_a_939_, lean_object* v_as_940_, lean_object* v_sz_941_, lean_object* v_i_942_, lean_object* v_b_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
uint8_t v___x_11475__boxed_947_; size_t v_sz_boxed_948_; size_t v_i_boxed_949_; lean_object* v_res_950_; 
v___x_11475__boxed_947_ = lean_unbox(v___x_938_);
v_sz_boxed_948_ = lean_unbox_usize(v_sz_941_);
lean_dec(v_sz_941_);
v_i_boxed_949_ = lean_unbox_usize(v_i_942_);
lean_dec(v_i_942_);
v_res_950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18(v___x_11475__boxed_947_, v_a_939_, v_as_940_, v_sz_boxed_948_, v_i_boxed_949_, v_b_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_as_940_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17(uint8_t v___x_951_, lean_object* v_a_952_, lean_object* v_as_953_, size_t v_sz_954_, size_t v_i_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
uint8_t v___x_960_; 
v___x_960_ = lean_usize_dec_lt(v_i_955_, v_sz_954_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; 
lean_dec(v_a_952_);
v___x_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_961_, 0, v_b_956_);
return v___x_961_;
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___f_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___f_967_; lean_object* v___x_968_; lean_object* v_a_969_; lean_object* v___x_970_; 
lean_dec_ref(v_b_956_);
v___x_962_ = l_Lean_Elab_Term_instImpl_00___x40_Lean_Elab_Term_TermElabM_2377040249____hygCtx___hyg_9_;
v___x_963_ = lean_box(0);
v___f_964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13_spec__19___closed__0));
v___x_965_ = lean_box(v___x_951_);
v___x_966_ = lean_box(v___x_960_);
lean_inc(v_a_952_);
v___f_967_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13___lam__1___boxed), 11, 5);
lean_closure_set(v___f_967_, 0, v___x_962_);
lean_closure_set(v___f_967_, 1, v___x_965_);
lean_closure_set(v___f_967_, 2, v_a_952_);
lean_closure_set(v___f_967_, 3, v___x_963_);
lean_closure_set(v___f_967_, 4, v___x_966_);
v___x_968_ = lean_box(0);
v_a_969_ = lean_array_uget_borrowed(v_as_953_, v_i_955_);
lean_inc(v_a_969_);
v___x_970_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7(v___f_967_, v___f_964_, v___x_968_, v_a_969_, v___y_957_, v___y_958_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v___x_971_; size_t v___x_972_; size_t v___x_973_; lean_object* v___x_974_; 
lean_dec_ref_known(v___x_970_, 1);
v___x_971_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18___closed__0));
v___x_972_ = ((size_t)1ULL);
v___x_973_ = lean_usize_add(v_i_955_, v___x_972_);
v___x_974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17_spec__18(v___x_951_, v_a_952_, v_as_953_, v_sz_954_, v___x_973_, v___x_971_, v___y_957_, v___y_958_);
return v___x_974_;
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_a_952_);
v_a_975_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_970_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_970_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17___boxed(lean_object* v___x_983_, lean_object* v_a_984_, lean_object* v_as_985_, lean_object* v_sz_986_, lean_object* v_i_987_, lean_object* v_b_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
uint8_t v___x_11543__boxed_992_; size_t v_sz_boxed_993_; size_t v_i_boxed_994_; lean_object* v_res_995_; 
v___x_11543__boxed_992_ = lean_unbox(v___x_983_);
v_sz_boxed_993_ = lean_unbox_usize(v_sz_986_);
lean_dec(v_sz_986_);
v_i_boxed_994_ = lean_unbox_usize(v_i_987_);
lean_dec(v_i_987_);
v_res_995_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17(v___x_11543__boxed_992_, v_a_984_, v_as_985_, v_sz_boxed_993_, v_i_boxed_994_, v_b_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec_ref(v_as_985_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12(lean_object* v_init_996_, uint8_t v___x_997_, lean_object* v_a_998_, lean_object* v_n_999_, lean_object* v_b_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
if (lean_obj_tag(v_n_999_) == 0)
{
lean_object* v_cs_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; size_t v_sz_1007_; size_t v___x_1008_; lean_object* v___x_1009_; 
v_cs_1004_ = lean_ctor_get(v_n_999_, 0);
v___x_1005_ = lean_box(0);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
lean_ctor_set(v___x_1006_, 1, v_b_1000_);
v_sz_1007_ = lean_array_size(v_cs_1004_);
v___x_1008_ = ((size_t)0ULL);
v___x_1009_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__16(v_init_996_, v___x_997_, v_a_998_, v_cs_1004_, v_sz_1007_, v___x_1008_, v___x_1006_, v___y_1001_, v___y_1002_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1024_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1012_ = v___x_1009_;
v_isShared_1013_ = v_isSharedCheck_1024_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1024_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v_fst_1014_; 
v_fst_1014_ = lean_ctor_get(v_a_1010_, 0);
if (lean_obj_tag(v_fst_1014_) == 0)
{
lean_object* v_snd_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
v_snd_1015_ = lean_ctor_get(v_a_1010_, 1);
lean_inc(v_snd_1015_);
lean_dec(v_a_1010_);
v___x_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1016_, 0, v_snd_1015_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 0, v___x_1016_);
v___x_1018_ = v___x_1012_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
else
{
lean_object* v_val_1020_; lean_object* v___x_1022_; 
lean_inc_ref(v_fst_1014_);
lean_dec(v_a_1010_);
v_val_1020_ = lean_ctor_get(v_fst_1014_, 0);
lean_inc(v_val_1020_);
lean_dec_ref_known(v_fst_1014_, 1);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 0, v_val_1020_);
v___x_1022_ = v___x_1012_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_val_1020_);
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
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1009_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1009_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
else
{
lean_object* v_vs_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; size_t v_sz_1036_; size_t v___x_1037_; lean_object* v___x_1038_; 
v_vs_1033_ = lean_ctor_get(v_n_999_, 0);
v___x_1034_ = lean_box(0);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
lean_ctor_set(v___x_1035_, 1, v_b_1000_);
v_sz_1036_ = lean_array_size(v_vs_1033_);
v___x_1037_ = ((size_t)0ULL);
v___x_1038_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__17(v___x_997_, v_a_998_, v_vs_1033_, v_sz_1036_, v___x_1037_, v___x_1035_, v___y_1001_, v___y_1002_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1053_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1041_ = v___x_1038_;
v_isShared_1042_ = v_isSharedCheck_1053_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1038_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1053_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v_fst_1043_; 
v_fst_1043_ = lean_ctor_get(v_a_1039_, 0);
if (lean_obj_tag(v_fst_1043_) == 0)
{
lean_object* v_snd_1044_; lean_object* v___x_1045_; lean_object* v___x_1047_; 
v_snd_1044_ = lean_ctor_get(v_a_1039_, 1);
lean_inc(v_snd_1044_);
lean_dec(v_a_1039_);
v___x_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_snd_1044_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 0, v___x_1045_);
v___x_1047_ = v___x_1041_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
else
{
lean_object* v_val_1049_; lean_object* v___x_1051_; 
lean_inc_ref(v_fst_1043_);
lean_dec(v_a_1039_);
v_val_1049_ = lean_ctor_get(v_fst_1043_, 0);
lean_inc(v_val_1049_);
lean_dec_ref_known(v_fst_1043_, 1);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 0, v_val_1049_);
v___x_1051_ = v___x_1041_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_val_1049_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_a_1054_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1038_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1038_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__16(lean_object* v_init_1062_, uint8_t v___x_1063_, lean_object* v_a_1064_, lean_object* v_as_1065_, size_t v_sz_1066_, size_t v_i_1067_, lean_object* v_b_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
uint8_t v___x_1072_; 
v___x_1072_ = lean_usize_dec_lt(v_i_1067_, v_sz_1066_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; 
lean_dec(v_a_1064_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v_b_1068_);
return v___x_1073_;
}
else
{
lean_object* v_snd_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1108_; 
v_snd_1074_ = lean_ctor_get(v_b_1068_, 1);
v_isSharedCheck_1108_ = !lean_is_exclusive(v_b_1068_);
if (v_isSharedCheck_1108_ == 0)
{
lean_object* v_unused_1109_; 
v_unused_1109_ = lean_ctor_get(v_b_1068_, 0);
lean_dec(v_unused_1109_);
v___x_1076_ = v_b_1068_;
v_isShared_1077_ = v_isSharedCheck_1108_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_snd_1074_);
lean_dec(v_b_1068_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1108_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1078_; lean_object* v_a_1079_; lean_object* v___x_1080_; 
v___x_1078_ = lean_box(0);
v_a_1079_ = lean_array_uget_borrowed(v_as_1065_, v_i_1067_);
lean_inc(v_snd_1074_);
lean_inc(v_a_1064_);
v___x_1080_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12(v_init_1062_, v___x_1063_, v_a_1064_, v_a_1079_, v_snd_1074_, v___y_1069_, v___y_1070_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1099_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1099_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1099_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
if (lean_obj_tag(v_a_1081_) == 0)
{
lean_object* v___x_1085_; lean_object* v___x_1087_; 
lean_dec(v_a_1064_);
v___x_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1085_, 0, v_a_1081_);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 0, v___x_1085_);
v___x_1087_ = v___x_1076_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1085_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v_snd_1074_);
v___x_1087_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1089_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1087_);
v___x_1089_ = v___x_1083_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
else
{
lean_object* v_a_1092_; lean_object* v___x_1094_; 
lean_del_object(v___x_1083_);
lean_dec(v_snd_1074_);
v_a_1092_ = lean_ctor_get(v_a_1081_, 0);
lean_inc(v_a_1092_);
lean_dec_ref_known(v_a_1081_, 1);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 1, v_a_1092_);
lean_ctor_set(v___x_1076_, 0, v___x_1078_);
v___x_1094_ = v___x_1076_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1098_, 1, v_a_1092_);
v___x_1094_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
size_t v___x_1095_; size_t v___x_1096_; 
v___x_1095_ = ((size_t)1ULL);
v___x_1096_ = lean_usize_add(v_i_1067_, v___x_1095_);
v_i_1067_ = v___x_1096_;
v_b_1068_ = v___x_1094_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_del_object(v___x_1076_);
lean_dec(v_snd_1074_);
lean_dec(v_a_1064_);
v_a_1100_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1080_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1080_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__16___boxed(lean_object* v_init_1110_, lean_object* v___x_1111_, lean_object* v_a_1112_, lean_object* v_as_1113_, lean_object* v_sz_1114_, lean_object* v_i_1115_, lean_object* v_b_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v___x_11603__boxed_1120_; size_t v_sz_boxed_1121_; size_t v_i_boxed_1122_; lean_object* v_res_1123_; 
v___x_11603__boxed_1120_ = lean_unbox(v___x_1111_);
v_sz_boxed_1121_ = lean_unbox_usize(v_sz_1114_);
lean_dec(v_sz_1114_);
v_i_boxed_1122_ = lean_unbox_usize(v_i_1115_);
lean_dec(v_i_1115_);
v_res_1123_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12_spec__16(v_init_1110_, v___x_11603__boxed_1120_, v_a_1112_, v_as_1113_, v_sz_boxed_1121_, v_i_boxed_1122_, v_b_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec_ref(v_as_1113_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12___boxed(lean_object* v_init_1124_, lean_object* v___x_1125_, lean_object* v_a_1126_, lean_object* v_n_1127_, lean_object* v_b_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
uint8_t v___x_11624__boxed_1132_; lean_object* v_res_1133_; 
v___x_11624__boxed_1132_ = lean_unbox(v___x_1125_);
v_res_1133_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12(v_init_1124_, v___x_11624__boxed_1132_, v_a_1126_, v_n_1127_, v_b_1128_, v___y_1129_, v___y_1130_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
lean_dec_ref(v_n_1127_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8(uint8_t v___x_1134_, lean_object* v_a_1135_, lean_object* v_t_1136_, lean_object* v_init_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_root_1141_; lean_object* v_tail_1142_; lean_object* v___x_1143_; 
v_root_1141_ = lean_ctor_get(v_t_1136_, 0);
v_tail_1142_ = lean_ctor_get(v_t_1136_, 1);
lean_inc(v_a_1135_);
v___x_1143_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__12(v_init_1137_, v___x_1134_, v_a_1135_, v_root_1141_, v_init_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1180_; 
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1146_ = v___x_1143_;
v_isShared_1147_ = v_isSharedCheck_1180_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1143_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1180_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
if (lean_obj_tag(v_a_1144_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1150_; 
lean_dec(v_a_1135_);
v_a_1148_ = lean_ctor_get(v_a_1144_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v_a_1144_, 1);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v_a_1148_);
v___x_1150_ = v___x_1146_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; size_t v_sz_1155_; size_t v___x_1156_; lean_object* v___x_1157_; 
lean_del_object(v___x_1146_);
v_a_1152_ = lean_ctor_get(v_a_1144_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v_a_1144_, 1);
v___x_1153_ = lean_box(0);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
lean_ctor_set(v___x_1154_, 1, v_a_1152_);
v_sz_1155_ = lean_array_size(v_tail_1142_);
v___x_1156_ = ((size_t)0ULL);
v___x_1157_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8_spec__13(v___x_1134_, v_a_1135_, v_tail_1142_, v_sz_1155_, v___x_1156_, v___x_1154_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1171_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1171_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1171_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v_fst_1162_; 
v_fst_1162_ = lean_ctor_get(v_a_1158_, 0);
if (lean_obj_tag(v_fst_1162_) == 0)
{
lean_object* v_snd_1163_; lean_object* v___x_1165_; 
v_snd_1163_ = lean_ctor_get(v_a_1158_, 1);
lean_inc(v_snd_1163_);
lean_dec(v_a_1158_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v_snd_1163_);
v___x_1165_ = v___x_1160_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_snd_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
else
{
lean_object* v_val_1167_; lean_object* v___x_1169_; 
lean_inc_ref(v_fst_1162_);
lean_dec(v_a_1158_);
v_val_1167_ = lean_ctor_get(v_fst_1162_, 0);
lean_inc(v_val_1167_);
lean_dec_ref_known(v_fst_1162_, 1);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v_val_1167_);
v___x_1169_ = v___x_1160_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_val_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
v_a_1172_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1157_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1157_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1188_; 
lean_dec(v_a_1135_);
v_a_1181_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1183_ = v___x_1143_;
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1143_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1181_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8___boxed(lean_object* v___x_1189_, lean_object* v_a_1190_, lean_object* v_t_1191_, lean_object* v_init_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
uint8_t v___x_11810__boxed_1196_; lean_object* v_res_1197_; 
v___x_11810__boxed_1196_ = lean_unbox(v___x_1189_);
v_res_1197_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8(v___x_11810__boxed_1196_, v_a_1190_, v_t_1191_, v_init_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec_ref(v_t_1191_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___redArg(lean_object* v_o_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_env_1203_; lean_object* v___x_1204_; lean_object* v_toEnvExtension_1205_; lean_object* v_asyncMode_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v_merged_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1218_; 
v___x_1201_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1202_ = lean_st_ref_get(v___y_1199_);
v_env_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc_ref(v_env_1203_);
lean_dec(v___x_1202_);
v___x_1204_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1205_ = lean_ctor_get(v___x_1204_, 0);
v_asyncMode_1206_ = lean_ctor_get(v_toEnvExtension_1205_, 2);
v___x_1207_ = lean_box(0);
v___x_1208_ = 0;
v___x_1209_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1201_, v___x_1204_, v_env_1203_, v_asyncMode_1206_, v___x_1207_, v___x_1208_);
v_merged_1210_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1218_ == 0)
{
lean_object* v_unused_1219_; 
v_unused_1219_ = lean_ctor_get(v___x_1209_, 1);
lean_dec(v_unused_1219_);
v___x_1212_ = v___x_1209_;
v_isShared_1213_ = v_isSharedCheck_1218_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_merged_1210_);
lean_dec(v___x_1209_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1218_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v_merged_1210_);
lean_ctor_set(v___x_1212_, 0, v_o_1198_);
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_o_1198_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v_merged_1210_);
v___x_1215_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1216_; 
v___x_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
return v___x_1216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___redArg___boxed(lean_object* v_o_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___redArg(v_o_1220_, v___y_1221_);
lean_dec(v___y_1221_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1(lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_scopes_1229_; lean_object* v___x_1230_; lean_object* v_opts_1231_; lean_object* v___x_1232_; 
v___x_1227_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1228_ = lean_st_ref_get(v___y_1225_);
v_scopes_1229_ = lean_ctor_get(v___x_1228_, 2);
lean_inc(v_scopes_1229_);
lean_dec(v___x_1228_);
v___x_1230_ = l_List_head_x21___redArg(v___x_1227_, v_scopes_1229_);
lean_dec(v_scopes_1229_);
v_opts_1231_ = lean_ctor_get(v___x_1230_, 1);
lean_inc_ref(v_opts_1231_);
lean_dec(v___x_1230_);
v___x_1232_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___redArg(v_opts_1231_, v___y_1225_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1___boxed(lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1(v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_coeLinter___lam__0(lean_object* v_x_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v___x_1241_; lean_object* v_a_1242_; lean_object* v___x_1243_; lean_object* v_a_1244_; lean_object* v___x_1245_; uint8_t v___x_1246_; lean_object* v___x_1247_; lean_object* v_a_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1241_ = l_Lean_getMainModule___at___00Lean_Linter_Coe_coeLinter_spec__0___redArg(v___y_1239_);
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1242_);
lean_dec_ref(v___x_1241_);
v___x_1243_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1(v___y_1238_, v___y_1239_);
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref(v___x_1243_);
v___x_1245_ = l_Lean_Linter_Coe_linter_deprecatedCoercions;
v___x_1246_ = l_Lean_Linter_getLinterValue(v___x_1245_, v_a_1244_);
lean_dec(v_a_1244_);
v___x_1247_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Coe_coeLinter_spec__2___redArg(v___y_1239_);
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_a_1248_);
lean_dec_ref(v___x_1247_);
v___x_1249_ = lean_box(0);
v___x_1250_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_Coe_coeLinter_spec__8(v___x_1246_, v_a_1242_, v_a_1248_, v___x_1249_, v___y_1238_, v___y_1239_);
lean_dec(v_a_1248_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1257_ == 0)
{
lean_object* v_unused_1258_; 
v_unused_1258_ = lean_ctor_get(v___x_1250_, 0);
lean_dec(v_unused_1258_);
v___x_1252_ = v___x_1250_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_dec(v___x_1250_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1249_);
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1249_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
else
{
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Coe_coeLinter___lam__0___boxed(lean_object* v_x_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lean_Linter_Coe_coeLinter___lam__0(v_x_1259_, v___y_1260_, v___y_1261_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
lean_dec(v_x_1259_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1(lean_object* v_o_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___redArg(v_o_1275_, v___y_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1___boxed(lean_object* v_o_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Coe_coeLinter_spec__1_spec__1(v_o_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6(uint8_t v___x_1285_, lean_object* v_i_1286_, lean_object* v_a_1287_, lean_object* v_as_1288_, lean_object* v_as_x27_1289_, lean_object* v_b_1290_, lean_object* v_a_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___redArg(v___x_1285_, v_i_1286_, v_a_1287_, v_as_x27_1289_, v_b_1290_, v___y_1292_, v___y_1293_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6___boxed(lean_object* v___x_1296_, lean_object* v_i_1297_, lean_object* v_a_1298_, lean_object* v_as_1299_, lean_object* v_as_x27_1300_, lean_object* v_b_1301_, lean_object* v_a_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
uint8_t v___x_12063__boxed_1306_; lean_object* v_res_1307_; 
v___x_12063__boxed_1306_ = lean_unbox(v___x_1296_);
v_res_1307_ = l_List_forIn_x27_loop___at___00Lean_Linter_Coe_coeLinter_spec__6(v___x_12063__boxed_1306_, v_i_1297_, v_a_1298_, v_as_1299_, v_as_x27_1300_, v_b_1301_, v_a_1302_, v___y_1303_, v___y_1304_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v_as_x27_1300_);
lean_dec(v_as_1299_);
lean_dec(v_a_1298_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8(lean_object* v_msgData_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___redArg(v_msgData_1308_, v___y_1310_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8___boxed(lean_object* v_msgData_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_Coe_coeLinter_spec__5_spec__7_spec__8(v_msgData_1313_, v___y_1314_, v___y_1315_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12(lean_object* v_00_u03b1_1318_, lean_object* v_msg_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___redArg(v_msg_1319_, v___y_1320_, v___y_1321_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12___boxed(lean_object* v_00_u03b1_1324_, lean_object* v_msg_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__12(v_00_u03b1_1324_, v_msg_1325_, v___y_1326_, v___y_1327_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10(lean_object* v_00_u03b1_1330_, lean_object* v_preNode_1331_, lean_object* v_postNode_1332_, lean_object* v_x_1333_, lean_object* v_x_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___redArg(v_preNode_1331_, v_postNode_1332_, v_x_1333_, v_x_1334_, v___y_1335_, v___y_1336_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10___boxed(lean_object* v_00_u03b1_1339_, lean_object* v_preNode_1340_, lean_object* v_postNode_1341_, lean_object* v_x_1342_, lean_object* v_x_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10(v_00_u03b1_1339_, v_preNode_1340_, v_postNode_1341_, v_x_1342_, v_x_1343_, v___y_1344_, v___y_1345_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13(lean_object* v_00_u03b1_1348_, lean_object* v_preNode_1349_, lean_object* v_postNode_1350_, lean_object* v___x_1351_, lean_object* v_x_1352_, lean_object* v_x_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___redArg(v_preNode_1349_, v_postNode_1350_, v___x_1351_, v_x_1352_, v_x_1353_, v___y_1354_, v___y_1355_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13___boxed(lean_object* v_00_u03b1_1358_, lean_object* v_preNode_1359_, lean_object* v_postNode_1360_, lean_object* v___x_1361_, lean_object* v_x_1362_, lean_object* v_x_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_Coe_coeLinter_spec__7_spec__10_spec__13(v_00_u03b1_1358_, v_preNode_1359_, v_postNode_1360_, v___x_1361_, v_x_1362_, v_x_1363_, v___y_1364_, v___y_1365_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_650813316____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = ((lean_object*)(l_Lean_Linter_Coe_coeLinter));
v___x_1370_ = l_Lean_Elab_Command_addLinter(v___x_1369_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_650813316____hygCtx___hyg_2____boxed(lean_object* v_a_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_650813316____hygCtx___hyg_2_();
return v_res_1372_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Coe(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_2393295658____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Coe_linter_deprecatedCoercions = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Coe_linter_deprecatedCoercions);
lean_dec_ref(res);
res = l___private_Lean_Linter_Coe_0__Lean_Linter_Coe_initFn_00___x40_Lean_Linter_Coe_650813316____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Coe(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Coe(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Coe(builtin);
}
#ifdef __cplusplus
}
#endif
