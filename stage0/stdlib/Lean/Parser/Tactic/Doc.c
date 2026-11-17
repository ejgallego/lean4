// Lean compiler output
// Module: Lean.Parser.Tactic.Doc
// Imports: public import Lean.Environment import Lean.Elab.InfoTree.Main meta import Lean.Parser.Attr import Lean.Parser.Extension import Lean.ExtraModUses
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_andList(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Parser_getSyntaxNodeKindCategories(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_parserExtension;
extern lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Parser_registerParserAttributeHook(lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_Doc_isTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Parser_Tactic_Doc_isTactic___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_isTactic___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_Doc_isTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_Doc_isTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Parser_Tactic_Doc_isTactic___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_isTactic___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_isTactic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_isTactic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "tacticAlternativeExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(73, 93, 47, 100, 105, 134, 228, 150)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_alternativeOfTactic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__2(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__4_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__5 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__5_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__10_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "` is itself an alternative for `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "` is not a tactic (it is in the categor"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ies"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Invalid `["};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` attribute syntax"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is not a tactic"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_alt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(185, 29, 168, 181, 197, 113, 106, 176)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 58, 155, 4, 51, 160, 88)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(82, 168, 115, 176, 65, 44, 32, 74)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(170, 127, 150, 230, 147, 51, 9, 44)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed, .m_arity = 12, .m_num_fixed = 6, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(171, 201, 216, 96, 187, 41, 25, 8)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(150, 217, 225, 249, 92, 227, 115, 9)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 73, 235, 188, 43, 204, 182, 169)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 40, 120, 84, 223, 15, 213, 179)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 14, 153, 180, 178, 10, 178, 110)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 228, 109, 71, 114, 58, 146, 87)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(102, 220, 235, 94, 119, 251, 240, 121)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(239, 121, 233, 68, 41, 52, 222, 209)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 103, 238, 221, 135, 73, 246, 74)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 42, 205, 170, 76, 149, 101, 166)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(187, 231, 66, 168, 91, 162, 207, 65)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 121, .m_capacity = 121, .m_length = 120, .m_data = "Register a tactic parser as an alternative form of an existing tactic, so they can be grouped together in documentation."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "knownTacticTagExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(91, 95, 108, 201, 158, 34, 35, 73)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
static const lean_ctor_object l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tacticTagExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 16, 159, 45, 73, 112, 111, 154)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticTagExt;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "(expected "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Unknown tag `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "` "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "one of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ", ..."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "(no tags defined)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` is an alternative form of `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_tag"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 132, 153, 94, 172, 4, 109, 157)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed, .m_arity = 10, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1176478476) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(6, 145, 207, 84, 40, 68, 96, 133)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 222, 3, 19, 240, 88, 68, 38)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 217, 170, 202, 224, 178, 78, 10)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(228, 145, 95, 106, 189, 62, 63, 24)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 116, .m_capacity = 116, .m_length = 115, .m_data = "Register a tactic parser as an alternative of an existing tactic, so they can be grouped together in documentation."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tacticDocExtExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(149, 237, 208, 207, 38, 173, 216, 107)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "   "};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__2(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " * "};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n\nExtensions:\n\n"};
static const lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensionString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticNameExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 229, 37, 106, 74, 105, 187, 225)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticNameExt;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "The tactic `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` already has the custom name `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "` is defined in an imported module, but custom names can only be added in the tactic's defining module."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is defined in `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "`, but custom names can only be added in the tactic's defining module."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_name"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(157, 250, 159, 49, 179, 121, 155, 115)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed, .m_arity = 11, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 132, .m_capacity = 132, .m_length = 131, .m_data = "Registers a custom name for a tactic. This custom name should be a prefix of the tactic's syntax, because it is used in completion."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "` is not a tactic, but it was assigned a tactic name `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(lean_object* v_keys_1_, lean_object* v_i_2_, lean_object* v_k_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_array_get_size(v_keys_1_);
v___x_5_ = lean_nat_dec_lt(v_i_2_, v___x_4_);
if (v___x_5_ == 0)
{
lean_dec(v_i_2_);
return v___x_5_;
}
else
{
lean_object* v_k_x27_6_; uint8_t v___x_7_; 
v_k_x27_6_ = lean_array_fget_borrowed(v_keys_1_, v_i_2_);
v___x_7_ = lean_name_eq(v_k_3_, v_k_x27_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_add(v_i_2_, v___x_8_);
lean_dec(v_i_2_);
v_i_2_ = v___x_9_;
goto _start;
}
else
{
lean_dec(v_i_2_);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_keys_11_, lean_object* v_i_12_, lean_object* v_k_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(v_keys_11_, v_i_12_, v_k_13_);
lean_dec(v_k_13_);
lean_dec_ref(v_keys_11_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(lean_object* v_x_16_, size_t v_x_17_, lean_object* v_x_18_){
_start:
{
if (lean_obj_tag(v_x_16_) == 0)
{
lean_object* v_es_19_; lean_object* v___x_20_; size_t v___x_21_; size_t v___x_22_; lean_object* v_j_23_; lean_object* v___x_24_; 
v_es_19_ = lean_ctor_get(v_x_16_, 0);
v___x_20_ = lean_box(2);
v___x_21_ = ((size_t)31ULL);
v___x_22_ = lean_usize_land(v_x_17_, v___x_21_);
v_j_23_ = lean_usize_to_nat(v___x_22_);
v___x_24_ = lean_array_get_borrowed(v___x_20_, v_es_19_, v_j_23_);
lean_dec(v_j_23_);
switch(lean_obj_tag(v___x_24_))
{
case 0:
{
lean_object* v_key_25_; uint8_t v___x_26_; 
v_key_25_ = lean_ctor_get(v___x_24_, 0);
v___x_26_ = lean_name_eq(v_x_18_, v_key_25_);
return v___x_26_;
}
case 1:
{
lean_object* v_node_27_; size_t v___x_28_; size_t v___x_29_; 
v_node_27_ = lean_ctor_get(v___x_24_, 0);
v___x_28_ = ((size_t)5ULL);
v___x_29_ = lean_usize_shift_right(v_x_17_, v___x_28_);
v_x_16_ = v_node_27_;
v_x_17_ = v___x_29_;
goto _start;
}
default: 
{
uint8_t v___x_31_; 
v___x_31_ = 0;
return v___x_31_;
}
}
}
else
{
lean_object* v_ks_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v_ks_32_ = lean_ctor_get(v_x_16_, 0);
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(v_ks_32_, v___x_33_, v_x_18_);
return v___x_34_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg___boxed(lean_object* v_x_35_, lean_object* v_x_36_, lean_object* v_x_37_){
_start:
{
size_t v_x_357__boxed_38_; uint8_t v_res_39_; lean_object* v_r_40_; 
v_x_357__boxed_38_ = lean_unbox_usize(v_x_36_);
lean_dec(v_x_36_);
v_res_39_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(v_x_35_, v_x_357__boxed_38_, v_x_37_);
lean_dec(v_x_37_);
lean_dec_ref(v_x_35_);
v_r_40_ = lean_box(v_res_39_);
return v_r_40_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
uint64_t v___y_44_; 
if (lean_obj_tag(v_x_42_) == 0)
{
uint64_t v___x_47_; 
v___x_47_ = 1723ULL;
v___y_44_ = v___x_47_;
goto v___jp_43_;
}
else
{
uint64_t v_hash_48_; 
v_hash_48_ = lean_ctor_get_uint64(v_x_42_, sizeof(void*)*2);
v___y_44_ = v_hash_48_;
goto v___jp_43_;
}
v___jp_43_:
{
size_t v___x_45_; uint8_t v___x_46_; 
v___x_45_ = lean_uint64_to_usize(v___y_44_);
v___x_46_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(v_x_41_, v___x_45_, v_x_42_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg___boxed(lean_object* v_x_49_, lean_object* v_x_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(v_x_49_, v_x_50_);
lean_dec(v_x_50_);
lean_dec_ref(v_x_49_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_53_, lean_object* v_vals_54_, lean_object* v_i_55_, lean_object* v_k_56_){
_start:
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_array_get_size(v_keys_53_);
v___x_58_ = lean_nat_dec_lt(v_i_55_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; 
lean_dec(v_i_55_);
v___x_59_ = lean_box(0);
return v___x_59_;
}
else
{
lean_object* v_k_x27_60_; uint8_t v___x_61_; 
v_k_x27_60_ = lean_array_fget_borrowed(v_keys_53_, v_i_55_);
v___x_61_ = lean_name_eq(v_k_56_, v_k_x27_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(1u);
v___x_63_ = lean_nat_add(v_i_55_, v___x_62_);
lean_dec(v_i_55_);
v_i_55_ = v___x_63_;
goto _start;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_array_fget_borrowed(v_vals_54_, v_i_55_);
lean_dec(v_i_55_);
lean_inc(v___x_65_);
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_67_, lean_object* v_vals_68_, lean_object* v_i_69_, lean_object* v_k_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(v_keys_67_, v_vals_68_, v_i_69_, v_k_70_);
lean_dec(v_k_70_);
lean_dec_ref(v_vals_68_);
lean_dec_ref(v_keys_67_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(lean_object* v_x_72_, size_t v_x_73_, lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_x_72_) == 0)
{
lean_object* v_es_75_; lean_object* v___x_76_; size_t v___x_77_; size_t v___x_78_; lean_object* v_j_79_; lean_object* v___x_80_; 
v_es_75_ = lean_ctor_get(v_x_72_, 0);
v___x_76_ = lean_box(2);
v___x_77_ = ((size_t)31ULL);
v___x_78_ = lean_usize_land(v_x_73_, v___x_77_);
v_j_79_ = lean_usize_to_nat(v___x_78_);
v___x_80_ = lean_array_get_borrowed(v___x_76_, v_es_75_, v_j_79_);
lean_dec(v_j_79_);
switch(lean_obj_tag(v___x_80_))
{
case 0:
{
lean_object* v_key_81_; lean_object* v_val_82_; uint8_t v___x_83_; 
v_key_81_ = lean_ctor_get(v___x_80_, 0);
v_val_82_ = lean_ctor_get(v___x_80_, 1);
v___x_83_ = lean_name_eq(v_x_74_, v_key_81_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
lean_object* v___x_85_; 
lean_inc(v_val_82_);
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v_val_82_);
return v___x_85_;
}
}
case 1:
{
lean_object* v_node_86_; size_t v___x_87_; size_t v___x_88_; 
v_node_86_ = lean_ctor_get(v___x_80_, 0);
v___x_87_ = ((size_t)5ULL);
v___x_88_ = lean_usize_shift_right(v_x_73_, v___x_87_);
v_x_72_ = v_node_86_;
v_x_73_ = v___x_88_;
goto _start;
}
default: 
{
lean_object* v___x_90_; 
v___x_90_ = lean_box(0);
return v___x_90_;
}
}
}
else
{
lean_object* v_ks_91_; lean_object* v_vs_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_ks_91_ = lean_ctor_get(v_x_72_, 0);
v_vs_92_ = lean_ctor_get(v_x_72_, 1);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(v_ks_91_, v_vs_92_, v___x_93_, v_x_74_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg___boxed(lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
size_t v_x_432__boxed_98_; lean_object* v_res_99_; 
v_x_432__boxed_98_ = lean_unbox_usize(v_x_96_);
lean_dec(v_x_96_);
v_res_99_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(v_x_95_, v_x_432__boxed_98_, v_x_97_);
lean_dec(v_x_97_);
lean_dec_ref(v_x_95_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
uint64_t v___y_103_; 
if (lean_obj_tag(v_x_101_) == 0)
{
uint64_t v___x_106_; 
v___x_106_ = 1723ULL;
v___y_103_ = v___x_106_;
goto v___jp_102_;
}
else
{
uint64_t v_hash_107_; 
v_hash_107_ = lean_ctor_get_uint64(v_x_101_, sizeof(void*)*2);
v___y_103_ = v_hash_107_;
goto v___jp_102_;
}
v___jp_102_:
{
size_t v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_uint64_to_usize(v___y_103_);
v___x_105_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(v_x_100_, v___x_104_, v_x_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg___boxed(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(v_x_108_, v_x_109_);
lean_dec(v_x_109_);
lean_dec_ref(v_x_108_);
return v_res_110_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_isTactic(lean_object* v_env_114_, lean_object* v_kind_115_){
_start:
{
lean_object* v___x_116_; lean_object* v_ext_117_; lean_object* v_toEnvExtension_118_; lean_object* v_asyncMode_119_; lean_object* v___x_120_; uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v_categories_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_116_ = l_Lean_Parser_parserExtension;
v_ext_117_ = lean_ctor_get(v___x_116_, 1);
v_toEnvExtension_118_ = lean_ctor_get(v_ext_117_, 0);
v_asyncMode_119_ = lean_ctor_get(v_toEnvExtension_118_, 2);
v___x_120_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_121_ = 0;
v___x_122_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_120_, v___x_116_, v_env_114_, v_asyncMode_119_, v___x_121_);
v_categories_123_ = lean_ctor_get(v___x_122_, 2);
lean_inc_ref(v_categories_123_);
lean_dec(v___x_122_);
v___x_124_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_isTactic___closed__1));
v___x_125_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(v_categories_123_, v___x_124_);
lean_dec_ref(v_categories_123_);
if (lean_obj_tag(v___x_125_) == 1)
{
lean_object* v_val_126_; lean_object* v_kinds_127_; uint8_t v___x_128_; 
v_val_126_ = lean_ctor_get(v___x_125_, 0);
lean_inc(v_val_126_);
lean_dec_ref_known(v___x_125_, 1);
v_kinds_127_ = lean_ctor_get(v_val_126_, 1);
lean_inc_ref(v_kinds_127_);
lean_dec(v_val_126_);
v___x_128_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(v_kinds_127_, v_kind_115_);
lean_dec_ref(v_kinds_127_);
return v___x_128_;
}
else
{
lean_dec(v___x_125_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_isTactic___boxed(lean_object* v_env_129_, lean_object* v_kind_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_129_, v_kind_130_);
lean_dec(v_kind_130_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0(lean_object* v_00_u03b2_133_, lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(v_x_134_, v_x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___boxed(lean_object* v_00_u03b2_137_, lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0(v_00_u03b2_137_, v_x_138_, v_x_139_);
lean_dec(v_x_139_);
lean_dec_ref(v_x_138_);
return v_res_140_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1(lean_object* v_00_u03b2_141_, lean_object* v_x_142_, lean_object* v_x_143_){
_start:
{
uint8_t v___x_144_; 
v___x_144_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(v_x_142_, v_x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___boxed(lean_object* v_00_u03b2_145_, lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1(v_00_u03b2_145_, v_x_146_, v_x_147_);
lean_dec(v_x_147_);
lean_dec_ref(v_x_146_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0(lean_object* v_00_u03b2_150_, lean_object* v_x_151_, size_t v_x_152_, lean_object* v_x_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(v_x_151_, v_x_152_, v_x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___boxed(lean_object* v_00_u03b2_155_, lean_object* v_x_156_, lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
size_t v_x_536__boxed_159_; lean_object* v_res_160_; 
v_x_536__boxed_159_ = lean_unbox_usize(v_x_157_);
lean_dec(v_x_157_);
v_res_160_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0(v_00_u03b2_155_, v_x_156_, v_x_536__boxed_159_, v_x_158_);
lean_dec(v_x_158_);
lean_dec_ref(v_x_156_);
return v_res_160_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2(lean_object* v_00_u03b2_161_, lean_object* v_x_162_, size_t v_x_163_, lean_object* v_x_164_){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(v_x_162_, v_x_163_, v_x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___boxed(lean_object* v_00_u03b2_166_, lean_object* v_x_167_, lean_object* v_x_168_, lean_object* v_x_169_){
_start:
{
size_t v_x_547__boxed_170_; uint8_t v_res_171_; lean_object* v_r_172_; 
v_x_547__boxed_170_ = lean_unbox_usize(v_x_168_);
lean_dec(v_x_168_);
v_res_171_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2(v_00_u03b2_166_, v_x_167_, v_x_547__boxed_170_, v_x_169_);
lean_dec(v_x_169_);
lean_dec_ref(v_x_167_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_173_, lean_object* v_keys_174_, lean_object* v_vals_175_, lean_object* v_heq_176_, lean_object* v_i_177_, lean_object* v_k_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(v_keys_174_, v_vals_175_, v_i_177_, v_k_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_180_, lean_object* v_keys_181_, lean_object* v_vals_182_, lean_object* v_heq_183_, lean_object* v_i_184_, lean_object* v_k_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1(v_00_u03b2_180_, v_keys_181_, v_vals_182_, v_heq_183_, v_i_184_, v_k_185_);
lean_dec(v_k_185_);
lean_dec_ref(v_vals_182_);
lean_dec_ref(v_keys_181_);
return v_res_186_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_187_, lean_object* v_keys_188_, lean_object* v_vals_189_, lean_object* v_heq_190_, lean_object* v_i_191_, lean_object* v_k_192_){
_start:
{
uint8_t v___x_193_; 
v___x_193_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(v_keys_188_, v_i_191_, v_k_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_194_, lean_object* v_keys_195_, lean_object* v_vals_196_, lean_object* v_heq_197_, lean_object* v_i_198_, lean_object* v_k_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4(v_00_u03b2_194_, v_keys_195_, v_vals_196_, v_heq_197_, v_i_198_, v_k_199_);
lean_dec(v_k_199_);
lean_dec_ref(v_vals_196_);
lean_dec_ref(v_keys_195_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_as_202_, lean_object* v_x_203_){
_start:
{
lean_object* v_fst_204_; lean_object* v_snd_205_; lean_object* v___x_206_; 
v_fst_204_ = lean_ctor_get(v_x_203_, 0);
lean_inc(v_fst_204_);
v_snd_205_ = lean_ctor_get(v_x_203_, 1);
lean_inc(v_snd_205_);
lean_dec_ref(v_x_203_);
v___x_206_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_204_, v_snd_205_, v_as_202_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_207_, lean_object* v_pivot_208_, lean_object* v_as_209_, lean_object* v_i_210_, lean_object* v_k_211_){
_start:
{
uint8_t v___x_212_; 
v___x_212_ = lean_nat_dec_lt(v_k_211_, v_hi_207_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec(v_k_211_);
v___x_213_ = lean_array_fswap(v_as_209_, v_i_210_, v_hi_207_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v_i_210_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
return v___x_214_;
}
else
{
lean_object* v___x_215_; lean_object* v_fst_216_; lean_object* v_fst_217_; uint8_t v___x_218_; 
v___x_215_ = lean_array_fget_borrowed(v_as_209_, v_k_211_);
v_fst_216_ = lean_ctor_get(v___x_215_, 0);
v_fst_217_ = lean_ctor_get(v_pivot_208_, 0);
v___x_218_ = l_Lean_Name_quickLt(v_fst_216_, v_fst_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(1u);
v___x_220_ = lean_nat_add(v_k_211_, v___x_219_);
lean_dec(v_k_211_);
v_k_211_ = v___x_220_;
goto _start;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_222_ = lean_array_fswap(v_as_209_, v_i_210_, v_k_211_);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_nat_add(v_i_210_, v___x_223_);
lean_dec(v_i_210_);
v___x_225_ = lean_nat_add(v_k_211_, v___x_223_);
lean_dec(v_k_211_);
v_as_209_ = v___x_222_;
v_i_210_ = v___x_224_;
v_k_211_ = v___x_225_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_227_, lean_object* v_pivot_228_, lean_object* v_as_229_, lean_object* v_i_230_, lean_object* v_k_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_227_, v_pivot_228_, v_as_229_, v_i_230_, v_k_231_);
lean_dec_ref(v_pivot_228_);
lean_dec(v_hi_227_);
return v_res_232_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_233_, lean_object* v_x2_234_){
_start:
{
lean_object* v_fst_235_; lean_object* v_fst_236_; uint8_t v___x_237_; 
v_fst_235_ = lean_ctor_get(v_x1_233_, 0);
v_fst_236_ = lean_ctor_get(v_x2_234_, 0);
v___x_237_ = l_Lean_Name_quickLt(v_fst_235_, v_fst_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_238_, lean_object* v_x2_239_){
_start:
{
uint8_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_238_, v_x2_239_);
lean_dec_ref(v_x2_239_);
lean_dec_ref(v_x1_238_);
v_r_241_ = lean_box(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_242_, lean_object* v_as_243_, lean_object* v_lo_244_, lean_object* v_hi_245_){
_start:
{
lean_object* v___y_247_; uint8_t v___x_257_; 
v___x_257_ = lean_nat_dec_lt(v_lo_244_, v_hi_245_);
if (v___x_257_ == 0)
{
lean_dec(v_lo_244_);
return v_as_243_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v_mid_260_; lean_object* v___y_262_; lean_object* v___y_268_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_258_ = lean_nat_add(v_lo_244_, v_hi_245_);
v___x_259_ = lean_unsigned_to_nat(1u);
v_mid_260_ = lean_nat_shiftr(v___x_258_, v___x_259_);
lean_dec(v___x_258_);
v___x_273_ = lean_array_fget_borrowed(v_as_243_, v_mid_260_);
v___x_274_ = lean_array_fget_borrowed(v_as_243_, v_lo_244_);
v___x_275_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_273_, v___x_274_);
if (v___x_275_ == 0)
{
v___y_268_ = v_as_243_;
goto v___jp_267_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = lean_array_fswap(v_as_243_, v_lo_244_, v_mid_260_);
v___y_268_ = v___x_276_;
goto v___jp_267_;
}
v___jp_261_:
{
lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_263_ = lean_array_fget_borrowed(v___y_262_, v_mid_260_);
v___x_264_ = lean_array_fget_borrowed(v___y_262_, v_hi_245_);
v___x_265_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_dec(v_mid_260_);
v___y_247_ = v___y_262_;
goto v___jp_246_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_array_fswap(v___y_262_, v_mid_260_, v_hi_245_);
lean_dec(v_mid_260_);
v___y_247_ = v___x_266_;
goto v___jp_246_;
}
}
v___jp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_269_ = lean_array_fget_borrowed(v___y_268_, v_hi_245_);
v___x_270_ = lean_array_fget_borrowed(v___y_268_, v_lo_244_);
v___x_271_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_269_, v___x_270_);
if (v___x_271_ == 0)
{
v___y_262_ = v___y_268_;
goto v___jp_261_;
}
else
{
lean_object* v___x_272_; 
v___x_272_ = lean_array_fswap(v___y_268_, v_lo_244_, v_hi_245_);
v___y_262_ = v___x_272_;
goto v___jp_261_;
}
}
}
v___jp_246_:
{
lean_object* v_pivot_248_; lean_object* v___x_249_; lean_object* v_fst_250_; lean_object* v_snd_251_; uint8_t v___x_252_; 
v_pivot_248_ = lean_array_fget(v___y_247_, v_hi_245_);
lean_inc_n(v_lo_244_, 2);
v___x_249_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_245_, v_pivot_248_, v___y_247_, v_lo_244_, v_lo_244_);
lean_dec(v_pivot_248_);
v_fst_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_fst_250_);
v_snd_251_ = lean_ctor_get(v___x_249_, 1);
lean_inc(v_snd_251_);
lean_dec_ref(v___x_249_);
v___x_252_ = lean_nat_dec_le(v_hi_245_, v_fst_250_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v_n_242_, v_snd_251_, v_lo_244_, v_fst_250_);
v___x_254_ = lean_unsigned_to_nat(1u);
v___x_255_ = lean_nat_add(v_fst_250_, v___x_254_);
lean_dec(v_fst_250_);
v_as_243_ = v___x_253_;
v_lo_244_ = v___x_255_;
goto _start;
}
else
{
lean_dec(v_fst_250_);
lean_dec(v_lo_244_);
return v_snd_251_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_277_, lean_object* v_as_278_, lean_object* v_lo_279_, lean_object* v_hi_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v_n_277_, v_as_278_, v_lo_279_, v_hi_280_);
lean_dec(v_hi_280_);
lean_dec(v_n_277_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_282_, lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
lean_object* v_k_284_; lean_object* v_v_285_; lean_object* v_l_286_; lean_object* v_r_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_k_284_ = lean_ctor_get(v_x_283_, 1);
v_v_285_ = lean_ctor_get(v_x_283_, 2);
v_l_286_ = lean_ctor_get(v_x_283_, 3);
v_r_287_ = lean_ctor_get(v_x_283_, 4);
v___x_288_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v_init_282_, v_l_286_);
lean_inc(v_v_285_);
lean_inc(v_k_284_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v_k_284_);
lean_ctor_set(v___x_289_, 1, v_v_285_);
v___x_290_ = lean_array_push(v___x_288_, v___x_289_);
v_init_282_ = v___x_290_;
v_x_283_ = v_r_287_;
goto _start;
}
else
{
return v_init_282_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_292_, lean_object* v_x_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v_init_292_, v_x_293_);
lean_dec(v_x_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_x_297_, lean_object* v_s_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___y_304_; lean_object* v___y_305_; uint8_t v___x_308_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_301_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v___x_300_, v_s_298_);
v___x_302_ = lean_array_get_size(v___x_301_);
v___x_308_ = lean_nat_dec_eq(v___x_302_, v___x_299_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___y_312_; uint8_t v___x_314_; 
v___x_309_ = lean_unsigned_to_nat(1u);
v___x_310_ = lean_nat_sub(v___x_302_, v___x_309_);
v___x_314_ = lean_nat_dec_le(v___x_299_, v___x_310_);
if (v___x_314_ == 0)
{
lean_inc(v___x_310_);
v___y_312_ = v___x_310_;
goto v___jp_311_;
}
else
{
v___y_312_ = v___x_299_;
goto v___jp_311_;
}
v___jp_311_:
{
uint8_t v___x_313_; 
v___x_313_ = lean_nat_dec_le(v___y_312_, v___x_310_);
if (v___x_313_ == 0)
{
lean_dec(v___x_310_);
lean_inc(v___y_312_);
v___y_304_ = v___y_312_;
v___y_305_ = v___y_312_;
goto v___jp_303_;
}
else
{
v___y_304_ = v___y_312_;
v___y_305_ = v___x_310_;
goto v___jp_303_;
}
}
}
else
{
lean_object* v___x_315_; 
lean_inc_ref_n(v___x_301_, 2);
v___x_315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_315_, 0, v___x_301_);
lean_ctor_set(v___x_315_, 1, v___x_301_);
lean_ctor_set(v___x_315_, 2, v___x_301_);
return v___x_315_;
}
v___jp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v___x_302_, v___x_301_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_inc_ref_n(v___x_306_, 2);
v___x_307_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
lean_ctor_set(v___x_307_, 2, v___x_306_);
return v___x_307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_x_316_, lean_object* v_s_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v_x_316_, v_s_317_);
lean_dec(v_s_317_);
lean_dec_ref(v_x_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_x_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_box(0);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_x_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v_x_321_);
lean_dec(v_x_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_es_323_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_326_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v___x_325_, v_es_323_);
v___x_327_ = lean_array_get_size(v___x_326_);
v___x_328_ = lean_nat_dec_eq(v___x_327_, v___x_324_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___y_332_; uint8_t v___x_336_; 
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_nat_sub(v___x_327_, v___x_329_);
v___x_336_ = lean_nat_dec_le(v___x_324_, v___x_330_);
if (v___x_336_ == 0)
{
lean_inc(v___x_330_);
v___y_332_ = v___x_330_;
goto v___jp_331_;
}
else
{
v___y_332_ = v___x_324_;
goto v___jp_331_;
}
v___jp_331_:
{
uint8_t v___x_333_; 
v___x_333_ = lean_nat_dec_le(v___y_332_, v___x_330_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v___x_330_);
lean_inc(v___y_332_);
v___x_334_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v___x_327_, v___x_326_, v___y_332_, v___y_332_);
lean_dec(v___y_332_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v___x_327_, v___x_326_, v___y_332_, v___x_330_);
lean_dec(v___x_330_);
return v___x_335_;
}
}
}
else
{
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_es_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v_es_337_);
lean_dec(v_es_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v___x_339_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_339_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v___x_342_, lean_object* v___y_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v___x_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v___x_345_, lean_object* v_x_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_345_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v___x_350_, lean_object* v_x_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v___x_350_, v_x_351_, v___y_352_);
lean_dec_ref(v___y_352_);
lean_dec_ref(v_x_351_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_389_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_();
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0(lean_object* v_init_392_, lean_object* v_t_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v_init_392_, v_t_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_395_, lean_object* v_t_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0(v_init_395_, v_t_396_);
lean_dec(v_t_396_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1(lean_object* v_n_398_, lean_object* v_as_399_, lean_object* v_lo_400_, lean_object* v_hi_401_, lean_object* v_w_402_, lean_object* v_hlo_403_, lean_object* v_hhi_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v_n_398_, v_as_399_, v_lo_400_, v_hi_401_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_406_, lean_object* v_as_407_, lean_object* v_lo_408_, lean_object* v_hi_409_, lean_object* v_w_410_, lean_object* v_hlo_411_, lean_object* v_hhi_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1(v_n_406_, v_as_407_, v_lo_408_, v_hi_409_, v_w_410_, v_hlo_411_, v_hhi_412_);
lean_dec(v_hi_409_);
lean_dec(v_n_406_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_414_, lean_object* v_lo_415_, lean_object* v_hi_416_, lean_object* v_hhi_417_, lean_object* v_pivot_418_, lean_object* v_as_419_, lean_object* v_i_420_, lean_object* v_k_421_, lean_object* v_ilo_422_, lean_object* v_ik_423_, lean_object* v_w_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_416_, v_pivot_418_, v_as_419_, v_i_420_, v_k_421_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_426_, lean_object* v_lo_427_, lean_object* v_hi_428_, lean_object* v_hhi_429_, lean_object* v_pivot_430_, lean_object* v_as_431_, lean_object* v_i_432_, lean_object* v_k_433_, lean_object* v_ilo_434_, lean_object* v_ik_435_, lean_object* v_w_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2(v_n_426_, v_lo_427_, v_hi_428_, v_hhi_429_, v_pivot_430_, v_as_431_, v_i_432_, v_k_433_, v_ilo_434_, v_ik_435_, v_w_436_);
lean_dec_ref(v_pivot_430_);
lean_dec(v_hi_428_);
lean_dec(v_lo_427_);
lean_dec(v_n_426_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(lean_object* v_as_438_, lean_object* v_k_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v_m_444_; lean_object* v_a_445_; uint8_t v___x_446_; 
v___x_442_ = lean_nat_add(v_x_440_, v_x_441_);
v___x_443_ = lean_unsigned_to_nat(1u);
v_m_444_ = lean_nat_shiftr(v___x_442_, v___x_443_);
lean_dec(v___x_442_);
v_a_445_ = lean_array_fget_borrowed(v_as_438_, v_m_444_);
v___x_446_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_445_, v_k_439_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; 
lean_dec(v_x_441_);
v___x_447_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_439_, v_a_445_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
lean_dec(v_m_444_);
lean_dec(v_x_440_);
lean_inc(v_a_445_);
v___x_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_448_, 0, v_a_445_);
return v___x_448_;
}
else
{
lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_nat_dec_eq(v_m_444_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_nat_sub(v_m_444_, v___x_443_);
lean_dec(v_m_444_);
v___x_452_ = lean_nat_dec_lt(v___x_451_, v_x_440_);
if (v___x_452_ == 0)
{
v_x_441_ = v___x_451_;
goto _start;
}
else
{
lean_object* v___x_454_; 
lean_dec(v___x_451_);
lean_dec(v_x_440_);
v___x_454_ = lean_box(0);
return v___x_454_;
}
}
else
{
lean_object* v___x_455_; 
lean_dec(v_m_444_);
lean_dec(v_x_440_);
v___x_455_ = lean_box(0);
return v___x_455_;
}
}
}
else
{
lean_object* v___x_456_; uint8_t v___x_457_; 
lean_dec(v_x_440_);
v___x_456_ = lean_nat_add(v_m_444_, v___x_443_);
lean_dec(v_m_444_);
v___x_457_ = lean_nat_dec_le(v___x_456_, v_x_441_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec(v___x_456_);
lean_dec(v_x_441_);
v___x_458_ = lean_box(0);
return v___x_458_;
}
else
{
v_x_440_ = v___x_456_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg___boxed(lean_object* v_as_460_, lean_object* v_k_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(v_as_460_, v_k_461_, v_x_462_, v_x_463_);
lean_dec_ref(v_k_461_);
lean_dec_ref(v_as_460_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_alternativeOfTactic(lean_object* v_env_465_, lean_object* v_tac_466_){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_box(1);
v___x_468_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_465_, v_tac_466_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v___x_469_; lean_object* v_toEnvExtension_470_; lean_object* v_asyncMode_471_; lean_object* v___x_472_; uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_469_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v_toEnvExtension_470_ = lean_ctor_get(v___x_469_, 0);
v_asyncMode_471_ = lean_ctor_get(v_toEnvExtension_470_, 2);
v___x_472_ = lean_box(0);
v___x_473_ = 0;
v___x_474_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_467_, v___x_469_, v_env_465_, v_asyncMode_471_, v___x_472_, v___x_473_);
v___x_475_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_474_, v_tac_466_);
lean_dec(v_tac_466_);
lean_dec(v___x_474_);
return v___x_475_;
}
else
{
lean_object* v_val_476_; lean_object* v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_val_476_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_val_476_);
lean_dec_ref_known(v___x_468_, 1);
v___x_477_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v___x_478_ = 0;
v___x_479_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_467_, v___x_477_, v_env_465_, v_val_476_, v___x_478_);
lean_dec(v_val_476_);
lean_dec_ref(v_env_465_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_array_get_size(v___x_479_);
v___x_482_ = lean_nat_dec_lt(v___x_480_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
lean_dec_ref(v___x_479_);
lean_dec(v_tac_466_);
v___x_483_ = lean_box(0);
return v___x_483_;
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_484_ = lean_unsigned_to_nat(1u);
v___x_485_ = lean_nat_sub(v___x_481_, v___x_484_);
v___x_486_ = lean_nat_dec_le(v___x_480_, v___x_485_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; 
lean_dec(v___x_485_);
lean_dec_ref(v___x_479_);
lean_dec(v_tac_466_);
v___x_487_ = lean_box(0);
return v___x_487_;
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_box(0);
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v_tac_466_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(v___x_479_, v___x_489_, v___x_480_, v___x_485_);
lean_dec_ref_known(v___x_489_, 2);
lean_dec_ref(v___x_479_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_491_; 
v___x_491_ = lean_box(0);
return v___x_491_;
}
else
{
lean_object* v_val_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
v_val_492_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v___x_490_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_val_492_);
lean_dec(v___x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v_snd_496_; lean_object* v___x_498_; 
v_snd_496_ = lean_ctor_get(v_val_492_, 1);
lean_inc(v_snd_496_);
lean_dec(v_val_492_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v_snd_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_snd_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0(lean_object* v_as_501_, lean_object* v_k_502_, lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(v_as_501_, v_k_502_, v_x_503_, v_x_504_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___boxed(lean_object* v_as_507_, lean_object* v_k_508_, lean_object* v_x_509_, lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0(v_as_507_, v_k_508_, v_x_509_, v_x_510_, v_x_511_);
lean_dec_ref(v_k_508_);
lean_dec_ref(v_as_507_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0(lean_object* v_toPure_513_, lean_object* v_____do__lift_514_){
_start:
{
lean_object* v_a_515_; lean_object* v___x_516_; 
v_a_515_ = lean_ctor_get(v_____do__lift_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref(v_____do__lift_514_);
v___x_516_ = lean_apply_2(v_toPure_513_, lean_box(0), v_a_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1(lean_object* v_tac_517_, lean_object* v_toPure_518_, lean_object* v_a_519_, lean_object* v_b_520_, lean_object* v_c_521_){
_start:
{
uint8_t v___x_522_; 
v___x_522_ = lean_name_eq(v_b_520_, v_tac_517_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec(v_a_519_);
v___x_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_523_, 0, v_c_521_);
v___x_524_ = lean_apply_2(v_toPure_518_, lean_box(0), v___x_523_);
return v___x_524_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_525_ = l_Lean_NameSet_insert(v_c_521_, v_a_519_);
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
v___x_527_ = lean_apply_2(v_toPure_518_, lean_box(0), v___x_526_);
return v___x_527_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1___boxed(lean_object* v_tac_528_, lean_object* v_toPure_529_, lean_object* v_a_530_, lean_object* v_b_531_, lean_object* v_c_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1(v_tac_528_, v_toPure_529_, v_a_530_, v_b_531_, v_c_532_);
lean_dec(v_b_531_);
lean_dec(v_tac_528_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2(lean_object* v_tac_534_, lean_object* v_toPure_535_, lean_object* v_a_536_, lean_object* v_x_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_fst_539_; lean_object* v_snd_540_; uint8_t v___x_541_; 
v_fst_539_ = lean_ctor_get(v_a_536_, 0);
lean_inc(v_fst_539_);
v_snd_540_ = lean_ctor_get(v_a_536_, 1);
lean_inc(v_snd_540_);
lean_dec_ref(v_a_536_);
v___x_541_ = lean_name_eq(v_snd_540_, v_tac_534_);
lean_dec(v_snd_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec(v_fst_539_);
v___x_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_542_, 0, v___y_538_);
v___x_543_ = lean_apply_2(v_toPure_535_, lean_box(0), v___x_542_);
return v___x_543_;
}
else
{
lean_object* v_found_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_found_544_ = l_Lean_NameSet_insert(v___y_538_, v_fst_539_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v_found_544_);
v___x_546_ = lean_apply_2(v_toPure_535_, lean_box(0), v___x_545_);
return v___x_546_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2___boxed(lean_object* v_tac_547_, lean_object* v_toPure_548_, lean_object* v_a_549_, lean_object* v_x_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2(v_tac_547_, v_toPure_548_, v_a_549_, v_x_550_, v___y_551_);
lean_dec(v_tac_547_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3(lean_object* v_toPure_553_, lean_object* v_____s_554_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_555_, 0, v_____s_554_);
v___x_556_ = lean_apply_2(v_toPure_553_, lean_box(0), v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__4(lean_object* v_inst_557_, lean_object* v___f_558_, lean_object* v_toBind_559_, lean_object* v___f_560_, lean_object* v_a_561_, lean_object* v_x_562_, lean_object* v___y_563_){
_start:
{
size_t v_sz_564_; size_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_sz_564_ = lean_array_size(v_a_561_);
v___x_565_ = ((size_t)0ULL);
v___x_566_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_557_, v_a_561_, v___f_558_, v_sz_564_, v___x_565_, v___y_563_);
v___x_567_ = lean_apply_4(v_toBind_559_, lean_box(0), lean_box(0), v___x_566_, v___f_560_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__5(lean_object* v_toPure_568_, lean_object* v_____s_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_apply_2(v_toPure_568_, lean_box(0), v_____s_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6(lean_object* v___x_571_, lean_object* v_toEnvExtension_572_, lean_object* v_env_573_, lean_object* v_asyncMode_574_, lean_object* v___x_575_, uint8_t v___x_576_, lean_object* v_inst_577_, lean_object* v___f_578_, lean_object* v_toBind_579_, lean_object* v___f_580_, lean_object* v_____s_581_){
_start:
{
lean_object* v___x_582_; lean_object* v_importedEntries_583_; size_t v_sz_584_; size_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_582_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_571_, v_toEnvExtension_572_, v_env_573_, v_asyncMode_574_, v___x_575_, v___x_576_);
v_importedEntries_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc_ref(v_importedEntries_583_);
lean_dec(v___x_582_);
v_sz_584_ = lean_array_size(v_importedEntries_583_);
v___x_585_ = ((size_t)0ULL);
v___x_586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_577_, v_importedEntries_583_, v___f_578_, v_sz_584_, v___x_585_, v_____s_581_);
v___x_587_ = lean_apply_4(v_toBind_579_, lean_box(0), lean_box(0), v___x_586_, v___f_580_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6___boxed(lean_object* v___x_588_, lean_object* v_toEnvExtension_589_, lean_object* v_env_590_, lean_object* v_asyncMode_591_, lean_object* v___x_592_, lean_object* v___x_593_, lean_object* v_inst_594_, lean_object* v___f_595_, lean_object* v_toBind_596_, lean_object* v___f_597_, lean_object* v_____s_598_){
_start:
{
uint8_t v___x_391__boxed_599_; lean_object* v_res_600_; 
v___x_391__boxed_599_ = lean_unbox(v___x_593_);
v_res_600_ = l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6(v___x_588_, v_toEnvExtension_589_, v_env_590_, v_asyncMode_591_, v___x_592_, v___x_391__boxed_599_, v_inst_594_, v___f_595_, v_toBind_596_, v___f_597_, v_____s_598_);
lean_dec(v_asyncMode_591_);
lean_dec_ref(v_toEnvExtension_589_);
lean_dec_ref(v___x_588_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__7(lean_object* v___x_601_, lean_object* v_inst_602_, lean_object* v___f_603_, lean_object* v_toBind_604_, lean_object* v___f_605_, lean_object* v___x_606_, lean_object* v___f_607_, lean_object* v___f_608_, lean_object* v_env_609_){
_start:
{
lean_object* v___x_610_; lean_object* v_toEnvExtension_611_; lean_object* v_asyncMode_612_; lean_object* v_found_613_; lean_object* v___x_614_; uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_610_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v_toEnvExtension_611_ = lean_ctor_get(v___x_610_, 0);
v_asyncMode_612_ = lean_ctor_get(v_toEnvExtension_611_, 2);
v_found_613_ = l_Lean_NameSet_empty;
v___x_614_ = lean_box(0);
v___x_615_ = 0;
v___x_616_ = lean_box(v___x_615_);
lean_inc_n(v_toBind_604_, 2);
lean_inc_ref(v_inst_602_);
lean_inc(v_asyncMode_612_);
lean_inc_ref(v_env_609_);
lean_inc_ref(v_toEnvExtension_611_);
v___f_617_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_617_, 0, v___x_601_);
lean_closure_set(v___f_617_, 1, v_toEnvExtension_611_);
lean_closure_set(v___f_617_, 2, v_env_609_);
lean_closure_set(v___f_617_, 3, v_asyncMode_612_);
lean_closure_set(v___f_617_, 4, v___x_614_);
lean_closure_set(v___f_617_, 5, v___x_616_);
lean_closure_set(v___f_617_, 6, v_inst_602_);
lean_closure_set(v___f_617_, 7, v___f_603_);
lean_closure_set(v___f_617_, 8, v_toBind_604_);
lean_closure_set(v___f_617_, 9, v___f_605_);
v___x_618_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_606_, v___x_610_, v_env_609_, v_asyncMode_612_, v___x_614_, v___x_615_);
v___x_619_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_602_, v___f_607_, v_found_613_, v___x_618_);
v___x_620_ = lean_apply_4(v_toBind_604_, lean_box(0), lean_box(0), v___x_619_, v___f_608_);
v___x_621_ = lean_apply_4(v_toBind_604_, lean_box(0), lean_box(0), v___x_620_, v___f_617_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_box(1);
v___x_623_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg(lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_tac_626_){
_start:
{
lean_object* v_toApplicative_627_; lean_object* v_toBind_628_; lean_object* v_getEnv_629_; lean_object* v_toPure_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___f_637_; lean_object* v___f_638_; lean_object* v___f_639_; lean_object* v___x_640_; 
v_toApplicative_627_ = lean_ctor_get(v_inst_624_, 0);
v_toBind_628_ = lean_ctor_get(v_inst_624_, 1);
lean_inc_n(v_toBind_628_, 3);
v_getEnv_629_ = lean_ctor_get(v_inst_625_, 0);
lean_inc(v_getEnv_629_);
lean_dec_ref(v_inst_625_);
v_toPure_630_ = lean_ctor_get(v_toApplicative_627_, 1);
v___x_631_ = lean_box(1);
v___x_632_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
lean_inc_n(v_toPure_630_, 5);
v___f_633_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0), 2, 1);
lean_closure_set(v___f_633_, 0, v_toPure_630_);
lean_inc(v_tac_626_);
v___f_634_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_634_, 0, v_tac_626_);
lean_closure_set(v___f_634_, 1, v_toPure_630_);
v___f_635_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2___boxed), 5, 2);
lean_closure_set(v___f_635_, 0, v_tac_626_);
lean_closure_set(v___f_635_, 1, v_toPure_630_);
v___f_636_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3), 2, 1);
lean_closure_set(v___f_636_, 0, v_toPure_630_);
lean_inc_ref(v_inst_624_);
v___f_637_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__4), 7, 4);
lean_closure_set(v___f_637_, 0, v_inst_624_);
lean_closure_set(v___f_637_, 1, v___f_635_);
lean_closure_set(v___f_637_, 2, v_toBind_628_);
lean_closure_set(v___f_637_, 3, v___f_636_);
v___f_638_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__5), 2, 1);
lean_closure_set(v___f_638_, 0, v_toPure_630_);
v___f_639_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__7), 9, 8);
lean_closure_set(v___f_639_, 0, v___x_632_);
lean_closure_set(v___f_639_, 1, v_inst_624_);
lean_closure_set(v___f_639_, 2, v___f_637_);
lean_closure_set(v___f_639_, 3, v_toBind_628_);
lean_closure_set(v___f_639_, 4, v___f_638_);
lean_closure_set(v___f_639_, 5, v___x_631_);
lean_closure_set(v___f_639_, 6, v___f_634_);
lean_closure_set(v___f_639_, 7, v___f_633_);
v___x_640_ = lean_apply_4(v_toBind_628_, lean_box(0), lean_box(0), v_getEnv_629_, v___f_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases(lean_object* v_m_641_, lean_object* v_inst_642_, lean_object* v_inst_643_, lean_object* v_tac_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_Parser_Tactic_Doc_aliases___redArg(v_inst_642_, v_inst_643_, v_tac_644_);
return v___x_645_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_646_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
return v___x_648_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_649_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_650_ = lean_unsigned_to_nat(0u);
v___x_651_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
lean_ctor_set(v___x_651_, 2, v___x_650_);
lean_ctor_set(v___x_651_, 3, v___x_650_);
lean_ctor_set(v___x_651_, 4, v___x_649_);
lean_ctor_set(v___x_651_, 5, v___x_649_);
lean_ctor_set(v___x_651_, 6, v___x_649_);
lean_ctor_set(v___x_651_, 7, v___x_649_);
lean_ctor_set(v___x_651_, 8, v___x_649_);
lean_ctor_set(v___x_651_, 9, v___x_649_);
lean_ctor_set(v___x_651_, 10, v___x_649_);
return v___x_651_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = lean_unsigned_to_nat(32u);
v___x_653_ = lean_mk_empty_array_with_capacity(v___x_652_);
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_655_ = ((size_t)5ULL);
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = lean_unsigned_to_nat(32u);
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_657_);
v___x_659_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_660_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v___x_658_);
lean_ctor_set(v___x_660_, 2, v___x_656_);
lean_ctor_set(v___x_660_, 3, v___x_656_);
lean_ctor_set_usize(v___x_660_, 4, v___x_655_);
return v___x_660_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_661_ = lean_box(1);
v___x_662_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_663_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_ctor_set(v___x_664_, 1, v___x_662_);
lean_ctor_set(v___x_664_, 2, v___x_661_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_665_, lean_object* v___y_666_, lean_object* v___y_667_){
_start:
{
lean_object* v___x_669_; lean_object* v_toCold_670_; lean_object* v_env_671_; lean_object* v_options_672_; uint8_t v___x_673_; lean_object* v_env_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_669_ = lean_st_ref_get(v___y_667_);
v_toCold_670_ = lean_ctor_get(v___y_666_, 0);
v_env_671_ = lean_ctor_get(v___x_669_, 0);
lean_inc_ref(v_env_671_);
lean_dec(v___x_669_);
v_options_672_ = lean_ctor_get(v_toCold_670_, 2);
v___x_673_ = 0;
v_env_674_ = l_Lean_Environment_setRecordingDeps(v_env_671_, v___x_673_);
v___x_675_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_676_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_672_);
v___x_677_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_677_, 0, v_env_674_);
lean_ctor_set(v___x_677_, 1, v___x_675_);
lean_ctor_set(v___x_677_, 2, v___x_676_);
lean_ctor_set(v___x_677_, 3, v_options_672_);
v___x_678_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
lean_ctor_set(v___x_678_, 1, v_msgData_665_);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0(v_msgData_680_, v___y_681_, v___y_682_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v_ref_689_; lean_object* v___x_690_; lean_object* v_a_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_699_; 
v_ref_689_ = lean_ctor_get(v___y_686_, 2);
v___x_690_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0(v_msg_685_, v___y_686_, v___y_687_);
v_a_691_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_699_ == 0)
{
v___x_693_ = v___x_690_;
v_isShared_694_ = v_isSharedCheck_699_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_a_691_);
lean_dec(v___x_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_699_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_695_; lean_object* v___x_697_; 
lean_inc(v_ref_689_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_ref_689_);
lean_ctor_set(v___x_695_, 1, v_a_691_);
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 1);
lean_ctor_set(v___x_693_, 0, v___x_695_);
v___x_697_ = v___x_693_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v_msg_700_, v___y_701_, v___y_702_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
return v_res_704_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_707_ = l_Lean_stringToMessageData(v___x_706_);
return v___x_707_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_710_ = l_Lean_stringToMessageData(v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(lean_object* v_name_711_, lean_object* v_decl_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_716_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_717_ = l_Lean_MessageData_ofName(v_name_711_);
v___x_718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
v___x_719_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_720_, v___y_713_, v___y_714_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed(lean_object* v_name_722_, lean_object* v_decl_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(v_name_722_, v_decl_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v_decl_723_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(lean_object* v_addEntryFn_728_, lean_object* v___x_729_, lean_object* v_s_730_){
_start:
{
lean_object* v_importedEntries_731_; lean_object* v_state_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_740_; 
v_importedEntries_731_ = lean_ctor_get(v_s_730_, 0);
v_state_732_ = lean_ctor_get(v_s_730_, 1);
v_isSharedCheck_740_ = !lean_is_exclusive(v_s_730_);
if (v_isSharedCheck_740_ == 0)
{
v___x_734_ = v_s_730_;
v_isShared_735_ = v_isSharedCheck_740_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_state_732_);
lean_inc(v_importedEntries_731_);
lean_dec(v_s_730_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_740_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v_state_736_; lean_object* v___x_738_; 
v_state_736_ = lean_apply_2(v_addEntryFn_728_, v_state_732_, v___x_729_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 1, v_state_736_);
v___x_738_ = v___x_734_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_importedEntries_731_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_state_736_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__0));
v___x_743_ = l_Lean_stringToMessageData(v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1(size_t v_sz_744_, size_t v_i_745_, lean_object* v_bs_746_){
_start:
{
uint8_t v___x_747_; 
v___x_747_ = lean_usize_dec_lt(v_i_745_, v_sz_744_);
if (v___x_747_ == 0)
{
return v_bs_746_;
}
else
{
lean_object* v_v_748_; lean_object* v___x_749_; lean_object* v_bs_x27_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; size_t v___x_755_; size_t v___x_756_; lean_object* v___x_757_; 
v_v_748_ = lean_array_uget(v_bs_746_, v_i_745_);
v___x_749_ = lean_unsigned_to_nat(0u);
v_bs_x27_750_ = lean_array_uset(v_bs_746_, v_i_745_, v___x_749_);
v___x_751_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_752_ = l_Lean_MessageData_ofName(v_v_748_);
v___x_753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
lean_ctor_set(v___x_754_, 1, v___x_751_);
v___x_755_ = ((size_t)1ULL);
v___x_756_ = lean_usize_add(v_i_745_, v___x_755_);
v___x_757_ = lean_array_uset(v_bs_x27_750_, v_i_745_, v___x_754_);
v_i_745_ = v___x_756_;
v_bs_746_ = v___x_757_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___boxed(lean_object* v_sz_759_, lean_object* v_i_760_, lean_object* v_bs_761_){
_start:
{
size_t v_sz_boxed_762_; size_t v_i_boxed_763_; lean_object* v_res_764_; 
v_sz_boxed_762_ = lean_unbox_usize(v_sz_759_);
lean_dec(v_sz_759_);
v_i_boxed_763_ = lean_unbox_usize(v_i_760_);
lean_dec(v_i_760_);
v_res_764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1(v_sz_boxed_762_, v_i_boxed_763_, v_bs_761_);
return v_res_764_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__2(uint8_t v___y_765_, lean_object* v_as_766_, size_t v_i_767_, size_t v_stop_768_){
_start:
{
uint8_t v___x_773_; 
v___x_773_ = lean_usize_dec_eq(v_i_767_, v_stop_768_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_774_ = lean_array_uget_borrowed(v_as_766_, v_i_767_);
v___x_775_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_isTactic___closed__1));
v___x_776_ = lean_name_eq(v___x_774_, v___x_775_);
if (v___x_776_ == 0)
{
goto v___jp_769_;
}
else
{
if (v___y_765_ == 0)
{
goto v___jp_769_;
}
else
{
return v___y_765_;
}
}
}
else
{
uint8_t v___x_777_; 
v___x_777_ = 0;
return v___x_777_;
}
v___jp_769_:
{
size_t v___x_770_; size_t v___x_771_; 
v___x_770_ = ((size_t)1ULL);
v___x_771_ = lean_usize_add(v_i_767_, v___x_770_);
v_i_767_ = v___x_771_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__2___boxed(lean_object* v___y_778_, lean_object* v_as_779_, lean_object* v_i_780_, lean_object* v_stop_781_){
_start:
{
uint8_t v___y_9031__boxed_782_; size_t v_i_boxed_783_; size_t v_stop_boxed_784_; uint8_t v_res_785_; lean_object* v_r_786_; 
v___y_9031__boxed_782_ = lean_unbox(v___y_778_);
v_i_boxed_783_ = lean_unbox_usize(v_i_780_);
lean_dec(v_i_780_);
v_stop_boxed_784_ = lean_unbox_usize(v_stop_781_);
lean_dec(v_stop_781_);
v_res_785_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__2(v___y_9031__boxed_782_, v_as_779_, v_i_boxed_783_, v_stop_boxed_784_);
lean_dec_ref(v_as_779_);
v_r_786_ = lean_box(v_res_785_);
return v_r_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(lean_object* v_ref_787_, lean_object* v_msg_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v_toCold_792_; lean_object* v_currRecDepth_793_; lean_object* v_ref_794_; uint16_t v_optionFlags_795_; uint8_t v_suppressElabErrors_796_; uint8_t v_checkDeprecated_797_; uint8_t v_isRecordingDeps_798_; lean_object* v_ref_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_toCold_792_ = lean_ctor_get(v___y_789_, 0);
v_currRecDepth_793_ = lean_ctor_get(v___y_789_, 1);
v_ref_794_ = lean_ctor_get(v___y_789_, 2);
v_optionFlags_795_ = lean_ctor_get_uint16(v___y_789_, sizeof(void*)*3);
v_suppressElabErrors_796_ = lean_ctor_get_uint8(v___y_789_, sizeof(void*)*3 + 2);
v_checkDeprecated_797_ = lean_ctor_get_uint8(v___y_789_, sizeof(void*)*3 + 3);
v_isRecordingDeps_798_ = lean_ctor_get_uint8(v___y_789_, sizeof(void*)*3 + 4);
v_ref_799_ = l_Lean_replaceRef(v_ref_787_, v_ref_794_);
lean_inc(v_currRecDepth_793_);
lean_inc_ref(v_toCold_792_);
v___x_800_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_800_, 0, v_toCold_792_);
lean_ctor_set(v___x_800_, 1, v_currRecDepth_793_);
lean_ctor_set(v___x_800_, 2, v_ref_799_);
lean_ctor_set_uint16(v___x_800_, sizeof(void*)*3, v_optionFlags_795_);
lean_ctor_set_uint8(v___x_800_, sizeof(void*)*3 + 2, v_suppressElabErrors_796_);
lean_ctor_set_uint8(v___x_800_, sizeof(void*)*3 + 3, v_checkDeprecated_797_);
lean_ctor_set_uint8(v___x_800_, sizeof(void*)*3 + 4, v_isRecordingDeps_798_);
v___x_801_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v_msg_788_, v___x_800_, v___y_790_);
lean_dec_ref_known(v___x_800_, 3);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object* v_ref_802_, lean_object* v_msg_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_ref_802_, v_msg_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v_ref_802_);
return v_res_807_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__0));
v___x_810_ = l_Lean_stringToMessageData(v___x_809_);
return v___x_810_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__2));
v___x_813_ = l_Lean_stringToMessageData(v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__4));
v___x_816_ = l_Lean_stringToMessageData(v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg(lean_object* v_attrName_817_, lean_object* v_declName_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; uint8_t v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_822_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__1);
v___x_823_ = l_Lean_MessageData_ofName(v_attrName_817_);
v___x_824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_822_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
v___x_825_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__3);
v___x_826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_826_, 0, v___x_824_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
v___x_827_ = 0;
v___x_828_ = l_Lean_MessageData_ofConstName(v_declName_818_, v___x_827_);
v___x_829_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_826_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___closed__5);
v___x_831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_829_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
v___x_832_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_831_, v___y_819_, v___y_820_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object* v_attrName_833_, lean_object* v_declName_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg(v_attrName_833_, v_declName_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
return v_res_838_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__0));
v___x_841_ = l_Lean_stringToMessageData(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__2));
v___x_844_ = l_Lean_stringToMessageData(v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg(lean_object* v_name_848_, uint8_t v_kind_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___y_859_; 
v___x_853_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__1);
v___x_854_ = l_Lean_MessageData_ofName(v_name_848_);
v___x_855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_853_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
v___x_856_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__3);
v___x_857_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_857_, 0, v___x_855_);
lean_ctor_set(v___x_857_, 1, v___x_856_);
switch(v_kind_849_)
{
case 0:
{
lean_object* v___x_866_; 
v___x_866_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__4));
v___y_859_ = v___x_866_;
goto v___jp_858_;
}
case 1:
{
lean_object* v___x_867_; 
v___x_867_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__5));
v___y_859_ = v___x_867_;
goto v___jp_858_;
}
default: 
{
lean_object* v___x_868_; 
v___x_868_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___closed__6));
v___y_859_ = v___x_868_;
goto v___jp_858_;
}
}
v___jp_858_:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
lean_inc_ref(v___y_859_);
v___x_860_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_860_, 0, v___y_859_);
v___x_861_ = l_Lean_MessageData_ofFormat(v___x_860_);
v___x_862_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_857_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_862_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_864_, v___y_850_, v___y_851_);
return v___x_865_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg___boxed(lean_object* v_name_869_, lean_object* v_kind_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_){
_start:
{
uint8_t v_kind_boxed_874_; lean_object* v_res_875_; 
v_kind_boxed_874_ = lean_unbox(v_kind_870_);
v_res_875_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg(v_name_869_, v_kind_boxed_874_, v___y_871_, v___y_872_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(lean_object* v_a_876_, lean_object* v_x_877_){
_start:
{
if (lean_obj_tag(v_x_877_) == 0)
{
lean_object* v___x_878_; 
v___x_878_ = lean_box(0);
return v___x_878_;
}
else
{
lean_object* v_key_879_; lean_object* v_value_880_; lean_object* v_tail_881_; uint8_t v___x_882_; 
v_key_879_ = lean_ctor_get(v_x_877_, 0);
v_value_880_ = lean_ctor_get(v_x_877_, 1);
v_tail_881_ = lean_ctor_get(v_x_877_, 2);
v___x_882_ = lean_name_eq(v_key_879_, v_a_876_);
if (v___x_882_ == 0)
{
v_x_877_ = v_tail_881_;
goto _start;
}
else
{
lean_object* v___x_884_; 
lean_inc(v_value_880_);
v___x_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_884_, 0, v_value_880_);
return v___x_884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg___boxed(lean_object* v_a_885_, lean_object* v_x_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(v_a_885_, v_x_886_);
lean_dec(v_x_886_);
lean_dec(v_a_885_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___redArg(lean_object* v_m_888_, lean_object* v_a_889_){
_start:
{
lean_object* v_buckets_890_; lean_object* v___x_891_; uint64_t v___y_893_; 
v_buckets_890_ = lean_ctor_get(v_m_888_, 1);
v___x_891_ = lean_array_get_size(v_buckets_890_);
if (lean_obj_tag(v_a_889_) == 0)
{
uint64_t v___x_907_; 
v___x_907_ = 1723ULL;
v___y_893_ = v___x_907_;
goto v___jp_892_;
}
else
{
uint64_t v_hash_908_; 
v_hash_908_ = lean_ctor_get_uint64(v_a_889_, sizeof(void*)*2);
v___y_893_ = v_hash_908_;
goto v___jp_892_;
}
v___jp_892_:
{
uint64_t v___x_894_; uint64_t v___x_895_; uint64_t v_fold_896_; uint64_t v___x_897_; uint64_t v___x_898_; uint64_t v___x_899_; size_t v___x_900_; size_t v___x_901_; size_t v___x_902_; size_t v___x_903_; size_t v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_894_ = 32ULL;
v___x_895_ = lean_uint64_shift_right(v___y_893_, v___x_894_);
v_fold_896_ = lean_uint64_xor(v___y_893_, v___x_895_);
v___x_897_ = 16ULL;
v___x_898_ = lean_uint64_shift_right(v_fold_896_, v___x_897_);
v___x_899_ = lean_uint64_xor(v_fold_896_, v___x_898_);
v___x_900_ = lean_uint64_to_usize(v___x_899_);
v___x_901_ = lean_usize_of_nat(v___x_891_);
v___x_902_ = ((size_t)1ULL);
v___x_903_ = lean_usize_sub(v___x_901_, v___x_902_);
v___x_904_ = lean_usize_land(v___x_900_, v___x_903_);
v___x_905_ = lean_array_uget_borrowed(v_buckets_890_, v___x_904_);
v___x_906_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(v_a_889_, v___x_905_);
return v___x_906_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___redArg___boxed(lean_object* v_m_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___redArg(v_m_909_, v_a_910_);
lean_dec(v_a_910_);
lean_dec_ref(v_m_909_);
return v_res_911_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__0(void){
_start:
{
lean_object* v___x_912_; double v___x_913_; 
v___x_912_ = lean_unsigned_to_nat(0u);
v___x_913_ = lean_float_of_nat(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6(lean_object* v_cls_917_, lean_object* v_msg_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v_ref_922_; lean_object* v___x_923_; lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_969_; 
v_ref_922_ = lean_ctor_get(v___y_919_, 2);
v___x_923_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0(v_msg_918_, v___y_919_, v___y_920_);
v_a_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_969_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_969_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_969_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; lean_object* v_traceState_929_; lean_object* v_env_930_; lean_object* v_nextMacroScope_931_; lean_object* v_ngen_932_; lean_object* v_auxDeclNGen_933_; lean_object* v_cache_934_; lean_object* v_recordedDeps_935_; lean_object* v_messages_936_; lean_object* v_infoState_937_; lean_object* v_snapshotTasks_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_968_; 
v___x_928_ = lean_st_ref_take(v___y_920_);
v_traceState_929_ = lean_ctor_get(v___x_928_, 4);
v_env_930_ = lean_ctor_get(v___x_928_, 0);
v_nextMacroScope_931_ = lean_ctor_get(v___x_928_, 1);
v_ngen_932_ = lean_ctor_get(v___x_928_, 2);
v_auxDeclNGen_933_ = lean_ctor_get(v___x_928_, 3);
v_cache_934_ = lean_ctor_get(v___x_928_, 5);
v_recordedDeps_935_ = lean_ctor_get(v___x_928_, 6);
v_messages_936_ = lean_ctor_get(v___x_928_, 7);
v_infoState_937_ = lean_ctor_get(v___x_928_, 8);
v_snapshotTasks_938_ = lean_ctor_get(v___x_928_, 9);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_968_ == 0)
{
v___x_940_ = v___x_928_;
v_isShared_941_ = v_isSharedCheck_968_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_snapshotTasks_938_);
lean_inc(v_infoState_937_);
lean_inc(v_messages_936_);
lean_inc(v_recordedDeps_935_);
lean_inc(v_cache_934_);
lean_inc(v_traceState_929_);
lean_inc(v_auxDeclNGen_933_);
lean_inc(v_ngen_932_);
lean_inc(v_nextMacroScope_931_);
lean_inc(v_env_930_);
lean_dec(v___x_928_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_968_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
uint64_t v_tid_942_; lean_object* v_traces_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_967_; 
v_tid_942_ = lean_ctor_get_uint64(v_traceState_929_, sizeof(void*)*1);
v_traces_943_ = lean_ctor_get(v_traceState_929_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v_traceState_929_);
if (v_isSharedCheck_967_ == 0)
{
v___x_945_ = v_traceState_929_;
v_isShared_946_ = v_isSharedCheck_967_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_traces_943_);
lean_dec(v_traceState_929_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_967_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; double v___x_949_; uint8_t v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_947_ = lean_box(0);
v___x_948_ = lean_box(0);
v___x_949_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__0);
v___x_950_ = 0;
v___x_951_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
v___x_952_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_952_, 0, v_cls_917_);
lean_ctor_set(v___x_952_, 1, v___x_948_);
lean_ctor_set(v___x_952_, 2, v___x_951_);
lean_ctor_set_float(v___x_952_, sizeof(void*)*3, v___x_949_);
lean_ctor_set_float(v___x_952_, sizeof(void*)*3 + 8, v___x_949_);
lean_ctor_set_uint8(v___x_952_, sizeof(void*)*3 + 16, v___x_950_);
v___x_953_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__2));
v___x_954_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v_a_924_);
lean_ctor_set(v___x_954_, 2, v___x_953_);
lean_inc(v_ref_922_);
v___x_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_955_, 0, v_ref_922_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = l_Lean_PersistentArray_push___redArg(v_traces_943_, v___x_955_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_956_);
v___x_958_ = v___x_945_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_956_);
lean_ctor_set_uint64(v_reuseFailAlloc_966_, sizeof(void*)*1, v_tid_942_);
v___x_958_ = v_reuseFailAlloc_966_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 4, v___x_958_);
v___x_960_ = v___x_940_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_env_930_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_nextMacroScope_931_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v_ngen_932_);
lean_ctor_set(v_reuseFailAlloc_965_, 3, v_auxDeclNGen_933_);
lean_ctor_set(v_reuseFailAlloc_965_, 4, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_965_, 5, v_cache_934_);
lean_ctor_set(v_reuseFailAlloc_965_, 6, v_recordedDeps_935_);
lean_ctor_set(v_reuseFailAlloc_965_, 7, v_messages_936_);
lean_ctor_set(v_reuseFailAlloc_965_, 8, v_infoState_937_);
lean_ctor_set(v_reuseFailAlloc_965_, 9, v_snapshotTasks_938_);
v___x_960_ = v_reuseFailAlloc_965_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_961_ = lean_st_ref_put(v___y_920_, v___x_960_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v___x_947_);
v___x_963_ = v___x_926_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_947_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___boxed(lean_object* v_cls_970_, lean_object* v_msg_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6(v_cls_970_, v_msg_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___lam__0(lean_object* v_addEntryFn_976_, lean_object* v_entry_977_, lean_object* v_s_978_){
_start:
{
lean_object* v_importedEntries_979_; lean_object* v_state_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_988_; 
v_importedEntries_979_ = lean_ctor_get(v_s_978_, 0);
v_state_980_ = lean_ctor_get(v_s_978_, 1);
v_isSharedCheck_988_ = !lean_is_exclusive(v_s_978_);
if (v_isSharedCheck_988_ == 0)
{
v___x_982_ = v_s_978_;
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_state_980_);
lean_inc(v_importedEntries_979_);
lean_dec(v_s_978_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_state_984_; lean_object* v___x_986_; 
v_state_984_ = lean_apply_2(v_addEntryFn_976_, v_state_980_, v_entry_977_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 1, v_state_984_);
v___x_986_ = v___x_982_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_importedEntries_979_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_state_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___redArg(lean_object* v_keys_989_, lean_object* v_i_990_, lean_object* v_k_991_){
_start:
{
lean_object* v___x_992_; uint8_t v___x_993_; 
v___x_992_ = lean_array_get_size(v_keys_989_);
v___x_993_ = lean_nat_dec_lt(v_i_990_, v___x_992_);
if (v___x_993_ == 0)
{
lean_dec(v_i_990_);
return v___x_993_;
}
else
{
lean_object* v_k_x27_994_; uint8_t v___x_995_; 
v_k_x27_994_ = lean_array_fget_borrowed(v_keys_989_, v_i_990_);
v___x_995_ = l_Lean_instBEqExtraModUse_beq(v_k_991_, v_k_x27_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = lean_unsigned_to_nat(1u);
v___x_997_ = lean_nat_add(v_i_990_, v___x_996_);
lean_dec(v_i_990_);
v_i_990_ = v___x_997_;
goto _start;
}
else
{
lean_dec(v_i_990_);
return v___x_993_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___redArg___boxed(lean_object* v_keys_999_, lean_object* v_i_1000_, lean_object* v_k_1001_){
_start:
{
uint8_t v_res_1002_; lean_object* v_r_1003_; 
v_res_1002_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___redArg(v_keys_999_, v_i_1000_, v_k_1001_);
lean_dec_ref(v_k_1001_);
lean_dec_ref(v_keys_999_);
v_r_1003_ = lean_box(v_res_1002_);
return v_r_1003_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___redArg(lean_object* v_x_1004_, size_t v_x_1005_, lean_object* v_x_1006_){
_start:
{
if (lean_obj_tag(v_x_1004_) == 0)
{
lean_object* v_es_1007_; lean_object* v___x_1008_; size_t v___x_1009_; size_t v___x_1010_; lean_object* v_j_1011_; lean_object* v___x_1012_; 
v_es_1007_ = lean_ctor_get(v_x_1004_, 0);
v___x_1008_ = lean_box(2);
v___x_1009_ = ((size_t)31ULL);
v___x_1010_ = lean_usize_land(v_x_1005_, v___x_1009_);
v_j_1011_ = lean_usize_to_nat(v___x_1010_);
v___x_1012_ = lean_array_get_borrowed(v___x_1008_, v_es_1007_, v_j_1011_);
lean_dec(v_j_1011_);
switch(lean_obj_tag(v___x_1012_))
{
case 0:
{
lean_object* v_key_1013_; uint8_t v___x_1014_; 
v_key_1013_ = lean_ctor_get(v___x_1012_, 0);
v___x_1014_ = l_Lean_instBEqExtraModUse_beq(v_x_1006_, v_key_1013_);
return v___x_1014_;
}
case 1:
{
lean_object* v_node_1015_; size_t v___x_1016_; size_t v___x_1017_; 
v_node_1015_ = lean_ctor_get(v___x_1012_, 0);
v___x_1016_ = ((size_t)5ULL);
v___x_1017_ = lean_usize_shift_right(v_x_1005_, v___x_1016_);
v_x_1004_ = v_node_1015_;
v_x_1005_ = v___x_1017_;
goto _start;
}
default: 
{
uint8_t v___x_1019_; 
v___x_1019_ = 0;
return v___x_1019_;
}
}
}
else
{
lean_object* v_ks_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v_ks_1020_ = lean_ctor_get(v_x_1004_, 0);
v___x_1021_ = lean_unsigned_to_nat(0u);
v___x_1022_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___redArg(v_ks_1020_, v___x_1021_, v_x_1006_);
return v___x_1022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___redArg___boxed(lean_object* v_x_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_){
_start:
{
size_t v_x_9369__boxed_1026_; uint8_t v_res_1027_; lean_object* v_r_1028_; 
v_x_9369__boxed_1026_ = lean_unbox_usize(v_x_1024_);
lean_dec(v_x_1024_);
v_res_1027_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___redArg(v_x_1023_, v_x_9369__boxed_1026_, v_x_1025_);
lean_dec_ref(v_x_1025_);
lean_dec_ref(v_x_1023_);
v_r_1028_ = lean_box(v_res_1027_);
return v_r_1028_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(lean_object* v_x_1029_, lean_object* v_x_1030_){
_start:
{
uint64_t v___x_1031_; size_t v___x_1032_; uint8_t v___x_1033_; 
v___x_1031_ = l_Lean_instHashableExtraModUse_hash(v_x_1030_);
v___x_1032_ = lean_uint64_to_usize(v___x_1031_);
v___x_1033_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___redArg(v_x_1029_, v___x_1032_, v_x_1030_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_x_1034_, lean_object* v_x_1035_){
_start:
{
uint8_t v_res_1036_; lean_object* v_r_1037_; 
v_res_1036_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(v_x_1034_, v_x_1035_);
lean_dec_ref(v_x_1035_);
lean_dec_ref(v_x_1034_);
v_r_1037_ = lean_box(v_res_1036_);
return v_r_1037_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
return v___x_1039_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__0);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
return v___x_1041_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__2(void){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1042_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__6(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__5));
v___x_1048_ = l_Lean_stringToMessageData(v___x_1047_);
return v___x_1048_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__8(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__7));
v___x_1051_ = l_Lean_stringToMessageData(v___x_1050_);
return v___x_1051_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__9(void){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
v___x_1053_ = l_Lean_stringToMessageData(v___x_1052_);
return v___x_1053_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__12(void){
_start:
{
lean_object* v_cls_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_cls_1057_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__4));
v___x_1058_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__11));
v___x_1059_ = l_Lean_Name_append(v___x_1058_, v_cls_1057_);
return v___x_1059_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__14(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__13));
v___x_1062_ = l_Lean_stringToMessageData(v___x_1061_);
return v___x_1062_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__15));
v___x_1065_ = l_Lean_stringToMessageData(v___x_1064_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4(lean_object* v_mod_1070_, uint8_t v_isMeta_1071_, lean_object* v_hint_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v_env_1094_; uint8_t v_isExporting_1095_; lean_object* v_entry_1096_; lean_object* v___y_1098_; lean_object* v___x_1121_; lean_object* v_env_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1092_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__2);
v___x_1093_ = lean_st_ref_get(v___y_1074_);
v_env_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc_ref(v_env_1094_);
lean_dec(v___x_1093_);
v_isExporting_1095_ = lean_ctor_get_uint8(v_env_1094_, sizeof(void*)*13);
lean_dec_ref(v_env_1094_);
lean_inc(v_mod_1070_);
v_entry_1096_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1096_, 0, v_mod_1070_);
lean_ctor_set_uint8(v_entry_1096_, sizeof(void*)*1, v_isExporting_1095_);
lean_ctor_set_uint8(v_entry_1096_, sizeof(void*)*1 + 1, v_isMeta_1071_);
v___x_1121_ = lean_st_ref_get(v___y_1074_);
v_env_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc_ref(v_env_1122_);
lean_dec(v___x_1121_);
v___x_1123_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1124_ = lean_box(1);
v___x_1125_ = lean_box(0);
v___x_1126_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1092_, v___x_1123_, v_env_1122_, v___x_1124_, v___x_1125_);
v___x_1127_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(v___x_1126_, v_entry_1096_);
lean_dec(v___x_1126_);
if (v___x_1127_ == 0)
{
lean_object* v_toCold_1128_; lean_object* v_options_1129_; uint8_t v_hasTrace_1130_; 
v_toCold_1128_ = lean_ctor_get(v___y_1073_, 0);
v_options_1129_ = lean_ctor_get(v_toCold_1128_, 2);
v_hasTrace_1130_ = lean_ctor_get_uint8(v_options_1129_, sizeof(void*)*1);
if (v_hasTrace_1130_ == 0)
{
lean_dec(v_hint_1072_);
lean_dec(v_mod_1070_);
v___y_1098_ = v___y_1074_;
goto v___jp_1097_;
}
else
{
lean_object* v_inheritedTraceOptions_1131_; lean_object* v_cls_1132_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___x_1152_; uint8_t v___x_1153_; 
v_inheritedTraceOptions_1131_ = lean_ctor_get(v_toCold_1128_, 11);
v_cls_1132_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__4));
v___x_1152_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__12);
v___x_1153_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1131_, v_options_1129_, v___x_1152_);
if (v___x_1153_ == 0)
{
lean_dec(v_hint_1072_);
lean_dec(v_mod_1070_);
v___y_1098_ = v___y_1074_;
goto v___jp_1097_;
}
else
{
lean_object* v___x_1154_; lean_object* v___y_1156_; 
v___x_1154_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__14);
if (v_isExporting_1095_ == 0)
{
lean_object* v___x_1163_; 
v___x_1163_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__19));
v___y_1156_ = v___x_1163_;
goto v___jp_1155_;
}
else
{
lean_object* v___x_1164_; 
v___x_1164_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__20));
v___y_1156_ = v___x_1164_;
goto v___jp_1155_;
}
v___jp_1155_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
lean_inc_ref(v___y_1156_);
v___x_1157_ = l_Lean_stringToMessageData(v___y_1156_);
v___x_1158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1154_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16);
v___x_1160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
if (v_isMeta_1071_ == 0)
{
lean_object* v___x_1161_; 
v___x_1161_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__17));
v___y_1139_ = v___x_1160_;
v___y_1140_ = v___x_1161_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1162_; 
v___x_1162_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__18));
v___y_1139_ = v___x_1160_;
v___y_1140_ = v___x_1162_;
goto v___jp_1138_;
}
}
}
v___jp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___y_1134_);
lean_ctor_set(v___x_1136_, 1, v___y_1135_);
v___x_1137_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6(v_cls_1132_, v___x_1136_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_dec_ref_known(v___x_1137_, 1);
v___y_1098_ = v___y_1074_;
goto v___jp_1097_;
}
else
{
lean_dec_ref_known(v_entry_1096_, 1);
return v___x_1137_;
}
}
v___jp_1138_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
lean_inc_ref(v___y_1140_);
v___x_1141_ = l_Lean_stringToMessageData(v___y_1140_);
v___x_1142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___y_1139_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__6);
v___x_1144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = l_Lean_MessageData_ofName(v_mod_1070_);
v___x_1146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = l_Lean_Name_isAnonymous(v_hint_1072_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1148_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__8);
v___x_1149_ = l_Lean_MessageData_ofName(v_hint_1072_);
v___x_1150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1148_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___y_1134_ = v___x_1146_;
v___y_1135_ = v___x_1150_;
goto v___jp_1133_;
}
else
{
lean_object* v___x_1151_; 
lean_dec(v_hint_1072_);
v___x_1151_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__9);
v___y_1134_ = v___x_1146_;
v___y_1135_ = v___x_1151_;
goto v___jp_1133_;
}
}
}
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
lean_dec_ref_known(v_entry_1096_, 1);
lean_dec(v_hint_1072_);
lean_dec(v_mod_1070_);
v___x_1165_ = lean_box(0);
v___x_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1165_);
return v___x_1166_;
}
v___jp_1076_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1088_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1);
v___x_1089_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1089_, 0, v___y_1087_);
lean_ctor_set(v___x_1089_, 1, v___y_1081_);
lean_ctor_set(v___x_1089_, 2, v___y_1080_);
lean_ctor_set(v___x_1089_, 3, v___y_1079_);
lean_ctor_set(v___x_1089_, 4, v___y_1077_);
lean_ctor_set(v___x_1089_, 5, v___x_1088_);
lean_ctor_set(v___x_1089_, 6, v___y_1083_);
lean_ctor_set(v___x_1089_, 7, v___y_1085_);
lean_ctor_set(v___x_1089_, 8, v___y_1084_);
lean_ctor_set(v___x_1089_, 9, v___y_1082_);
v___x_1090_ = lean_st_ref_put(v___y_1078_, v___x_1089_);
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___y_1086_);
return v___x_1091_;
}
v___jp_1097_:
{
lean_object* v___x_1099_; lean_object* v_env_1100_; lean_object* v_nextMacroScope_1101_; lean_object* v_ngen_1102_; lean_object* v_auxDeclNGen_1103_; lean_object* v_traceState_1104_; lean_object* v_recordedDeps_1105_; lean_object* v_messages_1106_; lean_object* v_infoState_1107_; lean_object* v_snapshotTasks_1108_; lean_object* v___x_1109_; lean_object* v_toEnvExtension_1110_; lean_object* v_addEntryFn_1111_; lean_object* v_asyncMode_1112_; uint8_t v_logWrites_1113_; lean_object* v___x_1114_; lean_object* v___f_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1099_ = lean_st_ref_take(v___y_1098_);
v_env_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc_ref(v_env_1100_);
v_nextMacroScope_1101_ = lean_ctor_get(v___x_1099_, 1);
lean_inc(v_nextMacroScope_1101_);
v_ngen_1102_ = lean_ctor_get(v___x_1099_, 2);
lean_inc_ref(v_ngen_1102_);
v_auxDeclNGen_1103_ = lean_ctor_get(v___x_1099_, 3);
lean_inc_ref(v_auxDeclNGen_1103_);
v_traceState_1104_ = lean_ctor_get(v___x_1099_, 4);
lean_inc_ref(v_traceState_1104_);
v_recordedDeps_1105_ = lean_ctor_get(v___x_1099_, 6);
lean_inc_ref(v_recordedDeps_1105_);
v_messages_1106_ = lean_ctor_get(v___x_1099_, 7);
lean_inc_ref(v_messages_1106_);
v_infoState_1107_ = lean_ctor_get(v___x_1099_, 8);
lean_inc_ref(v_infoState_1107_);
v_snapshotTasks_1108_ = lean_ctor_get(v___x_1099_, 9);
lean_inc_ref(v_snapshotTasks_1108_);
lean_dec(v___x_1099_);
v___x_1109_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_1110_ = lean_ctor_get(v___x_1109_, 0);
v_addEntryFn_1111_ = lean_ctor_get(v___x_1109_, 3);
v_asyncMode_1112_ = lean_ctor_get(v_toEnvExtension_1110_, 2);
v_logWrites_1113_ = lean_ctor_get_uint8(v_toEnvExtension_1110_, sizeof(void*)*6);
v___x_1114_ = lean_box(0);
lean_inc(v_addEntryFn_1111_);
v___f_1115_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___lam__0), 3, 2);
lean_closure_set(v___f_1115_, 0, v_addEntryFn_1111_);
lean_closure_set(v___f_1115_, 1, v_entry_1096_);
v___x_1116_ = lean_box(0);
v___x_1117_ = 1;
if (v_logWrites_1113_ == 0)
{
lean_object* v___x_1118_; 
lean_inc_ref(v_toEnvExtension_1110_);
v___x_1118_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1110_, v_env_1100_, v___f_1115_, v_asyncMode_1112_, v___x_1116_, v___x_1117_);
v___y_1077_ = v_traceState_1104_;
v___y_1078_ = v___y_1098_;
v___y_1079_ = v_auxDeclNGen_1103_;
v___y_1080_ = v_ngen_1102_;
v___y_1081_ = v_nextMacroScope_1101_;
v___y_1082_ = v_snapshotTasks_1108_;
v___y_1083_ = v_recordedDeps_1105_;
v___y_1084_ = v_infoState_1107_;
v___y_1085_ = v_messages_1106_;
v___y_1086_ = v___x_1114_;
v___y_1087_ = v___x_1118_;
goto v___jp_1076_;
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
lean_inc_ref_n(v_toEnvExtension_1110_, 2);
v___x_1119_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1110_, v_env_1100_);
lean_dec_ref(v_env_1100_);
v___x_1120_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1110_, v___x_1119_, v___f_1115_, v_asyncMode_1112_, v___x_1116_, v___x_1117_);
v___y_1077_ = v_traceState_1104_;
v___y_1078_ = v___y_1098_;
v___y_1079_ = v_auxDeclNGen_1103_;
v___y_1080_ = v_ngen_1102_;
v___y_1081_ = v_nextMacroScope_1101_;
v___y_1082_ = v_snapshotTasks_1108_;
v___y_1083_ = v_recordedDeps_1105_;
v___y_1084_ = v_infoState_1107_;
v___y_1085_ = v_messages_1106_;
v___y_1086_ = v___x_1114_;
v___y_1087_ = v___x_1120_;
goto v___jp_1076_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object* v_mod_1167_, lean_object* v_isMeta_1168_, lean_object* v_hint_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v_isMeta_boxed_1173_; lean_object* v_res_1174_; 
v_isMeta_boxed_1173_ = lean_unbox(v_isMeta_1168_);
v_res_1174_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4(v_mod_1167_, v_isMeta_boxed_1173_, v_hint_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__5(lean_object* v___x_1175_, lean_object* v_declName_1176_, lean_object* v_as_1177_, size_t v_sz_1178_, size_t v_i_1179_, lean_object* v_b_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
uint8_t v___x_1184_; 
v___x_1184_ = lean_usize_dec_lt(v_i_1179_, v_sz_1178_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; 
lean_dec(v_declName_1176_);
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v_b_1180_);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; lean_object* v_modules_1187_; lean_object* v___x_1188_; lean_object* v_a_1189_; lean_object* v___x_1190_; lean_object* v_toImport_1191_; lean_object* v_module_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; lean_object* v___x_1195_; 
v___x_1186_ = l_Lean_Environment_header(v___x_1175_);
v_modules_1187_ = lean_ctor_get(v___x_1186_, 3);
lean_inc_ref(v_modules_1187_);
lean_dec_ref(v___x_1186_);
v___x_1188_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1189_ = lean_array_uget_borrowed(v_as_1177_, v_i_1179_);
v___x_1190_ = lean_array_get(v___x_1188_, v_modules_1187_, v_a_1189_);
lean_dec_ref(v_modules_1187_);
v_toImport_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc_ref(v_toImport_1191_);
lean_dec(v___x_1190_);
v_module_1192_ = lean_ctor_get(v_toImport_1191_, 0);
lean_inc(v_module_1192_);
lean_dec_ref(v_toImport_1191_);
v___x_1193_ = lean_box(0);
v___x_1194_ = 0;
lean_inc(v_declName_1176_);
v___x_1195_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4(v_module_1192_, v___x_1194_, v_declName_1176_, v___y_1181_, v___y_1182_);
if (lean_obj_tag(v___x_1195_) == 0)
{
size_t v___x_1196_; size_t v___x_1197_; 
lean_dec_ref_known(v___x_1195_, 1);
v___x_1196_ = ((size_t)1ULL);
v___x_1197_ = lean_usize_add(v_i_1179_, v___x_1196_);
v_i_1179_ = v___x_1197_;
v_b_1180_ = v___x_1193_;
goto _start;
}
else
{
lean_dec(v_declName_1176_);
return v___x_1195_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object* v___x_1199_, lean_object* v_declName_1200_, lean_object* v_as_1201_, lean_object* v_sz_1202_, lean_object* v_i_1203_, lean_object* v_b_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
size_t v_sz_boxed_1208_; size_t v_i_boxed_1209_; lean_object* v_res_1210_; 
v_sz_boxed_1208_ = lean_unbox_usize(v_sz_1202_);
lean_dec(v_sz_1202_);
v_i_boxed_1209_ = lean_unbox_usize(v_i_1203_);
lean_dec(v_i_1203_);
v_res_1210_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__5(v___x_1199_, v_declName_1200_, v_as_1201_, v_sz_boxed_1208_, v_i_boxed_1209_, v_b_1204_, v___y_1205_, v___y_1206_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec_ref(v_as_1201_);
lean_dec_ref(v___x_1199_);
return v_res_1210_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__0(void){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3(lean_object* v_declName_1214_, uint8_t v_isMeta_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v_env_1224_; lean_object* v___y_1226_; lean_object* v___x_1239_; 
v___x_1219_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__0);
v___x_1220_ = lean_st_ref_get(v___y_1217_);
v_env_1224_ = lean_ctor_get(v___x_1220_, 0);
lean_inc_ref(v_env_1224_);
lean_dec(v___x_1220_);
v___x_1239_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1224_, v_declName_1214_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_dec_ref(v_env_1224_);
lean_dec(v_declName_1214_);
goto v___jp_1221_;
}
else
{
lean_object* v_val_1240_; lean_object* v___x_1241_; lean_object* v_modules_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
v_val_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_val_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v___x_1241_ = l_Lean_Environment_header(v_env_1224_);
v_modules_1242_ = lean_ctor_get(v___x_1241_, 3);
lean_inc_ref(v_modules_1242_);
lean_dec_ref(v___x_1241_);
v___x_1243_ = lean_array_get_size(v_modules_1242_);
v___x_1244_ = lean_nat_dec_lt(v_val_1240_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_dec_ref(v_modules_1242_);
lean_dec(v_val_1240_);
lean_dec_ref(v_env_1224_);
lean_dec(v_declName_1214_);
goto v___jp_1221_;
}
else
{
lean_object* v___x_1245_; lean_object* v___x_1246_; uint8_t v___y_1248_; 
v___x_1245_ = lean_array_fget(v_modules_1242_, v_val_1240_);
lean_dec(v_val_1240_);
lean_dec_ref(v_modules_1242_);
v___x_1246_ = lean_st_ref_get(v___y_1217_);
if (v_isMeta_1215_ == 0)
{
lean_dec(v___x_1246_);
v___y_1248_ = v_isMeta_1215_;
goto v___jp_1247_;
}
else
{
lean_object* v_env_1259_; uint8_t v___x_1260_; 
v_env_1259_ = lean_ctor_get(v___x_1246_, 0);
lean_inc_ref(v_env_1259_);
lean_dec(v___x_1246_);
lean_inc(v_declName_1214_);
v___x_1260_ = l_Lean_isMarkedMeta(v_env_1259_, v_declName_1214_);
if (v___x_1260_ == 0)
{
v___y_1248_ = v_isMeta_1215_;
goto v___jp_1247_;
}
else
{
uint8_t v___x_1261_; 
v___x_1261_ = 0;
v___y_1248_ = v___x_1261_;
goto v___jp_1247_;
}
}
v___jp_1247_:
{
lean_object* v_toImport_1249_; lean_object* v_module_1250_; lean_object* v___x_1251_; 
v_toImport_1249_ = lean_ctor_get(v___x_1245_, 0);
lean_inc_ref(v_toImport_1249_);
lean_dec(v___x_1245_);
v_module_1250_ = lean_ctor_get(v_toImport_1249_, 0);
lean_inc(v_module_1250_);
lean_dec_ref(v_toImport_1249_);
lean_inc(v_declName_1214_);
v___x_1251_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4(v_module_1250_, v___y_1248_, v_declName_1214_, v___y_1216_, v___y_1217_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
lean_dec_ref_known(v___x_1251_, 1);
v___x_1252_ = l_Lean_indirectModUseExt;
v___x_1253_ = lean_box(1);
v___x_1254_ = lean_box(0);
lean_inc_ref(v_env_1224_);
v___x_1255_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1219_, v___x_1252_, v_env_1224_, v___x_1253_, v___x_1254_);
v___x_1256_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___redArg(v___x_1255_, v_declName_1214_);
lean_dec(v___x_1255_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v___x_1257_; 
v___x_1257_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___closed__1));
v___y_1226_ = v___x_1257_;
goto v___jp_1225_;
}
else
{
lean_object* v_val_1258_; 
v_val_1258_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_val_1258_);
lean_dec_ref_known(v___x_1256_, 1);
v___y_1226_ = v_val_1258_;
goto v___jp_1225_;
}
}
else
{
lean_dec_ref(v_env_1224_);
lean_dec(v_declName_1214_);
return v___x_1251_;
}
}
}
}
v___jp_1221_:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = lean_box(0);
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
return v___x_1223_;
}
v___jp_1225_:
{
lean_object* v___x_1227_; size_t v_sz_1228_; size_t v___x_1229_; lean_object* v___x_1230_; 
v___x_1227_ = lean_box(0);
v_sz_1228_ = lean_array_size(v___y_1226_);
v___x_1229_ = ((size_t)0ULL);
v___x_1230_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__5(v_env_1224_, v_declName_1214_, v___y_1226_, v_sz_1228_, v___x_1229_, v___x_1227_, v___y_1216_, v___y_1217_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v_env_1224_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1237_ == 0)
{
lean_object* v_unused_1238_; 
v_unused_1238_ = lean_ctor_get(v___x_1230_, 0);
lean_dec(v_unused_1238_);
v___x_1232_ = v___x_1230_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_dec(v___x_1230_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 0, v___x_1227_);
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1227_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
else
{
return v___x_1230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3___boxed(lean_object* v_declName_1262_, lean_object* v_isMeta_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
uint8_t v_isMeta_boxed_1267_; lean_object* v_res_1268_; 
v_isMeta_boxed_1267_ = lean_unbox(v_isMeta_1263_);
v_res_1268_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3(v_declName_1262_, v_isMeta_boxed_1267_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
return v_res_1268_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__0_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1271_ = l_Lean_stringToMessageData(v___x_1270_);
return v___x_1271_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1274_ = l_Lean_stringToMessageData(v___x_1273_);
return v___x_1274_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__4_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1277_ = l_Lean_stringToMessageData(v___x_1276_);
return v___x_1277_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__6_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1280_ = l_Lean_stringToMessageData(v___x_1279_);
return v___x_1280_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__8_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1283_ = l_Lean_stringToMessageData(v___x_1282_);
return v___x_1283_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__11_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1287_ = l_Lean_stringToMessageData(v___x_1286_);
return v___x_1287_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__13_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1290_ = l_Lean_stringToMessageData(v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__15_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1293_ = l_Lean_stringToMessageData(v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(lean_object* v___x_1294_, lean_object* v___x_1295_, lean_object* v___x_1296_, lean_object* v___x_1297_, lean_object* v___x_1298_, lean_object* v_name_1299_, lean_object* v_decl_1300_, lean_object* v_stx_1301_, uint8_t v_kind_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_nextMacroScope_1307_; lean_object* v_ngen_1308_; lean_object* v_auxDeclNGen_1309_; lean_object* v_traceState_1310_; lean_object* v_recordedDeps_1311_; lean_object* v_messages_1312_; lean_object* v_infoState_1313_; lean_object* v_snapshotTasks_1314_; lean_object* v___y_1315_; lean_object* v___y_1316_; lean_object* v___y_1317_; uint8_t v___y_1323_; lean_object* v___y_1324_; lean_object* v___y_1325_; uint8_t v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1366_; lean_object* v___y_1367_; uint8_t v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; uint8_t v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1401_; uint8_t v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1416_; lean_object* v___y_1417_; uint8_t v___x_1456_; uint8_t v___x_1457_; 
v___x_1456_ = 0;
v___x_1457_ = l_Lean_instBEqAttributeKind_beq(v_kind_1302_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; 
lean_dec(v_stx_1301_);
lean_dec(v_decl_1300_);
lean_dec_ref(v___x_1298_);
lean_dec_ref(v___x_1297_);
lean_dec_ref(v___x_1296_);
lean_dec(v___x_1294_);
v___x_1458_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg(v_name_1299_, v_kind_1302_, v___y_1303_, v___y_1304_);
return v___x_1458_;
}
else
{
goto v___jp_1451_;
}
v___jp_1306_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1318_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1);
v___x_1319_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1319_, 0, v___y_1317_);
lean_ctor_set(v___x_1319_, 1, v_nextMacroScope_1307_);
lean_ctor_set(v___x_1319_, 2, v_ngen_1308_);
lean_ctor_set(v___x_1319_, 3, v_auxDeclNGen_1309_);
lean_ctor_set(v___x_1319_, 4, v_traceState_1310_);
lean_ctor_set(v___x_1319_, 5, v___x_1318_);
lean_ctor_set(v___x_1319_, 6, v_recordedDeps_1311_);
lean_ctor_set(v___x_1319_, 7, v_messages_1312_);
lean_ctor_set(v___x_1319_, 8, v_infoState_1313_);
lean_ctor_set(v___x_1319_, 9, v_snapshotTasks_1314_);
v___x_1320_ = lean_st_ref_put(v___y_1315_, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___y_1316_);
return v___x_1321_;
}
v___jp_1322_:
{
lean_object* v___x_1326_; lean_object* v_env_1327_; lean_object* v_nextMacroScope_1328_; lean_object* v_ngen_1329_; lean_object* v_auxDeclNGen_1330_; lean_object* v_traceState_1331_; lean_object* v_recordedDeps_1332_; lean_object* v_messages_1333_; lean_object* v_infoState_1334_; lean_object* v_snapshotTasks_1335_; lean_object* v___x_1336_; lean_object* v_toEnvExtension_1337_; lean_object* v_addEntryFn_1338_; lean_object* v_asyncMode_1339_; uint8_t v_logWrites_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___f_1343_; 
v___x_1326_ = lean_st_ref_take(v___y_1325_);
v_env_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc_ref(v_env_1327_);
v_nextMacroScope_1328_ = lean_ctor_get(v___x_1326_, 1);
lean_inc(v_nextMacroScope_1328_);
v_ngen_1329_ = lean_ctor_get(v___x_1326_, 2);
lean_inc_ref(v_ngen_1329_);
v_auxDeclNGen_1330_ = lean_ctor_get(v___x_1326_, 3);
lean_inc_ref(v_auxDeclNGen_1330_);
v_traceState_1331_ = lean_ctor_get(v___x_1326_, 4);
lean_inc_ref(v_traceState_1331_);
v_recordedDeps_1332_ = lean_ctor_get(v___x_1326_, 6);
lean_inc_ref(v_recordedDeps_1332_);
v_messages_1333_ = lean_ctor_get(v___x_1326_, 7);
lean_inc_ref(v_messages_1333_);
v_infoState_1334_ = lean_ctor_get(v___x_1326_, 8);
lean_inc_ref(v_infoState_1334_);
v_snapshotTasks_1335_ = lean_ctor_get(v___x_1326_, 9);
lean_inc_ref(v_snapshotTasks_1335_);
lean_dec(v___x_1326_);
v___x_1336_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v_toEnvExtension_1337_ = lean_ctor_get(v___x_1336_, 0);
v_addEntryFn_1338_ = lean_ctor_get(v___x_1336_, 3);
v_asyncMode_1339_ = lean_ctor_get(v_toEnvExtension_1337_, 2);
v_logWrites_1340_ = lean_ctor_get_uint8(v_toEnvExtension_1337_, sizeof(void*)*6);
v___x_1341_ = lean_box(0);
v___x_1342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1342_, 0, v_decl_1300_);
lean_ctor_set(v___x_1342_, 1, v___y_1324_);
lean_inc(v_addEntryFn_1338_);
v___f_1343_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_), 3, 2);
lean_closure_set(v___f_1343_, 0, v_addEntryFn_1338_);
lean_closure_set(v___f_1343_, 1, v___x_1342_);
if (v_logWrites_1340_ == 0)
{
lean_object* v___x_1344_; 
lean_inc_ref(v_toEnvExtension_1337_);
v___x_1344_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1337_, v_env_1327_, v___f_1343_, v_asyncMode_1339_, v___x_1294_, v___y_1323_);
v_nextMacroScope_1307_ = v_nextMacroScope_1328_;
v_ngen_1308_ = v_ngen_1329_;
v_auxDeclNGen_1309_ = v_auxDeclNGen_1330_;
v_traceState_1310_ = v_traceState_1331_;
v_recordedDeps_1311_ = v_recordedDeps_1332_;
v_messages_1312_ = v_messages_1333_;
v_infoState_1313_ = v_infoState_1334_;
v_snapshotTasks_1314_ = v_snapshotTasks_1335_;
v___y_1315_ = v___y_1325_;
v___y_1316_ = v___x_1341_;
v___y_1317_ = v___x_1344_;
goto v___jp_1306_;
}
else
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_inc_ref_n(v_toEnvExtension_1337_, 2);
v___x_1345_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1337_, v_env_1327_);
lean_dec_ref(v_env_1327_);
v___x_1346_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1337_, v___x_1345_, v___f_1343_, v_asyncMode_1339_, v___x_1294_, v___y_1323_);
v_nextMacroScope_1307_ = v_nextMacroScope_1328_;
v_ngen_1308_ = v_ngen_1329_;
v_auxDeclNGen_1309_ = v_auxDeclNGen_1330_;
v_traceState_1310_ = v_traceState_1331_;
v_recordedDeps_1311_ = v_recordedDeps_1332_;
v_messages_1312_ = v_messages_1333_;
v_infoState_1313_ = v_infoState_1334_;
v_snapshotTasks_1314_ = v_snapshotTasks_1335_;
v___y_1315_ = v___y_1325_;
v___y_1316_ = v___x_1341_;
v___y_1317_ = v___x_1346_;
goto v___jp_1306_;
}
}
v___jp_1347_:
{
lean_object* v___x_1352_; lean_object* v_env_1353_; lean_object* v___x_1354_; 
v___x_1352_ = lean_st_ref_get(v___y_1351_);
v_env_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc_ref(v_env_1353_);
lean_dec(v___x_1352_);
lean_inc(v___y_1349_);
v___x_1354_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_1353_, v___y_1349_);
if (lean_obj_tag(v___x_1354_) == 1)
{
lean_object* v_val_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
lean_dec(v_decl_1300_);
lean_dec(v___x_1294_);
v_val_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_val_1355_);
lean_dec_ref_known(v___x_1354_, 1);
v___x_1356_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_1357_ = l_Lean_MessageData_ofName(v___y_1349_);
v___x_1358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1358_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
v___x_1361_ = l_Lean_MessageData_ofName(v_val_1355_);
v___x_1362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
lean_ctor_set(v___x_1363_, 1, v___x_1356_);
v___x_1364_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_1363_, v___y_1350_, v___y_1351_);
return v___x_1364_;
}
else
{
lean_dec(v___x_1354_);
v___y_1323_ = v___y_1348_;
v___y_1324_ = v___y_1349_;
v___y_1325_ = v___y_1351_;
goto v___jp_1322_;
}
}
v___jp_1365_:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_dec(v___y_1369_);
v___x_1372_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_1373_ = l_Lean_MessageData_ofName(v_decl_1300_);
v___x_1374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1372_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
v___x_1375_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__3_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1374_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
lean_inc_ref(v___y_1371_);
v___x_1377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
lean_ctor_set(v___x_1377_, 1, v___y_1371_);
v___x_1378_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__16);
v___x_1379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1377_);
lean_ctor_set(v___x_1379_, 1, v___x_1378_);
v___x_1380_ = lean_array_to_list(v___y_1370_);
v___x_1381_ = l_Lean_MessageData_andList(v___x_1380_);
v___x_1382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1379_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_1384_, v___y_1366_, v___y_1367_);
return v___x_1385_;
}
v___jp_1386_:
{
size_t v_sz_1393_; size_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v_sz_1393_ = lean_array_size(v___y_1392_);
v___x_1394_ = ((size_t)0ULL);
v___x_1395_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1(v_sz_1393_, v___x_1394_, v___y_1392_);
v___x_1396_ = lean_array_get_size(v___x_1395_);
v___x_1397_ = lean_nat_dec_lt(v___y_1388_, v___x_1396_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__7_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___y_1366_ = v___y_1387_;
v___y_1367_ = v___y_1389_;
v___y_1368_ = v___y_1390_;
v___y_1369_ = v___y_1391_;
v___y_1370_ = v___x_1395_;
v___y_1371_ = v___x_1398_;
goto v___jp_1365_;
}
else
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___y_1366_ = v___y_1387_;
v___y_1367_ = v___y_1389_;
v___y_1368_ = v___y_1390_;
v___y_1369_ = v___y_1391_;
v___y_1370_ = v___x_1395_;
v___y_1371_ = v___x_1399_;
goto v___jp_1365_;
}
}
v___jp_1400_:
{
lean_object* v___x_1406_; lean_object* v_env_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1406_ = lean_st_ref_get(v___y_1405_);
v_env_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc_ref(v_env_1407_);
lean_dec(v___x_1406_);
lean_inc(v_decl_1300_);
v___x_1408_ = l_Lean_Parser_getSyntaxNodeKindCategories(v_env_1407_, v_decl_1300_);
v___x_1409_ = lean_array_get_size(v___x_1408_);
v___x_1410_ = lean_nat_dec_eq(v___x_1409_, v___x_1295_);
if (v___x_1410_ == 0)
{
uint8_t v___x_1411_; 
v___x_1411_ = lean_nat_dec_lt(v___x_1295_, v___x_1409_);
if (v___x_1411_ == 0)
{
lean_dec(v___x_1294_);
v___y_1387_ = v___y_1404_;
v___y_1388_ = v___y_1401_;
v___y_1389_ = v___y_1405_;
v___y_1390_ = v___y_1402_;
v___y_1391_ = v___y_1403_;
v___y_1392_ = v___x_1408_;
goto v___jp_1386_;
}
else
{
if (v___x_1411_ == 0)
{
lean_dec(v___x_1294_);
v___y_1387_ = v___y_1404_;
v___y_1388_ = v___y_1401_;
v___y_1389_ = v___y_1405_;
v___y_1390_ = v___y_1402_;
v___y_1391_ = v___y_1403_;
v___y_1392_ = v___x_1408_;
goto v___jp_1386_;
}
else
{
size_t v___x_1412_; size_t v___x_1413_; uint8_t v___x_1414_; 
v___x_1412_ = ((size_t)0ULL);
v___x_1413_ = lean_usize_of_nat(v___x_1409_);
v___x_1414_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__2(v___y_1402_, v___x_1408_, v___x_1412_, v___x_1413_);
if (v___x_1414_ == 0)
{
lean_dec(v___x_1294_);
v___y_1387_ = v___y_1404_;
v___y_1388_ = v___y_1401_;
v___y_1389_ = v___y_1405_;
v___y_1390_ = v___y_1402_;
v___y_1391_ = v___y_1403_;
v___y_1392_ = v___x_1408_;
goto v___jp_1386_;
}
else
{
lean_dec_ref(v___x_1408_);
v___y_1348_ = v___y_1402_;
v___y_1349_ = v___y_1403_;
v___y_1350_ = v___y_1404_;
v___y_1351_ = v___y_1405_;
goto v___jp_1347_;
}
}
}
}
else
{
lean_dec_ref(v___x_1408_);
v___y_1348_ = v___y_1402_;
v___y_1349_ = v___y_1403_;
v___y_1350_ = v___y_1404_;
v___y_1351_ = v___y_1405_;
goto v___jp_1347_;
}
}
v___jp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; 
v___x_1418_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1419_ = l_Lean_Name_mkStr4(v___x_1296_, v___x_1297_, v___x_1418_, v___x_1298_);
lean_inc(v_stx_1301_);
v___x_1420_ = l_Lean_Syntax_isOfKind(v_stx_1301_, v___x_1419_);
lean_dec(v___x_1419_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_dec(v_stx_1301_);
lean_dec(v_decl_1300_);
lean_dec(v___x_1294_);
v___x_1421_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1422_ = l_Lean_MessageData_ofName(v_name_1299_);
v___x_1423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1421_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
v___x_1424_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_1425_, v___y_1416_, v___y_1417_);
return v___x_1426_;
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
lean_dec(v_name_1299_);
v___x_1427_ = lean_unsigned_to_nat(1u);
v___x_1428_ = l_Lean_Syntax_getArg(v_stx_1301_, v___x_1427_);
lean_dec(v_stx_1301_);
v___x_1429_ = lean_box(0);
lean_inc(v___x_1428_);
v___x_1430_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_1428_, v___x_1429_, v___y_1416_, v___y_1417_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; uint8_t v___x_1432_; lean_object* v___x_1433_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc_n(v_a_1431_, 2);
lean_dec_ref_known(v___x_1430_, 1);
v___x_1432_ = 0;
v___x_1433_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3(v_a_1431_, v___x_1432_, v___y_1416_, v___y_1417_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v___x_1434_; lean_object* v_env_1435_; uint8_t v___x_1436_; 
lean_dec_ref_known(v___x_1433_, 1);
v___x_1434_ = lean_st_ref_get(v___y_1417_);
v_env_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc_ref(v_env_1435_);
lean_dec(v___x_1434_);
v___x_1436_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_1435_, v_a_1431_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
lean_dec(v_decl_1300_);
lean_dec(v___x_1294_);
v___x_1437_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_1438_ = l_Lean_MessageData_ofName(v_a_1431_);
v___x_1439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
v___x_1440_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1439_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
v___x_1442_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v___x_1428_, v___x_1441_, v___y_1416_, v___y_1417_);
lean_dec(v___x_1428_);
return v___x_1442_;
}
else
{
lean_dec(v___x_1428_);
v___y_1401_ = v___x_1427_;
v___y_1402_ = v___x_1420_;
v___y_1403_ = v_a_1431_;
v___y_1404_ = v___y_1416_;
v___y_1405_ = v___y_1417_;
goto v___jp_1400_;
}
}
else
{
lean_dec(v_a_1431_);
lean_dec(v___x_1428_);
lean_dec(v_decl_1300_);
lean_dec(v___x_1294_);
return v___x_1433_;
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec(v___x_1428_);
lean_dec(v_decl_1300_);
lean_dec(v___x_1294_);
v_a_1443_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1430_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1430_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
}
v___jp_1451_:
{
lean_object* v___x_1452_; lean_object* v_env_1453_; lean_object* v___x_1454_; 
v___x_1452_ = lean_st_ref_get(v___y_1304_);
v_env_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc_ref(v_env_1453_);
lean_dec(v___x_1452_);
v___x_1454_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1453_, v_decl_1300_);
lean_dec_ref(v_env_1453_);
if (lean_obj_tag(v___x_1454_) == 0)
{
v___y_1416_ = v___y_1303_;
v___y_1417_ = v___y_1304_;
goto v___jp_1415_;
}
else
{
lean_object* v___x_1455_; 
lean_dec_ref_known(v___x_1454_, 1);
lean_dec(v_stx_1301_);
lean_dec_ref(v___x_1298_);
lean_dec_ref(v___x_1297_);
lean_dec_ref(v___x_1296_);
lean_dec(v___x_1294_);
v___x_1455_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg(v_name_1299_, v_decl_1300_, v___y_1303_, v___y_1304_);
return v___x_1455_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed(lean_object* v___x_1459_, lean_object* v___x_1460_, lean_object* v___x_1461_, lean_object* v___x_1462_, lean_object* v___x_1463_, lean_object* v_name_1464_, lean_object* v_decl_1465_, lean_object* v_stx_1466_, lean_object* v_kind_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
uint8_t v_kind_boxed_1471_; lean_object* v_res_1472_; 
v_kind_boxed_1471_ = lean_unbox(v_kind_1467_);
v_res_1472_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(v___x_1459_, v___x_1460_, v___x_1461_, v___x_1462_, v___x_1463_, v_name_1464_, v_decl_1465_, v_stx_1466_, v_kind_boxed_1471_, v___y_1468_, v___y_1469_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
lean_dec(v___x_1460_);
return v_res_1472_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1536_ = lean_unsigned_to_nat(2574034933u);
v___x_1537_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1538_ = l_Lean_Name_num___override(v___x_1537_, v___x_1536_);
return v___x_1538_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1540_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1541_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1542_ = l_Lean_Name_str___override(v___x_1541_, v___x_1540_);
return v___x_1542_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1544_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1545_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1546_ = l_Lean_Name_str___override(v___x_1545_, v___x_1544_);
return v___x_1546_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1547_ = lean_unsigned_to_nat(2u);
v___x_1548_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1549_ = l_Lean_Name_num___override(v___x_1548_, v___x_1547_);
return v___x_1549_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1551_; lean_object* v___x_1552_; lean_object* v_name_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1551_ = 1;
v___x_1552_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v_name_1553_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1554_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1555_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
lean_ctor_set(v___x_1555_, 1, v_name_1553_);
lean_ctor_set(v___x_1555_, 2, v___x_1552_);
lean_ctor_set_uint8(v___x_1555_, sizeof(void*)*3, v___x_1551_);
return v___x_1555_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1556_; lean_object* v___f_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___f_1556_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___f_1557_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_1558_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1559_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
lean_ctor_set(v___x_1559_, 1, v___f_1557_);
lean_ctor_set(v___x_1559_, 2, v___f_1556_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_1562_ = l_Lean_registerBuiltinAttribute(v___x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2____boxed(lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_();
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1565_, lean_object* v_msg_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v_msg_1566_, v___y_1567_, v___y_1568_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1571_, lean_object* v_msg_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0(v_00_u03b1_1571_, v_msg_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b1_1577_, lean_object* v_ref_1578_, lean_object* v_msg_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_ref_1578_, v_msg_1579_, v___y_1580_, v___y_1581_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___boxed(lean_object* v_00_u03b1_1584_, lean_object* v_ref_1585_, lean_object* v_msg_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4(v_00_u03b1_1584_, v_ref_1585_, v_msg_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v_ref_1585_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5(lean_object* v_00_u03b1_1591_, lean_object* v_attrName_1592_, lean_object* v_declName_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___redArg(v_attrName_1592_, v_declName_1593_, v___y_1594_, v___y_1595_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5___boxed(lean_object* v_00_u03b1_1598_, lean_object* v_attrName_1599_, lean_object* v_declName_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__5(v_00_u03b1_1598_, v_attrName_1599_, v_declName_1600_, v___y_1601_, v___y_1602_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6(lean_object* v_00_u03b1_1605_, lean_object* v_name_1606_, uint8_t v_kind_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg(v_name_1606_, v_kind_1607_, v___y_1608_, v___y_1609_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___boxed(lean_object* v_00_u03b1_1612_, lean_object* v_name_1613_, lean_object* v_kind_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
uint8_t v_kind_boxed_1618_; lean_object* v_res_1619_; 
v_kind_boxed_1618_ = lean_unbox(v_kind_1614_);
v_res_1619_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6(v_00_u03b1_1612_, v_name_1613_, v_kind_boxed_1618_, v___y_1615_, v___y_1616_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6(lean_object* v_00_u03b2_1620_, lean_object* v_m_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___redArg(v_m_1621_, v_a_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object* v_00_u03b2_1624_, lean_object* v_m_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6(v_00_u03b2_1624_, v_m_1625_, v_a_1626_);
lean_dec(v_a_1626_);
lean_dec_ref(v_m_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1628_, lean_object* v_x_1629_, lean_object* v_x_1630_){
_start:
{
uint8_t v___x_1631_; 
v___x_1631_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(v_x_1629_, v_x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b2_1632_, lean_object* v_x_1633_, lean_object* v_x_1634_){
_start:
{
uint8_t v_res_1635_; lean_object* v_r_1636_; 
v_res_1635_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5(v_00_u03b2_1632_, v_x_1633_, v_x_1634_);
lean_dec_ref(v_x_1634_);
lean_dec_ref(v_x_1633_);
v_r_1636_ = lean_box(v_res_1635_);
return v_r_1636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9(lean_object* v_00_u03b2_1637_, lean_object* v_a_1638_, lean_object* v_x_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(v_a_1638_, v_x_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9___boxed(lean_object* v_00_u03b2_1641_, lean_object* v_a_1642_, lean_object* v_x_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__6_spec__9(v_00_u03b2_1641_, v_a_1642_, v_x_1643_);
lean_dec(v_x_1643_);
lean_dec(v_a_1642_);
return v_res_1644_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9(lean_object* v_00_u03b2_1645_, lean_object* v_x_1646_, size_t v_x_1647_, lean_object* v_x_1648_){
_start:
{
uint8_t v___x_1649_; 
v___x_1649_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___redArg(v_x_1646_, v_x_1647_, v_x_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1650_, lean_object* v_x_1651_, lean_object* v_x_1652_, lean_object* v_x_1653_){
_start:
{
size_t v_x_10508__boxed_1654_; uint8_t v_res_1655_; lean_object* v_r_1656_; 
v_x_10508__boxed_1654_ = lean_unbox_usize(v_x_1652_);
lean_dec(v_x_1652_);
v_res_1655_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9(v_00_u03b2_1650_, v_x_1651_, v_x_10508__boxed_1654_, v_x_1653_);
lean_dec_ref(v_x_1653_);
lean_dec_ref(v_x_1651_);
v_r_1656_ = lean_box(v_res_1655_);
return v_r_1656_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12(lean_object* v_00_u03b2_1657_, lean_object* v_keys_1658_, lean_object* v_vals_1659_, lean_object* v_heq_1660_, lean_object* v_i_1661_, lean_object* v_k_1662_){
_start:
{
uint8_t v___x_1663_; 
v___x_1663_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___redArg(v_keys_1658_, v_i_1661_, v_k_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12___boxed(lean_object* v_00_u03b2_1664_, lean_object* v_keys_1665_, lean_object* v_vals_1666_, lean_object* v_heq_1667_, lean_object* v_i_1668_, lean_object* v_k_1669_){
_start:
{
uint8_t v_res_1670_; lean_object* v_r_1671_; 
v_res_1670_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__9_spec__12(v_00_u03b2_1664_, v_keys_1665_, v_vals_1666_, v_heq_1667_, v_i_1668_, v_k_1669_);
lean_dec_ref(v_k_1669_);
lean_dec_ref(v_vals_1666_);
lean_dec_ref(v_keys_1665_);
v_r_1671_ = lean_box(v_res_1670_);
return v_r_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v_as_1672_, lean_object* v_x_1673_){
_start:
{
lean_object* v_fst_1674_; lean_object* v_snd_1675_; lean_object* v___x_1676_; 
v_fst_1674_ = lean_ctor_get(v_x_1673_, 0);
lean_inc(v_fst_1674_);
v_snd_1675_ = lean_ctor_get(v_x_1673_, 1);
lean_inc(v_snd_1675_);
lean_dec_ref(v_x_1673_);
v___x_1676_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_1674_, v_snd_1675_, v_as_1672_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_1677_, lean_object* v_x_1678_){
_start:
{
if (lean_obj_tag(v_x_1678_) == 0)
{
lean_object* v_k_1679_; lean_object* v_v_1680_; lean_object* v_l_1681_; lean_object* v_r_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
v_k_1679_ = lean_ctor_get(v_x_1678_, 1);
v_v_1680_ = lean_ctor_get(v_x_1678_, 2);
v_l_1681_ = lean_ctor_get(v_x_1678_, 3);
v_r_1682_ = lean_ctor_get(v_x_1678_, 4);
v___x_1683_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v_init_1677_, v_l_1681_);
lean_inc(v_v_1680_);
lean_inc(v_k_1679_);
v___x_1684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1684_, 0, v_k_1679_);
lean_ctor_set(v___x_1684_, 1, v_v_1680_);
v___x_1685_ = lean_array_push(v___x_1683_, v___x_1684_);
v_init_1677_ = v___x_1685_;
v_x_1678_ = v_r_1682_;
goto _start;
}
else
{
return v_init_1677_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_1687_, lean_object* v_x_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v_init_1687_, v_x_1688_);
lean_dec(v_x_1688_);
return v_res_1689_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_1690_, lean_object* v_x2_1691_){
_start:
{
lean_object* v_fst_1692_; lean_object* v_fst_1693_; uint8_t v___x_1694_; 
v_fst_1692_ = lean_ctor_get(v_x1_1690_, 0);
v_fst_1693_ = lean_ctor_get(v_x2_1691_, 0);
v___x_1694_ = l_Lean_Name_quickLt(v_fst_1692_, v_fst_1693_);
return v___x_1694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_1695_, lean_object* v_x2_1696_){
_start:
{
uint8_t v_res_1697_; lean_object* v_r_1698_; 
v_res_1697_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_1695_, v_x2_1696_);
lean_dec_ref(v_x2_1696_);
lean_dec_ref(v_x1_1695_);
v_r_1698_ = lean_box(v_res_1697_);
return v_r_1698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_1699_, lean_object* v_pivot_1700_, lean_object* v_as_1701_, lean_object* v_i_1702_, lean_object* v_k_1703_){
_start:
{
uint8_t v___x_1704_; 
v___x_1704_ = lean_nat_dec_lt(v_k_1703_, v_hi_1699_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
lean_dec(v_k_1703_);
v___x_1705_ = lean_array_fswap(v_as_1701_, v_i_1702_, v_hi_1699_);
v___x_1706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1706_, 0, v_i_1702_);
lean_ctor_set(v___x_1706_, 1, v___x_1705_);
return v___x_1706_;
}
else
{
lean_object* v___x_1707_; lean_object* v_fst_1708_; lean_object* v_fst_1709_; uint8_t v___x_1710_; 
v___x_1707_ = lean_array_fget_borrowed(v_as_1701_, v_k_1703_);
v_fst_1708_ = lean_ctor_get(v___x_1707_, 0);
v_fst_1709_ = lean_ctor_get(v_pivot_1700_, 0);
v___x_1710_ = l_Lean_Name_quickLt(v_fst_1708_, v_fst_1709_);
if (v___x_1710_ == 0)
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = lean_unsigned_to_nat(1u);
v___x_1712_ = lean_nat_add(v_k_1703_, v___x_1711_);
lean_dec(v_k_1703_);
v_k_1703_ = v___x_1712_;
goto _start;
}
else
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1714_ = lean_array_fswap(v_as_1701_, v_i_1702_, v_k_1703_);
v___x_1715_ = lean_unsigned_to_nat(1u);
v___x_1716_ = lean_nat_add(v_i_1702_, v___x_1715_);
lean_dec(v_i_1702_);
v___x_1717_ = lean_nat_add(v_k_1703_, v___x_1715_);
lean_dec(v_k_1703_);
v_as_1701_ = v___x_1714_;
v_i_1702_ = v___x_1716_;
v_k_1703_ = v___x_1717_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_1719_, lean_object* v_pivot_1720_, lean_object* v_as_1721_, lean_object* v_i_1722_, lean_object* v_k_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_1719_, v_pivot_1720_, v_as_1721_, v_i_1722_, v_k_1723_);
lean_dec_ref(v_pivot_1720_);
lean_dec(v_hi_1719_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_1725_, lean_object* v_as_1726_, lean_object* v_lo_1727_, lean_object* v_hi_1728_){
_start:
{
lean_object* v___y_1730_; uint8_t v___x_1740_; 
v___x_1740_ = lean_nat_dec_lt(v_lo_1727_, v_hi_1728_);
if (v___x_1740_ == 0)
{
lean_dec(v_lo_1727_);
return v_as_1726_;
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v_mid_1743_; lean_object* v___y_1745_; lean_object* v___y_1751_; lean_object* v___x_1756_; lean_object* v___x_1757_; uint8_t v___x_1758_; 
v___x_1741_ = lean_nat_add(v_lo_1727_, v_hi_1728_);
v___x_1742_ = lean_unsigned_to_nat(1u);
v_mid_1743_ = lean_nat_shiftr(v___x_1741_, v___x_1742_);
lean_dec(v___x_1741_);
v___x_1756_ = lean_array_fget_borrowed(v_as_1726_, v_mid_1743_);
v___x_1757_ = lean_array_fget_borrowed(v_as_1726_, v_lo_1727_);
v___x_1758_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_1756_, v___x_1757_);
if (v___x_1758_ == 0)
{
v___y_1751_ = v_as_1726_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1759_; 
v___x_1759_ = lean_array_fswap(v_as_1726_, v_lo_1727_, v_mid_1743_);
v___y_1751_ = v___x_1759_;
goto v___jp_1750_;
}
v___jp_1744_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; 
v___x_1746_ = lean_array_fget_borrowed(v___y_1745_, v_mid_1743_);
v___x_1747_ = lean_array_fget_borrowed(v___y_1745_, v_hi_1728_);
v___x_1748_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_1746_, v___x_1747_);
if (v___x_1748_ == 0)
{
lean_dec(v_mid_1743_);
v___y_1730_ = v___y_1745_;
goto v___jp_1729_;
}
else
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_array_fswap(v___y_1745_, v_mid_1743_, v_hi_1728_);
lean_dec(v_mid_1743_);
v___y_1730_ = v___x_1749_;
goto v___jp_1729_;
}
}
v___jp_1750_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1752_ = lean_array_fget_borrowed(v___y_1751_, v_hi_1728_);
v___x_1753_ = lean_array_fget_borrowed(v___y_1751_, v_lo_1727_);
v___x_1754_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_1752_, v___x_1753_);
if (v___x_1754_ == 0)
{
v___y_1745_ = v___y_1751_;
goto v___jp_1744_;
}
else
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_array_fswap(v___y_1751_, v_lo_1727_, v_hi_1728_);
v___y_1745_ = v___x_1755_;
goto v___jp_1744_;
}
}
}
v___jp_1729_:
{
lean_object* v_pivot_1731_; lean_object* v___x_1732_; lean_object* v_fst_1733_; lean_object* v_snd_1734_; uint8_t v___x_1735_; 
v_pivot_1731_ = lean_array_fget(v___y_1730_, v_hi_1728_);
lean_inc_n(v_lo_1727_, 2);
v___x_1732_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_1728_, v_pivot_1731_, v___y_1730_, v_lo_1727_, v_lo_1727_);
lean_dec(v_pivot_1731_);
v_fst_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_fst_1733_);
v_snd_1734_ = lean_ctor_get(v___x_1732_, 1);
lean_inc(v_snd_1734_);
lean_dec_ref(v___x_1732_);
v___x_1735_ = lean_nat_dec_le(v_hi_1728_, v_fst_1733_);
if (v___x_1735_ == 0)
{
lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1736_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v_n_1725_, v_snd_1734_, v_lo_1727_, v_fst_1733_);
v___x_1737_ = lean_unsigned_to_nat(1u);
v___x_1738_ = lean_nat_add(v_fst_1733_, v___x_1737_);
lean_dec(v_fst_1733_);
v_as_1726_ = v___x_1736_;
v_lo_1727_ = v___x_1738_;
goto _start;
}
else
{
lean_dec(v_fst_1733_);
lean_dec(v_lo_1727_);
return v_snd_1734_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_1760_, lean_object* v_as_1761_, lean_object* v_lo_1762_, lean_object* v_hi_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v_n_1760_, v_as_1761_, v_lo_1762_, v_hi_1763_);
lean_dec(v_hi_1763_);
lean_dec(v_n_1760_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v_x_1767_, lean_object* v_s_1768_){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___y_1774_; lean_object* v___y_1775_; uint8_t v___x_1778_; 
v___x_1769_ = lean_unsigned_to_nat(0u);
v___x_1770_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v___x_1771_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v___x_1770_, v_s_1768_);
v___x_1772_ = lean_array_get_size(v___x_1771_);
v___x_1778_ = lean_nat_dec_eq(v___x_1772_, v___x_1769_);
if (v___x_1778_ == 0)
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___y_1782_; uint8_t v___x_1784_; 
v___x_1779_ = lean_unsigned_to_nat(1u);
v___x_1780_ = lean_nat_sub(v___x_1772_, v___x_1779_);
v___x_1784_ = lean_nat_dec_le(v___x_1769_, v___x_1780_);
if (v___x_1784_ == 0)
{
lean_inc(v___x_1780_);
v___y_1782_ = v___x_1780_;
goto v___jp_1781_;
}
else
{
v___y_1782_ = v___x_1769_;
goto v___jp_1781_;
}
v___jp_1781_:
{
uint8_t v___x_1783_; 
v___x_1783_ = lean_nat_dec_le(v___y_1782_, v___x_1780_);
if (v___x_1783_ == 0)
{
lean_dec(v___x_1780_);
lean_inc(v___y_1782_);
v___y_1774_ = v___y_1782_;
v___y_1775_ = v___y_1782_;
goto v___jp_1773_;
}
else
{
v___y_1774_ = v___y_1782_;
v___y_1775_ = v___x_1780_;
goto v___jp_1773_;
}
}
}
else
{
lean_object* v___x_1785_; 
lean_inc_ref_n(v___x_1771_, 2);
v___x_1785_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1771_);
lean_ctor_set(v___x_1785_, 1, v___x_1771_);
lean_ctor_set(v___x_1785_, 2, v___x_1771_);
return v___x_1785_;
}
v___jp_1773_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v___x_1772_, v___x_1771_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_inc_ref_n(v___x_1776_, 2);
v___x_1777_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
lean_ctor_set(v___x_1777_, 2, v___x_1776_);
return v___x_1777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v_x_1786_, lean_object* v_s_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(v_x_1786_, v_s_1787_);
lean_dec(v_s_1787_);
lean_dec_ref(v_x_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v_es_1789_){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1790_ = lean_unsigned_to_nat(0u);
v___x_1791_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v___x_1792_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v___x_1791_, v_es_1789_);
v___x_1793_ = lean_array_get_size(v___x_1792_);
v___x_1794_ = lean_nat_dec_eq(v___x_1793_, v___x_1790_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___y_1798_; uint8_t v___x_1802_; 
v___x_1795_ = lean_unsigned_to_nat(1u);
v___x_1796_ = lean_nat_sub(v___x_1793_, v___x_1795_);
v___x_1802_ = lean_nat_dec_le(v___x_1790_, v___x_1796_);
if (v___x_1802_ == 0)
{
lean_inc(v___x_1796_);
v___y_1798_ = v___x_1796_;
goto v___jp_1797_;
}
else
{
v___y_1798_ = v___x_1790_;
goto v___jp_1797_;
}
v___jp_1797_:
{
uint8_t v___x_1799_; 
v___x_1799_ = lean_nat_dec_le(v___y_1798_, v___x_1796_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; 
lean_dec(v___x_1796_);
lean_inc(v___y_1798_);
v___x_1800_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v___x_1793_, v___x_1792_, v___y_1798_, v___y_1798_);
lean_dec(v___y_1798_);
return v___x_1800_;
}
else
{
lean_object* v___x_1801_; 
v___x_1801_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v___x_1793_, v___x_1792_, v___y_1798_, v___x_1796_);
lean_dec(v___x_1796_);
return v___x_1801_;
}
}
}
else
{
return v___x_1792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v_es_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(v_es_1803_);
lean_dec(v_es_1803_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v___x_1805_, lean_object* v_x_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1805_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v___x_1810_, lean_object* v_x_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(v___x_1810_, v_x_1811_, v___y_1812_);
lean_dec_ref(v___y_1812_);
lean_dec_ref(v_x_1811_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v___x_1842_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v_a_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_();
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0(lean_object* v_init_1845_, lean_object* v_t_1846_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v_init_1845_, v_t_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_1848_, lean_object* v_t_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0(v_init_1848_, v_t_1849_);
lean_dec(v_t_1849_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1(lean_object* v_n_1851_, lean_object* v_as_1852_, lean_object* v_lo_1853_, lean_object* v_hi_1854_, lean_object* v_w_1855_, lean_object* v_hlo_1856_, lean_object* v_hhi_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v_n_1851_, v_as_1852_, v_lo_1853_, v_hi_1854_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_1859_, lean_object* v_as_1860_, lean_object* v_lo_1861_, lean_object* v_hi_1862_, lean_object* v_w_1863_, lean_object* v_hlo_1864_, lean_object* v_hhi_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1(v_n_1859_, v_as_1860_, v_lo_1861_, v_hi_1862_, v_w_1863_, v_hlo_1864_, v_hhi_1865_);
lean_dec(v_hi_1862_);
lean_dec(v_n_1859_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_1867_, lean_object* v_lo_1868_, lean_object* v_hi_1869_, lean_object* v_hhi_1870_, lean_object* v_pivot_1871_, lean_object* v_as_1872_, lean_object* v_i_1873_, lean_object* v_k_1874_, lean_object* v_ilo_1875_, lean_object* v_ik_1876_, lean_object* v_w_1877_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_1869_, v_pivot_1871_, v_as_1872_, v_i_1873_, v_k_1874_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_1879_, lean_object* v_lo_1880_, lean_object* v_hi_1881_, lean_object* v_hhi_1882_, lean_object* v_pivot_1883_, lean_object* v_as_1884_, lean_object* v_i_1885_, lean_object* v_k_1886_, lean_object* v_ilo_1887_, lean_object* v_ik_1888_, lean_object* v_w_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2(v_n_1879_, v_lo_1880_, v_hi_1881_, v_hhi_1882_, v_pivot_1883_, v_as_1884_, v_i_1885_, v_k_1886_, v_ilo_1887_, v_ik_1888_, v_w_1889_);
lean_dec_ref(v_pivot_1883_);
lean_dec(v_hi_1881_);
lean_dec(v_lo_1880_);
lean_dec(v_n_1879_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1(lean_object* v_tag_1895_, lean_object* v___x_1896_, lean_object* v_toPure_1897_, lean_object* v___f_1898_, lean_object* v_env_1899_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1899_, v_tag_1895_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v___x_1904_; lean_object* v_toEnvExtension_1905_; lean_object* v_asyncMode_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
lean_dec_ref(v___f_1898_);
v___x_1904_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_1905_ = lean_ctor_get(v___x_1904_, 0);
v_asyncMode_1906_ = lean_ctor_get(v_toEnvExtension_1905_, 2);
v___x_1907_ = lean_box(0);
v___x_1908_ = 0;
v___x_1909_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1896_, v___x_1904_, v_env_1899_, v_asyncMode_1906_, v___x_1907_, v___x_1908_);
v___x_1910_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1909_, v_tag_1895_);
lean_dec(v_tag_1895_);
lean_dec(v___x_1909_);
v___x_1911_ = lean_apply_2(v_toPure_1897_, lean_box(0), v___x_1910_);
return v___x_1911_;
}
else
{
lean_object* v_val_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; uint8_t v___x_1918_; 
v_val_1912_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_val_1912_);
lean_dec_ref_known(v___x_1903_, 1);
v___x_1913_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v___x_1914_ = 0;
v___x_1915_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1896_, v___x_1913_, v_env_1899_, v_val_1912_, v___x_1914_);
lean_dec(v_val_1912_);
lean_dec_ref(v_env_1899_);
v___x_1916_ = lean_unsigned_to_nat(0u);
v___x_1917_ = lean_array_get_size(v___x_1915_);
v___x_1918_ = lean_nat_dec_lt(v___x_1916_, v___x_1917_);
if (v___x_1918_ == 0)
{
lean_dec_ref(v___x_1915_);
lean_dec_ref(v___f_1898_);
lean_dec(v_tag_1895_);
goto v___jp_1900_;
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; uint8_t v___x_1921_; 
v___x_1919_ = lean_unsigned_to_nat(1u);
v___x_1920_ = lean_nat_sub(v___x_1917_, v___x_1919_);
v___x_1921_ = lean_nat_dec_le(v___x_1916_, v___x_1920_);
if (v___x_1921_ == 0)
{
lean_dec(v___x_1920_);
lean_dec_ref(v___x_1915_);
lean_dec_ref(v___f_1898_);
lean_dec(v_tag_1895_);
goto v___jp_1900_;
}
else
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1922_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0));
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v_tag_1895_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
v___x_1924_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1));
v___x_1925_ = l_Array_binSearchAux___redArg(v___f_1898_, v___x_1924_, v___x_1915_, v___x_1923_, v___x_1916_, v___x_1920_);
lean_dec_ref(v___x_1915_);
if (lean_obj_tag(v___x_1925_) == 0)
{
goto v___jp_1900_;
}
else
{
lean_object* v_val_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1935_; 
v_val_1926_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1928_ = v___x_1925_;
v_isShared_1929_ = v_isSharedCheck_1935_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_val_1926_);
lean_dec(v___x_1925_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1935_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v_snd_1930_; lean_object* v___x_1932_; 
v_snd_1930_ = lean_ctor_get(v_val_1926_, 1);
lean_inc(v_snd_1930_);
lean_dec(v_val_1926_);
if (v_isShared_1929_ == 0)
{
lean_ctor_set(v___x_1928_, 0, v_snd_1930_);
v___x_1932_ = v___x_1928_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_snd_1930_);
v___x_1932_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1933_; 
v___x_1933_ = lean_apply_2(v_toPure_1897_, lean_box(0), v___x_1932_);
return v___x_1933_;
}
}
}
}
}
}
v___jp_1900_:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = lean_box(0);
v___x_1902_ = lean_apply_2(v_toPure_1897_, lean_box(0), v___x_1901_);
return v___x_1902_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg(lean_object* v_inst_1937_, lean_object* v_inst_1938_, lean_object* v_tag_1939_){
_start:
{
lean_object* v_toApplicative_1940_; lean_object* v_toBind_1941_; lean_object* v_getEnv_1942_; lean_object* v_toPure_1943_; lean_object* v___f_1944_; lean_object* v___x_1945_; lean_object* v___f_1946_; lean_object* v___x_1947_; 
v_toApplicative_1940_ = lean_ctor_get(v_inst_1937_, 0);
lean_inc_ref(v_toApplicative_1940_);
v_toBind_1941_ = lean_ctor_get(v_inst_1937_, 1);
lean_inc(v_toBind_1941_);
lean_dec_ref(v_inst_1937_);
v_getEnv_1942_ = lean_ctor_get(v_inst_1938_, 0);
lean_inc(v_getEnv_1942_);
lean_dec_ref(v_inst_1938_);
v_toPure_1943_ = lean_ctor_get(v_toApplicative_1940_, 1);
lean_inc(v_toPure_1943_);
lean_dec_ref(v_toApplicative_1940_);
v___f_1944_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0));
v___x_1945_ = lean_box(1);
v___f_1946_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1946_, 0, v_tag_1939_);
lean_closure_set(v___f_1946_, 1, v___x_1945_);
lean_closure_set(v___f_1946_, 2, v_toPure_1943_);
lean_closure_set(v___f_1946_, 3, v___f_1944_);
v___x_1947_ = lean_apply_4(v_toBind_1941_, lean_box(0), lean_box(0), v_getEnv_1942_, v___f_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo(lean_object* v_m_1948_, lean_object* v_inst_1949_, lean_object* v_inst_1950_, lean_object* v_tag_1951_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l_Lean_Parser_Tactic_Doc_tagInfo___redArg(v_inst_1949_, v_inst_1950_, v_tag_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__0(lean_object* v_l_1953_, lean_object* v_k_1954_, lean_object* v_x_1955_){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_array_push(v_l_1953_, v_k_1954_);
return v___x_1956_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1(lean_object* v_x1_1957_, lean_object* v_x2_1958_){
_start:
{
uint8_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; uint8_t v___x_1962_; 
v___x_1959_ = 1;
v___x_1960_ = l_Lean_Name_toString(v_x1_1957_, v___x_1959_);
v___x_1961_ = l_Lean_Name_toString(v_x2_1958_, v___x_1959_);
v___x_1962_ = lean_string_dec_lt(v___x_1960_, v___x_1961_);
lean_dec_ref(v___x_1961_);
lean_dec_ref(v___x_1960_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1___boxed(lean_object* v_x1_1963_, lean_object* v_x2_1964_){
_start:
{
uint8_t v_res_1965_; lean_object* v_r_1966_; 
v_res_1965_ = l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1(v_x1_1963_, v_x2_1964_);
v_r_1966_ = lean_box(v_res_1965_);
return v_r_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3(lean_object* v_toPure_1967_, lean_object* v_a_1968_, lean_object* v_b_1969_, lean_object* v_c_1970_){
_start:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1971_ = l_Lean_NameSet_insert(v_c_1970_, v_a_1968_);
v___x_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1971_);
v___x_1973_ = lean_apply_2(v_toPure_1967_, lean_box(0), v___x_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3___boxed(lean_object* v_toPure_1974_, lean_object* v_a_1975_, lean_object* v_b_1976_, lean_object* v_c_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3(v_toPure_1974_, v_a_1975_, v_b_1976_, v_c_1977_);
lean_dec_ref(v_b_1976_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__2(lean_object* v_toPure_1979_, lean_object* v_a_1980_, lean_object* v_x_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_fst_1983_; lean_object* v_found_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v_fst_1983_ = lean_ctor_get(v_a_1980_, 0);
lean_inc(v_fst_1983_);
lean_dec_ref(v_a_1980_);
v_found_1984_ = l_Lean_NameSet_insert(v___y_1982_, v_fst_1983_);
v___x_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1985_, 0, v_found_1984_);
v___x_1986_ = lean_apply_2(v_toPure_1979_, lean_box(0), v___x_1985_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5(lean_object* v_inst_1987_, lean_object* v___f_1988_, lean_object* v_toBind_1989_, lean_object* v___f_1990_, lean_object* v_a_1991_, lean_object* v_x_1992_, lean_object* v___y_1993_){
_start:
{
size_t v_sz_1994_; size_t v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v_sz_1994_ = lean_array_size(v_a_1991_);
v___x_1995_ = ((size_t)0ULL);
v___x_1996_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1987_, v_a_1991_, v___f_1988_, v_sz_1994_, v___x_1995_, v___y_1993_);
v___x_1997_ = lean_apply_4(v_toBind_1989_, lean_box(0), lean_box(0), v___x_1996_, v___f_1990_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__4(lean_object* v_toPure_1998_, lean_object* v___f_1999_, lean_object* v___f_2000_, lean_object* v_____s_2001_){
_start:
{
lean_object* v___y_2003_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2019_; 
if (lean_obj_tag(v_____s_2001_) == 0)
{
lean_object* v_size_2028_; 
v_size_2028_ = lean_ctor_get(v_____s_2001_, 0);
lean_inc(v_size_2028_);
v___y_2019_ = v_size_2028_;
goto v___jp_2018_;
}
else
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_unsigned_to_nat(0u);
v___y_2019_ = v___x_2029_;
goto v___jp_2018_;
}
v___jp_2002_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2004_ = lean_array_to_list(v___y_2003_);
v___x_2005_ = lean_apply_2(v_toPure_1998_, lean_box(0), v___x_2004_);
return v___x_2005_;
}
v___jp_2006_:
{
lean_object* v___x_2011_; 
v___x_2011_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_1999_, v___y_2009_, v___y_2007_, v___y_2008_, v___y_2010_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2010_);
lean_dec(v___y_2009_);
v___y_2003_ = v___x_2011_;
goto v___jp_2002_;
}
v___jp_2012_:
{
uint8_t v___x_2017_; 
v___x_2017_ = lean_nat_dec_le(v___y_2016_, v___y_2015_);
if (v___x_2017_ == 0)
{
lean_dec(v___y_2015_);
lean_inc(v___y_2016_);
v___y_2007_ = v___y_2013_;
v___y_2008_ = v___y_2016_;
v___y_2009_ = v___y_2014_;
v___y_2010_ = v___y_2016_;
goto v___jp_2006_;
}
else
{
v___y_2007_ = v___y_2013_;
v___y_2008_ = v___y_2016_;
v___y_2009_ = v___y_2014_;
v___y_2010_ = v___y_2015_;
goto v___jp_2006_;
}
}
v___jp_2018_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; uint8_t v___x_2024_; 
v___x_2020_ = lean_mk_empty_array_with_capacity(v___y_2019_);
lean_dec(v___y_2019_);
v___x_2021_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_2000_, v___x_2020_, v_____s_2001_);
v___x_2022_ = lean_array_get_size(v___x_2021_);
v___x_2023_ = lean_unsigned_to_nat(0u);
v___x_2024_ = lean_nat_dec_eq(v___x_2022_, v___x_2023_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; uint8_t v___x_2027_; 
v___x_2025_ = lean_unsigned_to_nat(1u);
v___x_2026_ = lean_nat_sub(v___x_2022_, v___x_2025_);
v___x_2027_ = lean_nat_dec_le(v___x_2023_, v___x_2026_);
if (v___x_2027_ == 0)
{
lean_inc(v___x_2026_);
v___y_2013_ = v___x_2021_;
v___y_2014_ = v___x_2022_;
v___y_2015_ = v___x_2026_;
v___y_2016_ = v___x_2026_;
goto v___jp_2012_;
}
else
{
v___y_2013_ = v___x_2021_;
v___y_2014_ = v___x_2022_;
v___y_2015_ = v___x_2026_;
v___y_2016_ = v___x_2023_;
goto v___jp_2012_;
}
}
else
{
lean_dec_ref(v___f_1999_);
v___y_2003_ = v___x_2021_;
goto v___jp_2002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6(lean_object* v___x_2030_, lean_object* v_toEnvExtension_2031_, lean_object* v_env_2032_, lean_object* v_asyncMode_2033_, lean_object* v___x_2034_, uint8_t v___x_2035_, lean_object* v_inst_2036_, lean_object* v___f_2037_, lean_object* v_toBind_2038_, lean_object* v___f_2039_, lean_object* v_____s_2040_){
_start:
{
lean_object* v___x_2041_; lean_object* v_importedEntries_2042_; size_t v_sz_2043_; size_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2041_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2030_, v_toEnvExtension_2031_, v_env_2032_, v_asyncMode_2033_, v___x_2034_, v___x_2035_);
v_importedEntries_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc_ref(v_importedEntries_2042_);
lean_dec(v___x_2041_);
v_sz_2043_ = lean_array_size(v_importedEntries_2042_);
v___x_2044_ = ((size_t)0ULL);
v___x_2045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2036_, v_importedEntries_2042_, v___f_2037_, v_sz_2043_, v___x_2044_, v_____s_2040_);
v___x_2046_ = lean_apply_4(v_toBind_2038_, lean_box(0), lean_box(0), v___x_2045_, v___f_2039_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed(lean_object* v___x_2047_, lean_object* v_toEnvExtension_2048_, lean_object* v_env_2049_, lean_object* v_asyncMode_2050_, lean_object* v___x_2051_, lean_object* v___x_2052_, lean_object* v_inst_2053_, lean_object* v___f_2054_, lean_object* v_toBind_2055_, lean_object* v___f_2056_, lean_object* v_____s_2057_){
_start:
{
uint8_t v___x_532__boxed_2058_; lean_object* v_res_2059_; 
v___x_532__boxed_2058_ = lean_unbox(v___x_2052_);
v_res_2059_ = l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6(v___x_2047_, v_toEnvExtension_2048_, v_env_2049_, v_asyncMode_2050_, v___x_2051_, v___x_532__boxed_2058_, v_inst_2053_, v___f_2054_, v_toBind_2055_, v___f_2056_, v_____s_2057_);
lean_dec(v_asyncMode_2050_);
lean_dec_ref(v_toEnvExtension_2048_);
lean_dec_ref(v___x_2047_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__7(lean_object* v___x_2060_, lean_object* v_inst_2061_, lean_object* v___f_2062_, lean_object* v_toBind_2063_, lean_object* v___f_2064_, lean_object* v___x_2065_, lean_object* v___f_2066_, lean_object* v___f_2067_, lean_object* v_env_2068_){
_start:
{
lean_object* v___x_2069_; lean_object* v_toEnvExtension_2070_; lean_object* v_asyncMode_2071_; lean_object* v_found_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___f_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2069_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2070_ = lean_ctor_get(v___x_2069_, 0);
v_asyncMode_2071_ = lean_ctor_get(v_toEnvExtension_2070_, 2);
v_found_2072_ = l_Lean_NameSet_empty;
v___x_2073_ = lean_box(0);
v___x_2074_ = 0;
v___x_2075_ = lean_box(v___x_2074_);
lean_inc_n(v_toBind_2063_, 2);
lean_inc_ref(v_inst_2061_);
lean_inc(v_asyncMode_2071_);
lean_inc_ref(v_env_2068_);
lean_inc_ref(v_toEnvExtension_2070_);
v___f_2076_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_2076_, 0, v___x_2060_);
lean_closure_set(v___f_2076_, 1, v_toEnvExtension_2070_);
lean_closure_set(v___f_2076_, 2, v_env_2068_);
lean_closure_set(v___f_2076_, 3, v_asyncMode_2071_);
lean_closure_set(v___f_2076_, 4, v___x_2073_);
lean_closure_set(v___f_2076_, 5, v___x_2075_);
lean_closure_set(v___f_2076_, 6, v_inst_2061_);
lean_closure_set(v___f_2076_, 7, v___f_2062_);
lean_closure_set(v___f_2076_, 8, v_toBind_2063_);
lean_closure_set(v___f_2076_, 9, v___f_2064_);
v___x_2077_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2065_, v___x_2069_, v_env_2068_, v_asyncMode_2071_, v___x_2073_, v___x_2074_);
v___x_2078_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_2061_, v___f_2066_, v_found_2072_, v___x_2077_);
v___x_2079_ = lean_apply_4(v_toBind_2063_, lean_box(0), lean_box(0), v___x_2078_, v___f_2067_);
v___x_2080_ = lean_apply_4(v_toBind_2063_, lean_box(0), lean_box(0), v___x_2079_, v___f_2076_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg(lean_object* v_inst_2083_, lean_object* v_inst_2084_){
_start:
{
lean_object* v_toApplicative_2085_; lean_object* v_toBind_2086_; lean_object* v_getEnv_2087_; lean_object* v_toPure_2088_; lean_object* v___f_2089_; lean_object* v___f_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___f_2093_; lean_object* v___f_2094_; lean_object* v___f_2095_; lean_object* v___f_2096_; lean_object* v___f_2097_; lean_object* v___f_2098_; lean_object* v___f_2099_; lean_object* v___x_2100_; 
v_toApplicative_2085_ = lean_ctor_get(v_inst_2083_, 0);
v_toBind_2086_ = lean_ctor_get(v_inst_2083_, 1);
lean_inc_n(v_toBind_2086_, 3);
v_getEnv_2087_ = lean_ctor_get(v_inst_2084_, 0);
lean_inc(v_getEnv_2087_);
lean_dec_ref(v_inst_2084_);
v_toPure_2088_ = lean_ctor_get(v_toApplicative_2085_, 1);
v___f_2089_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0));
v___f_2090_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1));
v___x_2091_ = lean_box(1);
v___x_2092_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
lean_inc_n(v_toPure_2088_, 5);
v___f_2093_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2093_, 0, v_toPure_2088_);
v___f_2094_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3___boxed), 4, 1);
lean_closure_set(v___f_2094_, 0, v_toPure_2088_);
v___f_2095_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__2), 4, 1);
lean_closure_set(v___f_2095_, 0, v_toPure_2088_);
v___f_2096_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2096_, 0, v_toPure_2088_);
lean_inc_ref(v_inst_2083_);
v___f_2097_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5), 7, 4);
lean_closure_set(v___f_2097_, 0, v_inst_2083_);
lean_closure_set(v___f_2097_, 1, v___f_2095_);
lean_closure_set(v___f_2097_, 2, v_toBind_2086_);
lean_closure_set(v___f_2097_, 3, v___f_2096_);
v___f_2098_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__4), 4, 3);
lean_closure_set(v___f_2098_, 0, v_toPure_2088_);
lean_closure_set(v___f_2098_, 1, v___f_2090_);
lean_closure_set(v___f_2098_, 2, v___f_2089_);
v___f_2099_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__7), 9, 8);
lean_closure_set(v___f_2099_, 0, v___x_2092_);
lean_closure_set(v___f_2099_, 1, v_inst_2083_);
lean_closure_set(v___f_2099_, 2, v___f_2097_);
lean_closure_set(v___f_2099_, 3, v_toBind_2086_);
lean_closure_set(v___f_2099_, 4, v___f_2098_);
lean_closure_set(v___f_2099_, 5, v___x_2091_);
lean_closure_set(v___f_2099_, 6, v___f_2094_);
lean_closure_set(v___f_2099_, 7, v___f_2093_);
v___x_2100_ = lean_apply_4(v_toBind_2086_, lean_box(0), lean_box(0), v_getEnv_2087_, v___f_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags(lean_object* v_m_2101_, lean_object* v_inst_2102_, lean_object* v_inst_2103_){
_start:
{
lean_object* v___x_2104_; 
v___x_2104_ = l_Lean_Parser_Tactic_Doc_allTags___redArg(v_inst_2102_, v_inst_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__0(lean_object* v_arr_2105_, lean_object* v_k_2106_, lean_object* v_v_2107_){
_start:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2108_, 0, v_k_2106_);
lean_ctor_set(v___x_2108_, 1, v_v_2107_);
v___x_2109_ = lean_array_push(v_arr_2105_, v___x_2108_);
return v___x_2109_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1(lean_object* v_x1_2110_, lean_object* v_x2_2111_){
_start:
{
lean_object* v_fst_2112_; lean_object* v_fst_2113_; uint8_t v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; 
v_fst_2112_ = lean_ctor_get(v_x1_2110_, 0);
lean_inc(v_fst_2112_);
lean_dec_ref(v_x1_2110_);
v_fst_2113_ = lean_ctor_get(v_x2_2111_, 0);
lean_inc(v_fst_2113_);
lean_dec_ref(v_x2_2111_);
v___x_2114_ = 1;
v___x_2115_ = l_Lean_Name_toString(v_fst_2112_, v___x_2114_);
v___x_2116_ = l_Lean_Name_toString(v_fst_2113_, v___x_2114_);
v___x_2117_ = lean_string_dec_lt(v___x_2115_, v___x_2116_);
lean_dec_ref(v___x_2116_);
lean_dec_ref(v___x_2115_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1___boxed(lean_object* v_x1_2118_, lean_object* v_x2_2119_){
_start:
{
uint8_t v_res_2120_; lean_object* v_r_2121_; 
v_res_2120_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1(v_x1_2118_, v_x2_2119_);
v_r_2121_ = lean_box(v_res_2120_);
return v_r_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__3(lean_object* v_toPure_2122_, lean_object* v_a_2123_, lean_object* v_b_2124_, lean_object* v_c_2125_){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2126_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_a_2123_, v_b_2124_, v_c_2125_);
v___x_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
v___x_2128_ = lean_apply_2(v_toPure_2122_, lean_box(0), v___x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__2(lean_object* v_toPure_2129_, lean_object* v_a_2130_, lean_object* v_x_2131_, lean_object* v___y_2132_){
_start:
{
lean_object* v_fst_2133_; lean_object* v_snd_2134_; lean_object* v_found_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_fst_2133_ = lean_ctor_get(v_a_2130_, 0);
lean_inc(v_fst_2133_);
v_snd_2134_ = lean_ctor_get(v_a_2130_, 1);
lean_inc(v_snd_2134_);
lean_dec_ref(v_a_2130_);
v_found_2135_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2133_, v_snd_2134_, v___y_2132_);
v___x_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2136_, 0, v_found_2135_);
v___x_2137_ = lean_apply_2(v_toPure_2129_, lean_box(0), v___x_2136_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__6(lean_object* v_toPure_2138_, lean_object* v___f_2139_, lean_object* v___f_2140_, lean_object* v_____s_2141_){
_start:
{
lean_object* v___y_2143_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v_arr_2148_; lean_object* v___x_2149_; lean_object* v___y_2151_; lean_object* v___y_2152_; uint8_t v___x_2154_; 
v___x_2146_ = lean_unsigned_to_nat(0u);
v___x_2147_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v_arr_2148_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_2139_, v___x_2147_, v_____s_2141_);
v___x_2149_ = lean_array_get_size(v_arr_2148_);
v___x_2154_ = lean_nat_dec_eq(v___x_2149_, v___x_2146_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___y_2158_; uint8_t v___x_2160_; 
v___x_2155_ = lean_unsigned_to_nat(1u);
v___x_2156_ = lean_nat_sub(v___x_2149_, v___x_2155_);
v___x_2160_ = lean_nat_dec_le(v___x_2146_, v___x_2156_);
if (v___x_2160_ == 0)
{
lean_inc(v___x_2156_);
v___y_2158_ = v___x_2156_;
goto v___jp_2157_;
}
else
{
v___y_2158_ = v___x_2146_;
goto v___jp_2157_;
}
v___jp_2157_:
{
uint8_t v___x_2159_; 
v___x_2159_ = lean_nat_dec_le(v___y_2158_, v___x_2156_);
if (v___x_2159_ == 0)
{
lean_dec(v___x_2156_);
lean_inc(v___y_2158_);
v___y_2151_ = v___y_2158_;
v___y_2152_ = v___y_2158_;
goto v___jp_2150_;
}
else
{
v___y_2151_ = v___y_2158_;
v___y_2152_ = v___x_2156_;
goto v___jp_2150_;
}
}
}
else
{
lean_dec_ref(v___f_2140_);
v___y_2143_ = v_arr_2148_;
goto v___jp_2142_;
}
v___jp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = lean_array_to_list(v___y_2143_);
v___x_2145_ = lean_apply_2(v_toPure_2138_, lean_box(0), v___x_2144_);
return v___x_2145_;
}
v___jp_2150_:
{
lean_object* v___x_2153_; 
v___x_2153_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_2140_, v___x_2149_, v_arr_2148_, v___y_2151_, v___y_2152_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2152_);
v___y_2143_ = v___x_2153_;
goto v___jp_2142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__5(lean_object* v___x_2161_, lean_object* v_inst_2162_, lean_object* v___f_2163_, lean_object* v_toBind_2164_, lean_object* v___f_2165_, lean_object* v___x_2166_, lean_object* v___f_2167_, lean_object* v___f_2168_, lean_object* v_env_2169_){
_start:
{
lean_object* v___x_2170_; lean_object* v_toEnvExtension_2171_; lean_object* v_asyncMode_2172_; lean_object* v_found_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; lean_object* v___x_2176_; lean_object* v___f_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2170_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2171_ = lean_ctor_get(v___x_2170_, 0);
v_asyncMode_2172_ = lean_ctor_get(v_toEnvExtension_2171_, 2);
v_found_2173_ = lean_box(1);
v___x_2174_ = lean_box(0);
v___x_2175_ = 0;
v___x_2176_ = lean_box(v___x_2175_);
lean_inc_n(v_toBind_2164_, 2);
lean_inc_ref(v_inst_2162_);
lean_inc(v_asyncMode_2172_);
lean_inc_ref(v_env_2169_);
lean_inc_ref(v_toEnvExtension_2171_);
v___f_2177_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_2177_, 0, v___x_2161_);
lean_closure_set(v___f_2177_, 1, v_toEnvExtension_2171_);
lean_closure_set(v___f_2177_, 2, v_env_2169_);
lean_closure_set(v___f_2177_, 3, v_asyncMode_2172_);
lean_closure_set(v___f_2177_, 4, v___x_2174_);
lean_closure_set(v___f_2177_, 5, v___x_2176_);
lean_closure_set(v___f_2177_, 6, v_inst_2162_);
lean_closure_set(v___f_2177_, 7, v___f_2163_);
lean_closure_set(v___f_2177_, 8, v_toBind_2164_);
lean_closure_set(v___f_2177_, 9, v___f_2165_);
v___x_2178_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2166_, v___x_2170_, v_env_2169_, v_asyncMode_2172_, v___x_2174_, v___x_2175_);
v___x_2179_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_2162_, v___f_2167_, v_found_2173_, v___x_2178_);
v___x_2180_ = lean_apply_4(v_toBind_2164_, lean_box(0), lean_box(0), v___x_2179_, v___f_2168_);
v___x_2181_ = lean_apply_4(v_toBind_2164_, lean_box(0), lean_box(0), v___x_2180_, v___f_2177_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg(lean_object* v_inst_2184_, lean_object* v_inst_2185_){
_start:
{
lean_object* v_toApplicative_2186_; lean_object* v_toBind_2187_; lean_object* v_getEnv_2188_; lean_object* v_toPure_2189_; lean_object* v___f_2190_; lean_object* v___f_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___f_2194_; lean_object* v___f_2195_; lean_object* v___f_2196_; lean_object* v___f_2197_; lean_object* v___f_2198_; lean_object* v___f_2199_; lean_object* v___f_2200_; lean_object* v___x_2201_; 
v_toApplicative_2186_ = lean_ctor_get(v_inst_2184_, 0);
v_toBind_2187_ = lean_ctor_get(v_inst_2184_, 1);
lean_inc_n(v_toBind_2187_, 3);
v_getEnv_2188_ = lean_ctor_get(v_inst_2185_, 0);
lean_inc(v_getEnv_2188_);
lean_dec_ref(v_inst_2185_);
v_toPure_2189_ = lean_ctor_get(v_toApplicative_2186_, 1);
v___f_2190_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0));
v___f_2191_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1));
v___x_2192_ = lean_box(1);
v___x_2193_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
lean_inc_n(v_toPure_2189_, 5);
v___f_2194_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2194_, 0, v_toPure_2189_);
v___f_2195_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__3), 4, 1);
lean_closure_set(v___f_2195_, 0, v_toPure_2189_);
v___f_2196_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__2), 4, 1);
lean_closure_set(v___f_2196_, 0, v_toPure_2189_);
v___f_2197_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2197_, 0, v_toPure_2189_);
lean_inc_ref(v_inst_2184_);
v___f_2198_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5), 7, 4);
lean_closure_set(v___f_2198_, 0, v_inst_2184_);
lean_closure_set(v___f_2198_, 1, v___f_2196_);
lean_closure_set(v___f_2198_, 2, v_toBind_2187_);
lean_closure_set(v___f_2198_, 3, v___f_2197_);
v___f_2199_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__6), 4, 3);
lean_closure_set(v___f_2199_, 0, v_toPure_2189_);
lean_closure_set(v___f_2199_, 1, v___f_2190_);
lean_closure_set(v___f_2199_, 2, v___f_2191_);
v___f_2200_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__5), 9, 8);
lean_closure_set(v___f_2200_, 0, v___x_2193_);
lean_closure_set(v___f_2200_, 1, v_inst_2184_);
lean_closure_set(v___f_2200_, 2, v___f_2198_);
lean_closure_set(v___f_2200_, 3, v_toBind_2187_);
lean_closure_set(v___f_2200_, 4, v___f_2199_);
lean_closure_set(v___f_2200_, 5, v___x_2192_);
lean_closure_set(v___f_2200_, 6, v___f_2195_);
lean_closure_set(v___f_2200_, 7, v___f_2194_);
v___x_2201_ = lean_apply_4(v_toBind_2187_, lean_box(0), lean_box(0), v_getEnv_2188_, v___f_2200_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo(lean_object* v_m_2202_, lean_object* v_inst_2203_, lean_object* v_inst_2204_){
_start:
{
lean_object* v___x_2205_; 
v___x_2205_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg(v_inst_2203_, v_inst_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(lean_object* v_a_2206_, lean_object* v_init_2207_, lean_object* v_x_2208_){
_start:
{
if (lean_obj_tag(v_x_2208_) == 0)
{
lean_object* v_k_2209_; lean_object* v_l_2210_; lean_object* v_r_2211_; lean_object* v___x_2212_; lean_object* v_a_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v_k_2209_ = lean_ctor_get(v_x_2208_, 1);
v_l_2210_ = lean_ctor_get(v_x_2208_, 3);
v_r_2211_ = lean_ctor_get(v_x_2208_, 4);
lean_inc_n(v_a_2206_, 2);
v___x_2212_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(v_a_2206_, v_init_2207_, v_l_2210_);
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
lean_dec_ref(v___x_2212_);
lean_inc(v_k_2209_);
v___x_2214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2214_, 0, v_a_2206_);
lean_ctor_set(v___x_2214_, 1, v_k_2209_);
v___x_2215_ = lean_array_push(v_a_2213_, v___x_2214_);
v_init_2207_ = v___x_2215_;
v_x_2208_ = v_r_2211_;
goto _start;
}
else
{
lean_object* v___x_2217_; 
lean_dec(v_a_2206_);
v___x_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2217_, 0, v_init_2207_);
return v___x_2217_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1___boxed(lean_object* v_a_2218_, lean_object* v_init_2219_, lean_object* v_x_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(v_a_2218_, v_init_2219_, v_x_2220_);
lean_dec(v_x_2220_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(lean_object* v_init_2222_, lean_object* v_x_2223_){
_start:
{
if (lean_obj_tag(v_x_2223_) == 0)
{
lean_object* v_k_2224_; lean_object* v_v_2225_; lean_object* v_l_2226_; lean_object* v_r_2227_; lean_object* v___x_2228_; lean_object* v_a_2229_; lean_object* v___x_2230_; lean_object* v_a_2231_; 
v_k_2224_ = lean_ctor_get(v_x_2223_, 1);
lean_inc(v_k_2224_);
v_v_2225_ = lean_ctor_get(v_x_2223_, 2);
lean_inc(v_v_2225_);
v_l_2226_ = lean_ctor_get(v_x_2223_, 3);
lean_inc(v_l_2226_);
v_r_2227_ = lean_ctor_get(v_x_2223_, 4);
lean_inc(v_r_2227_);
lean_dec_ref_known(v_x_2223_, 5);
v___x_2228_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(v_init_2222_, v_l_2226_);
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_a_2229_);
lean_dec_ref(v___x_2228_);
v___x_2230_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(v_k_2224_, v_a_2229_, v_v_2225_);
lean_dec(v_v_2225_);
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
lean_inc(v_a_2231_);
lean_dec_ref(v___x_2230_);
v_init_2222_ = v_a_2231_;
v_x_2223_ = v_r_2227_;
goto _start;
}
else
{
lean_object* v___x_2233_; 
v___x_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2233_, 0, v_init_2222_);
return v___x_2233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object* v_tags_2234_){
_start:
{
lean_object* v_exported_2235_; lean_object* v___x_2236_; lean_object* v_a_2237_; 
v_exported_2235_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_2236_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(v_exported_2235_, v_tags_2234_);
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_a_2237_);
lean_dec_ref(v___x_2236_);
return v_a_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object* v_x_2238_, lean_object* v_s_2239_){
_start:
{
lean_object* v_exported_2240_; lean_object* v___x_2241_; lean_object* v_a_2242_; lean_object* v___x_2243_; 
v_exported_2240_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_2241_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(v_exported_2240_, v_s_2239_);
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
lean_inc_n(v_a_2242_, 3);
lean_dec_ref(v___x_2241_);
v___x_2243_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2243_, 0, v_a_2242_);
lean_ctor_set(v___x_2243_, 1, v_a_2242_);
lean_ctor_set(v___x_2243_, 2, v_a_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object* v_x_2244_, lean_object* v_s_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(v_x_2244_, v_s_2245_);
lean_dec_ref(v_x_2244_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(lean_object* v_t_2247_, lean_object* v_k_2248_, lean_object* v_fallback_2249_){
_start:
{
if (lean_obj_tag(v_t_2247_) == 0)
{
lean_object* v_k_2250_; lean_object* v_v_2251_; lean_object* v_l_2252_; lean_object* v_r_2253_; uint8_t v___x_2254_; 
v_k_2250_ = lean_ctor_get(v_t_2247_, 1);
v_v_2251_ = lean_ctor_get(v_t_2247_, 2);
v_l_2252_ = lean_ctor_get(v_t_2247_, 3);
v_r_2253_ = lean_ctor_get(v_t_2247_, 4);
v___x_2254_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2248_, v_k_2250_);
switch(v___x_2254_)
{
case 0:
{
v_t_2247_ = v_l_2252_;
goto _start;
}
case 1:
{
lean_inc(v_v_2251_);
return v_v_2251_;
}
default: 
{
v_t_2247_ = v_r_2253_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2249_);
return v_fallback_2249_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_t_2257_, lean_object* v_k_2258_, lean_object* v_fallback_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_t_2257_, v_k_2258_, v_fallback_2259_);
lean_dec(v_fallback_2259_);
lean_dec(v_k_2258_);
lean_dec(v_t_2257_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object* v_tags_2261_, lean_object* v_x_2262_){
_start:
{
lean_object* v_fst_2263_; lean_object* v_snd_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v_fst_2263_ = lean_ctor_get(v_x_2262_, 0);
lean_inc(v_fst_2263_);
v_snd_2264_ = lean_ctor_get(v_x_2262_, 1);
lean_inc(v_snd_2264_);
lean_dec_ref(v_x_2262_);
v___x_2265_ = l_Lean_NameSet_empty;
v___x_2266_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_tags_2261_, v_fst_2263_, v___x_2265_);
v___x_2267_ = l_Lean_NameSet_insert(v___x_2266_, v_snd_2264_);
v___x_2268_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2263_, v___x_2267_, v_tags_2261_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2293_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_));
v___x_2294_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object* v_a_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_();
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b4_2297_, lean_object* v_t_2298_, lean_object* v_k_2299_, lean_object* v_fallback_2300_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_t_2298_, v_k_2299_, v_fallback_2300_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b4_2302_, lean_object* v_t_2303_, lean_object* v_k_2304_, lean_object* v_fallback_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0(v_00_u03b4_2302_, v_t_2303_, v_k_2304_, v_fallback_2305_);
lean_dec(v_fallback_2305_);
lean_dec(v_k_2304_);
lean_dec(v_t_2303_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(lean_object* v_a_2307_, lean_object* v_a_2308_){
_start:
{
if (lean_obj_tag(v_a_2307_) == 0)
{
lean_object* v___x_2309_; 
v___x_2309_ = l_List_reverse___redArg(v_a_2308_);
return v___x_2309_;
}
else
{
lean_object* v_head_2310_; lean_object* v_tail_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2323_; 
v_head_2310_ = lean_ctor_get(v_a_2307_, 0);
v_tail_2311_ = lean_ctor_get(v_a_2307_, 1);
v_isSharedCheck_2323_ = !lean_is_exclusive(v_a_2307_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2313_ = v_a_2307_;
v_isShared_2314_ = v_isSharedCheck_2323_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_tail_2311_);
lean_inc(v_head_2310_);
lean_dec(v_a_2307_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2323_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2320_; 
v___x_2315_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_2316_ = l_Lean_MessageData_ofName(v_head_2310_);
v___x_2317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2315_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
lean_ctor_set(v___x_2318_, 1, v___x_2315_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 1, v_a_2308_);
lean_ctor_set(v___x_2313_, 0, v___x_2318_);
v___x_2320_ = v___x_2313_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v___x_2318_);
lean_ctor_set(v_reuseFailAlloc_2322_, 1, v_a_2308_);
v___x_2320_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
v_a_2307_ = v_tail_2311_;
v_a_2308_ = v___x_2320_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___lam__0(lean_object* v_addEntryFn_2324_, lean_object* v___x_2325_, lean_object* v_s_2326_){
_start:
{
lean_object* v_importedEntries_2327_; lean_object* v_state_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2336_; 
v_importedEntries_2327_ = lean_ctor_get(v_s_2326_, 0);
v_state_2328_ = lean_ctor_get(v_s_2326_, 1);
v_isSharedCheck_2336_ = !lean_is_exclusive(v_s_2326_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2330_ = v_s_2326_;
v_isShared_2331_ = v_isSharedCheck_2336_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_state_2328_);
lean_inc(v_importedEntries_2327_);
lean_dec(v_s_2326_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2336_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v_state_2332_; lean_object* v___x_2334_; 
v_state_2332_ = lean_apply_2(v_addEntryFn_2324_, v_state_2328_, v___x_2325_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 1, v_state_2332_);
v___x_2334_ = v___x_2330_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_importedEntries_2327_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v_state_2332_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_as_2337_, lean_object* v_k_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v_m_2343_; lean_object* v_a_2344_; uint8_t v___x_2345_; 
v___x_2341_ = lean_nat_add(v_x_2339_, v_x_2340_);
v___x_2342_ = lean_unsigned_to_nat(1u);
v_m_2343_ = lean_nat_shiftr(v___x_2341_, v___x_2342_);
lean_dec(v___x_2341_);
v_a_2344_ = lean_array_fget_borrowed(v_as_2337_, v_m_2343_);
v___x_2345_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_2344_, v_k_2338_);
if (v___x_2345_ == 0)
{
uint8_t v___x_2346_; 
lean_dec(v_x_2340_);
v___x_2346_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_2338_, v_a_2344_);
if (v___x_2346_ == 0)
{
lean_object* v___x_2347_; 
lean_dec(v_m_2343_);
lean_dec(v_x_2339_);
lean_inc(v_a_2344_);
v___x_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2347_, 0, v_a_2344_);
return v___x_2347_;
}
else
{
lean_object* v___x_2348_; uint8_t v___x_2349_; 
v___x_2348_ = lean_unsigned_to_nat(0u);
v___x_2349_ = lean_nat_dec_eq(v_m_2343_, v___x_2348_);
if (v___x_2349_ == 0)
{
lean_object* v___x_2350_; uint8_t v___x_2351_; 
v___x_2350_ = lean_nat_sub(v_m_2343_, v___x_2342_);
lean_dec(v_m_2343_);
v___x_2351_ = lean_nat_dec_lt(v___x_2350_, v_x_2339_);
if (v___x_2351_ == 0)
{
v_x_2340_ = v___x_2350_;
goto _start;
}
else
{
lean_object* v___x_2353_; 
lean_dec(v___x_2350_);
lean_dec(v_x_2339_);
v___x_2353_ = lean_box(0);
return v___x_2353_;
}
}
else
{
lean_object* v___x_2354_; 
lean_dec(v_m_2343_);
lean_dec(v_x_2339_);
v___x_2354_ = lean_box(0);
return v___x_2354_;
}
}
}
else
{
lean_object* v___x_2355_; uint8_t v___x_2356_; 
lean_dec(v_x_2339_);
v___x_2355_ = lean_nat_add(v_m_2343_, v___x_2342_);
lean_dec(v_m_2343_);
v___x_2356_ = lean_nat_dec_le(v___x_2355_, v_x_2340_);
if (v___x_2356_ == 0)
{
lean_object* v___x_2357_; 
lean_dec(v___x_2355_);
lean_dec(v_x_2340_);
v___x_2357_ = lean_box(0);
return v___x_2357_;
}
else
{
v_x_2339_ = v___x_2355_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_as_2359_, lean_object* v_k_2360_, lean_object* v_x_2361_, lean_object* v_x_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_2359_, v_k_2360_, v_x_2361_, v_x_2362_);
lean_dec_ref(v_k_2360_);
lean_dec_ref(v_as_2359_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(lean_object* v_tag_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v_env_2372_; lean_object* v___x_2373_; 
v___x_2367_ = lean_box(1);
v___x_2368_ = lean_st_ref_get(v___y_2365_);
v_env_2372_ = lean_ctor_get(v___x_2368_, 0);
lean_inc_ref(v_env_2372_);
lean_dec(v___x_2368_);
v___x_2373_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2372_, v_tag_2364_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v___x_2374_; lean_object* v_toEnvExtension_2375_; lean_object* v_asyncMode_2376_; lean_object* v___x_2377_; uint8_t v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2374_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2375_ = lean_ctor_get(v___x_2374_, 0);
v_asyncMode_2376_ = lean_ctor_get(v_toEnvExtension_2375_, 2);
v___x_2377_ = lean_box(0);
v___x_2378_ = 0;
v___x_2379_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2367_, v___x_2374_, v_env_2372_, v_asyncMode_2376_, v___x_2377_, v___x_2378_);
v___x_2380_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2379_, v_tag_2364_);
lean_dec(v_tag_2364_);
lean_dec(v___x_2379_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
return v___x_2381_;
}
else
{
lean_object* v_val_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2410_; 
v_val_2382_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2384_ = v___x_2373_;
v_isShared_2385_ = v_isSharedCheck_2410_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_val_2382_);
lean_dec(v___x_2373_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2410_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; uint8_t v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; 
v___x_2386_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v___x_2387_ = 0;
v___x_2388_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2367_, v___x_2386_, v_env_2372_, v_val_2382_, v___x_2387_);
lean_dec(v_val_2382_);
lean_dec_ref(v_env_2372_);
v___x_2389_ = lean_unsigned_to_nat(0u);
v___x_2390_ = lean_array_get_size(v___x_2388_);
v___x_2391_ = lean_nat_dec_lt(v___x_2389_, v___x_2390_);
if (v___x_2391_ == 0)
{
lean_dec_ref(v___x_2388_);
lean_del_object(v___x_2384_);
lean_dec(v_tag_2364_);
goto v___jp_2369_;
}
else
{
lean_object* v___x_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; 
v___x_2392_ = lean_unsigned_to_nat(1u);
v___x_2393_ = lean_nat_sub(v___x_2390_, v___x_2392_);
v___x_2394_ = lean_nat_dec_le(v___x_2389_, v___x_2393_);
if (v___x_2394_ == 0)
{
lean_dec(v___x_2393_);
lean_dec_ref(v___x_2388_);
lean_del_object(v___x_2384_);
lean_dec(v_tag_2364_);
goto v___jp_2369_;
}
else
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2395_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0));
v___x_2396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2396_, 0, v_tag_2364_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
v___x_2397_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(v___x_2388_, v___x_2396_, v___x_2389_, v___x_2393_);
lean_dec_ref_known(v___x_2396_, 2);
lean_dec_ref(v___x_2388_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_del_object(v___x_2384_);
goto v___jp_2369_;
}
else
{
lean_object* v_val_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2409_; 
v_val_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2409_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_val_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2409_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v_snd_2402_; lean_object* v___x_2404_; 
v_snd_2402_ = lean_ctor_get(v_val_2398_, 1);
lean_inc(v_snd_2402_);
lean_dec(v_val_2398_);
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 0, v_snd_2402_);
v___x_2404_ = v___x_2400_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_snd_2402_);
v___x_2404_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
lean_object* v___x_2406_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set_tag(v___x_2384_, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2404_);
v___x_2406_ = v___x_2384_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2404_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
}
}
}
}
v___jp_2369_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = lean_box(0);
v___x_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
return v___x_2371_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_tag_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(v_tag_2411_, v___y_2412_);
lean_dec(v___y_2412_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_as_2415_, size_t v_sz_2416_, size_t v_i_2417_, lean_object* v_b_2418_){
_start:
{
uint8_t v___x_2420_; 
v___x_2420_ = lean_usize_dec_lt(v_i_2417_, v_sz_2416_);
if (v___x_2420_ == 0)
{
lean_object* v___x_2421_; 
v___x_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2421_, 0, v_b_2418_);
return v___x_2421_;
}
else
{
lean_object* v_a_2422_; lean_object* v_fst_2423_; lean_object* v_found_2424_; size_t v___x_2425_; size_t v___x_2426_; 
v_a_2422_ = lean_array_uget_borrowed(v_as_2415_, v_i_2417_);
v_fst_2423_ = lean_ctor_get(v_a_2422_, 0);
lean_inc(v_fst_2423_);
v_found_2424_ = l_Lean_NameSet_insert(v_b_2418_, v_fst_2423_);
v___x_2425_ = ((size_t)1ULL);
v___x_2426_ = lean_usize_add(v_i_2417_, v___x_2425_);
v_i_2417_ = v___x_2426_;
v_b_2418_ = v_found_2424_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_as_2428_, lean_object* v_sz_2429_, lean_object* v_i_2430_, lean_object* v_b_2431_, lean_object* v___y_2432_){
_start:
{
size_t v_sz_boxed_2433_; size_t v_i_boxed_2434_; lean_object* v_res_2435_; 
v_sz_boxed_2433_ = lean_unbox_usize(v_sz_2429_);
lean_dec(v_sz_2429_);
v_i_boxed_2434_ = lean_unbox_usize(v_i_2430_);
lean_dec(v_i_2430_);
v_res_2435_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(v_as_2428_, v_sz_boxed_2433_, v_i_boxed_2434_, v_b_2431_);
lean_dec_ref(v_as_2428_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(lean_object* v_as_2436_, size_t v_sz_2437_, size_t v_i_2438_, lean_object* v_b_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
uint8_t v___x_2443_; 
v___x_2443_ = lean_usize_dec_lt(v_i_2438_, v_sz_2437_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2444_; 
v___x_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2444_, 0, v_b_2439_);
return v___x_2444_;
}
else
{
lean_object* v_a_2445_; size_t v_sz_2446_; size_t v___x_2447_; lean_object* v___x_2448_; 
v_a_2445_ = lean_array_uget_borrowed(v_as_2436_, v_i_2438_);
v_sz_2446_ = lean_array_size(v_a_2445_);
v___x_2447_ = ((size_t)0ULL);
v___x_2448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(v_a_2445_, v_sz_2446_, v___x_2447_, v_b_2439_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; size_t v___x_2450_; size_t v___x_2451_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
lean_inc(v_a_2449_);
lean_dec_ref_known(v___x_2448_, 1);
v___x_2450_ = ((size_t)1ULL);
v___x_2451_ = lean_usize_add(v_i_2438_, v___x_2450_);
v_i_2438_ = v___x_2451_;
v_b_2439_ = v_a_2449_;
goto _start;
}
else
{
return v___x_2448_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object* v_as_2453_, lean_object* v_sz_2454_, lean_object* v_i_2455_, lean_object* v_b_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
size_t v_sz_boxed_2460_; size_t v_i_boxed_2461_; lean_object* v_res_2462_; 
v_sz_boxed_2460_ = lean_unbox_usize(v_sz_2454_);
lean_dec(v_sz_2454_);
v_i_boxed_2461_ = lean_unbox_usize(v_i_2455_);
lean_dec(v_i_2455_);
v_res_2462_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(v_as_2453_, v_sz_boxed_2460_, v_i_boxed_2461_, v_b_2456_, v___y_2457_, v___y_2458_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec_ref(v_as_2453_);
return v_res_2462_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(uint8_t v___x_2463_, lean_object* v_x1_2464_, lean_object* v_x2_2465_){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; 
v___x_2466_ = l_Lean_Name_toString(v_x1_2464_, v___x_2463_);
v___x_2467_ = l_Lean_Name_toString(v_x2_2465_, v___x_2463_);
v___x_2468_ = lean_string_dec_lt(v___x_2466_, v___x_2467_);
lean_dec_ref(v___x_2467_);
lean_dec_ref(v___x_2466_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0___boxed(lean_object* v___x_2469_, lean_object* v_x1_2470_, lean_object* v_x2_2471_){
_start:
{
uint8_t v___x_7491__boxed_2472_; uint8_t v_res_2473_; lean_object* v_r_2474_; 
v___x_7491__boxed_2472_ = lean_unbox(v___x_2469_);
v_res_2473_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_7491__boxed_2472_, v_x1_2470_, v_x2_2471_);
v_r_2474_ = lean_box(v_res_2473_);
return v_r_2474_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(lean_object* v_hi_2475_, lean_object* v_pivot_2476_, lean_object* v_as_2477_, lean_object* v_i_2478_, lean_object* v_k_2479_){
_start:
{
uint8_t v___x_2480_; 
v___x_2480_ = lean_nat_dec_lt(v_k_2479_, v_hi_2475_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
lean_dec(v_k_2479_);
lean_dec(v_pivot_2476_);
v___x_2481_ = lean_array_fswap(v_as_2477_, v_i_2478_, v_hi_2475_);
v___x_2482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2482_, 0, v_i_2478_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
return v___x_2482_;
}
else
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; uint8_t v___x_2486_; 
v___x_2483_ = lean_array_fget_borrowed(v_as_2477_, v_k_2479_);
lean_inc(v___x_2483_);
v___x_2484_ = l_Lean_Name_toString(v___x_2483_, v___x_2480_);
lean_inc(v_pivot_2476_);
v___x_2485_ = l_Lean_Name_toString(v_pivot_2476_, v___x_2480_);
v___x_2486_ = lean_string_dec_lt(v___x_2484_, v___x_2485_);
lean_dec_ref(v___x_2485_);
lean_dec_ref(v___x_2484_);
if (v___x_2486_ == 0)
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = lean_unsigned_to_nat(1u);
v___x_2488_ = lean_nat_add(v_k_2479_, v___x_2487_);
lean_dec(v_k_2479_);
v_k_2479_ = v___x_2488_;
goto _start;
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2490_ = lean_array_fswap(v_as_2477_, v_i_2478_, v_k_2479_);
v___x_2491_ = lean_unsigned_to_nat(1u);
v___x_2492_ = lean_nat_add(v_i_2478_, v___x_2491_);
lean_dec(v_i_2478_);
v___x_2493_ = lean_nat_add(v_k_2479_, v___x_2491_);
lean_dec(v_k_2479_);
v_as_2477_ = v___x_2490_;
v_i_2478_ = v___x_2492_;
v_k_2479_ = v___x_2493_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg___boxed(lean_object* v_hi_2495_, lean_object* v_pivot_2496_, lean_object* v_as_2497_, lean_object* v_i_2498_, lean_object* v_k_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(v_hi_2495_, v_pivot_2496_, v_as_2497_, v_i_2498_, v_k_2499_);
lean_dec(v_hi_2495_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object* v_n_2501_, lean_object* v_as_2502_, lean_object* v_lo_2503_, lean_object* v_hi_2504_){
_start:
{
lean_object* v___y_2506_; uint8_t v___x_2516_; 
v___x_2516_ = lean_nat_dec_lt(v_lo_2503_, v_hi_2504_);
if (v___x_2516_ == 0)
{
lean_dec(v_lo_2503_);
return v_as_2502_;
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v_mid_2519_; lean_object* v___y_2521_; lean_object* v___y_2527_; lean_object* v___x_2532_; lean_object* v___x_2533_; uint8_t v___x_2534_; 
v___x_2517_ = lean_nat_add(v_lo_2503_, v_hi_2504_);
v___x_2518_ = lean_unsigned_to_nat(1u);
v_mid_2519_ = lean_nat_shiftr(v___x_2517_, v___x_2518_);
lean_dec(v___x_2517_);
v___x_2532_ = lean_array_fget_borrowed(v_as_2502_, v_mid_2519_);
v___x_2533_ = lean_array_fget_borrowed(v_as_2502_, v_lo_2503_);
lean_inc(v___x_2533_);
lean_inc(v___x_2532_);
v___x_2534_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_2516_, v___x_2532_, v___x_2533_);
if (v___x_2534_ == 0)
{
v___y_2527_ = v_as_2502_;
goto v___jp_2526_;
}
else
{
lean_object* v___x_2535_; 
v___x_2535_ = lean_array_fswap(v_as_2502_, v_lo_2503_, v_mid_2519_);
v___y_2527_ = v___x_2535_;
goto v___jp_2526_;
}
v___jp_2520_:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; 
v___x_2522_ = lean_array_fget_borrowed(v___y_2521_, v_mid_2519_);
v___x_2523_ = lean_array_fget_borrowed(v___y_2521_, v_hi_2504_);
lean_inc(v___x_2523_);
lean_inc(v___x_2522_);
v___x_2524_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_2516_, v___x_2522_, v___x_2523_);
if (v___x_2524_ == 0)
{
lean_dec(v_mid_2519_);
v___y_2506_ = v___y_2521_;
goto v___jp_2505_;
}
else
{
lean_object* v___x_2525_; 
v___x_2525_ = lean_array_fswap(v___y_2521_, v_mid_2519_, v_hi_2504_);
lean_dec(v_mid_2519_);
v___y_2506_ = v___x_2525_;
goto v___jp_2505_;
}
}
v___jp_2526_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___x_2528_ = lean_array_fget_borrowed(v___y_2527_, v_hi_2504_);
v___x_2529_ = lean_array_fget_borrowed(v___y_2527_, v_lo_2503_);
lean_inc(v___x_2529_);
lean_inc(v___x_2528_);
v___x_2530_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_2516_, v___x_2528_, v___x_2529_);
if (v___x_2530_ == 0)
{
v___y_2521_ = v___y_2527_;
goto v___jp_2520_;
}
else
{
lean_object* v___x_2531_; 
v___x_2531_ = lean_array_fswap(v___y_2527_, v_lo_2503_, v_hi_2504_);
v___y_2521_ = v___x_2531_;
goto v___jp_2520_;
}
}
}
v___jp_2505_:
{
lean_object* v_pivot_2507_; lean_object* v___x_2508_; lean_object* v_fst_2509_; lean_object* v_snd_2510_; uint8_t v___x_2511_; 
v_pivot_2507_ = lean_array_fget(v___y_2506_, v_hi_2504_);
lean_inc_n(v_lo_2503_, 2);
v___x_2508_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(v_hi_2504_, v_pivot_2507_, v___y_2506_, v_lo_2503_, v_lo_2503_);
v_fst_2509_ = lean_ctor_get(v___x_2508_, 0);
lean_inc(v_fst_2509_);
v_snd_2510_ = lean_ctor_get(v___x_2508_, 1);
lean_inc(v_snd_2510_);
lean_dec_ref(v___x_2508_);
v___x_2511_ = lean_nat_dec_le(v_hi_2504_, v_fst_2509_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2512_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v_n_2501_, v_snd_2510_, v_lo_2503_, v_fst_2509_);
v___x_2513_ = lean_unsigned_to_nat(1u);
v___x_2514_ = lean_nat_add(v_fst_2509_, v___x_2513_);
lean_dec(v_fst_2509_);
v_as_2502_ = v___x_2512_;
v_lo_2503_ = v___x_2514_;
goto _start;
}
else
{
lean_dec(v_fst_2509_);
lean_dec(v_lo_2503_);
return v_snd_2510_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object* v_n_2536_, lean_object* v_as_2537_, lean_object* v_lo_2538_, lean_object* v_hi_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v_n_2536_, v_as_2537_, v_lo_2538_, v_hi_2539_);
lean_dec(v_hi_2539_);
lean_dec(v_n_2536_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(lean_object* v_init_2541_, lean_object* v_x_2542_){
_start:
{
if (lean_obj_tag(v_x_2542_) == 0)
{
lean_object* v_k_2544_; lean_object* v_l_2545_; lean_object* v_r_2546_; lean_object* v___x_2547_; lean_object* v_a_2548_; lean_object* v_a_2549_; lean_object* v___x_2550_; 
v_k_2544_ = lean_ctor_get(v_x_2542_, 1);
lean_inc(v_k_2544_);
v_l_2545_ = lean_ctor_get(v_x_2542_, 3);
lean_inc(v_l_2545_);
v_r_2546_ = lean_ctor_get(v_x_2542_, 4);
lean_inc(v_r_2546_);
lean_dec_ref_known(v_x_2542_, 5);
v___x_2547_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_init_2541_, v_l_2545_);
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref(v___x_2547_);
v_a_2549_ = lean_ctor_get(v_a_2548_, 0);
lean_inc(v_a_2549_);
lean_dec(v_a_2548_);
v___x_2550_ = l_Lean_NameSet_insert(v_a_2549_, v_k_2544_);
v_init_2541_ = v___x_2550_;
v_x_2542_ = v_r_2546_;
goto _start;
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2552_, 0, v_init_2541_);
v___x_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2552_);
return v___x_2553_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg___boxed(lean_object* v_init_2554_, lean_object* v_x_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_init_2554_, v_x_2555_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(lean_object* v_init_2558_, lean_object* v_x_2559_){
_start:
{
if (lean_obj_tag(v_x_2559_) == 0)
{
lean_object* v_k_2560_; lean_object* v_l_2561_; lean_object* v_r_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v_k_2560_ = lean_ctor_get(v_x_2559_, 1);
lean_inc(v_k_2560_);
v_l_2561_ = lean_ctor_get(v_x_2559_, 3);
lean_inc(v_l_2561_);
v_r_2562_ = lean_ctor_get(v_x_2559_, 4);
lean_inc(v_r_2562_);
lean_dec_ref_known(v_x_2559_, 5);
v___x_2563_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(v_init_2558_, v_l_2561_);
v___x_2564_ = lean_array_push(v___x_2563_, v_k_2560_);
v_init_2558_ = v___x_2564_;
v_x_2559_ = v_r_2562_;
goto _start;
}
else
{
return v_init_2558_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
lean_object* v___y_2570_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v_env_2599_; lean_object* v___x_2600_; lean_object* v_toEnvExtension_2601_; lean_object* v_asyncMode_2602_; lean_object* v_found_2603_; lean_object* v___x_2604_; uint8_t v___x_2605_; lean_object* v_a_2607_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v_a_2626_; lean_object* v_a_2627_; 
v___x_2596_ = lean_box(1);
v___x_2597_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
v___x_2598_ = lean_st_ref_get(v___y_2567_);
v_env_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc_ref_n(v_env_2599_, 2);
lean_dec(v___x_2598_);
v___x_2600_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2601_ = lean_ctor_get(v___x_2600_, 0);
v_asyncMode_2602_ = lean_ctor_get(v_toEnvExtension_2601_, 2);
v_found_2603_ = l_Lean_NameSet_empty;
v___x_2604_ = lean_box(0);
v___x_2605_ = 0;
v___x_2624_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2596_, v___x_2600_, v_env_2599_, v_asyncMode_2602_, v___x_2604_, v___x_2605_);
v___x_2625_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_found_2603_, v___x_2624_);
v_a_2626_ = lean_ctor_get(v___x_2625_, 0);
lean_inc(v_a_2626_);
lean_dec_ref(v___x_2625_);
v_a_2627_ = lean_ctor_get(v_a_2626_, 0);
lean_inc(v_a_2627_);
lean_dec(v_a_2626_);
v_a_2607_ = v_a_2627_;
goto v___jp_2606_;
v___jp_2569_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2571_ = lean_array_to_list(v___y_2570_);
v___x_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
return v___x_2572_;
}
v___jp_2573_:
{
lean_object* v___x_2578_; 
v___x_2578_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v___y_2576_, v___y_2574_, v___y_2575_, v___y_2577_);
lean_dec(v___y_2577_);
lean_dec(v___y_2576_);
v___y_2570_ = v___x_2578_;
goto v___jp_2569_;
}
v___jp_2579_:
{
uint8_t v___x_2584_; 
v___x_2584_ = lean_nat_dec_le(v___y_2583_, v___y_2580_);
if (v___x_2584_ == 0)
{
lean_dec(v___y_2580_);
lean_inc(v___y_2583_);
v___y_2574_ = v___y_2581_;
v___y_2575_ = v___y_2583_;
v___y_2576_ = v___y_2582_;
v___y_2577_ = v___y_2583_;
goto v___jp_2573_;
}
else
{
v___y_2574_ = v___y_2581_;
v___y_2575_ = v___y_2583_;
v___y_2576_ = v___y_2582_;
v___y_2577_ = v___y_2580_;
goto v___jp_2573_;
}
}
v___jp_2585_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; uint8_t v___x_2592_; 
v___x_2588_ = lean_mk_empty_array_with_capacity(v___y_2587_);
lean_dec(v___y_2587_);
v___x_2589_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(v___x_2588_, v___y_2586_);
v___x_2590_ = lean_array_get_size(v___x_2589_);
v___x_2591_ = lean_unsigned_to_nat(0u);
v___x_2592_ = lean_nat_dec_eq(v___x_2590_, v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; lean_object* v___x_2594_; uint8_t v___x_2595_; 
v___x_2593_ = lean_unsigned_to_nat(1u);
v___x_2594_ = lean_nat_sub(v___x_2590_, v___x_2593_);
v___x_2595_ = lean_nat_dec_le(v___x_2591_, v___x_2594_);
if (v___x_2595_ == 0)
{
lean_inc(v___x_2594_);
v___y_2580_ = v___x_2594_;
v___y_2581_ = v___x_2589_;
v___y_2582_ = v___x_2590_;
v___y_2583_ = v___x_2594_;
goto v___jp_2579_;
}
else
{
v___y_2580_ = v___x_2594_;
v___y_2581_ = v___x_2589_;
v___y_2582_ = v___x_2590_;
v___y_2583_ = v___x_2591_;
goto v___jp_2579_;
}
}
else
{
v___y_2570_ = v___x_2589_;
goto v___jp_2569_;
}
}
v___jp_2606_:
{
lean_object* v___x_2608_; lean_object* v_importedEntries_2609_; size_t v_sz_2610_; size_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2608_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2597_, v_toEnvExtension_2601_, v_env_2599_, v_asyncMode_2602_, v___x_2604_, v___x_2605_);
v_importedEntries_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc_ref(v_importedEntries_2609_);
lean_dec(v___x_2608_);
v_sz_2610_ = lean_array_size(v_importedEntries_2609_);
v___x_2611_ = ((size_t)0ULL);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(v_importedEntries_2609_, v_sz_2610_, v___x_2611_, v_a_2607_, v___y_2566_, v___y_2567_);
lean_dec_ref(v_importedEntries_2609_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2612_, 1);
if (lean_obj_tag(v_a_2613_) == 0)
{
lean_object* v_size_2614_; 
v_size_2614_ = lean_ctor_get(v_a_2613_, 0);
lean_inc(v_size_2614_);
v___y_2586_ = v_a_2613_;
v___y_2587_ = v_size_2614_;
goto v___jp_2585_;
}
else
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_unsigned_to_nat(0u);
v___y_2586_ = v_a_2613_;
v___y_2587_ = v___x_2615_;
goto v___jp_2585_;
}
}
else
{
lean_object* v_a_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2623_; 
v_a_2616_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2618_ = v___x_2612_;
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_a_2616_);
lean_dec(v___x_2612_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2621_; 
if (v_isShared_2619_ == 0)
{
v___x_2621_ = v___x_2618_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_a_2616_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1___boxed(lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(v___y_2628_, v___y_2629_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
return v_res_2631_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1(void){
_start:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0));
v___x_2634_ = l_Lean_stringToMessageData(v___x_2633_);
return v___x_2634_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3(void){
_start:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2636_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2));
v___x_2637_ = l_Lean_stringToMessageData(v___x_2636_);
return v___x_2637_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5(void){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2639_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4));
v___x_2640_ = l_Lean_stringToMessageData(v___x_2639_);
return v___x_2640_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7(void){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2642_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6));
v___x_2643_ = l_Lean_stringToMessageData(v___x_2642_);
return v___x_2643_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2649_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10));
v___x_2650_ = l_Lean_MessageData_ofFormat(v___x_2649_);
return v___x_2650_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14(void){
_start:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2654_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13));
v___x_2655_ = l_Lean_MessageData_ofFormat(v___x_2654_);
return v___x_2655_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16(void){
_start:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15));
v___x_2658_ = l_Lean_stringToMessageData(v___x_2657_);
return v___x_2658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(lean_object* v_decl_2659_, uint8_t v___x_2660_, lean_object* v_as_2661_, size_t v_sz_2662_, size_t v_i_2663_, lean_object* v_b_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v_a_2669_; uint8_t v___x_2673_; 
v___x_2673_ = lean_usize_dec_lt(v_i_2663_, v_sz_2662_);
if (v___x_2673_ == 0)
{
lean_object* v___x_2674_; 
lean_dec(v_decl_2659_);
v___x_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2674_, 0, v_b_2664_);
return v___x_2674_;
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v_a_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2675_ = lean_box(0);
v___x_2676_ = lean_box(0);
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = lean_unsigned_to_nat(1u);
v_a_2679_ = lean_array_uget_borrowed(v_as_2661_, v_i_2663_);
v___x_2680_ = l_Lean_TSyntax_getId(v_a_2679_);
lean_inc(v___x_2680_);
v___x_2681_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(v___x_2680_, v___y_2666_);
if (lean_obj_tag(v___x_2681_) == 0)
{
lean_object* v_a_2682_; 
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
lean_inc(v_a_2682_);
lean_dec_ref_known(v___x_2681_, 1);
if (lean_obj_tag(v_a_2682_) == 1)
{
lean_object* v___x_2683_; lean_object* v_env_2684_; lean_object* v_nextMacroScope_2685_; lean_object* v_ngen_2686_; lean_object* v_auxDeclNGen_2687_; lean_object* v_traceState_2688_; lean_object* v_recordedDeps_2689_; lean_object* v_messages_2690_; lean_object* v_infoState_2691_; lean_object* v_snapshotTasks_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2713_; 
lean_dec_ref_known(v_a_2682_, 1);
v___x_2683_ = lean_st_ref_take(v___y_2666_);
v_env_2684_ = lean_ctor_get(v___x_2683_, 0);
v_nextMacroScope_2685_ = lean_ctor_get(v___x_2683_, 1);
v_ngen_2686_ = lean_ctor_get(v___x_2683_, 2);
v_auxDeclNGen_2687_ = lean_ctor_get(v___x_2683_, 3);
v_traceState_2688_ = lean_ctor_get(v___x_2683_, 4);
v_recordedDeps_2689_ = lean_ctor_get(v___x_2683_, 6);
v_messages_2690_ = lean_ctor_get(v___x_2683_, 7);
v_infoState_2691_ = lean_ctor_get(v___x_2683_, 8);
v_snapshotTasks_2692_ = lean_ctor_get(v___x_2683_, 9);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2713_ == 0)
{
lean_object* v_unused_2714_; 
v_unused_2714_ = lean_ctor_get(v___x_2683_, 5);
lean_dec(v_unused_2714_);
v___x_2694_ = v___x_2683_;
v_isShared_2695_ = v_isSharedCheck_2713_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_snapshotTasks_2692_);
lean_inc(v_infoState_2691_);
lean_inc(v_messages_2690_);
lean_inc(v_recordedDeps_2689_);
lean_inc(v_traceState_2688_);
lean_inc(v_auxDeclNGen_2687_);
lean_inc(v_ngen_2686_);
lean_inc(v_nextMacroScope_2685_);
lean_inc(v_env_2684_);
lean_dec(v___x_2683_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2713_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___y_2697_; lean_object* v___x_2703_; lean_object* v_toEnvExtension_2704_; lean_object* v_addEntryFn_2705_; lean_object* v_asyncMode_2706_; uint8_t v_logWrites_2707_; lean_object* v___x_2708_; lean_object* v___f_2709_; 
v___x_2703_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_2704_ = lean_ctor_get(v___x_2703_, 0);
v_addEntryFn_2705_ = lean_ctor_get(v___x_2703_, 3);
v_asyncMode_2706_ = lean_ctor_get(v_toEnvExtension_2704_, 2);
v_logWrites_2707_ = lean_ctor_get_uint8(v_toEnvExtension_2704_, sizeof(void*)*6);
lean_inc(v_decl_2659_);
v___x_2708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2708_, 0, v_decl_2659_);
lean_ctor_set(v___x_2708_, 1, v___x_2680_);
lean_inc(v_addEntryFn_2705_);
v___f_2709_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___lam__0), 3, 2);
lean_closure_set(v___f_2709_, 0, v_addEntryFn_2705_);
lean_closure_set(v___f_2709_, 1, v___x_2708_);
if (v_logWrites_2707_ == 0)
{
lean_object* v___x_2710_; 
lean_inc_ref(v_toEnvExtension_2704_);
v___x_2710_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2704_, v_env_2684_, v___f_2709_, v_asyncMode_2706_, v___x_2676_, v___x_2660_);
v___y_2697_ = v___x_2710_;
goto v___jp_2696_;
}
else
{
lean_object* v___x_2711_; lean_object* v___x_2712_; 
lean_inc_ref_n(v_toEnvExtension_2704_, 2);
v___x_2711_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2704_, v_env_2684_);
lean_dec_ref(v_env_2684_);
v___x_2712_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2704_, v___x_2711_, v___f_2709_, v_asyncMode_2706_, v___x_2676_, v___x_2660_);
v___y_2697_ = v___x_2712_;
goto v___jp_2696_;
}
v___jp_2696_:
{
lean_object* v___x_2698_; lean_object* v___x_2700_; 
v___x_2698_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1);
if (v_isShared_2695_ == 0)
{
lean_ctor_set(v___x_2694_, 5, v___x_2698_);
lean_ctor_set(v___x_2694_, 0, v___y_2697_);
v___x_2700_ = v___x_2694_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v___y_2697_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v_nextMacroScope_2685_);
lean_ctor_set(v_reuseFailAlloc_2702_, 2, v_ngen_2686_);
lean_ctor_set(v_reuseFailAlloc_2702_, 3, v_auxDeclNGen_2687_);
lean_ctor_set(v_reuseFailAlloc_2702_, 4, v_traceState_2688_);
lean_ctor_set(v_reuseFailAlloc_2702_, 5, v___x_2698_);
lean_ctor_set(v_reuseFailAlloc_2702_, 6, v_recordedDeps_2689_);
lean_ctor_set(v_reuseFailAlloc_2702_, 7, v_messages_2690_);
lean_ctor_set(v_reuseFailAlloc_2702_, 8, v_infoState_2691_);
lean_ctor_set(v_reuseFailAlloc_2702_, 9, v_snapshotTasks_2692_);
v___x_2700_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
lean_object* v___x_2701_; 
v___x_2701_ = lean_st_ref_put(v___y_2666_, v___x_2700_);
v_a_2669_ = v___x_2675_;
goto v___jp_2668_;
}
}
}
}
else
{
lean_object* v___x_2715_; 
lean_dec(v_a_2682_);
v___x_2715_ = l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(v___y_2665_, v___y_2666_);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_object* v_a_2716_; lean_object* v___y_2718_; lean_object* v___x_2730_; uint8_t v___x_2731_; 
v_a_2716_ = lean_ctor_get(v___x_2715_, 0);
lean_inc(v_a_2716_);
lean_dec_ref_known(v___x_2715_, 1);
v___x_2730_ = l_List_lengthTR___redArg(v_a_2716_);
v___x_2731_ = lean_nat_dec_eq(v___x_2730_, v___x_2677_);
if (v___x_2731_ == 0)
{
uint8_t v___x_2732_; 
v___x_2732_ = lean_nat_dec_eq(v___x_2730_, v___x_2678_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; uint8_t v___x_2734_; 
v___x_2733_ = lean_unsigned_to_nat(10u);
v___x_2734_ = lean_nat_dec_lt(v___x_2730_, v___x_2733_);
lean_dec(v___x_2730_);
if (v___x_2734_ == 0)
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2735_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7);
v___x_2736_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8));
lean_inc(v_a_2716_);
v___x_2737_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_a_2716_, v_a_2716_, v___x_2733_, v___x_2736_);
lean_dec(v_a_2716_);
v___x_2738_ = lean_box(0);
v___x_2739_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(v___x_2737_, v___x_2738_);
v___x_2740_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11);
v___x_2741_ = l_Lean_MessageData_joinSep(v___x_2739_, v___x_2740_);
v___x_2742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2735_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
v___x_2743_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14);
v___x_2744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2742_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___y_2718_ = v___x_2744_;
goto v___jp_2717_;
}
else
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2745_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7);
v___x_2746_ = lean_box(0);
v___x_2747_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(v_a_2716_, v___x_2746_);
v___x_2748_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11);
v___x_2749_ = l_Lean_MessageData_joinSep(v___x_2747_, v___x_2748_);
v___x_2750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2745_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___y_2718_ = v___x_2750_;
goto v___jp_2717_;
}
}
else
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; 
lean_dec(v___x_2730_);
v___x_2751_ = lean_box(0);
v___x_2752_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(v_a_2716_, v___x_2751_);
v___x_2753_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11);
v___x_2754_ = l_Lean_MessageData_joinSep(v___x_2752_, v___x_2753_);
v___y_2718_ = v___x_2754_;
goto v___jp_2717_;
}
}
else
{
lean_object* v___x_2755_; 
lean_dec(v___x_2730_);
lean_dec(v_a_2716_);
v___x_2755_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16);
v___y_2718_ = v___x_2755_;
goto v___jp_2717_;
}
v___jp_2717_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2719_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1);
v___x_2720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
lean_ctor_set(v___x_2720_, 1, v___y_2718_);
v___x_2721_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__5_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_2722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2720_);
lean_ctor_set(v___x_2722_, 1, v___x_2721_);
v___x_2723_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3);
v___x_2724_ = l_Lean_MessageData_ofName(v___x_2680_);
v___x_2725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2723_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5);
v___x_2727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2725_);
lean_ctor_set(v___x_2727_, 1, v___x_2726_);
v___x_2728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
lean_ctor_set(v___x_2728_, 1, v___x_2722_);
v___x_2729_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_a_2679_, v___x_2728_, v___y_2665_, v___y_2666_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_dec_ref_known(v___x_2729_, 1);
v_a_2669_ = v___x_2675_;
goto v___jp_2668_;
}
else
{
lean_dec(v_decl_2659_);
return v___x_2729_;
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v___x_2680_);
lean_dec(v_decl_2659_);
v_a_2756_ = lean_ctor_get(v___x_2715_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2715_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2715_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2715_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v___x_2680_);
lean_dec(v_decl_2659_);
v_a_2764_ = lean_ctor_get(v___x_2681_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2681_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2681_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
v___jp_2668_:
{
size_t v___x_2670_; size_t v___x_2671_; 
v___x_2670_ = ((size_t)1ULL);
v___x_2671_ = lean_usize_add(v_i_2663_, v___x_2670_);
v_i_2663_ = v___x_2671_;
v_b_2664_ = v_a_2669_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___boxed(lean_object* v_decl_2772_, lean_object* v___x_2773_, lean_object* v_as_2774_, lean_object* v_sz_2775_, lean_object* v_i_2776_, lean_object* v_b_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
uint8_t v___x_7839__boxed_2781_; size_t v_sz_boxed_2782_; size_t v_i_boxed_2783_; lean_object* v_res_2784_; 
v___x_7839__boxed_2781_ = lean_unbox(v___x_2773_);
v_sz_boxed_2782_ = lean_unbox_usize(v_sz_2775_);
lean_dec(v_sz_2775_);
v_i_boxed_2783_ = lean_unbox_usize(v_i_2776_);
lean_dec(v_i_2776_);
v_res_2784_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(v_decl_2772_, v___x_7839__boxed_2781_, v_as_2774_, v_sz_boxed_2782_, v_i_boxed_2783_, v_b_2777_, v___y_2778_, v___y_2779_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec_ref(v_as_2774_);
return v_res_2784_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_));
v___x_2787_ = l_Lean_stringToMessageData(v___x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(lean_object* v___x_2788_, lean_object* v___x_2789_, lean_object* v___x_2790_, lean_object* v_name_2791_, lean_object* v_decl_2792_, lean_object* v_stx_2793_, uint8_t v_kind_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___y_2799_; uint8_t v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2816_; uint8_t v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; uint8_t v___x_2860_; uint8_t v___x_2861_; 
v___x_2860_ = 0;
v___x_2861_ = l_Lean_instBEqAttributeKind_beq(v_kind_2794_, v___x_2860_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; 
lean_dec(v_stx_2793_);
lean_dec(v_decl_2792_);
lean_dec_ref(v___x_2790_);
lean_dec_ref(v___x_2789_);
lean_dec_ref(v___x_2788_);
v___x_2862_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg(v_name_2791_, v_kind_2794_, v___y_2795_, v___y_2796_);
return v___x_2862_;
}
else
{
goto v___jp_2834_;
}
v___jp_2798_:
{
lean_object* v___x_2803_; size_t v_sz_2804_; size_t v___x_2805_; lean_object* v___x_2806_; 
v___x_2803_ = lean_box(0);
v_sz_2804_ = lean_array_size(v___y_2799_);
v___x_2805_ = ((size_t)0ULL);
v___x_2806_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(v_decl_2792_, v___y_2800_, v___y_2799_, v_sz_2804_, v___x_2805_, v___x_2803_, v___y_2801_, v___y_2802_);
lean_dec_ref(v___y_2799_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2813_ == 0)
{
lean_object* v_unused_2814_; 
v_unused_2814_ = lean_ctor_get(v___x_2806_, 0);
lean_dec(v_unused_2814_);
v___x_2808_ = v___x_2806_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_dec(v___x_2806_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v___x_2803_);
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2803_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
else
{
return v___x_2806_;
}
}
v___jp_2815_:
{
lean_object* v___x_2820_; lean_object* v_env_2821_; lean_object* v___x_2822_; 
v___x_2820_ = lean_st_ref_get(v___y_2819_);
v_env_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc_ref(v_env_2821_);
lean_dec(v___x_2820_);
lean_inc(v_decl_2792_);
v___x_2822_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_2821_, v_decl_2792_);
if (lean_obj_tag(v___x_2822_) == 1)
{
lean_object* v_val_2823_; lean_object* v___x_2824_; uint8_t v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
lean_dec_ref(v___y_2816_);
v_val_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc(v_val_2823_);
lean_dec_ref_known(v___x_2822_, 1);
v___x_2824_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_2825_ = 0;
v___x_2826_ = l_Lean_MessageData_ofConstName(v_decl_2792_, v___x_2825_);
v___x_2827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2824_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
v___x_2828_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_);
v___x_2829_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2827_);
lean_ctor_set(v___x_2829_, 1, v___x_2828_);
v___x_2830_ = l_Lean_MessageData_ofConstName(v_val_2823_, v___x_2825_);
v___x_2831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2829_);
lean_ctor_set(v___x_2831_, 1, v___x_2830_);
v___x_2832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2831_);
lean_ctor_set(v___x_2832_, 1, v___x_2824_);
v___x_2833_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_stx_2793_, v___x_2832_, v___y_2818_, v___y_2819_);
lean_dec(v_stx_2793_);
return v___x_2833_;
}
else
{
lean_dec(v___x_2822_);
lean_dec(v_stx_2793_);
v___y_2799_ = v___y_2816_;
v___y_2800_ = v___y_2817_;
v___y_2801_ = v___y_2818_;
v___y_2802_ = v___y_2819_;
goto v___jp_2798_;
}
}
v___jp_2834_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; 
v___x_2835_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_2836_ = l_Lean_Name_mkStr4(v___x_2788_, v___x_2789_, v___x_2835_, v___x_2790_);
lean_inc(v_stx_2793_);
v___x_2837_ = l_Lean_Syntax_isOfKind(v_stx_2793_, v___x_2836_);
lean_dec(v___x_2836_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
lean_dec(v_stx_2793_);
lean_dec(v_decl_2792_);
v___x_2838_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_2839_ = l_Lean_MessageData_ofName(v_name_2791_);
v___x_2840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2838_);
lean_ctor_set(v___x_2840_, 1, v___x_2839_);
v___x_2841_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_2842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2840_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
v___x_2843_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_2842_, v___y_2795_, v___y_2796_);
return v___x_2843_;
}
else
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v_tags_2846_; lean_object* v___x_2847_; lean_object* v_env_2848_; uint8_t v___x_2849_; lean_object* v___x_2850_; 
lean_dec(v_name_2791_);
v___x_2844_ = lean_unsigned_to_nat(1u);
v___x_2845_ = l_Lean_Syntax_getArg(v_stx_2793_, v___x_2844_);
v_tags_2846_ = l_Lean_Syntax_getArgs(v___x_2845_);
lean_dec(v___x_2845_);
v___x_2847_ = lean_st_ref_get(v___y_2796_);
v_env_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc_ref(v_env_2848_);
lean_dec(v___x_2847_);
v___x_2849_ = 0;
lean_inc(v_decl_2792_);
v___x_2850_ = l_Lean_Environment_find_x3f(v_env_2848_, v_decl_2792_, v___x_2849_);
if (lean_obj_tag(v___x_2850_) == 0)
{
v___y_2816_ = v_tags_2846_;
v___y_2817_ = v___x_2837_;
v___y_2818_ = v___y_2795_;
v___y_2819_ = v___y_2796_;
goto v___jp_2815_;
}
else
{
lean_object* v___x_2851_; lean_object* v_env_2852_; uint8_t v___x_2853_; 
lean_dec_ref_known(v___x_2850_, 1);
v___x_2851_ = lean_st_ref_get(v___y_2796_);
v_env_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc_ref(v_env_2852_);
lean_dec(v___x_2851_);
v___x_2853_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_2852_, v_decl_2792_);
if (v___x_2853_ == 0)
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
lean_dec_ref(v_tags_2846_);
v___x_2854_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_2855_ = l_Lean_MessageData_ofConstName(v_decl_2792_, v___x_2853_);
v___x_2856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2854_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_2858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_stx_2793_, v___x_2858_, v___y_2795_, v___y_2796_);
lean_dec(v_stx_2793_);
return v___x_2859_;
}
else
{
v___y_2816_ = v_tags_2846_;
v___y_2817_ = v___x_2837_;
v___y_2818_ = v___y_2795_;
v___y_2819_ = v___y_2796_;
goto v___jp_2815_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object* v___x_2863_, lean_object* v___x_2864_, lean_object* v___x_2865_, lean_object* v_name_2866_, lean_object* v_decl_2867_, lean_object* v_stx_2868_, lean_object* v_kind_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_){
_start:
{
uint8_t v_kind_boxed_2873_; lean_object* v_res_2874_; 
v_kind_boxed_2873_ = lean_unbox(v_kind_2869_);
v_res_2874_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(v___x_2863_, v___x_2864_, v___x_2865_, v_name_2866_, v_decl_2867_, v_stx_2868_, v_kind_boxed_2873_, v___y_2870_, v___y_2871_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_));
v___x_2909_ = l_Lean_registerBuiltinAttribute(v___x_2908_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object* v_a_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_();
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0(lean_object* v_tag_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v___x_2916_; 
v___x_2916_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(v_tag_2912_, v___y_2914_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___boxed(lean_object* v_tag_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0(v_tag_2917_, v___y_2918_, v___y_2919_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_2922_, lean_object* v_k_2923_, lean_object* v_x_2924_, lean_object* v_x_2925_, lean_object* v_x_2926_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_2922_, v_k_2923_, v_x_2924_, v_x_2925_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_2928_, lean_object* v_k_2929_, lean_object* v_x_2930_, lean_object* v_x_2931_, lean_object* v_x_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0(v_as_2928_, v_k_2929_, v_x_2930_, v_x_2931_, v_x_2932_);
lean_dec_ref(v_k_2929_);
lean_dec_ref(v_as_2928_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_as_2934_, size_t v_sz_2935_, size_t v_i_2936_, lean_object* v_b_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v___x_2941_; 
v___x_2941_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(v_as_2934_, v_sz_2935_, v_i_2936_, v_b_2937_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_as_2942_, lean_object* v_sz_2943_, lean_object* v_i_2944_, lean_object* v_b_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
size_t v_sz_boxed_2949_; size_t v_i_boxed_2950_; lean_object* v_res_2951_; 
v_sz_boxed_2949_ = lean_unbox_usize(v_sz_2943_);
lean_dec(v_sz_2943_);
v_i_boxed_2950_ = lean_unbox_usize(v_i_2944_);
lean_dec(v_i_2944_);
v_res_2951_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2(v_as_2942_, v_sz_boxed_2949_, v_i_boxed_2950_, v_b_2945_, v___y_2946_, v___y_2947_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec_ref(v_as_2942_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4(lean_object* v_init_2952_, lean_object* v_t_2953_){
_start:
{
lean_object* v___x_2954_; 
v___x_2954_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(v_init_2952_, v_t_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5(lean_object* v_n_2955_, lean_object* v_as_2956_, lean_object* v_lo_2957_, lean_object* v_hi_2958_, lean_object* v_w_2959_, lean_object* v_hlo_2960_, lean_object* v_hhi_2961_){
_start:
{
lean_object* v___x_2962_; 
v___x_2962_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v_n_2955_, v_as_2956_, v_lo_2957_, v_hi_2958_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object* v_n_2963_, lean_object* v_as_2964_, lean_object* v_lo_2965_, lean_object* v_hi_2966_, lean_object* v_w_2967_, lean_object* v_hlo_2968_, lean_object* v_hhi_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5(v_n_2963_, v_as_2964_, v_lo_2965_, v_hi_2966_, v_w_2967_, v_hlo_2968_, v_hhi_2969_);
lean_dec(v_hi_2966_);
lean_dec(v_n_2963_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6(lean_object* v_init_2971_, lean_object* v_x_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_){
_start:
{
lean_object* v___x_2976_; 
v___x_2976_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_init_2971_, v_x_2972_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___boxed(lean_object* v_init_2977_, lean_object* v_x_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6(v_init_2977_, v_x_2978_, v___y_2979_, v___y_2980_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7(lean_object* v_n_2983_, lean_object* v_lo_2984_, lean_object* v_hi_2985_, lean_object* v_hhi_2986_, lean_object* v_pivot_2987_, lean_object* v_as_2988_, lean_object* v_i_2989_, lean_object* v_k_2990_, lean_object* v_ilo_2991_, lean_object* v_ik_2992_, lean_object* v_w_2993_){
_start:
{
lean_object* v___x_2994_; 
v___x_2994_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(v_hi_2985_, v_pivot_2987_, v_as_2988_, v_i_2989_, v_k_2990_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___boxed(lean_object* v_n_2995_, lean_object* v_lo_2996_, lean_object* v_hi_2997_, lean_object* v_hhi_2998_, lean_object* v_pivot_2999_, lean_object* v_as_3000_, lean_object* v_i_3001_, lean_object* v_k_3002_, lean_object* v_ilo_3003_, lean_object* v_ik_3004_, lean_object* v_w_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7(v_n_2995_, v_lo_2996_, v_hi_2997_, v_hhi_2998_, v_pivot_2999_, v_as_3000_, v_i_3001_, v_k_3002_, v_ilo_3003_, v_ik_3004_, v_w_3005_);
lean_dec(v_hi_2997_);
lean_dec(v_lo_2996_);
lean_dec(v_n_2995_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v_es_3009_, lean_object* v_x_3010_){
_start:
{
lean_object* v_fst_3011_; lean_object* v_snd_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
v_fst_3011_ = lean_ctor_get(v_x_3010_, 0);
lean_inc(v_fst_3011_);
v_snd_3012_ = lean_ctor_get(v_x_3010_, 1);
lean_inc(v_snd_3012_);
lean_dec_ref(v_x_3010_);
v___x_3013_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3014_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_es_3009_, v_fst_3011_, v___x_3013_);
v___x_3015_ = lean_array_push(v___x_3014_, v_snd_3012_);
v___x_3016_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3011_, v___x_3015_, v_es_3009_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_3017_, lean_object* v_x_3018_){
_start:
{
if (lean_obj_tag(v_x_3018_) == 0)
{
lean_object* v_k_3019_; lean_object* v_v_3020_; lean_object* v_l_3021_; lean_object* v_r_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v_k_3019_ = lean_ctor_get(v_x_3018_, 1);
v_v_3020_ = lean_ctor_get(v_x_3018_, 2);
v_l_3021_ = lean_ctor_get(v_x_3018_, 3);
v_r_3022_ = lean_ctor_get(v_x_3018_, 4);
v___x_3023_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v_init_3017_, v_l_3021_);
lean_inc(v_v_3020_);
lean_inc(v_k_3019_);
v___x_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3024_, 0, v_k_3019_);
lean_ctor_set(v___x_3024_, 1, v_v_3020_);
v___x_3025_ = lean_array_push(v___x_3023_, v___x_3024_);
v_init_3017_ = v___x_3025_;
v_x_3018_ = v_r_3022_;
goto _start;
}
else
{
return v_init_3017_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_3027_, lean_object* v_x_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v_init_3027_, v_x_3028_);
lean_dec(v_x_3028_);
return v_res_3029_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_3030_, lean_object* v_x2_3031_){
_start:
{
lean_object* v_fst_3032_; lean_object* v_fst_3033_; uint8_t v___x_3034_; 
v_fst_3032_ = lean_ctor_get(v_x1_3030_, 0);
v_fst_3033_ = lean_ctor_get(v_x2_3031_, 0);
v___x_3034_ = l_Lean_Name_quickLt(v_fst_3032_, v_fst_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_3035_, lean_object* v_x2_3036_){
_start:
{
uint8_t v_res_3037_; lean_object* v_r_3038_; 
v_res_3037_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_3035_, v_x2_3036_);
lean_dec_ref(v_x2_3036_);
lean_dec_ref(v_x1_3035_);
v_r_3038_ = lean_box(v_res_3037_);
return v_r_3038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_3039_, lean_object* v_pivot_3040_, lean_object* v_as_3041_, lean_object* v_i_3042_, lean_object* v_k_3043_){
_start:
{
uint8_t v___x_3044_; 
v___x_3044_ = lean_nat_dec_lt(v_k_3043_, v_hi_3039_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
lean_dec(v_k_3043_);
v___x_3045_ = lean_array_fswap(v_as_3041_, v_i_3042_, v_hi_3039_);
v___x_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3046_, 0, v_i_3042_);
lean_ctor_set(v___x_3046_, 1, v___x_3045_);
return v___x_3046_;
}
else
{
lean_object* v___x_3047_; lean_object* v_fst_3048_; lean_object* v_fst_3049_; uint8_t v___x_3050_; 
v___x_3047_ = lean_array_fget_borrowed(v_as_3041_, v_k_3043_);
v_fst_3048_ = lean_ctor_get(v___x_3047_, 0);
v_fst_3049_ = lean_ctor_get(v_pivot_3040_, 0);
v___x_3050_ = l_Lean_Name_quickLt(v_fst_3048_, v_fst_3049_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = lean_unsigned_to_nat(1u);
v___x_3052_ = lean_nat_add(v_k_3043_, v___x_3051_);
lean_dec(v_k_3043_);
v_k_3043_ = v___x_3052_;
goto _start;
}
else
{
lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3054_ = lean_array_fswap(v_as_3041_, v_i_3042_, v_k_3043_);
v___x_3055_ = lean_unsigned_to_nat(1u);
v___x_3056_ = lean_nat_add(v_i_3042_, v___x_3055_);
lean_dec(v_i_3042_);
v___x_3057_ = lean_nat_add(v_k_3043_, v___x_3055_);
lean_dec(v_k_3043_);
v_as_3041_ = v___x_3054_;
v_i_3042_ = v___x_3056_;
v_k_3043_ = v___x_3057_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_3059_, lean_object* v_pivot_3060_, lean_object* v_as_3061_, lean_object* v_i_3062_, lean_object* v_k_3063_){
_start:
{
lean_object* v_res_3064_; 
v_res_3064_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3059_, v_pivot_3060_, v_as_3061_, v_i_3062_, v_k_3063_);
lean_dec_ref(v_pivot_3060_);
lean_dec(v_hi_3059_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_3065_, lean_object* v_as_3066_, lean_object* v_lo_3067_, lean_object* v_hi_3068_){
_start:
{
lean_object* v___y_3070_; uint8_t v___x_3080_; 
v___x_3080_ = lean_nat_dec_lt(v_lo_3067_, v_hi_3068_);
if (v___x_3080_ == 0)
{
lean_dec(v_lo_3067_);
return v_as_3066_;
}
else
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v_mid_3083_; lean_object* v___y_3085_; lean_object* v___y_3091_; lean_object* v___x_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v___x_3081_ = lean_nat_add(v_lo_3067_, v_hi_3068_);
v___x_3082_ = lean_unsigned_to_nat(1u);
v_mid_3083_ = lean_nat_shiftr(v___x_3081_, v___x_3082_);
lean_dec(v___x_3081_);
v___x_3096_ = lean_array_fget_borrowed(v_as_3066_, v_mid_3083_);
v___x_3097_ = lean_array_fget_borrowed(v_as_3066_, v_lo_3067_);
v___x_3098_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3096_, v___x_3097_);
if (v___x_3098_ == 0)
{
v___y_3091_ = v_as_3066_;
goto v___jp_3090_;
}
else
{
lean_object* v___x_3099_; 
v___x_3099_ = lean_array_fswap(v_as_3066_, v_lo_3067_, v_mid_3083_);
v___y_3091_ = v___x_3099_;
goto v___jp_3090_;
}
v___jp_3084_:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; 
v___x_3086_ = lean_array_fget_borrowed(v___y_3085_, v_mid_3083_);
v___x_3087_ = lean_array_fget_borrowed(v___y_3085_, v_hi_3068_);
v___x_3088_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3086_, v___x_3087_);
if (v___x_3088_ == 0)
{
lean_dec(v_mid_3083_);
v___y_3070_ = v___y_3085_;
goto v___jp_3069_;
}
else
{
lean_object* v___x_3089_; 
v___x_3089_ = lean_array_fswap(v___y_3085_, v_mid_3083_, v_hi_3068_);
lean_dec(v_mid_3083_);
v___y_3070_ = v___x_3089_;
goto v___jp_3069_;
}
}
v___jp_3090_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3092_ = lean_array_fget_borrowed(v___y_3091_, v_hi_3068_);
v___x_3093_ = lean_array_fget_borrowed(v___y_3091_, v_lo_3067_);
v___x_3094_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3092_, v___x_3093_);
if (v___x_3094_ == 0)
{
v___y_3085_ = v___y_3091_;
goto v___jp_3084_;
}
else
{
lean_object* v___x_3095_; 
v___x_3095_ = lean_array_fswap(v___y_3091_, v_lo_3067_, v_hi_3068_);
v___y_3085_ = v___x_3095_;
goto v___jp_3084_;
}
}
}
v___jp_3069_:
{
lean_object* v_pivot_3071_; lean_object* v___x_3072_; lean_object* v_fst_3073_; lean_object* v_snd_3074_; uint8_t v___x_3075_; 
v_pivot_3071_ = lean_array_fget(v___y_3070_, v_hi_3068_);
lean_inc_n(v_lo_3067_, 2);
v___x_3072_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3068_, v_pivot_3071_, v___y_3070_, v_lo_3067_, v_lo_3067_);
lean_dec(v_pivot_3071_);
v_fst_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_fst_3073_);
v_snd_3074_ = lean_ctor_get(v___x_3072_, 1);
lean_inc(v_snd_3074_);
lean_dec_ref(v___x_3072_);
v___x_3075_ = lean_nat_dec_le(v_hi_3068_, v_fst_3073_);
if (v___x_3075_ == 0)
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3076_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v_n_3065_, v_snd_3074_, v_lo_3067_, v_fst_3073_);
v___x_3077_ = lean_unsigned_to_nat(1u);
v___x_3078_ = lean_nat_add(v_fst_3073_, v___x_3077_);
lean_dec(v_fst_3073_);
v_as_3066_ = v___x_3076_;
v_lo_3067_ = v___x_3078_;
goto _start;
}
else
{
lean_dec(v_fst_3073_);
lean_dec(v_lo_3067_);
return v_snd_3074_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_3100_, lean_object* v_as_3101_, lean_object* v_lo_3102_, lean_object* v_hi_3103_){
_start:
{
lean_object* v_res_3104_; 
v_res_3104_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v_n_3100_, v_as_3101_, v_lo_3102_, v_hi_3103_);
lean_dec(v_hi_3103_);
lean_dec(v_n_3100_);
return v_res_3104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v_x_3107_, lean_object* v_s_3108_){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___y_3114_; lean_object* v___y_3115_; uint8_t v___x_3118_; 
v___x_3109_ = lean_unsigned_to_nat(0u);
v___x_3110_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3111_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v___x_3110_, v_s_3108_);
v___x_3112_ = lean_array_get_size(v___x_3111_);
v___x_3118_ = lean_nat_dec_eq(v___x_3112_, v___x_3109_);
if (v___x_3118_ == 0)
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___y_3122_; uint8_t v___x_3124_; 
v___x_3119_ = lean_unsigned_to_nat(1u);
v___x_3120_ = lean_nat_sub(v___x_3112_, v___x_3119_);
v___x_3124_ = lean_nat_dec_le(v___x_3109_, v___x_3120_);
if (v___x_3124_ == 0)
{
lean_inc(v___x_3120_);
v___y_3122_ = v___x_3120_;
goto v___jp_3121_;
}
else
{
v___y_3122_ = v___x_3109_;
goto v___jp_3121_;
}
v___jp_3121_:
{
uint8_t v___x_3123_; 
v___x_3123_ = lean_nat_dec_le(v___y_3122_, v___x_3120_);
if (v___x_3123_ == 0)
{
lean_dec(v___x_3120_);
lean_inc(v___y_3122_);
v___y_3114_ = v___y_3122_;
v___y_3115_ = v___y_3122_;
goto v___jp_3113_;
}
else
{
v___y_3114_ = v___y_3122_;
v___y_3115_ = v___x_3120_;
goto v___jp_3113_;
}
}
}
else
{
lean_object* v___x_3125_; 
lean_inc_ref_n(v___x_3111_, 2);
v___x_3125_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3111_);
lean_ctor_set(v___x_3125_, 1, v___x_3111_);
lean_ctor_set(v___x_3125_, 2, v___x_3111_);
return v___x_3125_;
}
v___jp_3113_:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3116_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v___x_3112_, v___x_3111_, v___y_3114_, v___y_3115_);
lean_dec(v___y_3115_);
lean_inc_ref_n(v___x_3116_, 2);
v___x_3117_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3116_);
lean_ctor_set(v___x_3117_, 1, v___x_3116_);
lean_ctor_set(v___x_3117_, 2, v___x_3116_);
return v___x_3117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v_x_3126_, lean_object* v_s_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(v_x_3126_, v_s_3127_);
lean_dec(v_s_3127_);
lean_dec_ref(v_x_3126_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v_es_3129_){
_start:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; uint8_t v___x_3134_; 
v___x_3130_ = lean_unsigned_to_nat(0u);
v___x_3131_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3132_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v___x_3131_, v_es_3129_);
v___x_3133_ = lean_array_get_size(v___x_3132_);
v___x_3134_ = lean_nat_dec_eq(v___x_3133_, v___x_3130_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___y_3138_; uint8_t v___x_3142_; 
v___x_3135_ = lean_unsigned_to_nat(1u);
v___x_3136_ = lean_nat_sub(v___x_3133_, v___x_3135_);
v___x_3142_ = lean_nat_dec_le(v___x_3130_, v___x_3136_);
if (v___x_3142_ == 0)
{
lean_inc(v___x_3136_);
v___y_3138_ = v___x_3136_;
goto v___jp_3137_;
}
else
{
v___y_3138_ = v___x_3130_;
goto v___jp_3137_;
}
v___jp_3137_:
{
uint8_t v___x_3139_; 
v___x_3139_ = lean_nat_dec_le(v___y_3138_, v___x_3136_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; 
lean_dec(v___x_3136_);
lean_inc(v___y_3138_);
v___x_3140_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v___x_3133_, v___x_3132_, v___y_3138_, v___y_3138_);
lean_dec(v___y_3138_);
return v___x_3140_;
}
else
{
lean_object* v___x_3141_; 
v___x_3141_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v___x_3133_, v___x_3132_, v___y_3138_, v___x_3136_);
lean_dec(v___x_3136_);
return v___x_3141_;
}
}
}
else
{
return v___x_3132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v_es_3143_){
_start:
{
lean_object* v_res_3144_; 
v_res_3144_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(v_es_3143_);
lean_dec(v_es_3143_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v___x_3145_, lean_object* v_x_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v___x_3149_; 
v___x_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3145_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v___x_3150_, lean_object* v_x_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(v___x_3150_, v_x_3151_, v___y_3152_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v_x_3151_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3181_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3182_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_3181_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v_a_3183_){
_start:
{
lean_object* v_res_3184_; 
v_res_3184_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_();
return v_res_3184_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0(lean_object* v_init_3185_, lean_object* v_t_3186_){
_start:
{
lean_object* v___x_3187_; 
v___x_3187_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v_init_3185_, v_t_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_3188_, lean_object* v_t_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0(v_init_3188_, v_t_3189_);
lean_dec(v_t_3189_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1(lean_object* v_n_3191_, lean_object* v_as_3192_, lean_object* v_lo_3193_, lean_object* v_hi_3194_, lean_object* v_w_3195_, lean_object* v_hlo_3196_, lean_object* v_hhi_3197_){
_start:
{
lean_object* v___x_3198_; 
v___x_3198_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v_n_3191_, v_as_3192_, v_lo_3193_, v_hi_3194_);
return v___x_3198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_3199_, lean_object* v_as_3200_, lean_object* v_lo_3201_, lean_object* v_hi_3202_, lean_object* v_w_3203_, lean_object* v_hlo_3204_, lean_object* v_hhi_3205_){
_start:
{
lean_object* v_res_3206_; 
v_res_3206_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1(v_n_3199_, v_as_3200_, v_lo_3201_, v_hi_3202_, v_w_3203_, v_hlo_3204_, v_hhi_3205_);
lean_dec(v_hi_3202_);
lean_dec(v_n_3199_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_3207_, lean_object* v_lo_3208_, lean_object* v_hi_3209_, lean_object* v_hhi_3210_, lean_object* v_pivot_3211_, lean_object* v_as_3212_, lean_object* v_i_3213_, lean_object* v_k_3214_, lean_object* v_ilo_3215_, lean_object* v_ik_3216_, lean_object* v_w_3217_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3209_, v_pivot_3211_, v_as_3212_, v_i_3213_, v_k_3214_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_3219_, lean_object* v_lo_3220_, lean_object* v_hi_3221_, lean_object* v_hhi_3222_, lean_object* v_pivot_3223_, lean_object* v_as_3224_, lean_object* v_i_3225_, lean_object* v_k_3226_, lean_object* v_ilo_3227_, lean_object* v_ik_3228_, lean_object* v_w_3229_){
_start:
{
lean_object* v_res_3230_; 
v_res_3230_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2(v_n_3219_, v_lo_3220_, v_hi_3221_, v_hhi_3222_, v_pivot_3223_, v_as_3224_, v_i_3225_, v_k_3226_, v_ilo_3227_, v_ik_3228_, v_w_3229_);
lean_dec_ref(v_pivot_3223_);
lean_dec(v_hi_3221_);
lean_dec(v_lo_3220_);
lean_dec(v_n_3219_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(lean_object* v_as_3231_, lean_object* v_k_3232_, lean_object* v_x_3233_, lean_object* v_x_3234_){
_start:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v_m_3237_; lean_object* v_a_3238_; uint8_t v___x_3239_; 
v___x_3235_ = lean_nat_add(v_x_3233_, v_x_3234_);
v___x_3236_ = lean_unsigned_to_nat(1u);
v_m_3237_ = lean_nat_shiftr(v___x_3235_, v___x_3236_);
lean_dec(v___x_3235_);
v_a_3238_ = lean_array_fget_borrowed(v_as_3231_, v_m_3237_);
v___x_3239_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_3238_, v_k_3232_);
if (v___x_3239_ == 0)
{
uint8_t v___x_3240_; 
lean_dec(v_x_3234_);
v___x_3240_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_3232_, v_a_3238_);
if (v___x_3240_ == 0)
{
lean_object* v___x_3241_; 
lean_dec(v_m_3237_);
lean_dec(v_x_3233_);
lean_inc(v_a_3238_);
v___x_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3241_, 0, v_a_3238_);
return v___x_3241_;
}
else
{
lean_object* v___x_3242_; uint8_t v___x_3243_; 
v___x_3242_ = lean_unsigned_to_nat(0u);
v___x_3243_ = lean_nat_dec_eq(v_m_3237_, v___x_3242_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3244_; uint8_t v___x_3245_; 
v___x_3244_ = lean_nat_sub(v_m_3237_, v___x_3236_);
lean_dec(v_m_3237_);
v___x_3245_ = lean_nat_dec_lt(v___x_3244_, v_x_3233_);
if (v___x_3245_ == 0)
{
v_x_3234_ = v___x_3244_;
goto _start;
}
else
{
lean_object* v___x_3247_; 
lean_dec(v___x_3244_);
lean_dec(v_x_3233_);
v___x_3247_ = lean_box(0);
return v___x_3247_;
}
}
else
{
lean_object* v___x_3248_; 
lean_dec(v_m_3237_);
lean_dec(v_x_3233_);
v___x_3248_ = lean_box(0);
return v___x_3248_;
}
}
}
else
{
lean_object* v___x_3249_; uint8_t v___x_3250_; 
lean_dec(v_x_3233_);
v___x_3249_ = lean_nat_add(v_m_3237_, v___x_3236_);
lean_dec(v_m_3237_);
v___x_3250_ = lean_nat_dec_le(v___x_3249_, v_x_3234_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; 
lean_dec(v___x_3249_);
lean_dec(v_x_3234_);
v___x_3251_ = lean_box(0);
return v___x_3251_;
}
else
{
v_x_3233_ = v___x_3249_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg___boxed(lean_object* v_as_3253_, lean_object* v_k_3254_, lean_object* v_x_3255_, lean_object* v_x_3256_){
_start:
{
lean_object* v_res_3257_; 
v_res_3257_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(v_as_3253_, v_k_3254_, v_x_3255_, v_x_3256_);
lean_dec_ref(v_k_3254_);
lean_dec_ref(v_as_3253_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(lean_object* v_tactic_3258_, lean_object* v_as_3259_, size_t v_sz_3260_, size_t v_i_3261_, lean_object* v_b_3262_){
_start:
{
lean_object* v_a_3264_; uint8_t v___x_3268_; 
v___x_3268_ = lean_usize_dec_lt(v_i_3261_, v_sz_3260_);
if (v___x_3268_ == 0)
{
lean_dec(v_tactic_3258_);
return v_b_3262_;
}
else
{
lean_object* v___x_3269_; lean_object* v_a_3270_; lean_object* v___x_3271_; uint8_t v___x_3272_; 
v___x_3269_ = lean_unsigned_to_nat(0u);
v_a_3270_ = lean_array_uget_borrowed(v_as_3259_, v_i_3261_);
v___x_3271_ = lean_array_get_size(v_a_3270_);
v___x_3272_ = lean_nat_dec_lt(v___x_3269_, v___x_3271_);
if (v___x_3272_ == 0)
{
v_a_3264_ = v_b_3262_;
goto v___jp_3263_;
}
else
{
lean_object* v___x_3273_; lean_object* v___x_3274_; uint8_t v___x_3275_; 
v___x_3273_ = lean_unsigned_to_nat(1u);
v___x_3274_ = lean_nat_sub(v___x_3271_, v___x_3273_);
v___x_3275_ = lean_nat_dec_le(v___x_3269_, v___x_3274_);
if (v___x_3275_ == 0)
{
lean_dec(v___x_3274_);
v_a_3264_ = v_b_3262_;
goto v___jp_3263_;
}
else
{
lean_object* v_extensions_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v_extensions_3276_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
lean_inc(v_tactic_3258_);
v___x_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3277_, 0, v_tactic_3258_);
lean_ctor_set(v___x_3277_, 1, v_extensions_3276_);
v___x_3278_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(v_a_3270_, v___x_3277_, v___x_3269_, v___x_3274_);
lean_dec_ref_known(v___x_3277_, 2);
if (lean_obj_tag(v___x_3278_) == 1)
{
lean_object* v_val_3279_; lean_object* v_snd_3280_; lean_object* v___x_3281_; 
v_val_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_val_3279_);
lean_dec_ref_known(v___x_3278_, 1);
v_snd_3280_ = lean_ctor_get(v_val_3279_, 1);
lean_inc(v_snd_3280_);
lean_dec(v_val_3279_);
v___x_3281_ = l_Array_append___redArg(v_b_3262_, v_snd_3280_);
lean_dec(v_snd_3280_);
v_a_3264_ = v___x_3281_;
goto v___jp_3263_;
}
else
{
lean_dec(v___x_3278_);
v_a_3264_ = v_b_3262_;
goto v___jp_3263_;
}
}
}
}
v___jp_3263_:
{
size_t v___x_3265_; size_t v___x_3266_; 
v___x_3265_ = ((size_t)1ULL);
v___x_3266_ = lean_usize_add(v_i_3261_, v___x_3265_);
v_i_3261_ = v___x_3266_;
v_b_3262_ = v_a_3264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1___boxed(lean_object* v_tactic_3282_, lean_object* v_as_3283_, lean_object* v_sz_3284_, lean_object* v_i_3285_, lean_object* v_b_3286_){
_start:
{
size_t v_sz_boxed_3287_; size_t v_i_boxed_3288_; lean_object* v_res_3289_; 
v_sz_boxed_3287_ = lean_unbox_usize(v_sz_3284_);
lean_dec(v_sz_3284_);
v_i_boxed_3288_ = lean_unbox_usize(v_i_3285_);
lean_dec(v_i_3285_);
v_res_3289_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(v_tactic_3282_, v_as_3283_, v_sz_boxed_3287_, v_i_boxed_3288_, v_b_3286_);
lean_dec_ref(v_as_3283_);
return v_res_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensions(lean_object* v_env_3290_, lean_object* v_tactic_3291_){
_start:
{
lean_object* v___x_3292_; lean_object* v_toEnvExtension_3293_; lean_object* v_asyncMode_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; uint8_t v___x_3298_; lean_object* v___x_3299_; lean_object* v_importedEntries_3300_; lean_object* v_extensions_3301_; size_t v_sz_3302_; size_t v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3292_ = l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
v_toEnvExtension_3293_ = lean_ctor_get(v___x_3292_, 0);
v_asyncMode_3294_ = lean_ctor_get(v_toEnvExtension_3293_, 2);
v___x_3295_ = lean_box(1);
v___x_3296_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
v___x_3297_ = lean_box(0);
v___x_3298_ = 0;
lean_inc_ref(v_env_3290_);
v___x_3299_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3296_, v_toEnvExtension_3293_, v_env_3290_, v_asyncMode_3294_, v___x_3297_, v___x_3298_);
v_importedEntries_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc_ref(v_importedEntries_3300_);
lean_dec(v___x_3299_);
v_extensions_3301_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v_sz_3302_ = lean_array_size(v_importedEntries_3300_);
v___x_3303_ = ((size_t)0ULL);
lean_inc(v_tactic_3291_);
v___x_3304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(v_tactic_3291_, v_importedEntries_3300_, v_sz_3302_, v___x_3303_, v_extensions_3301_);
lean_dec_ref(v_importedEntries_3300_);
v___x_3305_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3295_, v___x_3292_, v_env_3290_, v_asyncMode_3294_, v___x_3297_, v___x_3298_);
v___x_3306_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3305_, v_tactic_3291_);
lean_dec(v_tactic_3291_);
lean_dec(v___x_3305_);
if (lean_obj_tag(v___x_3306_) == 1)
{
lean_object* v_val_3307_; lean_object* v___x_3308_; 
v_val_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_val_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3308_ = l_Array_append___redArg(v___x_3304_, v_val_3307_);
lean_dec(v_val_3307_);
return v___x_3308_;
}
else
{
lean_dec(v___x_3306_);
return v___x_3304_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0(lean_object* v_as_3309_, lean_object* v_k_3310_, lean_object* v_x_3311_, lean_object* v_x_3312_, lean_object* v_x_3313_){
_start:
{
lean_object* v___x_3314_; 
v___x_3314_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(v_as_3309_, v_k_3310_, v_x_3311_, v_x_3312_);
return v___x_3314_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___boxed(lean_object* v_as_3315_, lean_object* v_k_3316_, lean_object* v_x_3317_, lean_object* v_x_3318_, lean_object* v_x_3319_){
_start:
{
lean_object* v_res_3320_; 
v_res_3320_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0(v_as_3315_, v_k_3316_, v_x_3317_, v_x_3318_, v_x_3319_);
lean_dec_ref(v_k_3316_);
lean_dec_ref(v_as_3315_);
return v_res_3320_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(lean_object* v_s_3321_, lean_object* v_pos_3322_){
_start:
{
lean_object* v_str_3323_; lean_object* v_startInclusive_3324_; lean_object* v_endExclusive_3325_; lean_object* v___x_3326_; lean_object* v___x_3335_; lean_object* v___x_3336_; uint8_t v_decide_3337_; 
v_str_3323_ = lean_ctor_get(v_s_3321_, 0);
v_startInclusive_3324_ = lean_ctor_get(v_s_3321_, 1);
v_endExclusive_3325_ = lean_ctor_get(v_s_3321_, 2);
v___x_3326_ = lean_nat_add(v_startInclusive_3324_, v_pos_3322_);
v___x_3335_ = lean_unsigned_to_nat(0u);
v___x_3336_ = lean_nat_sub(v_endExclusive_3325_, v___x_3326_);
v_decide_3337_ = lean_nat_dec_eq(v___x_3335_, v___x_3336_);
lean_dec(v___x_3336_);
if (v_decide_3337_ == 0)
{
uint32_t v___x_3338_; uint32_t v___x_3339_; uint8_t v___x_3340_; 
v___x_3338_ = lean_string_utf8_get_fast(v_str_3323_, v___x_3326_);
v___x_3339_ = 32;
v___x_3340_ = lean_uint32_dec_eq(v___x_3338_, v___x_3339_);
if (v___x_3340_ == 0)
{
uint32_t v___x_3341_; uint8_t v___x_3342_; 
v___x_3341_ = 9;
v___x_3342_ = lean_uint32_dec_eq(v___x_3338_, v___x_3341_);
if (v___x_3342_ == 0)
{
uint32_t v___x_3343_; uint8_t v___x_3344_; 
v___x_3343_ = 13;
v___x_3344_ = lean_uint32_dec_eq(v___x_3338_, v___x_3343_);
if (v___x_3344_ == 0)
{
uint32_t v___x_3345_; uint8_t v___x_3346_; 
v___x_3345_ = 10;
v___x_3346_ = lean_uint32_dec_eq(v___x_3338_, v___x_3345_);
if (v___x_3346_ == 0)
{
lean_dec(v___x_3326_);
return v_pos_3322_;
}
else
{
goto v___jp_3327_;
}
}
else
{
goto v___jp_3327_;
}
}
else
{
goto v___jp_3327_;
}
}
else
{
goto v___jp_3327_;
}
}
else
{
lean_dec(v___x_3326_);
return v_pos_3322_;
}
v___jp_3327_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; uint8_t v___x_3333_; 
v___x_3328_ = lean_string_utf8_next_fast(v_str_3323_, v___x_3326_);
v___x_3329_ = lean_nat_sub(v___x_3328_, v___x_3326_);
lean_dec(v___x_3326_);
v___x_3330_ = lean_nat_add(v_pos_3322_, v___x_3329_);
lean_dec(v___x_3329_);
v___x_3331_ = lean_unsigned_to_nat(1u);
v___x_3332_ = lean_nat_add(v_pos_3322_, v___x_3331_);
v___x_3333_ = lean_nat_dec_le(v___x_3332_, v___x_3330_);
lean_dec(v___x_3332_);
if (v___x_3333_ == 0)
{
lean_dec(v___x_3330_);
return v_pos_3322_;
}
else
{
lean_dec(v_pos_3322_);
v_pos_3322_ = v___x_3330_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0___boxed(lean_object* v_s_3347_, lean_object* v_pos_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v_s_3347_, v_pos_3348_);
lean_dec_ref(v_s_3347_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(lean_object* v_str_3352_){
_start:
{
lean_object* v___y_3354_; lean_object* v_str_3357_; lean_object* v_startInclusive_3358_; lean_object* v_endExclusive_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; uint8_t v_decide_3363_; 
v_str_3357_ = lean_ctor_get(v_str_3352_, 0);
v_startInclusive_3358_ = lean_ctor_get(v_str_3352_, 1);
v_endExclusive_3359_ = lean_ctor_get(v_str_3352_, 2);
v___x_3360_ = lean_unsigned_to_nat(0u);
v___x_3361_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v_str_3352_, v___x_3360_);
v___x_3362_ = lean_nat_sub(v_endExclusive_3359_, v_startInclusive_3358_);
v_decide_3363_ = lean_nat_dec_eq(v___x_3361_, v___x_3362_);
lean_dec(v___x_3362_);
lean_dec(v___x_3361_);
if (v_decide_3363_ == 0)
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3364_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1));
v___x_3365_ = lean_string_utf8_extract_fast(v_str_3357_, v_startInclusive_3358_, v_endExclusive_3359_);
v___x_3366_ = lean_string_append(v___x_3364_, v___x_3365_);
lean_dec_ref(v___x_3365_);
v___y_3354_ = v___x_3366_;
goto v___jp_3353_;
}
else
{
lean_object* v___x_3367_; 
v___x_3367_ = lean_string_utf8_extract_fast(v_str_3357_, v_startInclusive_3358_, v_endExclusive_3359_);
v___y_3354_ = v___x_3367_;
goto v___jp_3353_;
}
v___jp_3353_:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3355_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0));
v___x_3356_ = lean_string_append(v___y_3354_, v___x_3355_);
return v___x_3356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___boxed(lean_object* v_str_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(v_str_3368_);
lean_dec_ref(v_str_3368_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg(){
_start:
{
lean_object* v___x_3373_; 
v___x_3373_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0));
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___boxed(lean_object* v___dummy_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg();
return v_res_3375_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3376_; 
v___x_3376_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg();
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0(lean_object* v_s_3377_){
_start:
{
lean_object* v___x_3378_; 
v___x_3378_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0);
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___boxed(lean_object* v_s_3379_){
_start:
{
lean_object* v_res_3380_; 
v_res_3380_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0(v_s_3379_);
lean_dec_ref(v_s_3379_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(lean_object* v_str_3381_, lean_object* v___x_3382_, lean_object* v___x_3383_, lean_object* v_a_3384_, lean_object* v_b_3385_){
_start:
{
lean_object* v_it_3387_; lean_object* v_startInclusive_3388_; lean_object* v_endExclusive_3389_; 
if (lean_obj_tag(v_a_3384_) == 0)
{
lean_object* v_currPos_3393_; lean_object* v_searcher_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3417_; 
v_currPos_3393_ = lean_ctor_get(v_a_3384_, 0);
v_searcher_3394_ = lean_ctor_get(v_a_3384_, 1);
v_isSharedCheck_3417_ = !lean_is_exclusive(v_a_3384_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3396_ = v_a_3384_;
v_isShared_3397_ = v_isSharedCheck_3417_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_searcher_3394_);
lean_inc(v_currPos_3393_);
lean_dec(v_a_3384_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3417_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
uint8_t v_decide_3398_; 
v_decide_3398_ = lean_nat_dec_eq(v_searcher_3394_, v___x_3383_);
if (v_decide_3398_ == 0)
{
uint32_t v___x_3399_; uint32_t v___x_3400_; uint8_t v___x_3401_; 
v___x_3399_ = 10;
v___x_3400_ = lean_string_utf8_get_fast(v_str_3381_, v_searcher_3394_);
v___x_3401_ = lean_uint32_dec_eq(v___x_3400_, v___x_3399_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3404_; 
v___x_3402_ = lean_string_utf8_next_fast(v_str_3381_, v_searcher_3394_);
lean_dec(v_searcher_3394_);
if (v_isShared_3397_ == 0)
{
lean_ctor_set(v___x_3396_, 1, v___x_3402_);
v___x_3404_ = v___x_3396_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_currPos_3393_);
lean_ctor_set(v_reuseFailAlloc_3406_, 1, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
v_a_3384_ = v___x_3404_;
goto _start;
}
}
else
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v_slice_3410_; lean_object* v_nextIt_3412_; 
v___x_3407_ = lean_string_utf8_next_fast(v_str_3381_, v_searcher_3394_);
v___x_3408_ = lean_nat_sub(v___x_3407_, v_searcher_3394_);
v___x_3409_ = lean_nat_add(v_searcher_3394_, v___x_3408_);
lean_dec(v___x_3408_);
v_slice_3410_ = l_String_Slice_subslice_x21(v___x_3382_, v_currPos_3393_, v_searcher_3394_);
lean_inc(v___x_3409_);
if (v_isShared_3397_ == 0)
{
lean_ctor_set(v___x_3396_, 1, v___x_3409_);
lean_ctor_set(v___x_3396_, 0, v___x_3409_);
v_nextIt_3412_ = v___x_3396_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3409_);
lean_ctor_set(v_reuseFailAlloc_3415_, 1, v___x_3409_);
v_nextIt_3412_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
lean_object* v_startInclusive_3413_; lean_object* v_endExclusive_3414_; 
v_startInclusive_3413_ = lean_ctor_get(v_slice_3410_, 0);
lean_inc(v_startInclusive_3413_);
v_endExclusive_3414_ = lean_ctor_get(v_slice_3410_, 1);
lean_inc(v_endExclusive_3414_);
lean_dec_ref(v_slice_3410_);
v_it_3387_ = v_nextIt_3412_;
v_startInclusive_3388_ = v_startInclusive_3413_;
v_endExclusive_3389_ = v_endExclusive_3414_;
goto v___jp_3386_;
}
}
}
else
{
lean_object* v___x_3416_; 
lean_del_object(v___x_3396_);
lean_dec(v_searcher_3394_);
v___x_3416_ = lean_box(1);
lean_inc(v___x_3383_);
v_it_3387_ = v___x_3416_;
v_startInclusive_3388_ = v_currPos_3393_;
v_endExclusive_3389_ = v___x_3383_;
goto v___jp_3386_;
}
}
}
else
{
lean_dec(v___x_3383_);
lean_dec_ref(v_str_3381_);
return v_b_3385_;
}
v___jp_3386_:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; 
lean_inc_ref(v_str_3381_);
v___x_3390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3390_, 0, v_str_3381_);
lean_ctor_set(v___x_3390_, 1, v_startInclusive_3388_);
lean_ctor_set(v___x_3390_, 2, v_endExclusive_3389_);
v___x_3391_ = lean_array_push(v_b_3385_, v___x_3390_);
v_a_3384_ = v_it_3387_;
v_b_3385_ = v___x_3391_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg___boxed(lean_object* v_str_3418_, lean_object* v___x_3419_, lean_object* v___x_3420_, lean_object* v_a_3421_, lean_object* v_b_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(v_str_3418_, v___x_3419_, v___x_3420_, v_a_3421_, v_b_3422_);
lean_dec_ref(v___x_3419_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(lean_object* v_x_3424_, lean_object* v_x_3425_){
_start:
{
if (lean_obj_tag(v_x_3425_) == 0)
{
return v_x_3424_;
}
else
{
lean_object* v_head_3426_; lean_object* v_tail_3427_; lean_object* v___x_3428_; 
v_head_3426_ = lean_ctor_get(v_x_3425_, 0);
v_tail_3427_ = lean_ctor_get(v_x_3425_, 1);
v___x_3428_ = lean_string_append(v_x_3424_, v_head_3426_);
v_x_3424_ = v___x_3428_;
v_x_3425_ = v_tail_3427_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3___boxed(lean_object* v_x_3430_, lean_object* v_x_3431_){
_start:
{
lean_object* v_res_3432_; 
v_res_3432_ = l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(v_x_3430_, v_x_3431_);
lean_dec(v_x_3431_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__2(lean_object* v_a_3433_, lean_object* v_a_3434_){
_start:
{
if (lean_obj_tag(v_a_3433_) == 0)
{
lean_object* v___x_3435_; 
v___x_3435_ = l_List_reverse___redArg(v_a_3434_);
return v___x_3435_;
}
else
{
lean_object* v_head_3436_; lean_object* v_tail_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3446_; 
v_head_3436_ = lean_ctor_get(v_a_3433_, 0);
v_tail_3437_ = lean_ctor_get(v_a_3433_, 1);
v_isSharedCheck_3446_ = !lean_is_exclusive(v_a_3433_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3439_ = v_a_3433_;
v_isShared_3440_ = v_isSharedCheck_3446_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_tail_3437_);
lean_inc(v_head_3436_);
lean_dec(v_a_3433_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3446_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3441_; lean_object* v___x_3443_; 
v___x_3441_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(v_head_3436_);
lean_dec(v_head_3436_);
if (v_isShared_3440_ == 0)
{
lean_ctor_set(v___x_3439_, 1, v_a_3434_);
lean_ctor_set(v___x_3439_, 0, v___x_3441_);
v___x_3443_ = v___x_3439_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3441_);
lean_ctor_set(v_reuseFailAlloc_3445_, 1, v_a_3434_);
v___x_3443_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
v_a_3433_ = v_tail_3437_;
v_a_3434_ = v___x_3443_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet(lean_object* v_str_3451_){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v_lines_3458_; 
v___x_3452_ = lean_unsigned_to_nat(0u);
v___x_3453_ = lean_string_utf8_byte_size(v_str_3451_);
lean_inc_ref(v_str_3451_);
v___x_3454_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3454_, 0, v_str_3451_);
lean_ctor_set(v___x_3454_, 1, v___x_3452_);
lean_ctor_set(v___x_3454_, 2, v___x_3453_);
v___x_3455_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0);
v___x_3456_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0));
v___x_3457_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(v_str_3451_, v___x_3454_, v___x_3453_, v___x_3455_, v___x_3456_);
lean_dec_ref_known(v___x_3454_, 3);
v_lines_3458_ = lean_array_to_list(v___x_3457_);
if (lean_obj_tag(v_lines_3458_) == 0)
{
lean_object* v___x_3459_; 
v___x_3459_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
return v___x_3459_;
}
else
{
lean_object* v_tail_3460_; 
v_tail_3460_ = lean_ctor_get(v_lines_3458_, 1);
if (lean_obj_tag(v_tail_3460_) == 0)
{
lean_object* v_head_3461_; lean_object* v_str_3462_; lean_object* v_startInclusive_3463_; lean_object* v_endExclusive_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v_head_3461_ = lean_ctor_get(v_lines_3458_, 0);
lean_inc(v_head_3461_);
lean_dec_ref_known(v_lines_3458_, 2);
v_str_3462_ = lean_ctor_get(v_head_3461_, 0);
lean_inc_ref(v_str_3462_);
v_startInclusive_3463_ = lean_ctor_get(v_head_3461_, 1);
lean_inc(v_startInclusive_3463_);
v_endExclusive_3464_ = lean_ctor_get(v_head_3461_, 2);
lean_inc(v_endExclusive_3464_);
lean_dec(v_head_3461_);
v___x_3465_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1));
v___x_3466_ = lean_string_utf8_extract_fast(v_str_3462_, v_startInclusive_3463_, v_endExclusive_3464_);
lean_dec(v_endExclusive_3464_);
lean_dec(v_startInclusive_3463_);
lean_dec_ref(v_str_3462_);
v___x_3467_ = lean_string_append(v___x_3465_, v___x_3466_);
lean_dec_ref(v___x_3466_);
v___x_3468_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2));
v___x_3469_ = lean_string_append(v___x_3467_, v___x_3468_);
return v___x_3469_;
}
else
{
lean_object* v_head_3470_; lean_object* v_str_3471_; lean_object* v_startInclusive_3472_; lean_object* v_endExclusive_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
lean_inc(v_tail_3460_);
v_head_3470_ = lean_ctor_get(v_lines_3458_, 0);
lean_inc(v_head_3470_);
lean_dec_ref_known(v_lines_3458_, 2);
v_str_3471_ = lean_ctor_get(v_head_3470_, 0);
lean_inc_ref(v_str_3471_);
v_startInclusive_3472_ = lean_ctor_get(v_head_3470_, 1);
lean_inc(v_startInclusive_3472_);
v_endExclusive_3473_ = lean_ctor_get(v_head_3470_, 2);
lean_inc(v_endExclusive_3473_);
lean_dec(v_head_3470_);
v___x_3474_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1));
v___x_3475_ = lean_string_utf8_extract_fast(v_str_3471_, v_startInclusive_3472_, v_endExclusive_3473_);
lean_dec(v_endExclusive_3473_);
lean_dec(v_startInclusive_3472_);
lean_dec_ref(v_str_3471_);
v___x_3476_ = lean_string_append(v___x_3474_, v___x_3475_);
lean_dec_ref(v___x_3475_);
v___x_3477_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0));
v___x_3478_ = lean_string_append(v___x_3476_, v___x_3477_);
v___x_3479_ = lean_box(0);
v___x_3480_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__2(v_tail_3460_, v___x_3479_);
v___x_3481_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
v___x_3482_ = l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(v___x_3481_, v___x_3480_);
lean_dec(v___x_3480_);
v___x_3483_ = lean_string_append(v___x_3478_, v___x_3482_);
lean_dec_ref(v___x_3482_);
v___x_3484_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2));
v___x_3485_ = lean_string_append(v___x_3483_, v___x_3484_);
return v___x_3485_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1(lean_object* v_str_3486_, lean_object* v___x_3487_, lean_object* v___x_3488_, lean_object* v_inst_3489_, lean_object* v_R_3490_, lean_object* v_a_3491_, lean_object* v_b_3492_){
_start:
{
lean_object* v___x_3493_; 
v___x_3493_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(v_str_3486_, v___x_3487_, v___x_3488_, v_a_3491_, v_b_3492_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___boxed(lean_object* v_str_3494_, lean_object* v___x_3495_, lean_object* v___x_3496_, lean_object* v_inst_3497_, lean_object* v_R_3498_, lean_object* v_a_3499_, lean_object* v_b_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1(v_str_3494_, v___x_3495_, v___x_3496_, v_inst_3497_, v_R_3498_, v_a_3499_, v_b_3500_);
lean_dec_ref(v___x_3495_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__0(lean_object* v_a_3502_, lean_object* v_a_3503_){
_start:
{
if (lean_obj_tag(v_a_3502_) == 0)
{
lean_object* v___x_3504_; 
v___x_3504_ = l_List_reverse___redArg(v_a_3503_);
return v___x_3504_;
}
else
{
lean_object* v_head_3505_; lean_object* v_tail_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3515_; 
v_head_3505_ = lean_ctor_get(v_a_3502_, 0);
v_tail_3506_ = lean_ctor_get(v_a_3502_, 1);
v_isSharedCheck_3515_ = !lean_is_exclusive(v_a_3502_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3508_ = v_a_3502_;
v_isShared_3509_ = v_isSharedCheck_3515_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_tail_3506_);
lean_inc(v_head_3505_);
lean_dec(v_a_3502_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3515_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3510_; lean_object* v___x_3512_; 
v___x_3510_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet(v_head_3505_);
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 1, v_a_3503_);
lean_ctor_set(v___x_3508_, 0, v___x_3510_);
v___x_3512_ = v___x_3508_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v___x_3510_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_a_3503_);
v___x_3512_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
v_a_3502_ = v_tail_3506_;
v_a_3503_ = v___x_3512_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(lean_object* v_s_3516_, lean_object* v_pos_3517_){
_start:
{
lean_object* v_str_3518_; lean_object* v_startInclusive_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; uint8_t v_decide_3523_; 
v_str_3518_ = lean_ctor_get(v_s_3516_, 0);
v_startInclusive_3519_ = lean_ctor_get(v_s_3516_, 1);
v___x_3520_ = lean_nat_add(v_startInclusive_3519_, v_pos_3517_);
v___x_3521_ = lean_nat_sub(v___x_3520_, v_startInclusive_3519_);
v___x_3522_ = lean_unsigned_to_nat(0u);
v_decide_3523_ = lean_nat_dec_eq(v___x_3521_, v___x_3522_);
if (v_decide_3523_ == 0)
{
lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3532_; uint32_t v___x_3533_; uint32_t v___x_3534_; uint8_t v___x_3535_; 
lean_inc(v_startInclusive_3519_);
lean_inc_ref(v_str_3518_);
v___x_3524_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3524_, 0, v_str_3518_);
lean_ctor_set(v___x_3524_, 1, v_startInclusive_3519_);
lean_ctor_set(v___x_3524_, 2, v___x_3520_);
v___x_3525_ = lean_unsigned_to_nat(1u);
v___x_3526_ = lean_nat_sub(v___x_3521_, v___x_3525_);
lean_dec(v___x_3521_);
v___x_3527_ = l_String_Slice_posLE(v___x_3524_, v___x_3526_);
lean_dec_ref_known(v___x_3524_, 3);
v___x_3532_ = lean_nat_add(v_startInclusive_3519_, v___x_3527_);
v___x_3533_ = lean_string_utf8_get_fast(v_str_3518_, v___x_3532_);
lean_dec(v___x_3532_);
v___x_3534_ = 32;
v___x_3535_ = lean_uint32_dec_eq(v___x_3533_, v___x_3534_);
if (v___x_3535_ == 0)
{
uint32_t v___x_3536_; uint8_t v___x_3537_; 
v___x_3536_ = 9;
v___x_3537_ = lean_uint32_dec_eq(v___x_3533_, v___x_3536_);
if (v___x_3537_ == 0)
{
uint32_t v___x_3538_; uint8_t v___x_3539_; 
v___x_3538_ = 13;
v___x_3539_ = lean_uint32_dec_eq(v___x_3533_, v___x_3538_);
if (v___x_3539_ == 0)
{
uint32_t v___x_3540_; uint8_t v___x_3541_; 
v___x_3540_ = 10;
v___x_3541_ = lean_uint32_dec_eq(v___x_3533_, v___x_3540_);
if (v___x_3541_ == 0)
{
lean_dec(v___x_3527_);
return v_pos_3517_;
}
else
{
goto v___jp_3528_;
}
}
else
{
goto v___jp_3528_;
}
}
else
{
goto v___jp_3528_;
}
}
else
{
goto v___jp_3528_;
}
v___jp_3528_:
{
lean_object* v___x_3529_; uint8_t v___x_3530_; 
v___x_3529_ = lean_nat_add(v___x_3527_, v___x_3525_);
v___x_3530_ = lean_nat_dec_le(v___x_3529_, v_pos_3517_);
lean_dec(v___x_3529_);
if (v___x_3530_ == 0)
{
lean_dec(v___x_3527_);
return v_pos_3517_;
}
else
{
lean_dec(v_pos_3517_);
v_pos_3517_ = v___x_3527_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3521_);
lean_dec(v___x_3520_);
return v_pos_3517_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1___boxed(lean_object* v_s_3542_, lean_object* v_pos_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(v_s_3542_, v_pos_3543_);
lean_dec_ref(v_s_3542_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensionString(lean_object* v_env_3546_, lean_object* v_tactic_3547_){
_start:
{
lean_object* v_exts_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; 
v_exts_3548_ = l_Lean_Parser_Tactic_Doc_getTacticExtensions(v_env_3546_, v_tactic_3547_);
v___x_3549_ = lean_array_get_size(v_exts_3548_);
v___x_3550_ = lean_unsigned_to_nat(0u);
v___x_3551_ = lean_nat_dec_eq(v___x_3549_, v___x_3550_);
if (v___x_3551_ == 0)
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3552_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0));
v___x_3553_ = lean_array_to_list(v_exts_3548_);
v___x_3554_ = lean_box(0);
v___x_3555_ = l_List_mapTR_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__0(v___x_3553_, v___x_3554_);
v___x_3556_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
v___x_3557_ = l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(v___x_3556_, v___x_3555_);
lean_dec(v___x_3555_);
v___x_3558_ = lean_string_append(v___x_3552_, v___x_3557_);
lean_dec_ref(v___x_3557_);
v___x_3559_ = lean_string_utf8_byte_size(v___x_3558_);
lean_inc_ref(v___x_3558_);
v___x_3560_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3558_);
lean_ctor_set(v___x_3560_, 1, v___x_3550_);
lean_ctor_set(v___x_3560_, 2, v___x_3559_);
v___x_3561_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(v___x_3560_, v___x_3559_);
lean_dec_ref_known(v___x_3560_, 3);
v___x_3562_ = lean_string_utf8_extract_fast(v___x_3558_, v___x_3550_, v___x_3561_);
lean_dec(v___x_3561_);
lean_dec_ref(v___x_3558_);
return v___x_3562_;
}
else
{
lean_object* v___x_3563_; 
lean_dec_ref(v_exts_3548_);
v___x_3563_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
return v___x_3563_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v_as_3564_, lean_object* v_x_3565_){
_start:
{
lean_object* v_fst_3566_; lean_object* v_snd_3567_; lean_object* v___x_3568_; 
v_fst_3566_ = lean_ctor_get(v_x_3565_, 0);
lean_inc(v_fst_3566_);
v_snd_3567_ = lean_ctor_get(v_x_3565_, 1);
lean_inc(v_snd_3567_);
lean_dec_ref(v_x_3565_);
v___x_3568_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3566_, v_snd_3567_, v_as_3564_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_3569_, lean_object* v_x_3570_){
_start:
{
if (lean_obj_tag(v_x_3570_) == 0)
{
lean_object* v_k_3571_; lean_object* v_v_3572_; lean_object* v_l_3573_; lean_object* v_r_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v_k_3571_ = lean_ctor_get(v_x_3570_, 1);
v_v_3572_ = lean_ctor_get(v_x_3570_, 2);
v_l_3573_ = lean_ctor_get(v_x_3570_, 3);
v_r_3574_ = lean_ctor_get(v_x_3570_, 4);
v___x_3575_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v_init_3569_, v_l_3573_);
lean_inc(v_v_3572_);
lean_inc(v_k_3571_);
v___x_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3576_, 0, v_k_3571_);
lean_ctor_set(v___x_3576_, 1, v_v_3572_);
v___x_3577_ = lean_array_push(v___x_3575_, v___x_3576_);
v_init_3569_ = v___x_3577_;
v_x_3570_ = v_r_3574_;
goto _start;
}
else
{
return v_init_3569_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_3579_, lean_object* v_x_3580_){
_start:
{
lean_object* v_res_3581_; 
v_res_3581_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v_init_3579_, v_x_3580_);
lean_dec(v_x_3580_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_3582_, lean_object* v_pivot_3583_, lean_object* v_as_3584_, lean_object* v_i_3585_, lean_object* v_k_3586_){
_start:
{
uint8_t v___x_3587_; 
v___x_3587_ = lean_nat_dec_lt(v_k_3586_, v_hi_3582_);
if (v___x_3587_ == 0)
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
lean_dec(v_k_3586_);
v___x_3588_ = lean_array_fswap(v_as_3584_, v_i_3585_, v_hi_3582_);
v___x_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3589_, 0, v_i_3585_);
lean_ctor_set(v___x_3589_, 1, v___x_3588_);
return v___x_3589_;
}
else
{
lean_object* v___x_3590_; lean_object* v_fst_3591_; lean_object* v_fst_3592_; uint8_t v___x_3593_; 
v___x_3590_ = lean_array_fget_borrowed(v_as_3584_, v_k_3586_);
v_fst_3591_ = lean_ctor_get(v___x_3590_, 0);
v_fst_3592_ = lean_ctor_get(v_pivot_3583_, 0);
v___x_3593_ = l_Lean_Name_quickLt(v_fst_3591_, v_fst_3592_);
if (v___x_3593_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3594_ = lean_unsigned_to_nat(1u);
v___x_3595_ = lean_nat_add(v_k_3586_, v___x_3594_);
lean_dec(v_k_3586_);
v_k_3586_ = v___x_3595_;
goto _start;
}
else
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3597_ = lean_array_fswap(v_as_3584_, v_i_3585_, v_k_3586_);
v___x_3598_ = lean_unsigned_to_nat(1u);
v___x_3599_ = lean_nat_add(v_i_3585_, v___x_3598_);
lean_dec(v_i_3585_);
v___x_3600_ = lean_nat_add(v_k_3586_, v___x_3598_);
lean_dec(v_k_3586_);
v_as_3584_ = v___x_3597_;
v_i_3585_ = v___x_3599_;
v_k_3586_ = v___x_3600_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_3602_, lean_object* v_pivot_3603_, lean_object* v_as_3604_, lean_object* v_i_3605_, lean_object* v_k_3606_){
_start:
{
lean_object* v_res_3607_; 
v_res_3607_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3602_, v_pivot_3603_, v_as_3604_, v_i_3605_, v_k_3606_);
lean_dec_ref(v_pivot_3603_);
lean_dec(v_hi_3602_);
return v_res_3607_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_3608_, lean_object* v_x2_3609_){
_start:
{
lean_object* v_fst_3610_; lean_object* v_fst_3611_; uint8_t v___x_3612_; 
v_fst_3610_ = lean_ctor_get(v_x1_3608_, 0);
v_fst_3611_ = lean_ctor_get(v_x2_3609_, 0);
v___x_3612_ = l_Lean_Name_quickLt(v_fst_3610_, v_fst_3611_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_3613_, lean_object* v_x2_3614_){
_start:
{
uint8_t v_res_3615_; lean_object* v_r_3616_; 
v_res_3615_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_3613_, v_x2_3614_);
lean_dec_ref(v_x2_3614_);
lean_dec_ref(v_x1_3613_);
v_r_3616_ = lean_box(v_res_3615_);
return v_r_3616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_3617_, lean_object* v_as_3618_, lean_object* v_lo_3619_, lean_object* v_hi_3620_){
_start:
{
lean_object* v___y_3622_; uint8_t v___x_3632_; 
v___x_3632_ = lean_nat_dec_lt(v_lo_3619_, v_hi_3620_);
if (v___x_3632_ == 0)
{
lean_dec(v_lo_3619_);
return v_as_3618_;
}
else
{
lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v_mid_3635_; lean_object* v___y_3637_; lean_object* v___y_3643_; lean_object* v___x_3648_; lean_object* v___x_3649_; uint8_t v___x_3650_; 
v___x_3633_ = lean_nat_add(v_lo_3619_, v_hi_3620_);
v___x_3634_ = lean_unsigned_to_nat(1u);
v_mid_3635_ = lean_nat_shiftr(v___x_3633_, v___x_3634_);
lean_dec(v___x_3633_);
v___x_3648_ = lean_array_fget_borrowed(v_as_3618_, v_mid_3635_);
v___x_3649_ = lean_array_fget_borrowed(v_as_3618_, v_lo_3619_);
v___x_3650_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3648_, v___x_3649_);
if (v___x_3650_ == 0)
{
v___y_3643_ = v_as_3618_;
goto v___jp_3642_;
}
else
{
lean_object* v___x_3651_; 
v___x_3651_ = lean_array_fswap(v_as_3618_, v_lo_3619_, v_mid_3635_);
v___y_3643_ = v___x_3651_;
goto v___jp_3642_;
}
v___jp_3636_:
{
lean_object* v___x_3638_; lean_object* v___x_3639_; uint8_t v___x_3640_; 
v___x_3638_ = lean_array_fget_borrowed(v___y_3637_, v_mid_3635_);
v___x_3639_ = lean_array_fget_borrowed(v___y_3637_, v_hi_3620_);
v___x_3640_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3638_, v___x_3639_);
if (v___x_3640_ == 0)
{
lean_dec(v_mid_3635_);
v___y_3622_ = v___y_3637_;
goto v___jp_3621_;
}
else
{
lean_object* v___x_3641_; 
v___x_3641_ = lean_array_fswap(v___y_3637_, v_mid_3635_, v_hi_3620_);
lean_dec(v_mid_3635_);
v___y_3622_ = v___x_3641_;
goto v___jp_3621_;
}
}
v___jp_3642_:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; uint8_t v___x_3646_; 
v___x_3644_ = lean_array_fget_borrowed(v___y_3643_, v_hi_3620_);
v___x_3645_ = lean_array_fget_borrowed(v___y_3643_, v_lo_3619_);
v___x_3646_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3644_, v___x_3645_);
if (v___x_3646_ == 0)
{
v___y_3637_ = v___y_3643_;
goto v___jp_3636_;
}
else
{
lean_object* v___x_3647_; 
v___x_3647_ = lean_array_fswap(v___y_3643_, v_lo_3619_, v_hi_3620_);
v___y_3637_ = v___x_3647_;
goto v___jp_3636_;
}
}
}
v___jp_3621_:
{
lean_object* v_pivot_3623_; lean_object* v___x_3624_; lean_object* v_fst_3625_; lean_object* v_snd_3626_; uint8_t v___x_3627_; 
v_pivot_3623_ = lean_array_fget(v___y_3622_, v_hi_3620_);
lean_inc_n(v_lo_3619_, 2);
v___x_3624_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3620_, v_pivot_3623_, v___y_3622_, v_lo_3619_, v_lo_3619_);
lean_dec(v_pivot_3623_);
v_fst_3625_ = lean_ctor_get(v___x_3624_, 0);
lean_inc(v_fst_3625_);
v_snd_3626_ = lean_ctor_get(v___x_3624_, 1);
lean_inc(v_snd_3626_);
lean_dec_ref(v___x_3624_);
v___x_3627_ = lean_nat_dec_le(v_hi_3620_, v_fst_3625_);
if (v___x_3627_ == 0)
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___x_3628_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v_n_3617_, v_snd_3626_, v_lo_3619_, v_fst_3625_);
v___x_3629_ = lean_unsigned_to_nat(1u);
v___x_3630_ = lean_nat_add(v_fst_3625_, v___x_3629_);
lean_dec(v_fst_3625_);
v_as_3618_ = v___x_3628_;
v_lo_3619_ = v___x_3630_;
goto _start;
}
else
{
lean_dec(v_fst_3625_);
lean_dec(v_lo_3619_);
return v_snd_3626_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_3652_, lean_object* v_as_3653_, lean_object* v_lo_3654_, lean_object* v_hi_3655_){
_start:
{
lean_object* v_res_3656_; 
v_res_3656_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v_n_3652_, v_as_3653_, v_lo_3654_, v_hi_3655_);
lean_dec(v_hi_3655_);
lean_dec(v_n_3652_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v_x_3659_, lean_object* v_s_3660_){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___y_3666_; lean_object* v___y_3667_; uint8_t v___x_3670_; 
v___x_3661_ = lean_unsigned_to_nat(0u);
v___x_3662_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_));
v___x_3663_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v___x_3662_, v_s_3660_);
v___x_3664_ = lean_array_get_size(v___x_3663_);
v___x_3670_ = lean_nat_dec_eq(v___x_3664_, v___x_3661_);
if (v___x_3670_ == 0)
{
lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___y_3674_; uint8_t v___x_3676_; 
v___x_3671_ = lean_unsigned_to_nat(1u);
v___x_3672_ = lean_nat_sub(v___x_3664_, v___x_3671_);
v___x_3676_ = lean_nat_dec_le(v___x_3661_, v___x_3672_);
if (v___x_3676_ == 0)
{
lean_inc(v___x_3672_);
v___y_3674_ = v___x_3672_;
goto v___jp_3673_;
}
else
{
v___y_3674_ = v___x_3661_;
goto v___jp_3673_;
}
v___jp_3673_:
{
uint8_t v___x_3675_; 
v___x_3675_ = lean_nat_dec_le(v___y_3674_, v___x_3672_);
if (v___x_3675_ == 0)
{
lean_dec(v___x_3672_);
lean_inc(v___y_3674_);
v___y_3666_ = v___y_3674_;
v___y_3667_ = v___y_3674_;
goto v___jp_3665_;
}
else
{
v___y_3666_ = v___y_3674_;
v___y_3667_ = v___x_3672_;
goto v___jp_3665_;
}
}
}
else
{
lean_object* v___x_3677_; 
lean_inc_ref_n(v___x_3663_, 2);
v___x_3677_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3663_);
lean_ctor_set(v___x_3677_, 1, v___x_3663_);
lean_ctor_set(v___x_3677_, 2, v___x_3663_);
return v___x_3677_;
}
v___jp_3665_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3668_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v___x_3664_, v___x_3663_, v___y_3666_, v___y_3667_);
lean_dec(v___y_3667_);
lean_inc_ref_n(v___x_3668_, 2);
v___x_3669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3668_);
lean_ctor_set(v___x_3669_, 1, v___x_3668_);
lean_ctor_set(v___x_3669_, 2, v___x_3668_);
return v___x_3669_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v_x_3678_, lean_object* v_s_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(v_x_3678_, v_s_3679_);
lean_dec(v_s_3679_);
lean_dec_ref(v_x_3678_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v_es_3681_){
_start:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; uint8_t v___x_3686_; 
v___x_3682_ = lean_unsigned_to_nat(0u);
v___x_3683_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_));
v___x_3684_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v___x_3683_, v_es_3681_);
v___x_3685_ = lean_array_get_size(v___x_3684_);
v___x_3686_ = lean_nat_dec_eq(v___x_3685_, v___x_3682_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___y_3690_; uint8_t v___x_3694_; 
v___x_3687_ = lean_unsigned_to_nat(1u);
v___x_3688_ = lean_nat_sub(v___x_3685_, v___x_3687_);
v___x_3694_ = lean_nat_dec_le(v___x_3682_, v___x_3688_);
if (v___x_3694_ == 0)
{
lean_inc(v___x_3688_);
v___y_3690_ = v___x_3688_;
goto v___jp_3689_;
}
else
{
v___y_3690_ = v___x_3682_;
goto v___jp_3689_;
}
v___jp_3689_:
{
uint8_t v___x_3691_; 
v___x_3691_ = lean_nat_dec_le(v___y_3690_, v___x_3688_);
if (v___x_3691_ == 0)
{
lean_object* v___x_3692_; 
lean_dec(v___x_3688_);
lean_inc(v___y_3690_);
v___x_3692_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v___x_3685_, v___x_3684_, v___y_3690_, v___y_3690_);
lean_dec(v___y_3690_);
return v___x_3692_;
}
else
{
lean_object* v___x_3693_; 
v___x_3693_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v___x_3685_, v___x_3684_, v___y_3690_, v___x_3688_);
lean_dec(v___x_3688_);
return v___x_3693_;
}
}
}
else
{
return v___x_3684_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v_es_3695_){
_start:
{
lean_object* v_res_3696_; 
v_res_3696_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(v_es_3695_);
lean_dec(v_es_3695_);
return v_res_3696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v___x_3697_, lean_object* v_x_3698_, lean_object* v___y_3699_){
_start:
{
lean_object* v___x_3701_; 
v___x_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3697_);
return v___x_3701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v___x_3702_, lean_object* v_x_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_){
_start:
{
lean_object* v_res_3706_; 
v_res_3706_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(v___x_3702_, v_x_3703_, v___y_3704_);
lean_dec_ref(v___y_3704_);
lean_dec_ref(v_x_3703_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_));
v___x_3734_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_3733_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v_a_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_();
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0(lean_object* v_init_3737_, lean_object* v_t_3738_){
_start:
{
lean_object* v___x_3739_; 
v___x_3739_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v_init_3737_, v_t_3738_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_3740_, lean_object* v_t_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0(v_init_3740_, v_t_3741_);
lean_dec(v_t_3741_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1(lean_object* v_n_3743_, lean_object* v_as_3744_, lean_object* v_lo_3745_, lean_object* v_hi_3746_, lean_object* v_w_3747_, lean_object* v_hlo_3748_, lean_object* v_hhi_3749_){
_start:
{
lean_object* v___x_3750_; 
v___x_3750_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v_n_3743_, v_as_3744_, v_lo_3745_, v_hi_3746_);
return v___x_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_3751_, lean_object* v_as_3752_, lean_object* v_lo_3753_, lean_object* v_hi_3754_, lean_object* v_w_3755_, lean_object* v_hlo_3756_, lean_object* v_hhi_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1(v_n_3751_, v_as_3752_, v_lo_3753_, v_hi_3754_, v_w_3755_, v_hlo_3756_, v_hhi_3757_);
lean_dec(v_hi_3754_);
lean_dec(v_n_3751_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_3759_, lean_object* v_lo_3760_, lean_object* v_hi_3761_, lean_object* v_hhi_3762_, lean_object* v_pivot_3763_, lean_object* v_as_3764_, lean_object* v_i_3765_, lean_object* v_k_3766_, lean_object* v_ilo_3767_, lean_object* v_ik_3768_, lean_object* v_w_3769_){
_start:
{
lean_object* v___x_3770_; 
v___x_3770_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3761_, v_pivot_3763_, v_as_3764_, v_i_3765_, v_k_3766_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_3771_, lean_object* v_lo_3772_, lean_object* v_hi_3773_, lean_object* v_hhi_3774_, lean_object* v_pivot_3775_, lean_object* v_as_3776_, lean_object* v_i_3777_, lean_object* v_k_3778_, lean_object* v_ilo_3779_, lean_object* v_ik_3780_, lean_object* v_w_3781_){
_start:
{
lean_object* v_res_3782_; 
v_res_3782_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2(v_n_3771_, v_lo_3772_, v_hi_3773_, v_hhi_3774_, v_pivot_3775_, v_as_3776_, v_i_3777_, v_k_3778_, v_ilo_3779_, v_ik_3780_, v_w_3781_);
lean_dec_ref(v_pivot_3775_);
lean_dec(v_hi_3773_);
lean_dec(v_lo_3772_);
lean_dec(v_n_3771_);
return v_res_3782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1(lean_object* v_tac_3784_, lean_object* v___x_3785_, lean_object* v_toPure_3786_, lean_object* v___f_3787_, lean_object* v_env_3788_){
_start:
{
lean_object* v___x_3792_; 
v___x_3792_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3788_, v_tac_3784_);
if (lean_obj_tag(v___x_3792_) == 0)
{
lean_object* v___x_3793_; lean_object* v_toEnvExtension_3794_; lean_object* v_asyncMode_3795_; lean_object* v___x_3796_; uint8_t v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
lean_dec_ref(v___f_3787_);
v___x_3793_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_3794_ = lean_ctor_get(v___x_3793_, 0);
v_asyncMode_3795_ = lean_ctor_get(v_toEnvExtension_3794_, 2);
v___x_3796_ = lean_box(0);
v___x_3797_ = 0;
v___x_3798_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3785_, v___x_3793_, v_env_3788_, v_asyncMode_3795_, v___x_3796_, v___x_3797_);
v___x_3799_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3798_, v_tac_3784_);
lean_dec(v_tac_3784_);
lean_dec(v___x_3798_);
v___x_3800_ = lean_apply_2(v_toPure_3786_, lean_box(0), v___x_3799_);
return v___x_3800_;
}
else
{
lean_object* v_val_3801_; lean_object* v___x_3802_; uint8_t v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; uint8_t v___x_3807_; 
v_val_3801_ = lean_ctor_get(v___x_3792_, 0);
lean_inc(v_val_3801_);
lean_dec_ref_known(v___x_3792_, 1);
v___x_3802_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v___x_3803_ = 0;
v___x_3804_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3785_, v___x_3802_, v_env_3788_, v_val_3801_, v___x_3803_);
lean_dec(v_val_3801_);
lean_dec_ref(v_env_3788_);
v___x_3805_ = lean_unsigned_to_nat(0u);
v___x_3806_ = lean_array_get_size(v___x_3804_);
v___x_3807_ = lean_nat_dec_lt(v___x_3805_, v___x_3806_);
if (v___x_3807_ == 0)
{
lean_dec_ref(v___x_3804_);
lean_dec_ref(v___f_3787_);
lean_dec(v_tac_3784_);
goto v___jp_3789_;
}
else
{
lean_object* v___x_3808_; lean_object* v___x_3809_; uint8_t v___x_3810_; 
v___x_3808_ = lean_unsigned_to_nat(1u);
v___x_3809_ = lean_nat_sub(v___x_3806_, v___x_3808_);
v___x_3810_ = lean_nat_dec_le(v___x_3805_, v___x_3809_);
if (v___x_3810_ == 0)
{
lean_dec(v___x_3809_);
lean_dec_ref(v___x_3804_);
lean_dec_ref(v___f_3787_);
lean_dec(v_tac_3784_);
goto v___jp_3789_;
}
else
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3811_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
v___x_3812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3812_, 0, v_tac_3784_);
lean_ctor_set(v___x_3812_, 1, v___x_3811_);
v___x_3813_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0));
v___x_3814_ = l_Array_binSearchAux___redArg(v___f_3787_, v___x_3813_, v___x_3804_, v___x_3812_, v___x_3805_, v___x_3809_);
lean_dec_ref(v___x_3804_);
if (lean_obj_tag(v___x_3814_) == 0)
{
goto v___jp_3789_;
}
else
{
lean_object* v_val_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3824_; 
v_val_3815_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3817_ = v___x_3814_;
v_isShared_3818_ = v_isSharedCheck_3824_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_val_3815_);
lean_dec(v___x_3814_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3824_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v_snd_3819_; lean_object* v___x_3821_; 
v_snd_3819_ = lean_ctor_get(v_val_3815_, 1);
lean_inc(v_snd_3819_);
lean_dec(v_val_3815_);
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 0, v_snd_3819_);
v___x_3821_ = v___x_3817_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_snd_3819_);
v___x_3821_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
lean_object* v___x_3822_; 
v___x_3822_ = lean_apply_2(v_toPure_3786_, lean_box(0), v___x_3821_);
return v___x_3822_;
}
}
}
}
}
}
v___jp_3789_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3790_ = lean_box(0);
v___x_3791_ = lean_apply_2(v_toPure_3786_, lean_box(0), v___x_3790_);
return v___x_3791_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg(lean_object* v_inst_3826_, lean_object* v_inst_3827_, lean_object* v_tac_3828_){
_start:
{
lean_object* v_toApplicative_3829_; lean_object* v_toBind_3830_; lean_object* v_getEnv_3831_; lean_object* v_toPure_3832_; lean_object* v___f_3833_; lean_object* v___x_3834_; lean_object* v___f_3835_; lean_object* v___x_3836_; 
v_toApplicative_3829_ = lean_ctor_get(v_inst_3826_, 0);
lean_inc_ref(v_toApplicative_3829_);
v_toBind_3830_ = lean_ctor_get(v_inst_3826_, 1);
lean_inc(v_toBind_3830_);
lean_dec_ref(v_inst_3826_);
v_getEnv_3831_ = lean_ctor_get(v_inst_3827_, 0);
lean_inc(v_getEnv_3831_);
lean_dec_ref(v_inst_3827_);
v_toPure_3832_ = lean_ctor_get(v_toApplicative_3829_, 1);
lean_inc(v_toPure_3832_);
lean_dec_ref(v_toApplicative_3829_);
v___f_3833_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0));
v___x_3834_ = lean_box(1);
v___f_3835_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3835_, 0, v_tac_3828_);
lean_closure_set(v___f_3835_, 1, v___x_3834_);
lean_closure_set(v___f_3835_, 2, v_toPure_3832_);
lean_closure_set(v___f_3835_, 3, v___f_3833_);
v___x_3836_ = lean_apply_4(v_toBind_3830_, lean_box(0), lean_box(0), v_getEnv_3831_, v___f_3835_);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName(lean_object* v_m_3837_, lean_object* v_inst_3838_, lean_object* v_inst_3839_, lean_object* v_tac_3840_){
_start:
{
lean_object* v___x_3841_; 
v___x_3841_ = l_Lean_Parser_Tactic_Doc_customTacticName___redArg(v_inst_3838_, v_inst_3839_, v_tac_3840_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object* v_addEntryFn_3842_, lean_object* v___x_3843_, lean_object* v_s_3844_){
_start:
{
lean_object* v_importedEntries_3845_; lean_object* v_state_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3854_; 
v_importedEntries_3845_ = lean_ctor_get(v_s_3844_, 0);
v_state_3846_ = lean_ctor_get(v_s_3844_, 1);
v_isSharedCheck_3854_ = !lean_is_exclusive(v_s_3844_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3848_ = v_s_3844_;
v_isShared_3849_ = v_isSharedCheck_3854_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_state_3846_);
lean_inc(v_importedEntries_3845_);
lean_dec(v_s_3844_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3854_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v_state_3850_; lean_object* v___x_3852_; 
v_state_3850_ = lean_apply_2(v_addEntryFn_3842_, v_state_3846_, v___x_3843_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 1, v_state_3850_);
v___x_3852_ = v___x_3848_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_importedEntries_3845_);
lean_ctor_set(v_reuseFailAlloc_3853_, 1, v_state_3850_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_as_3855_, lean_object* v_k_3856_, lean_object* v_x_3857_, lean_object* v_x_3858_){
_start:
{
lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v_m_3861_; lean_object* v_a_3862_; uint8_t v___x_3863_; 
v___x_3859_ = lean_nat_add(v_x_3857_, v_x_3858_);
v___x_3860_ = lean_unsigned_to_nat(1u);
v_m_3861_ = lean_nat_shiftr(v___x_3859_, v___x_3860_);
lean_dec(v___x_3859_);
v_a_3862_ = lean_array_fget_borrowed(v_as_3855_, v_m_3861_);
v___x_3863_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_3862_, v_k_3856_);
if (v___x_3863_ == 0)
{
uint8_t v___x_3864_; 
lean_dec(v_x_3858_);
v___x_3864_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_3856_, v_a_3862_);
if (v___x_3864_ == 0)
{
lean_object* v___x_3865_; 
lean_dec(v_m_3861_);
lean_dec(v_x_3857_);
lean_inc(v_a_3862_);
v___x_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3865_, 0, v_a_3862_);
return v___x_3865_;
}
else
{
lean_object* v___x_3866_; uint8_t v___x_3867_; 
v___x_3866_ = lean_unsigned_to_nat(0u);
v___x_3867_ = lean_nat_dec_eq(v_m_3861_, v___x_3866_);
if (v___x_3867_ == 0)
{
lean_object* v___x_3868_; uint8_t v___x_3869_; 
v___x_3868_ = lean_nat_sub(v_m_3861_, v___x_3860_);
lean_dec(v_m_3861_);
v___x_3869_ = lean_nat_dec_lt(v___x_3868_, v_x_3857_);
if (v___x_3869_ == 0)
{
v_x_3858_ = v___x_3868_;
goto _start;
}
else
{
lean_object* v___x_3871_; 
lean_dec(v___x_3868_);
lean_dec(v_x_3857_);
v___x_3871_ = lean_box(0);
return v___x_3871_;
}
}
else
{
lean_object* v___x_3872_; 
lean_dec(v_m_3861_);
lean_dec(v_x_3857_);
v___x_3872_ = lean_box(0);
return v___x_3872_;
}
}
}
else
{
lean_object* v___x_3873_; uint8_t v___x_3874_; 
lean_dec(v_x_3857_);
v___x_3873_ = lean_nat_add(v_m_3861_, v___x_3860_);
lean_dec(v_m_3861_);
v___x_3874_ = lean_nat_dec_le(v___x_3873_, v_x_3858_);
if (v___x_3874_ == 0)
{
lean_object* v___x_3875_; 
lean_dec(v___x_3873_);
lean_dec(v_x_3858_);
v___x_3875_ = lean_box(0);
return v___x_3875_;
}
else
{
v_x_3857_ = v___x_3873_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_as_3877_, lean_object* v_k_3878_, lean_object* v_x_3879_, lean_object* v_x_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_3877_, v_k_3878_, v_x_3879_, v_x_3880_);
lean_dec_ref(v_k_3878_);
lean_dec_ref(v_as_3877_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(lean_object* v_tac_3882_, lean_object* v___y_3883_){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v_env_3890_; lean_object* v___x_3891_; 
v___x_3885_ = lean_box(1);
v___x_3886_ = lean_st_ref_get(v___y_3883_);
v_env_3890_ = lean_ctor_get(v___x_3886_, 0);
lean_inc_ref(v_env_3890_);
lean_dec(v___x_3886_);
v___x_3891_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3890_, v_tac_3882_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v___x_3892_; lean_object* v_toEnvExtension_3893_; lean_object* v_asyncMode_3894_; lean_object* v___x_3895_; uint8_t v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v___x_3892_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_3893_ = lean_ctor_get(v___x_3892_, 0);
v_asyncMode_3894_ = lean_ctor_get(v_toEnvExtension_3893_, 2);
v___x_3895_ = lean_box(0);
v___x_3896_ = 0;
v___x_3897_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3885_, v___x_3892_, v_env_3890_, v_asyncMode_3894_, v___x_3895_, v___x_3896_);
v___x_3898_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3897_, v_tac_3882_);
lean_dec(v_tac_3882_);
lean_dec(v___x_3897_);
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
return v___x_3899_;
}
else
{
lean_object* v_val_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3928_; 
v_val_3900_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3902_ = v___x_3891_;
v_isShared_3903_ = v_isSharedCheck_3928_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_val_3900_);
lean_dec(v___x_3891_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3928_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3904_; uint8_t v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; uint8_t v___x_3909_; 
v___x_3904_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v___x_3905_ = 0;
v___x_3906_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3885_, v___x_3904_, v_env_3890_, v_val_3900_, v___x_3905_);
lean_dec(v_val_3900_);
lean_dec_ref(v_env_3890_);
v___x_3907_ = lean_unsigned_to_nat(0u);
v___x_3908_ = lean_array_get_size(v___x_3906_);
v___x_3909_ = lean_nat_dec_lt(v___x_3907_, v___x_3908_);
if (v___x_3909_ == 0)
{
lean_dec_ref(v___x_3906_);
lean_del_object(v___x_3902_);
lean_dec(v_tac_3882_);
goto v___jp_3887_;
}
else
{
lean_object* v___x_3910_; lean_object* v___x_3911_; uint8_t v___x_3912_; 
v___x_3910_ = lean_unsigned_to_nat(1u);
v___x_3911_ = lean_nat_sub(v___x_3908_, v___x_3910_);
v___x_3912_ = lean_nat_dec_le(v___x_3907_, v___x_3911_);
if (v___x_3912_ == 0)
{
lean_dec(v___x_3911_);
lean_dec_ref(v___x_3906_);
lean_del_object(v___x_3902_);
lean_dec(v_tac_3882_);
goto v___jp_3887_;
}
else
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4_spec__6___closed__1));
v___x_3914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3914_, 0, v_tac_3882_);
lean_ctor_set(v___x_3914_, 1, v___x_3913_);
v___x_3915_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(v___x_3906_, v___x_3914_, v___x_3907_, v___x_3911_);
lean_dec_ref_known(v___x_3914_, 2);
lean_dec_ref(v___x_3906_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_del_object(v___x_3902_);
goto v___jp_3887_;
}
else
{
lean_object* v_val_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3927_; 
v_val_3916_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3918_ = v___x_3915_;
v_isShared_3919_ = v_isSharedCheck_3927_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_val_3916_);
lean_dec(v___x_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3927_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v_snd_3920_; lean_object* v___x_3922_; 
v_snd_3920_ = lean_ctor_get(v_val_3916_, 1);
lean_inc(v_snd_3920_);
lean_dec(v_val_3916_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 0, v_snd_3920_);
v___x_3922_ = v___x_3918_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v_snd_3920_);
v___x_3922_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
lean_object* v___x_3924_; 
if (v_isShared_3903_ == 0)
{
lean_ctor_set_tag(v___x_3902_, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3922_);
v___x_3924_ = v___x_3902_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v___x_3922_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
}
}
}
}
v___jp_3887_:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3888_ = lean_box(0);
v___x_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
return v___x_3889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_tac_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(v_tac_3929_, v___y_3930_);
lean_dec(v___y_3930_);
return v_res_3932_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3934_; lean_object* v___x_3935_; 
v___x_3934_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_3935_ = l_Lean_stringToMessageData(v___x_3934_);
return v___x_3935_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3937_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_3938_ = l_Lean_stringToMessageData(v___x_3937_);
return v___x_3938_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3940_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_3941_ = l_Lean_stringToMessageData(v___x_3940_);
return v___x_3941_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; 
v___x_3943_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_3944_ = l_Lean_stringToMessageData(v___x_3943_);
return v___x_3944_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3946_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_3947_ = l_Lean_stringToMessageData(v___x_3946_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object* v___x_3954_, lean_object* v___x_3955_, lean_object* v___x_3956_, lean_object* v___x_3957_, lean_object* v_name_3958_, lean_object* v_decl_3959_, lean_object* v_stx_3960_, uint8_t v_kind_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v_nextMacroScope_3966_; lean_object* v_ngen_3967_; lean_object* v_auxDeclNGen_3968_; lean_object* v_traceState_3969_; lean_object* v_recordedDeps_3970_; lean_object* v_messages_3971_; lean_object* v_infoState_3972_; lean_object* v_snapshotTasks_3973_; lean_object* v___y_3974_; lean_object* v___y_3975_; lean_object* v___y_3976_; lean_object* v___y_3982_; lean_object* v___y_3983_; lean_object* v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4009_; lean_object* v___y_4025_; lean_object* v___y_4026_; lean_object* v___y_4027_; lean_object* v___y_4043_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v_name_4074_; lean_object* v___y_4075_; lean_object* v___y_4076_; uint8_t v___x_4131_; uint8_t v___x_4132_; 
v___x_4131_ = 0;
v___x_4132_ = l_Lean_instBEqAttributeKind_beq(v_kind_3961_, v___x_4131_);
if (v___x_4132_ == 0)
{
lean_object* v___x_4133_; 
lean_dec(v_stx_3960_);
lean_dec(v_decl_3959_);
lean_dec_ref(v___x_3957_);
lean_dec_ref(v___x_3956_);
lean_dec_ref(v___x_3955_);
lean_dec(v___x_3954_);
v___x_4133_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__6___redArg(v_name_3958_, v_kind_3961_, v___y_3962_, v___y_3963_);
return v___x_4133_;
}
else
{
goto v___jp_4090_;
}
v___jp_3965_:
{
lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
v___x_3977_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__3_spec__4___closed__1);
v___x_3978_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3978_, 0, v___y_3976_);
lean_ctor_set(v___x_3978_, 1, v_nextMacroScope_3966_);
lean_ctor_set(v___x_3978_, 2, v_ngen_3967_);
lean_ctor_set(v___x_3978_, 3, v_auxDeclNGen_3968_);
lean_ctor_set(v___x_3978_, 4, v_traceState_3969_);
lean_ctor_set(v___x_3978_, 5, v___x_3977_);
lean_ctor_set(v___x_3978_, 6, v_recordedDeps_3970_);
lean_ctor_set(v___x_3978_, 7, v_messages_3971_);
lean_ctor_set(v___x_3978_, 8, v_infoState_3972_);
lean_ctor_set(v___x_3978_, 9, v_snapshotTasks_3973_);
v___x_3979_ = lean_st_ref_put(v___y_3974_, v___x_3978_);
v___x_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3980_, 0, v___y_3975_);
return v___x_3980_;
}
v___jp_3981_:
{
lean_object* v___x_3984_; lean_object* v_env_3985_; lean_object* v_nextMacroScope_3986_; lean_object* v_ngen_3987_; lean_object* v_auxDeclNGen_3988_; lean_object* v_traceState_3989_; lean_object* v_recordedDeps_3990_; lean_object* v_messages_3991_; lean_object* v_infoState_3992_; lean_object* v_snapshotTasks_3993_; lean_object* v___x_3994_; lean_object* v_toEnvExtension_3995_; lean_object* v_addEntryFn_3996_; lean_object* v_asyncMode_3997_; uint8_t v_logWrites_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___f_4001_; uint8_t v___x_4002_; 
v___x_3984_ = lean_st_ref_take(v___y_3983_);
v_env_3985_ = lean_ctor_get(v___x_3984_, 0);
lean_inc_ref(v_env_3985_);
v_nextMacroScope_3986_ = lean_ctor_get(v___x_3984_, 1);
lean_inc(v_nextMacroScope_3986_);
v_ngen_3987_ = lean_ctor_get(v___x_3984_, 2);
lean_inc_ref(v_ngen_3987_);
v_auxDeclNGen_3988_ = lean_ctor_get(v___x_3984_, 3);
lean_inc_ref(v_auxDeclNGen_3988_);
v_traceState_3989_ = lean_ctor_get(v___x_3984_, 4);
lean_inc_ref(v_traceState_3989_);
v_recordedDeps_3990_ = lean_ctor_get(v___x_3984_, 6);
lean_inc_ref(v_recordedDeps_3990_);
v_messages_3991_ = lean_ctor_get(v___x_3984_, 7);
lean_inc_ref(v_messages_3991_);
v_infoState_3992_ = lean_ctor_get(v___x_3984_, 8);
lean_inc_ref(v_infoState_3992_);
v_snapshotTasks_3993_ = lean_ctor_get(v___x_3984_, 9);
lean_inc_ref(v_snapshotTasks_3993_);
lean_dec(v___x_3984_);
v___x_3994_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_3995_ = lean_ctor_get(v___x_3994_, 0);
v_addEntryFn_3996_ = lean_ctor_get(v___x_3994_, 3);
v_asyncMode_3997_ = lean_ctor_get(v_toEnvExtension_3995_, 2);
v_logWrites_3998_ = lean_ctor_get_uint8(v_toEnvExtension_3995_, sizeof(void*)*6);
v___x_3999_ = lean_box(0);
v___x_4000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4000_, 0, v_decl_3959_);
lean_ctor_set(v___x_4000_, 1, v___y_3982_);
lean_inc(v_addEntryFn_3996_);
v___f_4001_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_), 3, 2);
lean_closure_set(v___f_4001_, 0, v_addEntryFn_3996_);
lean_closure_set(v___f_4001_, 1, v___x_4000_);
v___x_4002_ = 1;
if (v_logWrites_3998_ == 0)
{
lean_object* v___x_4003_; 
lean_inc_ref(v_toEnvExtension_3995_);
v___x_4003_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3995_, v_env_3985_, v___f_4001_, v_asyncMode_3997_, v___x_3954_, v___x_4002_);
v_nextMacroScope_3966_ = v_nextMacroScope_3986_;
v_ngen_3967_ = v_ngen_3987_;
v_auxDeclNGen_3968_ = v_auxDeclNGen_3988_;
v_traceState_3969_ = v_traceState_3989_;
v_recordedDeps_3970_ = v_recordedDeps_3990_;
v_messages_3971_ = v_messages_3991_;
v_infoState_3972_ = v_infoState_3992_;
v_snapshotTasks_3973_ = v_snapshotTasks_3993_;
v___y_3974_ = v___y_3983_;
v___y_3975_ = v___x_3999_;
v___y_3976_ = v___x_4003_;
goto v___jp_3965_;
}
else
{
lean_object* v___x_4004_; lean_object* v___x_4005_; 
lean_inc_ref_n(v_toEnvExtension_3995_, 2);
v___x_4004_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3995_, v_env_3985_);
lean_dec_ref(v_env_3985_);
v___x_4005_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3995_, v___x_4004_, v___f_4001_, v_asyncMode_3997_, v___x_3954_, v___x_4002_);
v_nextMacroScope_3966_ = v_nextMacroScope_3986_;
v_ngen_3967_ = v_ngen_3987_;
v_auxDeclNGen_3968_ = v_auxDeclNGen_3988_;
v_traceState_3969_ = v_traceState_3989_;
v_recordedDeps_3970_ = v_recordedDeps_3990_;
v_messages_3971_ = v_messages_3991_;
v_infoState_3972_ = v_infoState_3992_;
v_snapshotTasks_3973_ = v_snapshotTasks_3993_;
v___y_3974_ = v___y_3983_;
v___y_3975_ = v___x_3999_;
v___y_3976_ = v___x_4005_;
goto v___jp_3965_;
}
}
v___jp_4006_:
{
lean_object* v___x_4010_; lean_object* v_a_4011_; 
lean_inc(v_decl_3959_);
v___x_4010_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(v_decl_3959_, v___y_4009_);
v_a_4011_ = lean_ctor_get(v___x_4010_, 0);
lean_inc(v_a_4011_);
lean_dec_ref(v___x_4010_);
if (lean_obj_tag(v_a_4011_) == 1)
{
lean_object* v_val_4012_; lean_object* v___x_4013_; uint8_t v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; 
lean_dec_ref(v___y_4007_);
lean_dec(v___x_3954_);
v_val_4012_ = lean_ctor_get(v_a_4011_, 0);
lean_inc(v_val_4012_);
lean_dec_ref_known(v_a_4011_, 1);
v___x_4013_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4014_ = 0;
v___x_4015_ = l_Lean_MessageData_ofConstName(v_decl_3959_, v___x_4014_);
v___x_4016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4013_);
lean_ctor_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4016_);
lean_ctor_set(v___x_4018_, 1, v___x_4017_);
v___x_4019_ = l_Lean_stringToMessageData(v_val_4012_);
v___x_4020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4020_, 0, v___x_4018_);
lean_ctor_set(v___x_4020_, 1, v___x_4019_);
v___x_4021_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4020_);
lean_ctor_set(v___x_4022_, 1, v___x_4021_);
v___x_4023_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_4022_, v___y_4008_, v___y_4009_);
return v___x_4023_;
}
else
{
lean_dec(v_a_4011_);
v___y_3982_ = v___y_4007_;
v___y_3983_ = v___y_4009_;
goto v___jp_3981_;
}
}
v___jp_4024_:
{
lean_object* v___x_4028_; lean_object* v_env_4029_; lean_object* v___x_4030_; 
v___x_4028_ = lean_st_ref_get(v___y_4027_);
v_env_4029_ = lean_ctor_get(v___x_4028_, 0);
lean_inc_ref(v_env_4029_);
lean_dec(v___x_4028_);
lean_inc(v_decl_3959_);
v___x_4030_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_4029_, v_decl_3959_);
if (lean_obj_tag(v___x_4030_) == 1)
{
lean_object* v_val_4031_; lean_object* v___x_4032_; uint8_t v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
lean_dec_ref(v___y_4025_);
lean_dec(v___x_3954_);
v_val_4031_ = lean_ctor_get(v___x_4030_, 0);
lean_inc(v_val_4031_);
lean_dec_ref_known(v___x_4030_, 1);
v___x_4032_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4033_ = 0;
v___x_4034_ = l_Lean_MessageData_ofConstName(v_decl_3959_, v___x_4033_);
v___x_4035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4032_);
lean_ctor_set(v___x_4035_, 1, v___x_4034_);
v___x_4036_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_);
v___x_4037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4035_);
lean_ctor_set(v___x_4037_, 1, v___x_4036_);
v___x_4038_ = l_Lean_MessageData_ofConstName(v_val_4031_, v___x_4033_);
v___x_4039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4037_);
lean_ctor_set(v___x_4039_, 1, v___x_4038_);
v___x_4040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4039_);
lean_ctor_set(v___x_4040_, 1, v___x_4032_);
v___x_4041_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_stx_3960_, v___x_4040_, v___y_4026_, v___y_4027_);
lean_dec(v_stx_3960_);
return v___x_4041_;
}
else
{
lean_dec(v___x_4030_);
lean_dec(v_stx_3960_);
v___y_4007_ = v___y_4025_;
v___y_4008_ = v___y_4026_;
v___y_4009_ = v___y_4027_;
goto v___jp_4006_;
}
}
v___jp_4042_:
{
lean_object* v___x_4046_; lean_object* v_env_4047_; lean_object* v___x_4048_; 
v___x_4046_ = lean_st_ref_get(v___y_4045_);
v_env_4047_ = lean_ctor_get(v___x_4046_, 0);
lean_inc_ref(v_env_4047_);
lean_dec(v___x_4046_);
v___x_4048_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4047_, v_decl_3959_);
lean_dec_ref(v_env_4047_);
if (lean_obj_tag(v___x_4048_) == 1)
{
lean_object* v_val_4049_; lean_object* v___x_4050_; lean_object* v_env_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; uint8_t v___x_4054_; 
lean_dec_ref(v___y_4043_);
lean_dec(v___x_3954_);
v_val_4049_ = lean_ctor_get(v___x_4048_, 0);
lean_inc(v_val_4049_);
lean_dec_ref_known(v___x_4048_, 1);
v___x_4050_ = lean_st_ref_get(v___y_4045_);
v_env_4051_ = lean_ctor_get(v___x_4050_, 0);
lean_inc_ref(v_env_4051_);
lean_dec(v___x_4050_);
v___x_4052_ = l_Lean_Environment_allImportedModuleNames(v_env_4051_);
lean_dec_ref(v_env_4051_);
v___x_4053_ = lean_array_get_size(v___x_4052_);
v___x_4054_ = lean_nat_dec_lt(v_val_4049_, v___x_4053_);
if (v___x_4054_ == 0)
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; 
lean_dec_ref(v___x_4052_);
lean_dec(v_val_4049_);
v___x_4055_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4056_ = l_Lean_MessageData_ofConstName(v_decl_3959_, v___x_4054_);
v___x_4057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4057_, 0, v___x_4055_);
lean_ctor_set(v___x_4057_, 1, v___x_4056_);
v___x_4058_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4057_);
lean_ctor_set(v___x_4059_, 1, v___x_4058_);
v___x_4060_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_stx_3960_, v___x_4059_, v___y_4044_, v___y_4045_);
lean_dec(v_stx_3960_);
return v___x_4060_;
}
else
{
lean_object* v___x_4061_; lean_object* v___x_4062_; uint8_t v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; 
v___x_4061_ = lean_array_fget(v___x_4052_, v_val_4049_);
lean_dec(v_val_4049_);
lean_dec_ref(v___x_4052_);
v___x_4062_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4063_ = 0;
v___x_4064_ = l_Lean_MessageData_ofConstName(v_decl_3959_, v___x_4063_);
v___x_4065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4062_);
lean_ctor_set(v___x_4065_, 1, v___x_4064_);
v___x_4066_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4065_);
lean_ctor_set(v___x_4067_, 1, v___x_4066_);
v___x_4068_ = l_Lean_MessageData_ofName(v___x_4061_);
v___x_4069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4067_);
lean_ctor_set(v___x_4069_, 1, v___x_4068_);
v___x_4070_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4069_);
lean_ctor_set(v___x_4071_, 1, v___x_4070_);
v___x_4072_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_stx_3960_, v___x_4071_, v___y_4044_, v___y_4045_);
lean_dec(v_stx_3960_);
return v___x_4072_;
}
}
else
{
lean_dec(v___x_4048_);
v___y_4025_ = v___y_4043_;
v___y_4026_ = v___y_4044_;
v___y_4027_ = v___y_4045_;
goto v___jp_4024_;
}
}
v___jp_4073_:
{
lean_object* v___x_4077_; lean_object* v_env_4078_; uint8_t v___x_4079_; lean_object* v___x_4080_; 
v___x_4077_ = lean_st_ref_get(v___y_4076_);
v_env_4078_ = lean_ctor_get(v___x_4077_, 0);
lean_inc_ref(v_env_4078_);
lean_dec(v___x_4077_);
v___x_4079_ = 0;
lean_inc(v_decl_3959_);
v___x_4080_ = l_Lean_Environment_find_x3f(v_env_4078_, v_decl_3959_, v___x_4079_);
if (lean_obj_tag(v___x_4080_) == 0)
{
v___y_4025_ = v_name_4074_;
v___y_4026_ = v___y_4075_;
v___y_4027_ = v___y_4076_;
goto v___jp_4024_;
}
else
{
lean_object* v___x_4081_; lean_object* v_env_4082_; uint8_t v___x_4083_; 
lean_dec_ref_known(v___x_4080_, 1);
v___x_4081_ = lean_st_ref_get(v___y_4076_);
v_env_4082_ = lean_ctor_get(v___x_4081_, 0);
lean_inc_ref(v_env_4082_);
lean_dec(v___x_4081_);
v___x_4083_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_4082_, v_decl_3959_);
if (v___x_4083_ == 0)
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
lean_dec_ref(v_name_4074_);
lean_dec(v___x_3954_);
v___x_4084_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4085_ = l_Lean_MessageData_ofConstName(v_decl_3959_, v___x_4083_);
v___x_4086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4084_);
lean_ctor_set(v___x_4086_, 1, v___x_4085_);
v___x_4087_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_4088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4088_, 0, v___x_4086_);
lean_ctor_set(v___x_4088_, 1, v___x_4087_);
v___x_4089_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__4___redArg(v_stx_3960_, v___x_4088_, v___y_4075_, v___y_4076_);
lean_dec(v_stx_3960_);
return v___x_4089_;
}
else
{
v___y_4043_ = v_name_4074_;
v___y_4044_ = v___y_4075_;
v___y_4045_ = v___y_4076_;
goto v___jp_4042_;
}
}
}
v___jp_4090_:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; uint8_t v___x_4093_; 
v___x_4091_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__10_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_4092_ = l_Lean_Name_mkStr4(v___x_3955_, v___x_3956_, v___x_4091_, v___x_3957_);
lean_inc(v_stx_3960_);
v___x_4093_ = l_Lean_Syntax_isOfKind(v_stx_3960_, v___x_4092_);
lean_dec(v___x_4092_);
if (v___x_4093_ == 0)
{
lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
lean_dec(v_stx_3960_);
lean_dec(v_decl_3959_);
lean_dec(v___x_3954_);
v___x_4094_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_4095_ = l_Lean_MessageData_ofName(v_name_3958_);
v___x_4096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4094_);
lean_ctor_set(v___x_4096_, 1, v___x_4095_);
v___x_4097_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_4098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4096_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
v___x_4099_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_4098_, v___y_3962_, v___y_3963_);
v_a_4100_ = lean_ctor_get(v___x_4099_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4099_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4099_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4099_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
else
{
lean_object* v___x_4108_; lean_object* v_name_4109_; lean_object* v___x_4110_; uint8_t v___x_4111_; 
v___x_4108_ = lean_unsigned_to_nat(1u);
v_name_4109_ = l_Lean_Syntax_getArg(v_stx_3960_, v___x_4108_);
v___x_4110_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
lean_inc(v_name_4109_);
v___x_4111_ = l_Lean_Syntax_isOfKind(v_name_4109_, v___x_4110_);
if (v___x_4111_ == 0)
{
lean_object* v___x_4112_; uint8_t v___x_4113_; 
v___x_4112_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
lean_inc(v_name_4109_);
v___x_4113_ = l_Lean_Syntax_isOfKind(v_name_4109_, v___x_4112_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
lean_dec(v_name_4109_);
lean_dec(v_stx_3960_);
lean_dec(v_decl_3959_);
lean_dec(v___x_3954_);
v___x_4114_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__12_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_4115_ = l_Lean_MessageData_ofName(v_name_3958_);
v___x_4116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4114_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__14_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_4118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4116_);
lean_ctor_set(v___x_4118_, 1, v___x_4117_);
v___x_4119_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_4118_, v___y_3962_, v___y_3963_);
v_a_4120_ = lean_ctor_get(v___x_4119_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4119_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4119_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4119_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
else
{
lean_object* v___x_4128_; lean_object* v___x_4129_; 
lean_dec(v_name_3958_);
v___x_4128_ = l_Lean_TSyntax_getId(v_name_4109_);
lean_dec(v_name_4109_);
v___x_4129_ = l_Lean_Name_toString(v___x_4128_, v___x_4111_);
v_name_4074_ = v___x_4129_;
v___y_4075_ = v___y_3962_;
v___y_4076_ = v___y_3963_;
goto v___jp_4073_;
}
}
else
{
lean_object* v___x_4130_; 
lean_dec(v_name_3958_);
v___x_4130_ = l_Lean_TSyntax_getString(v_name_4109_);
lean_dec(v_name_4109_);
v_name_4074_ = v___x_4130_;
v___y_4075_ = v___y_3962_;
v___y_4076_ = v___y_3963_;
goto v___jp_4073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object* v___x_4134_, lean_object* v___x_4135_, lean_object* v___x_4136_, lean_object* v___x_4137_, lean_object* v_name_4138_, lean_object* v_decl_4139_, lean_object* v_stx_4140_, lean_object* v_kind_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_){
_start:
{
uint8_t v_kind_boxed_4145_; lean_object* v_res_4146_; 
v_kind_boxed_4145_ = lean_unbox(v_kind_4141_);
v_res_4146_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(v___x_4134_, v___x_4135_, v___x_4136_, v___x_4137_, v_name_4138_, v_decl_4139_, v_stx_4140_, v_kind_boxed_4145_, v___y_4142_, v___y_4143_);
lean_dec(v___y_4143_);
lean_dec_ref(v___y_4142_);
return v_res_4146_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4158_ = lean_unsigned_to_nat(3374007381u);
v___x_4159_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_4160_ = l_Lean_Name_num___override(v___x_4159_, v___x_4158_);
return v___x_4160_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___x_4161_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_4162_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4163_ = l_Lean_Name_str___override(v___x_4162_, v___x_4161_);
return v___x_4163_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4164_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_));
v___x_4165_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4166_ = l_Lean_Name_str___override(v___x_4165_, v___x_4164_);
return v___x_4166_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4167_ = lean_unsigned_to_nat(2u);
v___x_4168_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4169_ = l_Lean_Name_num___override(v___x_4168_, v___x_4167_);
return v___x_4169_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4171_; lean_object* v___x_4172_; lean_object* v_name_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v___x_4171_ = 2;
v___x_4172_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v_name_4173_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4174_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4175_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4175_, 0, v___x_4174_);
lean_ctor_set(v___x_4175_, 1, v_name_4173_);
lean_ctor_set(v___x_4175_, 2, v___x_4172_);
lean_ctor_set_uint8(v___x_4175_, sizeof(void*)*3, v___x_4171_);
return v___x_4175_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4176_; lean_object* v___f_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; 
v___f_4176_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___f_4177_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4178_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4179_, 0, v___x_4178_);
lean_ctor_set(v___x_4179_, 1, v___f_4177_);
lean_ctor_set(v___x_4179_, 2, v___f_4176_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4182_ = l_Lean_registerBuiltinAttribute(v___x_4181_);
return v___x_4182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object* v_a_4183_){
_start:
{
lean_object* v_res_4184_; 
v_res_4184_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_();
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0(lean_object* v_tac_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
lean_object* v___x_4189_; 
v___x_4189_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(v_tac_4185_, v___y_4187_);
return v___x_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___boxed(lean_object* v_tac_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_){
_start:
{
lean_object* v_res_4194_; 
v_res_4194_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0(v_tac_4190_, v___y_4191_, v___y_4192_);
lean_dec(v___y_4192_);
lean_dec_ref(v___y_4191_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_4195_, lean_object* v_k_4196_, lean_object* v_x_4197_, lean_object* v_x_4198_, lean_object* v_x_4199_){
_start:
{
lean_object* v___x_4200_; 
v___x_4200_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_4195_, v_k_4196_, v_x_4197_, v_x_4198_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_4201_, lean_object* v_k_4202_, lean_object* v_x_4203_, lean_object* v_x_4204_, lean_object* v_x_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0(v_as_4201_, v_k_4202_, v_x_4203_, v_x_4204_, v_x_4205_);
lean_dec_ref(v_k_4202_);
lean_dec_ref(v_as_4201_);
return v_res_4206_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4208_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0));
v___x_4209_ = l_Lean_stringToMessageData(v___x_4208_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0(lean_object* v___x_4210_, lean_object* v___x_4211_, lean_object* v_catName_4212_, lean_object* v_declName_4213_, uint8_t v___builtIn_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_){
_start:
{
lean_object* v___x_4218_; uint8_t v___x_4219_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4244_; lean_object* v___y_4245_; 
v___x_4218_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_isTactic___closed__1));
v___x_4219_ = lean_name_eq(v_catName_4212_, v___x_4218_);
if (v___x_4219_ == 0)
{
lean_object* v___x_4261_; lean_object* v_env_4262_; lean_object* v___x_4263_; 
v___x_4261_ = lean_st_ref_get(v___y_4216_);
v_env_4262_ = lean_ctor_get(v___x_4261_, 0);
lean_inc_ref(v_env_4262_);
lean_dec(v___x_4261_);
lean_inc(v_declName_4213_);
v___x_4263_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_4262_, v_declName_4213_);
if (lean_obj_tag(v___x_4263_) == 0)
{
v___y_4244_ = v___y_4215_;
v___y_4245_ = v___y_4216_;
goto v___jp_4243_;
}
else
{
lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
lean_dec_ref_known(v___x_4263_, 1);
lean_dec(v___x_4211_);
lean_dec(v___x_4210_);
v___x_4264_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4265_ = l_Lean_MessageData_ofConstName(v_declName_4213_, v___x_4219_);
v___x_4266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4264_);
lean_ctor_set(v___x_4266_, 1, v___x_4265_);
v___x_4267_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_4268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4266_);
lean_ctor_set(v___x_4268_, 1, v___x_4267_);
v___x_4269_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_4268_, v___y_4215_, v___y_4216_);
return v___x_4269_;
}
}
else
{
lean_object* v___x_4270_; lean_object* v___x_4271_; 
lean_dec(v_declName_4213_);
lean_dec(v___x_4211_);
lean_dec(v___x_4210_);
v___x_4270_ = lean_box(0);
v___x_4271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4270_);
return v___x_4271_;
}
v___jp_4220_:
{
lean_object* v___x_4223_; lean_object* v_env_4224_; lean_object* v___x_4225_; lean_object* v_toEnvExtension_4226_; lean_object* v_asyncMode_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v___x_4223_ = lean_st_ref_get(v___y_4222_);
v_env_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc_ref(v_env_4224_);
lean_dec(v___x_4223_);
v___x_4225_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_4226_ = lean_ctor_get(v___x_4225_, 0);
v_asyncMode_4227_ = lean_ctor_get(v_toEnvExtension_4226_, 2);
v___x_4228_ = lean_box(0);
v___x_4229_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4210_, v___x_4225_, v_env_4224_, v_asyncMode_4227_, v___x_4228_, v___x_4219_);
v___x_4230_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_4229_, v_declName_4213_);
lean_dec(v___x_4229_);
if (lean_obj_tag(v___x_4230_) == 1)
{
lean_object* v_val_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
v_val_4231_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_val_4231_);
lean_dec_ref_known(v___x_4230_, 1);
v___x_4232_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4233_ = l_Lean_MessageData_ofConstName(v_declName_4213_, v___x_4219_);
v___x_4234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4234_, 0, v___x_4232_);
lean_ctor_set(v___x_4234_, 1, v___x_4233_);
v___x_4235_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1_once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1);
v___x_4236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4234_);
lean_ctor_set(v___x_4236_, 1, v___x_4235_);
v___x_4237_ = l_Lean_stringToMessageData(v_val_4231_);
v___x_4238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4236_);
lean_ctor_set(v___x_4238_, 1, v___x_4237_);
v___x_4239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4239_, 0, v___x_4238_);
lean_ctor_set(v___x_4239_, 1, v___x_4232_);
v___x_4240_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_4239_, v___y_4221_, v___y_4222_);
return v___x_4240_;
}
else
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
lean_dec(v___x_4230_);
lean_dec(v_declName_4213_);
v___x_4241_ = lean_box(0);
v___x_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4241_);
return v___x_4242_;
}
}
v___jp_4243_:
{
lean_object* v___x_4246_; lean_object* v_env_4247_; lean_object* v___x_4248_; lean_object* v_toEnvExtension_4249_; lean_object* v_asyncMode_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4246_ = lean_st_ref_get(v___y_4245_);
v_env_4247_ = lean_ctor_get(v___x_4246_, 0);
lean_inc_ref(v_env_4247_);
lean_dec(v___x_4246_);
v___x_4248_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_4249_ = lean_ctor_get(v___x_4248_, 0);
v_asyncMode_4250_ = lean_ctor_get(v_toEnvExtension_4249_, 2);
v___x_4251_ = lean_box(0);
v___x_4252_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4211_, v___x_4248_, v_env_4247_, v_asyncMode_4250_, v___x_4251_, v___x_4219_);
v___x_4253_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_4252_, v_declName_4213_);
lean_dec(v___x_4252_);
if (lean_obj_tag(v___x_4253_) == 1)
{
lean_object* v_val_4254_; 
v_val_4254_ = lean_ctor_get(v___x_4253_, 0);
lean_inc(v_val_4254_);
lean_dec_ref_known(v___x_4253_, 1);
if (lean_obj_tag(v_val_4254_) == 0)
{
lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; 
lean_dec_ref_known(v_val_4254_, 5);
lean_dec(v___x_4210_);
v___x_4255_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__1___closed__1);
v___x_4256_ = l_Lean_MessageData_ofConstName(v_declName_4213_, v___x_4219_);
v___x_4257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4255_);
lean_ctor_set(v___x_4257_, 1, v___x_4256_);
v___x_4258_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2___closed__16_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_);
v___x_4259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4257_);
lean_ctor_set(v___x_4259_, 1, v___x_4258_);
v___x_4260_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2__spec__0___redArg(v___x_4259_, v___y_4244_, v___y_4245_);
return v___x_4260_;
}
else
{
v___y_4221_ = v___y_4244_;
v___y_4222_ = v___y_4245_;
goto v___jp_4220_;
}
}
else
{
lean_dec(v___x_4253_);
v___y_4221_ = v___y_4244_;
v___y_4222_ = v___y_4245_;
goto v___jp_4220_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___boxed(lean_object* v___x_4272_, lean_object* v___x_4273_, lean_object* v_catName_4274_, lean_object* v_declName_4275_, lean_object* v___builtIn_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_){
_start:
{
uint8_t v___builtIn_boxed_4280_; lean_object* v_res_4281_; 
v___builtIn_boxed_4280_ = lean_unbox(v___builtIn_4276_);
v_res_4281_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0(v___x_4272_, v___x_4273_, v_catName_4274_, v_declName_4275_, v___builtIn_boxed_4280_, v___y_4277_, v___y_4278_);
lean_dec(v___y_4278_);
lean_dec_ref(v___y_4277_);
lean_dec(v_catName_4274_);
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4286_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics));
v___x_4287_ = l_Lean_Parser_registerParserAttributeHook(v___x_4286_);
return v___x_4287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2____boxed(lean_object* v_a_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_();
return v_res_4289_;
}
}
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticAlternativeExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticAlternativeExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2574034933____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_knownTacticTagExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_knownTacticTagExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticTagExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticTagExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticDocExtExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticDocExtExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticNameExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticNameExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Attr(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* initialize_Lean_Parser_Attr(uint8_t builtin);
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Tactic_Doc(builtin);
}
#ifdef __cplusplus
}
#endif
