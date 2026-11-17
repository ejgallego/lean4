// Lean compiler output
// Module: Lean.Linter.Extra.UnreachableTactic
// Imports: public import Lean.Elab.Command public import Lean.Linter.Basic public import Lean.Parser.Syntax public import Init.Try
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_NameHashSet_contains(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default;
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
extern lean_object* l_Lean_Parser_parserExtension;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
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
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_instOrdNat___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instOrdInt___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_lexOrd___redArg(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unreachableTactic"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(33, 183, 205, 183, 92, 15, 88, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(136, 56, 214, 109, 29, 26, 244, 93)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "enable the 'unreachable tactic' linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Extra"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 33, 172, 180, 73, 123, 191, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(105, 61, 181, 137, 182, 231, 65, 137)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(160, 216, 142, 110, 226, 73, 5, 212)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_linter_extra_unreachableTactic;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "binderTactic"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__4_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 181, 78, 34, 190, 12, 180, 92)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dynamicQuot"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 123, 139, 164, 173, 191, 116, 242)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__10_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__10_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__10_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__11_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "quotSeq"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__11_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__11_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__10_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__11_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(171, 67, 133, 150, 48, 85, 223, 184)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__13_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__13_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__14_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticStop_"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__14_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__14_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__10_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__14_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 187, 217, 116, 133, 153, 2, 108)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__16_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__16_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__17_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__17_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__17_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__18_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "notation"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__18_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__18_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__17_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__18_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 34, 53, 7, 182, 20, 8, 182)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__20_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__20_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__21_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mixfix"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__21_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__21_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__17_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__21_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 31, 80, 86, 44, 46, 155, 0)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__23_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__23_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__24_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "registerTryTactic"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__24_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__24_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__17_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__24_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(64, 133, 180, 171, 152, 84, 222, 30)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__26_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__26_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__27_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "discharger"};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__27_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__27_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__2_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__10_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__27_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(233, 186, 255, 143, 150, 72, 152, 71)}};
static const lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__29_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__29_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_ignoreTacticKindsRef;
static const lean_string_object l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_addIgnoreTacticKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_addIgnoreTacticKind___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__0;
static lean_once_cell_t l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__1;
static const lean_closure_object l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqRange_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__2_value;
static const lean_closure_object l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instHashableRange_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__0(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instOrdNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instOrdInt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__20___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "this tactic is never executed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__1_value;
static const lean_string_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "conv"};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 67, 39, 189, 45, 247, 54, 81)}};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__4;
static lean_once_cell_t l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__5;
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__6 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__0;
static lean_once_cell_t l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__1;
static const lean_string_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "UnreachableTactic"};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__2_value;
static const lean_string_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unreachableTacticLinter"};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__3_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_2),((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(140, 193, 179, 4, 1, 11, 28, 35)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value_aux_3),((lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__3_value),LEAN_SCALAR_PTR_LITERAL(242, 29, 169, 147, 81, 15, 32, 76)}};
static const lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4 = (const lean_object*)&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4_value;
static lean_once_cell_t l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__5;
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_1366347041____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_1366347041____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_));
v___x_59_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_));
v___x_60_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_));
v___x_61_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4__spec__0(v___x_58_, v___x_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4____boxed(lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_();
return v_res_63_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_a_64_, lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
uint8_t v___x_66_; 
v___x_66_ = 0;
return v___x_66_;
}
else
{
lean_object* v_key_67_; lean_object* v_tail_68_; uint8_t v___x_69_; 
v_key_67_ = lean_ctor_get(v_x_65_, 0);
v_tail_68_ = lean_ctor_get(v_x_65_, 2);
v___x_69_ = lean_name_eq(v_key_67_, v_a_64_);
if (v___x_69_ == 0)
{
v_x_65_ = v_tail_68_;
goto _start;
}
else
{
return v___x_69_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_a_71_, lean_object* v_x_72_){
_start:
{
uint8_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_71_, v_x_72_);
lean_dec(v_x_72_);
lean_dec(v_a_71_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_75_, lean_object* v_x_76_){
_start:
{
if (lean_obj_tag(v_x_76_) == 0)
{
return v_x_75_;
}
else
{
lean_object* v_key_77_; lean_object* v_value_78_; lean_object* v_tail_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_105_; 
v_key_77_ = lean_ctor_get(v_x_76_, 0);
v_value_78_ = lean_ctor_get(v_x_76_, 1);
v_tail_79_ = lean_ctor_get(v_x_76_, 2);
v_isSharedCheck_105_ = !lean_is_exclusive(v_x_76_);
if (v_isSharedCheck_105_ == 0)
{
v___x_81_ = v_x_76_;
v_isShared_82_ = v_isSharedCheck_105_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_tail_79_);
lean_inc(v_value_78_);
lean_inc(v_key_77_);
lean_dec(v_x_76_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_105_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; uint64_t v___y_85_; 
v___x_83_ = lean_array_get_size(v_x_75_);
if (lean_obj_tag(v_key_77_) == 0)
{
uint64_t v___x_103_; 
v___x_103_ = 1723ULL;
v___y_85_ = v___x_103_;
goto v___jp_84_;
}
else
{
uint64_t v_hash_104_; 
v_hash_104_ = lean_ctor_get_uint64(v_key_77_, sizeof(void*)*2);
v___y_85_ = v_hash_104_;
goto v___jp_84_;
}
v___jp_84_:
{
uint64_t v___x_86_; uint64_t v___x_87_; uint64_t v_fold_88_; uint64_t v___x_89_; uint64_t v___x_90_; uint64_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; size_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_86_ = 32ULL;
v___x_87_ = lean_uint64_shift_right(v___y_85_, v___x_86_);
v_fold_88_ = lean_uint64_xor(v___y_85_, v___x_87_);
v___x_89_ = 16ULL;
v___x_90_ = lean_uint64_shift_right(v_fold_88_, v___x_89_);
v___x_91_ = lean_uint64_xor(v_fold_88_, v___x_90_);
v___x_92_ = lean_uint64_to_usize(v___x_91_);
v___x_93_ = lean_usize_of_nat(v___x_83_);
v___x_94_ = ((size_t)1ULL);
v___x_95_ = lean_usize_sub(v___x_93_, v___x_94_);
v___x_96_ = lean_usize_land(v___x_92_, v___x_95_);
v___x_97_ = lean_array_uget_borrowed(v_x_75_, v___x_96_);
lean_inc(v___x_97_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 2, v___x_97_);
v___x_99_ = v___x_81_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_key_77_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v_value_78_);
lean_ctor_set(v_reuseFailAlloc_102_, 2, v___x_97_);
v___x_99_ = v_reuseFailAlloc_102_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_object* v___x_100_; 
v___x_100_ = lean_array_uset(v_x_75_, v___x_96_, v___x_99_);
v_x_75_ = v___x_100_;
v_x_76_ = v_tail_79_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object* v_i_106_, lean_object* v_source_107_, lean_object* v_target_108_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_array_get_size(v_source_107_);
v___x_110_ = lean_nat_dec_lt(v_i_106_, v___x_109_);
if (v___x_110_ == 0)
{
lean_dec_ref(v_source_107_);
lean_dec(v_i_106_);
return v_target_108_;
}
else
{
lean_object* v_es_111_; lean_object* v___x_112_; lean_object* v_source_113_; lean_object* v_target_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_es_111_ = lean_array_fget(v_source_107_, v_i_106_);
v___x_112_ = lean_box(0);
v_source_113_ = lean_array_fset(v_source_107_, v_i_106_, v___x_112_);
v_target_114_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(v_target_108_, v_es_111_);
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_add(v_i_106_, v___x_115_);
lean_dec(v_i_106_);
v_i_106_ = v___x_116_;
v_source_107_ = v_source_113_;
v_target_108_ = v_target_114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_data_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_nbuckets_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_119_ = lean_array_get_size(v_data_118_);
v___x_120_ = lean_unsigned_to_nat(2u);
v_nbuckets_121_ = lean_nat_mul(v___x_119_, v___x_120_);
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_box(0);
v___x_124_ = lean_mk_array(v_nbuckets_121_, v___x_123_);
v___x_125_ = lean_array_propagate_mark(v_data_118_, v___x_124_);
v___x_126_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v___x_122_, v_data_118_, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(lean_object* v_m_127_, lean_object* v_a_128_, lean_object* v_b_129_){
_start:
{
lean_object* v_size_130_; lean_object* v_buckets_131_; lean_object* v___x_132_; uint64_t v___y_134_; 
v_size_130_ = lean_ctor_get(v_m_127_, 0);
v_buckets_131_ = lean_ctor_get(v_m_127_, 1);
v___x_132_ = lean_array_get_size(v_buckets_131_);
if (lean_obj_tag(v_a_128_) == 0)
{
uint64_t v___x_171_; 
v___x_171_ = 1723ULL;
v___y_134_ = v___x_171_;
goto v___jp_133_;
}
else
{
uint64_t v_hash_172_; 
v_hash_172_ = lean_ctor_get_uint64(v_a_128_, sizeof(void*)*2);
v___y_134_ = v_hash_172_;
goto v___jp_133_;
}
v___jp_133_:
{
uint64_t v___x_135_; uint64_t v___x_136_; uint64_t v_fold_137_; uint64_t v___x_138_; uint64_t v___x_139_; uint64_t v___x_140_; size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; lean_object* v_bkt_146_; uint8_t v___x_147_; 
v___x_135_ = 32ULL;
v___x_136_ = lean_uint64_shift_right(v___y_134_, v___x_135_);
v_fold_137_ = lean_uint64_xor(v___y_134_, v___x_136_);
v___x_138_ = 16ULL;
v___x_139_ = lean_uint64_shift_right(v_fold_137_, v___x_138_);
v___x_140_ = lean_uint64_xor(v_fold_137_, v___x_139_);
v___x_141_ = lean_uint64_to_usize(v___x_140_);
v___x_142_ = lean_usize_of_nat(v___x_132_);
v___x_143_ = ((size_t)1ULL);
v___x_144_ = lean_usize_sub(v___x_142_, v___x_143_);
v___x_145_ = lean_usize_land(v___x_141_, v___x_144_);
v_bkt_146_ = lean_array_uget_borrowed(v_buckets_131_, v___x_145_);
v___x_147_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_128_, v_bkt_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_168_; 
lean_inc_ref(v_buckets_131_);
lean_inc(v_size_130_);
v_isSharedCheck_168_ = !lean_is_exclusive(v_m_127_);
if (v_isSharedCheck_168_ == 0)
{
lean_object* v_unused_169_; lean_object* v_unused_170_; 
v_unused_169_ = lean_ctor_get(v_m_127_, 1);
lean_dec(v_unused_169_);
v_unused_170_ = lean_ctor_get(v_m_127_, 0);
lean_dec(v_unused_170_);
v___x_149_ = v_m_127_;
v_isShared_150_ = v_isSharedCheck_168_;
goto v_resetjp_148_;
}
else
{
lean_dec(v_m_127_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_168_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v_size_x27_152_; lean_object* v___x_153_; lean_object* v_buckets_x27_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_151_ = lean_unsigned_to_nat(1u);
v_size_x27_152_ = lean_nat_add(v_size_130_, v___x_151_);
lean_dec(v_size_130_);
lean_inc(v_bkt_146_);
v___x_153_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_153_, 0, v_a_128_);
lean_ctor_set(v___x_153_, 1, v_b_129_);
lean_ctor_set(v___x_153_, 2, v_bkt_146_);
v_buckets_x27_154_ = lean_array_uset(v_buckets_131_, v___x_145_, v___x_153_);
v___x_155_ = lean_unsigned_to_nat(4u);
v___x_156_ = lean_nat_mul(v_size_x27_152_, v___x_155_);
v___x_157_ = lean_unsigned_to_nat(3u);
v___x_158_ = lean_nat_div(v___x_156_, v___x_157_);
lean_dec(v___x_156_);
v___x_159_ = lean_array_get_size(v_buckets_x27_154_);
v___x_160_ = lean_nat_dec_le(v___x_158_, v___x_159_);
lean_dec(v___x_158_);
if (v___x_160_ == 0)
{
lean_object* v_val_161_; lean_object* v___x_163_; 
v_val_161_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1___redArg(v_buckets_x27_154_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v_val_161_);
lean_ctor_set(v___x_149_, 0, v_size_x27_152_);
v___x_163_ = v___x_149_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_size_x27_152_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_val_161_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
else
{
lean_object* v___x_166_; 
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v_buckets_x27_154_);
lean_ctor_set(v___x_149_, 0, v_size_x27_152_);
v___x_166_ = v___x_149_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_size_x27_152_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v_buckets_x27_154_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
else
{
lean_dec(v_b_129_);
lean_dec(v_a_128_);
return v_m_127_;
}
}
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_173_ = lean_box(0);
v___x_174_ = lean_unsigned_to_nat(16u);
v___x_175_ = lean_mk_array(v___x_174_, v___x_173_);
return v___x_175_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__0_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
return v___x_178_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__5_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_188_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__1_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_189_ = l_Lean_NameHashSet_insert(v___x_188_, v___x_187_);
return v___x_189_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_196_ = lean_box(0);
v___x_197_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__8_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_198_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__6_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_199_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v___x_198_, v___x_197_, v___x_196_);
return v___x_199_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__13_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_207_ = lean_box(0);
v___x_208_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__12_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_209_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__9_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_210_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v___x_209_, v___x_208_, v___x_207_);
return v___x_210_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__16_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_217_ = lean_box(0);
v___x_218_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__15_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_219_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__13_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__13_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__13_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_220_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v___x_219_, v___x_218_, v___x_217_);
return v___x_220_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__20_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_228_ = lean_box(0);
v___x_229_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__19_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_230_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__16_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__16_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__16_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_231_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v___x_230_, v___x_229_, v___x_228_);
return v___x_231_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__23_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_238_ = lean_box(0);
v___x_239_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__22_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_240_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__20_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__20_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__20_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_241_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v___x_240_, v___x_239_, v___x_238_);
return v___x_241_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__26_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_248_ = lean_box(0);
v___x_249_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__25_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_250_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__23_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__23_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__23_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_251_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v___x_250_, v___x_249_, v___x_248_);
return v___x_251_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__29_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_258_ = lean_box(0);
v___x_259_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__28_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_));
v___x_260_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__26_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__26_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__26_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_261_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v___x_260_, v___x_259_, v___x_258_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__29_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_, &l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__29_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn___closed__29_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_);
v___x_264_ = lean_st_mk_ref(v___x_263_);
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2____boxed(lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_();
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_268_, lean_object* v_m_269_, lean_object* v_a_270_, lean_object* v_b_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0___redArg(v_m_269_, v_a_270_, v_b_271_);
return v___x_272_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_273_, lean_object* v_a_274_, lean_object* v_x_275_){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_274_, v_x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_277_, lean_object* v_a_278_, lean_object* v_x_279_){
_start:
{
uint8_t v_res_280_; lean_object* v_r_281_; 
v_res_280_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_277_, v_a_278_, v_x_279_);
lean_dec(v_x_279_);
lean_dec(v_a_278_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b2_282_, lean_object* v_data_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1___redArg(v_data_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object* v_00_u03b2_285_, lean_object* v_i_286_, lean_object* v_source_287_, lean_object* v_target_288_){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_i_286_, v_source_287_, v_target_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_290_, lean_object* v_x_291_, lean_object* v_x_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(v_x_291_, v_x_292_);
return v___x_293_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind(lean_object* v_ignoreTacticKinds_295_, lean_object* v_k_296_){
_start:
{
if (lean_obj_tag(v_k_296_) == 1)
{
lean_object* v_str_297_; lean_object* v___x_298_; uint8_t v___x_299_; 
v_str_297_ = lean_ctor_get(v_k_296_, 1);
v___x_298_ = ((lean_object*)(l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind___closed__0));
v___x_299_ = lean_string_dec_eq(v_str_297_, v___x_298_);
if (v___x_299_ == 0)
{
uint8_t v___x_300_; 
v___x_300_ = l_Lean_NameHashSet_contains(v_ignoreTacticKinds_295_, v_k_296_);
return v___x_300_;
}
else
{
return v___x_299_;
}
}
else
{
uint8_t v___x_301_; 
v___x_301_ = l_Lean_NameHashSet_contains(v_ignoreTacticKinds_295_, v_k_296_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind___boxed(lean_object* v_ignoreTacticKinds_302_, lean_object* v_k_303_){
_start:
{
uint8_t v_res_304_; lean_object* v_r_305_; 
v_res_304_ = l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind(v_ignoreTacticKinds_302_, v_k_303_);
lean_dec(v_k_303_);
lean_dec_ref(v_ignoreTacticKinds_302_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_addIgnoreTacticKind(lean_object* v_kind_306_){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_308_ = l_Lean_Linter_Extra_UnreachableTactic_ignoreTacticKindsRef;
v___x_309_ = lean_st_ref_take(v___x_308_);
v___x_310_ = l_Lean_NameHashSet_insert(v___x_309_, v_kind_306_);
v___x_311_ = lean_st_ref_put(v___x_308_, v___x_310_);
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_addIgnoreTacticKind___boxed(lean_object* v_kind_313_, lean_object* v_a_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_Linter_Extra_UnreachableTactic_addIgnoreTacticKind(v_kind_313_);
return v_res_315_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__0(void){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_instMonadEIO___redArg();
return v___x_316_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__1(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_obj_once(&l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__0, &l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__0_once, _init_l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__0);
v___x_318_ = l_StateRefT_x27_instMonad___redArg(v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___lam__0___boxed(lean_object* v_ignoreTacticKinds_321_, lean_object* v_isTacKind_322_, lean_object* v_x_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Linter_Extra_UnreachableTactic_getTactics___lam__0(v_ignoreTacticKinds_321_, v_isTacKind_322_, v_x_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics(lean_object* v_ignoreTacticKinds_328_, lean_object* v_isTacKind_329_, lean_object* v_stx_330_, lean_object* v_a_331_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = lean_obj_once(&l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__1, &l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__1_once, _init_l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__1);
if (lean_obj_tag(v_stx_330_) == 1)
{
lean_object* v_kind_334_; lean_object* v_args_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___y_339_; uint8_t v___x_360_; 
v_kind_334_ = lean_ctor_get(v_stx_330_, 1);
v_args_335_ = lean_ctor_get(v_stx_330_, 2);
v___x_336_ = ((lean_object*)(l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__2));
v___x_337_ = ((lean_object*)(l_Lean_Linter_Extra_UnreachableTactic_getTactics___closed__3));
v___x_360_ = l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind(v_ignoreTacticKinds_328_, v_kind_334_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_361_ = lean_unsigned_to_nat(0u);
v___x_362_ = lean_array_get_size(v_args_335_);
v___x_363_ = lean_nat_dec_lt(v___x_361_, v___x_362_);
if (v___x_363_ == 0)
{
lean_dec_ref(v_ignoreTacticKinds_328_);
v___y_339_ = v_a_331_;
goto v___jp_338_;
}
else
{
lean_object* v___f_364_; lean_object* v___x_365_; size_t v___x_366_; size_t v___x_367_; lean_object* v___x_1041__overap_368_; lean_object* v___x_369_; 
lean_inc_ref(v_isTacKind_329_);
v___f_364_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_UnreachableTactic_getTactics___lam__0___boxed), 6, 2);
lean_closure_set(v___f_364_, 0, v_ignoreTacticKinds_328_);
lean_closure_set(v___f_364_, 1, v_isTacKind_329_);
v___x_365_ = lean_box(0);
v___x_366_ = ((size_t)0ULL);
v___x_367_ = lean_usize_of_nat(v___x_362_);
lean_inc_ref(v_args_335_);
v___x_1041__overap_368_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_333_, v___f_364_, v_args_335_, v___x_366_, v___x_367_, v___x_365_);
lean_inc(v_a_331_);
v___x_369_ = lean_apply_2(v___x_1041__overap_368_, v_a_331_, lean_box(0));
if (lean_obj_tag(v___x_369_) == 0)
{
lean_dec_ref_known(v___x_369_, 1);
v___y_339_ = v_a_331_;
goto v___jp_338_;
}
else
{
lean_dec_ref_known(v_stx_330_, 3);
lean_dec_ref(v_isTacKind_329_);
return v___x_369_;
}
}
}
else
{
lean_dec_ref(v_ignoreTacticKinds_328_);
v___y_339_ = v_a_331_;
goto v___jp_338_;
}
v___jp_338_:
{
lean_object* v___x_340_; uint8_t v___x_341_; 
lean_inc(v_kind_334_);
v___x_340_ = lean_apply_1(v_isTacKind_329_, v_kind_334_);
v___x_341_ = lean_unbox(v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec_ref_known(v_stx_330_, 3);
v___x_342_ = lean_box(0);
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
else
{
uint8_t v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_unbox(v___x_340_);
v___x_345_ = l_Lean_Syntax_getRange_x3f(v_stx_330_, v___x_344_);
if (lean_obj_tag(v___x_345_) == 1)
{
lean_object* v_val_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_357_; 
v_val_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_357_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_357_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_val_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_357_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_350_ = lean_st_ref_take(v___y_339_);
v___x_351_ = lean_box(0);
v___x_352_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_336_, v___x_337_, v___x_350_, v_val_346_, v_stx_330_);
v___x_353_ = lean_st_ref_put(v___y_339_, v___x_352_);
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 0);
lean_ctor_set(v___x_348_, 0, v___x_351_);
v___x_355_ = v___x_348_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v___x_351_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_dec(v___x_345_);
lean_dec_ref_known(v_stx_330_, 3);
v___x_358_ = lean_box(0);
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; 
lean_dec(v_stx_330_);
lean_dec_ref(v_isTacKind_329_);
lean_dec_ref(v_ignoreTacticKinds_328_);
v___x_370_ = lean_box(0);
v___x_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___lam__0(lean_object* v_ignoreTacticKinds_372_, lean_object* v_isTacKind_373_, lean_object* v_x_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_Linter_Extra_UnreachableTactic_getTactics(v_ignoreTacticKinds_372_, v_isTacKind_373_, v___y_375_, v___y_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___boxed(lean_object* v_ignoreTacticKinds_379_, lean_object* v_isTacKind_380_, lean_object* v_stx_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lean_Linter_Extra_UnreachableTactic_getTactics(v_ignoreTacticKinds_379_, v_isTacKind_380_, v_stx_381_, v_a_382_);
lean_dec(v_a_382_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg(lean_object* v_a_385_, lean_object* v_x_386_){
_start:
{
if (lean_obj_tag(v_x_386_) == 0)
{
return v_x_386_;
}
else
{
lean_object* v_key_387_; lean_object* v_value_388_; lean_object* v_tail_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_398_; 
v_key_387_ = lean_ctor_get(v_x_386_, 0);
v_value_388_ = lean_ctor_get(v_x_386_, 1);
v_tail_389_ = lean_ctor_get(v_x_386_, 2);
v_isSharedCheck_398_ = !lean_is_exclusive(v_x_386_);
if (v_isSharedCheck_398_ == 0)
{
v___x_391_ = v_x_386_;
v_isShared_392_ = v_isSharedCheck_398_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_tail_389_);
lean_inc(v_value_388_);
lean_inc(v_key_387_);
lean_dec(v_x_386_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_398_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
uint8_t v___x_393_; 
v___x_393_ = l_Lean_Syntax_instBEqRange_beq(v_key_387_, v_a_385_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_394_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg(v_a_385_, v_tail_389_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 2, v___x_394_);
v___x_396_ = v___x_391_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_key_387_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_value_388_);
lean_ctor_set(v_reuseFailAlloc_397_, 2, v___x_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
else
{
lean_del_object(v___x_391_);
lean_dec(v_value_388_);
lean_dec(v_key_387_);
return v_tail_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg___boxed(lean_object* v_a_399_, lean_object* v_x_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg(v_a_399_, v_x_400_);
lean_dec_ref(v_a_399_);
return v_res_401_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg(lean_object* v_a_402_, lean_object* v_x_403_){
_start:
{
if (lean_obj_tag(v_x_403_) == 0)
{
uint8_t v___x_404_; 
v___x_404_ = 0;
return v___x_404_;
}
else
{
lean_object* v_key_405_; lean_object* v_tail_406_; uint8_t v___x_407_; 
v_key_405_ = lean_ctor_get(v_x_403_, 0);
v_tail_406_ = lean_ctor_get(v_x_403_, 2);
v___x_407_ = l_Lean_Syntax_instBEqRange_beq(v_key_405_, v_a_402_);
if (v___x_407_ == 0)
{
v_x_403_ = v_tail_406_;
goto _start;
}
else
{
return v___x_407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg___boxed(lean_object* v_a_409_, lean_object* v_x_410_){
_start:
{
uint8_t v_res_411_; lean_object* v_r_412_; 
v_res_411_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg(v_a_409_, v_x_410_);
lean_dec(v_x_410_);
lean_dec_ref(v_a_409_);
v_r_412_ = lean_box(v_res_411_);
return v_r_412_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___redArg(lean_object* v_m_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_size_415_; lean_object* v_buckets_416_; lean_object* v___x_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; uint64_t v_fold_421_; uint64_t v___x_422_; uint64_t v___x_423_; uint64_t v___x_424_; size_t v___x_425_; size_t v___x_426_; size_t v___x_427_; size_t v___x_428_; size_t v___x_429_; lean_object* v_bkt_430_; uint8_t v___x_431_; 
v_size_415_ = lean_ctor_get(v_m_413_, 0);
v_buckets_416_ = lean_ctor_get(v_m_413_, 1);
v___x_417_ = lean_array_get_size(v_buckets_416_);
v___x_418_ = l_Lean_Syntax_instHashableRange_hash(v_a_414_);
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
v___x_431_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg(v_a_414_, v_bkt_430_);
if (v___x_431_ == 0)
{
return v_m_413_;
}
else
{
lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_444_; 
lean_inc(v_bkt_430_);
lean_inc_ref(v_buckets_416_);
lean_inc(v_size_415_);
v_isSharedCheck_444_ = !lean_is_exclusive(v_m_413_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; lean_object* v_unused_446_; 
v_unused_445_ = lean_ctor_get(v_m_413_, 1);
lean_dec(v_unused_445_);
v_unused_446_ = lean_ctor_get(v_m_413_, 0);
lean_dec(v_unused_446_);
v___x_433_ = v_m_413_;
v_isShared_434_ = v_isSharedCheck_444_;
goto v_resetjp_432_;
}
else
{
lean_dec(v_m_413_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_444_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v_buckets_x27_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_435_ = lean_box(0);
v_buckets_x27_436_ = lean_array_uset(v_buckets_416_, v___x_429_, v___x_435_);
v___x_437_ = lean_unsigned_to_nat(1u);
v___x_438_ = lean_nat_sub(v_size_415_, v___x_437_);
lean_dec(v_size_415_);
v___x_439_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg(v_a_414_, v_bkt_430_);
v___x_440_ = lean_array_uset(v_buckets_x27_436_, v___x_429_, v___x_439_);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 1, v___x_440_);
lean_ctor_set(v___x_433_, 0, v___x_438_);
v___x_442_ = v___x_433_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___redArg___boxed(lean_object* v_m_447_, lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___redArg(v_m_447_, v_a_448_);
lean_dec_ref(v_a_448_);
return v_res_449_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics(lean_object* v_x_451_, lean_object* v_a_452_){
_start:
{
switch(lean_obj_tag(v_x_451_))
{
case 0:
{
lean_object* v_t_454_; 
v_t_454_ = lean_ctor_get(v_x_451_, 1);
lean_inc_ref(v_t_454_);
lean_dec_ref_known(v_x_451_, 2);
v_x_451_ = v_t_454_;
goto _start;
}
case 1:
{
lean_object* v_i_456_; 
v_i_456_ = lean_ctor_get(v_x_451_, 0);
if (lean_obj_tag(v_i_456_) == 0)
{
lean_object* v_i_457_; lean_object* v_toElabInfo_458_; lean_object* v_children_459_; lean_object* v_stx_460_; uint8_t v___x_461_; lean_object* v___x_462_; 
v_i_457_ = lean_ctor_get(v_i_456_, 0);
v_toElabInfo_458_ = lean_ctor_get(v_i_457_, 0);
lean_inc_ref(v_toElabInfo_458_);
v_children_459_ = lean_ctor_get(v_x_451_, 1);
lean_inc_ref(v_children_459_);
lean_dec_ref_known(v_x_451_, 2);
v_stx_460_ = lean_ctor_get(v_toElabInfo_458_, 1);
lean_inc(v_stx_460_);
lean_dec_ref(v_toElabInfo_458_);
v___x_461_ = 1;
v___x_462_ = l_Lean_Syntax_getRange_x3f(v_stx_460_, v___x_461_);
lean_dec(v_stx_460_);
if (lean_obj_tag(v___x_462_) == 1)
{
lean_object* v_val_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v_val_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_val_463_);
lean_dec_ref_known(v___x_462_, 1);
v___x_464_ = lean_st_ref_take(v_a_452_);
v___x_465_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___redArg(v___x_464_, v_val_463_);
lean_dec(v_val_463_);
v___x_466_ = lean_st_ref_put(v_a_452_, v___x_465_);
v___x_467_ = l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList(v_children_459_, v_a_452_);
return v___x_467_;
}
else
{
lean_object* v___x_468_; 
lean_dec(v___x_462_);
v___x_468_ = l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList(v_children_459_, v_a_452_);
return v___x_468_;
}
}
else
{
lean_object* v_children_469_; lean_object* v___x_470_; 
v_children_469_ = lean_ctor_get(v_x_451_, 1);
lean_inc_ref(v_children_469_);
lean_dec_ref_known(v_x_451_, 2);
v___x_470_ = l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList(v_children_469_, v_a_452_);
return v___x_470_;
}
}
default: 
{
lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_478_; 
v_isSharedCheck_478_ = !lean_is_exclusive(v_x_451_);
if (v_isSharedCheck_478_ == 0)
{
lean_object* v_unused_479_; 
v_unused_479_ = lean_ctor_get(v_x_451_, 0);
lean_dec(v_unused_479_);
v___x_472_ = v_x_451_;
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
else
{
lean_dec(v_x_451_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = lean_box(0);
if (v_isShared_473_ == 0)
{
lean_ctor_set_tag(v___x_472_, 0);
lean_ctor_set(v___x_472_, 0, v___x_474_);
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(lean_object* v_as_480_, size_t v_i_481_, size_t v_stop_482_, lean_object* v_b_483_, lean_object* v___y_484_){
_start:
{
uint8_t v___x_486_; 
v___x_486_ = lean_usize_dec_eq(v_i_481_, v_stop_482_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_array_uget_borrowed(v_as_480_, v_i_481_);
lean_inc(v___x_487_);
v___x_488_ = l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics(v___x_487_, v___y_484_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; size_t v___x_490_; size_t v___x_491_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = ((size_t)1ULL);
v___x_491_ = lean_usize_add(v_i_481_, v___x_490_);
v_i_481_ = v___x_491_;
v_b_483_ = v_a_489_;
goto _start;
}
else
{
return v___x_488_;
}
}
else
{
lean_object* v___x_493_; 
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v_b_483_);
return v___x_493_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__2(lean_object* v_x_494_, lean_object* v___y_495_){
_start:
{
if (lean_obj_tag(v_x_494_) == 0)
{
lean_object* v_cs_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_511_; 
v_cs_497_ = lean_ctor_get(v_x_494_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v_x_494_);
if (v_isSharedCheck_511_ == 0)
{
v___x_499_ = v_x_494_;
v_isShared_500_ = v_isSharedCheck_511_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_cs_497_);
lean_dec(v_x_494_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_511_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_501_ = lean_unsigned_to_nat(0u);
v___x_502_ = lean_array_get_size(v_cs_497_);
v___x_503_ = lean_box(0);
v___x_504_ = lean_nat_dec_lt(v___x_501_, v___x_502_);
if (v___x_504_ == 0)
{
lean_object* v___x_506_; 
lean_dec_ref(v_cs_497_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_503_);
v___x_506_ = v___x_499_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_503_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
else
{
size_t v___x_508_; size_t v___x_509_; lean_object* v___x_510_; 
lean_del_object(v___x_499_);
v___x_508_ = ((size_t)0ULL);
v___x_509_ = lean_usize_of_nat(v___x_502_);
v___x_510_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__3(v_cs_497_, v___x_508_, v___x_509_, v___x_503_, v___y_495_);
lean_dec_ref(v_cs_497_);
return v___x_510_;
}
}
}
else
{
lean_object* v_vs_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_526_; 
v_vs_512_ = lean_ctor_get(v_x_494_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v_x_494_);
if (v_isSharedCheck_526_ == 0)
{
v___x_514_ = v_x_494_;
v_isShared_515_ = v_isSharedCheck_526_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_vs_512_);
lean_dec(v_x_494_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_526_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_516_ = lean_unsigned_to_nat(0u);
v___x_517_ = lean_array_get_size(v_vs_512_);
v___x_518_ = lean_box(0);
v___x_519_ = lean_nat_dec_lt(v___x_516_, v___x_517_);
if (v___x_519_ == 0)
{
lean_object* v___x_521_; 
lean_dec_ref(v_vs_512_);
if (v_isShared_515_ == 0)
{
lean_ctor_set_tag(v___x_514_, 0);
lean_ctor_set(v___x_514_, 0, v___x_518_);
v___x_521_ = v___x_514_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_518_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
else
{
size_t v___x_523_; size_t v___x_524_; lean_object* v___x_525_; 
lean_del_object(v___x_514_);
v___x_523_ = ((size_t)0ULL);
v___x_524_ = lean_usize_of_nat(v___x_517_);
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(v_vs_512_, v___x_523_, v___x_524_, v___x_518_, v___y_495_);
lean_dec_ref(v_vs_512_);
return v___x_525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__3(lean_object* v_as_527_, size_t v_i_528_, size_t v_stop_529_, lean_object* v_b_530_, lean_object* v___y_531_){
_start:
{
uint8_t v___x_533_; 
v___x_533_ = lean_usize_dec_eq(v_i_528_, v_stop_529_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_array_uget_borrowed(v_as_527_, v_i_528_);
lean_inc(v___x_534_);
v___x_535_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__2(v___x_534_, v___y_531_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; size_t v___x_537_; size_t v___x_538_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = ((size_t)1ULL);
v___x_538_ = lean_usize_add(v_i_528_, v___x_537_);
v_i_528_ = v___x_538_;
v_b_530_ = v_a_536_;
goto _start;
}
else
{
return v___x_535_;
}
}
else
{
lean_object* v___x_540_; 
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v_b_530_);
return v___x_540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0(lean_object* v_x_541_, size_t v_x_542_, size_t v_x_543_, lean_object* v___y_544_){
_start:
{
if (lean_obj_tag(v_x_541_) == 0)
{
lean_object* v_cs_546_; lean_object* v___x_547_; size_t v___x_548_; lean_object* v_j_549_; lean_object* v___x_550_; size_t v___x_551_; size_t v___x_552_; size_t v___x_553_; size_t v___x_554_; size_t v___x_555_; size_t v___x_556_; lean_object* v___x_557_; 
v_cs_546_ = lean_ctor_get(v_x_541_, 0);
lean_inc_ref(v_cs_546_);
lean_dec_ref_known(v_x_541_, 1);
v___x_547_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___closed__0);
v___x_548_ = lean_usize_shift_right(v_x_542_, v_x_543_);
v_j_549_ = lean_usize_to_nat(v___x_548_);
v___x_550_ = lean_array_get_borrowed(v___x_547_, v_cs_546_, v_j_549_);
v___x_551_ = ((size_t)1ULL);
v___x_552_ = lean_usize_shift_left(v___x_551_, v_x_543_);
v___x_553_ = lean_usize_sub(v___x_552_, v___x_551_);
v___x_554_ = lean_usize_land(v_x_542_, v___x_553_);
v___x_555_ = ((size_t)5ULL);
v___x_556_ = lean_usize_sub(v_x_543_, v___x_555_);
lean_inc(v___x_550_);
v___x_557_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0(v___x_550_, v___x_554_, v___x_556_, v___y_544_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_572_; 
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v___x_557_, 0);
lean_dec(v_unused_573_);
v___x_559_ = v___x_557_;
v_isShared_560_ = v_isSharedCheck_572_;
goto v_resetjp_558_;
}
else
{
lean_dec(v___x_557_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_572_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_561_ = lean_unsigned_to_nat(1u);
v___x_562_ = lean_nat_add(v_j_549_, v___x_561_);
lean_dec(v_j_549_);
v___x_563_ = lean_array_get_size(v_cs_546_);
v___x_564_ = lean_box(0);
v___x_565_ = lean_nat_dec_lt(v___x_562_, v___x_563_);
if (v___x_565_ == 0)
{
lean_object* v___x_567_; 
lean_dec(v___x_562_);
lean_dec_ref(v_cs_546_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_564_);
v___x_567_ = v___x_559_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_564_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
else
{
size_t v___x_569_; size_t v___x_570_; lean_object* v___x_571_; 
lean_del_object(v___x_559_);
v___x_569_ = lean_usize_of_nat(v___x_562_);
lean_dec(v___x_562_);
v___x_570_ = lean_usize_of_nat(v___x_563_);
v___x_571_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__3(v_cs_546_, v___x_569_, v___x_570_, v___x_564_, v___y_544_);
lean_dec_ref(v_cs_546_);
return v___x_571_;
}
}
}
else
{
lean_dec(v_j_549_);
lean_dec_ref(v_cs_546_);
return v___x_557_;
}
}
else
{
lean_object* v_vs_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_588_; 
v_vs_574_ = lean_ctor_get(v_x_541_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_541_);
if (v_isSharedCheck_588_ == 0)
{
v___x_576_ = v_x_541_;
v_isShared_577_ = v_isSharedCheck_588_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_vs_574_);
lean_dec(v_x_541_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_588_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_578_ = lean_usize_to_nat(v_x_542_);
v___x_579_ = lean_array_get_size(v_vs_574_);
v___x_580_ = lean_box(0);
v___x_581_ = lean_nat_dec_lt(v___x_578_, v___x_579_);
if (v___x_581_ == 0)
{
lean_object* v___x_583_; 
lean_dec(v___x_578_);
lean_dec_ref(v_vs_574_);
if (v_isShared_577_ == 0)
{
lean_ctor_set_tag(v___x_576_, 0);
lean_ctor_set(v___x_576_, 0, v___x_580_);
v___x_583_ = v___x_576_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_580_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
else
{
size_t v___x_585_; size_t v___x_586_; lean_object* v___x_587_; 
lean_del_object(v___x_576_);
v___x_585_ = lean_usize_of_nat(v___x_578_);
lean_dec(v___x_578_);
v___x_586_ = lean_usize_of_nat(v___x_579_);
v___x_587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(v_vs_574_, v___x_585_, v___x_586_, v___x_580_, v___y_544_);
lean_dec_ref(v_vs_574_);
return v___x_587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__2(lean_object* v_t_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_root_592_; lean_object* v_tail_593_; lean_object* v___x_594_; 
v_root_592_ = lean_ctor_get(v_t_589_, 0);
lean_inc_ref(v_root_592_);
v_tail_593_ = lean_ctor_get(v_t_589_, 1);
lean_inc_ref(v_tail_593_);
lean_dec_ref(v_t_589_);
v___x_594_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__2(v_root_592_, v___y_590_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_608_; 
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_608_ == 0)
{
lean_object* v_unused_609_; 
v_unused_609_ = lean_ctor_get(v___x_594_, 0);
lean_dec(v_unused_609_);
v___x_596_ = v___x_594_;
v_isShared_597_ = v_isSharedCheck_608_;
goto v_resetjp_595_;
}
else
{
lean_dec(v___x_594_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_608_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_598_ = lean_unsigned_to_nat(0u);
v___x_599_ = lean_array_get_size(v_tail_593_);
v___x_600_ = lean_box(0);
v___x_601_ = lean_nat_dec_lt(v___x_598_, v___x_599_);
if (v___x_601_ == 0)
{
lean_object* v___x_603_; 
lean_dec_ref(v_tail_593_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_600_);
v___x_603_ = v___x_596_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_600_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
else
{
size_t v___x_605_; size_t v___x_606_; lean_object* v___x_607_; 
lean_del_object(v___x_596_);
v___x_605_ = ((size_t)0ULL);
v___x_606_ = lean_usize_of_nat(v___x_599_);
v___x_607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(v_tail_593_, v___x_605_, v___x_606_, v___x_600_, v___y_590_);
lean_dec_ref(v_tail_593_);
return v___x_607_;
}
}
}
else
{
lean_dec_ref(v_tail_593_);
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0(lean_object* v_t_610_, lean_object* v_start_611_, lean_object* v___y_612_){
_start:
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = lean_nat_dec_eq(v_start_611_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v_root_616_; lean_object* v_tail_617_; size_t v_shift_618_; lean_object* v_tailOff_619_; uint8_t v___x_620_; 
v_root_616_ = lean_ctor_get(v_t_610_, 0);
lean_inc_ref(v_root_616_);
v_tail_617_ = lean_ctor_get(v_t_610_, 1);
lean_inc_ref(v_tail_617_);
v_shift_618_ = lean_ctor_get_usize(v_t_610_, 4);
v_tailOff_619_ = lean_ctor_get(v_t_610_, 3);
lean_inc(v_tailOff_619_);
lean_dec_ref(v_t_610_);
v___x_620_ = lean_nat_dec_le(v_tailOff_619_, v_start_611_);
if (v___x_620_ == 0)
{
size_t v___x_621_; lean_object* v___x_622_; 
lean_dec(v_tailOff_619_);
v___x_621_ = lean_usize_of_nat(v_start_611_);
v___x_622_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0(v_root_616_, v___x_621_, v_shift_618_, v___y_612_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_635_; 
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; 
v_unused_636_ = lean_ctor_get(v___x_622_, 0);
lean_dec(v_unused_636_);
v___x_624_ = v___x_622_;
v_isShared_625_ = v_isSharedCheck_635_;
goto v_resetjp_623_;
}
else
{
lean_dec(v___x_622_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_635_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_626_ = lean_array_get_size(v_tail_617_);
v___x_627_ = lean_box(0);
v___x_628_ = lean_nat_dec_lt(v___x_614_, v___x_626_);
if (v___x_628_ == 0)
{
lean_object* v___x_630_; 
lean_dec_ref(v_tail_617_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_627_);
v___x_630_ = v___x_624_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_627_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
else
{
size_t v___x_632_; size_t v___x_633_; lean_object* v___x_634_; 
lean_del_object(v___x_624_);
v___x_632_ = ((size_t)0ULL);
v___x_633_ = lean_usize_of_nat(v___x_626_);
v___x_634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(v_tail_617_, v___x_632_, v___x_633_, v___x_627_, v___y_612_);
lean_dec_ref(v_tail_617_);
return v___x_634_;
}
}
}
else
{
lean_dec_ref(v_tail_617_);
return v___x_622_;
}
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
lean_dec_ref(v_root_616_);
v___x_637_ = lean_nat_sub(v_start_611_, v_tailOff_619_);
lean_dec(v_tailOff_619_);
v___x_638_ = lean_array_get_size(v_tail_617_);
v___x_639_ = lean_box(0);
v___x_640_ = lean_nat_dec_lt(v___x_637_, v___x_638_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; 
lean_dec(v___x_637_);
lean_dec_ref(v_tail_617_);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
return v___x_641_;
}
else
{
size_t v___x_642_; size_t v___x_643_; lean_object* v___x_644_; 
v___x_642_ = lean_usize_of_nat(v___x_637_);
lean_dec(v___x_637_);
v___x_643_ = lean_usize_of_nat(v___x_638_);
v___x_644_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(v_tail_617_, v___x_642_, v___x_643_, v___x_639_, v___y_612_);
lean_dec_ref(v_tail_617_);
return v___x_644_;
}
}
}
else
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__2(v_t_610_, v___y_612_);
return v___x_645_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList(lean_object* v_trees_646_, lean_object* v_a_647_){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_unsigned_to_nat(0u);
v___x_650_ = l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0(v_trees_646_, v___x_649_, v_a_647_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList___boxed(lean_object* v_trees_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList(v_trees_651_, v_a_652_);
lean_dec(v_a_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1___boxed(lean_object* v_as_655_, lean_object* v_i_656_, lean_object* v_stop_657_, lean_object* v_b_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
size_t v_i_boxed_661_; size_t v_stop_boxed_662_; lean_object* v_res_663_; 
v_i_boxed_661_ = lean_unbox_usize(v_i_656_);
lean_dec(v_i_656_);
v_stop_boxed_662_ = lean_unbox_usize(v_stop_657_);
lean_dec(v_stop_657_);
v_res_663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__1(v_as_655_, v_i_boxed_661_, v_stop_boxed_662_, v_b_658_, v___y_659_);
lean_dec(v___y_659_);
lean_dec_ref(v_as_655_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__3___boxed(lean_object* v_as_664_, lean_object* v_i_665_, lean_object* v_stop_666_, lean_object* v_b_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
size_t v_i_boxed_670_; size_t v_stop_boxed_671_; lean_object* v_res_672_; 
v_i_boxed_670_ = lean_unbox_usize(v_i_665_);
lean_dec(v_i_665_);
v_stop_boxed_671_ = lean_unbox_usize(v_stop_666_);
lean_dec(v_stop_666_);
v_res_672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__3(v_as_664_, v_i_boxed_670_, v_stop_boxed_671_, v_b_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v_as_664_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__2___boxed(lean_object* v_t_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__2(v_t_673_, v___y_674_);
lean_dec(v___y_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__2___boxed(lean_object* v_x_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0_spec__2(v_x_677_, v___y_678_);
lean_dec(v___y_678_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics___boxed(lean_object* v_x_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics(v_x_681_, v_a_682_);
lean_dec(v_a_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0___boxed(lean_object* v_t_685_, lean_object* v_start_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0(v_t_685_, v_start_686_, v___y_687_);
lean_dec(v___y_687_);
lean_dec(v_start_686_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0___boxed(lean_object* v_x_690_, lean_object* v_x_691_, lean_object* v_x_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
size_t v_x_2389__boxed_695_; size_t v_x_2390__boxed_696_; lean_object* v_res_697_; 
v_x_2389__boxed_695_ = lean_unbox_usize(v_x_691_);
lean_dec(v_x_691_);
v_x_2390__boxed_696_ = lean_unbox_usize(v_x_692_);
lean_dec(v_x_692_);
v_res_697_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList_spec__0_spec__0(v_x_690_, v_x_2389__boxed_695_, v_x_2390__boxed_696_, v___y_693_);
lean_dec(v___y_693_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2(lean_object* v_00_u03b2_698_, lean_object* v_m_699_, lean_object* v_a_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___redArg(v_m_699_, v_a_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2___boxed(lean_object* v_00_u03b2_702_, lean_object* v_m_703_, lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2(v_00_u03b2_702_, v_m_703_, v_a_704_);
lean_dec_ref(v_a_704_);
return v_res_705_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5(lean_object* v_00_u03b2_706_, lean_object* v_a_707_, lean_object* v_x_708_){
_start:
{
uint8_t v___x_709_; 
v___x_709_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg(v_a_707_, v_x_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___boxed(lean_object* v_00_u03b2_710_, lean_object* v_a_711_, lean_object* v_x_712_){
_start:
{
uint8_t v_res_713_; lean_object* v_r_714_; 
v_res_713_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5(v_00_u03b2_710_, v_a_711_, v_x_712_);
lean_dec(v_x_712_);
lean_dec_ref(v_a_711_);
v_r_714_ = lean_box(v_res_713_);
return v_r_714_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6(lean_object* v_00_u03b2_715_, lean_object* v_a_716_, lean_object* v_x_717_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___redArg(v_a_716_, v_x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6___boxed(lean_object* v_00_u03b2_719_, lean_object* v_a_720_, lean_object* v_x_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__6(v_00_u03b2_719_, v_a_720_, v_x_721_);
lean_dec_ref(v_a_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__0(lean_object* v_a_723_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = lean_nat_to_int(v_a_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___redArg(lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; lean_object* v_infoState_728_; lean_object* v_trees_729_; lean_object* v___x_730_; 
v___x_727_ = lean_st_ref_get(v___y_725_);
v_infoState_728_ = lean_ctor_get(v___x_727_, 8);
lean_inc_ref(v_infoState_728_);
lean_dec(v___x_727_);
v_trees_729_ = lean_ctor_get(v_infoState_728_, 2);
lean_inc_ref(v_trees_729_);
lean_dec_ref(v_infoState_728_);
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v_trees_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___redArg___boxed(lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___redArg(v___y_731_);
lean_dec(v___y_731_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5(lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___redArg(v___y_735_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___boxed(lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5(v___y_738_, v___y_739_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__9(lean_object* v_x_742_, lean_object* v_x_743_){
_start:
{
if (lean_obj_tag(v_x_743_) == 0)
{
return v_x_742_;
}
else
{
lean_object* v_key_744_; lean_object* v_value_745_; lean_object* v_tail_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_key_744_ = lean_ctor_get(v_x_743_, 0);
v_value_745_ = lean_ctor_get(v_x_743_, 1);
v_tail_746_ = lean_ctor_get(v_x_743_, 2);
lean_inc(v_value_745_);
lean_inc(v_key_744_);
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v_key_744_);
lean_ctor_set(v___x_747_, 1, v_value_745_);
v___x_748_ = lean_array_push(v_x_742_, v___x_747_);
v_x_742_ = v___x_748_;
v_x_743_ = v_tail_746_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__9___boxed(lean_object* v_x_750_, lean_object* v_x_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__9(v_x_750_, v_x_751_);
lean_dec(v_x_751_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__10(lean_object* v_as_753_, size_t v_i_754_, size_t v_stop_755_, lean_object* v_b_756_){
_start:
{
uint8_t v___x_757_; 
v___x_757_ = lean_usize_dec_eq(v_i_754_, v_stop_755_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; size_t v___x_760_; size_t v___x_761_; 
v___x_758_ = lean_array_uget_borrowed(v_as_753_, v_i_754_);
v___x_759_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__9(v_b_756_, v___x_758_);
v___x_760_ = ((size_t)1ULL);
v___x_761_ = lean_usize_add(v_i_754_, v___x_760_);
v_i_754_ = v___x_761_;
v_b_756_ = v___x_759_;
goto _start;
}
else
{
return v_b_756_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__10___boxed(lean_object* v_as_763_, lean_object* v_i_764_, lean_object* v_stop_765_, lean_object* v_b_766_){
_start:
{
size_t v_i_boxed_767_; size_t v_stop_boxed_768_; lean_object* v_res_769_; 
v_i_boxed_767_ = lean_unbox_usize(v_i_764_);
lean_dec(v_i_764_);
v_stop_boxed_768_ = lean_unbox_usize(v_stop_765_);
lean_dec(v_stop_765_);
v_res_769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__10(v_as_763_, v_i_boxed_767_, v_stop_boxed_768_, v_b_766_);
lean_dec_ref(v_as_763_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20_spec__25___redArg(lean_object* v_x_770_, lean_object* v_x_771_){
_start:
{
if (lean_obj_tag(v_x_771_) == 0)
{
return v_x_770_;
}
else
{
lean_object* v_key_772_; lean_object* v_value_773_; lean_object* v_tail_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_797_; 
v_key_772_ = lean_ctor_get(v_x_771_, 0);
v_value_773_ = lean_ctor_get(v_x_771_, 1);
v_tail_774_ = lean_ctor_get(v_x_771_, 2);
v_isSharedCheck_797_ = !lean_is_exclusive(v_x_771_);
if (v_isSharedCheck_797_ == 0)
{
v___x_776_ = v_x_771_;
v_isShared_777_ = v_isSharedCheck_797_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_tail_774_);
lean_inc(v_value_773_);
lean_inc(v_key_772_);
lean_dec(v_x_771_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_797_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; uint64_t v___x_779_; uint64_t v___x_780_; uint64_t v___x_781_; uint64_t v_fold_782_; uint64_t v___x_783_; uint64_t v___x_784_; uint64_t v___x_785_; size_t v___x_786_; size_t v___x_787_; size_t v___x_788_; size_t v___x_789_; size_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_778_ = lean_array_get_size(v_x_770_);
v___x_779_ = l_Lean_Syntax_instHashableRange_hash(v_key_772_);
v___x_780_ = 32ULL;
v___x_781_ = lean_uint64_shift_right(v___x_779_, v___x_780_);
v_fold_782_ = lean_uint64_xor(v___x_779_, v___x_781_);
v___x_783_ = 16ULL;
v___x_784_ = lean_uint64_shift_right(v_fold_782_, v___x_783_);
v___x_785_ = lean_uint64_xor(v_fold_782_, v___x_784_);
v___x_786_ = lean_uint64_to_usize(v___x_785_);
v___x_787_ = lean_usize_of_nat(v___x_778_);
v___x_788_ = ((size_t)1ULL);
v___x_789_ = lean_usize_sub(v___x_787_, v___x_788_);
v___x_790_ = lean_usize_land(v___x_786_, v___x_789_);
v___x_791_ = lean_array_uget_borrowed(v_x_770_, v___x_790_);
lean_inc(v___x_791_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 2, v___x_791_);
v___x_793_ = v___x_776_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_key_772_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_value_773_);
lean_ctor_set(v_reuseFailAlloc_796_, 2, v___x_791_);
v___x_793_ = v_reuseFailAlloc_796_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; 
v___x_794_ = lean_array_uset(v_x_770_, v___x_790_, v___x_793_);
v_x_770_ = v___x_794_;
v_x_771_ = v_tail_774_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20___redArg(lean_object* v_i_798_, lean_object* v_source_799_, lean_object* v_target_800_){
_start:
{
lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_801_ = lean_array_get_size(v_source_799_);
v___x_802_ = lean_nat_dec_lt(v_i_798_, v___x_801_);
if (v___x_802_ == 0)
{
lean_dec_ref(v_source_799_);
lean_dec(v_i_798_);
return v_target_800_;
}
else
{
lean_object* v_es_803_; lean_object* v___x_804_; lean_object* v_source_805_; lean_object* v_target_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_es_803_ = lean_array_fget(v_source_799_, v_i_798_);
v___x_804_ = lean_box(0);
v_source_805_ = lean_array_fset(v_source_799_, v_i_798_, v___x_804_);
v_target_806_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20_spec__25___redArg(v_target_800_, v_es_803_);
v___x_807_ = lean_unsigned_to_nat(1u);
v___x_808_ = lean_nat_add(v_i_798_, v___x_807_);
lean_dec(v_i_798_);
v_i_798_ = v___x_808_;
v_source_799_ = v_source_805_;
v_target_800_ = v_target_806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14___redArg(lean_object* v_data_810_){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v_nbuckets_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_811_ = lean_array_get_size(v_data_810_);
v___x_812_ = lean_unsigned_to_nat(2u);
v_nbuckets_813_ = lean_nat_mul(v___x_811_, v___x_812_);
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = lean_box(0);
v___x_816_ = lean_mk_array(v_nbuckets_813_, v___x_815_);
v___x_817_ = lean_array_propagate_mark(v_data_810_, v___x_816_);
v___x_818_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20___redArg(v___x_814_, v_data_810_, v___x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__15___redArg(lean_object* v_a_819_, lean_object* v_b_820_, lean_object* v_x_821_){
_start:
{
if (lean_obj_tag(v_x_821_) == 0)
{
lean_dec(v_b_820_);
lean_dec_ref(v_a_819_);
return v_x_821_;
}
else
{
lean_object* v_key_822_; lean_object* v_value_823_; lean_object* v_tail_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_836_; 
v_key_822_ = lean_ctor_get(v_x_821_, 0);
v_value_823_ = lean_ctor_get(v_x_821_, 1);
v_tail_824_ = lean_ctor_get(v_x_821_, 2);
v_isSharedCheck_836_ = !lean_is_exclusive(v_x_821_);
if (v_isSharedCheck_836_ == 0)
{
v___x_826_ = v_x_821_;
v_isShared_827_ = v_isSharedCheck_836_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_tail_824_);
lean_inc(v_value_823_);
lean_inc(v_key_822_);
lean_dec(v_x_821_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_836_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
uint8_t v___x_828_; 
v___x_828_ = l_Lean_Syntax_instBEqRange_beq(v_key_822_, v_a_819_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__15___redArg(v_a_819_, v_b_820_, v_tail_824_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 2, v___x_829_);
v___x_831_ = v___x_826_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_key_822_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_value_823_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
else
{
lean_object* v___x_834_; 
lean_dec(v_value_823_);
lean_dec(v_key_822_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 1, v_b_820_);
lean_ctor_set(v___x_826_, 0, v_a_819_);
v___x_834_ = v___x_826_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_819_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v_b_820_);
lean_ctor_set(v_reuseFailAlloc_835_, 2, v_tail_824_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10___redArg(lean_object* v_m_837_, lean_object* v_a_838_, lean_object* v_b_839_){
_start:
{
lean_object* v_size_840_; lean_object* v_buckets_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_884_; 
v_size_840_ = lean_ctor_get(v_m_837_, 0);
v_buckets_841_ = lean_ctor_get(v_m_837_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_m_837_);
if (v_isSharedCheck_884_ == 0)
{
v___x_843_ = v_m_837_;
v_isShared_844_ = v_isSharedCheck_884_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_buckets_841_);
lean_inc(v_size_840_);
lean_dec(v_m_837_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_884_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_845_; uint64_t v___x_846_; uint64_t v___x_847_; uint64_t v___x_848_; uint64_t v_fold_849_; uint64_t v___x_850_; uint64_t v___x_851_; uint64_t v___x_852_; size_t v___x_853_; size_t v___x_854_; size_t v___x_855_; size_t v___x_856_; size_t v___x_857_; lean_object* v_bkt_858_; uint8_t v___x_859_; 
v___x_845_ = lean_array_get_size(v_buckets_841_);
v___x_846_ = l_Lean_Syntax_instHashableRange_hash(v_a_838_);
v___x_847_ = 32ULL;
v___x_848_ = lean_uint64_shift_right(v___x_846_, v___x_847_);
v_fold_849_ = lean_uint64_xor(v___x_846_, v___x_848_);
v___x_850_ = 16ULL;
v___x_851_ = lean_uint64_shift_right(v_fold_849_, v___x_850_);
v___x_852_ = lean_uint64_xor(v_fold_849_, v___x_851_);
v___x_853_ = lean_uint64_to_usize(v___x_852_);
v___x_854_ = lean_usize_of_nat(v___x_845_);
v___x_855_ = ((size_t)1ULL);
v___x_856_ = lean_usize_sub(v___x_854_, v___x_855_);
v___x_857_ = lean_usize_land(v___x_853_, v___x_856_);
v_bkt_858_ = lean_array_uget_borrowed(v_buckets_841_, v___x_857_);
v___x_859_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Linter_Extra_UnreachableTactic_eraseUsedTactics_spec__2_spec__5___redArg(v_a_838_, v_bkt_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; lean_object* v_size_x27_861_; lean_object* v___x_862_; lean_object* v_buckets_x27_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_860_ = lean_unsigned_to_nat(1u);
v_size_x27_861_ = lean_nat_add(v_size_840_, v___x_860_);
lean_dec(v_size_840_);
lean_inc(v_bkt_858_);
v___x_862_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_862_, 0, v_a_838_);
lean_ctor_set(v___x_862_, 1, v_b_839_);
lean_ctor_set(v___x_862_, 2, v_bkt_858_);
v_buckets_x27_863_ = lean_array_uset(v_buckets_841_, v___x_857_, v___x_862_);
v___x_864_ = lean_unsigned_to_nat(4u);
v___x_865_ = lean_nat_mul(v_size_x27_861_, v___x_864_);
v___x_866_ = lean_unsigned_to_nat(3u);
v___x_867_ = lean_nat_div(v___x_865_, v___x_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_array_get_size(v_buckets_x27_863_);
v___x_869_ = lean_nat_dec_le(v___x_867_, v___x_868_);
lean_dec(v___x_867_);
if (v___x_869_ == 0)
{
lean_object* v_val_870_; lean_object* v___x_872_; 
v_val_870_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14___redArg(v_buckets_x27_863_);
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 1, v_val_870_);
lean_ctor_set(v___x_843_, 0, v_size_x27_861_);
v___x_872_ = v___x_843_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_size_x27_861_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_val_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
else
{
lean_object* v___x_875_; 
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 1, v_buckets_x27_863_);
lean_ctor_set(v___x_843_, 0, v_size_x27_861_);
v___x_875_ = v___x_843_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_size_x27_861_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_buckets_x27_863_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
else
{
lean_object* v___x_877_; lean_object* v_buckets_x27_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
lean_inc(v_bkt_858_);
v___x_877_ = lean_box(0);
v_buckets_x27_878_ = lean_array_uset(v_buckets_841_, v___x_857_, v___x_877_);
v___x_879_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__15___redArg(v_a_838_, v_b_839_, v_bkt_858_);
v___x_880_ = lean_array_uset(v_buckets_x27_878_, v___x_857_, v___x_879_);
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 1, v___x_880_);
v___x_882_ = v___x_843_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_size_840_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___redArg(lean_object* v_keys_885_, lean_object* v_i_886_, lean_object* v_k_887_){
_start:
{
lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_888_ = lean_array_get_size(v_keys_885_);
v___x_889_ = lean_nat_dec_lt(v_i_886_, v___x_888_);
if (v___x_889_ == 0)
{
lean_dec(v_i_886_);
return v___x_889_;
}
else
{
lean_object* v_k_x27_890_; uint8_t v___x_891_; 
v_k_x27_890_ = lean_array_fget_borrowed(v_keys_885_, v_i_886_);
v___x_891_ = lean_name_eq(v_k_887_, v_k_x27_890_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = lean_unsigned_to_nat(1u);
v___x_893_ = lean_nat_add(v_i_886_, v___x_892_);
lean_dec(v_i_886_);
v_i_886_ = v___x_893_;
goto _start;
}
else
{
lean_dec(v_i_886_);
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___redArg___boxed(lean_object* v_keys_895_, lean_object* v_i_896_, lean_object* v_k_897_){
_start:
{
uint8_t v_res_898_; lean_object* v_r_899_; 
v_res_898_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___redArg(v_keys_895_, v_i_896_, v_k_897_);
lean_dec(v_k_897_);
lean_dec_ref(v_keys_895_);
v_r_899_ = lean_box(v_res_898_);
return v_r_899_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___redArg(lean_object* v_x_900_, size_t v_x_901_, lean_object* v_x_902_){
_start:
{
if (lean_obj_tag(v_x_900_) == 0)
{
lean_object* v_es_903_; lean_object* v___x_904_; size_t v___x_905_; size_t v___x_906_; lean_object* v_j_907_; lean_object* v___x_908_; 
v_es_903_ = lean_ctor_get(v_x_900_, 0);
v___x_904_ = lean_box(2);
v___x_905_ = ((size_t)31ULL);
v___x_906_ = lean_usize_land(v_x_901_, v___x_905_);
v_j_907_ = lean_usize_to_nat(v___x_906_);
v___x_908_ = lean_array_get_borrowed(v___x_904_, v_es_903_, v_j_907_);
lean_dec(v_j_907_);
switch(lean_obj_tag(v___x_908_))
{
case 0:
{
lean_object* v_key_909_; uint8_t v___x_910_; 
v_key_909_ = lean_ctor_get(v___x_908_, 0);
v___x_910_ = lean_name_eq(v_x_902_, v_key_909_);
return v___x_910_;
}
case 1:
{
lean_object* v_node_911_; size_t v___x_912_; size_t v___x_913_; 
v_node_911_ = lean_ctor_get(v___x_908_, 0);
v___x_912_ = ((size_t)5ULL);
v___x_913_ = lean_usize_shift_right(v_x_901_, v___x_912_);
v_x_900_ = v_node_911_;
v_x_901_ = v___x_913_;
goto _start;
}
default: 
{
uint8_t v___x_915_; 
v___x_915_ = 0;
return v___x_915_;
}
}
}
else
{
lean_object* v_ks_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v_ks_916_ = lean_ctor_get(v_x_900_, 0);
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___redArg(v_ks_916_, v___x_917_, v_x_902_);
return v___x_918_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___redArg___boxed(lean_object* v_x_919_, lean_object* v_x_920_, lean_object* v_x_921_){
_start:
{
size_t v_x_12225__boxed_922_; uint8_t v_res_923_; lean_object* v_r_924_; 
v_x_12225__boxed_922_ = lean_unbox_usize(v_x_920_);
lean_dec(v_x_920_);
v_res_923_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___redArg(v_x_919_, v_x_12225__boxed_922_, v_x_921_);
lean_dec(v_x_921_);
lean_dec_ref(v_x_919_);
v_r_924_ = lean_box(v_res_923_);
return v_r_924_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg(lean_object* v_x_925_, lean_object* v_x_926_){
_start:
{
uint64_t v___y_928_; 
if (lean_obj_tag(v_x_926_) == 0)
{
uint64_t v___x_931_; 
v___x_931_ = 1723ULL;
v___y_928_ = v___x_931_;
goto v___jp_927_;
}
else
{
uint64_t v_hash_932_; 
v_hash_932_ = lean_ctor_get_uint64(v_x_926_, sizeof(void*)*2);
v___y_928_ = v_hash_932_;
goto v___jp_927_;
}
v___jp_927_:
{
size_t v___x_929_; uint8_t v___x_930_; 
v___x_929_ = lean_uint64_to_usize(v___y_928_);
v___x_930_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___redArg(v_x_925_, v___x_929_, v_x_926_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg___boxed(lean_object* v_x_933_, lean_object* v_x_934_){
_start:
{
uint8_t v_res_935_; lean_object* v_r_936_; 
v_res_935_ = l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg(v_x_933_, v_x_934_);
lean_dec(v_x_934_);
lean_dec_ref(v_x_933_);
v_r_936_ = lean_box(v_res_935_);
return v_r_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6(lean_object* v___x_937_, lean_object* v___x_938_, lean_object* v_ignoreTacticKinds_939_, lean_object* v_stx_940_, lean_object* v_a_941_){
_start:
{
lean_object* v___y_944_; uint8_t v___y_945_; 
if (lean_obj_tag(v_stx_940_) == 1)
{
lean_object* v_kind_961_; lean_object* v_args_962_; lean_object* v___y_964_; uint8_t v___x_969_; 
v_kind_961_ = lean_ctor_get(v_stx_940_, 1);
v_args_962_ = lean_ctor_get(v_stx_940_, 2);
v___x_969_ = l_Lean_Linter_Extra_UnreachableTactic_isIgnoreTacticKind(v_ignoreTacticKinds_939_, v_kind_961_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = lean_array_get_size(v_args_962_);
v___x_972_ = lean_nat_dec_lt(v___x_970_, v___x_971_);
if (v___x_972_ == 0)
{
v___y_964_ = v_a_941_;
goto v___jp_963_;
}
else
{
lean_object* v___x_973_; size_t v___x_974_; size_t v___x_975_; lean_object* v___x_976_; 
v___x_973_ = lean_box(0);
v___x_974_ = ((size_t)0ULL);
v___x_975_ = lean_usize_of_nat(v___x_971_);
v___x_976_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__11(v___x_937_, v___x_938_, v_ignoreTacticKinds_939_, v_args_962_, v___x_974_, v___x_975_, v___x_973_, v_a_941_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_dec_ref_known(v___x_976_, 1);
v___y_964_ = v_a_941_;
goto v___jp_963_;
}
else
{
lean_dec_ref_known(v_stx_940_, 3);
return v___x_976_;
}
}
}
else
{
v___y_964_ = v_a_941_;
goto v___jp_963_;
}
v___jp_963_:
{
uint8_t v___x_965_; 
v___x_965_ = l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg(v___x_937_, v_kind_961_);
if (v___x_965_ == 0)
{
uint8_t v___x_966_; 
v___x_966_ = l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg(v___x_938_, v_kind_961_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec_ref_known(v_stx_940_, 3);
v___x_967_ = lean_box(0);
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
else
{
v___y_944_ = v___y_964_;
v___y_945_ = v___x_966_;
goto v___jp_943_;
}
}
else
{
v___y_944_ = v___y_964_;
v___y_945_ = v___x_965_;
goto v___jp_943_;
}
}
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; 
lean_dec(v_stx_940_);
v___x_977_ = lean_box(0);
v___x_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
return v___x_978_;
}
v___jp_943_:
{
lean_object* v___x_946_; 
v___x_946_ = l_Lean_Syntax_getRange_x3f(v_stx_940_, v___y_945_);
if (lean_obj_tag(v___x_946_) == 1)
{
lean_object* v_val_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_958_; 
v_val_947_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_958_ == 0)
{
v___x_949_ = v___x_946_;
v_isShared_950_ = v_isSharedCheck_958_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_val_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_958_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_951_ = lean_st_ref_take(v___y_944_);
v___x_952_ = lean_box(0);
v___x_953_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10___redArg(v___x_951_, v_val_947_, v_stx_940_);
v___x_954_ = lean_st_ref_put(v___y_944_, v___x_953_);
if (v_isShared_950_ == 0)
{
lean_ctor_set_tag(v___x_949_, 0);
lean_ctor_set(v___x_949_, 0, v___x_952_);
v___x_956_ = v___x_949_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_952_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec(v___x_946_);
lean_dec(v_stx_940_);
v___x_959_ = lean_box(0);
v___x_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__11(lean_object* v___x_979_, lean_object* v___x_980_, lean_object* v_ignoreTacticKinds_981_, lean_object* v_as_982_, size_t v_i_983_, size_t v_stop_984_, lean_object* v_b_985_, lean_object* v___y_986_){
_start:
{
uint8_t v___x_988_; 
v___x_988_ = lean_usize_dec_eq(v_i_983_, v_stop_984_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_array_uget_borrowed(v_as_982_, v_i_983_);
lean_inc(v___x_989_);
v___x_990_ = l_Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6(v___x_979_, v___x_980_, v_ignoreTacticKinds_981_, v___x_989_, v___y_986_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; size_t v___x_992_; size_t v___x_993_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
v___x_992_ = ((size_t)1ULL);
v___x_993_ = lean_usize_add(v_i_983_, v___x_992_);
v_i_983_ = v___x_993_;
v_b_985_ = v_a_991_;
goto _start;
}
else
{
return v___x_990_;
}
}
else
{
lean_object* v___x_995_; 
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v_b_985_);
return v___x_995_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__11___boxed(lean_object* v___x_996_, lean_object* v___x_997_, lean_object* v_ignoreTacticKinds_998_, lean_object* v_as_999_, lean_object* v_i_1000_, lean_object* v_stop_1001_, lean_object* v_b_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
size_t v_i_boxed_1005_; size_t v_stop_boxed_1006_; lean_object* v_res_1007_; 
v_i_boxed_1005_ = lean_unbox_usize(v_i_1000_);
lean_dec(v_i_1000_);
v_stop_boxed_1006_ = lean_unbox_usize(v_stop_1001_);
lean_dec(v_stop_1001_);
v_res_1007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__11(v___x_996_, v___x_997_, v_ignoreTacticKinds_998_, v_as_999_, v_i_boxed_1005_, v_stop_boxed_1006_, v_b_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v_as_999_);
lean_dec_ref(v_ignoreTacticKinds_998_);
lean_dec_ref(v___x_997_);
lean_dec_ref(v___x_996_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6___boxed(lean_object* v___x_1008_, lean_object* v___x_1009_, lean_object* v_ignoreTacticKinds_1010_, lean_object* v_stx_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6(v___x_1008_, v___x_1009_, v_ignoreTacticKinds_1010_, v_stx_1011_, v_a_1012_);
lean_dec(v_a_1012_);
lean_dec_ref(v_ignoreTacticKinds_1010_);
lean_dec_ref(v___x_1009_);
lean_dec_ref(v___x_1008_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___redArg(lean_object* v_o_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_env_1020_; lean_object* v___x_1021_; lean_object* v_toEnvExtension_1022_; lean_object* v_asyncMode_1023_; lean_object* v___x_1024_; uint8_t v___x_1025_; lean_object* v___x_1026_; lean_object* v_merged_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1035_; 
v___x_1018_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1019_ = lean_st_ref_get(v___y_1016_);
v_env_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc_ref(v_env_1020_);
lean_dec(v___x_1019_);
v___x_1021_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1022_ = lean_ctor_get(v___x_1021_, 0);
v_asyncMode_1023_ = lean_ctor_get(v_toEnvExtension_1022_, 2);
v___x_1024_ = lean_box(0);
v___x_1025_ = 0;
v___x_1026_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1018_, v___x_1021_, v_env_1020_, v_asyncMode_1023_, v___x_1024_, v___x_1025_);
v_merged_1027_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1035_ == 0)
{
lean_object* v_unused_1036_; 
v_unused_1036_ = lean_ctor_get(v___x_1026_, 1);
lean_dec(v_unused_1036_);
v___x_1029_ = v___x_1026_;
v_isShared_1030_ = v_isSharedCheck_1035_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_merged_1027_);
lean_dec(v___x_1026_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1035_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v_merged_1027_);
lean_ctor_set(v___x_1029_, 0, v_o_1015_);
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_o_1015_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_merged_1027_);
v___x_1032_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
return v___x_1033_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___redArg___boxed(lean_object* v_o_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___redArg(v_o_1037_, v___y_1038_);
lean_dec(v___y_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2(lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v_scopes_1046_; lean_object* v___x_1047_; lean_object* v_opts_1048_; lean_object* v___x_1049_; 
v___x_1044_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1045_ = lean_st_ref_get(v___y_1042_);
v_scopes_1046_ = lean_ctor_get(v___x_1045_, 2);
lean_inc(v_scopes_1046_);
lean_dec(v___x_1045_);
v___x_1047_ = l_List_head_x21___redArg(v___x_1044_, v_scopes_1046_);
lean_dec(v_scopes_1046_);
v_opts_1048_ = lean_ctor_get(v___x_1047_, 1);
lean_inc_ref(v_opts_1048_);
lean_dec(v___x_1047_);
v___x_1049_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___redArg(v_opts_1048_, v___y_1042_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2___boxed(lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2(v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__0(lean_object* v_r_1054_){
_start:
{
lean_object* v_start_1055_; lean_object* v_stop_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1065_; 
v_start_1055_ = lean_ctor_get(v_r_1054_, 0);
v_stop_1056_ = lean_ctor_get(v_r_1054_, 1);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_r_1054_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1058_ = v_r_1054_;
v_isShared_1059_ = v_isSharedCheck_1065_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_stop_1056_);
lean_inc(v_start_1055_);
lean_dec(v_r_1054_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1065_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1060_ = lean_nat_to_int(v_stop_1056_);
v___x_1061_ = lean_int_neg(v___x_1060_);
lean_dec(v___x_1060_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v___x_1061_);
v___x_1063_ = v___x_1058_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_start_1055_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v___x_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg(lean_object* v_hi_1068_, lean_object* v_pivot_1069_, lean_object* v_as_1070_, lean_object* v_i_1071_, lean_object* v_k_1072_){
_start:
{
uint8_t v___x_1073_; 
v___x_1073_ = lean_nat_dec_lt(v_k_1072_, v_hi_1068_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
lean_dec(v_k_1072_);
lean_dec_ref(v_pivot_1069_);
v___x_1074_ = lean_array_fswap(v_as_1070_, v_i_1071_, v_hi_1068_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v_i_1071_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
return v___x_1075_;
}
else
{
lean_object* v___x_1076_; lean_object* v_fst_1077_; lean_object* v_fst_1078_; lean_object* v___f_1079_; lean_object* v___f_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_11692__overap_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; 
v___x_1076_ = lean_array_fget_borrowed(v_as_1070_, v_k_1072_);
v_fst_1077_ = lean_ctor_get(v___x_1076_, 0);
v_fst_1078_ = lean_ctor_get(v_pivot_1069_, 0);
v___f_1079_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__0));
v___f_1080_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__1));
lean_inc(v_fst_1077_);
v___x_1081_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__0(v_fst_1077_);
lean_inc(v_fst_1078_);
v___x_1082_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__0(v_fst_1078_);
v___x_11692__overap_1083_ = l_lexOrd___redArg(v___f_1079_, v___f_1080_);
v___x_1084_ = lean_apply_2(v___x_11692__overap_1083_, v___x_1081_, v___x_1082_);
v___x_1085_ = lean_unbox(v___x_1084_);
if (v___x_1085_ == 0)
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1086_ = lean_array_fswap(v_as_1070_, v_i_1071_, v_k_1072_);
v___x_1087_ = lean_unsigned_to_nat(1u);
v___x_1088_ = lean_nat_add(v_i_1071_, v___x_1087_);
lean_dec(v_i_1071_);
v___x_1089_ = lean_nat_add(v_k_1072_, v___x_1087_);
lean_dec(v_k_1072_);
v_as_1070_ = v___x_1086_;
v_i_1071_ = v___x_1088_;
v_k_1072_ = v___x_1089_;
goto _start;
}
else
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_unsigned_to_nat(1u);
v___x_1092_ = lean_nat_add(v_k_1072_, v___x_1091_);
lean_dec(v_k_1072_);
v_k_1072_ = v___x_1092_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___boxed(lean_object* v_hi_1094_, lean_object* v_pivot_1095_, lean_object* v_as_1096_, lean_object* v_i_1097_, lean_object* v_k_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg(v_hi_1094_, v_pivot_1095_, v_as_1096_, v_i_1097_, v_k_1098_);
lean_dec(v_hi_1094_);
return v_res_1099_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1(lean_object* v___f_1100_, lean_object* v___f_1101_, lean_object* v___f_1102_, uint8_t v___x_1103_, lean_object* v_x1_1104_, lean_object* v_x2_1105_){
_start:
{
lean_object* v_fst_1106_; lean_object* v_fst_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_11954__overap_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; 
v_fst_1106_ = lean_ctor_get(v_x1_1104_, 0);
lean_inc(v_fst_1106_);
lean_dec_ref(v_x1_1104_);
v_fst_1107_ = lean_ctor_get(v_x2_1105_, 0);
lean_inc(v_fst_1107_);
lean_dec_ref(v_x2_1105_);
lean_inc_ref(v___f_1100_);
v___x_1108_ = lean_apply_1(v___f_1100_, v_fst_1106_);
v___x_1109_ = lean_apply_1(v___f_1100_, v_fst_1107_);
v___x_11954__overap_1110_ = l_lexOrd___redArg(v___f_1101_, v___f_1102_);
v___x_1111_ = lean_apply_2(v___x_11954__overap_1110_, v___x_1108_, v___x_1109_);
v___x_1112_ = lean_unbox(v___x_1111_);
if (v___x_1112_ == 0)
{
return v___x_1103_;
}
else
{
uint8_t v___x_1113_; 
v___x_1113_ = 0;
return v___x_1113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1___boxed(lean_object* v___f_1114_, lean_object* v___f_1115_, lean_object* v___f_1116_, lean_object* v___x_1117_, lean_object* v_x1_1118_, lean_object* v_x2_1119_){
_start:
{
uint8_t v___x_12510__boxed_1120_; uint8_t v_res_1121_; lean_object* v_r_1122_; 
v___x_12510__boxed_1120_ = lean_unbox(v___x_1117_);
v_res_1121_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1(v___f_1114_, v___f_1115_, v___f_1116_, v___x_12510__boxed_1120_, v_x1_1118_, v_x2_1119_);
v_r_1122_ = lean_box(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg(lean_object* v_n_1124_, lean_object* v_as_1125_, lean_object* v_lo_1126_, lean_object* v_hi_1127_){
_start:
{
lean_object* v___y_1129_; uint8_t v___x_1139_; 
v___x_1139_ = lean_nat_dec_lt(v_lo_1126_, v_hi_1127_);
if (v___x_1139_ == 0)
{
lean_dec(v_lo_1126_);
return v_as_1125_;
}
else
{
lean_object* v___f_1140_; lean_object* v___f_1141_; lean_object* v___f_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v_mid_1145_; lean_object* v___y_1147_; lean_object* v___y_1153_; lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___f_1140_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___closed__0));
v___f_1141_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__0));
v___f_1142_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg___closed__1));
v___x_1143_ = lean_nat_add(v_lo_1126_, v_hi_1127_);
v___x_1144_ = lean_unsigned_to_nat(1u);
v_mid_1145_ = lean_nat_shiftr(v___x_1143_, v___x_1144_);
lean_dec(v___x_1143_);
v___x_1158_ = lean_array_fget_borrowed(v_as_1125_, v_mid_1145_);
v___x_1159_ = lean_array_fget_borrowed(v_as_1125_, v_lo_1126_);
lean_inc(v___x_1159_);
lean_inc(v___x_1158_);
v___x_1160_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1(v___f_1140_, v___f_1141_, v___f_1142_, v___x_1139_, v___x_1158_, v___x_1159_);
if (v___x_1160_ == 0)
{
v___y_1153_ = v_as_1125_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_array_fswap(v_as_1125_, v_lo_1126_, v_mid_1145_);
v___y_1153_ = v___x_1161_;
goto v___jp_1152_;
}
v___jp_1146_:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1148_ = lean_array_fget_borrowed(v___y_1147_, v_mid_1145_);
v___x_1149_ = lean_array_fget_borrowed(v___y_1147_, v_hi_1127_);
lean_inc(v___x_1149_);
lean_inc(v___x_1148_);
v___x_1150_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1(v___f_1140_, v___f_1141_, v___f_1142_, v___x_1139_, v___x_1148_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_dec(v_mid_1145_);
v___y_1129_ = v___y_1147_;
goto v___jp_1128_;
}
else
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_array_fswap(v___y_1147_, v_mid_1145_, v_hi_1127_);
lean_dec(v_mid_1145_);
v___y_1129_ = v___x_1151_;
goto v___jp_1128_;
}
}
v___jp_1152_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1154_ = lean_array_fget_borrowed(v___y_1153_, v_hi_1127_);
v___x_1155_ = lean_array_fget_borrowed(v___y_1153_, v_lo_1126_);
lean_inc(v___x_1155_);
lean_inc(v___x_1154_);
v___x_1156_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___lam__1(v___f_1140_, v___f_1141_, v___f_1142_, v___x_1139_, v___x_1154_, v___x_1155_);
if (v___x_1156_ == 0)
{
v___y_1147_ = v___y_1153_;
goto v___jp_1146_;
}
else
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_array_fswap(v___y_1153_, v_lo_1126_, v_hi_1127_);
v___y_1147_ = v___x_1157_;
goto v___jp_1146_;
}
}
}
v___jp_1128_:
{
lean_object* v_pivot_1130_; lean_object* v___x_1131_; lean_object* v_fst_1132_; lean_object* v_snd_1133_; uint8_t v___x_1134_; 
v_pivot_1130_ = lean_array_fget(v___y_1129_, v_hi_1127_);
lean_inc_n(v_lo_1126_, 2);
v___x_1131_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg(v_hi_1127_, v_pivot_1130_, v___y_1129_, v_lo_1126_, v_lo_1126_);
v_fst_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_fst_1132_);
v_snd_1133_ = lean_ctor_get(v___x_1131_, 1);
lean_inc(v_snd_1133_);
lean_dec_ref(v___x_1131_);
v___x_1134_ = lean_nat_dec_le(v_hi_1127_, v_fst_1132_);
if (v___x_1134_ == 0)
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg(v_n_1124_, v_snd_1133_, v_lo_1126_, v_fst_1132_);
v___x_1136_ = lean_unsigned_to_nat(1u);
v___x_1137_ = lean_nat_add(v_fst_1132_, v___x_1136_);
lean_dec(v_fst_1132_);
v_as_1125_ = v___x_1135_;
v_lo_1126_ = v___x_1137_;
goto _start;
}
else
{
lean_dec(v_fst_1132_);
lean_dec(v_lo_1126_);
return v_snd_1133_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg___boxed(lean_object* v_n_1162_, lean_object* v_as_1163_, lean_object* v_lo_1164_, lean_object* v_hi_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg(v_n_1162_, v_as_1163_, v_lo_1164_, v_hi_1165_);
lean_dec(v_hi_1165_);
lean_dec(v_n_1162_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___redArg(lean_object* v_keys_1167_, lean_object* v_vals_1168_, lean_object* v_i_1169_, lean_object* v_k_1170_){
_start:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = lean_array_get_size(v_keys_1167_);
v___x_1172_ = lean_nat_dec_lt(v_i_1169_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; 
lean_dec(v_i_1169_);
v___x_1173_ = lean_box(0);
return v___x_1173_;
}
else
{
lean_object* v_k_x27_1174_; uint8_t v___x_1175_; 
v_k_x27_1174_ = lean_array_fget_borrowed(v_keys_1167_, v_i_1169_);
v___x_1175_ = lean_name_eq(v_k_1170_, v_k_x27_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = lean_unsigned_to_nat(1u);
v___x_1177_ = lean_nat_add(v_i_1169_, v___x_1176_);
lean_dec(v_i_1169_);
v_i_1169_ = v___x_1177_;
goto _start;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_array_fget_borrowed(v_vals_1168_, v_i_1169_);
lean_dec(v_i_1169_);
lean_inc(v___x_1179_);
v___x_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_keys_1181_, lean_object* v_vals_1182_, lean_object* v_i_1183_, lean_object* v_k_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___redArg(v_keys_1181_, v_vals_1182_, v_i_1183_, v_k_1184_);
lean_dec(v_k_1184_);
lean_dec_ref(v_vals_1182_);
lean_dec_ref(v_keys_1181_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___redArg(lean_object* v_x_1186_, size_t v_x_1187_, lean_object* v_x_1188_){
_start:
{
if (lean_obj_tag(v_x_1186_) == 0)
{
lean_object* v_es_1189_; lean_object* v___x_1190_; size_t v___x_1191_; size_t v___x_1192_; lean_object* v_j_1193_; lean_object* v___x_1194_; 
v_es_1189_ = lean_ctor_get(v_x_1186_, 0);
v___x_1190_ = lean_box(2);
v___x_1191_ = ((size_t)31ULL);
v___x_1192_ = lean_usize_land(v_x_1187_, v___x_1191_);
v_j_1193_ = lean_usize_to_nat(v___x_1192_);
v___x_1194_ = lean_array_get_borrowed(v___x_1190_, v_es_1189_, v_j_1193_);
lean_dec(v_j_1193_);
switch(lean_obj_tag(v___x_1194_))
{
case 0:
{
lean_object* v_key_1195_; lean_object* v_val_1196_; uint8_t v___x_1197_; 
v_key_1195_ = lean_ctor_get(v___x_1194_, 0);
v_val_1196_ = lean_ctor_get(v___x_1194_, 1);
v___x_1197_ = lean_name_eq(v_x_1188_, v_key_1195_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; 
v___x_1198_ = lean_box(0);
return v___x_1198_;
}
else
{
lean_object* v___x_1199_; 
lean_inc(v_val_1196_);
v___x_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1199_, 0, v_val_1196_);
return v___x_1199_;
}
}
case 1:
{
lean_object* v_node_1200_; size_t v___x_1201_; size_t v___x_1202_; 
v_node_1200_ = lean_ctor_get(v___x_1194_, 0);
v___x_1201_ = ((size_t)5ULL);
v___x_1202_ = lean_usize_shift_right(v_x_1187_, v___x_1201_);
v_x_1186_ = v_node_1200_;
v_x_1187_ = v___x_1202_;
goto _start;
}
default: 
{
lean_object* v___x_1204_; 
v___x_1204_ = lean_box(0);
return v___x_1204_;
}
}
}
else
{
lean_object* v_ks_1205_; lean_object* v_vs_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v_ks_1205_ = lean_ctor_get(v_x_1186_, 0);
v_vs_1206_ = lean_ctor_get(v_x_1186_, 1);
v___x_1207_ = lean_unsigned_to_nat(0u);
v___x_1208_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___redArg(v_ks_1205_, v_vs_1206_, v___x_1207_, v_x_1188_);
return v___x_1208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___redArg___boxed(lean_object* v_x_1209_, lean_object* v_x_1210_, lean_object* v_x_1211_){
_start:
{
size_t v_x_12623__boxed_1212_; lean_object* v_res_1213_; 
v_x_12623__boxed_1212_ = lean_unbox_usize(v_x_1210_);
lean_dec(v_x_1210_);
v_res_1213_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___redArg(v_x_1209_, v_x_12623__boxed_1212_, v_x_1211_);
lean_dec(v_x_1211_);
lean_dec_ref(v_x_1209_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg(lean_object* v_x_1214_, lean_object* v_x_1215_){
_start:
{
uint64_t v___y_1217_; 
if (lean_obj_tag(v_x_1215_) == 0)
{
uint64_t v___x_1220_; 
v___x_1220_ = 1723ULL;
v___y_1217_ = v___x_1220_;
goto v___jp_1216_;
}
else
{
uint64_t v_hash_1221_; 
v_hash_1221_ = lean_ctor_get_uint64(v_x_1215_, sizeof(void*)*2);
v___y_1217_ = v_hash_1221_;
goto v___jp_1216_;
}
v___jp_1216_:
{
size_t v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_uint64_to_usize(v___y_1217_);
v___x_1219_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___redArg(v_x_1214_, v___x_1218_, v_x_1215_);
return v___x_1219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg___boxed(lean_object* v_x_1222_, lean_object* v_x_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg(v_x_1222_, v_x_1223_);
lean_dec(v_x_1223_);
lean_dec_ref(v_x_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__20(lean_object* v_opts_1225_, lean_object* v_opt_1226_){
_start:
{
lean_object* v_name_1227_; lean_object* v_defValue_1228_; lean_object* v_map_1229_; lean_object* v___x_1230_; 
v_name_1227_ = lean_ctor_get(v_opt_1226_, 0);
v_defValue_1228_ = lean_ctor_get(v_opt_1226_, 1);
v_map_1229_ = lean_ctor_get(v_opts_1225_, 0);
v___x_1230_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1229_, v_name_1227_);
if (lean_obj_tag(v___x_1230_) == 0)
{
uint8_t v___x_1231_; 
v___x_1231_ = lean_unbox(v_defValue_1228_);
return v___x_1231_;
}
else
{
lean_object* v_val_1232_; 
v_val_1232_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_val_1232_);
lean_dec_ref_known(v___x_1230_, 1);
if (lean_obj_tag(v_val_1232_) == 1)
{
uint8_t v_v_1233_; 
v_v_1233_ = lean_ctor_get_uint8(v_val_1232_, 0);
lean_dec_ref_known(v_val_1232_, 0);
return v_v_1233_;
}
else
{
uint8_t v___x_1234_; 
lean_dec(v_val_1232_);
v___x_1234_ = lean_unbox(v_defValue_1228_);
return v___x_1234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__20___boxed(lean_object* v_opts_1235_, lean_object* v_opt_1236_){
_start:
{
uint8_t v_res_1237_; lean_object* v_r_1238_; 
v_res_1237_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__20(v_opts_1235_, v_opt_1236_);
lean_dec_ref(v_opt_1236_);
lean_dec_ref(v_opts_1235_);
v_r_1238_ = lean_box(v_res_1237_);
return v_r_1238_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0(uint8_t v___x_1240_, lean_object* v_x_1241_){
_start:
{
if (lean_obj_tag(v_x_1241_) == 1)
{
lean_object* v_pre_1242_; 
v_pre_1242_ = lean_ctor_get(v_x_1241_, 0);
if (lean_obj_tag(v_pre_1242_) == 0)
{
lean_object* v_str_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; 
v_str_1243_ = lean_ctor_get(v_x_1241_, 1);
v___x_1244_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0___closed__0));
v___x_1245_ = lean_string_dec_eq(v_str_1243_, v___x_1244_);
return v___x_1245_;
}
else
{
return v___x_1240_;
}
}
else
{
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0___boxed(lean_object* v___x_1246_, lean_object* v_x_1247_){
_start:
{
uint8_t v___x_12697__boxed_1248_; uint8_t v_res_1249_; lean_object* v_r_1250_; 
v___x_12697__boxed_1248_ = lean_unbox(v___x_1246_);
v_res_1249_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___lam__0(v___x_12697__boxed_1248_, v_x_1247_);
lean_dec(v_x_1247_);
v_r_1250_ = lean_box(v_res_1249_);
return v_r_1250_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1251_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__0);
v___x_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
return v___x_1253_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1254_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1);
v___x_1255_ = lean_unsigned_to_nat(0u);
v___x_1256_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
lean_ctor_set(v___x_1256_, 2, v___x_1255_);
lean_ctor_set(v___x_1256_, 3, v___x_1255_);
lean_ctor_set(v___x_1256_, 4, v___x_1254_);
lean_ctor_set(v___x_1256_, 5, v___x_1254_);
lean_ctor_set(v___x_1256_, 6, v___x_1254_);
lean_ctor_set(v___x_1256_, 7, v___x_1254_);
lean_ctor_set(v___x_1256_, 8, v___x_1254_);
lean_ctor_set(v___x_1256_, 9, v___x_1254_);
lean_ctor_set(v___x_1256_, 10, v___x_1254_);
return v___x_1256_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__3(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = lean_unsigned_to_nat(32u);
v___x_1258_ = lean_mk_empty_array_with_capacity(v___x_1257_);
v___x_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
return v___x_1259_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__4(void){
_start:
{
size_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1260_ = ((size_t)5ULL);
v___x_1261_ = lean_unsigned_to_nat(0u);
v___x_1262_ = lean_unsigned_to_nat(32u);
v___x_1263_ = lean_mk_empty_array_with_capacity(v___x_1262_);
v___x_1264_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__3);
v___x_1265_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
lean_ctor_set(v___x_1265_, 1, v___x_1263_);
lean_ctor_set(v___x_1265_, 2, v___x_1261_);
lean_ctor_set(v___x_1265_, 3, v___x_1261_);
lean_ctor_set_usize(v___x_1265_, 4, v___x_1260_);
return v___x_1265_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__5(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1266_ = lean_box(1);
v___x_1267_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__4);
v___x_1268_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__1);
v___x_1269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___x_1267_);
lean_ctor_set(v___x_1269_, 2, v___x_1266_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg(lean_object* v_msgData_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v___x_1273_; lean_object* v_env_1274_; uint8_t v___x_1275_; lean_object* v_env_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v_scopes_1279_; lean_object* v___x_1280_; lean_object* v_opts_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1273_ = lean_st_ref_get(v___y_1271_);
v_env_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc_ref(v_env_1274_);
lean_dec(v___x_1273_);
v___x_1275_ = 0;
v_env_1276_ = l_Lean_Environment_setRecordingDeps(v_env_1274_, v___x_1275_);
v___x_1277_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1278_ = lean_st_ref_get(v___y_1271_);
v_scopes_1279_ = lean_ctor_get(v___x_1278_, 2);
lean_inc(v_scopes_1279_);
lean_dec(v___x_1278_);
v___x_1280_ = l_List_head_x21___redArg(v___x_1277_, v_scopes_1279_);
lean_dec(v_scopes_1279_);
v_opts_1281_ = lean_ctor_get(v___x_1280_, 1);
lean_inc_ref(v_opts_1281_);
lean_dec(v___x_1280_);
v___x_1282_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__2);
v___x_1283_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___closed__5);
v___x_1284_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1284_, 0, v_env_1276_);
lean_ctor_set(v___x_1284_, 1, v___x_1282_);
lean_ctor_set(v___x_1284_, 2, v___x_1283_);
lean_ctor_set(v___x_1284_, 3, v_opts_1281_);
v___x_1285_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
lean_ctor_set(v___x_1285_, 1, v_msgData_1270_);
v___x_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg___boxed(lean_object* v_msgData_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg(v_msgData_1287_, v___y_1288_);
lean_dec(v___y_1288_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13(lean_object* v_ref_1295_, lean_object* v_msgData_1296_, uint8_t v_severity_1297_, uint8_t v_isSilent_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v___y_1303_; lean_object* v___y_1304_; uint8_t v___y_1305_; lean_object* v___y_1306_; uint8_t v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1368_; uint8_t v___y_1369_; uint8_t v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1393_; uint8_t v___y_1394_; lean_object* v___y_1395_; uint8_t v___y_1396_; lean_object* v___y_1397_; uint8_t v___y_1401_; uint8_t v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = 2;
v___x_1430_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1297_, v___x_1429_);
if (v___x_1430_ == 0)
{
goto v___jp_1418_;
}
else
{
uint8_t v___x_1431_; 
lean_inc_ref(v_msgData_1296_);
v___x_1431_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1296_);
if (v___x_1431_ == 0)
{
goto v___jp_1418_;
}
else
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
lean_dec_ref(v_msgData_1296_);
v___x_1432_ = lean_box(0);
v___x_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
return v___x_1433_;
}
}
v___jp_1302_:
{
lean_object* v___x_1311_; 
v___x_1311_ = l_Lean_Elab_Command_getScope___redArg(v___y_1310_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v_currNamespace_1313_; lean_object* v___x_1314_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v_currNamespace_1313_ = lean_ctor_get(v_a_1312_, 2);
lean_inc(v_currNamespace_1313_);
lean_dec(v_a_1312_);
v___x_1314_ = l_Lean_Elab_Command_getScope___redArg(v___y_1310_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1350_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1317_ = v___x_1314_;
v_isShared_1318_ = v_isSharedCheck_1350_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1314_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1350_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v_openDecls_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v_env_1324_; lean_object* v_messages_1325_; lean_object* v_scopes_1326_; lean_object* v_usedQuotCtxts_1327_; lean_object* v_nextMacroScope_1328_; lean_object* v_maxRecDepth_1329_; lean_object* v_ngen_1330_; lean_object* v_auxDeclNGen_1331_; lean_object* v_infoState_1332_; lean_object* v_traceState_1333_; lean_object* v_snapshotTasks_1334_; lean_object* v_prevLinterStates_1335_; lean_object* v_codeQualityEntryTasks_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1349_; 
v_openDecls_1319_ = lean_ctor_get(v_a_1315_, 3);
lean_inc(v_openDecls_1319_);
lean_dec(v_a_1315_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v_currNamespace_1313_);
lean_ctor_set(v___x_1320_, 1, v_openDecls_1319_);
v___x_1321_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v___y_1308_);
lean_inc_ref(v___y_1303_);
lean_inc_ref(v___y_1304_);
v___x_1322_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1322_, 0, v___y_1304_);
lean_ctor_set(v___x_1322_, 1, v___y_1306_);
lean_ctor_set(v___x_1322_, 2, v___y_1309_);
lean_ctor_set(v___x_1322_, 3, v___y_1303_);
lean_ctor_set(v___x_1322_, 4, v___x_1321_);
lean_ctor_set_uint8(v___x_1322_, sizeof(void*)*5, v___y_1305_);
lean_ctor_set_uint8(v___x_1322_, sizeof(void*)*5 + 1, v___y_1307_);
lean_ctor_set_uint8(v___x_1322_, sizeof(void*)*5 + 2, v_isSilent_1298_);
v___x_1323_ = lean_st_ref_take(v___y_1310_);
v_env_1324_ = lean_ctor_get(v___x_1323_, 0);
v_messages_1325_ = lean_ctor_get(v___x_1323_, 1);
v_scopes_1326_ = lean_ctor_get(v___x_1323_, 2);
v_usedQuotCtxts_1327_ = lean_ctor_get(v___x_1323_, 3);
v_nextMacroScope_1328_ = lean_ctor_get(v___x_1323_, 4);
v_maxRecDepth_1329_ = lean_ctor_get(v___x_1323_, 5);
v_ngen_1330_ = lean_ctor_get(v___x_1323_, 6);
v_auxDeclNGen_1331_ = lean_ctor_get(v___x_1323_, 7);
v_infoState_1332_ = lean_ctor_get(v___x_1323_, 8);
v_traceState_1333_ = lean_ctor_get(v___x_1323_, 9);
v_snapshotTasks_1334_ = lean_ctor_get(v___x_1323_, 10);
v_prevLinterStates_1335_ = lean_ctor_get(v___x_1323_, 11);
v_codeQualityEntryTasks_1336_ = lean_ctor_get(v___x_1323_, 12);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1338_ = v___x_1323_;
v_isShared_1339_ = v_isSharedCheck_1349_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1336_);
lean_inc(v_prevLinterStates_1335_);
lean_inc(v_snapshotTasks_1334_);
lean_inc(v_traceState_1333_);
lean_inc(v_infoState_1332_);
lean_inc(v_auxDeclNGen_1331_);
lean_inc(v_ngen_1330_);
lean_inc(v_maxRecDepth_1329_);
lean_inc(v_nextMacroScope_1328_);
lean_inc(v_usedQuotCtxts_1327_);
lean_inc(v_scopes_1326_);
lean_inc(v_messages_1325_);
lean_inc(v_env_1324_);
lean_dec(v___x_1323_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1349_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1340_ = lean_box(0);
v___x_1341_ = l_Lean_MessageLog_add(v___x_1322_, v_messages_1325_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 1, v___x_1341_);
v___x_1343_ = v___x_1338_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_env_1324_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1348_, 2, v_scopes_1326_);
lean_ctor_set(v_reuseFailAlloc_1348_, 3, v_usedQuotCtxts_1327_);
lean_ctor_set(v_reuseFailAlloc_1348_, 4, v_nextMacroScope_1328_);
lean_ctor_set(v_reuseFailAlloc_1348_, 5, v_maxRecDepth_1329_);
lean_ctor_set(v_reuseFailAlloc_1348_, 6, v_ngen_1330_);
lean_ctor_set(v_reuseFailAlloc_1348_, 7, v_auxDeclNGen_1331_);
lean_ctor_set(v_reuseFailAlloc_1348_, 8, v_infoState_1332_);
lean_ctor_set(v_reuseFailAlloc_1348_, 9, v_traceState_1333_);
lean_ctor_set(v_reuseFailAlloc_1348_, 10, v_snapshotTasks_1334_);
lean_ctor_set(v_reuseFailAlloc_1348_, 11, v_prevLinterStates_1335_);
lean_ctor_set(v_reuseFailAlloc_1348_, 12, v_codeQualityEntryTasks_1336_);
v___x_1343_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1344_ = lean_st_ref_put(v___y_1310_, v___x_1343_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 0, v___x_1340_);
v___x_1346_ = v___x_1317_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1340_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_currNamespace_1313_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec_ref(v___y_1306_);
v_a_1351_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1314_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1314_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec_ref(v___y_1306_);
v_a_1359_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1311_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1311_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
v___jp_1367_:
{
lean_object* v_fileName_1373_; lean_object* v_fileMap_1374_; uint8_t v_suppressElabErrors_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1391_; 
v_fileName_1373_ = lean_ctor_get(v___y_1299_, 0);
v_fileMap_1374_ = lean_ctor_get(v___y_1299_, 1);
v_suppressElabErrors_1375_ = lean_ctor_get_uint8(v___y_1299_, sizeof(void*)*10);
v___x_1376_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1296_);
v___x_1377_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg(v___x_1376_, v___y_1300_);
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1380_ = v___x_1377_;
v_isShared_1381_ = v_isSharedCheck_1391_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1377_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1391_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_inc_ref_n(v_fileMap_1374_, 2);
v___x_1382_ = l_Lean_FileMap_toPosition(v_fileMap_1374_, v___y_1371_);
lean_dec(v___y_1371_);
v___x_1383_ = l_Lean_FileMap_toPosition(v_fileMap_1374_, v___y_1372_);
lean_dec(v___y_1372_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
v___x_1385_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__0));
if (v_suppressElabErrors_1375_ == 0)
{
lean_del_object(v___x_1380_);
v___y_1303_ = v___x_1385_;
v___y_1304_ = v_fileName_1373_;
v___y_1305_ = v___y_1369_;
v___y_1306_ = v___x_1382_;
v___y_1307_ = v___y_1370_;
v___y_1308_ = v_a_1378_;
v___y_1309_ = v___x_1384_;
v___y_1310_ = v___y_1300_;
goto v___jp_1302_;
}
else
{
uint8_t v___x_1386_; 
lean_inc(v_a_1378_);
lean_inc_ref(v___y_1368_);
v___x_1386_ = l_Lean_MessageData_hasTag(v___y_1368_, v_a_1378_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; lean_object* v___x_1389_; 
lean_dec_ref_known(v___x_1384_, 1);
lean_dec_ref(v___x_1382_);
lean_dec(v_a_1378_);
v___x_1387_ = lean_box(0);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v___x_1387_);
v___x_1389_ = v___x_1380_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1387_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
else
{
lean_del_object(v___x_1380_);
v___y_1303_ = v___x_1385_;
v___y_1304_ = v_fileName_1373_;
v___y_1305_ = v___y_1369_;
v___y_1306_ = v___x_1382_;
v___y_1307_ = v___y_1370_;
v___y_1308_ = v_a_1378_;
v___y_1309_ = v___x_1384_;
v___y_1310_ = v___y_1300_;
goto v___jp_1302_;
}
}
}
}
v___jp_1392_:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lean_Syntax_getTailPos_x3f(v___y_1395_, v___y_1394_);
lean_dec(v___y_1395_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_inc(v___y_1397_);
v___y_1368_ = v___y_1393_;
v___y_1369_ = v___y_1394_;
v___y_1370_ = v___y_1396_;
v___y_1371_ = v___y_1397_;
v___y_1372_ = v___y_1397_;
goto v___jp_1367_;
}
else
{
lean_object* v_val_1399_; 
v_val_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_val_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v___y_1368_ = v___y_1393_;
v___y_1369_ = v___y_1394_;
v___y_1370_ = v___y_1396_;
v___y_1371_ = v___y_1397_;
v___y_1372_ = v_val_1399_;
goto v___jp_1367_;
}
}
v___jp_1400_:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_Elab_Command_getRef___redArg(v___y_1299_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v_ref_1404_; uint8_t v___x_1405_; lean_object* v___f_1406_; lean_object* v___x_1407_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v_ref_1404_ = l_Lean_replaceRef(v_ref_1295_, v_a_1403_);
lean_dec(v_a_1403_);
v___x_1405_ = 0;
v___f_1406_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___closed__1));
v___x_1407_ = l_Lean_Syntax_getPos_x3f(v_ref_1404_, v___x_1405_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_unsigned_to_nat(0u);
v___y_1393_ = v___f_1406_;
v___y_1394_ = v___x_1405_;
v___y_1395_ = v_ref_1404_;
v___y_1396_ = v___y_1401_;
v___y_1397_ = v___x_1408_;
goto v___jp_1392_;
}
else
{
lean_object* v_val_1409_; 
v_val_1409_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_val_1409_);
lean_dec_ref_known(v___x_1407_, 1);
v___y_1393_ = v___f_1406_;
v___y_1394_ = v___x_1405_;
v___y_1395_ = v_ref_1404_;
v___y_1396_ = v___y_1401_;
v___y_1397_ = v_val_1409_;
goto v___jp_1392_;
}
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_dec_ref(v_msgData_1296_);
v_a_1410_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1402_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1402_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
v___jp_1418_:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v_scopes_1421_; lean_object* v___x_1422_; lean_object* v_opts_1423_; uint8_t v___x_1424_; uint8_t v___x_1425_; 
v___x_1419_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1420_ = lean_st_ref_get(v___y_1300_);
v_scopes_1421_ = lean_ctor_get(v___x_1420_, 2);
lean_inc(v_scopes_1421_);
lean_dec(v___x_1420_);
v___x_1422_ = l_List_head_x21___redArg(v___x_1419_, v_scopes_1421_);
lean_dec(v_scopes_1421_);
v_opts_1423_ = lean_ctor_get(v___x_1422_, 1);
lean_inc_ref(v_opts_1423_);
lean_dec(v___x_1422_);
v___x_1424_ = 1;
v___x_1425_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1297_, v___x_1424_);
if (v___x_1425_ == 0)
{
lean_dec_ref(v_opts_1423_);
v___y_1401_ = v_severity_1297_;
goto v___jp_1400_;
}
else
{
lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1426_ = l_Lean_warningAsError;
v___x_1427_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__20(v_opts_1423_, v___x_1426_);
lean_dec_ref(v_opts_1423_);
if (v___x_1427_ == 0)
{
v___y_1401_ = v_severity_1297_;
goto v___jp_1400_;
}
else
{
uint8_t v___x_1428_; 
v___x_1428_ = 2;
v___y_1401_ = v___x_1428_;
goto v___jp_1400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13___boxed(lean_object* v_ref_1434_, lean_object* v_msgData_1435_, lean_object* v_severity_1436_, lean_object* v_isSilent_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
uint8_t v_severity_boxed_1441_; uint8_t v_isSilent_boxed_1442_; lean_object* v_res_1443_; 
v_severity_boxed_1441_ = lean_unbox(v_severity_1436_);
v_isSilent_boxed_1442_ = lean_unbox(v_isSilent_1437_);
v_res_1443_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13(v_ref_1434_, v_msgData_1435_, v_severity_boxed_1441_, v_isSilent_boxed_1442_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v_ref_1434_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3(lean_object* v_ref_1444_, lean_object* v_msgData_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
uint8_t v___x_1449_; uint8_t v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = 1;
v___x_1450_ = 0;
v___x_1451_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13(v_ref_1444_, v_msgData_1445_, v___x_1449_, v___x_1450_, v___y_1446_, v___y_1447_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3___boxed(lean_object* v_ref_1452_, lean_object* v_msgData_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3(v_ref_1452_, v_msgData_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v_ref_1452_);
return v_res_1457_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__0));
v___x_1460_ = l_Lean_stringToMessageData(v___x_1459_);
return v___x_1460_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__2));
v___x_1463_ = l_Lean_stringToMessageData(v___x_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1(lean_object* v_linterOption_1464_, lean_object* v_stx_1465_, lean_object* v_msg_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_name_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1488_; 
v_name_1470_ = lean_ctor_get(v_linterOption_1464_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_linterOption_1464_);
if (v_isSharedCheck_1488_ == 0)
{
lean_object* v_unused_1489_; 
v_unused_1489_ = lean_ctor_get(v_linterOption_1464_, 1);
lean_dec(v_unused_1489_);
v___x_1472_ = v_linterOption_1464_;
v_isShared_1473_ = v_isSharedCheck_1488_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_name_1470_);
lean_dec(v_linterOption_1464_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1488_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1474_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__1);
lean_inc(v_name_1470_);
v___x_1475_ = l_Lean_MessageData_ofName(v_name_1470_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set_tag(v___x_1472_, 7);
lean_ctor_set(v___x_1472_, 1, v___x_1475_);
lean_ctor_set(v___x_1472_, 0, v___x_1474_);
v___x_1477_ = v___x_1472_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1474_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v_disable_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1478_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___closed__3);
v___x_1479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1477_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
v_disable_1480_ = l_Lean_MessageData_note(v___x_1479_);
v___x_1481_ = l_Lean_Linter_linterMessageTag;
v___x_1482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1482_, 0, v_msg_1466_);
lean_ctor_set(v___x_1482_, 1, v_disable_1480_);
v___x_1483_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1481_);
lean_ctor_set(v___x_1483_, 1, v___x_1482_);
v___x_1484_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1484_, 0, v_name_1470_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
lean_inc(v_stx_1465_);
v___x_1485_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_1485_, 0, v_stx_1465_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
v___x_1486_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3(v_stx_1465_, v___x_1485_, v___y_1467_, v___y_1468_);
lean_dec(v_stx_1465_);
return v___x_1486_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1___boxed(lean_object* v_linterOption_1490_, lean_object* v_stx_1491_, lean_object* v_msg_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1(v_linterOption_1490_, v_stx_1491_, v_msg_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1(lean_object* v_linterOption_1497_, lean_object* v_stx_1498_, lean_object* v_msg_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v___x_1503_; lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1514_; 
v___x_1503_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2(v___y_1500_, v___y_1501_);
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1506_ = v___x_1503_;
v_isShared_1507_ = v_isSharedCheck_1514_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1503_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1514_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
uint8_t v___x_1508_; 
v___x_1508_ = l_Lean_Linter_getLinterValue(v_linterOption_1497_, v_a_1504_);
lean_dec(v_a_1504_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; lean_object* v___x_1511_; 
lean_dec_ref(v_msg_1499_);
lean_dec(v_stx_1498_);
lean_dec_ref(v_linterOption_1497_);
v___x_1509_ = lean_box(0);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 0, v___x_1509_);
v___x_1511_ = v___x_1506_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
else
{
lean_object* v___x_1513_; 
lean_del_object(v___x_1506_);
v___x_1513_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1(v_linterOption_1497_, v_stx_1498_, v_msg_1499_, v___y_1500_, v___y_1501_);
return v___x_1513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1___boxed(lean_object* v_linterOption_1515_, lean_object* v_stx_1516_, lean_object* v_msg_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1(v_linterOption_1515_, v_stx_1516_, v_msg_1517_, v___y_1518_, v___y_1519_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
return v_res_1521_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__2(void){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__1));
v___x_1526_ = l_Lean_MessageData_ofFormat(v___x_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7(lean_object* v_as_1527_, size_t v_sz_1528_, size_t v_i_1529_, lean_object* v_b_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v_a_1535_; uint8_t v___x_1539_; 
v___x_1539_ = lean_usize_dec_lt(v_i_1529_, v_sz_1528_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v_b_1530_);
return v___x_1540_;
}
else
{
lean_object* v_a_1541_; lean_object* v_fst_1542_; lean_object* v_snd_1543_; lean_object* v_start_1556_; lean_object* v_stop_1557_; lean_object* v_start_1558_; lean_object* v_stop_1559_; uint8_t v___x_1560_; 
v_a_1541_ = lean_array_uget_borrowed(v_as_1527_, v_i_1529_);
v_fst_1542_ = lean_ctor_get(v_a_1541_, 0);
v_snd_1543_ = lean_ctor_get(v_a_1541_, 1);
v_start_1556_ = lean_ctor_get(v_b_1530_, 0);
v_stop_1557_ = lean_ctor_get(v_b_1530_, 1);
v_start_1558_ = lean_ctor_get(v_fst_1542_, 0);
v_stop_1559_ = lean_ctor_get(v_fst_1542_, 1);
v___x_1560_ = lean_nat_dec_le(v_start_1556_, v_start_1558_);
if (v___x_1560_ == 0)
{
lean_dec_ref(v_b_1530_);
goto v___jp_1544_;
}
else
{
uint8_t v___x_1561_; 
v___x_1561_ = lean_nat_dec_le(v_stop_1559_, v_stop_1557_);
if (v___x_1561_ == 0)
{
lean_dec_ref(v_b_1530_);
goto v___jp_1544_;
}
else
{
v_a_1535_ = v_b_1530_;
goto v___jp_1534_;
}
}
v___jp_1544_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1545_ = l_Lean_Linter_Extra_linter_extra_unreachableTactic;
v___x_1546_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___closed__2);
lean_inc(v_snd_1543_);
v___x_1547_ = l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1(v___x_1545_, v_snd_1543_, v___x_1546_, v___y_1531_, v___y_1532_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_dec_ref_known(v___x_1547_, 1);
lean_inc(v_fst_1542_);
v_a_1535_ = v_fst_1542_;
goto v___jp_1534_;
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1547_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1547_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
}
v___jp_1534_:
{
size_t v___x_1536_; size_t v___x_1537_; 
v___x_1536_ = ((size_t)1ULL);
v___x_1537_ = lean_usize_add(v_i_1529_, v___x_1536_);
v_i_1529_ = v___x_1537_;
v_b_1530_ = v_a_1535_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7___boxed(lean_object* v_as_1562_, lean_object* v_sz_1563_, lean_object* v_i_1564_, lean_object* v_b_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
size_t v_sz_boxed_1569_; size_t v_i_boxed_1570_; lean_object* v_res_1571_; 
v_sz_boxed_1569_ = lean_unbox_usize(v_sz_1563_);
lean_dec(v_sz_1563_);
v_i_boxed_1570_ = lean_unbox_usize(v_i_1564_);
lean_dec(v_i_1564_);
v_res_1571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7(v_as_1562_, v_sz_boxed_1569_, v_i_boxed_1570_, v_b_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec_ref(v_as_1562_);
return v_res_1571_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_unsigned_to_nat(16u);
v___x_1580_ = lean_mk_array(v___x_1579_, v___x_1578_);
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = lean_obj_once(&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__4, &l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__4_once, _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__4);
v___x_1582_ = lean_unsigned_to_nat(0u);
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
lean_ctor_set(v___x_1583_, 1, v___x_1581_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0(lean_object* v___x_1586_, lean_object* v_stx_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v_a_1592_; lean_object* v___x_1599_; lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1710_; 
v___x_1599_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2(v___y_1588_, v___y_1589_);
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1710_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1710_;
goto v_resetjp_1601_;
}
v___jp_1591_:
{
lean_object* v_ref_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v_ref_1593_ = lean_ctor_get(v___y_1588_, 7);
v___x_1594_ = lean_io_error_to_string(v_a_1592_);
v___x_1595_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
v___x_1596_ = l_Lean_MessageData_ofFormat(v___x_1595_);
lean_inc(v_ref_1593_);
v___x_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1597_, 0, v_ref_1593_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
return v___x_1598_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1610_; uint8_t v___x_1611_; 
v___x_1604_ = lean_st_ref_get(v___y_1589_);
v___x_1610_ = l_Lean_Linter_Extra_linter_extra_unreachableTactic;
v___x_1611_ = l_Lean_Linter_getLinterValue(v___x_1610_, v_a_1600_);
lean_dec(v_a_1600_);
if (v___x_1611_ == 0)
{
lean_dec(v___x_1604_);
lean_dec(v_stx_1587_);
goto v___jp_1605_;
}
else
{
lean_object* v_infoState_1612_; uint8_t v_enabled_1613_; 
v_infoState_1612_ = lean_ctor_get(v___x_1604_, 8);
lean_inc_ref(v_infoState_1612_);
lean_dec(v___x_1604_);
v_enabled_1613_ = lean_ctor_get_uint8(v_infoState_1612_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1612_);
if (v_enabled_1613_ == 0)
{
lean_dec(v_stx_1587_);
goto v___jp_1605_;
}
else
{
lean_object* v___x_1614_; lean_object* v_messages_1615_; uint8_t v___x_1616_; 
lean_del_object(v___x_1602_);
v___x_1614_ = lean_st_ref_get(v___y_1589_);
v_messages_1615_ = lean_ctor_get(v___x_1614_, 1);
lean_inc_ref(v_messages_1615_);
lean_dec(v___x_1614_);
v___x_1616_ = l_Lean_MessageLog_hasErrors(v_messages_1615_);
lean_dec_ref(v_messages_1615_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; lean_object* v_env_1618_; lean_object* v___x_1619_; lean_object* v_ext_1620_; lean_object* v_toEnvExtension_1621_; lean_object* v_asyncMode_1622_; lean_object* v___x_1623_; lean_object* v_categories_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1617_ = lean_st_ref_get(v___y_1589_);
v_env_1618_ = lean_ctor_get(v___x_1617_, 0);
lean_inc_ref(v_env_1618_);
lean_dec(v___x_1617_);
v___x_1619_ = l_Lean_Parser_parserExtension;
v_ext_1620_ = lean_ctor_get(v___x_1619_, 1);
v_toEnvExtension_1621_ = lean_ctor_get(v_ext_1620_, 0);
v_asyncMode_1622_ = lean_ctor_get(v_toEnvExtension_1621_, 2);
v___x_1623_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1586_, v___x_1619_, v_env_1618_, v_asyncMode_1622_, v___x_1616_);
v_categories_1624_ = lean_ctor_get(v___x_1623_, 2);
lean_inc_ref(v_categories_1624_);
lean_dec(v___x_1623_);
v___x_1625_ = ((lean_object*)(l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__1));
v___x_1626_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg(v_categories_1624_, v___x_1625_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
lean_dec_ref(v_categories_1624_);
lean_dec(v_stx_1587_);
v___x_1627_ = lean_box(0);
v___x_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
return v___x_1628_;
}
else
{
lean_object* v_val_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1707_; 
v_val_1629_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1631_ = v___x_1626_;
v_isShared_1632_ = v_isSharedCheck_1707_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_val_1629_);
lean_dec(v___x_1626_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1707_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1633_ = ((lean_object*)(l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__3));
v___x_1634_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg(v_categories_1624_, v___x_1633_);
lean_dec_ref(v_categories_1624_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1637_; 
lean_dec(v_val_1629_);
lean_dec(v_stx_1587_);
v___x_1635_ = lean_box(0);
if (v_isShared_1632_ == 0)
{
lean_ctor_set_tag(v___x_1631_, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1635_);
v___x_1637_ = v___x_1631_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
else
{
lean_object* v_val_1639_; lean_object* v_kinds_1640_; lean_object* v_kinds_1641_; lean_object* v___x_1642_; lean_object* v_a_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
lean_del_object(v___x_1631_);
v_val_1639_ = lean_ctor_get(v___x_1634_, 0);
lean_inc(v_val_1639_);
lean_dec_ref_known(v___x_1634_, 1);
v_kinds_1640_ = lean_ctor_get(v_val_1629_, 1);
lean_inc_ref(v_kinds_1640_);
lean_dec(v_val_1629_);
v_kinds_1641_ = lean_ctor_get(v_val_1639_, 1);
lean_inc_ref(v_kinds_1641_);
lean_dec(v_val_1639_);
v___x_1642_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__5___redArg(v___y_1589_);
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref(v___x_1642_);
v___x_1644_ = l_Lean_Linter_Extra_UnreachableTactic_ignoreTacticKindsRef;
v___x_1645_ = lean_unsigned_to_nat(0u);
v___x_1646_ = lean_obj_once(&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__5, &l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__5_once, _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__5);
v___x_1647_ = lean_st_mk_ref(v___x_1646_);
v___x_1648_ = lean_st_ref_get(v___x_1644_);
v___x_1649_ = l_Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6(v_kinds_1640_, v_kinds_1641_, v___x_1648_, v_stx_1587_, v___x_1647_);
lean_dec(v___x_1648_);
lean_dec_ref(v_kinds_1641_);
lean_dec_ref(v_kinds_1640_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v___x_1650_; 
lean_dec_ref_known(v___x_1649_, 1);
v___x_1650_ = l_Lean_Linter_Extra_UnreachableTactic_eraseUsedTacticsList(v_a_1643_, v___x_1647_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v___x_1651_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1676_; lean_object* v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1690_; lean_object* v_size_1697_; lean_object* v_buckets_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; uint8_t v___x_1701_; 
lean_dec_ref_known(v___x_1650_, 1);
v___x_1651_ = lean_st_ref_get(v___x_1647_);
lean_dec(v___x_1647_);
v_size_1697_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_size_1697_);
v_buckets_1698_ = lean_ctor_get(v___x_1651_, 1);
lean_inc_ref(v_buckets_1698_);
lean_dec(v___x_1651_);
v___x_1699_ = lean_mk_empty_array_with_capacity(v_size_1697_);
lean_dec(v_size_1697_);
v___x_1700_ = lean_array_get_size(v_buckets_1698_);
v___x_1701_ = lean_nat_dec_lt(v___x_1645_, v___x_1700_);
if (v___x_1701_ == 0)
{
lean_dec_ref(v_buckets_1698_);
v___y_1690_ = v___x_1699_;
goto v___jp_1689_;
}
else
{
size_t v___x_1702_; size_t v___x_1703_; lean_object* v___x_1704_; 
v___x_1702_ = ((size_t)0ULL);
v___x_1703_ = lean_usize_of_nat(v___x_1700_);
v___x_1704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__10(v_buckets_1698_, v___x_1702_, v___x_1703_, v___x_1699_);
lean_dec_ref(v_buckets_1698_);
v___y_1690_ = v___x_1704_;
goto v___jp_1689_;
}
v___jp_1652_:
{
size_t v_sz_1655_; size_t v___x_1656_; lean_object* v___x_1657_; 
v_sz_1655_ = lean_array_size(v___y_1654_);
v___x_1656_ = ((size_t)0ULL);
lean_inc_ref(v___y_1653_);
v___x_1657_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__7(v___y_1654_, v_sz_1655_, v___x_1656_, v___y_1653_, v___y_1588_, v___y_1589_);
lean_dec_ref(v___y_1654_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1665_; 
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1665_ == 0)
{
lean_object* v_unused_1666_; 
v_unused_1666_ = lean_ctor_get(v___x_1657_, 0);
lean_dec(v_unused_1666_);
v___x_1659_ = v___x_1657_;
v_isShared_1660_ = v_isSharedCheck_1665_;
goto v_resetjp_1658_;
}
else
{
lean_dec(v___x_1657_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1665_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; lean_object* v___x_1663_; 
v___x_1661_ = lean_box(0);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 0, v___x_1661_);
v___x_1663_ = v___x_1659_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
v_a_1667_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1657_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1657_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
v___jp_1675_:
{
lean_object* v___x_1681_; 
v___x_1681_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg(v___y_1677_, v___y_1679_, v___y_1676_, v___y_1680_);
lean_dec(v___y_1680_);
lean_dec(v___y_1677_);
v___y_1653_ = v___y_1678_;
v___y_1654_ = v___x_1681_;
goto v___jp_1652_;
}
v___jp_1682_:
{
uint8_t v___x_1688_; 
v___x_1688_ = lean_nat_dec_le(v___y_1687_, v___y_1685_);
if (v___x_1688_ == 0)
{
lean_dec(v___y_1685_);
lean_inc(v___y_1687_);
v___y_1676_ = v___y_1687_;
v___y_1677_ = v___y_1683_;
v___y_1678_ = v___y_1684_;
v___y_1679_ = v___y_1686_;
v___y_1680_ = v___y_1687_;
goto v___jp_1675_;
}
else
{
v___y_1676_ = v___y_1687_;
v___y_1677_ = v___y_1683_;
v___y_1678_ = v___y_1684_;
v___y_1679_ = v___y_1686_;
v___y_1680_ = v___y_1685_;
goto v___jp_1675_;
}
}
v___jp_1689_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
v___x_1691_ = ((lean_object*)(l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___closed__6));
v___x_1692_ = lean_array_get_size(v___y_1690_);
v___x_1693_ = lean_nat_dec_eq(v___x_1692_, v___x_1645_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1694_; lean_object* v___x_1695_; uint8_t v___x_1696_; 
v___x_1694_ = lean_unsigned_to_nat(1u);
v___x_1695_ = lean_nat_sub(v___x_1692_, v___x_1694_);
v___x_1696_ = lean_nat_dec_le(v___x_1645_, v___x_1695_);
if (v___x_1696_ == 0)
{
lean_inc(v___x_1695_);
v___y_1683_ = v___x_1692_;
v___y_1684_ = v___x_1691_;
v___y_1685_ = v___x_1695_;
v___y_1686_ = v___y_1690_;
v___y_1687_ = v___x_1695_;
goto v___jp_1682_;
}
else
{
v___y_1683_ = v___x_1692_;
v___y_1684_ = v___x_1691_;
v___y_1685_ = v___x_1695_;
v___y_1686_ = v___y_1690_;
v___y_1687_ = v___x_1645_;
goto v___jp_1682_;
}
}
else
{
v___y_1653_ = v___x_1691_;
v___y_1654_ = v___y_1690_;
goto v___jp_1652_;
}
}
}
else
{
lean_object* v_a_1705_; 
lean_dec(v___x_1647_);
v_a_1705_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1650_, 1);
v_a_1592_ = v_a_1705_;
goto v___jp_1591_;
}
}
else
{
lean_object* v_a_1706_; 
lean_dec(v___x_1647_);
lean_dec(v_a_1643_);
v_a_1706_ = lean_ctor_get(v___x_1649_, 0);
lean_inc(v_a_1706_);
lean_dec_ref_known(v___x_1649_, 1);
v_a_1592_ = v_a_1706_;
goto v___jp_1591_;
}
}
}
}
}
else
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
lean_dec(v_stx_1587_);
v___x_1708_ = lean_box(0);
v___x_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
return v___x_1709_;
}
}
}
v___jp_1605_:
{
lean_object* v___x_1606_; lean_object* v___x_1608_; 
v___x_1606_ = lean_box(0);
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 0, v___x_1606_);
v___x_1608_ = v___x_1602_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v___x_1606_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___boxed(lean_object* v___x_1711_, lean_object* v_stx_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0(v___x_1711_, v_stx_1712_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec_ref(v___x_1711_);
return v_res_1716_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__0(void){
_start:
{
lean_object* v___x_1717_; lean_object* v___f_1718_; 
v___x_1717_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___f_1718_ = lean_alloc_closure((void*)(l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___lam__0___boxed), 5, 1);
lean_closure_set(v___f_1718_, 0, v___x_1717_);
return v___f_1718_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__1(void){
_start:
{
lean_object* v___f_1719_; lean_object* v___x_1720_; 
v___f_1719_ = lean_obj_once(&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__0, &l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__0_once, _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__0);
v___x_1720_ = lean_alloc_closure((void*)(l_Lean_withSetOptionIn___boxed), 6, 2);
lean_closure_set(v___x_1720_, 0, lean_box(0));
lean_closure_set(v___x_1720_, 1, v___f_1719_);
return v___x_1720_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__5(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1729_ = ((lean_object*)(l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__4));
v___x_1730_ = lean_obj_once(&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__1, &l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__1_once, _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__1);
v___x_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1730_);
lean_ctor_set(v___x_1731_, 1, v___x_1729_);
return v___x_1731_;
}
}
static lean_object* _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter(void){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_obj_once(&l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__5, &l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__5_once, _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter___closed__5);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3(lean_object* v_o_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___redArg(v_o_1733_, v___y_1735_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3___boxed(lean_object* v_o_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__2_spec__3(v_o_1738_, v___y_1739_, v___y_1740_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3(lean_object* v_00_u03b2_1743_, lean_object* v_x_1744_, lean_object* v_x_1745_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___redArg(v_x_1744_, v_x_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3___boxed(lean_object* v_00_u03b2_1747_, lean_object* v_x_1748_, lean_object* v_x_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3(v_00_u03b2_1747_, v_x_1748_, v_x_1749_);
lean_dec(v_x_1749_);
lean_dec_ref(v_x_1748_);
return v_res_1750_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4(lean_object* v_00_u03b2_1751_, lean_object* v_x_1752_, lean_object* v_x_1753_){
_start:
{
uint8_t v___x_1754_; 
v___x_1754_ = l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___redArg(v_x_1752_, v_x_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4___boxed(lean_object* v_00_u03b2_1755_, lean_object* v_x_1756_, lean_object* v_x_1757_){
_start:
{
uint8_t v_res_1758_; lean_object* v_r_1759_; 
v_res_1758_ = l_Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4(v_00_u03b2_1755_, v_x_1756_, v_x_1757_);
lean_dec(v_x_1757_);
lean_dec_ref(v_x_1756_);
v_r_1759_ = lean_box(v_res_1758_);
return v_r_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8(lean_object* v_n_1760_, lean_object* v_as_1761_, lean_object* v_lo_1762_, lean_object* v_hi_1763_, lean_object* v_w_1764_, lean_object* v_hlo_1765_, lean_object* v_hhi_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___redArg(v_n_1760_, v_as_1761_, v_lo_1762_, v_hi_1763_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8___boxed(lean_object* v_n_1768_, lean_object* v_as_1769_, lean_object* v_lo_1770_, lean_object* v_hi_1771_, lean_object* v_w_1772_, lean_object* v_hlo_1773_, lean_object* v_hhi_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8(v_n_1768_, v_as_1769_, v_lo_1770_, v_hi_1771_, v_w_1772_, v_hlo_1773_, v_hhi_1774_);
lean_dec(v_hi_1771_);
lean_dec(v_n_1768_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5(lean_object* v_00_u03b2_1776_, lean_object* v_x_1777_, size_t v_x_1778_, lean_object* v_x_1779_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___redArg(v_x_1777_, v_x_1778_, v_x_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1781_, lean_object* v_x_1782_, lean_object* v_x_1783_, lean_object* v_x_1784_){
_start:
{
size_t v_x_13599__boxed_1785_; lean_object* v_res_1786_; 
v_x_13599__boxed_1785_ = lean_unbox_usize(v_x_1783_);
lean_dec(v_x_1783_);
v_res_1786_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5(v_00_u03b2_1781_, v_x_1782_, v_x_13599__boxed_1785_, v_x_1784_);
lean_dec(v_x_1784_);
lean_dec_ref(v_x_1782_);
return v_res_1786_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7(lean_object* v_00_u03b2_1787_, lean_object* v_x_1788_, size_t v_x_1789_, lean_object* v_x_1790_){
_start:
{
uint8_t v___x_1791_; 
v___x_1791_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___redArg(v_x_1788_, v_x_1789_, v_x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1792_, lean_object* v_x_1793_, lean_object* v_x_1794_, lean_object* v_x_1795_){
_start:
{
size_t v_x_13610__boxed_1796_; uint8_t v_res_1797_; lean_object* v_r_1798_; 
v_x_13610__boxed_1796_ = lean_unbox_usize(v_x_1794_);
lean_dec(v_x_1794_);
v_res_1797_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7(v_00_u03b2_1792_, v_x_1793_, v_x_13610__boxed_1796_, v_x_1795_);
lean_dec(v_x_1795_);
lean_dec_ref(v_x_1793_);
v_r_1798_ = lean_box(v_res_1797_);
return v_r_1798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10(lean_object* v_00_u03b2_1799_, lean_object* v_m_1800_, lean_object* v_a_1801_, lean_object* v_b_1802_){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10___redArg(v_m_1800_, v_a_1801_, v_b_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14(lean_object* v_n_1804_, lean_object* v_lo_1805_, lean_object* v_hi_1806_, lean_object* v_hhi_1807_, lean_object* v_pivot_1808_, lean_object* v_as_1809_, lean_object* v_i_1810_, lean_object* v_k_1811_, lean_object* v_ilo_1812_, lean_object* v_ik_1813_, lean_object* v_w_1814_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___redArg(v_hi_1806_, v_pivot_1808_, v_as_1809_, v_i_1810_, v_k_1811_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14___boxed(lean_object* v_n_1816_, lean_object* v_lo_1817_, lean_object* v_hi_1818_, lean_object* v_hhi_1819_, lean_object* v_pivot_1820_, lean_object* v_as_1821_, lean_object* v_i_1822_, lean_object* v_k_1823_, lean_object* v_ilo_1824_, lean_object* v_ik_1825_, lean_object* v_w_1826_){
_start:
{
lean_object* v_res_1827_; 
v_res_1827_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__8_spec__14(v_n_1816_, v_lo_1817_, v_hi_1818_, v_hhi_1819_, v_pivot_1820_, v_as_1821_, v_i_1822_, v_k_1823_, v_ilo_1824_, v_ik_1825_, v_w_1826_);
lean_dec(v_hi_1818_);
lean_dec(v_lo_1817_);
lean_dec(v_n_1816_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_1828_, lean_object* v_keys_1829_, lean_object* v_vals_1830_, lean_object* v_heq_1831_, lean_object* v_i_1832_, lean_object* v_k_1833_){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___redArg(v_keys_1829_, v_vals_1830_, v_i_1832_, v_k_1833_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1835_, lean_object* v_keys_1836_, lean_object* v_vals_1837_, lean_object* v_heq_1838_, lean_object* v_i_1839_, lean_object* v_k_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__3_spec__5_spec__8(v_00_u03b2_1835_, v_keys_1836_, v_vals_1837_, v_heq_1838_, v_i_1839_, v_k_1840_);
lean_dec(v_k_1840_);
lean_dec_ref(v_vals_1837_);
lean_dec_ref(v_keys_1836_);
return v_res_1841_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11(lean_object* v_00_u03b2_1842_, lean_object* v_keys_1843_, lean_object* v_vals_1844_, lean_object* v_heq_1845_, lean_object* v_i_1846_, lean_object* v_k_1847_){
_start:
{
uint8_t v___x_1848_; 
v___x_1848_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___redArg(v_keys_1843_, v_i_1846_, v_k_1847_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11___boxed(lean_object* v_00_u03b2_1849_, lean_object* v_keys_1850_, lean_object* v_vals_1851_, lean_object* v_heq_1852_, lean_object* v_i_1853_, lean_object* v_k_1854_){
_start:
{
uint8_t v_res_1855_; lean_object* v_r_1856_; 
v_res_1855_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__4_spec__7_spec__11(v_00_u03b2_1849_, v_keys_1850_, v_vals_1851_, v_heq_1852_, v_i_1853_, v_k_1854_);
lean_dec(v_k_1854_);
lean_dec_ref(v_vals_1851_);
lean_dec_ref(v_keys_1850_);
v_r_1856_ = lean_box(v_res_1855_);
return v_r_1856_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14(lean_object* v_00_u03b2_1857_, lean_object* v_data_1858_){
_start:
{
lean_object* v___x_1859_; 
v___x_1859_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14___redArg(v_data_1858_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__15(lean_object* v_00_u03b2_1860_, lean_object* v_a_1861_, lean_object* v_b_1862_, lean_object* v_x_1863_){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__15___redArg(v_a_1861_, v_b_1862_, v_x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19(lean_object* v_msgData_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___redArg(v_msgData_1865_, v___y_1867_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19___boxed(lean_object* v_msgData_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__1_spec__1_spec__3_spec__13_spec__19(v_msgData_1870_, v___y_1871_, v___y_1872_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20(lean_object* v_00_u03b2_1875_, lean_object* v_i_1876_, lean_object* v_source_1877_, lean_object* v_target_1878_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20___redArg(v_i_1876_, v_source_1877_, v_target_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20_spec__25(lean_object* v_00_u03b2_1880_, lean_object* v_x_1881_, lean_object* v_x_1882_){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_Extra_UnreachableTactic_getTactics___at___00Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter_spec__6_spec__10_spec__14_spec__20_spec__25___redArg(v_x_1881_, v_x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_1366347041____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter;
v___x_1886_ = l_Lean_Elab_Command_addLinter(v___x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_1366347041____hygCtx___hyg_2____boxed(lean_object* v_a_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_1366347041____hygCtx___hyg_2_();
return v_res_1888_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Init_Try(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Extra_UnreachableTactic(uint8_t builtin) {
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
res = runtime_initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_3804698830____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Extra_linter_extra_unreachableTactic = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Extra_linter_extra_unreachableTactic);
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_949854657____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Extra_UnreachableTactic_ignoreTacticKindsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Extra_UnreachableTactic_ignoreTacticKindsRef);
lean_dec_ref(res);
l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter = _init_l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter();
lean_mark_persistent(l_Lean_Linter_Extra_UnreachableTactic_unreachableTacticLinter);
res = l___private_Lean_Linter_Extra_UnreachableTactic_0__Lean_Linter_Extra_UnreachableTactic_initFn_00___x40_Lean_Linter_Extra_UnreachableTactic_1366347041____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Extra_UnreachableTactic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Syntax(uint8_t builtin);
lean_object* initialize_Init_Try(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Extra_UnreachableTactic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Extra_UnreachableTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Extra_UnreachableTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Extra_UnreachableTactic(builtin);
}
#ifdef __cplusplus
}
#endif
