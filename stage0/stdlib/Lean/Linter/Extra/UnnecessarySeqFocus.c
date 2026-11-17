// Lean compiler output
// Module: Lean.Linter.Extra.UnnecessarySeqFocus
// Imports: public import Lean.Elab.Command public import Lean.Linter.Basic
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_instOrdNat___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instOrdInt___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_lexOrd___redArg(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_instMonadST___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_runST___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unnecessarySeqFocus"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(33, 183, 205, 183, 92, 15, 88, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(117, 28, 30, 68, 103, 193, 126, 138)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "enable the 'unnecessary <;>' linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Extra"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 33, 172, 180, 73, 123, 191, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(105, 61, 181, 137, 182, 231, 65, 137)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 177, 69, 1, 132, 178, 174, 219)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_linter_extra_unnecessarySeqFocus;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3107221289____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3107221289____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_multigoalKindsRef;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "tacticNext_=>_"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__2_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 21, 53, 2, 17, 158, 67, 66)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "allGoals"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 66, 138, 83, 251, 171, 29, 196)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "anyGoals"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 19, 163, 3, 232, 106, 175, 32)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "case"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 244, 120, 128, 139, 198, 139, 51)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__10_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "case'"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__10_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__10_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__10_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 21, 185, 205, 238, 88, 7, 106)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Conv"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__13_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "convNext__=>_"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__13_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__13_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__13_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 255, 234, 0, 142, 69, 158, 51)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__4_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(80, 55, 182, 70, 128, 26, 115, 15)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(97, 41, 143, 75, 238, 57, 26, 246)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(241, 23, 91, 126, 214, 77, 25, 163)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__10_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 157, 98, 160, 189, 128, 94, 31)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__19_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "rotateLeft"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__19_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__19_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__19_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 201, 198, 124, 10, 198, 250, 123)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__21_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "rotateRight"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__21_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__21_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__21_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(98, 177, 153, 112, 69, 167, 66, 136)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__23_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "show"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__23_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__23_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__23_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 147, 62, 103, 130, 224, 84, 63)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__25_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticStop_"};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__25_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__25_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__25_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 187, 217, 116, 133, 153, 2, 108)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__27_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*14, .m_other = 0, .m_tag = 246}, .m_size = 14, .m_capacity = 14, .m_data = {((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__11_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__14_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__15_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__16_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__17_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__18_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__20_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__22_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__24_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__26_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__27_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__27_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_UnnecessarySeqFocus_isMultigoalKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isMultigoalKind___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_<;>_"};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__0_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value_aux_2),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__0_value),LEAN_SCALAR_PTR_LITERAL(31, 118, 44, 159, 195, 11, 47, 176)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1_value;
static const lean_string_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "conv_<;>_"};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__2_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__0_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__1_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__12_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value_aux_3),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 57, 152, 10, 187, 180, 111, 39)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3_value;
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___boxed(lean_object*);
static lean_once_cell_t l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__0;
static lean_once_cell_t l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqRange_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__2_value;
static const lean_closure_object l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instHashableRange_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getPath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___closed__0;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__3_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__4 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__1_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__4_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__5 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__5_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__6 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__7 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__6_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__8 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__8_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__9 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__9_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__10 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__0_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__10_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__11 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__0;
static lean_once_cell_t l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__13___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Used `tac1 <;> tac2` where `(tac1; tac2)` would suffice"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__0(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instOrdNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instOrdInt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__6(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__0_value;
static const lean_array_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__0_value;
static const lean_closure_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__0_value)} };
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__1_value;
static const lean_string_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "UnnecessarySeqFocus"};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__2_value;
static const lean_string_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "unnecessarySeqFocusLinter"};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__3_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_2),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(115, 158, 167, 49, 144, 57, 132, 153)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value_aux_3),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__3_value),LEAN_SCALAR_PTR_LITERAL(91, 176, 195, 221, 155, 62, 224, 143)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__1_value),((lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__4_value)}};
static const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__5 = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter = (const lean_object*)&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3917858151____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3917858151____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_));
v___x_59_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_));
v___x_60_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_));
v___x_61_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4__spec__0(v___x_58_, v___x_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4____boxed(lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_();
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3107221289____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = l_Lean_NameSet_empty;
v___x_66_ = lean_st_mk_ref(v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3107221289____hygCtx___hyg_2____boxed(lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3107221289____hygCtx___hyg_2_();
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKind(lean_object* v_k_70_){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_72_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_multigoalKindsRef;
v___x_73_ = lean_st_ref_take(v___x_72_);
v___x_74_ = l_Lean_NameSet_insert(v___x_73_, v_k_70_);
v___x_75_ = lean_st_ref_put(v___x_72_, v___x_74_);
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKind___boxed(lean_object* v_k_77_, lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKind(v_k_77_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds_spec__0(lean_object* v_as_80_, size_t v_i_81_, size_t v_stop_82_, lean_object* v_b_83_){
_start:
{
uint8_t v___x_84_; 
v___x_84_ = lean_usize_dec_eq(v_i_81_, v_stop_82_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; size_t v___x_87_; size_t v___x_88_; 
v___x_85_ = lean_array_uget_borrowed(v_as_80_, v_i_81_);
lean_inc(v___x_85_);
v___x_86_ = l_Lean_NameSet_insert(v_b_83_, v___x_85_);
v___x_87_ = ((size_t)1ULL);
v___x_88_ = lean_usize_add(v_i_81_, v___x_87_);
v_i_81_ = v___x_88_;
v_b_83_ = v___x_86_;
goto _start;
}
else
{
return v_b_83_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds_spec__0___boxed(lean_object* v_as_90_, lean_object* v_i_91_, lean_object* v_stop_92_, lean_object* v_b_93_){
_start:
{
size_t v_i_boxed_94_; size_t v_stop_boxed_95_; lean_object* v_res_96_; 
v_i_boxed_94_ = lean_unbox_usize(v_i_91_);
lean_dec(v_i_91_);
v_stop_boxed_95_ = lean_unbox_usize(v_stop_92_);
lean_dec(v_stop_92_);
v_res_96_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds_spec__0(v_as_90_, v_i_boxed_94_, v_stop_boxed_95_, v_b_93_);
lean_dec_ref(v_as_90_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds(lean_object* v_ks_97_){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___y_102_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_99_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_multigoalKindsRef;
v___x_100_ = lean_st_ref_take(v___x_99_);
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = lean_array_get_size(v_ks_97_);
v___x_107_ = lean_nat_dec_lt(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
v___y_102_ = v___x_100_;
goto v___jp_101_;
}
else
{
size_t v___x_108_; size_t v___x_109_; lean_object* v___x_110_; 
v___x_108_ = ((size_t)0ULL);
v___x_109_ = lean_usize_of_nat(v___x_106_);
v___x_110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds_spec__0(v_ks_97_, v___x_108_, v___x_109_, v___x_100_);
v___y_102_ = v___x_110_;
goto v___jp_101_;
}
v___jp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_st_ref_put(v___x_99_, v___y_102_);
v___x_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds___boxed(lean_object* v_ks_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds(v_ks_111_);
lean_dec_ref(v_ks_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn___closed__27_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_));
v___x_234_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_addBuiltinMultigoalKinds(v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2____boxed(lean_object* v_a_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_();
return v_res_236_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_UnnecessarySeqFocus_isMultigoalKind(lean_object* v_k_237_){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_239_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_multigoalKindsRef;
v___x_240_ = lean_st_ref_get(v___x_239_);
v___x_241_ = l_Lean_NameSet_contains(v___x_240_, v_k_237_);
lean_dec(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isMultigoalKind___boxed(lean_object* v_k_242_, lean_object* v_a_243_){
_start:
{
uint8_t v_res_244_; lean_object* v_r_245_; 
v_res_244_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_isMultigoalKind(v_k_242_);
lean_dec(v_k_242_);
v_r_245_ = lean_box(v_res_244_);
return v_r_245_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus(lean_object* v_k_259_){
_start:
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1));
v___x_261_ = lean_name_eq(v_k_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3));
v___x_263_ = lean_name_eq(v_k_259_, v___x_262_);
return v___x_263_;
}
else
{
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___boxed(lean_object* v_k_264_){
_start:
{
uint8_t v_res_265_; lean_object* v_r_266_; 
v_res_265_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus(v_k_264_);
lean_dec(v_k_264_);
v_r_266_ = lean_box(v_res_265_);
return v_r_266_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__0(void){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_instMonadST___redArg();
return v___x_267_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__1(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_obj_once(&l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__0, &l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__0_once, _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__0);
v___x_269_ = l_StateRefT_x27_instMonad___redArg(v___x_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___lam__0___boxed(lean_object* v_x_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___lam__0(v_x_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg(lean_object* v_stx_277_, lean_object* v_a_278_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__1, &l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__1_once, _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__1);
if (lean_obj_tag(v_stx_277_) == 1)
{
lean_object* v_kind_281_; lean_object* v_args_282_; lean_object* v___f_283_; lean_object* v___y_285_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_305_; uint8_t v___x_306_; 
v_kind_281_ = lean_ctor_get(v_stx_277_, 1);
v_args_282_ = lean_ctor_get(v_stx_277_, 2);
lean_inc_ref(v_args_282_);
v___f_283_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___lam__0___boxed), 4, 0);
v___x_294_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__2));
v___x_295_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___closed__3));
v___x_305_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1));
v___x_306_ = lean_name_eq(v_kind_281_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3));
v___x_308_ = lean_name_eq(v_kind_281_, v___x_307_);
if (v___x_308_ == 0)
{
lean_dec_ref_known(v_stx_277_, 3);
v___y_285_ = v_a_278_;
goto v___jp_284_;
}
else
{
goto v___jp_296_;
}
}
else
{
goto v___jp_296_;
}
v___jp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = lean_array_get_size(v_args_282_);
v___x_288_ = lean_box(0);
v___x_289_ = lean_nat_dec_lt(v___x_286_, v___x_287_);
if (v___x_289_ == 0)
{
lean_dec_ref(v___f_283_);
lean_dec_ref(v_args_282_);
return v___x_288_;
}
else
{
size_t v___x_290_; size_t v___x_291_; lean_object* v___x_628__overap_292_; lean_object* v___x_293_; 
v___x_290_ = ((size_t)0ULL);
v___x_291_ = lean_usize_of_nat(v___x_287_);
v___x_628__overap_292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_280_, v___f_283_, v_args_282_, v___x_290_, v___x_291_, v___x_288_);
lean_inc(v___y_285_);
v___x_293_ = lean_apply_2(v___x_628__overap_292_, v___y_285_, lean_box(0));
return v___x_293_;
}
}
v___jp_296_:
{
uint8_t v___x_297_; lean_object* v___x_298_; 
v___x_297_ = 1;
v___x_298_ = l_Lean_Syntax_getRange_x3f(v_stx_277_, v___x_297_);
if (lean_obj_tag(v___x_298_) == 1)
{
lean_object* v_val_299_; lean_object* v___x_300_; uint8_t v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_val_299_ = lean_ctor_get(v___x_298_, 0);
lean_inc(v_val_299_);
lean_dec_ref_known(v___x_298_, 1);
v___x_300_ = lean_st_ref_take(v_a_278_);
v___x_301_ = 0;
v___x_302_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_302_, 0, v_stx_277_);
lean_ctor_set_uint8(v___x_302_, sizeof(void*)*1, v___x_301_);
v___x_303_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_294_, v___x_295_, v___x_300_, v_val_299_, v___x_302_);
v___x_304_ = lean_st_ref_put(v_a_278_, v___x_303_);
v___y_285_ = v_a_278_;
goto v___jp_284_;
}
else
{
lean_dec(v___x_298_);
lean_dec_ref_known(v_stx_277_, 3);
v___y_285_ = v_a_278_;
goto v___jp_284_;
}
}
}
else
{
lean_object* v___x_309_; 
lean_dec(v_stx_277_);
v___x_309_ = lean_box(0);
return v___x_309_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___lam__0(lean_object* v_x_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg(v___y_311_, v___y_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg___boxed(lean_object* v_stx_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg(v_stx_315_, v_a_316_);
lean_dec(v_a_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics(lean_object* v_00_u03c9_319_, lean_object* v_stx_320_, lean_object* v_a_321_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg(v_stx_320_, v_a_321_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___boxed(lean_object* v_00_u03c9_324_, lean_object* v_stx_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics(v_00_u03c9_324_, v_stx_325_, v_a_326_);
lean_dec(v_a_326_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getPath(lean_object* v_x_329_, lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
if (lean_obj_tag(v_x_331_) == 0)
{
lean_object* v___x_332_; 
lean_dec_ref(v_x_330_);
v___x_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_332_, 0, v_x_329_);
return v___x_332_;
}
else
{
lean_object* v_head_333_; lean_object* v_tail_334_; lean_object* v_fst_335_; lean_object* v_snd_336_; lean_object* v_size_337_; uint8_t v___x_338_; 
lean_dec_ref(v_x_329_);
v_head_333_ = lean_ctor_get(v_x_331_, 0);
v_tail_334_ = lean_ctor_get(v_x_331_, 1);
v_fst_335_ = lean_ctor_get(v_head_333_, 0);
v_snd_336_ = lean_ctor_get(v_head_333_, 1);
v_size_337_ = lean_ctor_get(v_x_330_, 2);
v___x_338_ = lean_nat_dec_eq(v_size_337_, v_fst_335_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
lean_dec_ref(v_x_330_);
v___x_339_ = lean_box(0);
return v___x_339_;
}
else
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_341_ = l_Lean_PersistentArray_get_x21___redArg(v___x_340_, v_x_330_, v_snd_336_);
lean_dec_ref(v_x_330_);
if (lean_obj_tag(v___x_341_) == 1)
{
lean_object* v_i_342_; lean_object* v_children_343_; 
v_i_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc_ref(v_i_342_);
v_children_343_ = lean_ctor_get(v___x_341_, 1);
lean_inc_ref(v_children_343_);
lean_dec_ref_known(v___x_341_, 2);
v_x_329_ = v_i_342_;
v_x_330_ = v_children_343_;
v_x_331_ = v_tail_334_;
goto _start;
}
else
{
lean_object* v___x_345_; 
lean_dec(v___x_341_);
v___x_345_ = lean_box(0);
return v___x_345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_getPath___boxed(lean_object* v_x_346_, lean_object* v_x_347_, lean_object* v_x_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getPath(v_x_346_, v_x_347_, v_x_348_);
lean_dec(v_x_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13_spec__14___redArg(lean_object* v_x_350_, lean_object* v_x_351_){
_start:
{
if (lean_obj_tag(v_x_351_) == 0)
{
return v_x_350_;
}
else
{
lean_object* v_key_352_; lean_object* v_value_353_; lean_object* v_tail_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_377_; 
v_key_352_ = lean_ctor_get(v_x_351_, 0);
v_value_353_ = lean_ctor_get(v_x_351_, 1);
v_tail_354_ = lean_ctor_get(v_x_351_, 2);
v_isSharedCheck_377_ = !lean_is_exclusive(v_x_351_);
if (v_isSharedCheck_377_ == 0)
{
v___x_356_ = v_x_351_;
v_isShared_357_ = v_isSharedCheck_377_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_tail_354_);
lean_inc(v_value_353_);
lean_inc(v_key_352_);
lean_dec(v_x_351_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_377_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; uint64_t v___x_359_; uint64_t v___x_360_; uint64_t v___x_361_; uint64_t v_fold_362_; uint64_t v___x_363_; uint64_t v___x_364_; uint64_t v___x_365_; size_t v___x_366_; size_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_358_ = lean_array_get_size(v_x_350_);
v___x_359_ = l_Lean_Syntax_instHashableRange_hash(v_key_352_);
v___x_360_ = 32ULL;
v___x_361_ = lean_uint64_shift_right(v___x_359_, v___x_360_);
v_fold_362_ = lean_uint64_xor(v___x_359_, v___x_361_);
v___x_363_ = 16ULL;
v___x_364_ = lean_uint64_shift_right(v_fold_362_, v___x_363_);
v___x_365_ = lean_uint64_xor(v_fold_362_, v___x_364_);
v___x_366_ = lean_uint64_to_usize(v___x_365_);
v___x_367_ = lean_usize_of_nat(v___x_358_);
v___x_368_ = ((size_t)1ULL);
v___x_369_ = lean_usize_sub(v___x_367_, v___x_368_);
v___x_370_ = lean_usize_land(v___x_366_, v___x_369_);
v___x_371_ = lean_array_uget_borrowed(v_x_350_, v___x_370_);
lean_inc(v___x_371_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 2, v___x_371_);
v___x_373_ = v___x_356_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_key_352_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v_value_353_);
lean_ctor_set(v_reuseFailAlloc_376_, 2, v___x_371_);
v___x_373_ = v_reuseFailAlloc_376_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; 
v___x_374_ = lean_array_uset(v_x_350_, v___x_370_, v___x_373_);
v_x_350_ = v___x_374_;
v_x_351_ = v_tail_354_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13___redArg(lean_object* v_i_378_, lean_object* v_source_379_, lean_object* v_target_380_){
_start:
{
lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_381_ = lean_array_get_size(v_source_379_);
v___x_382_ = lean_nat_dec_lt(v_i_378_, v___x_381_);
if (v___x_382_ == 0)
{
lean_dec_ref(v_source_379_);
lean_dec(v_i_378_);
return v_target_380_;
}
else
{
lean_object* v_es_383_; lean_object* v___x_384_; lean_object* v_source_385_; lean_object* v_target_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v_es_383_ = lean_array_fget(v_source_379_, v_i_378_);
v___x_384_ = lean_box(0);
v_source_385_ = lean_array_fset(v_source_379_, v_i_378_, v___x_384_);
v_target_386_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13_spec__14___redArg(v_target_380_, v_es_383_);
v___x_387_ = lean_unsigned_to_nat(1u);
v___x_388_ = lean_nat_add(v_i_378_, v___x_387_);
lean_dec(v_i_378_);
v_i_378_ = v___x_388_;
v_source_379_ = v_source_385_;
v_target_380_ = v_target_386_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10___redArg(lean_object* v_data_390_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v_nbuckets_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_391_ = lean_array_get_size(v_data_390_);
v___x_392_ = lean_unsigned_to_nat(2u);
v_nbuckets_393_ = lean_nat_mul(v___x_391_, v___x_392_);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_box(0);
v___x_396_ = lean_mk_array(v_nbuckets_393_, v___x_395_);
v___x_397_ = lean_array_propagate_mark(v_data_390_, v___x_396_);
v___x_398_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13___redArg(v___x_394_, v_data_390_, v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__11___redArg(lean_object* v_a_399_, lean_object* v_b_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
lean_dec(v_b_400_);
lean_dec_ref(v_a_399_);
return v_x_401_;
}
else
{
lean_object* v_key_402_; lean_object* v_value_403_; lean_object* v_tail_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_416_; 
v_key_402_ = lean_ctor_get(v_x_401_, 0);
v_value_403_ = lean_ctor_get(v_x_401_, 1);
v_tail_404_ = lean_ctor_get(v_x_401_, 2);
v_isSharedCheck_416_ = !lean_is_exclusive(v_x_401_);
if (v_isSharedCheck_416_ == 0)
{
v___x_406_ = v_x_401_;
v_isShared_407_ = v_isSharedCheck_416_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_tail_404_);
lean_inc(v_value_403_);
lean_inc(v_key_402_);
lean_dec(v_x_401_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_416_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
uint8_t v___x_408_; 
v___x_408_ = l_Lean_Syntax_instBEqRange_beq(v_key_402_, v_a_399_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__11___redArg(v_a_399_, v_b_400_, v_tail_404_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 2, v___x_409_);
v___x_411_ = v___x_406_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_key_402_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_value_403_);
lean_ctor_set(v_reuseFailAlloc_412_, 2, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
else
{
lean_object* v___x_414_; 
lean_dec(v_value_403_);
lean_dec(v_key_402_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 1, v_b_400_);
lean_ctor_set(v___x_406_, 0, v_a_399_);
v___x_414_ = v___x_406_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_399_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_b_400_);
lean_ctor_set(v_reuseFailAlloc_415_, 2, v_tail_404_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg(lean_object* v_a_417_, lean_object* v_x_418_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
uint8_t v___x_419_; 
v___x_419_ = 0;
return v___x_419_;
}
else
{
lean_object* v_key_420_; lean_object* v_tail_421_; uint8_t v___x_422_; 
v_key_420_ = lean_ctor_get(v_x_418_, 0);
v_tail_421_ = lean_ctor_get(v_x_418_, 2);
v___x_422_ = l_Lean_Syntax_instBEqRange_beq(v_key_420_, v_a_417_);
if (v___x_422_ == 0)
{
v_x_418_ = v_tail_421_;
goto _start;
}
else
{
return v___x_422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg___boxed(lean_object* v_a_424_, lean_object* v_x_425_){
_start:
{
uint8_t v_res_426_; lean_object* v_r_427_; 
v_res_426_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg(v_a_424_, v_x_425_);
lean_dec(v_x_425_);
lean_dec_ref(v_a_424_);
v_r_427_ = lean_box(v_res_426_);
return v_r_427_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4___redArg(lean_object* v_m_428_, lean_object* v_a_429_, lean_object* v_b_430_){
_start:
{
lean_object* v_size_431_; lean_object* v_buckets_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_475_; 
v_size_431_ = lean_ctor_get(v_m_428_, 0);
v_buckets_432_ = lean_ctor_get(v_m_428_, 1);
v_isSharedCheck_475_ = !lean_is_exclusive(v_m_428_);
if (v_isSharedCheck_475_ == 0)
{
v___x_434_ = v_m_428_;
v_isShared_435_ = v_isSharedCheck_475_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_buckets_432_);
lean_inc(v_size_431_);
lean_dec(v_m_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_475_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; uint64_t v___x_437_; uint64_t v___x_438_; uint64_t v___x_439_; uint64_t v_fold_440_; uint64_t v___x_441_; uint64_t v___x_442_; uint64_t v___x_443_; size_t v___x_444_; size_t v___x_445_; size_t v___x_446_; size_t v___x_447_; size_t v___x_448_; lean_object* v_bkt_449_; uint8_t v___x_450_; 
v___x_436_ = lean_array_get_size(v_buckets_432_);
v___x_437_ = l_Lean_Syntax_instHashableRange_hash(v_a_429_);
v___x_438_ = 32ULL;
v___x_439_ = lean_uint64_shift_right(v___x_437_, v___x_438_);
v_fold_440_ = lean_uint64_xor(v___x_437_, v___x_439_);
v___x_441_ = 16ULL;
v___x_442_ = lean_uint64_shift_right(v_fold_440_, v___x_441_);
v___x_443_ = lean_uint64_xor(v_fold_440_, v___x_442_);
v___x_444_ = lean_uint64_to_usize(v___x_443_);
v___x_445_ = lean_usize_of_nat(v___x_436_);
v___x_446_ = ((size_t)1ULL);
v___x_447_ = lean_usize_sub(v___x_445_, v___x_446_);
v___x_448_ = lean_usize_land(v___x_444_, v___x_447_);
v_bkt_449_ = lean_array_uget_borrowed(v_buckets_432_, v___x_448_);
v___x_450_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg(v_a_429_, v_bkt_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v_size_x27_452_; lean_object* v___x_453_; lean_object* v_buckets_x27_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_451_ = lean_unsigned_to_nat(1u);
v_size_x27_452_ = lean_nat_add(v_size_431_, v___x_451_);
lean_dec(v_size_431_);
lean_inc(v_bkt_449_);
v___x_453_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_453_, 0, v_a_429_);
lean_ctor_set(v___x_453_, 1, v_b_430_);
lean_ctor_set(v___x_453_, 2, v_bkt_449_);
v_buckets_x27_454_ = lean_array_uset(v_buckets_432_, v___x_448_, v___x_453_);
v___x_455_ = lean_unsigned_to_nat(4u);
v___x_456_ = lean_nat_mul(v_size_x27_452_, v___x_455_);
v___x_457_ = lean_unsigned_to_nat(3u);
v___x_458_ = lean_nat_div(v___x_456_, v___x_457_);
lean_dec(v___x_456_);
v___x_459_ = lean_array_get_size(v_buckets_x27_454_);
v___x_460_ = lean_nat_dec_le(v___x_458_, v___x_459_);
lean_dec(v___x_458_);
if (v___x_460_ == 0)
{
lean_object* v_val_461_; lean_object* v___x_463_; 
v_val_461_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10___redArg(v_buckets_x27_454_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v_val_461_);
lean_ctor_set(v___x_434_, 0, v_size_x27_452_);
v___x_463_ = v___x_434_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_size_x27_452_);
lean_ctor_set(v_reuseFailAlloc_464_, 1, v_val_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
else
{
lean_object* v___x_466_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v_buckets_x27_454_);
lean_ctor_set(v___x_434_, 0, v_size_x27_452_);
v___x_466_ = v___x_434_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_size_x27_452_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_buckets_x27_454_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
else
{
lean_object* v___x_468_; lean_object* v_buckets_x27_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_473_; 
lean_inc(v_bkt_449_);
v___x_468_ = lean_box(0);
v_buckets_x27_469_ = lean_array_uset(v_buckets_432_, v___x_448_, v___x_468_);
v___x_470_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__11___redArg(v_a_429_, v_b_430_, v_bkt_449_);
v___x_471_ = lean_array_uset(v_buckets_x27_469_, v___x_448_, v___x_470_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v___x_471_);
v___x_473_ = v___x_434_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_size_431_);
lean_ctor_set(v_reuseFailAlloc_474_, 1, v___x_471_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg(lean_object* v_a_476_, lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
return v_x_477_;
}
else
{
lean_object* v_key_478_; lean_object* v_value_479_; lean_object* v_tail_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_489_; 
v_key_478_ = lean_ctor_get(v_x_477_, 0);
v_value_479_ = lean_ctor_get(v_x_477_, 1);
v_tail_480_ = lean_ctor_get(v_x_477_, 2);
v_isSharedCheck_489_ = !lean_is_exclusive(v_x_477_);
if (v_isSharedCheck_489_ == 0)
{
v___x_482_ = v_x_477_;
v_isShared_483_ = v_isSharedCheck_489_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_tail_480_);
lean_inc(v_value_479_);
lean_inc(v_key_478_);
lean_dec(v_x_477_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_489_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
uint8_t v___x_484_; 
v___x_484_ = l_Lean_Syntax_instBEqRange_beq(v_key_478_, v_a_476_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_485_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg(v_a_476_, v_tail_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 2, v___x_485_);
v___x_487_ = v___x_482_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_key_478_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v_value_479_);
lean_ctor_set(v_reuseFailAlloc_488_, 2, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
else
{
lean_del_object(v___x_482_);
lean_dec(v_value_479_);
lean_dec(v_key_478_);
return v_tail_480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg___boxed(lean_object* v_a_490_, lean_object* v_x_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg(v_a_490_, v_x_491_);
lean_dec_ref(v_a_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg(lean_object* v_m_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_size_495_; lean_object* v_buckets_496_; lean_object* v___x_497_; uint64_t v___x_498_; uint64_t v___x_499_; uint64_t v___x_500_; uint64_t v_fold_501_; uint64_t v___x_502_; uint64_t v___x_503_; uint64_t v___x_504_; size_t v___x_505_; size_t v___x_506_; size_t v___x_507_; size_t v___x_508_; size_t v___x_509_; lean_object* v_bkt_510_; uint8_t v___x_511_; 
v_size_495_ = lean_ctor_get(v_m_493_, 0);
v_buckets_496_ = lean_ctor_get(v_m_493_, 1);
v___x_497_ = lean_array_get_size(v_buckets_496_);
v___x_498_ = l_Lean_Syntax_instHashableRange_hash(v_a_494_);
v___x_499_ = 32ULL;
v___x_500_ = lean_uint64_shift_right(v___x_498_, v___x_499_);
v_fold_501_ = lean_uint64_xor(v___x_498_, v___x_500_);
v___x_502_ = 16ULL;
v___x_503_ = lean_uint64_shift_right(v_fold_501_, v___x_502_);
v___x_504_ = lean_uint64_xor(v_fold_501_, v___x_503_);
v___x_505_ = lean_uint64_to_usize(v___x_504_);
v___x_506_ = lean_usize_of_nat(v___x_497_);
v___x_507_ = ((size_t)1ULL);
v___x_508_ = lean_usize_sub(v___x_506_, v___x_507_);
v___x_509_ = lean_usize_land(v___x_505_, v___x_508_);
v_bkt_510_ = lean_array_uget_borrowed(v_buckets_496_, v___x_509_);
v___x_511_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg(v_a_494_, v_bkt_510_);
if (v___x_511_ == 0)
{
return v_m_493_;
}
else
{
lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_524_; 
lean_inc(v_bkt_510_);
lean_inc_ref(v_buckets_496_);
lean_inc(v_size_495_);
v_isSharedCheck_524_ = !lean_is_exclusive(v_m_493_);
if (v_isSharedCheck_524_ == 0)
{
lean_object* v_unused_525_; lean_object* v_unused_526_; 
v_unused_525_ = lean_ctor_get(v_m_493_, 1);
lean_dec(v_unused_525_);
v_unused_526_ = lean_ctor_get(v_m_493_, 0);
lean_dec(v_unused_526_);
v___x_513_ = v_m_493_;
v_isShared_514_ = v_isSharedCheck_524_;
goto v_resetjp_512_;
}
else
{
lean_dec(v_m_493_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_524_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_515_; lean_object* v_buckets_x27_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_515_ = lean_box(0);
v_buckets_x27_516_ = lean_array_uset(v_buckets_496_, v___x_509_, v___x_515_);
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_nat_sub(v_size_495_, v___x_517_);
lean_dec(v_size_495_);
v___x_519_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg(v_a_494_, v_bkt_510_);
v___x_520_ = lean_array_uset(v_buckets_x27_516_, v___x_509_, v___x_519_);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 1, v___x_520_);
lean_ctor_set(v___x_513_, 0, v___x_518_);
v___x_522_ = v___x_513_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v___x_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg___boxed(lean_object* v_m_527_, lean_object* v_a_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg(v_m_527_, v_a_528_);
lean_dec_ref(v_a_528_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___redArg(lean_object* v_a_530_, lean_object* v_x_531_){
_start:
{
if (lean_obj_tag(v_x_531_) == 0)
{
lean_object* v___x_532_; 
v___x_532_ = lean_box(0);
return v___x_532_;
}
else
{
lean_object* v_key_533_; lean_object* v_value_534_; lean_object* v_tail_535_; uint8_t v___x_536_; 
v_key_533_ = lean_ctor_get(v_x_531_, 0);
v_value_534_ = lean_ctor_get(v_x_531_, 1);
v_tail_535_ = lean_ctor_get(v_x_531_, 2);
v___x_536_ = l_Lean_Syntax_instBEqRange_beq(v_key_533_, v_a_530_);
if (v___x_536_ == 0)
{
v_x_531_ = v_tail_535_;
goto _start;
}
else
{
lean_object* v___x_538_; 
lean_inc(v_value_534_);
v___x_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_538_, 0, v_value_534_);
return v___x_538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___redArg___boxed(lean_object* v_a_539_, lean_object* v_x_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___redArg(v_a_539_, v_x_540_);
lean_dec(v_x_540_);
lean_dec_ref(v_a_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___redArg(lean_object* v_m_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_buckets_544_; lean_object* v___x_545_; uint64_t v___x_546_; uint64_t v___x_547_; uint64_t v___x_548_; uint64_t v_fold_549_; uint64_t v___x_550_; uint64_t v___x_551_; uint64_t v___x_552_; size_t v___x_553_; size_t v___x_554_; size_t v___x_555_; size_t v___x_556_; size_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v_buckets_544_ = lean_ctor_get(v_m_542_, 1);
v___x_545_ = lean_array_get_size(v_buckets_544_);
v___x_546_ = l_Lean_Syntax_instHashableRange_hash(v_a_543_);
v___x_547_ = 32ULL;
v___x_548_ = lean_uint64_shift_right(v___x_546_, v___x_547_);
v_fold_549_ = lean_uint64_xor(v___x_546_, v___x_548_);
v___x_550_ = 16ULL;
v___x_551_ = lean_uint64_shift_right(v_fold_549_, v___x_550_);
v___x_552_ = lean_uint64_xor(v_fold_549_, v___x_551_);
v___x_553_ = lean_uint64_to_usize(v___x_552_);
v___x_554_ = lean_usize_of_nat(v___x_545_);
v___x_555_ = ((size_t)1ULL);
v___x_556_ = lean_usize_sub(v___x_554_, v___x_555_);
v___x_557_ = lean_usize_land(v___x_553_, v___x_556_);
v___x_558_ = lean_array_uget_borrowed(v_buckets_544_, v___x_557_);
v___x_559_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___redArg(v_a_543_, v___x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___redArg___boxed(lean_object* v_m_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___redArg(v_m_560_, v_a_561_);
lean_dec_ref(v_a_561_);
lean_dec_ref(v_m_560_);
return v_res_562_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg(lean_object* v_multigoals_599_, lean_object* v_x_600_, lean_object* v_a_601_){
_start:
{
switch(lean_obj_tag(v_x_600_))
{
case 0:
{
lean_object* v_t_603_; 
v_t_603_ = lean_ctor_get(v_x_600_, 1);
lean_inc_ref(v_t_603_);
lean_dec_ref_known(v_x_600_, 2);
v_x_600_ = v_t_603_;
goto _start;
}
case 1:
{
lean_object* v_i_605_; lean_object* v_children_606_; lean_object* v_snd_608_; lean_object* v_snd_612_; 
v_i_605_ = lean_ctor_get(v_x_600_, 0);
lean_inc_ref(v_i_605_);
v_children_606_ = lean_ctor_get(v_x_600_, 1);
lean_inc_ref(v_children_606_);
lean_dec_ref_known(v_x_600_, 2);
if (lean_obj_tag(v_i_605_) == 0)
{
lean_object* v_i_615_; lean_object* v_toElabInfo_616_; lean_object* v_goalsBefore_617_; lean_object* v_stx_618_; uint8_t v___x_619_; lean_object* v___x_620_; 
v_i_615_ = lean_ctor_get(v_i_605_, 0);
v_toElabInfo_616_ = lean_ctor_get(v_i_615_, 0);
v_goalsBefore_617_ = lean_ctor_get(v_i_615_, 2);
v_stx_618_ = lean_ctor_get(v_toElabInfo_616_, 1);
v___x_619_ = 1;
v___x_620_ = l_Lean_Syntax_getRange_x3f(v_stx_618_, v___x_619_);
if (lean_obj_tag(v___x_620_) == 1)
{
lean_object* v_val_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v_val_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_val_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = lean_st_ref_get(v_a_601_);
v___x_623_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___redArg(v___x_622_, v_val_621_);
lean_dec(v___x_622_);
if (lean_obj_tag(v___x_623_) == 1)
{
lean_object* v_val_624_; lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; lean_object* v___y_629_; 
v_val_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_val_624_);
lean_dec_ref_known(v___x_623_, 1);
lean_inc(v_stx_618_);
v___x_625_ = l_Lean_Syntax_getKind(v_stx_618_);
v___x_626_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__1));
v___x_627_ = lean_name_eq(v___x_625_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_654_; uint8_t v___x_655_; lean_object* v___y_657_; 
v___x_654_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_isSeqFocus___closed__3));
v___x_655_ = lean_name_eq(v___x_625_, v___x_654_);
lean_dec(v___x_625_);
if (v___x_655_ == 0)
{
lean_object* v___x_682_; 
lean_dec(v_val_624_);
lean_dec(v_val_621_);
lean_dec_ref_known(v_i_605_, 1);
v___x_682_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_599_, v_children_606_, v_a_601_);
lean_dec_ref(v_children_606_);
return v___x_682_;
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_683_ = l_List_lengthTR___redArg(v_goalsBefore_617_);
v___x_684_ = lean_unsigned_to_nat(1u);
v___x_685_ = lean_nat_dec_eq(v___x_683_, v___x_684_);
lean_dec(v___x_683_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = l_Lean_Syntax_getArg(v_stx_618_, v___x_686_);
v___x_688_ = l_Lean_Syntax_getKind(v___x_687_);
v___x_689_ = l_Lean_NameSet_contains(v_multigoals_599_, v___x_688_);
lean_dec(v___x_688_);
if (v___x_689_ == 0)
{
goto v___jp_669_;
}
else
{
lean_object* v___x_690_; 
lean_dec_ref_known(v_i_605_, 1);
v___x_690_ = lean_box(0);
v___y_657_ = v___x_690_;
goto v___jp_656_;
}
}
else
{
goto v___jp_669_;
}
}
v___jp_656_:
{
lean_object* v___x_658_; 
v___x_658_ = lean_st_ref_take(v_a_601_);
if (lean_obj_tag(v___y_657_) == 0)
{
lean_object* v___x_659_; 
lean_dec(v_val_624_);
v___x_659_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg(v___x_658_, v_val_621_);
lean_dec(v_val_621_);
v_snd_612_ = v___x_659_;
goto v___jp_611_;
}
else
{
lean_object* v_stx_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_668_; 
v_stx_660_ = lean_ctor_get(v_val_624_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v_val_624_);
if (v_isSharedCheck_668_ == 0)
{
v___x_662_ = v_val_624_;
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_stx_660_);
lean_dec(v_val_624_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_stx_660_);
v___x_665_ = v_reuseFailAlloc_667_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_666_; 
lean_ctor_set_uint8(v___x_665_, sizeof(void*)*1, v___x_655_);
v___x_666_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4___redArg(v___x_658_, v_val_621_, v___x_665_);
v_snd_612_ = v___x_666_;
goto v___jp_611_;
}
}
}
}
v___jp_669_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__11));
lean_inc_ref(v_children_606_);
v___x_672_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getPath(v_i_605_, v_children_606_, v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v___x_673_; 
v___x_673_ = lean_box(0);
v___y_657_ = v___x_673_;
goto v___jp_656_;
}
else
{
lean_object* v_val_674_; 
v_val_674_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_val_674_);
lean_dec_ref_known(v___x_672_, 1);
if (lean_obj_tag(v_val_674_) == 0)
{
lean_object* v_i_675_; lean_object* v_goalsAfter_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v_i_675_ = lean_ctor_get(v_val_674_, 0);
lean_inc_ref(v_i_675_);
lean_dec_ref_known(v_val_674_, 1);
v_goalsAfter_676_ = lean_ctor_get(v_i_675_, 4);
lean_inc(v_goalsAfter_676_);
lean_dec_ref(v_i_675_);
v___x_677_ = l_List_lengthTR___redArg(v_goalsAfter_676_);
lean_dec(v_goalsAfter_676_);
v___x_678_ = lean_nat_dec_eq(v___x_677_, v___x_670_);
lean_dec(v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_box(0);
v___y_657_ = v___x_679_;
goto v___jp_656_;
}
else
{
lean_object* v___x_680_; 
v___x_680_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__7));
v___y_657_ = v___x_680_;
goto v___jp_656_;
}
}
else
{
lean_object* v___x_681_; 
lean_dec(v_val_674_);
v___x_681_ = lean_box(0);
v___y_657_ = v___x_681_;
goto v___jp_656_;
}
}
}
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
lean_dec(v___x_625_);
v___x_691_ = l_List_lengthTR___redArg(v_goalsBefore_617_);
v___x_692_ = lean_unsigned_to_nat(1u);
v___x_693_ = lean_nat_dec_eq(v___x_691_, v___x_692_);
lean_dec(v___x_691_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_694_ = lean_unsigned_to_nat(0u);
v___x_695_ = l_Lean_Syntax_getArg(v_stx_618_, v___x_694_);
v___x_696_ = l_Lean_Syntax_getKind(v___x_695_);
v___x_697_ = l_Lean_NameSet_contains(v_multigoals_599_, v___x_696_);
lean_dec(v___x_696_);
if (v___x_697_ == 0)
{
goto v___jp_641_;
}
else
{
lean_object* v___x_698_; 
lean_dec_ref_known(v_i_605_, 1);
v___x_698_ = lean_box(0);
v___y_629_ = v___x_698_;
goto v___jp_628_;
}
}
else
{
goto v___jp_641_;
}
}
v___jp_628_:
{
lean_object* v___x_630_; 
v___x_630_ = lean_st_ref_take(v_a_601_);
if (lean_obj_tag(v___y_629_) == 0)
{
lean_object* v___x_631_; 
lean_dec(v_val_624_);
v___x_631_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg(v___x_630_, v_val_621_);
lean_dec(v_val_621_);
v_snd_608_ = v___x_631_;
goto v___jp_607_;
}
else
{
lean_object* v_stx_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_640_; 
v_stx_632_ = lean_ctor_get(v_val_624_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v_val_624_);
if (v_isSharedCheck_640_ == 0)
{
v___x_634_ = v_val_624_;
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_stx_632_);
lean_dec(v_val_624_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_stx_632_);
v___x_637_ = v_reuseFailAlloc_639_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; 
lean_ctor_set_uint8(v___x_637_, sizeof(void*)*1, v___x_627_);
v___x_638_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4___redArg(v___x_630_, v_val_621_, v___x_637_);
v_snd_608_ = v___x_638_;
goto v___jp_607_;
}
}
}
}
v___jp_641_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_642_ = lean_unsigned_to_nat(1u);
v___x_643_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__6));
lean_inc_ref(v_children_606_);
v___x_644_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getPath(v_i_605_, v_children_606_, v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v___x_645_; 
v___x_645_ = lean_box(0);
v___y_629_ = v___x_645_;
goto v___jp_628_;
}
else
{
lean_object* v_val_646_; 
v_val_646_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_val_646_);
lean_dec_ref_known(v___x_644_, 1);
if (lean_obj_tag(v_val_646_) == 0)
{
lean_object* v_i_647_; lean_object* v_goalsAfter_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v_i_647_ = lean_ctor_get(v_val_646_, 0);
lean_inc_ref(v_i_647_);
lean_dec_ref_known(v_val_646_, 1);
v_goalsAfter_648_ = lean_ctor_get(v_i_647_, 4);
lean_inc(v_goalsAfter_648_);
lean_dec_ref(v_i_647_);
v___x_649_ = l_List_lengthTR___redArg(v_goalsAfter_648_);
lean_dec(v_goalsAfter_648_);
v___x_650_ = lean_nat_dec_eq(v___x_649_, v___x_642_);
lean_dec(v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
v___x_651_ = lean_box(0);
v___y_629_ = v___x_651_;
goto v___jp_628_;
}
else
{
lean_object* v___x_652_; 
v___x_652_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___closed__7));
v___y_629_ = v___x_652_;
goto v___jp_628_;
}
}
else
{
lean_object* v___x_653_; 
lean_dec(v_val_646_);
v___x_653_ = lean_box(0);
v___y_629_ = v___x_653_;
goto v___jp_628_;
}
}
}
}
else
{
lean_object* v___x_699_; 
lean_dec(v___x_623_);
lean_dec(v_val_621_);
lean_dec_ref_known(v_i_605_, 1);
v___x_699_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_599_, v_children_606_, v_a_601_);
lean_dec_ref(v_children_606_);
return v___x_699_;
}
}
else
{
lean_object* v___x_700_; 
lean_dec(v___x_620_);
lean_dec_ref_known(v_i_605_, 1);
v___x_700_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_599_, v_children_606_, v_a_601_);
lean_dec_ref(v_children_606_);
return v___x_700_;
}
}
else
{
lean_object* v___x_701_; 
lean_dec_ref(v_i_605_);
v___x_701_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_599_, v_children_606_, v_a_601_);
lean_dec_ref(v_children_606_);
return v___x_701_;
}
v___jp_607_:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = lean_st_ref_put(v_a_601_, v_snd_608_);
v___x_610_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_599_, v_children_606_, v_a_601_);
lean_dec_ref(v_children_606_);
return v___x_610_;
}
v___jp_611_:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_st_ref_put(v_a_601_, v_snd_612_);
v___x_614_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_599_, v_children_606_, v_a_601_);
lean_dec_ref(v_children_606_);
return v___x_614_;
}
}
default: 
{
lean_object* v___x_702_; 
lean_dec_ref_known(v_x_600_, 1);
v___x_702_ = lean_box(0);
return v___x_702_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(lean_object* v_multigoals_703_, lean_object* v_as_704_, size_t v_i_705_, size_t v_stop_706_, lean_object* v_b_707_, lean_object* v___y_708_){
_start:
{
uint8_t v___x_710_; 
v___x_710_ = lean_usize_dec_eq(v_i_705_, v_stop_706_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; size_t v___x_713_; size_t v___x_714_; 
v___x_711_ = lean_array_uget_borrowed(v_as_704_, v_i_705_);
lean_inc(v___x_711_);
v___x_712_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg(v_multigoals_703_, v___x_711_, v___y_708_);
v___x_713_ = ((size_t)1ULL);
v___x_714_ = lean_usize_add(v_i_705_, v___x_713_);
v_i_705_ = v___x_714_;
v_b_707_ = v___x_712_;
goto _start;
}
else
{
return v_b_707_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg(lean_object* v_multigoals_716_, lean_object* v_x_717_, lean_object* v___y_718_){
_start:
{
if (lean_obj_tag(v_x_717_) == 0)
{
lean_object* v_cs_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v_cs_720_ = lean_ctor_get(v_x_717_, 0);
v___x_721_ = lean_unsigned_to_nat(0u);
v___x_722_ = lean_array_get_size(v_cs_720_);
v___x_723_ = lean_box(0);
v___x_724_ = lean_nat_dec_lt(v___x_721_, v___x_722_);
if (v___x_724_ == 0)
{
return v___x_723_;
}
else
{
size_t v___x_725_; size_t v___x_726_; lean_object* v___x_727_; 
v___x_725_ = ((size_t)0ULL);
v___x_726_ = lean_usize_of_nat(v___x_722_);
v___x_727_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg(v_multigoals_716_, v_cs_720_, v___x_725_, v___x_726_, v___x_723_, v___y_718_);
return v___x_727_;
}
}
else
{
lean_object* v_vs_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v_vs_728_ = lean_ctor_get(v_x_717_, 0);
v___x_729_ = lean_unsigned_to_nat(0u);
v___x_730_ = lean_array_get_size(v_vs_728_);
v___x_731_ = lean_box(0);
v___x_732_ = lean_nat_dec_lt(v___x_729_, v___x_730_);
if (v___x_732_ == 0)
{
return v___x_731_;
}
else
{
size_t v___x_733_; size_t v___x_734_; lean_object* v___x_735_; 
v___x_733_ = ((size_t)0ULL);
v___x_734_ = lean_usize_of_nat(v___x_730_);
v___x_735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(v_multigoals_716_, v_vs_728_, v___x_733_, v___x_734_, v___x_731_, v___y_718_);
return v___x_735_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg(lean_object* v_multigoals_736_, lean_object* v_as_737_, size_t v_i_738_, size_t v_stop_739_, lean_object* v_b_740_, lean_object* v___y_741_){
_start:
{
uint8_t v___x_743_; 
v___x_743_ = lean_usize_dec_eq(v_i_738_, v_stop_739_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; size_t v___x_746_; size_t v___x_747_; 
v___x_744_ = lean_array_uget_borrowed(v_as_737_, v_i_738_);
v___x_745_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg(v_multigoals_736_, v___x_744_, v___y_741_);
v___x_746_ = ((size_t)1ULL);
v___x_747_ = lean_usize_add(v_i_738_, v___x_746_);
v_i_738_ = v___x_747_;
v_b_740_ = v___x_745_;
goto _start;
}
else
{
return v_b_740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg(lean_object* v_multigoals_749_, lean_object* v_x_750_, size_t v_x_751_, size_t v_x_752_, lean_object* v___y_753_){
_start:
{
if (lean_obj_tag(v_x_750_) == 0)
{
lean_object* v_cs_755_; lean_object* v___x_756_; size_t v___x_757_; lean_object* v_j_758_; lean_object* v___x_759_; size_t v___x_760_; size_t v___x_761_; size_t v___x_762_; size_t v___x_763_; size_t v___x_764_; size_t v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; uint8_t v___x_771_; 
v_cs_755_ = lean_ctor_get(v_x_750_, 0);
v___x_756_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___closed__0);
v___x_757_ = lean_usize_shift_right(v_x_751_, v_x_752_);
v_j_758_ = lean_usize_to_nat(v___x_757_);
v___x_759_ = lean_array_get_borrowed(v___x_756_, v_cs_755_, v_j_758_);
v___x_760_ = ((size_t)1ULL);
v___x_761_ = lean_usize_shift_left(v___x_760_, v_x_752_);
v___x_762_ = lean_usize_sub(v___x_761_, v___x_760_);
v___x_763_ = lean_usize_land(v_x_751_, v___x_762_);
v___x_764_ = ((size_t)5ULL);
v___x_765_ = lean_usize_sub(v_x_752_, v___x_764_);
v___x_766_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg(v_multigoals_749_, v___x_759_, v___x_763_, v___x_765_, v___y_753_);
v___x_767_ = lean_unsigned_to_nat(1u);
v___x_768_ = lean_nat_add(v_j_758_, v___x_767_);
lean_dec(v_j_758_);
v___x_769_ = lean_array_get_size(v_cs_755_);
v___x_770_ = lean_box(0);
v___x_771_ = lean_nat_dec_lt(v___x_768_, v___x_769_);
if (v___x_771_ == 0)
{
lean_dec(v___x_768_);
return v___x_770_;
}
else
{
size_t v___x_772_; size_t v___x_773_; lean_object* v___x_774_; 
v___x_772_ = lean_usize_of_nat(v___x_768_);
lean_dec(v___x_768_);
v___x_773_ = lean_usize_of_nat(v___x_769_);
v___x_774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg(v_multigoals_749_, v_cs_755_, v___x_772_, v___x_773_, v___x_770_, v___y_753_);
return v___x_774_;
}
}
else
{
lean_object* v_vs_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; 
v_vs_775_ = lean_ctor_get(v_x_750_, 0);
v___x_776_ = lean_usize_to_nat(v_x_751_);
v___x_777_ = lean_array_get_size(v_vs_775_);
v___x_778_ = lean_box(0);
v___x_779_ = lean_nat_dec_lt(v___x_776_, v___x_777_);
if (v___x_779_ == 0)
{
lean_dec(v___x_776_);
return v___x_778_;
}
else
{
size_t v___x_780_; size_t v___x_781_; lean_object* v___x_782_; 
v___x_780_ = lean_usize_of_nat(v___x_776_);
lean_dec(v___x_776_);
v___x_781_ = lean_usize_of_nat(v___x_777_);
v___x_782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(v_multigoals_749_, v_vs_775_, v___x_780_, v___x_781_, v___x_778_, v___y_753_);
return v___x_782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___redArg(lean_object* v_multigoals_783_, lean_object* v_t_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_root_787_; lean_object* v_tail_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v_root_787_ = lean_ctor_get(v_t_784_, 0);
v_tail_788_ = lean_ctor_get(v_t_784_, 1);
v___x_789_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg(v_multigoals_783_, v_root_787_, v___y_785_);
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = lean_array_get_size(v_tail_788_);
v___x_792_ = lean_box(0);
v___x_793_ = lean_nat_dec_lt(v___x_790_, v___x_791_);
if (v___x_793_ == 0)
{
return v___x_792_;
}
else
{
size_t v___x_794_; size_t v___x_795_; lean_object* v___x_796_; 
v___x_794_ = ((size_t)0ULL);
v___x_795_ = lean_usize_of_nat(v___x_791_);
v___x_796_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(v_multigoals_783_, v_tail_788_, v___x_794_, v___x_795_, v___x_792_, v___y_785_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___redArg(lean_object* v_multigoals_797_, lean_object* v_t_798_, lean_object* v_start_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_nat_dec_eq(v_start_799_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v_root_804_; lean_object* v_tail_805_; size_t v_shift_806_; lean_object* v_tailOff_807_; uint8_t v___x_808_; 
v_root_804_ = lean_ctor_get(v_t_798_, 0);
v_tail_805_ = lean_ctor_get(v_t_798_, 1);
v_shift_806_ = lean_ctor_get_usize(v_t_798_, 4);
v_tailOff_807_ = lean_ctor_get(v_t_798_, 3);
v___x_808_ = lean_nat_dec_le(v_tailOff_807_, v_start_799_);
if (v___x_808_ == 0)
{
size_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_809_ = lean_usize_of_nat(v_start_799_);
v___x_810_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg(v_multigoals_797_, v_root_804_, v___x_809_, v_shift_806_, v___y_800_);
v___x_811_ = lean_array_get_size(v_tail_805_);
v___x_812_ = lean_box(0);
v___x_813_ = lean_nat_dec_lt(v___x_802_, v___x_811_);
if (v___x_813_ == 0)
{
return v___x_812_;
}
else
{
size_t v___x_814_; size_t v___x_815_; lean_object* v___x_816_; 
v___x_814_ = ((size_t)0ULL);
v___x_815_ = lean_usize_of_nat(v___x_811_);
v___x_816_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(v_multigoals_797_, v_tail_805_, v___x_814_, v___x_815_, v___x_812_, v___y_800_);
return v___x_816_;
}
}
else
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_817_ = lean_nat_sub(v_start_799_, v_tailOff_807_);
v___x_818_ = lean_array_get_size(v_tail_805_);
v___x_819_ = lean_box(0);
v___x_820_ = lean_nat_dec_lt(v___x_817_, v___x_818_);
if (v___x_820_ == 0)
{
lean_dec(v___x_817_);
return v___x_819_;
}
else
{
size_t v___x_821_; size_t v___x_822_; lean_object* v___x_823_; 
v___x_821_ = lean_usize_of_nat(v___x_817_);
lean_dec(v___x_817_);
v___x_822_ = lean_usize_of_nat(v___x_818_);
v___x_823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(v_multigoals_797_, v_tail_805_, v___x_821_, v___x_822_, v___x_819_, v___y_800_);
return v___x_823_;
}
}
}
else
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___redArg(v_multigoals_797_, v_t_798_, v___y_800_);
return v___x_824_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(lean_object* v_multigoals_825_, lean_object* v_trees_826_, lean_object* v_a_827_){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___redArg(v_multigoals_825_, v_trees_826_, v___x_829_, v_a_827_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg___boxed(lean_object* v_multigoals_831_, lean_object* v_trees_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_831_, v_trees_832_, v_a_833_);
lean_dec(v_a_833_);
lean_dec_ref(v_trees_832_);
lean_dec(v_multigoals_831_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg___boxed(lean_object* v_multigoals_836_, lean_object* v_as_837_, lean_object* v_i_838_, lean_object* v_stop_839_, lean_object* v_b_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
size_t v_i_boxed_843_; size_t v_stop_boxed_844_; lean_object* v_res_845_; 
v_i_boxed_843_ = lean_unbox_usize(v_i_838_);
lean_dec(v_i_838_);
v_stop_boxed_844_ = lean_unbox_usize(v_stop_839_);
lean_dec(v_stop_839_);
v_res_845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(v_multigoals_836_, v_as_837_, v_i_boxed_843_, v_stop_boxed_844_, v_b_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v_as_837_);
lean_dec(v_multigoals_836_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_multigoals_846_, lean_object* v_as_847_, lean_object* v_i_848_, lean_object* v_stop_849_, lean_object* v_b_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
size_t v_i_boxed_853_; size_t v_stop_boxed_854_; lean_object* v_res_855_; 
v_i_boxed_853_ = lean_unbox_usize(v_i_848_);
lean_dec(v_i_848_);
v_stop_boxed_854_ = lean_unbox_usize(v_stop_849_);
lean_dec(v_stop_849_);
v_res_855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg(v_multigoals_846_, v_as_847_, v_i_boxed_853_, v_stop_boxed_854_, v_b_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v_as_847_);
lean_dec(v_multigoals_846_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___redArg___boxed(lean_object* v_multigoals_856_, lean_object* v_t_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___redArg(v_multigoals_856_, v_t_857_, v___y_858_);
lean_dec(v___y_858_);
lean_dec_ref(v_t_857_);
lean_dec(v_multigoals_856_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_multigoals_861_, lean_object* v_x_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg(v_multigoals_861_, v_x_862_, v___y_863_);
lean_dec(v___y_863_);
lean_dec_ref(v_x_862_);
lean_dec(v_multigoals_861_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___redArg___boxed(lean_object* v_multigoals_866_, lean_object* v_t_867_, lean_object* v_start_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___redArg(v_multigoals_866_, v_t_867_, v_start_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec(v_start_868_);
lean_dec_ref(v_t_867_);
lean_dec(v_multigoals_866_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg___boxed(lean_object* v_multigoals_872_, lean_object* v_x_873_, lean_object* v_x_874_, lean_object* v_x_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
size_t v_x_8415__boxed_878_; size_t v_x_8416__boxed_879_; lean_object* v_res_880_; 
v_x_8415__boxed_878_ = lean_unbox_usize(v_x_874_);
lean_dec(v_x_874_);
v_x_8416__boxed_879_ = lean_unbox_usize(v_x_875_);
lean_dec(v_x_875_);
v_res_880_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg(v_multigoals_872_, v_x_873_, v_x_8415__boxed_878_, v_x_8416__boxed_879_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v_x_873_);
lean_dec(v_multigoals_872_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg___boxed(lean_object* v_multigoals_881_, lean_object* v_x_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg(v_multigoals_881_, v_x_882_, v_a_883_);
lean_dec(v_a_883_);
lean_dec(v_multigoals_881_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList(lean_object* v_multigoals_886_, lean_object* v_00_u03c9_887_, lean_object* v_trees_888_, lean_object* v_a_889_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_multigoals_886_, v_trees_888_, v_a_889_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___boxed(lean_object* v_multigoals_892_, lean_object* v_00_u03c9_893_, lean_object* v_trees_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList(v_multigoals_892_, v_00_u03c9_893_, v_trees_894_, v_a_895_);
lean_dec(v_a_895_);
lean_dec_ref(v_trees_894_);
lean_dec(v_multigoals_892_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics(lean_object* v_multigoals_898_, lean_object* v_00_u03c9_899_, lean_object* v_x_900_, lean_object* v_a_901_){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___redArg(v_multigoals_898_, v_x_900_, v_a_901_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics___boxed(lean_object* v_multigoals_904_, lean_object* v_00_u03c9_905_, lean_object* v_x_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics(v_multigoals_904_, v_00_u03c9_905_, v_x_906_, v_a_907_);
lean_dec(v_a_907_);
lean_dec(v_multigoals_904_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0(lean_object* v_00_u03c9_910_, lean_object* v_multigoals_911_, lean_object* v_t_912_, lean_object* v_start_913_, lean_object* v___y_914_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___redArg(v_multigoals_911_, v_t_912_, v_start_913_, v___y_914_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0___boxed(lean_object* v_00_u03c9_917_, lean_object* v_multigoals_918_, lean_object* v_t_919_, lean_object* v_start_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0(v_00_u03c9_917_, v_multigoals_918_, v_t_919_, v_start_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec(v_start_920_);
lean_dec_ref(v_t_919_);
lean_dec(v_multigoals_918_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2(lean_object* v_00_u03b2_924_, lean_object* v_m_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___redArg(v_m_925_, v_a_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2___boxed(lean_object* v_00_u03b2_928_, lean_object* v_m_929_, lean_object* v_a_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2(v_00_u03b2_928_, v_m_929_, v_a_930_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_m_929_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3(lean_object* v_00_u03b2_932_, lean_object* v_m_933_, lean_object* v_a_934_){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___redArg(v_m_933_, v_a_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3___boxed(lean_object* v_00_u03b2_936_, lean_object* v_m_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3(v_00_u03b2_936_, v_m_937_, v_a_938_);
lean_dec_ref(v_a_938_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4(lean_object* v_00_u03b2_940_, lean_object* v_m_941_, lean_object* v_a_942_, lean_object* v_b_943_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4___redArg(v_m_941_, v_a_942_, v_b_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0(lean_object* v_00_u03c9_945_, lean_object* v_multigoals_946_, lean_object* v_x_947_, size_t v_x_948_, size_t v_x_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___redArg(v_multigoals_946_, v_x_947_, v_x_948_, v_x_949_, v___y_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0___boxed(lean_object* v_00_u03c9_953_, lean_object* v_multigoals_954_, lean_object* v_x_955_, lean_object* v_x_956_, lean_object* v_x_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
size_t v_x_8857__boxed_960_; size_t v_x_8858__boxed_961_; lean_object* v_res_962_; 
v_x_8857__boxed_960_ = lean_unbox_usize(v_x_956_);
lean_dec(v_x_956_);
v_x_8858__boxed_961_ = lean_unbox_usize(v_x_957_);
lean_dec(v_x_957_);
v_res_962_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0(v_00_u03c9_953_, v_multigoals_954_, v_x_955_, v_x_8857__boxed_960_, v_x_8858__boxed_961_, v___y_958_);
lean_dec(v___y_958_);
lean_dec_ref(v_x_955_);
lean_dec(v_multigoals_954_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1(lean_object* v_00_u03c9_963_, lean_object* v_multigoals_964_, lean_object* v_as_965_, size_t v_i_966_, size_t v_stop_967_, lean_object* v_b_968_, lean_object* v___y_969_){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___redArg(v_multigoals_964_, v_as_965_, v_i_966_, v_stop_967_, v_b_968_, v___y_969_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1___boxed(lean_object* v_00_u03c9_972_, lean_object* v_multigoals_973_, lean_object* v_as_974_, lean_object* v_i_975_, lean_object* v_stop_976_, lean_object* v_b_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
size_t v_i_boxed_980_; size_t v_stop_boxed_981_; lean_object* v_res_982_; 
v_i_boxed_980_ = lean_unbox_usize(v_i_975_);
lean_dec(v_i_975_);
v_stop_boxed_981_ = lean_unbox_usize(v_stop_976_);
lean_dec(v_stop_976_);
v_res_982_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__1(v_00_u03c9_972_, v_multigoals_973_, v_as_974_, v_i_boxed_980_, v_stop_boxed_981_, v_b_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v_as_974_);
lean_dec(v_multigoals_973_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2(lean_object* v_00_u03c9_983_, lean_object* v_multigoals_984_, lean_object* v_t_985_, lean_object* v___y_986_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___redArg(v_multigoals_984_, v_t_985_, v___y_986_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2___boxed(lean_object* v_00_u03c9_989_, lean_object* v_multigoals_990_, lean_object* v_t_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__2(v_00_u03c9_989_, v_multigoals_990_, v_t_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v_t_991_);
lean_dec(v_multigoals_990_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5(lean_object* v_00_u03b2_995_, lean_object* v_a_996_, lean_object* v_x_997_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___redArg(v_a_996_, v_x_997_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5___boxed(lean_object* v_00_u03b2_999_, lean_object* v_a_1000_, lean_object* v_x_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__2_spec__5(v_00_u03b2_999_, v_a_1000_, v_x_1001_);
lean_dec(v_x_1001_);
lean_dec_ref(v_a_1000_);
return v_res_1002_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7(lean_object* v_00_u03b2_1003_, lean_object* v_a_1004_, lean_object* v_x_1005_){
_start:
{
uint8_t v___x_1006_; 
v___x_1006_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___redArg(v_a_1004_, v_x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7___boxed(lean_object* v_00_u03b2_1007_, lean_object* v_a_1008_, lean_object* v_x_1009_){
_start:
{
uint8_t v_res_1010_; lean_object* v_r_1011_; 
v_res_1010_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__7(v_00_u03b2_1007_, v_a_1008_, v_x_1009_);
lean_dec(v_x_1009_);
lean_dec_ref(v_a_1008_);
v_r_1011_ = lean_box(v_res_1010_);
return v_r_1011_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8(lean_object* v_00_u03b2_1012_, lean_object* v_a_1013_, lean_object* v_x_1014_){
_start:
{
lean_object* v___x_1015_; 
v___x_1015_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___redArg(v_a_1013_, v_x_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8___boxed(lean_object* v_00_u03b2_1016_, lean_object* v_a_1017_, lean_object* v_x_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__3_spec__8(v_00_u03b2_1016_, v_a_1017_, v_x_1018_);
lean_dec_ref(v_a_1017_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10(lean_object* v_00_u03b2_1020_, lean_object* v_data_1021_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10___redArg(v_data_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__11(lean_object* v_00_u03b2_1023_, lean_object* v_a_1024_, lean_object* v_b_1025_, lean_object* v_x_1026_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__11___redArg(v_a_1024_, v_b_1025_, v_x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2(lean_object* v_00_u03c9_1028_, lean_object* v_multigoals_1029_, lean_object* v_x_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___redArg(v_multigoals_1029_, v_x_1030_, v___y_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03c9_1034_, lean_object* v_multigoals_1035_, lean_object* v_x_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__2(v_00_u03c9_1034_, v_multigoals_1035_, v_x_1036_, v___y_1037_);
lean_dec(v___y_1037_);
lean_dec_ref(v_x_1036_);
lean_dec(v_multigoals_1035_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3(lean_object* v_00_u03c9_1040_, lean_object* v_multigoals_1041_, lean_object* v_as_1042_, size_t v_i_1043_, size_t v_stop_1044_, lean_object* v_b_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___redArg(v_multigoals_1041_, v_as_1042_, v_i_1043_, v_stop_1044_, v_b_1045_, v___y_1046_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03c9_1049_, lean_object* v_multigoals_1050_, lean_object* v_as_1051_, lean_object* v_i_1052_, lean_object* v_stop_1053_, lean_object* v_b_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
size_t v_i_boxed_1057_; size_t v_stop_boxed_1058_; lean_object* v_res_1059_; 
v_i_boxed_1057_ = lean_unbox_usize(v_i_1052_);
lean_dec(v_i_1052_);
v_stop_boxed_1058_ = lean_unbox_usize(v_stop_1053_);
lean_dec(v_stop_1053_);
v_res_1059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList_spec__0_spec__0_spec__3(v_00_u03c9_1049_, v_multigoals_1050_, v_as_1051_, v_i_boxed_1057_, v_stop_boxed_1058_, v_b_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v_as_1051_);
lean_dec(v_multigoals_1050_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13(lean_object* v_00_u03b2_1060_, lean_object* v_i_1061_, lean_object* v_source_1062_, lean_object* v_target_1063_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13___redArg(v_i_1061_, v_source_1062_, v_target_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13_spec__14(lean_object* v_00_u03b2_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTactics_spec__4_spec__10_spec__13_spec__14___redArg(v_x_1066_, v_x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__0(lean_object* v_a_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_nat_to_int(v_a_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___redArg(lean_object* v___y_1071_){
_start:
{
lean_object* v___x_1073_; lean_object* v_infoState_1074_; lean_object* v_trees_1075_; lean_object* v___x_1076_; 
v___x_1073_ = lean_st_ref_get(v___y_1071_);
v_infoState_1074_ = lean_ctor_get(v___x_1073_, 8);
lean_inc_ref(v_infoState_1074_);
lean_dec(v___x_1073_);
v_trees_1075_ = lean_ctor_get(v_infoState_1074_, 2);
lean_inc_ref(v_trees_1075_);
lean_dec_ref(v_infoState_1074_);
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v_trees_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___redArg___boxed(lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___redArg(v___y_1077_);
lean_dec(v___y_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3(lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___redArg(v___y_1081_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___boxed(lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3(v___y_1084_, v___y_1085_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
return v_res_1087_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = lean_box(0);
v___x_1089_ = lean_unsigned_to_nat(16u);
v___x_1090_ = lean_mk_array(v___x_1089_, v___x_1088_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1091_ = lean_obj_once(&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__0, &l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__0_once, _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__0);
v___x_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
lean_ctor_set(v___x_1093_, 1, v___x_1091_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0(lean_object* v_stx_1094_, lean_object* v_val_1095_, lean_object* v_a_1096_, lean_object* v_x_1097_){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1099_ = lean_obj_once(&l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__1, &l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__1_once, _init_l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___closed__1);
v___x_1100_ = lean_st_mk_ref(v___x_1099_);
v___x_1101_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_getTactics___redArg(v_stx_1094_, v___x_1100_);
v___x_1102_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_markUsedTacticsList___redArg(v_val_1095_, v_a_1096_, v___x_1100_);
v___x_1103_ = lean_st_ref_get(v___x_1100_);
lean_dec(v___x_1100_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___boxed(lean_object* v_stx_1105_, lean_object* v_val_1106_, lean_object* v_a_1107_, lean_object* v_x_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0(v_stx_1105_, v_val_1106_, v_a_1107_, v_x_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_val_1106_);
return v_res_1110_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0(uint8_t v___x_1112_, lean_object* v_x_1113_){
_start:
{
if (lean_obj_tag(v_x_1113_) == 1)
{
lean_object* v_pre_1114_; 
v_pre_1114_ = lean_ctor_get(v_x_1113_, 0);
if (lean_obj_tag(v_pre_1114_) == 0)
{
lean_object* v_str_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; 
v_str_1115_ = lean_ctor_get(v_x_1113_, 1);
v___x_1116_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0___closed__0));
v___x_1117_ = lean_string_dec_eq(v_str_1115_, v___x_1116_);
return v___x_1117_;
}
else
{
return v___x_1112_;
}
}
else
{
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0___boxed(lean_object* v___x_1118_, lean_object* v_x_1119_){
_start:
{
uint8_t v___x_8314__boxed_1120_; uint8_t v_res_1121_; lean_object* v_r_1122_; 
v___x_8314__boxed_1120_ = lean_unbox(v___x_1118_);
v_res_1121_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___lam__0(v___x_8314__boxed_1120_, v_x_1119_);
lean_dec(v_x_1119_);
v_r_1122_ = lean_box(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__13(lean_object* v_opts_1123_, lean_object* v_opt_1124_){
_start:
{
lean_object* v_name_1125_; lean_object* v_defValue_1126_; lean_object* v_map_1127_; lean_object* v___x_1128_; 
v_name_1125_ = lean_ctor_get(v_opt_1124_, 0);
v_defValue_1126_ = lean_ctor_get(v_opt_1124_, 1);
v_map_1127_ = lean_ctor_get(v_opts_1123_, 0);
v___x_1128_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1127_, v_name_1125_);
if (lean_obj_tag(v___x_1128_) == 0)
{
uint8_t v___x_1129_; 
v___x_1129_ = lean_unbox(v_defValue_1126_);
return v___x_1129_;
}
else
{
lean_object* v_val_1130_; 
v_val_1130_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_val_1130_);
lean_dec_ref_known(v___x_1128_, 1);
if (lean_obj_tag(v_val_1130_) == 1)
{
uint8_t v_v_1131_; 
v_v_1131_ = lean_ctor_get_uint8(v_val_1130_, 0);
lean_dec_ref_known(v_val_1130_, 0);
return v_v_1131_;
}
else
{
uint8_t v___x_1132_; 
lean_dec(v_val_1130_);
v___x_1132_ = lean_unbox(v_defValue_1126_);
return v___x_1132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__13___boxed(lean_object* v_opts_1133_, lean_object* v_opt_1134_){
_start:
{
uint8_t v_res_1135_; lean_object* v_r_1136_; 
v_res_1135_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__13(v_opts_1133_, v_opt_1134_);
lean_dec_ref(v_opt_1134_);
lean_dec_ref(v_opts_1133_);
v_r_1136_ = lean_box(v_res_1135_);
return v_r_1136_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1137_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__0);
v___x_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
return v___x_1139_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1140_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1);
v___x_1141_ = lean_unsigned_to_nat(0u);
v___x_1142_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
lean_ctor_set(v___x_1142_, 2, v___x_1141_);
lean_ctor_set(v___x_1142_, 3, v___x_1141_);
lean_ctor_set(v___x_1142_, 4, v___x_1140_);
lean_ctor_set(v___x_1142_, 5, v___x_1140_);
lean_ctor_set(v___x_1142_, 6, v___x_1140_);
lean_ctor_set(v___x_1142_, 7, v___x_1140_);
lean_ctor_set(v___x_1142_, 8, v___x_1140_);
lean_ctor_set(v___x_1142_, 9, v___x_1140_);
lean_ctor_set(v___x_1142_, 10, v___x_1140_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = lean_unsigned_to_nat(32u);
v___x_1144_ = lean_mk_empty_array_with_capacity(v___x_1143_);
v___x_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
return v___x_1145_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__4(void){
_start:
{
size_t v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1146_ = ((size_t)5ULL);
v___x_1147_ = lean_unsigned_to_nat(0u);
v___x_1148_ = lean_unsigned_to_nat(32u);
v___x_1149_ = lean_mk_empty_array_with_capacity(v___x_1148_);
v___x_1150_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__3);
v___x_1151_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
lean_ctor_set(v___x_1151_, 1, v___x_1149_);
lean_ctor_set(v___x_1151_, 2, v___x_1147_);
lean_ctor_set(v___x_1151_, 3, v___x_1147_);
lean_ctor_set_usize(v___x_1151_, 4, v___x_1146_);
return v___x_1151_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__5(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1152_ = lean_box(1);
v___x_1153_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__4);
v___x_1154_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__1);
v___x_1155_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
lean_ctor_set(v___x_1155_, 1, v___x_1153_);
lean_ctor_set(v___x_1155_, 2, v___x_1152_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg(lean_object* v_msgData_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v___x_1159_; lean_object* v_env_1160_; uint8_t v___x_1161_; lean_object* v_env_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v_scopes_1165_; lean_object* v___x_1166_; lean_object* v_opts_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1159_ = lean_st_ref_get(v___y_1157_);
v_env_1160_ = lean_ctor_get(v___x_1159_, 0);
lean_inc_ref(v_env_1160_);
lean_dec(v___x_1159_);
v___x_1161_ = 0;
v_env_1162_ = l_Lean_Environment_setRecordingDeps(v_env_1160_, v___x_1161_);
v___x_1163_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1164_ = lean_st_ref_get(v___y_1157_);
v_scopes_1165_ = lean_ctor_get(v___x_1164_, 2);
lean_inc(v_scopes_1165_);
lean_dec(v___x_1164_);
v___x_1166_ = l_List_head_x21___redArg(v___x_1163_, v_scopes_1165_);
lean_dec(v_scopes_1165_);
v_opts_1167_ = lean_ctor_get(v___x_1166_, 1);
lean_inc_ref(v_opts_1167_);
lean_dec(v___x_1166_);
v___x_1168_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__2);
v___x_1169_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___closed__5);
v___x_1170_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1170_, 0, v_env_1162_);
lean_ctor_set(v___x_1170_, 1, v___x_1168_);
lean_ctor_set(v___x_1170_, 2, v___x_1169_);
lean_ctor_set(v___x_1170_, 3, v_opts_1167_);
v___x_1171_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set(v___x_1171_, 1, v_msgData_1156_);
v___x_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg___boxed(lean_object* v_msgData_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg(v_msgData_1173_, v___y_1174_);
lean_dec(v___y_1174_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10(lean_object* v_ref_1181_, lean_object* v_msgData_1182_, uint8_t v_severity_1183_, uint8_t v_isSilent_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
uint8_t v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; uint8_t v___y_1192_; lean_object* v___y_1193_; lean_object* v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1254_; uint8_t v___y_1255_; lean_object* v___y_1256_; uint8_t v___y_1257_; lean_object* v___y_1258_; uint8_t v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; uint8_t v___y_1282_; lean_object* v___y_1283_; uint8_t v___y_1287_; uint8_t v___x_1315_; uint8_t v___x_1316_; 
v___x_1315_ = 2;
v___x_1316_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1183_, v___x_1315_);
if (v___x_1316_ == 0)
{
goto v___jp_1304_;
}
else
{
uint8_t v___x_1317_; 
lean_inc_ref(v_msgData_1182_);
v___x_1317_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1182_);
if (v___x_1317_ == 0)
{
goto v___jp_1304_;
}
else
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_dec_ref(v_msgData_1182_);
v___x_1318_ = lean_box(0);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
v___jp_1188_:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_Lean_Elab_Command_getScope___redArg(v___y_1196_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v_currNamespace_1199_; lean_object* v___x_1200_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___x_1197_, 1);
v_currNamespace_1199_ = lean_ctor_get(v_a_1198_, 2);
lean_inc(v_currNamespace_1199_);
lean_dec(v_a_1198_);
v___x_1200_ = l_Lean_Elab_Command_getScope___redArg(v___y_1196_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1236_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1236_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1236_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v_openDecls_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v_env_1210_; lean_object* v_messages_1211_; lean_object* v_scopes_1212_; lean_object* v_usedQuotCtxts_1213_; lean_object* v_nextMacroScope_1214_; lean_object* v_maxRecDepth_1215_; lean_object* v_ngen_1216_; lean_object* v_auxDeclNGen_1217_; lean_object* v_infoState_1218_; lean_object* v_traceState_1219_; lean_object* v_snapshotTasks_1220_; lean_object* v_prevLinterStates_1221_; lean_object* v_codeQualityEntryTasks_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1235_; 
v_openDecls_1205_ = lean_ctor_get(v_a_1201_, 3);
lean_inc(v_openDecls_1205_);
lean_dec(v_a_1201_);
v___x_1206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1206_, 0, v_currNamespace_1199_);
lean_ctor_set(v___x_1206_, 1, v_openDecls_1205_);
v___x_1207_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
lean_ctor_set(v___x_1207_, 1, v___y_1193_);
lean_inc_ref(v___y_1194_);
lean_inc_ref(v___y_1195_);
v___x_1208_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1208_, 0, v___y_1195_);
lean_ctor_set(v___x_1208_, 1, v___y_1191_);
lean_ctor_set(v___x_1208_, 2, v___y_1190_);
lean_ctor_set(v___x_1208_, 3, v___y_1194_);
lean_ctor_set(v___x_1208_, 4, v___x_1207_);
lean_ctor_set_uint8(v___x_1208_, sizeof(void*)*5, v___y_1189_);
lean_ctor_set_uint8(v___x_1208_, sizeof(void*)*5 + 1, v___y_1192_);
lean_ctor_set_uint8(v___x_1208_, sizeof(void*)*5 + 2, v_isSilent_1184_);
v___x_1209_ = lean_st_ref_take(v___y_1196_);
v_env_1210_ = lean_ctor_get(v___x_1209_, 0);
v_messages_1211_ = lean_ctor_get(v___x_1209_, 1);
v_scopes_1212_ = lean_ctor_get(v___x_1209_, 2);
v_usedQuotCtxts_1213_ = lean_ctor_get(v___x_1209_, 3);
v_nextMacroScope_1214_ = lean_ctor_get(v___x_1209_, 4);
v_maxRecDepth_1215_ = lean_ctor_get(v___x_1209_, 5);
v_ngen_1216_ = lean_ctor_get(v___x_1209_, 6);
v_auxDeclNGen_1217_ = lean_ctor_get(v___x_1209_, 7);
v_infoState_1218_ = lean_ctor_get(v___x_1209_, 8);
v_traceState_1219_ = lean_ctor_get(v___x_1209_, 9);
v_snapshotTasks_1220_ = lean_ctor_get(v___x_1209_, 10);
v_prevLinterStates_1221_ = lean_ctor_get(v___x_1209_, 11);
v_codeQualityEntryTasks_1222_ = lean_ctor_get(v___x_1209_, 12);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1224_ = v___x_1209_;
v_isShared_1225_ = v_isSharedCheck_1235_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1222_);
lean_inc(v_prevLinterStates_1221_);
lean_inc(v_snapshotTasks_1220_);
lean_inc(v_traceState_1219_);
lean_inc(v_infoState_1218_);
lean_inc(v_auxDeclNGen_1217_);
lean_inc(v_ngen_1216_);
lean_inc(v_maxRecDepth_1215_);
lean_inc(v_nextMacroScope_1214_);
lean_inc(v_usedQuotCtxts_1213_);
lean_inc(v_scopes_1212_);
lean_inc(v_messages_1211_);
lean_inc(v_env_1210_);
lean_dec(v___x_1209_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1235_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1229_; 
v___x_1226_ = lean_box(0);
v___x_1227_ = l_Lean_MessageLog_add(v___x_1208_, v_messages_1211_);
if (v_isShared_1225_ == 0)
{
lean_ctor_set(v___x_1224_, 1, v___x_1227_);
v___x_1229_ = v___x_1224_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_env_1210_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1234_, 2, v_scopes_1212_);
lean_ctor_set(v_reuseFailAlloc_1234_, 3, v_usedQuotCtxts_1213_);
lean_ctor_set(v_reuseFailAlloc_1234_, 4, v_nextMacroScope_1214_);
lean_ctor_set(v_reuseFailAlloc_1234_, 5, v_maxRecDepth_1215_);
lean_ctor_set(v_reuseFailAlloc_1234_, 6, v_ngen_1216_);
lean_ctor_set(v_reuseFailAlloc_1234_, 7, v_auxDeclNGen_1217_);
lean_ctor_set(v_reuseFailAlloc_1234_, 8, v_infoState_1218_);
lean_ctor_set(v_reuseFailAlloc_1234_, 9, v_traceState_1219_);
lean_ctor_set(v_reuseFailAlloc_1234_, 10, v_snapshotTasks_1220_);
lean_ctor_set(v_reuseFailAlloc_1234_, 11, v_prevLinterStates_1221_);
lean_ctor_set(v_reuseFailAlloc_1234_, 12, v_codeQualityEntryTasks_1222_);
v___x_1229_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1230_; lean_object* v___x_1232_; 
v___x_1230_ = lean_st_ref_put(v___y_1196_, v___x_1229_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1226_);
v___x_1232_ = v___x_1203_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1226_);
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
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec(v_currNamespace_1199_);
lean_dec_ref(v___y_1193_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
v_a_1237_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1200_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1200_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec_ref(v___y_1193_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
v_a_1245_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1197_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1197_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
v___jp_1253_:
{
lean_object* v_fileName_1259_; lean_object* v_fileMap_1260_; uint8_t v_suppressElabErrors_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1277_; 
v_fileName_1259_ = lean_ctor_get(v___y_1185_, 0);
v_fileMap_1260_ = lean_ctor_get(v___y_1185_, 1);
v_suppressElabErrors_1261_ = lean_ctor_get_uint8(v___y_1185_, sizeof(void*)*10);
v___x_1262_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1182_);
v___x_1263_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg(v___x_1262_, v___y_1186_);
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1277_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1277_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_inc_ref_n(v_fileMap_1260_, 2);
v___x_1268_ = l_Lean_FileMap_toPosition(v_fileMap_1260_, v___y_1256_);
lean_dec(v___y_1256_);
v___x_1269_ = l_Lean_FileMap_toPosition(v_fileMap_1260_, v___y_1258_);
lean_dec(v___y_1258_);
v___x_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
v___x_1271_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__0));
if (v_suppressElabErrors_1261_ == 0)
{
lean_del_object(v___x_1266_);
v___y_1189_ = v___y_1255_;
v___y_1190_ = v___x_1270_;
v___y_1191_ = v___x_1268_;
v___y_1192_ = v___y_1257_;
v___y_1193_ = v_a_1264_;
v___y_1194_ = v___x_1271_;
v___y_1195_ = v_fileName_1259_;
v___y_1196_ = v___y_1186_;
goto v___jp_1188_;
}
else
{
uint8_t v___x_1272_; 
lean_inc(v_a_1264_);
lean_inc_ref(v___y_1254_);
v___x_1272_ = l_Lean_MessageData_hasTag(v___y_1254_, v_a_1264_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1273_; lean_object* v___x_1275_; 
lean_dec_ref_known(v___x_1270_, 1);
lean_dec_ref(v___x_1268_);
lean_dec(v_a_1264_);
v___x_1273_ = lean_box(0);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1273_);
v___x_1275_ = v___x_1266_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
else
{
lean_del_object(v___x_1266_);
v___y_1189_ = v___y_1255_;
v___y_1190_ = v___x_1270_;
v___y_1191_ = v___x_1268_;
v___y_1192_ = v___y_1257_;
v___y_1193_ = v_a_1264_;
v___y_1194_ = v___x_1271_;
v___y_1195_ = v_fileName_1259_;
v___y_1196_ = v___y_1186_;
goto v___jp_1188_;
}
}
}
}
v___jp_1278_:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lean_Syntax_getTailPos_x3f(v___y_1281_, v___y_1279_);
lean_dec(v___y_1281_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_inc(v___y_1283_);
v___y_1254_ = v___y_1280_;
v___y_1255_ = v___y_1279_;
v___y_1256_ = v___y_1283_;
v___y_1257_ = v___y_1282_;
v___y_1258_ = v___y_1283_;
goto v___jp_1253_;
}
else
{
lean_object* v_val_1285_; 
v_val_1285_ = lean_ctor_get(v___x_1284_, 0);
lean_inc(v_val_1285_);
lean_dec_ref_known(v___x_1284_, 1);
v___y_1254_ = v___y_1280_;
v___y_1255_ = v___y_1279_;
v___y_1256_ = v___y_1283_;
v___y_1257_ = v___y_1282_;
v___y_1258_ = v_val_1285_;
goto v___jp_1253_;
}
}
v___jp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_Elab_Command_getRef___redArg(v___y_1185_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; lean_object* v_ref_1290_; uint8_t v___x_1291_; lean_object* v___f_1292_; lean_object* v___x_1293_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_a_1289_);
lean_dec_ref_known(v___x_1288_, 1);
v_ref_1290_ = l_Lean_replaceRef(v_ref_1181_, v_a_1289_);
lean_dec(v_a_1289_);
v___x_1291_ = 0;
v___f_1292_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___closed__1));
v___x_1293_ = l_Lean_Syntax_getPos_x3f(v_ref_1290_, v___x_1291_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_unsigned_to_nat(0u);
v___y_1279_ = v___x_1291_;
v___y_1280_ = v___f_1292_;
v___y_1281_ = v_ref_1290_;
v___y_1282_ = v___y_1287_;
v___y_1283_ = v___x_1294_;
goto v___jp_1278_;
}
else
{
lean_object* v_val_1295_; 
v_val_1295_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_val_1295_);
lean_dec_ref_known(v___x_1293_, 1);
v___y_1279_ = v___x_1291_;
v___y_1280_ = v___f_1292_;
v___y_1281_ = v_ref_1290_;
v___y_1282_ = v___y_1287_;
v___y_1283_ = v_val_1295_;
goto v___jp_1278_;
}
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v_msgData_1182_);
v_a_1296_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1288_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1288_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
v___jp_1304_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v_scopes_1307_; lean_object* v___x_1308_; lean_object* v_opts_1309_; uint8_t v___x_1310_; uint8_t v___x_1311_; 
v___x_1305_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1306_ = lean_st_ref_get(v___y_1186_);
v_scopes_1307_ = lean_ctor_get(v___x_1306_, 2);
lean_inc(v_scopes_1307_);
lean_dec(v___x_1306_);
v___x_1308_ = l_List_head_x21___redArg(v___x_1305_, v_scopes_1307_);
lean_dec(v_scopes_1307_);
v_opts_1309_ = lean_ctor_get(v___x_1308_, 1);
lean_inc_ref(v_opts_1309_);
lean_dec(v___x_1308_);
v___x_1310_ = 1;
v___x_1311_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1183_, v___x_1310_);
if (v___x_1311_ == 0)
{
lean_dec_ref(v_opts_1309_);
v___y_1287_ = v_severity_1183_;
goto v___jp_1286_;
}
else
{
lean_object* v___x_1312_; uint8_t v___x_1313_; 
v___x_1312_ = l_Lean_warningAsError;
v___x_1313_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__13(v_opts_1309_, v___x_1312_);
lean_dec_ref(v_opts_1309_);
if (v___x_1313_ == 0)
{
v___y_1287_ = v_severity_1183_;
goto v___jp_1286_;
}
else
{
uint8_t v___x_1314_; 
v___x_1314_ = 2;
v___y_1287_ = v___x_1314_;
goto v___jp_1286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10___boxed(lean_object* v_ref_1320_, lean_object* v_msgData_1321_, lean_object* v_severity_1322_, lean_object* v_isSilent_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
uint8_t v_severity_boxed_1327_; uint8_t v_isSilent_boxed_1328_; lean_object* v_res_1329_; 
v_severity_boxed_1327_ = lean_unbox(v_severity_1322_);
v_isSilent_boxed_1328_ = lean_unbox(v_isSilent_1323_);
v_res_1329_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10(v_ref_1320_, v_msgData_1321_, v_severity_boxed_1327_, v_isSilent_boxed_1328_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v_ref_1320_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3(lean_object* v_ref_1330_, lean_object* v_msgData_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
uint8_t v___x_1335_; uint8_t v___x_1336_; lean_object* v___x_1337_; 
v___x_1335_ = 1;
v___x_1336_ = 0;
v___x_1337_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10(v_ref_1330_, v_msgData_1331_, v___x_1335_, v___x_1336_, v___y_1332_, v___y_1333_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3___boxed(lean_object* v_ref_1338_, lean_object* v_msgData_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3(v_ref_1338_, v_msgData_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v_ref_1338_);
return v_res_1343_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__0));
v___x_1346_ = l_Lean_stringToMessageData(v___x_1345_);
return v___x_1346_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__2));
v___x_1349_ = l_Lean_stringToMessageData(v___x_1348_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1(lean_object* v_linterOption_1350_, lean_object* v_stx_1351_, lean_object* v_msg_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v_name_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1374_; 
v_name_1356_ = lean_ctor_get(v_linterOption_1350_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_linterOption_1350_);
if (v_isSharedCheck_1374_ == 0)
{
lean_object* v_unused_1375_; 
v_unused_1375_ = lean_ctor_get(v_linterOption_1350_, 1);
lean_dec(v_unused_1375_);
v___x_1358_ = v_linterOption_1350_;
v_isShared_1359_ = v_isSharedCheck_1374_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_name_1356_);
lean_dec(v_linterOption_1350_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1374_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1360_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__1);
lean_inc(v_name_1356_);
v___x_1361_ = l_Lean_MessageData_ofName(v_name_1356_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set_tag(v___x_1358_, 7);
lean_ctor_set(v___x_1358_, 1, v___x_1361_);
lean_ctor_set(v___x_1358_, 0, v___x_1360_);
v___x_1363_ = v___x_1358_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1373_, 1, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v_disable_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1364_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___closed__3);
v___x_1365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1363_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v_disable_1366_ = l_Lean_MessageData_note(v___x_1365_);
v___x_1367_ = l_Lean_Linter_linterMessageTag;
v___x_1368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1368_, 0, v_msg_1352_);
lean_ctor_set(v___x_1368_, 1, v_disable_1366_);
v___x_1369_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1367_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
v___x_1370_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1370_, 0, v_name_1356_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
lean_inc(v_stx_1351_);
v___x_1371_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_1371_, 0, v_stx_1351_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
v___x_1372_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3(v_stx_1351_, v___x_1371_, v___y_1353_, v___y_1354_);
lean_dec(v_stx_1351_);
return v___x_1372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1___boxed(lean_object* v_linterOption_1376_, lean_object* v_stx_1377_, lean_object* v_msg_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1(v_linterOption_1376_, v_stx_1377_, v_msg_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___redArg(lean_object* v_o_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v_env_1388_; lean_object* v___x_1389_; lean_object* v_toEnvExtension_1390_; lean_object* v_asyncMode_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v_merged_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1403_; 
v___x_1386_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1387_ = lean_st_ref_get(v___y_1384_);
v_env_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc_ref(v_env_1388_);
lean_dec(v___x_1387_);
v___x_1389_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1390_ = lean_ctor_get(v___x_1389_, 0);
v_asyncMode_1391_ = lean_ctor_get(v_toEnvExtension_1390_, 2);
v___x_1392_ = lean_box(0);
v___x_1393_ = 0;
v___x_1394_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1386_, v___x_1389_, v_env_1388_, v_asyncMode_1391_, v___x_1392_, v___x_1393_);
v_merged_1395_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1403_ == 0)
{
lean_object* v_unused_1404_; 
v_unused_1404_ = lean_ctor_get(v___x_1394_, 1);
lean_dec(v_unused_1404_);
v___x_1397_ = v___x_1394_;
v_isShared_1398_ = v_isSharedCheck_1403_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_merged_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1403_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 1, v_merged_1395_);
lean_ctor_set(v___x_1397_, 0, v_o_1383_);
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_o_1383_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_merged_1395_);
v___x_1400_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
return v___x_1401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___redArg___boxed(lean_object* v_o_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___redArg(v_o_1405_, v___y_1406_);
lean_dec(v___y_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2(lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v_scopes_1414_; lean_object* v___x_1415_; lean_object* v_opts_1416_; lean_object* v___x_1417_; 
v___x_1412_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1413_ = lean_st_ref_get(v___y_1410_);
v_scopes_1414_ = lean_ctor_get(v___x_1413_, 2);
lean_inc(v_scopes_1414_);
lean_dec(v___x_1413_);
v___x_1415_ = l_List_head_x21___redArg(v___x_1412_, v_scopes_1414_);
lean_dec(v_scopes_1414_);
v_opts_1416_ = lean_ctor_get(v___x_1415_, 1);
lean_inc_ref(v_opts_1416_);
lean_dec(v___x_1415_);
v___x_1417_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___redArg(v_opts_1416_, v___y_1410_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2___boxed(lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2(v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1(lean_object* v_linterOption_1422_, lean_object* v_stx_1423_, lean_object* v_msg_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v___x_1428_; lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1439_; 
v___x_1428_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2(v___y_1425_, v___y_1426_);
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1431_ = v___x_1428_;
v_isShared_1432_ = v_isSharedCheck_1439_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1428_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1439_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint8_t v___x_1433_; 
v___x_1433_ = l_Lean_Linter_getLinterValue(v_linterOption_1422_, v_a_1429_);
lean_dec(v_a_1429_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1436_; 
lean_dec_ref(v_msg_1424_);
lean_dec(v_stx_1423_);
lean_dec_ref(v_linterOption_1422_);
v___x_1434_ = lean_box(0);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1434_);
v___x_1436_ = v___x_1431_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1434_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
else
{
lean_object* v___x_1438_; 
lean_del_object(v___x_1431_);
v___x_1438_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1(v_linterOption_1422_, v_stx_1423_, v_msg_1424_, v___y_1425_, v___y_1426_);
return v___x_1438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1___boxed(lean_object* v_linterOption_1440_, lean_object* v_stx_1441_, lean_object* v_msg_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1(v_linterOption_1440_, v_stx_1441_, v_msg_1442_, v___y_1443_, v___y_1444_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
return v_res_1446_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__2(void){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1450_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__1));
v___x_1451_ = l_Lean_MessageData_ofFormat(v___x_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4(lean_object* v_as_1452_, size_t v_sz_1453_, size_t v_i_1454_, lean_object* v_b_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v_a_1460_; uint8_t v___x_1464_; 
v___x_1464_ = lean_usize_dec_lt(v_i_1454_, v_sz_1453_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1465_; 
v___x_1465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1465_, 0, v_b_1455_);
return v___x_1465_;
}
else
{
lean_object* v_a_1466_; lean_object* v_fst_1467_; lean_object* v_snd_1468_; lean_object* v_start_1481_; lean_object* v_stop_1482_; lean_object* v_start_1483_; lean_object* v_stop_1484_; uint8_t v___x_1485_; 
v_a_1466_ = lean_array_uget_borrowed(v_as_1452_, v_i_1454_);
v_fst_1467_ = lean_ctor_get(v_a_1466_, 0);
v_snd_1468_ = lean_ctor_get(v_a_1466_, 1);
v_start_1481_ = lean_ctor_get(v_b_1455_, 0);
v_stop_1482_ = lean_ctor_get(v_b_1455_, 1);
v_start_1483_ = lean_ctor_get(v_fst_1467_, 0);
v_stop_1484_ = lean_ctor_get(v_fst_1467_, 1);
v___x_1485_ = lean_nat_dec_le(v_start_1481_, v_start_1483_);
if (v___x_1485_ == 0)
{
lean_dec_ref(v_b_1455_);
goto v___jp_1469_;
}
else
{
uint8_t v___x_1486_; 
v___x_1486_ = lean_nat_dec_le(v_stop_1484_, v_stop_1482_);
if (v___x_1486_ == 0)
{
lean_dec_ref(v_b_1455_);
goto v___jp_1469_;
}
else
{
v_a_1460_ = v_b_1455_;
goto v___jp_1459_;
}
}
v___jp_1469_:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1470_ = l_Lean_Linter_Extra_linter_extra_unnecessarySeqFocus;
v___x_1471_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___closed__2);
lean_inc(v_snd_1468_);
v___x_1472_ = l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1(v___x_1470_, v_snd_1468_, v___x_1471_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_dec_ref_known(v___x_1472_, 1);
lean_inc(v_fst_1467_);
v_a_1460_ = v_fst_1467_;
goto v___jp_1459_;
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1472_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1472_);
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
}
v___jp_1459_:
{
size_t v___x_1461_; size_t v___x_1462_; 
v___x_1461_ = ((size_t)1ULL);
v___x_1462_ = lean_usize_add(v_i_1454_, v___x_1461_);
v_i_1454_ = v___x_1462_;
v_b_1455_ = v_a_1460_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4___boxed(lean_object* v_as_1487_, lean_object* v_sz_1488_, lean_object* v_i_1489_, lean_object* v_b_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
size_t v_sz_boxed_1494_; size_t v_i_boxed_1495_; lean_object* v_res_1496_; 
v_sz_boxed_1494_ = lean_unbox_usize(v_sz_1488_);
lean_dec(v_sz_1488_);
v_i_boxed_1495_ = lean_unbox_usize(v_i_1489_);
lean_dec(v_i_1489_);
v_res_1496_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4(v_as_1487_, v_sz_boxed_1494_, v_i_boxed_1495_, v_b_1490_, v___y_1491_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec_ref(v_as_1487_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__0(lean_object* v_r_1497_){
_start:
{
lean_object* v_start_1498_; lean_object* v_stop_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1508_; 
v_start_1498_ = lean_ctor_get(v_r_1497_, 0);
v_stop_1499_ = lean_ctor_get(v_r_1497_, 1);
v_isSharedCheck_1508_ = !lean_is_exclusive(v_r_1497_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1501_ = v_r_1497_;
v_isShared_1502_ = v_isSharedCheck_1508_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_stop_1499_);
lean_inc(v_start_1498_);
lean_dec(v_r_1497_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1508_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1506_; 
v___x_1503_ = lean_nat_to_int(v_stop_1499_);
v___x_1504_ = lean_int_neg(v___x_1503_);
lean_dec(v___x_1503_);
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 1, v___x_1504_);
v___x_1506_ = v___x_1501_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_start_1498_);
lean_ctor_set(v_reuseFailAlloc_1507_, 1, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg(lean_object* v_hi_1511_, lean_object* v_pivot_1512_, lean_object* v_as_1513_, lean_object* v_i_1514_, lean_object* v_k_1515_){
_start:
{
uint8_t v___x_1516_; 
v___x_1516_ = lean_nat_dec_lt(v_k_1515_, v_hi_1511_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
lean_dec(v_k_1515_);
lean_dec_ref(v_pivot_1512_);
v___x_1517_ = lean_array_fswap(v_as_1513_, v_i_1514_, v_hi_1511_);
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v_i_1514_);
lean_ctor_set(v___x_1518_, 1, v___x_1517_);
return v___x_1518_;
}
else
{
lean_object* v___x_1519_; lean_object* v_fst_1520_; lean_object* v_fst_1521_; lean_object* v___f_1522_; lean_object* v___f_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_8029__overap_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1519_ = lean_array_fget_borrowed(v_as_1513_, v_k_1515_);
v_fst_1520_ = lean_ctor_get(v___x_1519_, 0);
v_fst_1521_ = lean_ctor_get(v_pivot_1512_, 0);
v___f_1522_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__0));
v___f_1523_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__1));
lean_inc(v_fst_1520_);
v___x_1524_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__0(v_fst_1520_);
lean_inc(v_fst_1521_);
v___x_1525_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__0(v_fst_1521_);
v___x_8029__overap_1526_ = l_lexOrd___redArg(v___f_1522_, v___f_1523_);
v___x_1527_ = lean_apply_2(v___x_8029__overap_1526_, v___x_1524_, v___x_1525_);
v___x_1528_ = lean_unbox(v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1529_ = lean_array_fswap(v_as_1513_, v_i_1514_, v_k_1515_);
v___x_1530_ = lean_unsigned_to_nat(1u);
v___x_1531_ = lean_nat_add(v_i_1514_, v___x_1530_);
lean_dec(v_i_1514_);
v___x_1532_ = lean_nat_add(v_k_1515_, v___x_1530_);
lean_dec(v_k_1515_);
v_as_1513_ = v___x_1529_;
v_i_1514_ = v___x_1531_;
v_k_1515_ = v___x_1532_;
goto _start;
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = lean_unsigned_to_nat(1u);
v___x_1535_ = lean_nat_add(v_k_1515_, v___x_1534_);
lean_dec(v_k_1515_);
v_k_1515_ = v___x_1535_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___boxed(lean_object* v_hi_1537_, lean_object* v_pivot_1538_, lean_object* v_as_1539_, lean_object* v_i_1540_, lean_object* v_k_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg(v_hi_1537_, v_pivot_1538_, v_as_1539_, v_i_1540_, v_k_1541_);
lean_dec(v_hi_1537_);
return v_res_1542_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1(lean_object* v___f_1543_, lean_object* v___f_1544_, lean_object* v___f_1545_, uint8_t v___x_1546_, lean_object* v_x1_1547_, lean_object* v_x2_1548_){
_start:
{
lean_object* v_fst_1549_; lean_object* v_fst_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_8234__overap_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v_fst_1549_ = lean_ctor_get(v_x1_1547_, 0);
lean_inc(v_fst_1549_);
lean_dec_ref(v_x1_1547_);
v_fst_1550_ = lean_ctor_get(v_x2_1548_, 0);
lean_inc(v_fst_1550_);
lean_dec_ref(v_x2_1548_);
lean_inc_ref(v___f_1543_);
v___x_1551_ = lean_apply_1(v___f_1543_, v_fst_1549_);
v___x_1552_ = lean_apply_1(v___f_1543_, v_fst_1550_);
v___x_8234__overap_1553_ = l_lexOrd___redArg(v___f_1544_, v___f_1545_);
v___x_1554_ = lean_apply_2(v___x_8234__overap_1553_, v___x_1551_, v___x_1552_);
v___x_1555_ = lean_unbox(v___x_1554_);
if (v___x_1555_ == 0)
{
return v___x_1546_;
}
else
{
uint8_t v___x_1556_; 
v___x_1556_ = 0;
return v___x_1556_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1___boxed(lean_object* v___f_1557_, lean_object* v___f_1558_, lean_object* v___f_1559_, lean_object* v___x_1560_, lean_object* v_x1_1561_, lean_object* v_x2_1562_){
_start:
{
uint8_t v___x_8989__boxed_1563_; uint8_t v_res_1564_; lean_object* v_r_1565_; 
v___x_8989__boxed_1563_ = lean_unbox(v___x_1560_);
v_res_1564_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1(v___f_1557_, v___f_1558_, v___f_1559_, v___x_8989__boxed_1563_, v_x1_1561_, v_x2_1562_);
v_r_1565_ = lean_box(v_res_1564_);
return v_r_1565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg(lean_object* v_n_1567_, lean_object* v_as_1568_, lean_object* v_lo_1569_, lean_object* v_hi_1570_){
_start:
{
lean_object* v___y_1572_; uint8_t v___x_1582_; 
v___x_1582_ = lean_nat_dec_lt(v_lo_1569_, v_hi_1570_);
if (v___x_1582_ == 0)
{
lean_dec(v_lo_1569_);
return v_as_1568_;
}
else
{
lean_object* v___f_1583_; lean_object* v___f_1584_; lean_object* v___f_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v_mid_1588_; lean_object* v___y_1590_; lean_object* v___y_1596_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; 
v___f_1583_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___closed__0));
v___f_1584_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__0));
v___f_1585_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg___closed__1));
v___x_1586_ = lean_nat_add(v_lo_1569_, v_hi_1570_);
v___x_1587_ = lean_unsigned_to_nat(1u);
v_mid_1588_ = lean_nat_shiftr(v___x_1586_, v___x_1587_);
lean_dec(v___x_1586_);
v___x_1601_ = lean_array_fget_borrowed(v_as_1568_, v_mid_1588_);
v___x_1602_ = lean_array_fget_borrowed(v_as_1568_, v_lo_1569_);
lean_inc(v___x_1602_);
lean_inc(v___x_1601_);
v___x_1603_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1(v___f_1583_, v___f_1584_, v___f_1585_, v___x_1582_, v___x_1601_, v___x_1602_);
if (v___x_1603_ == 0)
{
v___y_1596_ = v_as_1568_;
goto v___jp_1595_;
}
else
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_array_fswap(v_as_1568_, v_lo_1569_, v_mid_1588_);
v___y_1596_ = v___x_1604_;
goto v___jp_1595_;
}
v___jp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1591_ = lean_array_fget_borrowed(v___y_1590_, v_mid_1588_);
v___x_1592_ = lean_array_fget_borrowed(v___y_1590_, v_hi_1570_);
lean_inc(v___x_1592_);
lean_inc(v___x_1591_);
v___x_1593_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1(v___f_1583_, v___f_1584_, v___f_1585_, v___x_1582_, v___x_1591_, v___x_1592_);
if (v___x_1593_ == 0)
{
lean_dec(v_mid_1588_);
v___y_1572_ = v___y_1590_;
goto v___jp_1571_;
}
else
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_array_fswap(v___y_1590_, v_mid_1588_, v_hi_1570_);
lean_dec(v_mid_1588_);
v___y_1572_ = v___x_1594_;
goto v___jp_1571_;
}
}
v___jp_1595_:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v___x_1597_ = lean_array_fget_borrowed(v___y_1596_, v_hi_1570_);
v___x_1598_ = lean_array_fget_borrowed(v___y_1596_, v_lo_1569_);
lean_inc(v___x_1598_);
lean_inc(v___x_1597_);
v___x_1599_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___lam__1(v___f_1583_, v___f_1584_, v___f_1585_, v___x_1582_, v___x_1597_, v___x_1598_);
if (v___x_1599_ == 0)
{
v___y_1590_ = v___y_1596_;
goto v___jp_1589_;
}
else
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_array_fswap(v___y_1596_, v_lo_1569_, v_hi_1570_);
v___y_1590_ = v___x_1600_;
goto v___jp_1589_;
}
}
}
v___jp_1571_:
{
lean_object* v_pivot_1573_; lean_object* v___x_1574_; lean_object* v_fst_1575_; lean_object* v_snd_1576_; uint8_t v___x_1577_; 
v_pivot_1573_ = lean_array_fget(v___y_1572_, v_hi_1570_);
lean_inc_n(v_lo_1569_, 2);
v___x_1574_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg(v_hi_1570_, v_pivot_1573_, v___y_1572_, v_lo_1569_, v_lo_1569_);
v_fst_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_fst_1575_);
v_snd_1576_ = lean_ctor_get(v___x_1574_, 1);
lean_inc(v_snd_1576_);
lean_dec_ref(v___x_1574_);
v___x_1577_ = lean_nat_dec_le(v_hi_1570_, v_fst_1575_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1578_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg(v_n_1567_, v_snd_1576_, v_lo_1569_, v_fst_1575_);
v___x_1579_ = lean_unsigned_to_nat(1u);
v___x_1580_ = lean_nat_add(v_fst_1575_, v___x_1579_);
lean_dec(v_fst_1575_);
v_as_1568_ = v___x_1578_;
v_lo_1569_ = v___x_1580_;
goto _start;
}
else
{
lean_dec(v_fst_1575_);
lean_dec(v_lo_1569_);
return v_snd_1576_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg___boxed(lean_object* v_n_1605_, lean_object* v_as_1606_, lean_object* v_lo_1607_, lean_object* v_hi_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg(v_n_1605_, v_as_1606_, v_lo_1607_, v_hi_1608_);
lean_dec(v_hi_1608_);
lean_dec(v_n_1605_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__6(uint8_t v___x_1610_, lean_object* v_x_1611_, lean_object* v_x_1612_){
_start:
{
if (lean_obj_tag(v_x_1612_) == 0)
{
return v_x_1611_;
}
else
{
lean_object* v_value_1613_; uint8_t v_used_1614_; 
v_value_1613_ = lean_ctor_get(v_x_1612_, 1);
v_used_1614_ = lean_ctor_get_uint8(v_value_1613_, sizeof(void*)*1);
if (v_used_1614_ == 0)
{
lean_object* v_tail_1615_; 
v_tail_1615_ = lean_ctor_get(v_x_1612_, 2);
lean_inc(v_tail_1615_);
lean_dec_ref_known(v_x_1612_, 3);
v_x_1612_ = v_tail_1615_;
goto _start;
}
else
{
lean_object* v_key_1617_; lean_object* v_tail_1618_; lean_object* v_stx_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___y_1623_; lean_object* v___x_1627_; 
lean_inc(v_value_1613_);
v_key_1617_ = lean_ctor_get(v_x_1612_, 0);
lean_inc(v_key_1617_);
v_tail_1618_ = lean_ctor_get(v_x_1612_, 2);
lean_inc(v_tail_1618_);
lean_dec_ref_known(v_x_1612_, 3);
v_stx_1619_ = lean_ctor_get(v_value_1613_, 0);
lean_inc(v_stx_1619_);
lean_dec(v_value_1613_);
v___x_1620_ = lean_unsigned_to_nat(1u);
v___x_1621_ = l_Lean_Syntax_getArg(v_stx_1619_, v___x_1620_);
lean_dec(v_stx_1619_);
v___x_1627_ = l_Lean_Syntax_getRange_x3f(v___x_1621_, v___x_1610_);
if (lean_obj_tag(v___x_1627_) == 0)
{
v___y_1623_ = v_key_1617_;
goto v___jp_1622_;
}
else
{
lean_object* v_val_1628_; 
lean_dec(v_key_1617_);
v_val_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_val_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v___y_1623_ = v_val_1628_;
goto v___jp_1622_;
}
v___jp_1622_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___y_1623_);
lean_ctor_set(v___x_1624_, 1, v___x_1621_);
v___x_1625_ = lean_array_push(v_x_1611_, v___x_1624_);
v_x_1611_ = v___x_1625_;
v_x_1612_ = v_tail_1618_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__6___boxed(lean_object* v___x_1629_, lean_object* v_x_1630_, lean_object* v_x_1631_){
_start:
{
uint8_t v___x_9083__boxed_1632_; lean_object* v_res_1633_; 
v___x_9083__boxed_1632_ = lean_unbox(v___x_1629_);
v_res_1633_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__6(v___x_9083__boxed_1632_, v_x_1630_, v_x_1631_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__7(uint8_t v___x_1634_, lean_object* v_as_1635_, size_t v_i_1636_, size_t v_stop_1637_, lean_object* v_b_1638_){
_start:
{
uint8_t v___x_1639_; 
v___x_1639_ = lean_usize_dec_eq(v_i_1636_, v_stop_1637_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; lean_object* v___x_1641_; size_t v___x_1642_; size_t v___x_1643_; 
v___x_1640_ = lean_array_uget_borrowed(v_as_1635_, v_i_1636_);
lean_inc(v___x_1640_);
v___x_1641_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__6(v___x_1634_, v_b_1638_, v___x_1640_);
v___x_1642_ = ((size_t)1ULL);
v___x_1643_ = lean_usize_add(v_i_1636_, v___x_1642_);
v_i_1636_ = v___x_1643_;
v_b_1638_ = v___x_1641_;
goto _start;
}
else
{
return v_b_1638_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__7___boxed(lean_object* v___x_1645_, lean_object* v_as_1646_, lean_object* v_i_1647_, lean_object* v_stop_1648_, lean_object* v_b_1649_){
_start:
{
uint8_t v___x_9124__boxed_1650_; size_t v_i_boxed_1651_; size_t v_stop_boxed_1652_; lean_object* v_res_1653_; 
v___x_9124__boxed_1650_ = lean_unbox(v___x_1645_);
v_i_boxed_1651_ = lean_unbox_usize(v_i_1647_);
lean_dec(v_i_1647_);
v_stop_boxed_1652_ = lean_unbox_usize(v_stop_1648_);
lean_dec(v_stop_1648_);
v_res_1653_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__7(v___x_9124__boxed_1650_, v_as_1646_, v_i_boxed_1651_, v_stop_boxed_1652_, v_b_1649_);
lean_dec_ref(v_as_1646_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1(lean_object* v_stx_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v___x_1662_; lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1743_; 
v___x_1662_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2(v___y_1659_, v___y_1660_);
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1665_ = v___x_1662_;
v_isShared_1666_ = v_isSharedCheck_1743_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1662_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1743_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1667_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1667_ = lean_st_ref_get(v___y_1660_);
v___x_1673_ = l_Lean_Linter_Extra_linter_extra_unnecessarySeqFocus;
v___x_1674_ = l_Lean_Linter_getLinterValue(v___x_1673_, v_a_1663_);
lean_dec(v_a_1663_);
if (v___x_1674_ == 0)
{
lean_dec(v___x_1667_);
lean_dec(v_stx_1658_);
goto v___jp_1668_;
}
else
{
lean_object* v_infoState_1675_; uint8_t v_enabled_1676_; 
v_infoState_1675_ = lean_ctor_get(v___x_1667_, 8);
lean_inc_ref(v_infoState_1675_);
lean_dec(v___x_1667_);
v_enabled_1676_ = lean_ctor_get_uint8(v_infoState_1675_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1675_);
if (v_enabled_1676_ == 0)
{
lean_dec(v_stx_1658_);
goto v___jp_1668_;
}
else
{
lean_object* v___x_1677_; lean_object* v_messages_1678_; uint8_t v___x_1679_; 
lean_del_object(v___x_1665_);
v___x_1677_ = lean_st_ref_get(v___y_1660_);
v_messages_1678_ = lean_ctor_get(v___x_1677_, 1);
lean_inc_ref(v_messages_1678_);
lean_dec(v___x_1677_);
v___x_1679_ = l_Lean_MessageLog_hasErrors(v_messages_1678_);
lean_dec_ref(v_messages_1678_);
if (v___x_1679_ == 0)
{
lean_object* v___x_1680_; lean_object* v_a_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1722_; lean_object* v___f_1730_; lean_object* v___x_1731_; lean_object* v_snd_1732_; lean_object* v_buckets_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1680_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__3___redArg(v___y_1660_);
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_a_1681_);
lean_dec_ref(v___x_1680_);
v___x_1682_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_multigoalKindsRef;
v___x_1683_ = lean_st_ref_get(v___x_1682_);
v___f_1730_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1730_, 0, v_stx_1658_);
lean_closure_set(v___f_1730_, 1, v___x_1683_);
lean_closure_set(v___f_1730_, 2, v_a_1681_);
v___x_1731_ = l_runST___redArg(v___f_1730_);
v_snd_1732_ = lean_ctor_get(v___x_1731_, 1);
lean_inc(v_snd_1732_);
lean_dec(v___x_1731_);
v_buckets_1733_ = lean_ctor_get(v_snd_1732_, 1);
lean_inc_ref(v_buckets_1733_);
lean_dec(v_snd_1732_);
v___x_1734_ = lean_unsigned_to_nat(0u);
v___x_1735_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__1));
v___x_1736_ = lean_array_get_size(v_buckets_1733_);
v___x_1737_ = lean_nat_dec_lt(v___x_1734_, v___x_1736_);
if (v___x_1737_ == 0)
{
lean_dec_ref(v_buckets_1733_);
v___y_1722_ = v___x_1735_;
goto v___jp_1721_;
}
else
{
size_t v___x_1738_; size_t v___x_1739_; lean_object* v___x_1740_; 
v___x_1738_ = ((size_t)0ULL);
v___x_1739_ = lean_usize_of_nat(v___x_1736_);
v___x_1740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__7(v___x_1679_, v_buckets_1733_, v___x_1738_, v___x_1739_, v___x_1735_);
lean_dec_ref(v_buckets_1733_);
v___y_1722_ = v___x_1740_;
goto v___jp_1721_;
}
v___jp_1684_:
{
size_t v_sz_1687_; size_t v___x_1688_; lean_object* v___x_1689_; 
v_sz_1687_ = lean_array_size(v___y_1686_);
v___x_1688_ = ((size_t)0ULL);
lean_inc_ref(v___y_1685_);
v___x_1689_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__4(v___y_1686_, v_sz_1687_, v___x_1688_, v___y_1685_, v___y_1659_, v___y_1660_);
lean_dec_ref(v___y_1686_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1697_; 
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1697_ == 0)
{
lean_object* v_unused_1698_; 
v_unused_1698_ = lean_ctor_get(v___x_1689_, 0);
lean_dec(v_unused_1698_);
v___x_1691_ = v___x_1689_;
v_isShared_1692_ = v_isSharedCheck_1697_;
goto v_resetjp_1690_;
}
else
{
lean_dec(v___x_1689_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1697_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1693_ = lean_box(0);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1693_);
v___x_1695_ = v___x_1691_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
v_a_1699_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1689_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1689_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
v___jp_1707_:
{
lean_object* v___x_1713_; 
v___x_1713_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg(v___y_1709_, v___y_1710_, v___y_1708_, v___y_1712_);
lean_dec(v___y_1712_);
lean_dec(v___y_1709_);
v___y_1685_ = v___y_1711_;
v___y_1686_ = v___x_1713_;
goto v___jp_1684_;
}
v___jp_1714_:
{
uint8_t v___x_1720_; 
v___x_1720_ = lean_nat_dec_le(v___y_1719_, v___y_1716_);
if (v___x_1720_ == 0)
{
lean_dec(v___y_1716_);
lean_inc(v___y_1719_);
v___y_1708_ = v___y_1719_;
v___y_1709_ = v___y_1715_;
v___y_1710_ = v___y_1717_;
v___y_1711_ = v___y_1718_;
v___y_1712_ = v___y_1719_;
goto v___jp_1707_;
}
else
{
v___y_1708_ = v___y_1719_;
v___y_1709_ = v___y_1715_;
v___y_1710_ = v___y_1717_;
v___y_1711_ = v___y_1718_;
v___y_1712_ = v___y_1716_;
goto v___jp_1707_;
}
}
v___jp_1721_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; uint8_t v___x_1726_; 
v___x_1723_ = lean_unsigned_to_nat(0u);
v___x_1724_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___closed__0));
v___x_1725_ = lean_array_get_size(v___y_1722_);
v___x_1726_ = lean_nat_dec_eq(v___x_1725_, v___x_1723_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; 
v___x_1727_ = lean_unsigned_to_nat(1u);
v___x_1728_ = lean_nat_sub(v___x_1725_, v___x_1727_);
v___x_1729_ = lean_nat_dec_le(v___x_1723_, v___x_1728_);
if (v___x_1729_ == 0)
{
lean_inc(v___x_1728_);
v___y_1715_ = v___x_1725_;
v___y_1716_ = v___x_1728_;
v___y_1717_ = v___y_1722_;
v___y_1718_ = v___x_1724_;
v___y_1719_ = v___x_1728_;
goto v___jp_1714_;
}
else
{
v___y_1715_ = v___x_1725_;
v___y_1716_ = v___x_1728_;
v___y_1717_ = v___y_1722_;
v___y_1718_ = v___x_1724_;
v___y_1719_ = v___x_1723_;
goto v___jp_1714_;
}
}
else
{
v___y_1685_ = v___x_1724_;
v___y_1686_ = v___y_1722_;
goto v___jp_1684_;
}
}
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; 
lean_dec(v_stx_1658_);
v___x_1741_ = lean_box(0);
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1741_);
return v___x_1742_;
}
}
}
v___jp_1668_:
{
lean_object* v___x_1669_; lean_object* v___x_1671_; 
v___x_1669_ = lean_box(0);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1669_);
v___x_1671_ = v___x_1665_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1669_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1___boxed(lean_object* v_stx_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter___lam__1(v_stx_1744_, v___y_1745_, v___y_1746_);
lean_dec(v___y_1746_);
lean_dec_ref(v___y_1745_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3(lean_object* v_o_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___redArg(v_o_1764_, v___y_1766_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3___boxed(lean_object* v_o_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__2_spec__3(v_o_1769_, v___y_1770_, v___y_1771_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5(lean_object* v_n_1774_, lean_object* v_as_1775_, lean_object* v_lo_1776_, lean_object* v_hi_1777_, lean_object* v_w_1778_, lean_object* v_hlo_1779_, lean_object* v_hhi_1780_){
_start:
{
lean_object* v___x_1781_; 
v___x_1781_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___redArg(v_n_1774_, v_as_1775_, v_lo_1776_, v_hi_1777_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5___boxed(lean_object* v_n_1782_, lean_object* v_as_1783_, lean_object* v_lo_1784_, lean_object* v_hi_1785_, lean_object* v_w_1786_, lean_object* v_hlo_1787_, lean_object* v_hhi_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5(v_n_1782_, v_as_1783_, v_lo_1784_, v_hi_1785_, v_w_1786_, v_hlo_1787_, v_hhi_1788_);
lean_dec(v_hi_1785_);
lean_dec(v_n_1782_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7(lean_object* v_n_1790_, lean_object* v_lo_1791_, lean_object* v_hi_1792_, lean_object* v_hhi_1793_, lean_object* v_pivot_1794_, lean_object* v_as_1795_, lean_object* v_i_1796_, lean_object* v_k_1797_, lean_object* v_ilo_1798_, lean_object* v_ik_1799_, lean_object* v_w_1800_){
_start:
{
lean_object* v___x_1801_; 
v___x_1801_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___redArg(v_hi_1792_, v_pivot_1794_, v_as_1795_, v_i_1796_, v_k_1797_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7___boxed(lean_object* v_n_1802_, lean_object* v_lo_1803_, lean_object* v_hi_1804_, lean_object* v_hhi_1805_, lean_object* v_pivot_1806_, lean_object* v_as_1807_, lean_object* v_i_1808_, lean_object* v_k_1809_, lean_object* v_ilo_1810_, lean_object* v_ik_1811_, lean_object* v_w_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__5_spec__7(v_n_1802_, v_lo_1803_, v_hi_1804_, v_hhi_1805_, v_pivot_1806_, v_as_1807_, v_i_1808_, v_k_1809_, v_ilo_1810_, v_ik_1811_, v_w_1812_);
lean_dec(v_hi_1804_);
lean_dec(v_lo_1803_);
lean_dec(v_n_1802_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12(lean_object* v_msgData_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___redArg(v_msgData_1814_, v___y_1816_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12___boxed(lean_object* v_msgData_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter_spec__1_spec__1_spec__3_spec__10_spec__12(v_msgData_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3917858151____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = ((lean_object*)(l_Lean_Linter_Extra_UnnecessarySeqFocus_unnecessarySeqFocusLinter));
v___x_1826_ = l_Lean_Elab_Command_addLinter(v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3917858151____hygCtx___hyg_2____boxed(lean_object* v_a_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3917858151____hygCtx___hyg_2_();
return v_res_1828_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Extra_UnnecessarySeqFocus(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1679277753____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Extra_linter_extra_unnecessarySeqFocus = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Extra_linter_extra_unnecessarySeqFocus);
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3107221289____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Extra_UnnecessarySeqFocus_multigoalKindsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Extra_UnnecessarySeqFocus_multigoalKindsRef);
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_UnnecessarySeqFocus_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_1921352623____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnnecessarySeqFocus_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnnecessarySeqFocus_3917858151____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Extra_UnnecessarySeqFocus(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Extra_UnnecessarySeqFocus(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Extra_UnnecessarySeqFocus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Extra_UnnecessarySeqFocus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Extra_UnnecessarySeqFocus(builtin);
}
#ifdef __cplusplus
}
#endif
