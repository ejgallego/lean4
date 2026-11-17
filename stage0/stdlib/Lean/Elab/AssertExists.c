// Lean compiler output
// Module: Lean.Elab.AssertExists
// Imports: public import Lean.Elab.Command
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedModuleData_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_crossEmoji;
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_checkEmoji;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t l_Bool_instDecidableLt(uint8_t, uint8_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_HashSet_instInhabited___redArg();
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Environment_importPath_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Environment_importPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Environment_importPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Environment_importPath___closed__0 = (const lean_object*)&l_Lean_Environment_importPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Environment_importPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_importPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Command_instBEqAssertExists_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instBEqAssertExists_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Command_instBEqAssertExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instBEqAssertExists_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_instBEqAssertExists___closed__0 = (const lean_object*)&l_Lean_Elab_Command_instBEqAssertExists___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_instBEqAssertExists = (const lean_object*)&l_Lean_Elab_Command_instBEqAssertExists___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Elab_Command_instHashableAssertExists_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instHashableAssertExists_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_Command_instHashableAssertExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instHashableAssertExists_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_instHashableAssertExists___closed__0 = (const lean_object*)&l_Lean_Elab_Command_instHashableAssertExists___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_instHashableAssertExists = (const lean_object*)&l_Lean_Elab_Command_instHashableAssertExists___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__2_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__2_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "assertExistsExt"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(254, 190, 77, 153, 163, 56, 32, 184)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_assertExistsExt;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Command_getSortedAssertExists_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_getSortedAssertExists_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_getSortedAssertExists_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_getSortedAssertExists___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_getSortedAssertExists___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_getSortedAssertExists(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "\n  which is imported by "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_importPathMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\n  which is imported by this file."};
static const lean_object* l_Lean_Elab_Command_importPathMessage___closed__0 = (const lean_object*)&l_Lean_Elab_Command_importPathMessage___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_importPathMessage___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_importPathMessage___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_importPathMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_importPathMessage___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabImportPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Declaration "};
static const lean_object* l_Lean_Elab_Command_elabImportPath___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabImportPath___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_elabImportPath___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabImportPath___closed__1;
static const lean_string_object l_Lean_Elab_Command_elabImportPath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " is imported via\n"};
static const lean_object* l_Lean_Elab_Command_elabImportPath___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabImportPath___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Command_elabImportPath___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabImportPath___closed__3;
static const lean_string_object l_Lean_Elab_Command_elabImportPath___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " is defined in this file."};
static const lean_object* l_Lean_Elab_Command_elabImportPath___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabImportPath___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Command_elabImportPath___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabImportPath___closed__5;
static const lean_string_object l_Lean_Elab_Command_elabImportPath___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Declaration '"};
static const lean_object* l_Lean_Elab_Command_elabImportPath___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabImportPath___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Command_elabImportPath___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabImportPath___closed__7;
static const lean_string_object l_Lean_Elab_Command_elabImportPath___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "' is not in scope."};
static const lean_object* l_Lean_Elab_Command_elabImportPath___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabImportPath___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Command_elabImportPath___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabImportPath___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabImportPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabImportPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "importPath"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(107, 162, 88, 45, 100, 199, 50, 9)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabImportPath"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(132, 84, 165, 83, 249, 15, 141, 145)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 247, .m_capacity = 247, .m_length = 246, .m_data = "`#import_path Foo` prints the transitive import chain that brings the declaration `Foo`\ninto the current file's scope.\n\nThis is useful for understanding why a particular declaration is available,\nespecially when debugging unexpected dependencies."};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Command_elabAssertNotExists_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Command_elabAssertNotExists_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 220, .m_capacity = 220, .m_length = 219, .m_data = "\n\nThese invariants are maintained by `assert_not_exists` statements, and exist in order to ensure that \"complicated\" parts of the library are not accidentally introduced as dependencies of \"simple\" parts of the library."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = " is not allowed to be imported by this file.\nIt is defined in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotExists(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotExists___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "assertNotExists"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 12, 165, 84, 72, 16, 34, 200)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabAssertNotExists"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(26, 89, 203, 163, 167, 88, 147, 25)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 821, .m_capacity = 821, .m_length = 806, .m_data = "`assert_not_exists d₁ d₂ ... dₙ` is a command that asserts that the declarations named\n`d₁ d₂ ... dₙ` *do not exist* in the current import scope.\n\nBe careful to use names (e.g. `Rat`) rather than notations (e.g. `ℚ`).\n\nIt may be used (sparingly!) to enforce plans that certain files are independent of each other.\n\nIf you encounter an error on an `assert_not_exists` command while developing a library,\nit is probably because you have introduced new import dependencies to a file.\nIn this case, you should refactor your work\n(for example by creating new files rather than adding imports to existing files).\nYou should *not* delete the `assert_not_exists` statement without careful discussion ahead of time.\n\n`assert_not_exists` statements should generally live at the top of the file, after the module doc."};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Command_elabAssertNotImported_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Command_elabAssertNotImported_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "the module '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "' is (transitively) imported via\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotImported(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotImported___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "assertNotImported"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 142, 19, 163, 216, 15, 246, 138)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "elabAssertNotImported"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(35, 106, 174, 153, 200, 206, 100, 97)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 250, .m_capacity = 250, .m_length = 231, .m_data = "`assert_not_imported m₁ m₂ ... mₙ` checks that each one of the modules `m₁ m₂ ... mₙ` is not\namong the transitive imports of the current file.\n\nThe command does not currently check whether the modules `m₁ m₂ ... mₙ` actually exist."};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2_spec__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Command_elabCheckAssertions_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Command_elabCheckAssertions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "' ("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ") asserted in '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "'."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__7;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__0;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__1;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__2;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__3;
static const lean_string_object l_Lean_Elab_Command_elabCheckAssertions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "---"};
static const lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__5;
static const lean_string_object l_Lean_Elab_Command_elabCheckAssertions___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = " means the declaration or import exists."};
static const lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__7;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__8;
static const lean_string_object l_Lean_Elab_Command_elabCheckAssertions___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = " means the declaration or import does not exist."};
static const lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__10;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__11;
static const lean_string_object l_Lean_Elab_Command_elabCheckAssertions___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Command_elabCheckAssertions___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__12_value)}};
static const lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__14;
static const lean_string_object l_Lean_Elab_Command_elabCheckAssertions___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "No assertions made."};
static const lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_elabCheckAssertions___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__15_value)}};
static const lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__16 = (const lean_object*)&l_Lean_Elab_Command_elabCheckAssertions___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Command_elabCheckAssertions___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabCheckAssertions___closed__17;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckAssertions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckAssertions___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "checkAssertions"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 218, 120, 53, 168, 205, 138, 249)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabCheckAssertions"};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(110, 95, 94, 234, 82, 254, 243, 188)}};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 775, .m_capacity = 775, .m_length = 771, .m_data = "`#check_assertions` retrieves all declarations and all imports that were declared\nnot to exist so far (including in transitively imported files) and reports their current\nstatus:\n* ✓ means the declaration or import exists,\n* × means the declaration or import does not exist.\n\nThis means that the expectation is that all checks *succeed* by the time `#check_assertions`\nis used, typically once all of the library has been built.\n\nIf all declarations and imports are available when `#check_assertions` is used,\nthen the command logs an info message. Otherwise, it emits a warning.\n\nThe variant `#check_assertions!` only prints declarations/imports that are not present in the\nenvironment. In particular, it is silent if everything is imported, making it useful for testing."};
static const lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Environment_importPath_spec__0(lean_object* v___x_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; lean_object* v_module_7_; uint8_t v___x_8_; 
v___x_6_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
v_module_7_ = lean_ctor_get(v___x_6_, 0);
v___x_8_ = lean_name_eq(v_module_7_, v___x_1_);
if (v___x_8_ == 0)
{
size_t v___x_9_; size_t v___x_10_; 
v___x_9_ = ((size_t)1ULL);
v___x_10_ = lean_usize_add(v_i_3_, v___x_9_);
v_i_3_ = v___x_10_;
goto _start;
}
else
{
return v___x_8_;
}
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Environment_importPath_spec__0___boxed(lean_object* v___x_13_, lean_object* v_as_14_, lean_object* v_i_15_, lean_object* v_stop_16_){
_start:
{
size_t v_i_boxed_17_; size_t v_stop_boxed_18_; uint8_t v_res_19_; lean_object* v_r_20_; 
v_i_boxed_17_ = lean_unbox_usize(v_i_15_);
lean_dec(v_i_15_);
v_stop_boxed_18_ = lean_unbox_usize(v_stop_16_);
lean_dec(v_stop_16_);
v_res_19_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Environment_importPath_spec__0(v___x_13_, v_as_14_, v_i_boxed_17_, v_stop_boxed_18_);
lean_dec_ref(v_as_14_);
lean_dec(v___x_13_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___redArg(lean_object* v_modData_21_, lean_object* v_modNames_22_, lean_object* v_range_23_, lean_object* v_b_24_, lean_object* v_i_25_){
_start:
{
lean_object* v_stop_26_; lean_object* v_step_27_; lean_object* v_a_29_; uint8_t v___x_32_; 
v_stop_26_ = lean_ctor_get(v_range_23_, 1);
v_step_27_ = lean_ctor_get(v_range_23_, 2);
v___x_32_ = lean_nat_dec_lt(v_i_25_, v_stop_26_);
if (v___x_32_ == 0)
{
lean_dec(v_i_25_);
return v_b_24_;
}
else
{
lean_object* v_fst_33_; lean_object* v_snd_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_55_; 
v_fst_33_ = lean_ctor_get(v_b_24_, 0);
v_snd_34_ = lean_ctor_get(v_b_24_, 1);
v_isSharedCheck_55_ = !lean_is_exclusive(v_b_24_);
if (v_isSharedCheck_55_ == 0)
{
v___x_36_ = v_b_24_;
v_isShared_37_ = v_isSharedCheck_55_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_snd_34_);
lean_inc(v_fst_33_);
lean_dec(v_b_24_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_55_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_imports_44_; lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_42_ = l_Lean_instInhabitedModuleData_default;
v___x_43_ = lean_array_get_borrowed(v___x_42_, v_modData_21_, v_i_25_);
v_imports_44_ = lean_ctor_get(v___x_43_, 0);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_array_get_size(v_imports_44_);
v___x_47_ = lean_nat_dec_lt(v___x_45_, v___x_46_);
if (v___x_47_ == 0)
{
goto v___jp_38_;
}
else
{
if (v___x_47_ == 0)
{
goto v___jp_38_;
}
else
{
size_t v___x_48_; size_t v___x_49_; uint8_t v___x_50_; 
v___x_48_ = ((size_t)0ULL);
v___x_49_ = lean_usize_of_nat(v___x_46_);
v___x_50_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Environment_importPath_spec__0(v_snd_34_, v_imports_44_, v___x_48_, v___x_49_);
if (v___x_50_ == 0)
{
goto v___jp_38_;
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
lean_del_object(v___x_36_);
lean_dec(v_snd_34_);
v___x_51_ = lean_box(0);
v___x_52_ = lean_array_get_borrowed(v___x_51_, v_modNames_22_, v_i_25_);
lean_inc_n(v___x_52_, 2);
v___x_53_ = lean_array_push(v_fst_33_, v___x_52_);
v___x_54_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
v_a_29_ = v___x_54_;
goto v___jp_28_;
}
}
}
v___jp_38_:
{
lean_object* v___x_40_; 
if (v_isShared_37_ == 0)
{
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_fst_33_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v_snd_34_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
v_a_29_ = v___x_40_;
goto v___jp_28_;
}
}
}
}
v___jp_28_:
{
lean_object* v___x_30_; 
v___x_30_ = lean_nat_add(v_i_25_, v_step_27_);
lean_dec(v_i_25_);
v_b_24_ = v_a_29_;
v_i_25_ = v___x_30_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___redArg___boxed(lean_object* v_modData_56_, lean_object* v_modNames_57_, lean_object* v_range_58_, lean_object* v_b_59_, lean_object* v_i_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___redArg(v_modData_56_, v_modNames_57_, v_range_58_, v_b_59_, v_i_60_);
lean_dec_ref(v_range_58_);
lean_dec_ref(v_modNames_57_);
lean_dec_ref(v_modData_56_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_importPath(lean_object* v_env_64_, lean_object* v_imported_65_){
_start:
{
lean_object* v_result_66_; lean_object* v___x_67_; 
v_result_66_ = ((lean_object*)(l_Lean_Environment_importPath___closed__0));
v___x_67_ = l_Lean_Environment_getModuleIdx_x3f(v_env_64_, v_imported_65_);
if (lean_obj_tag(v___x_67_) == 1)
{
lean_object* v_val_68_; lean_object* v___x_69_; lean_object* v_moduleNames_70_; lean_object* v_moduleData_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v_fst_78_; 
v_val_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc(v_val_68_);
lean_dec_ref_known(v___x_67_, 1);
v___x_69_ = l_Lean_Environment_header(v_env_64_);
v_moduleNames_70_ = lean_ctor_get(v___x_69_, 4);
lean_inc_ref(v_moduleNames_70_);
v_moduleData_71_ = lean_ctor_get(v___x_69_, 7);
lean_inc_ref(v_moduleData_71_);
lean_dec_ref(v___x_69_);
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_nat_add(v_val_68_, v___x_72_);
lean_dec(v_val_68_);
v___x_74_ = lean_array_get_size(v_moduleData_71_);
lean_inc(v___x_73_);
v___x_75_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
lean_ctor_set(v___x_75_, 2, v___x_72_);
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v_result_66_);
lean_ctor_set(v___x_76_, 1, v_imported_65_);
v___x_77_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___redArg(v_moduleData_71_, v_moduleNames_70_, v___x_75_, v___x_76_, v___x_73_);
lean_dec_ref_known(v___x_75_, 3);
lean_dec_ref(v_moduleNames_70_);
lean_dec_ref(v_moduleData_71_);
v_fst_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_fst_78_);
lean_dec_ref(v___x_77_);
return v_fst_78_;
}
else
{
lean_dec(v___x_67_);
lean_dec(v_imported_65_);
return v_result_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_importPath___boxed(lean_object* v_env_79_, lean_object* v_imported_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Environment_importPath(v_env_79_, v_imported_80_);
lean_dec_ref(v_env_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1(lean_object* v_modData_82_, lean_object* v_modNames_83_, lean_object* v_range_84_, lean_object* v_b_85_, lean_object* v_i_86_, lean_object* v_hs_87_, lean_object* v_hl_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___redArg(v_modData_82_, v_modNames_83_, v_range_84_, v_b_85_, v_i_86_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1___boxed(lean_object* v_modData_90_, lean_object* v_modNames_91_, lean_object* v_range_92_, lean_object* v_b_93_, lean_object* v_i_94_, lean_object* v_hs_95_, lean_object* v_hl_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Environment_importPath_spec__1(v_modData_90_, v_modNames_91_, v_range_92_, v_b_93_, v_i_94_, v_hs_95_, v_hl_96_);
lean_dec_ref(v_range_92_);
lean_dec_ref(v_modNames_91_);
lean_dec_ref(v_modData_90_);
return v_res_97_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Command_instBEqAssertExists_beq(lean_object* v_x_98_, lean_object* v_x_99_){
_start:
{
uint8_t v_isDecl_100_; lean_object* v_givenName_101_; lean_object* v_modName_102_; uint8_t v_isDecl_103_; lean_object* v_givenName_104_; lean_object* v_modName_105_; 
v_isDecl_100_ = lean_ctor_get_uint8(v_x_98_, sizeof(void*)*2);
v_givenName_101_ = lean_ctor_get(v_x_98_, 0);
v_modName_102_ = lean_ctor_get(v_x_98_, 1);
v_isDecl_103_ = lean_ctor_get_uint8(v_x_99_, sizeof(void*)*2);
v_givenName_104_ = lean_ctor_get(v_x_99_, 0);
v_modName_105_ = lean_ctor_get(v_x_99_, 1);
if (v_isDecl_103_ == 0)
{
if (v_isDecl_100_ == 0)
{
goto v___jp_106_;
}
else
{
return v_isDecl_103_;
}
}
else
{
if (v_isDecl_100_ == 0)
{
return v_isDecl_100_;
}
else
{
goto v___jp_106_;
}
}
v___jp_106_:
{
uint8_t v___x_107_; 
v___x_107_ = lean_name_eq(v_givenName_101_, v_givenName_104_);
if (v___x_107_ == 0)
{
return v___x_107_;
}
else
{
uint8_t v___x_108_; 
v___x_108_ = lean_name_eq(v_modName_102_, v_modName_105_);
return v___x_108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instBEqAssertExists_beq___boxed(lean_object* v_x_109_, lean_object* v_x_110_){
_start:
{
uint8_t v_res_111_; lean_object* v_r_112_; 
v_res_111_ = l_Lean_Elab_Command_instBEqAssertExists_beq(v_x_109_, v_x_110_);
lean_dec_ref(v_x_110_);
lean_dec_ref(v_x_109_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT uint64_t l_Lean_Elab_Command_instHashableAssertExists_hash(lean_object* v_x_115_){
_start:
{
uint8_t v_isDecl_116_; lean_object* v_givenName_117_; lean_object* v_modName_118_; uint64_t v___y_120_; uint64_t v___y_121_; uint64_t v___x_127_; uint64_t v___y_129_; 
v_isDecl_116_ = lean_ctor_get_uint8(v_x_115_, sizeof(void*)*2);
v_givenName_117_ = lean_ctor_get(v_x_115_, 0);
v_modName_118_ = lean_ctor_get(v_x_115_, 1);
v___x_127_ = 0ULL;
if (v_isDecl_116_ == 0)
{
uint64_t v___x_133_; 
v___x_133_ = 13ULL;
v___y_129_ = v___x_133_;
goto v___jp_128_;
}
else
{
uint64_t v___x_134_; 
v___x_134_ = 11ULL;
v___y_129_ = v___x_134_;
goto v___jp_128_;
}
v___jp_119_:
{
uint64_t v___x_122_; 
v___x_122_ = lean_uint64_mix_hash(v___y_120_, v___y_121_);
if (lean_obj_tag(v_modName_118_) == 0)
{
uint64_t v___x_123_; uint64_t v___x_124_; 
v___x_123_ = 1723ULL;
v___x_124_ = lean_uint64_mix_hash(v___x_122_, v___x_123_);
return v___x_124_;
}
else
{
uint64_t v_hash_125_; uint64_t v___x_126_; 
v_hash_125_ = lean_ctor_get_uint64(v_modName_118_, sizeof(void*)*2);
v___x_126_ = lean_uint64_mix_hash(v___x_122_, v_hash_125_);
return v___x_126_;
}
}
v___jp_128_:
{
uint64_t v___x_130_; 
v___x_130_ = lean_uint64_mix_hash(v___x_127_, v___y_129_);
if (lean_obj_tag(v_givenName_117_) == 0)
{
uint64_t v___x_131_; 
v___x_131_ = 1723ULL;
v___y_120_ = v___x_130_;
v___y_121_ = v___x_131_;
goto v___jp_119_;
}
else
{
uint64_t v_hash_132_; 
v_hash_132_ = lean_ctor_get_uint64(v_givenName_117_, sizeof(void*)*2);
v___y_120_ = v___x_130_;
v___y_121_ = v_hash_132_;
goto v___jp_119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_instHashableAssertExists_hash___boxed(lean_object* v_x_135_){
_start:
{
uint64_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = l_Lean_Elab_Command_instHashableAssertExists_hash(v_x_135_);
lean_dec_ref(v_x_135_);
v_r_137_ = lean_box_uint64(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(lean_object* v_es_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_array_mk(v_es_140_);
return v___x_141_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_a_142_, lean_object* v_x_143_){
_start:
{
if (lean_obj_tag(v_x_143_) == 0)
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
else
{
lean_object* v_key_145_; lean_object* v_tail_146_; uint8_t v___x_147_; 
v_key_145_ = lean_ctor_get(v_x_143_, 0);
v_tail_146_ = lean_ctor_get(v_x_143_, 2);
v___x_147_ = l_Lean_Elab_Command_instBEqAssertExists_beq(v_key_145_, v_a_142_);
if (v___x_147_ == 0)
{
v_x_143_ = v_tail_146_;
goto _start;
}
else
{
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_a_149_, lean_object* v_x_150_){
_start:
{
uint8_t v_res_151_; lean_object* v_r_152_; 
v_res_151_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___redArg(v_a_149_, v_x_150_);
lean_dec(v_x_150_);
lean_dec_ref(v_a_149_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
return v_x_153_;
}
else
{
lean_object* v_key_155_; lean_object* v_value_156_; lean_object* v_tail_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_180_; 
v_key_155_ = lean_ctor_get(v_x_154_, 0);
v_value_156_ = lean_ctor_get(v_x_154_, 1);
v_tail_157_ = lean_ctor_get(v_x_154_, 2);
v_isSharedCheck_180_ = !lean_is_exclusive(v_x_154_);
if (v_isSharedCheck_180_ == 0)
{
v___x_159_ = v_x_154_;
v_isShared_160_ = v_isSharedCheck_180_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_tail_157_);
lean_inc(v_value_156_);
lean_inc(v_key_155_);
lean_dec(v_x_154_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_180_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; uint64_t v___x_162_; uint64_t v___x_163_; uint64_t v___x_164_; uint64_t v_fold_165_; uint64_t v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; size_t v___x_169_; size_t v___x_170_; size_t v___x_171_; size_t v___x_172_; size_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_161_ = lean_array_get_size(v_x_153_);
v___x_162_ = l_Lean_Elab_Command_instHashableAssertExists_hash(v_key_155_);
v___x_163_ = 32ULL;
v___x_164_ = lean_uint64_shift_right(v___x_162_, v___x_163_);
v_fold_165_ = lean_uint64_xor(v___x_162_, v___x_164_);
v___x_166_ = 16ULL;
v___x_167_ = lean_uint64_shift_right(v_fold_165_, v___x_166_);
v___x_168_ = lean_uint64_xor(v_fold_165_, v___x_167_);
v___x_169_ = lean_uint64_to_usize(v___x_168_);
v___x_170_ = lean_usize_of_nat(v___x_161_);
v___x_171_ = ((size_t)1ULL);
v___x_172_ = lean_usize_sub(v___x_170_, v___x_171_);
v___x_173_ = lean_usize_land(v___x_169_, v___x_172_);
v___x_174_ = lean_array_uget_borrowed(v_x_153_, v___x_173_);
lean_inc(v___x_174_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 2, v___x_174_);
v___x_176_ = v___x_159_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_key_155_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_value_156_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v___x_174_);
v___x_176_ = v_reuseFailAlloc_179_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_177_; 
v___x_177_ = lean_array_uset(v_x_153_, v___x_173_, v___x_176_);
v_x_153_ = v___x_177_;
v_x_154_ = v_tail_157_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5___redArg(lean_object* v_i_181_, lean_object* v_source_182_, lean_object* v_target_183_){
_start:
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = lean_array_get_size(v_source_182_);
v___x_185_ = lean_nat_dec_lt(v_i_181_, v___x_184_);
if (v___x_185_ == 0)
{
lean_dec_ref(v_source_182_);
lean_dec(v_i_181_);
return v_target_183_;
}
else
{
lean_object* v_es_186_; lean_object* v___x_187_; lean_object* v_source_188_; lean_object* v_target_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v_es_186_ = lean_array_fget(v_source_182_, v_i_181_);
v___x_187_ = lean_box(0);
v_source_188_ = lean_array_fset(v_source_182_, v_i_181_, v___x_187_);
v_target_189_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5_spec__6___redArg(v_target_183_, v_es_186_);
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_nat_add(v_i_181_, v___x_190_);
lean_dec(v_i_181_);
v_i_181_ = v___x_191_;
v_source_182_ = v_source_188_;
v_target_183_ = v_target_189_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4___redArg(lean_object* v_data_193_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v_nbuckets_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_194_ = lean_array_get_size(v_data_193_);
v___x_195_ = lean_unsigned_to_nat(2u);
v_nbuckets_196_ = lean_nat_mul(v___x_194_, v___x_195_);
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lean_box(0);
v___x_199_ = lean_mk_array(v_nbuckets_196_, v___x_198_);
v___x_200_ = lean_array_propagate_mark(v_data_193_, v___x_199_);
v___x_201_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5___redArg(v___x_197_, v_data_193_, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2___redArg(lean_object* v_m_202_, lean_object* v_a_203_, lean_object* v_b_204_){
_start:
{
lean_object* v_size_205_; lean_object* v_buckets_206_; lean_object* v___x_207_; uint64_t v___x_208_; uint64_t v___x_209_; uint64_t v___x_210_; uint64_t v_fold_211_; uint64_t v___x_212_; uint64_t v___x_213_; uint64_t v___x_214_; size_t v___x_215_; size_t v___x_216_; size_t v___x_217_; size_t v___x_218_; size_t v___x_219_; lean_object* v_bkt_220_; uint8_t v___x_221_; 
v_size_205_ = lean_ctor_get(v_m_202_, 0);
v_buckets_206_ = lean_ctor_get(v_m_202_, 1);
v___x_207_ = lean_array_get_size(v_buckets_206_);
v___x_208_ = l_Lean_Elab_Command_instHashableAssertExists_hash(v_a_203_);
v___x_209_ = 32ULL;
v___x_210_ = lean_uint64_shift_right(v___x_208_, v___x_209_);
v_fold_211_ = lean_uint64_xor(v___x_208_, v___x_210_);
v___x_212_ = 16ULL;
v___x_213_ = lean_uint64_shift_right(v_fold_211_, v___x_212_);
v___x_214_ = lean_uint64_xor(v_fold_211_, v___x_213_);
v___x_215_ = lean_uint64_to_usize(v___x_214_);
v___x_216_ = lean_usize_of_nat(v___x_207_);
v___x_217_ = ((size_t)1ULL);
v___x_218_ = lean_usize_sub(v___x_216_, v___x_217_);
v___x_219_ = lean_usize_land(v___x_215_, v___x_218_);
v_bkt_220_ = lean_array_uget_borrowed(v_buckets_206_, v___x_219_);
v___x_221_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___redArg(v_a_203_, v_bkt_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_242_; 
lean_inc_ref(v_buckets_206_);
lean_inc(v_size_205_);
v_isSharedCheck_242_ = !lean_is_exclusive(v_m_202_);
if (v_isSharedCheck_242_ == 0)
{
lean_object* v_unused_243_; lean_object* v_unused_244_; 
v_unused_243_ = lean_ctor_get(v_m_202_, 1);
lean_dec(v_unused_243_);
v_unused_244_ = lean_ctor_get(v_m_202_, 0);
lean_dec(v_unused_244_);
v___x_223_ = v_m_202_;
v_isShared_224_ = v_isSharedCheck_242_;
goto v_resetjp_222_;
}
else
{
lean_dec(v_m_202_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_242_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v_size_x27_226_; lean_object* v___x_227_; lean_object* v_buckets_x27_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_225_ = lean_unsigned_to_nat(1u);
v_size_x27_226_ = lean_nat_add(v_size_205_, v___x_225_);
lean_dec(v_size_205_);
lean_inc(v_bkt_220_);
v___x_227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_227_, 0, v_a_203_);
lean_ctor_set(v___x_227_, 1, v_b_204_);
lean_ctor_set(v___x_227_, 2, v_bkt_220_);
v_buckets_x27_228_ = lean_array_uset(v_buckets_206_, v___x_219_, v___x_227_);
v___x_229_ = lean_unsigned_to_nat(4u);
v___x_230_ = lean_nat_mul(v_size_x27_226_, v___x_229_);
v___x_231_ = lean_unsigned_to_nat(3u);
v___x_232_ = lean_nat_div(v___x_230_, v___x_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_array_get_size(v_buckets_x27_228_);
v___x_234_ = lean_nat_dec_le(v___x_232_, v___x_233_);
lean_dec(v___x_232_);
if (v___x_234_ == 0)
{
lean_object* v_val_235_; lean_object* v___x_237_; 
v_val_235_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4___redArg(v_buckets_x27_228_);
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 1, v_val_235_);
lean_ctor_set(v___x_223_, 0, v_size_x27_226_);
v___x_237_ = v___x_223_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_size_x27_226_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_val_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
else
{
lean_object* v___x_240_; 
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 1, v_buckets_x27_228_);
lean_ctor_set(v___x_223_, 0, v_size_x27_226_);
v___x_240_ = v___x_223_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_size_x27_226_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_buckets_x27_228_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
else
{
lean_dec(v_b_204_);
lean_dec_ref(v_a_203_);
return v_m_202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_245_, size_t v_sz_246_, size_t v_i_247_, lean_object* v_b_248_){
_start:
{
uint8_t v___x_249_; 
v___x_249_ = lean_usize_dec_lt(v_i_247_, v_sz_246_);
if (v___x_249_ == 0)
{
return v_b_248_;
}
else
{
lean_object* v_a_250_; lean_object* v___x_251_; lean_object* v_r_252_; size_t v___x_253_; size_t v___x_254_; 
v_a_250_ = lean_array_uget_borrowed(v_as_245_, v_i_247_);
v___x_251_ = lean_box(0);
lean_inc(v_a_250_);
v_r_252_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2___redArg(v_b_248_, v_a_250_, v___x_251_);
v___x_253_ = ((size_t)1ULL);
v___x_254_ = lean_usize_add(v_i_247_, v___x_253_);
v_i_247_ = v___x_254_;
v_b_248_ = v_r_252_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_256_, lean_object* v_sz_257_, lean_object* v_i_258_, lean_object* v_b_259_){
_start:
{
size_t v_sz_boxed_260_; size_t v_i_boxed_261_; lean_object* v_res_262_; 
v_sz_boxed_260_ = lean_unbox_usize(v_sz_257_);
lean_dec(v_sz_257_);
v_i_boxed_261_ = lean_unbox_usize(v_i_258_);
lean_dec(v_i_258_);
v_res_262_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0_spec__0(v_as_256_, v_sz_boxed_260_, v_i_boxed_261_, v_b_259_);
lean_dec_ref(v_as_256_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0(lean_object* v_m_263_, lean_object* v_l_264_){
_start:
{
size_t v_sz_265_; size_t v___x_266_; lean_object* v___x_267_; 
v_sz_265_ = lean_array_size(v_l_264_);
v___x_266_ = ((size_t)0ULL);
v___x_267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0_spec__0(v_l_264_, v_sz_265_, v___x_266_, v_m_263_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0___boxed(lean_object* v_m_268_, lean_object* v_l_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0(v_m_268_, v_l_269_);
lean_dec_ref(v_l_269_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__1(lean_object* v_as_271_, size_t v_i_272_, size_t v_stop_273_, lean_object* v_b_274_){
_start:
{
uint8_t v___x_275_; 
v___x_275_ = lean_usize_dec_eq(v_i_272_, v_stop_273_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; size_t v___x_278_; size_t v___x_279_; 
v___x_276_ = lean_array_uget_borrowed(v_as_271_, v_i_272_);
v___x_277_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__0(v_b_274_, v___x_276_);
v___x_278_ = ((size_t)1ULL);
v___x_279_ = lean_usize_add(v_i_272_, v___x_278_);
v_i_272_ = v___x_279_;
v_b_274_ = v___x_277_;
goto _start;
}
else
{
return v_b_274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_281_, lean_object* v_i_282_, lean_object* v_stop_283_, lean_object* v_b_284_){
_start:
{
size_t v_i_boxed_285_; size_t v_stop_boxed_286_; lean_object* v_res_287_; 
v_i_boxed_285_ = lean_unbox_usize(v_i_282_);
lean_dec(v_i_282_);
v_stop_boxed_286_ = lean_unbox_usize(v_stop_283_);
lean_dec(v_stop_283_);
v_res_287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__1(v_as_281_, v_i_boxed_285_, v_stop_boxed_286_, v_b_284_);
lean_dec_ref(v_as_281_);
return v_res_287_;
}
}
static lean_object* _init_l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_288_ = lean_box(0);
v___x_289_ = lean_unsigned_to_nat(16u);
v___x_290_ = lean_mk_array(v___x_289_, v___x_288_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = lean_obj_once(&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_, &l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__0_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(lean_object* v_as_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_obj_once(&l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_, &l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1___closed__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_);
v___x_297_ = lean_array_get_size(v_as_294_);
v___x_298_ = lean_nat_dec_lt(v___x_295_, v___x_297_);
if (v___x_298_ == 0)
{
return v___x_296_;
}
else
{
size_t v___x_299_; size_t v___x_300_; lean_object* v___x_301_; 
v___x_299_ = ((size_t)0ULL);
v___x_300_ = lean_usize_of_nat(v___x_297_);
v___x_301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__1(v_as_294_, v___x_299_, v___x_300_, v___x_296_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2____boxed(lean_object* v_as_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__1_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(v_as_302_);
lean_dec_ref(v_as_302_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___lam__2_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_box(0);
v___x_307_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2___redArg(v___y_304_, v___y_305_, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_));
v___x_330_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2____boxed(lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_();
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2(lean_object* v_00_u03b2_333_, lean_object* v_m_334_, lean_object* v_a_335_, lean_object* v_b_336_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2___redArg(v_m_334_, v_a_335_, v_b_336_);
return v___x_337_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_00_u03b2_338_, lean_object* v_a_339_, lean_object* v_x_340_){
_start:
{
uint8_t v___x_341_; 
v___x_341_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___redArg(v_a_339_, v_x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_00_u03b2_342_, lean_object* v_a_343_, lean_object* v_x_344_){
_start:
{
uint8_t v_res_345_; lean_object* v_r_346_; 
v_res_345_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__3(v_00_u03b2_342_, v_a_343_, v_x_344_);
lean_dec(v_x_344_);
lean_dec_ref(v_a_343_);
v_r_346_ = lean_box(v_res_345_);
return v_r_346_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4(lean_object* v_00_u03b2_347_, lean_object* v_data_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4___redArg(v_data_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5(lean_object* v_00_u03b2_350_, lean_object* v_i_351_, lean_object* v_source_352_, lean_object* v_target_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5___redArg(v_i_351_, v_source_352_, v_target_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_355_, lean_object* v_x_356_, lean_object* v_x_357_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2__spec__2_spec__4_spec__5_spec__6___redArg(v_x_356_, v_x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___redArg___lam__0(lean_object* v_addEntryFn_359_, lean_object* v___x_360_, lean_object* v_s_361_){
_start:
{
lean_object* v_importedEntries_362_; lean_object* v_state_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_371_; 
v_importedEntries_362_ = lean_ctor_get(v_s_361_, 0);
v_state_363_ = lean_ctor_get(v_s_361_, 1);
v_isSharedCheck_371_ = !lean_is_exclusive(v_s_361_);
if (v_isSharedCheck_371_ == 0)
{
v___x_365_ = v_s_361_;
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_state_363_);
lean_inc(v_importedEntries_362_);
lean_dec(v_s_361_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v_state_367_; lean_object* v___x_369_; 
v_state_367_ = lean_apply_2(v_addEntryFn_359_, v_state_363_, v___x_360_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 1, v_state_367_);
v___x_369_ = v___x_365_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_importedEntries_362_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v_state_367_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___redArg(uint8_t v_isDecl_372_, lean_object* v_declName_373_, lean_object* v_mod_374_, lean_object* v_a_375_){
_start:
{
lean_object* v___x_377_; lean_object* v_env_378_; lean_object* v_messages_379_; lean_object* v_scopes_380_; lean_object* v_usedQuotCtxts_381_; lean_object* v_nextMacroScope_382_; lean_object* v_maxRecDepth_383_; lean_object* v_ngen_384_; lean_object* v_auxDeclNGen_385_; lean_object* v_infoState_386_; lean_object* v_traceState_387_; lean_object* v_snapshotTasks_388_; lean_object* v_prevLinterStates_389_; lean_object* v_codeQualityEntryTasks_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_414_; 
v___x_377_ = lean_st_ref_take(v_a_375_);
v_env_378_ = lean_ctor_get(v___x_377_, 0);
v_messages_379_ = lean_ctor_get(v___x_377_, 1);
v_scopes_380_ = lean_ctor_get(v___x_377_, 2);
v_usedQuotCtxts_381_ = lean_ctor_get(v___x_377_, 3);
v_nextMacroScope_382_ = lean_ctor_get(v___x_377_, 4);
v_maxRecDepth_383_ = lean_ctor_get(v___x_377_, 5);
v_ngen_384_ = lean_ctor_get(v___x_377_, 6);
v_auxDeclNGen_385_ = lean_ctor_get(v___x_377_, 7);
v_infoState_386_ = lean_ctor_get(v___x_377_, 8);
v_traceState_387_ = lean_ctor_get(v___x_377_, 9);
v_snapshotTasks_388_ = lean_ctor_get(v___x_377_, 10);
v_prevLinterStates_389_ = lean_ctor_get(v___x_377_, 11);
v_codeQualityEntryTasks_390_ = lean_ctor_get(v___x_377_, 12);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_414_ == 0)
{
v___x_392_ = v___x_377_;
v_isShared_393_ = v_isSharedCheck_414_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_codeQualityEntryTasks_390_);
lean_inc(v_prevLinterStates_389_);
lean_inc(v_snapshotTasks_388_);
lean_inc(v_traceState_387_);
lean_inc(v_infoState_386_);
lean_inc(v_auxDeclNGen_385_);
lean_inc(v_ngen_384_);
lean_inc(v_maxRecDepth_383_);
lean_inc(v_nextMacroScope_382_);
lean_inc(v_usedQuotCtxts_381_);
lean_inc(v_scopes_380_);
lean_inc(v_messages_379_);
lean_inc(v_env_378_);
lean_dec(v___x_377_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_414_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v_toEnvExtension_395_; lean_object* v_addEntryFn_396_; lean_object* v_asyncMode_397_; uint8_t v_logWrites_398_; lean_object* v___x_399_; lean_object* v___y_401_; lean_object* v___x_407_; lean_object* v___f_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_394_ = l_Lean_Elab_Command_assertExistsExt;
v_toEnvExtension_395_ = lean_ctor_get(v___x_394_, 0);
v_addEntryFn_396_ = lean_ctor_get(v___x_394_, 3);
v_asyncMode_397_ = lean_ctor_get(v_toEnvExtension_395_, 2);
v_logWrites_398_ = lean_ctor_get_uint8(v_toEnvExtension_395_, sizeof(void*)*6);
v___x_399_ = lean_box(0);
v___x_407_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_407_, 0, v_declName_373_);
lean_ctor_set(v___x_407_, 1, v_mod_374_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*2, v_isDecl_372_);
lean_inc(v_addEntryFn_396_);
v___f_408_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_addAssertExistsEntry___redArg___lam__0), 3, 2);
lean_closure_set(v___f_408_, 0, v_addEntryFn_396_);
lean_closure_set(v___f_408_, 1, v___x_407_);
v___x_409_ = lean_box(0);
v___x_410_ = 1;
if (v_logWrites_398_ == 0)
{
lean_object* v___x_411_; 
lean_inc_ref(v_toEnvExtension_395_);
v___x_411_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_395_, v_env_378_, v___f_408_, v_asyncMode_397_, v___x_409_, v___x_410_);
v___y_401_ = v___x_411_;
goto v___jp_400_;
}
else
{
lean_object* v___x_412_; lean_object* v___x_413_; 
lean_inc_ref_n(v_toEnvExtension_395_, 2);
v___x_412_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_395_, v_env_378_);
lean_dec_ref(v_env_378_);
v___x_413_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_395_, v___x_412_, v___f_408_, v_asyncMode_397_, v___x_409_, v___x_410_);
v___y_401_ = v___x_413_;
goto v___jp_400_;
}
v___jp_400_:
{
lean_object* v___x_403_; 
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___y_401_);
v___x_403_ = v___x_392_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___y_401_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v_messages_379_);
lean_ctor_set(v_reuseFailAlloc_406_, 2, v_scopes_380_);
lean_ctor_set(v_reuseFailAlloc_406_, 3, v_usedQuotCtxts_381_);
lean_ctor_set(v_reuseFailAlloc_406_, 4, v_nextMacroScope_382_);
lean_ctor_set(v_reuseFailAlloc_406_, 5, v_maxRecDepth_383_);
lean_ctor_set(v_reuseFailAlloc_406_, 6, v_ngen_384_);
lean_ctor_set(v_reuseFailAlloc_406_, 7, v_auxDeclNGen_385_);
lean_ctor_set(v_reuseFailAlloc_406_, 8, v_infoState_386_);
lean_ctor_set(v_reuseFailAlloc_406_, 9, v_traceState_387_);
lean_ctor_set(v_reuseFailAlloc_406_, 10, v_snapshotTasks_388_);
lean_ctor_set(v_reuseFailAlloc_406_, 11, v_prevLinterStates_389_);
lean_ctor_set(v_reuseFailAlloc_406_, 12, v_codeQualityEntryTasks_390_);
v___x_403_ = v_reuseFailAlloc_406_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_st_ref_put(v_a_375_, v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_399_);
return v___x_405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___redArg___boxed(lean_object* v_isDecl_415_, lean_object* v_declName_416_, lean_object* v_mod_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
uint8_t v_isDecl_boxed_420_; lean_object* v_res_421_; 
v_isDecl_boxed_420_ = lean_unbox(v_isDecl_415_);
v_res_421_ = l_Lean_Elab_Command_addAssertExistsEntry___redArg(v_isDecl_boxed_420_, v_declName_416_, v_mod_417_, v_a_418_);
lean_dec(v_a_418_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry(uint8_t v_isDecl_422_, lean_object* v_declName_423_, lean_object* v_mod_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l_Lean_Elab_Command_addAssertExistsEntry___redArg(v_isDecl_422_, v_declName_423_, v_mod_424_, v_a_426_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addAssertExistsEntry___boxed(lean_object* v_isDecl_429_, lean_object* v_declName_430_, lean_object* v_mod_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_){
_start:
{
uint8_t v_isDecl_boxed_435_; lean_object* v_res_436_; 
v_isDecl_boxed_435_ = lean_unbox(v_isDecl_429_);
v_res_436_ = l_Lean_Elab_Command_addAssertExistsEntry(v_isDecl_boxed_435_, v_declName_430_, v_mod_431_, v_a_432_, v_a_433_);
lean_dec(v_a_433_);
lean_dec_ref(v_a_432_);
return v_res_436_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0(uint8_t v___x_437_, lean_object* v_d_438_, lean_object* v_e_439_){
_start:
{
uint8_t v_isDecl_440_; lean_object* v_givenName_441_; uint8_t v_isDecl_442_; lean_object* v_givenName_443_; uint8_t v___y_445_; uint8_t v___x_449_; 
v_isDecl_440_ = lean_ctor_get_uint8(v_e_439_, sizeof(void*)*2);
v_givenName_441_ = lean_ctor_get(v_e_439_, 0);
lean_inc(v_givenName_441_);
lean_dec_ref(v_e_439_);
v_isDecl_442_ = lean_ctor_get_uint8(v_d_438_, sizeof(void*)*2);
v_givenName_443_ = lean_ctor_get(v_d_438_, 0);
lean_inc(v_givenName_443_);
lean_dec_ref(v_d_438_);
v___x_449_ = l_Bool_instDecidableLt(v_isDecl_440_, v_isDecl_442_);
if (v___x_449_ == 0)
{
if (v_isDecl_442_ == 0)
{
if (v_isDecl_440_ == 0)
{
v___y_445_ = v___x_437_;
goto v___jp_444_;
}
else
{
lean_dec(v_givenName_443_);
lean_dec(v_givenName_441_);
return v_isDecl_442_;
}
}
else
{
if (v_isDecl_440_ == 0)
{
lean_dec(v_givenName_443_);
lean_dec(v_givenName_441_);
return v_isDecl_440_;
}
else
{
v___y_445_ = v_isDecl_440_;
goto v___jp_444_;
}
}
}
else
{
lean_dec(v_givenName_443_);
lean_dec(v_givenName_441_);
return v___x_449_;
}
v___jp_444_:
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_446_ = l_Lean_Name_toString(v_givenName_443_, v___y_445_);
v___x_447_ = l_Lean_Name_toString(v_givenName_441_, v___y_445_);
v___x_448_ = lean_string_dec_lt(v___x_446_, v___x_447_);
lean_dec_ref(v___x_447_);
lean_dec_ref(v___x_446_);
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0___boxed(lean_object* v___x_450_, lean_object* v_d_451_, lean_object* v_e_452_){
_start:
{
uint8_t v___x_696__boxed_453_; uint8_t v_res_454_; lean_object* v_r_455_; 
v___x_696__boxed_453_ = lean_unbox(v___x_450_);
v_res_454_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0(v___x_696__boxed_453_, v_d_451_, v_e_452_);
v_r_455_ = lean_box(v_res_454_);
return v_r_455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___redArg(lean_object* v_hi_456_, lean_object* v_pivot_457_, lean_object* v_as_458_, lean_object* v_i_459_, lean_object* v_k_460_){
_start:
{
uint8_t v___x_471_; 
v___x_471_ = lean_nat_dec_lt(v_k_460_, v_hi_456_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec(v_k_460_);
lean_dec_ref(v_pivot_457_);
v___x_472_ = lean_array_fswap(v_as_458_, v_i_459_, v_hi_456_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v_i_459_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
return v___x_473_;
}
else
{
uint8_t v_isDecl_474_; lean_object* v_givenName_475_; lean_object* v___x_476_; uint8_t v_isDecl_477_; lean_object* v_givenName_478_; uint8_t v___y_480_; uint8_t v___x_484_; 
v_isDecl_474_ = lean_ctor_get_uint8(v_pivot_457_, sizeof(void*)*2);
v_givenName_475_ = lean_ctor_get(v_pivot_457_, 0);
v___x_476_ = lean_array_fget_borrowed(v_as_458_, v_k_460_);
v_isDecl_477_ = lean_ctor_get_uint8(v___x_476_, sizeof(void*)*2);
v_givenName_478_ = lean_ctor_get(v___x_476_, 0);
v___x_484_ = l_Bool_instDecidableLt(v_isDecl_474_, v_isDecl_477_);
if (v___x_484_ == 0)
{
if (v_isDecl_477_ == 0)
{
if (v_isDecl_474_ == 0)
{
v___y_480_ = v___x_471_;
goto v___jp_479_;
}
else
{
goto v___jp_461_;
}
}
else
{
if (v_isDecl_474_ == 0)
{
goto v___jp_461_;
}
else
{
v___y_480_ = v_isDecl_474_;
goto v___jp_479_;
}
}
}
else
{
goto v___jp_465_;
}
v___jp_479_:
{
lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
lean_inc(v_givenName_478_);
v___x_481_ = l_Lean_Name_toString(v_givenName_478_, v___y_480_);
lean_inc(v_givenName_475_);
v___x_482_ = l_Lean_Name_toString(v_givenName_475_, v___y_480_);
v___x_483_ = lean_string_dec_lt(v___x_481_, v___x_482_);
lean_dec_ref(v___x_482_);
lean_dec_ref(v___x_481_);
if (v___x_483_ == 0)
{
goto v___jp_461_;
}
else
{
goto v___jp_465_;
}
}
}
v___jp_461_:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_unsigned_to_nat(1u);
v___x_463_ = lean_nat_add(v_k_460_, v___x_462_);
lean_dec(v_k_460_);
v_k_460_ = v___x_463_;
goto _start;
}
v___jp_465_:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_466_ = lean_array_fswap(v_as_458_, v_i_459_, v_k_460_);
v___x_467_ = lean_unsigned_to_nat(1u);
v___x_468_ = lean_nat_add(v_i_459_, v___x_467_);
lean_dec(v_i_459_);
v___x_469_ = lean_nat_add(v_k_460_, v___x_467_);
lean_dec(v_k_460_);
v_as_458_ = v___x_466_;
v_i_459_ = v___x_468_;
v_k_460_ = v___x_469_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___redArg___boxed(lean_object* v_hi_485_, lean_object* v_pivot_486_, lean_object* v_as_487_, lean_object* v_i_488_, lean_object* v_k_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___redArg(v_hi_485_, v_pivot_486_, v_as_487_, v_i_488_, v_k_489_);
lean_dec(v_hi_485_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg(lean_object* v_n_491_, lean_object* v_as_492_, lean_object* v_lo_493_, lean_object* v_hi_494_){
_start:
{
lean_object* v___y_496_; uint8_t v___x_506_; 
v___x_506_ = lean_nat_dec_lt(v_lo_493_, v_hi_494_);
if (v___x_506_ == 0)
{
lean_dec(v_lo_493_);
return v_as_492_;
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_mid_509_; lean_object* v___y_511_; lean_object* v___y_517_; lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_507_ = lean_nat_add(v_lo_493_, v_hi_494_);
v___x_508_ = lean_unsigned_to_nat(1u);
v_mid_509_ = lean_nat_shiftr(v___x_507_, v___x_508_);
lean_dec(v___x_507_);
v___x_522_ = lean_array_fget_borrowed(v_as_492_, v_mid_509_);
v___x_523_ = lean_array_fget_borrowed(v_as_492_, v_lo_493_);
lean_inc(v___x_523_);
lean_inc(v___x_522_);
v___x_524_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0(v___x_506_, v___x_522_, v___x_523_);
if (v___x_524_ == 0)
{
v___y_517_ = v_as_492_;
goto v___jp_516_;
}
else
{
lean_object* v___x_525_; 
v___x_525_ = lean_array_fswap(v_as_492_, v_lo_493_, v_mid_509_);
v___y_517_ = v___x_525_;
goto v___jp_516_;
}
v___jp_510_:
{
lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_512_ = lean_array_fget_borrowed(v___y_511_, v_mid_509_);
v___x_513_ = lean_array_fget_borrowed(v___y_511_, v_hi_494_);
lean_inc(v___x_513_);
lean_inc(v___x_512_);
v___x_514_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0(v___x_506_, v___x_512_, v___x_513_);
if (v___x_514_ == 0)
{
lean_dec(v_mid_509_);
v___y_496_ = v___y_511_;
goto v___jp_495_;
}
else
{
lean_object* v___x_515_; 
v___x_515_ = lean_array_fswap(v___y_511_, v_mid_509_, v_hi_494_);
lean_dec(v_mid_509_);
v___y_496_ = v___x_515_;
goto v___jp_495_;
}
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_518_ = lean_array_fget_borrowed(v___y_517_, v_hi_494_);
v___x_519_ = lean_array_fget_borrowed(v___y_517_, v_lo_493_);
lean_inc(v___x_519_);
lean_inc(v___x_518_);
v___x_520_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___lam__0(v___x_506_, v___x_518_, v___x_519_);
if (v___x_520_ == 0)
{
v___y_511_ = v___y_517_;
goto v___jp_510_;
}
else
{
lean_object* v___x_521_; 
v___x_521_ = lean_array_fswap(v___y_517_, v_lo_493_, v_hi_494_);
v___y_511_ = v___x_521_;
goto v___jp_510_;
}
}
}
v___jp_495_:
{
lean_object* v_pivot_497_; lean_object* v___x_498_; lean_object* v_fst_499_; lean_object* v_snd_500_; uint8_t v___x_501_; 
v_pivot_497_ = lean_array_fget(v___y_496_, v_hi_494_);
lean_inc_n(v_lo_493_, 2);
v___x_498_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___redArg(v_hi_494_, v_pivot_497_, v___y_496_, v_lo_493_, v_lo_493_);
v_fst_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_fst_499_);
v_snd_500_ = lean_ctor_get(v___x_498_, 1);
lean_inc(v_snd_500_);
lean_dec_ref(v___x_498_);
v___x_501_ = lean_nat_dec_le(v_hi_494_, v_fst_499_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg(v_n_491_, v_snd_500_, v_lo_493_, v_fst_499_);
v___x_503_ = lean_unsigned_to_nat(1u);
v___x_504_ = lean_nat_add(v_fst_499_, v___x_503_);
lean_dec(v_fst_499_);
v_as_492_ = v___x_502_;
v_lo_493_ = v___x_504_;
goto _start;
}
else
{
lean_dec(v_fst_499_);
lean_dec(v_lo_493_);
return v_snd_500_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg___boxed(lean_object* v_n_526_, lean_object* v_as_527_, lean_object* v_lo_528_, lean_object* v_hi_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg(v_n_526_, v_as_527_, v_lo_528_, v_hi_529_);
lean_dec(v_hi_529_);
lean_dec(v_n_526_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Command_getSortedAssertExists_spec__1(lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
if (lean_obj_tag(v_x_532_) == 0)
{
return v_x_531_;
}
else
{
lean_object* v_key_533_; lean_object* v_tail_534_; lean_object* v___x_535_; 
v_key_533_ = lean_ctor_get(v_x_532_, 0);
lean_inc(v_key_533_);
v_tail_534_ = lean_ctor_get(v_x_532_, 2);
lean_inc(v_tail_534_);
lean_dec_ref_known(v_x_532_, 3);
v___x_535_ = lean_array_push(v_x_531_, v_key_533_);
v_x_531_ = v___x_535_;
v_x_532_ = v_tail_534_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_getSortedAssertExists_spec__2(lean_object* v_as_537_, size_t v_i_538_, size_t v_stop_539_, lean_object* v_b_540_){
_start:
{
uint8_t v___x_541_; 
v___x_541_ = lean_usize_dec_eq(v_i_538_, v_stop_539_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; size_t v___x_544_; size_t v___x_545_; 
v___x_542_ = lean_array_uget_borrowed(v_as_537_, v_i_538_);
lean_inc(v___x_542_);
v___x_543_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Command_getSortedAssertExists_spec__1(v_b_540_, v___x_542_);
v___x_544_ = ((size_t)1ULL);
v___x_545_ = lean_usize_add(v_i_538_, v___x_544_);
v_i_538_ = v___x_545_;
v_b_540_ = v___x_543_;
goto _start;
}
else
{
return v_b_540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_getSortedAssertExists_spec__2___boxed(lean_object* v_as_547_, lean_object* v_i_548_, lean_object* v_stop_549_, lean_object* v_b_550_){
_start:
{
size_t v_i_boxed_551_; size_t v_stop_boxed_552_; lean_object* v_res_553_; 
v_i_boxed_551_ = lean_unbox_usize(v_i_548_);
lean_dec(v_i_548_);
v_stop_boxed_552_ = lean_unbox_usize(v_stop_549_);
lean_dec(v_stop_549_);
v_res_553_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_getSortedAssertExists_spec__2(v_as_547_, v_i_boxed_551_, v_stop_boxed_552_, v_b_550_);
lean_dec_ref(v_as_547_);
return v_res_553_;
}
}
static lean_object* _init_l_Lean_Elab_Command_getSortedAssertExists___closed__0(void){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = l_Std_HashSet_instInhabited___redArg();
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_getSortedAssertExists(lean_object* v_env_555_){
_start:
{
lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_565_; lean_object* v___x_572_; lean_object* v_toEnvExtension_573_; lean_object* v_asyncMode_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v_size_578_; lean_object* v_buckets_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_572_ = l_Lean_Elab_Command_assertExistsExt;
v_toEnvExtension_573_ = lean_ctor_get(v___x_572_, 0);
v_asyncMode_574_ = lean_ctor_get(v_toEnvExtension_573_, 2);
v___x_575_ = lean_obj_once(&l_Lean_Elab_Command_getSortedAssertExists___closed__0, &l_Lean_Elab_Command_getSortedAssertExists___closed__0_once, _init_l_Lean_Elab_Command_getSortedAssertExists___closed__0);
v___x_576_ = lean_box(0);
v___x_577_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_575_, v___x_572_, v_env_555_, v_asyncMode_574_, v___x_576_);
v_size_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_size_578_);
v_buckets_579_ = lean_ctor_get(v___x_577_, 1);
lean_inc_ref(v_buckets_579_);
lean_dec(v___x_577_);
v___x_580_ = lean_mk_empty_array_with_capacity(v_size_578_);
lean_dec(v_size_578_);
v___x_581_ = lean_unsigned_to_nat(0u);
v___x_582_ = lean_array_get_size(v_buckets_579_);
v___x_583_ = lean_nat_dec_lt(v___x_581_, v___x_582_);
if (v___x_583_ == 0)
{
lean_dec_ref(v_buckets_579_);
v___y_565_ = v___x_580_;
goto v___jp_564_;
}
else
{
size_t v___x_584_; size_t v___x_585_; lean_object* v___x_586_; 
v___x_584_ = ((size_t)0ULL);
v___x_585_ = lean_usize_of_nat(v___x_582_);
v___x_586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_getSortedAssertExists_spec__2(v_buckets_579_, v___x_584_, v___x_585_, v___x_580_);
lean_dec_ref(v_buckets_579_);
v___y_565_ = v___x_586_;
goto v___jp_564_;
}
v___jp_556_:
{
uint8_t v___x_561_; 
v___x_561_ = lean_nat_dec_le(v___y_560_, v___y_557_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; 
lean_dec(v___y_557_);
lean_inc(v___y_560_);
v___x_562_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg(v___y_558_, v___y_559_, v___y_560_, v___y_560_);
lean_dec(v___y_560_);
lean_dec(v___y_558_);
return v___x_562_;
}
else
{
lean_object* v___x_563_; 
v___x_563_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg(v___y_558_, v___y_559_, v___y_560_, v___y_557_);
lean_dec(v___y_557_);
lean_dec(v___y_558_);
return v___x_563_;
}
}
v___jp_564_:
{
lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_566_ = lean_array_get_size(v___y_565_);
v___x_567_ = lean_unsigned_to_nat(0u);
v___x_568_ = lean_nat_dec_eq(v___x_566_, v___x_567_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_569_ = lean_unsigned_to_nat(1u);
v___x_570_ = lean_nat_sub(v___x_566_, v___x_569_);
v___x_571_ = lean_nat_dec_le(v___x_567_, v___x_570_);
if (v___x_571_ == 0)
{
lean_inc(v___x_570_);
v___y_557_ = v___x_570_;
v___y_558_ = v___x_566_;
v___y_559_ = v___y_565_;
v___y_560_ = v___x_570_;
goto v___jp_556_;
}
else
{
v___y_557_ = v___x_570_;
v___y_558_ = v___x_566_;
v___y_559_ = v___y_565_;
v___y_560_ = v___x_567_;
goto v___jp_556_;
}
}
else
{
return v___y_565_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0(lean_object* v_n_587_, lean_object* v_as_588_, lean_object* v_lo_589_, lean_object* v_hi_590_, lean_object* v_w_591_, lean_object* v_hlo_592_, lean_object* v_hhi_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___redArg(v_n_587_, v_as_588_, v_lo_589_, v_hi_590_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0___boxed(lean_object* v_n_595_, lean_object* v_as_596_, lean_object* v_lo_597_, lean_object* v_hi_598_, lean_object* v_w_599_, lean_object* v_hlo_600_, lean_object* v_hhi_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0(v_n_595_, v_as_596_, v_lo_597_, v_hi_598_, v_w_599_, v_hlo_600_, v_hhi_601_);
lean_dec(v_hi_598_);
lean_dec(v_n_595_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0(lean_object* v_n_603_, lean_object* v_lo_604_, lean_object* v_hi_605_, lean_object* v_hhi_606_, lean_object* v_pivot_607_, lean_object* v_as_608_, lean_object* v_i_609_, lean_object* v_k_610_, lean_object* v_ilo_611_, lean_object* v_ik_612_, lean_object* v_w_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___redArg(v_hi_605_, v_pivot_607_, v_as_608_, v_i_609_, v_k_610_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0___boxed(lean_object* v_n_615_, lean_object* v_lo_616_, lean_object* v_hi_617_, lean_object* v_hhi_618_, lean_object* v_pivot_619_, lean_object* v_as_620_, lean_object* v_i_621_, lean_object* v_k_622_, lean_object* v_ilo_623_, lean_object* v_ik_624_, lean_object* v_w_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Command_getSortedAssertExists_spec__0_spec__0(v_n_615_, v_lo_616_, v_hi_617_, v_hhi_618_, v_pivot_619_, v_as_620_, v_i_621_, v_k_622_, v_ilo_623_, v_ik_624_, v_w_625_);
lean_dec(v_hi_617_);
lean_dec(v_lo_616_);
lean_dec(v_n_615_);
return v_res_626_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__1(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__0));
v___x_629_ = l_Lean_stringToMessageData(v___x_628_);
return v___x_629_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__2));
v___x_632_ = l_Lean_stringToMessageData(v___x_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0(lean_object* v_as_633_, size_t v_i_634_, size_t v_stop_635_, lean_object* v_b_636_){
_start:
{
uint8_t v___x_637_; 
v___x_637_ = lean_usize_dec_eq(v_i_634_, v_stop_635_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; size_t v___x_645_; size_t v___x_646_; 
v___x_638_ = lean_array_uget_borrowed(v_as_633_, v_i_634_);
v___x_639_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__1);
lean_inc(v___x_638_);
v___x_640_ = l_Lean_MessageData_ofName(v___x_638_);
v___x_641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_644_, 0, v_b_636_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = ((size_t)1ULL);
v___x_646_ = lean_usize_add(v_i_634_, v___x_645_);
v_i_634_ = v___x_646_;
v_b_636_ = v___x_644_;
goto _start;
}
else
{
return v_b_636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___boxed(lean_object* v_as_648_, lean_object* v_i_649_, lean_object* v_stop_650_, lean_object* v_b_651_){
_start:
{
size_t v_i_boxed_652_; size_t v_stop_boxed_653_; lean_object* v_res_654_; 
v_i_boxed_652_ = lean_unbox_usize(v_i_649_);
lean_dec(v_i_649_);
v_stop_boxed_653_ = lean_unbox_usize(v_stop_650_);
lean_dec(v_stop_650_);
v_res_654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0(v_as_648_, v_i_boxed_652_, v_stop_boxed_653_, v_b_651_);
lean_dec_ref(v_as_648_);
return v_res_654_;
}
}
static lean_object* _init_l_Lean_Elab_Command_importPathMessage___closed__1(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = ((lean_object*)(l_Lean_Elab_Command_importPathMessage___closed__0));
v___x_657_ = l_Lean_stringToMessageData(v___x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_importPathMessage(lean_object* v_env_658_, lean_object* v_idx_659_){
_start:
{
lean_object* v___y_661_; lean_object* v___x_664_; lean_object* v_moduleNames_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_664_ = l_Lean_Environment_header(v_env_658_);
v_moduleNames_665_ = lean_ctor_get(v___x_664_, 4);
lean_inc_ref(v_moduleNames_665_);
lean_dec_ref(v___x_664_);
v___x_666_ = lean_box(0);
v___x_667_ = lean_array_get(v___x_666_, v_moduleNames_665_, v_idx_659_);
lean_dec_ref(v_moduleNames_665_);
lean_inc(v___x_667_);
v___x_668_ = l_Lean_MessageData_ofName(v___x_667_);
v___x_669_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0___closed__3);
v___x_670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = l_Lean_Environment_importPath(v_env_658_, v___x_667_);
v___x_672_ = lean_unsigned_to_nat(0u);
v___x_673_ = lean_array_get_size(v___x_671_);
v___x_674_ = lean_nat_dec_lt(v___x_672_, v___x_673_);
if (v___x_674_ == 0)
{
lean_dec_ref(v___x_671_);
v___y_661_ = v___x_670_;
goto v___jp_660_;
}
else
{
size_t v___x_675_; size_t v___x_676_; lean_object* v___x_677_; 
v___x_675_ = ((size_t)0ULL);
v___x_676_ = lean_usize_of_nat(v___x_673_);
v___x_677_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_importPathMessage_spec__0(v___x_671_, v___x_675_, v___x_676_, v___x_670_);
lean_dec_ref(v___x_671_);
v___y_661_ = v___x_677_;
goto v___jp_660_;
}
v___jp_660_:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = lean_obj_once(&l_Lean_Elab_Command_importPathMessage___closed__1, &l_Lean_Elab_Command_importPathMessage___closed__1_once, _init_l_Lean_Elab_Command_importPathMessage___closed__1);
v___x_663_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_663_, 0, v___y_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
return v___x_663_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_importPathMessage___boxed(lean_object* v_env_678_, lean_object* v_idx_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Elab_Command_importPathMessage(v_env_678_, v_idx_679_);
lean_dec(v_idx_679_);
lean_dec_ref(v_env_678_);
return v_res_680_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0(uint8_t v___x_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 1)
{
lean_object* v_pre_684_; 
v_pre_684_ = lean_ctor_get(v_x_683_, 0);
if (lean_obj_tag(v_pre_684_) == 0)
{
lean_object* v_str_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v_str_685_ = lean_ctor_get(v_x_683_, 1);
v___x_686_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0___closed__0));
v___x_687_ = lean_string_dec_eq(v_str_685_, v___x_686_);
return v___x_687_;
}
else
{
return v___x_682_;
}
}
else
{
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0___boxed(lean_object* v___x_688_, lean_object* v_x_689_){
_start:
{
uint8_t v___x_6102__boxed_690_; uint8_t v_res_691_; lean_object* v_r_692_; 
v___x_6102__boxed_690_ = lean_unbox(v___x_688_);
v_res_691_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___lam__0(v___x_6102__boxed_690_, v_x_689_);
lean_dec(v_x_689_);
v_r_692_ = lean_box(v_res_691_);
return v_r_692_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__6(lean_object* v_opts_693_, lean_object* v_opt_694_){
_start:
{
lean_object* v_name_695_; lean_object* v_defValue_696_; lean_object* v_map_697_; lean_object* v___x_698_; 
v_name_695_ = lean_ctor_get(v_opt_694_, 0);
v_defValue_696_ = lean_ctor_get(v_opt_694_, 1);
v_map_697_ = lean_ctor_get(v_opts_693_, 0);
v___x_698_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_697_, v_name_695_);
if (lean_obj_tag(v___x_698_) == 0)
{
uint8_t v___x_699_; 
v___x_699_ = lean_unbox(v_defValue_696_);
return v___x_699_;
}
else
{
lean_object* v_val_700_; 
v_val_700_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_val_700_);
lean_dec_ref_known(v___x_698_, 1);
if (lean_obj_tag(v_val_700_) == 1)
{
uint8_t v_v_701_; 
v_v_701_ = lean_ctor_get_uint8(v_val_700_, 0);
lean_dec_ref_known(v_val_700_, 0);
return v_v_701_;
}
else
{
uint8_t v___x_702_; 
lean_dec(v_val_700_);
v___x_702_ = lean_unbox(v_defValue_696_);
return v___x_702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__6___boxed(lean_object* v_opts_703_, lean_object* v_opt_704_){
_start:
{
uint8_t v_res_705_; lean_object* v_r_706_; 
v_res_705_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__6(v_opts_703_, v_opt_704_);
lean_dec_ref(v_opt_704_);
lean_dec_ref(v_opts_703_);
v_r_706_ = lean_box(v_res_705_);
return v_r_706_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_707_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__0);
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
return v___x_709_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1);
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
lean_ctor_set(v___x_712_, 2, v___x_711_);
lean_ctor_set(v___x_712_, 3, v___x_711_);
lean_ctor_set(v___x_712_, 4, v___x_710_);
lean_ctor_set(v___x_712_, 5, v___x_710_);
lean_ctor_set(v___x_712_, 6, v___x_710_);
lean_ctor_set(v___x_712_, 7, v___x_710_);
lean_ctor_set(v___x_712_, 8, v___x_710_);
lean_ctor_set(v___x_712_, 9, v___x_710_);
lean_ctor_set(v___x_712_, 10, v___x_710_);
return v___x_712_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_713_ = lean_unsigned_to_nat(32u);
v___x_714_ = lean_mk_empty_array_with_capacity(v___x_713_);
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_716_ = ((size_t)5ULL);
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = lean_unsigned_to_nat(32u);
v___x_719_ = lean_mk_empty_array_with_capacity(v___x_718_);
v___x_720_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__3);
v___x_721_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v___x_719_);
lean_ctor_set(v___x_721_, 2, v___x_717_);
lean_ctor_set(v___x_721_, 3, v___x_717_);
lean_ctor_set_usize(v___x_721_, 4, v___x_716_);
return v___x_721_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_722_ = lean_box(1);
v___x_723_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__4);
v___x_724_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__1);
v___x_725_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
lean_ctor_set(v___x_725_, 1, v___x_723_);
lean_ctor_set(v___x_725_, 2, v___x_722_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg(lean_object* v_msgData_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___x_729_; lean_object* v_env_730_; uint8_t v___x_731_; lean_object* v_env_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v_scopes_735_; lean_object* v___x_736_; lean_object* v_opts_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_729_ = lean_st_ref_get(v___y_727_);
v_env_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc_ref(v_env_730_);
lean_dec(v___x_729_);
v___x_731_ = 0;
v_env_732_ = l_Lean_Environment_setRecordingDeps(v_env_730_, v___x_731_);
v___x_733_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_734_ = lean_st_ref_get(v___y_727_);
v_scopes_735_ = lean_ctor_get(v___x_734_, 2);
lean_inc(v_scopes_735_);
lean_dec(v___x_734_);
v___x_736_ = l_List_head_x21___redArg(v___x_733_, v_scopes_735_);
lean_dec(v_scopes_735_);
v_opts_737_ = lean_ctor_get(v___x_736_, 1);
lean_inc_ref(v_opts_737_);
lean_dec(v___x_736_);
v___x_738_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2);
v___x_739_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5);
v___x_740_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_740_, 0, v_env_732_);
lean_ctor_set(v___x_740_, 1, v___x_738_);
lean_ctor_set(v___x_740_, 2, v___x_739_);
lean_ctor_set(v___x_740_, 3, v_opts_737_);
v___x_741_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
lean_ctor_set(v___x_741_, 1, v_msgData_726_);
v___x_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_msgData_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg(v_msgData_743_, v___y_744_);
lean_dec(v___y_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3(lean_object* v_ref_751_, lean_object* v_msgData_752_, uint8_t v_severity_753_, uint8_t v_isSilent_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___y_759_; uint8_t v___y_760_; lean_object* v___y_761_; uint8_t v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_824_; uint8_t v___y_825_; uint8_t v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_849_; uint8_t v___y_850_; lean_object* v___y_851_; uint8_t v___y_852_; lean_object* v___y_853_; uint8_t v___y_857_; uint8_t v___x_885_; uint8_t v___x_886_; 
v___x_885_ = 2;
v___x_886_ = l_Lean_instBEqMessageSeverity_beq(v_severity_753_, v___x_885_);
if (v___x_886_ == 0)
{
goto v___jp_874_;
}
else
{
uint8_t v___x_887_; 
lean_inc_ref(v_msgData_752_);
v___x_887_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_752_);
if (v___x_887_ == 0)
{
goto v___jp_874_;
}
else
{
lean_object* v___x_888_; lean_object* v___x_889_; 
lean_dec_ref(v_msgData_752_);
v___x_888_ = lean_box(0);
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
v___jp_758_:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lean_Elab_Command_getScope___redArg(v___y_766_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v_currNamespace_769_; lean_object* v___x_770_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_767_, 1);
v_currNamespace_769_ = lean_ctor_get(v_a_768_, 2);
lean_inc(v_currNamespace_769_);
lean_dec(v_a_768_);
v___x_770_ = l_Lean_Elab_Command_getScope___redArg(v___y_766_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_806_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_806_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_806_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_806_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v_openDecls_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v_env_780_; lean_object* v_messages_781_; lean_object* v_scopes_782_; lean_object* v_usedQuotCtxts_783_; lean_object* v_nextMacroScope_784_; lean_object* v_maxRecDepth_785_; lean_object* v_ngen_786_; lean_object* v_auxDeclNGen_787_; lean_object* v_infoState_788_; lean_object* v_traceState_789_; lean_object* v_snapshotTasks_790_; lean_object* v_prevLinterStates_791_; lean_object* v_codeQualityEntryTasks_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_805_; 
v_openDecls_775_ = lean_ctor_get(v_a_771_, 3);
lean_inc(v_openDecls_775_);
lean_dec(v_a_771_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v_currNamespace_769_);
lean_ctor_set(v___x_776_, 1, v_openDecls_775_);
v___x_777_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v___y_764_);
lean_inc_ref(v___y_759_);
lean_inc_ref(v___y_765_);
v___x_778_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_778_, 0, v___y_765_);
lean_ctor_set(v___x_778_, 1, v___y_763_);
lean_ctor_set(v___x_778_, 2, v___y_761_);
lean_ctor_set(v___x_778_, 3, v___y_759_);
lean_ctor_set(v___x_778_, 4, v___x_777_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*5, v___y_762_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*5 + 1, v___y_760_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*5 + 2, v_isSilent_754_);
v___x_779_ = lean_st_ref_take(v___y_766_);
v_env_780_ = lean_ctor_get(v___x_779_, 0);
v_messages_781_ = lean_ctor_get(v___x_779_, 1);
v_scopes_782_ = lean_ctor_get(v___x_779_, 2);
v_usedQuotCtxts_783_ = lean_ctor_get(v___x_779_, 3);
v_nextMacroScope_784_ = lean_ctor_get(v___x_779_, 4);
v_maxRecDepth_785_ = lean_ctor_get(v___x_779_, 5);
v_ngen_786_ = lean_ctor_get(v___x_779_, 6);
v_auxDeclNGen_787_ = lean_ctor_get(v___x_779_, 7);
v_infoState_788_ = lean_ctor_get(v___x_779_, 8);
v_traceState_789_ = lean_ctor_get(v___x_779_, 9);
v_snapshotTasks_790_ = lean_ctor_get(v___x_779_, 10);
v_prevLinterStates_791_ = lean_ctor_get(v___x_779_, 11);
v_codeQualityEntryTasks_792_ = lean_ctor_get(v___x_779_, 12);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_805_ == 0)
{
v___x_794_ = v___x_779_;
v_isShared_795_ = v_isSharedCheck_805_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_codeQualityEntryTasks_792_);
lean_inc(v_prevLinterStates_791_);
lean_inc(v_snapshotTasks_790_);
lean_inc(v_traceState_789_);
lean_inc(v_infoState_788_);
lean_inc(v_auxDeclNGen_787_);
lean_inc(v_ngen_786_);
lean_inc(v_maxRecDepth_785_);
lean_inc(v_nextMacroScope_784_);
lean_inc(v_usedQuotCtxts_783_);
lean_inc(v_scopes_782_);
lean_inc(v_messages_781_);
lean_inc(v_env_780_);
lean_dec(v___x_779_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_805_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_796_ = lean_box(0);
v___x_797_ = l_Lean_MessageLog_add(v___x_778_, v_messages_781_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 1, v___x_797_);
v___x_799_ = v___x_794_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_env_780_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v___x_797_);
lean_ctor_set(v_reuseFailAlloc_804_, 2, v_scopes_782_);
lean_ctor_set(v_reuseFailAlloc_804_, 3, v_usedQuotCtxts_783_);
lean_ctor_set(v_reuseFailAlloc_804_, 4, v_nextMacroScope_784_);
lean_ctor_set(v_reuseFailAlloc_804_, 5, v_maxRecDepth_785_);
lean_ctor_set(v_reuseFailAlloc_804_, 6, v_ngen_786_);
lean_ctor_set(v_reuseFailAlloc_804_, 7, v_auxDeclNGen_787_);
lean_ctor_set(v_reuseFailAlloc_804_, 8, v_infoState_788_);
lean_ctor_set(v_reuseFailAlloc_804_, 9, v_traceState_789_);
lean_ctor_set(v_reuseFailAlloc_804_, 10, v_snapshotTasks_790_);
lean_ctor_set(v_reuseFailAlloc_804_, 11, v_prevLinterStates_791_);
lean_ctor_set(v_reuseFailAlloc_804_, 12, v_codeQualityEntryTasks_792_);
v___x_799_ = v_reuseFailAlloc_804_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_800_ = lean_st_ref_put(v___y_766_, v___x_799_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_796_);
v___x_802_ = v___x_773_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_796_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec(v_currNamespace_769_);
lean_dec_ref(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_761_);
v_a_807_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_770_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_770_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
else
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_dec_ref(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_761_);
v_a_815_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_767_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_767_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
v___jp_823_:
{
lean_object* v_fileName_829_; lean_object* v_fileMap_830_; uint8_t v_suppressElabErrors_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_847_; 
v_fileName_829_ = lean_ctor_get(v___y_755_, 0);
v_fileMap_830_ = lean_ctor_get(v___y_755_, 1);
v_suppressElabErrors_831_ = lean_ctor_get_uint8(v___y_755_, sizeof(void*)*10);
v___x_832_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_752_);
v___x_833_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg(v___x_832_, v___y_756_);
v_a_834_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_847_ == 0)
{
v___x_836_ = v___x_833_;
v_isShared_837_ = v_isSharedCheck_847_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_833_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_847_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
lean_inc_ref_n(v_fileMap_830_, 2);
v___x_838_ = l_Lean_FileMap_toPosition(v_fileMap_830_, v___y_827_);
lean_dec(v___y_827_);
v___x_839_ = l_Lean_FileMap_toPosition(v_fileMap_830_, v___y_828_);
lean_dec(v___y_828_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
v___x_841_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__0));
if (v_suppressElabErrors_831_ == 0)
{
lean_del_object(v___x_836_);
v___y_759_ = v___x_841_;
v___y_760_ = v___y_825_;
v___y_761_ = v___x_840_;
v___y_762_ = v___y_826_;
v___y_763_ = v___x_838_;
v___y_764_ = v_a_834_;
v___y_765_ = v_fileName_829_;
v___y_766_ = v___y_756_;
goto v___jp_758_;
}
else
{
uint8_t v___x_842_; 
lean_inc(v_a_834_);
lean_inc_ref(v___y_824_);
v___x_842_ = l_Lean_MessageData_hasTag(v___y_824_, v_a_834_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; lean_object* v___x_845_; 
lean_dec_ref_known(v___x_840_, 1);
lean_dec_ref(v___x_838_);
lean_dec(v_a_834_);
v___x_843_ = lean_box(0);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 0, v___x_843_);
v___x_845_ = v___x_836_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
else
{
lean_del_object(v___x_836_);
v___y_759_ = v___x_841_;
v___y_760_ = v___y_825_;
v___y_761_ = v___x_840_;
v___y_762_ = v___y_826_;
v___y_763_ = v___x_838_;
v___y_764_ = v_a_834_;
v___y_765_ = v_fileName_829_;
v___y_766_ = v___y_756_;
goto v___jp_758_;
}
}
}
}
v___jp_848_:
{
lean_object* v___x_854_; 
v___x_854_ = l_Lean_Syntax_getTailPos_x3f(v___y_851_, v___y_850_);
lean_dec(v___y_851_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_inc(v___y_853_);
v___y_824_ = v___y_849_;
v___y_825_ = v___y_852_;
v___y_826_ = v___y_850_;
v___y_827_ = v___y_853_;
v___y_828_ = v___y_853_;
goto v___jp_823_;
}
else
{
lean_object* v_val_855_; 
v_val_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_val_855_);
lean_dec_ref_known(v___x_854_, 1);
v___y_824_ = v___y_849_;
v___y_825_ = v___y_852_;
v___y_826_ = v___y_850_;
v___y_827_ = v___y_853_;
v___y_828_ = v_val_855_;
goto v___jp_823_;
}
}
v___jp_856_:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lean_Elab_Command_getRef___redArg(v___y_755_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v_ref_860_; uint8_t v___x_861_; lean_object* v___f_862_; lean_object* v___x_863_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v_ref_860_ = l_Lean_replaceRef(v_ref_751_, v_a_859_);
lean_dec(v_a_859_);
v___x_861_ = 0;
v___f_862_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__1));
v___x_863_ = l_Lean_Syntax_getPos_x3f(v_ref_860_, v___x_861_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v___x_864_; 
v___x_864_ = lean_unsigned_to_nat(0u);
v___y_849_ = v___f_862_;
v___y_850_ = v___x_861_;
v___y_851_ = v_ref_860_;
v___y_852_ = v___y_857_;
v___y_853_ = v___x_864_;
goto v___jp_848_;
}
else
{
lean_object* v_val_865_; 
v_val_865_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_val_865_);
lean_dec_ref_known(v___x_863_, 1);
v___y_849_ = v___f_862_;
v___y_850_ = v___x_861_;
v___y_851_ = v_ref_860_;
v___y_852_ = v___y_857_;
v___y_853_ = v_val_865_;
goto v___jp_848_;
}
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
lean_dec_ref(v_msgData_752_);
v_a_866_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_858_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_858_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
v___jp_874_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v_scopes_877_; lean_object* v___x_878_; lean_object* v_opts_879_; uint8_t v___x_880_; uint8_t v___x_881_; 
v___x_875_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_876_ = lean_st_ref_get(v___y_756_);
v_scopes_877_ = lean_ctor_get(v___x_876_, 2);
lean_inc(v_scopes_877_);
lean_dec(v___x_876_);
v___x_878_ = l_List_head_x21___redArg(v___x_875_, v_scopes_877_);
lean_dec(v_scopes_877_);
v_opts_879_ = lean_ctor_get(v___x_878_, 1);
lean_inc_ref(v_opts_879_);
lean_dec(v___x_878_);
v___x_880_ = 1;
v___x_881_ = l_Lean_instBEqMessageSeverity_beq(v_severity_753_, v___x_880_);
if (v___x_881_ == 0)
{
lean_dec_ref(v_opts_879_);
v___y_857_ = v_severity_753_;
goto v___jp_856_;
}
else
{
lean_object* v___x_882_; uint8_t v___x_883_; 
v___x_882_ = l_Lean_warningAsError;
v___x_883_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__6(v_opts_879_, v___x_882_);
lean_dec_ref(v_opts_879_);
if (v___x_883_ == 0)
{
v___y_857_ = v_severity_753_;
goto v___jp_856_;
}
else
{
uint8_t v___x_884_; 
v___x_884_ = 2;
v___y_857_ = v___x_884_;
goto v___jp_856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___boxed(lean_object* v_ref_890_, lean_object* v_msgData_891_, lean_object* v_severity_892_, lean_object* v_isSilent_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
uint8_t v_severity_boxed_897_; uint8_t v_isSilent_boxed_898_; lean_object* v_res_899_; 
v_severity_boxed_897_ = lean_unbox(v_severity_892_);
v_isSilent_boxed_898_ = lean_unbox(v_isSilent_893_);
v_res_899_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3(v_ref_890_, v_msgData_891_, v_severity_boxed_897_, v_isSilent_boxed_898_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v_ref_890_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1(lean_object* v_ref_900_, lean_object* v_msgData_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
uint8_t v___x_905_; uint8_t v___x_906_; lean_object* v___x_907_; 
v___x_905_ = 0;
v___x_906_ = 0;
v___x_907_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3(v_ref_900_, v_msgData_901_, v___x_905_, v___x_906_, v___y_902_, v___y_903_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1___boxed(lean_object* v_ref_908_, lean_object* v_msgData_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1(v_ref_908_, v_msgData_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v_ref_908_);
return v_res_913_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0(void){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = lean_box(1);
v___x_915_ = l_Lean_MessageData_ofFormat(v___x_914_);
return v___x_915_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__3(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__2));
v___x_920_ = l_Lean_MessageData_ofFormat(v___x_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14(lean_object* v_x_921_, lean_object* v_x_922_){
_start:
{
if (lean_obj_tag(v_x_922_) == 0)
{
return v_x_921_;
}
else
{
lean_object* v_head_923_; lean_object* v_tail_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_946_; 
v_head_923_ = lean_ctor_get(v_x_922_, 0);
v_tail_924_ = lean_ctor_get(v_x_922_, 1);
v_isSharedCheck_946_ = !lean_is_exclusive(v_x_922_);
if (v_isSharedCheck_946_ == 0)
{
v___x_926_ = v_x_922_;
v_isShared_927_ = v_isSharedCheck_946_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_tail_924_);
lean_inc(v_head_923_);
lean_dec(v_x_922_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_946_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v_before_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_944_; 
v_before_928_ = lean_ctor_get(v_head_923_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v_head_923_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; 
v_unused_945_ = lean_ctor_get(v_head_923_, 1);
lean_dec(v_unused_945_);
v___x_930_ = v_head_923_;
v_isShared_931_ = v_isSharedCheck_944_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_before_928_);
lean_dec(v_head_923_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_944_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_932_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0);
if (v_isShared_931_ == 0)
{
lean_ctor_set_tag(v___x_930_, 7);
lean_ctor_set(v___x_930_, 1, v___x_932_);
lean_ctor_set(v___x_930_, 0, v_x_921_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_x_921_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v___x_932_);
v___x_934_ = v_reuseFailAlloc_943_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_935_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__3);
if (v_isShared_927_ == 0)
{
lean_ctor_set_tag(v___x_926_, 7);
lean_ctor_set(v___x_926_, 1, v___x_935_);
lean_ctor_set(v___x_926_, 0, v___x_934_);
v___x_937_ = v___x_926_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v___x_934_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v___x_935_);
v___x_937_ = v_reuseFailAlloc_942_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_938_ = l_Lean_MessageData_ofSyntax(v_before_928_);
v___x_939_ = l_Lean_indentD(v___x_938_);
v___x_940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_937_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v_x_921_ = v___x_940_;
v_x_922_ = v_tail_924_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__1));
v___x_951_ = l_Lean_MessageData_ofFormat(v___x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg(lean_object* v_msgData_952_, lean_object* v_macroStack_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v_scopes_958_; lean_object* v___x_959_; lean_object* v_opts_960_; lean_object* v___x_961_; uint8_t v___x_962_; 
v___x_956_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_957_ = lean_st_ref_get(v___y_954_);
v_scopes_958_ = lean_ctor_get(v___x_957_, 2);
lean_inc(v_scopes_958_);
lean_dec(v___x_957_);
v___x_959_ = l_List_head_x21___redArg(v___x_956_, v_scopes_958_);
lean_dec(v_scopes_958_);
v_opts_960_ = lean_ctor_get(v___x_959_, 1);
lean_inc_ref(v_opts_960_);
lean_dec(v___x_959_);
v___x_961_ = l_Lean_Elab_pp_macroStack;
v___x_962_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__6(v_opts_960_, v___x_961_);
lean_dec_ref(v_opts_960_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; 
lean_dec(v_macroStack_953_);
v___x_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_963_, 0, v_msgData_952_);
return v___x_963_;
}
else
{
if (lean_obj_tag(v_macroStack_953_) == 0)
{
lean_object* v___x_964_; 
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v_msgData_952_);
return v___x_964_;
}
else
{
lean_object* v_head_965_; lean_object* v_after_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_981_; 
v_head_965_ = lean_ctor_get(v_macroStack_953_, 0);
lean_inc(v_head_965_);
v_after_966_ = lean_ctor_get(v_head_965_, 1);
v_isSharedCheck_981_ = !lean_is_exclusive(v_head_965_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; 
v_unused_982_ = lean_ctor_get(v_head_965_, 0);
lean_dec(v_unused_982_);
v___x_968_ = v_head_965_;
v_isShared_969_ = v_isSharedCheck_981_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_after_966_);
lean_dec(v_head_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_981_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_970_; lean_object* v___x_972_; 
v___x_970_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14___closed__0);
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 7);
lean_ctor_set(v___x_968_, 1, v___x_970_);
lean_ctor_set(v___x_968_, 0, v_msgData_952_);
v___x_972_ = v___x_968_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_msgData_952_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v___x_970_);
v___x_972_ = v_reuseFailAlloc_980_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v_msgData_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_973_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___closed__2);
v___x_974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = l_Lean_MessageData_ofSyntax(v_after_966_);
v___x_976_ = l_Lean_indentD(v___x_975_);
v_msgData_977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_977_, 0, v___x_974_);
lean_ctor_set(v_msgData_977_, 1, v___x_976_);
v___x_978_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13_spec__14(v_msgData_977_, v_macroStack_953_);
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
return v___x_979_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg___boxed(lean_object* v_msgData_983_, lean_object* v_macroStack_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg(v_msgData_983_, v_macroStack_984_, v___y_985_);
lean_dec(v___y_985_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___redArg(lean_object* v_msg_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_Elab_Command_getRef___redArg(v___y_989_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v_macroStack_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v_a_997_; lean_object* v___x_998_; lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1007_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v___x_992_, 1);
v_macroStack_994_ = lean_ctor_get(v___y_989_, 4);
v___x_995_ = l_Lean_Elab_getBetterRef(v_a_993_, v_macroStack_994_);
lean_dec(v_a_993_);
v___x_996_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg(v_msg_988_, v___y_990_);
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
lean_dec_ref(v___x_996_);
lean_inc(v_macroStack_994_);
v___x_998_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg(v_a_997_, v_macroStack_994_, v___y_990_);
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_995_);
lean_ctor_set(v___x_1003_, 1, v_a_999_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set_tag(v___x_1001_, 1);
lean_ctor_set(v___x_1001_, 0, v___x_1003_);
v___x_1005_ = v___x_1001_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_dec_ref(v_msg_988_);
v_a_1008_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_992_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_992_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___redArg___boxed(lean_object* v_msg_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___redArg(v_msg_1016_, v___y_1017_, v___y_1018_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___redArg(lean_object* v_ref_1021_, lean_object* v_msg_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_Elab_Command_getRef___redArg(v___y_1023_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v_fileName_1028_; lean_object* v_fileMap_1029_; lean_object* v_currRecDepth_1030_; lean_object* v_cmdPos_1031_; lean_object* v_macroStack_1032_; lean_object* v_quotContext_x3f_1033_; lean_object* v_currMacroScope_1034_; lean_object* v_snap_x3f_1035_; lean_object* v_cancelTk_x3f_1036_; uint8_t v_suppressElabErrors_1037_; uint8_t v_checkDeprecated_1038_; lean_object* v_ref_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1027_);
lean_dec_ref_known(v___x_1026_, 1);
v_fileName_1028_ = lean_ctor_get(v___y_1023_, 0);
v_fileMap_1029_ = lean_ctor_get(v___y_1023_, 1);
v_currRecDepth_1030_ = lean_ctor_get(v___y_1023_, 2);
v_cmdPos_1031_ = lean_ctor_get(v___y_1023_, 3);
v_macroStack_1032_ = lean_ctor_get(v___y_1023_, 4);
v_quotContext_x3f_1033_ = lean_ctor_get(v___y_1023_, 5);
v_currMacroScope_1034_ = lean_ctor_get(v___y_1023_, 6);
v_snap_x3f_1035_ = lean_ctor_get(v___y_1023_, 8);
v_cancelTk_x3f_1036_ = lean_ctor_get(v___y_1023_, 9);
v_suppressElabErrors_1037_ = lean_ctor_get_uint8(v___y_1023_, sizeof(void*)*10);
v_checkDeprecated_1038_ = lean_ctor_get_uint8(v___y_1023_, sizeof(void*)*10 + 1);
v_ref_1039_ = l_Lean_replaceRef(v_ref_1021_, v_a_1027_);
lean_dec(v_a_1027_);
lean_inc(v_cancelTk_x3f_1036_);
lean_inc(v_snap_x3f_1035_);
lean_inc(v_currMacroScope_1034_);
lean_inc(v_quotContext_x3f_1033_);
lean_inc(v_macroStack_1032_);
lean_inc(v_cmdPos_1031_);
lean_inc(v_currRecDepth_1030_);
lean_inc_ref(v_fileMap_1029_);
lean_inc_ref(v_fileName_1028_);
v___x_1040_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1040_, 0, v_fileName_1028_);
lean_ctor_set(v___x_1040_, 1, v_fileMap_1029_);
lean_ctor_set(v___x_1040_, 2, v_currRecDepth_1030_);
lean_ctor_set(v___x_1040_, 3, v_cmdPos_1031_);
lean_ctor_set(v___x_1040_, 4, v_macroStack_1032_);
lean_ctor_set(v___x_1040_, 5, v_quotContext_x3f_1033_);
lean_ctor_set(v___x_1040_, 6, v_currMacroScope_1034_);
lean_ctor_set(v___x_1040_, 7, v_ref_1039_);
lean_ctor_set(v___x_1040_, 8, v_snap_x3f_1035_);
lean_ctor_set(v___x_1040_, 9, v_cancelTk_x3f_1036_);
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*10, v_suppressElabErrors_1037_);
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*10 + 1, v_checkDeprecated_1038_);
v___x_1041_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___redArg(v_msg_1022_, v___x_1040_, v___y_1024_);
lean_dec_ref_known(v___x_1040_, 10);
return v___x_1041_;
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
lean_dec_ref(v_msg_1022_);
v_a_1042_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1026_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1026_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___redArg___boxed(lean_object* v_ref_1050_, lean_object* v_msg_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___redArg(v_ref_1050_, v_msg_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v_ref_1050_);
return v_res_1055_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__0));
v___x_1058_ = l_Lean_stringToMessageData(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__2));
v___x_1061_ = l_Lean_stringToMessageData(v___x_1060_);
return v___x_1061_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__5(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__4));
v___x_1064_ = l_Lean_stringToMessageData(v___x_1063_);
return v___x_1064_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__7(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__6));
v___x_1067_ = l_Lean_stringToMessageData(v___x_1066_);
return v___x_1067_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__9(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__8));
v___x_1070_ = l_Lean_stringToMessageData(v___x_1069_);
return v___x_1070_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__11(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__10));
v___x_1073_ = l_Lean_stringToMessageData(v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__13(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__12));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg(lean_object* v_msg_1077_, lean_object* v_declHint_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v_env_1083_; uint8_t v___x_1084_; 
v___x_1081_ = lean_box(0);
v___x_1082_ = lean_st_ref_get(v___y_1079_);
v_env_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc_ref(v_env_1083_);
lean_dec(v___x_1082_);
v___x_1084_ = l_Lean_Name_isAnonymous(v_declHint_1078_);
if (v___x_1084_ == 0)
{
uint8_t v_isExporting_1085_; 
v_isExporting_1085_ = lean_ctor_get_uint8(v_env_1083_, sizeof(void*)*13);
if (v_isExporting_1085_ == 0)
{
lean_object* v___x_1086_; 
lean_dec_ref(v_env_1083_);
lean_dec(v_declHint_1078_);
v___x_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_msg_1077_);
return v___x_1086_;
}
else
{
lean_object* v___x_1087_; uint8_t v___x_1088_; 
lean_inc_ref(v_env_1083_);
v___x_1087_ = l_Lean_Environment_setExporting(v_env_1083_, v___x_1084_);
lean_inc(v_declHint_1078_);
lean_inc_ref(v___x_1087_);
v___x_1088_ = l_Lean_Environment_contains(v___x_1087_, v_declHint_1078_, v_isExporting_1085_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; 
lean_dec_ref(v___x_1087_);
lean_dec_ref(v_env_1083_);
lean_dec(v_declHint_1078_);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_msg_1077_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v_c_1095_; lean_object* v___x_1096_; 
v___x_1090_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__2);
v___x_1091_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg___closed__5);
v___x_1092_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1087_);
v___x_1093_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1087_);
lean_ctor_set(v___x_1093_, 1, v___x_1090_);
lean_ctor_set(v___x_1093_, 2, v___x_1091_);
lean_ctor_set(v___x_1093_, 3, v___x_1092_);
lean_inc(v_declHint_1078_);
v___x_1094_ = l_Lean_MessageData_ofConstName(v_declHint_1078_, v___x_1084_);
v_c_1095_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1095_, 0, v___x_1093_);
lean_ctor_set(v_c_1095_, 1, v___x_1094_);
v___x_1096_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1087_, v_declHint_1078_);
lean_dec_ref(v___x_1087_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_dec_ref(v_env_1083_);
lean_dec(v_declHint_1078_);
v___x_1097_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_1098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
lean_ctor_set(v___x_1098_, 1, v_c_1095_);
v___x_1099_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_1100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = l_Lean_MessageData_note(v___x_1100_);
v___x_1102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1102_, 0, v_msg_1077_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
return v___x_1103_;
}
else
{
lean_object* v_val_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1138_; 
v_val_1104_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1106_ = v___x_1096_;
v_isShared_1107_ = v_isSharedCheck_1138_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_val_1104_);
lean_dec(v___x_1096_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1138_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1108_; lean_object* v_moduleNames_1109_; lean_object* v_mod_1110_; uint8_t v___x_1111_; 
v___x_1108_ = l_Lean_Environment_header(v_env_1083_);
lean_dec_ref(v_env_1083_);
v_moduleNames_1109_ = lean_ctor_get(v___x_1108_, 4);
lean_inc_ref(v_moduleNames_1109_);
lean_dec_ref(v___x_1108_);
v_mod_1110_ = lean_array_get(v___x_1081_, v_moduleNames_1109_, v_val_1104_);
lean_dec(v_val_1104_);
lean_dec_ref(v_moduleNames_1109_);
v___x_1111_ = l_Lean_isPrivateName(v_declHint_1078_);
lean_dec(v_declHint_1078_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1112_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__5);
v___x_1113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v_c_1095_);
v___x_1114_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__7);
v___x_1115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = l_Lean_MessageData_ofName(v_mod_1110_);
v___x_1117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1115_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
v___x_1118_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__9);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = l_Lean_MessageData_note(v___x_1119_);
v___x_1121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1121_, 0, v_msg_1077_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1121_);
v___x_1123_ = v___x_1106_;
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
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1125_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_1126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v_c_1095_);
v___x_1127_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__11);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = l_Lean_MessageData_ofName(v_mod_1110_);
v___x_1130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1128_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___closed__13);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = l_Lean_MessageData_note(v___x_1132_);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v_msg_1077_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1134_);
v___x_1136_ = v___x_1106_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1139_; 
lean_dec_ref(v_env_1083_);
lean_dec(v_declHint_1078_);
v___x_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1139_, 0, v_msg_1077_);
return v___x_1139_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_msg_1140_, lean_object* v_declHint_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg(v_msg_1140_, v_declHint_1141_, v___y_1142_);
lean_dec(v___y_1142_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9(lean_object* v_msg_1145_, lean_object* v_declHint_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v___x_1150_; lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1160_; 
v___x_1150_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg(v_msg_1145_, v_declHint_1146_, v___y_1148_);
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1160_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1160_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = l_Lean_unknownIdentifierMessageTag;
v___x_1156_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v_a_1151_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v___x_1156_);
v___x_1158_ = v___x_1153_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9___boxed(lean_object* v_msg_1161_, lean_object* v_declHint_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9(v_msg_1161_, v_declHint_1162_, v___y_1163_, v___y_1164_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(lean_object* v_ref_1167_, lean_object* v_msg_1168_, lean_object* v_declHint_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v___x_1173_; lean_object* v_a_1174_; lean_object* v___x_1175_; 
v___x_1173_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9(v_msg_1168_, v_declHint_1169_, v___y_1170_, v___y_1171_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref(v___x_1173_);
v___x_1175_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___redArg(v_ref_1167_, v_a_1174_, v___y_1170_, v___y_1171_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_ref_1176_, lean_object* v_msg_1177_, lean_object* v_declHint_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(v_ref_1176_, v_msg_1177_, v_declHint_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v_ref_1176_);
return v_res_1182_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__0));
v___x_1185_ = l_Lean_stringToMessageData(v___x_1184_);
return v___x_1185_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__2));
v___x_1188_ = l_Lean_stringToMessageData(v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_ref_1189_, lean_object* v_constName_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1194_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__1);
v___x_1195_ = 0;
lean_inc(v_constName_1190_);
v___x_1196_ = l_Lean_MessageData_ofConstName(v_constName_1190_, v___x_1195_);
v___x_1197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1194_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___closed__3);
v___x_1199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(v_ref_1189_, v___x_1199_, v_constName_1190_, v___y_1191_, v___y_1192_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_ref_1201_, lean_object* v_constName_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_1201_, v_constName_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v_ref_1201_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lean_Elab_Command_getRef___redArg(v___y_1208_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1213_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1213_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg(v_a_1212_, v_constName_1207_, v___y_1208_, v___y_1209_);
lean_dec(v_a_1212_);
return v___x_1213_;
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec(v_constName_1207_);
v_a_1214_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1211_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1211_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___redArg(v_constName_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0(lean_object* v_constName_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v___x_1231_; lean_object* v_env_1232_; uint8_t v___x_1233_; lean_object* v___x_1234_; 
v___x_1231_ = lean_st_ref_get(v___y_1229_);
v_env_1232_ = lean_ctor_get(v___x_1231_, 0);
lean_inc_ref(v_env_1232_);
lean_dec(v___x_1231_);
v___x_1233_ = 0;
lean_inc(v_constName_1227_);
v___x_1234_ = l_Lean_Environment_findConstVal_x3f(v_env_1232_, v_constName_1227_, v___x_1233_);
if (lean_obj_tag(v___x_1234_) == 0)
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___redArg(v_constName_1227_, v___y_1228_, v___y_1229_);
return v___x_1235_;
}
else
{
lean_object* v_val_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec(v_constName_1227_);
v_val_1236_ = lean_ctor_get(v___x_1234_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1234_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_val_1236_);
lean_dec(v___x_1234_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
lean_ctor_set_tag(v___x_1238_, 0);
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_val_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0___boxed(lean_object* v_constName_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0(v_constName_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__1(lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
if (lean_obj_tag(v_a_1249_) == 0)
{
lean_object* v___x_1251_; 
v___x_1251_ = l_List_reverse___redArg(v_a_1250_);
return v___x_1251_;
}
else
{
lean_object* v_head_1252_; lean_object* v_tail_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1262_; 
v_head_1252_ = lean_ctor_get(v_a_1249_, 0);
v_tail_1253_ = lean_ctor_get(v_a_1249_, 1);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_a_1249_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1255_ = v_a_1249_;
v_isShared_1256_ = v_isSharedCheck_1262_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_tail_1253_);
lean_inc(v_head_1252_);
lean_dec(v_a_1249_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1262_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1257_ = l_Lean_mkLevelParam(v_head_1252_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 1, v_a_1250_);
lean_ctor_set(v___x_1255_, 0, v___x_1257_);
v___x_1259_ = v___x_1255_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v_a_1250_);
v___x_1259_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
v_a_1249_ = v_tail_1253_;
v_a_1250_ = v___x_1259_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0(lean_object* v_constName_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v___x_1267_; 
lean_inc(v_constName_1263_);
v___x_1267_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0(v_constName_1263_, v___y_1264_, v___y_1265_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1279_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1270_ = v___x_1267_;
v_isShared_1271_ = v_isSharedCheck_1279_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1267_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1279_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v_levelParams_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1277_; 
v_levelParams_1272_ = lean_ctor_get(v_a_1268_, 1);
lean_inc(v_levelParams_1272_);
lean_dec(v_a_1268_);
v___x_1273_ = lean_box(0);
v___x_1274_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__1(v_levelParams_1272_, v___x_1273_);
v___x_1275_ = l_Lean_mkConst(v_constName_1263_, v___x_1274_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v___x_1275_);
v___x_1277_ = v___x_1270_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec(v_constName_1263_);
v_a_1280_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1267_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1267_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0___boxed(lean_object* v_constName_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0(v_constName_1288_, v___y_1289_, v___y_1290_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
return v_res_1292_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabImportPath___closed__1(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(l_Lean_Elab_Command_elabImportPath___closed__0));
v___x_1295_ = l_Lean_stringToMessageData(v___x_1294_);
return v___x_1295_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabImportPath___closed__3(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = ((lean_object*)(l_Lean_Elab_Command_elabImportPath___closed__2));
v___x_1298_ = l_Lean_stringToMessageData(v___x_1297_);
return v___x_1298_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabImportPath___closed__5(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1300_ = ((lean_object*)(l_Lean_Elab_Command_elabImportPath___closed__4));
v___x_1301_ = l_Lean_stringToMessageData(v___x_1300_);
return v___x_1301_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabImportPath___closed__7(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = ((lean_object*)(l_Lean_Elab_Command_elabImportPath___closed__6));
v___x_1304_ = l_Lean_stringToMessageData(v___x_1303_);
return v___x_1304_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabImportPath___closed__9(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = ((lean_object*)(l_Lean_Elab_Command_elabImportPath___closed__8));
v___x_1307_ = l_Lean_stringToMessageData(v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabImportPath(lean_object* v_stx_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v___x_1312_; lean_object* v_n_1313_; lean_object* v___x_1314_; lean_object* v_env_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1312_ = lean_unsigned_to_nat(1u);
v_n_1313_ = l_Lean_Syntax_getArg(v_stx_1308_, v___x_1312_);
v___x_1314_ = lean_st_ref_get(v_a_1310_);
v_env_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc_ref(v_env_1315_);
lean_dec(v___x_1314_);
v___x_1316_ = lean_box(0);
lean_inc(v_n_1313_);
v___x_1317_ = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed), 5, 2);
lean_closure_set(v___x_1317_, 0, v_n_1313_);
lean_closure_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1317_, v_a_1309_, v_a_1310_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1320_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc_n(v_a_1319_, 2);
lean_dec_ref_known(v___x_1318_, 1);
v___x_1320_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0(v_a_1319_, v_a_1309_, v_a_1310_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1322_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
v___x_1322_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1315_, v_a_1319_);
lean_dec(v_a_1319_);
if (lean_obj_tag(v___x_1322_) == 1)
{
lean_object* v_val_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v_val_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_val_1323_);
lean_dec_ref_known(v___x_1322_, 1);
v___x_1324_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__1, &l_Lean_Elab_Command_elabImportPath___closed__1_once, _init_l_Lean_Elab_Command_elabImportPath___closed__1);
v___x_1325_ = l_Lean_MessageData_ofExpr(v_a_1321_);
v___x_1326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__3, &l_Lean_Elab_Command_elabImportPath___closed__3_once, _init_l_Lean_Elab_Command_elabImportPath___closed__3);
v___x_1328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = l_Lean_Elab_Command_importPathMessage(v_env_1315_, v_val_1323_);
lean_dec(v_val_1323_);
lean_dec_ref(v_env_1315_);
v___x_1330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1(v_n_1313_, v___x_1330_, v_a_1309_, v_a_1310_);
lean_dec(v_n_1313_);
return v___x_1331_;
}
else
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_dec(v___x_1322_);
lean_dec_ref(v_env_1315_);
v___x_1332_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__1, &l_Lean_Elab_Command_elabImportPath___closed__1_once, _init_l_Lean_Elab_Command_elabImportPath___closed__1);
v___x_1333_ = l_Lean_MessageData_ofExpr(v_a_1321_);
v___x_1334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__5, &l_Lean_Elab_Command_elabImportPath___closed__5_once, _init_l_Lean_Elab_Command_elabImportPath___closed__5);
v___x_1336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1(v_n_1313_, v___x_1336_, v_a_1309_, v_a_1310_);
lean_dec(v_n_1313_);
return v___x_1337_;
}
}
else
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
lean_dec(v_a_1319_);
lean_dec_ref(v_env_1315_);
lean_dec(v_n_1313_);
v_a_1338_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1320_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1320_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1370_; 
lean_dec_ref(v_env_1315_);
v_a_1346_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1348_ = v___x_1318_;
v_isShared_1349_ = v_isSharedCheck_1370_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1318_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1370_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
uint8_t v___x_1350_; 
v___x_1350_ = l_Lean_Exception_isInterrupt(v_a_1346_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_del_object(v___x_1348_);
lean_dec(v_a_1346_);
v___x_1351_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__7, &l_Lean_Elab_Command_elabImportPath___closed__7_once, _init_l_Lean_Elab_Command_elabImportPath___closed__7);
v___x_1352_ = l_Lean_Syntax_getId(v_n_1313_);
v___x_1353_ = l_Lean_MessageData_ofName(v___x_1352_);
v___x_1354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1351_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
v___x_1355_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__9, &l_Lean_Elab_Command_elabImportPath___closed__9_once, _init_l_Lean_Elab_Command_elabImportPath___closed__9);
v___x_1356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1354_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = l_Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1(v_n_1313_, v___x_1356_, v_a_1309_, v_a_1310_);
lean_dec(v_n_1313_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1365_; 
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1365_ == 0)
{
lean_object* v_unused_1366_; 
v_unused_1366_ = lean_ctor_get(v___x_1357_, 0);
lean_dec(v_unused_1366_);
v___x_1359_ = v___x_1357_;
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
else
{
lean_dec(v___x_1357_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1361_ = lean_box(0);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 0, v___x_1361_);
v___x_1363_ = v___x_1359_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
else
{
return v___x_1357_;
}
}
else
{
lean_object* v___x_1368_; 
lean_dec(v_n_1313_);
if (v_isShared_1349_ == 0)
{
v___x_1368_ = v___x_1348_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1346_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabImportPath___boxed(lean_object* v_stx_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l_Lean_Elab_Command_elabImportPath(v_stx_1371_, v_a_1372_, v_a_1373_);
lean_dec(v_a_1373_);
lean_dec_ref(v_a_1372_);
lean_dec(v_stx_1371_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5(lean_object* v_msgData_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___redArg(v_msgData_1376_, v___y_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5___boxed(lean_object* v_msgData_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3_spec__5(v_msgData_1381_, v___y_1382_, v___y_1383_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1386_, lean_object* v_constName_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___redArg(v_constName_1387_, v___y_1388_, v___y_1389_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1392_, lean_object* v_constName_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1(v_00_u03b1_1392_, v_constName_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_1398_, lean_object* v_ref_1399_, lean_object* v_constName_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___redArg(v_ref_1399_, v_constName_1400_, v___y_1401_, v___y_1402_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1405_, lean_object* v_ref_1406_, lean_object* v_constName_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_1405_, v_ref_1406_, v_constName_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v_ref_1406_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8(lean_object* v_00_u03b1_1412_, lean_object* v_ref_1413_, lean_object* v_msg_1414_, lean_object* v_declHint_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(v_ref_1413_, v_msg_1414_, v_declHint_1415_, v___y_1416_, v___y_1417_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8___boxed(lean_object* v_00_u03b1_1420_, lean_object* v_ref_1421_, lean_object* v_msg_1422_, lean_object* v_declHint_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8(v_00_u03b1_1420_, v_ref_1421_, v_msg_1422_, v_declHint_1423_, v___y_1424_, v___y_1425_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
lean_dec(v_ref_1421_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10(lean_object* v_msg_1428_, lean_object* v_declHint_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v___x_1433_; 
v___x_1433_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___redArg(v_msg_1428_, v_declHint_1429_, v___y_1431_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10___boxed(lean_object* v_msg_1434_, lean_object* v_declHint_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__9_spec__10(v_msg_1434_, v_declHint_1435_, v___y_1436_, v___y_1437_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10(lean_object* v_00_u03b1_1440_, lean_object* v_ref_1441_, lean_object* v_msg_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___redArg(v_ref_1441_, v_msg_1442_, v___y_1443_, v___y_1444_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1447_, lean_object* v_ref_1448_, lean_object* v_msg_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10(v_00_u03b1_1447_, v_ref_1448_, v_msg_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v_ref_1448_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12(lean_object* v_00_u03b1_1454_, lean_object* v_msg_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v___x_1459_; 
v___x_1459_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___redArg(v_msg_1455_, v___y_1456_, v___y_1457_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12___boxed(lean_object* v_00_u03b1_1460_, lean_object* v_msg_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12(v_00_u03b1_1460_, v_msg_1461_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13(lean_object* v_msgData_1466_, lean_object* v_macroStack_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___redArg(v_msgData_1466_, v_macroStack_1467_, v___y_1469_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13___boxed(lean_object* v_msgData_1472_, lean_object* v_macroStack_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0_spec__0_spec__1_spec__3_spec__8_spec__10_spec__12_spec__13(v_msgData_1472_, v_macroStack_1473_, v___y_1474_, v___y_1475_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1(){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1492_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1493_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__2));
v___x_1494_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4));
v___x_1495_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabImportPath___boxed), 4, 0);
v___x_1496_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1492_, v___x_1493_, v___x_1494_, v___x_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___boxed(lean_object* v_a_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1();
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3(){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1501_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1___closed__4));
v___x_1502_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3___closed__0));
v___x_1503_ = l_Lean_addBuiltinDocString(v___x_1501_, v___x_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3___boxed(lean_object* v_a_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3();
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg(lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; lean_object* v_env_1509_; lean_object* v___x_1510_; lean_object* v_mainModule_1511_; lean_object* v___x_1512_; 
v___x_1508_ = lean_st_ref_get(v___y_1506_);
v_env_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc_ref(v_env_1509_);
lean_dec(v___x_1508_);
v___x_1510_ = l_Lean_Environment_header(v_env_1509_);
lean_dec_ref(v_env_1509_);
v_mainModule_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_mainModule_1511_);
lean_dec_ref(v___x_1510_);
v___x_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_mainModule_1511_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg___boxed(lean_object* v___y_1513_, lean_object* v___y_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg(v___y_1513_);
lean_dec(v___y_1513_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1(lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg(v___y_1517_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___boxed(lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1(v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Command_elabAssertNotExists_spec__0(lean_object* v_ref_1524_, lean_object* v_msgData_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
uint8_t v___x_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; 
v___x_1529_ = 2;
v___x_1530_ = 0;
v___x_1531_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3(v_ref_1524_, v_msgData_1525_, v___x_1529_, v___x_1530_, v___y_1526_, v___y_1527_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_Command_elabAssertNotExists_spec__0___boxed(lean_object* v_ref_1532_, lean_object* v_msgData_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Lean_logErrorAt___at___00Lean_Elab_Command_elabAssertNotExists_spec__0(v_ref_1532_, v_msgData_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v_ref_1532_);
return v_res_1537_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__0));
v___x_1540_ = l_Lean_stringToMessageData(v___x_1539_);
return v___x_1540_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__2));
v___x_1543_ = l_Lean_stringToMessageData(v___x_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2(lean_object* v___x_1544_, lean_object* v_as_1545_, size_t v_sz_1546_, size_t v_i_1547_, lean_object* v_b_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_a_1553_; uint8_t v___x_1557_; 
v___x_1557_ = lean_usize_dec_lt(v_i_1547_, v_sz_1546_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v_b_1548_);
return v___x_1558_;
}
else
{
lean_object* v___x_1559_; lean_object* v_a_1560_; lean_object* v_a_1562_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1559_ = lean_box(0);
v_a_1560_ = lean_array_uget_borrowed(v_as_1545_, v_i_1547_);
v___x_1566_ = lean_box(0);
lean_inc(v_a_1560_);
v___x_1567_ = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed), 5, 2);
lean_closure_set(v___x_1567_, 0, v_a_1560_);
lean_closure_set(v___x_1567_, 1, v___x_1566_);
v___x_1568_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_1567_, v___y_1549_, v___y_1550_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1570_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
lean_inc_n(v_a_1569_, 2);
lean_dec_ref_known(v___x_1568_, 1);
v___x_1570_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_Command_elabImportPath_spec__0(v_a_1569_, v___y_1549_, v___y_1550_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1572_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v___x_1570_, 1);
v___x_1572_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1544_, v_a_1569_);
lean_dec(v_a_1569_);
if (lean_obj_tag(v___x_1572_) == 1)
{
lean_object* v_val_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v_val_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_val_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1574_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__1, &l_Lean_Elab_Command_elabImportPath___closed__1_once, _init_l_Lean_Elab_Command_elabImportPath___closed__1);
v___x_1575_ = l_Lean_MessageData_ofExpr(v_a_1571_);
v___x_1576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1574_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__3);
v___x_1578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1576_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = l_Lean_Elab_Command_importPathMessage(v___x_1544_, v_val_1573_);
lean_dec(v_val_1573_);
v___x_1580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1578_);
lean_ctor_set(v___x_1580_, 1, v___x_1579_);
v_a_1562_ = v___x_1580_;
goto v___jp_1561_;
}
else
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
lean_dec(v___x_1572_);
v___x_1581_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__1, &l_Lean_Elab_Command_elabImportPath___closed__1_once, _init_l_Lean_Elab_Command_elabImportPath___closed__1);
v___x_1582_ = l_Lean_MessageData_ofExpr(v_a_1571_);
v___x_1583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1581_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = lean_obj_once(&l_Lean_Elab_Command_elabImportPath___closed__5, &l_Lean_Elab_Command_elabImportPath___closed__5_once, _init_l_Lean_Elab_Command_elabImportPath___closed__5);
v___x_1585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1583_);
lean_ctor_set(v___x_1585_, 1, v___x_1584_);
v_a_1562_ = v___x_1585_;
goto v___jp_1561_;
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_dec(v_a_1569_);
v_a_1586_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1570_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1570_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1614_; 
v_a_1594_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1596_ = v___x_1568_;
v_isShared_1597_ = v_isSharedCheck_1614_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1568_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1614_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
uint8_t v___x_1598_; 
v___x_1598_ = l_Lean_Exception_isInterrupt(v_a_1594_);
if (v___x_1598_ == 0)
{
lean_object* v___x_1599_; 
lean_del_object(v___x_1596_);
lean_dec(v_a_1594_);
v___x_1599_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg(v___y_1550_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1599_, 1);
v___x_1601_ = l_Lean_Syntax_getId(v_a_1560_);
v___x_1602_ = l_Lean_Elab_Command_addAssertExistsEntry___redArg(v___x_1557_, v___x_1601_, v_a_1600_, v___y_1550_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_dec_ref_known(v___x_1602_, 1);
v_a_1553_ = v___x_1559_;
goto v___jp_1552_;
}
else
{
return v___x_1602_;
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
v_a_1603_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1599_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1599_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1603_);
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
else
{
lean_object* v___x_1612_; 
if (v_isShared_1597_ == 0)
{
v___x_1612_ = v___x_1596_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1594_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
v___jp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1563_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___closed__1);
v___x_1564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1564_, 0, v_a_1562_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
v___x_1565_ = l_Lean_logErrorAt___at___00Lean_Elab_Command_elabAssertNotExists_spec__0(v_a_1560_, v___x_1564_, v___y_1549_, v___y_1550_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_dec_ref_known(v___x_1565_, 1);
v_a_1553_ = v___x_1559_;
goto v___jp_1552_;
}
else
{
return v___x_1565_;
}
}
}
v___jp_1552_:
{
size_t v___x_1554_; size_t v___x_1555_; 
v___x_1554_ = ((size_t)1ULL);
v___x_1555_ = lean_usize_add(v_i_1547_, v___x_1554_);
v_i_1547_ = v___x_1555_;
v_b_1548_ = v_a_1553_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2___boxed(lean_object* v___x_1615_, lean_object* v_as_1616_, lean_object* v_sz_1617_, lean_object* v_i_1618_, lean_object* v_b_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
size_t v_sz_boxed_1623_; size_t v_i_boxed_1624_; lean_object* v_res_1625_; 
v_sz_boxed_1623_ = lean_unbox_usize(v_sz_1617_);
lean_dec(v_sz_1617_);
v_i_boxed_1624_ = lean_unbox_usize(v_i_1618_);
lean_dec(v_i_1618_);
v_res_1625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2(v___x_1615_, v_as_1616_, v_sz_boxed_1623_, v_i_boxed_1624_, v_b_1619_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec_ref(v_as_1616_);
lean_dec_ref(v___x_1615_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotExists(lean_object* v_stx_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v___x_1630_; lean_object* v_env_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; size_t v_sz_1636_; size_t v___x_1637_; lean_object* v___x_1638_; 
v___x_1630_ = lean_st_ref_get(v_a_1628_);
v_env_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc_ref(v_env_1631_);
lean_dec(v___x_1630_);
v___x_1632_ = lean_unsigned_to_nat(1u);
v___x_1633_ = l_Lean_Syntax_getArg(v_stx_1626_, v___x_1632_);
v___x_1634_ = l_Lean_Syntax_getArgs(v___x_1633_);
lean_dec(v___x_1633_);
v___x_1635_ = lean_box(0);
v_sz_1636_ = lean_array_size(v___x_1634_);
v___x_1637_ = ((size_t)0ULL);
v___x_1638_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotExists_spec__2(v_env_1631_, v___x_1634_, v_sz_1636_, v___x_1637_, v___x_1635_, v_a_1627_, v_a_1628_);
lean_dec_ref(v___x_1634_);
lean_dec_ref(v_env_1631_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1645_ == 0)
{
lean_object* v_unused_1646_; 
v_unused_1646_ = lean_ctor_get(v___x_1638_, 0);
lean_dec(v_unused_1646_);
v___x_1640_ = v___x_1638_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_dec(v___x_1638_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 0, v___x_1635_);
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1635_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
else
{
return v___x_1638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotExists___boxed(lean_object* v_stx_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_Elab_Command_elabAssertNotExists(v_stx_1647_, v_a_1648_, v_a_1649_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec(v_stx_1647_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1(){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1665_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1666_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__1));
v___x_1667_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3));
v___x_1668_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAssertNotExists___boxed), 4, 0);
v___x_1669_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1665_, v___x_1666_, v___x_1667_, v___x_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___boxed(lean_object* v_a_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1();
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3(){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1674_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1___closed__3));
v___x_1675_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3___closed__0));
v___x_1676_ = l_Lean_addBuiltinDocString(v___x_1674_, v___x_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3___boxed(lean_object* v_a_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3();
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Command_elabAssertNotImported_spec__0(lean_object* v_ref_1679_, lean_object* v_msgData_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
uint8_t v___x_1684_; uint8_t v___x_1685_; lean_object* v___x_1686_; 
v___x_1684_ = 1;
v___x_1685_ = 0;
v___x_1686_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3(v_ref_1679_, v_msgData_1680_, v___x_1684_, v___x_1685_, v___y_1681_, v___y_1682_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_Command_elabAssertNotImported_spec__0___boxed(lean_object* v_ref_1687_, lean_object* v_msgData_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_logWarningAt___at___00Lean_Elab_Command_elabAssertNotImported_spec__0(v_ref_1687_, v_msgData_1688_, v___y_1689_, v___y_1690_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v_ref_1687_);
return v_res_1692_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__0));
v___x_1695_ = l_Lean_stringToMessageData(v___x_1694_);
return v___x_1695_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1697_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__2));
v___x_1698_ = l_Lean_stringToMessageData(v___x_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1(lean_object* v___x_1699_, lean_object* v_as_1700_, size_t v_sz_1701_, size_t v_i_1702_, lean_object* v_b_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_a_1708_; uint8_t v___x_1712_; 
v___x_1712_ = lean_usize_dec_lt(v_i_1702_, v_sz_1701_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; 
v___x_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1713_, 0, v_b_1703_);
return v___x_1713_;
}
else
{
lean_object* v___x_1714_; lean_object* v_a_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1714_ = lean_box(0);
v_a_1715_ = lean_array_uget_borrowed(v_as_1700_, v_i_1702_);
v___x_1716_ = l_Lean_Syntax_getId(v_a_1715_);
v___x_1717_ = l_Lean_Environment_getModuleIdx_x3f(v___x_1699_, v___x_1716_);
if (lean_obj_tag(v___x_1717_) == 1)
{
lean_object* v_val_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_dec(v___x_1716_);
v_val_1718_ = lean_ctor_get(v___x_1717_, 0);
lean_inc(v_val_1718_);
lean_dec_ref_known(v___x_1717_, 1);
v___x_1719_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__1);
lean_inc(v_a_1715_);
v___x_1720_ = l_Lean_MessageData_ofSyntax(v_a_1715_);
v___x_1721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1719_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___closed__3);
v___x_1723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1721_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = l_Lean_Elab_Command_importPathMessage(v___x_1699_, v_val_1718_);
lean_dec(v_val_1718_);
v___x_1725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1723_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
v___x_1726_ = l_Lean_logWarningAt___at___00Lean_Elab_Command_elabAssertNotImported_spec__0(v_a_1715_, v___x_1725_, v___y_1704_, v___y_1705_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_dec_ref_known(v___x_1726_, 1);
v_a_1708_ = v___x_1714_;
goto v___jp_1707_;
}
else
{
return v___x_1726_;
}
}
else
{
lean_object* v___x_1727_; 
lean_dec(v___x_1717_);
v___x_1727_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAssertNotExists_spec__1___redArg(v___y_1705_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; uint8_t v___x_1729_; lean_object* v___x_1730_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1729_ = 0;
v___x_1730_ = l_Lean_Elab_Command_addAssertExistsEntry___redArg(v___x_1729_, v___x_1716_, v_a_1728_, v___y_1705_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_dec_ref_known(v___x_1730_, 1);
v_a_1708_ = v___x_1714_;
goto v___jp_1707_;
}
else
{
return v___x_1730_;
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
lean_dec(v___x_1716_);
v_a_1731_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1727_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1727_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
v___jp_1707_:
{
size_t v___x_1709_; size_t v___x_1710_; 
v___x_1709_ = ((size_t)1ULL);
v___x_1710_ = lean_usize_add(v_i_1702_, v___x_1709_);
v_i_1702_ = v___x_1710_;
v_b_1703_ = v_a_1708_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1___boxed(lean_object* v___x_1739_, lean_object* v_as_1740_, lean_object* v_sz_1741_, lean_object* v_i_1742_, lean_object* v_b_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
size_t v_sz_boxed_1747_; size_t v_i_boxed_1748_; lean_object* v_res_1749_; 
v_sz_boxed_1747_ = lean_unbox_usize(v_sz_1741_);
lean_dec(v_sz_1741_);
v_i_boxed_1748_ = lean_unbox_usize(v_i_1742_);
lean_dec(v_i_1742_);
v_res_1749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1(v___x_1739_, v_as_1740_, v_sz_boxed_1747_, v_i_boxed_1748_, v_b_1743_, v___y_1744_, v___y_1745_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec_ref(v_as_1740_);
lean_dec_ref(v___x_1739_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotImported(lean_object* v_stx_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v___x_1754_; lean_object* v_env_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; size_t v_sz_1760_; size_t v___x_1761_; lean_object* v___x_1762_; 
v___x_1754_ = lean_st_ref_get(v_a_1752_);
v_env_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc_ref(v_env_1755_);
lean_dec(v___x_1754_);
v___x_1756_ = lean_unsigned_to_nat(1u);
v___x_1757_ = l_Lean_Syntax_getArg(v_stx_1750_, v___x_1756_);
v___x_1758_ = l_Lean_Syntax_getArgs(v___x_1757_);
lean_dec(v___x_1757_);
v___x_1759_ = lean_box(0);
v_sz_1760_ = lean_array_size(v___x_1758_);
v___x_1761_ = ((size_t)0ULL);
v___x_1762_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabAssertNotImported_spec__1(v_env_1755_, v___x_1758_, v_sz_1760_, v___x_1761_, v___x_1759_, v_a_1751_, v_a_1752_);
lean_dec_ref(v___x_1758_);
lean_dec_ref(v_env_1755_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1769_ == 0)
{
lean_object* v_unused_1770_; 
v_unused_1770_ = lean_ctor_get(v___x_1762_, 0);
lean_dec(v_unused_1770_);
v___x_1764_ = v___x_1762_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_dec(v___x_1762_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1759_);
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1759_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
else
{
return v___x_1762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAssertNotImported___boxed(lean_object* v_stx_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lean_Elab_Command_elabAssertNotImported(v_stx_1771_, v_a_1772_, v_a_1773_);
lean_dec(v_a_1773_);
lean_dec_ref(v_a_1772_);
lean_dec(v_stx_1771_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1(){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1789_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1790_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__1));
v___x_1791_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3));
v___x_1792_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAssertNotImported___boxed), 4, 0);
v___x_1793_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1789_, v___x_1790_, v___x_1791_, v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___boxed(lean_object* v_a_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1();
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3(){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1___closed__3));
v___x_1799_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3___closed__0));
v___x_1800_ = l_Lean_addBuiltinDocString(v___x_1798_, v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3___boxed(lean_object* v_a_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3();
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2_spec__3(lean_object* v_msgData_1803_, uint8_t v_severity_1804_, uint8_t v_isSilent_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_Lean_Elab_Command_getRef___redArg(v___y_1806_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; lean_object* v___x_1811_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1809_, 1);
v___x_1811_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3(v_a_1810_, v_msgData_1803_, v_severity_1804_, v_isSilent_1805_, v___y_1806_, v___y_1807_);
lean_dec(v_a_1810_);
return v___x_1811_;
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref(v_msgData_1803_);
v_a_1812_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1809_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1809_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2_spec__3___boxed(lean_object* v_msgData_1820_, lean_object* v_severity_1821_, lean_object* v_isSilent_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
uint8_t v_severity_boxed_1826_; uint8_t v_isSilent_boxed_1827_; lean_object* v_res_1828_; 
v_severity_boxed_1826_ = lean_unbox(v_severity_1821_);
v_isSilent_boxed_1827_ = lean_unbox(v_isSilent_1822_);
v_res_1828_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2_spec__3(v_msgData_1820_, v_severity_boxed_1826_, v_isSilent_boxed_1827_, v___y_1823_, v___y_1824_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Command_elabCheckAssertions_spec__3(lean_object* v_msgData_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
uint8_t v___x_1833_; uint8_t v___x_1834_; lean_object* v___x_1835_; 
v___x_1833_ = 0;
v___x_1834_ = 0;
v___x_1835_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2_spec__3(v_msgData_1829_, v___x_1833_, v___x_1834_, v___y_1830_, v___y_1831_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Command_elabCheckAssertions_spec__3___boxed(lean_object* v_msgData_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lean_logInfo___at___00Lean_Elab_Command_elabCheckAssertions_spec__3(v_msgData_1836_, v___y_1837_, v___y_1838_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2(lean_object* v_msgData_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
uint8_t v___x_1845_; uint8_t v___x_1846_; lean_object* v___x_1847_; 
v___x_1845_ = 1;
v___x_1846_ = 0;
v___x_1847_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2_spec__3(v_msgData_1841_, v___x_1845_, v___x_1846_, v___y_1842_, v___y_1843_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2___boxed(lean_object* v_msgData_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2(v_msgData_1848_, v___y_1849_, v___y_1850_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
return v_res_1852_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0_spec__0(lean_object* v_a_1853_, lean_object* v_as_1854_, size_t v_i_1855_, size_t v_stop_1856_){
_start:
{
uint8_t v___x_1857_; 
v___x_1857_ = lean_usize_dec_eq(v_i_1855_, v_stop_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; uint8_t v___x_1859_; 
v___x_1858_ = lean_array_uget_borrowed(v_as_1854_, v_i_1855_);
v___x_1859_ = lean_name_eq(v_a_1853_, v___x_1858_);
if (v___x_1859_ == 0)
{
size_t v___x_1860_; size_t v___x_1861_; 
v___x_1860_ = ((size_t)1ULL);
v___x_1861_ = lean_usize_add(v_i_1855_, v___x_1860_);
v_i_1855_ = v___x_1861_;
goto _start;
}
else
{
return v___x_1859_;
}
}
else
{
uint8_t v___x_1863_; 
v___x_1863_ = 0;
return v___x_1863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0_spec__0___boxed(lean_object* v_a_1864_, lean_object* v_as_1865_, lean_object* v_i_1866_, lean_object* v_stop_1867_){
_start:
{
size_t v_i_boxed_1868_; size_t v_stop_boxed_1869_; uint8_t v_res_1870_; lean_object* v_r_1871_; 
v_i_boxed_1868_ = lean_unbox_usize(v_i_1866_);
lean_dec(v_i_1866_);
v_stop_boxed_1869_ = lean_unbox_usize(v_stop_1867_);
lean_dec(v_stop_1867_);
v_res_1870_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0_spec__0(v_a_1864_, v_as_1865_, v_i_boxed_1868_, v_stop_boxed_1869_);
lean_dec_ref(v_as_1865_);
lean_dec(v_a_1864_);
v_r_1871_ = lean_box(v_res_1870_);
return v_r_1871_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0(lean_object* v_as_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; uint8_t v___x_1876_; 
v___x_1874_ = lean_unsigned_to_nat(0u);
v___x_1875_ = lean_array_get_size(v_as_1872_);
v___x_1876_ = lean_nat_dec_lt(v___x_1874_, v___x_1875_);
if (v___x_1876_ == 0)
{
return v___x_1876_;
}
else
{
size_t v___x_1877_; size_t v___x_1878_; uint8_t v___x_1879_; 
v___x_1877_ = ((size_t)0ULL);
v___x_1878_ = lean_usize_of_nat(v___x_1875_);
v___x_1879_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0_spec__0(v_a_1873_, v_as_1872_, v___x_1877_, v___x_1878_);
return v___x_1879_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0___boxed(lean_object* v_as_1880_, lean_object* v_a_1881_){
_start:
{
uint8_t v_res_1882_; lean_object* v_r_1883_; 
v_res_1882_ = l_Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0(v_as_1880_, v_a_1881_);
lean_dec(v_a_1881_);
lean_dec_ref(v_as_1880_);
v_r_1883_ = lean_box(v_res_1882_);
return v_r_1883_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__0));
v___x_1886_ = l_Lean_stringToMessageData(v___x_1885_);
return v___x_1886_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__2));
v___x_1889_ = l_Lean_stringToMessageData(v___x_1888_);
return v___x_1889_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__4));
v___x_1892_ = l_Lean_stringToMessageData(v___x_1891_);
return v___x_1892_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__7(void){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1894_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__6));
v___x_1895_ = l_Lean_stringToMessageData(v___x_1894_);
return v___x_1895_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8(void){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1896_ = l_Lean_crossEmoji;
v___x_1897_ = l_Lean_stringToMessageData(v___x_1896_);
return v___x_1897_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9(void){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = l_Lean_checkEmoji;
v___x_1899_ = l_Lean_stringToMessageData(v___x_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg(lean_object* v_tk_1902_, lean_object* v___x_1903_, lean_object* v___x_1904_, lean_object* v_as_1905_, size_t v_sz_1906_, size_t v_i_1907_, lean_object* v_b_1908_){
_start:
{
lean_object* v_a_1911_; uint8_t v___x_1915_; 
v___x_1915_ = lean_usize_dec_lt(v_i_1907_, v_sz_1906_);
if (v___x_1915_ == 0)
{
lean_object* v___x_1916_; 
lean_dec_ref(v___x_1904_);
v___x_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1916_, 0, v_b_1908_);
return v___x_1916_;
}
else
{
lean_object* v_snd_1917_; lean_object* v_fst_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1984_; 
v_snd_1917_ = lean_ctor_get(v_b_1908_, 1);
v_fst_1918_ = lean_ctor_get(v_b_1908_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_b_1908_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1920_ = v_b_1908_;
v_isShared_1921_ = v_isSharedCheck_1984_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_snd_1917_);
lean_inc(v_fst_1918_);
lean_dec(v_b_1908_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1984_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v_snd_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1982_; 
v_snd_1922_ = lean_ctor_get(v_snd_1917_, 1);
v_isSharedCheck_1982_ = !lean_is_exclusive(v_snd_1917_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; 
v_unused_1983_ = lean_ctor_get(v_snd_1917_, 0);
lean_dec(v_unused_1983_);
v___x_1924_ = v_snd_1917_;
v_isShared_1925_ = v_isSharedCheck_1982_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_snd_1922_);
lean_dec(v_snd_1917_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1982_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v_a_1926_; uint8_t v_isDecl_1927_; lean_object* v_givenName_1928_; lean_object* v_modName_1929_; uint8_t v___y_1931_; lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1957_; lean_object* v___y_1958_; uint8_t v___y_1959_; uint8_t v___y_1960_; lean_object* v___y_1966_; uint8_t v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1972_; uint8_t v___y_1973_; lean_object* v___y_1977_; 
v_a_1926_ = lean_array_uget_borrowed(v_as_1905_, v_i_1907_);
v_isDecl_1927_ = lean_ctor_get_uint8(v_a_1926_, sizeof(void*)*2);
v_givenName_1928_ = lean_ctor_get(v_a_1926_, 0);
v_modName_1929_ = lean_ctor_get(v_a_1926_, 1);
if (v_isDecl_1927_ == 0)
{
lean_object* v___x_1980_; 
v___x_1980_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__10));
v___y_1977_ = v___x_1980_;
goto v___jp_1976_;
}
else
{
lean_object* v___x_1981_; 
v___x_1981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__11));
v___y_1977_ = v___x_1981_;
goto v___jp_1976_;
}
v___jp_1930_:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1934_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__1);
lean_inc_ref_n(v___y_1932_, 2);
v___x_1935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1935_, 0, v___y_1932_);
lean_ctor_set(v___x_1935_, 1, v___x_1934_);
lean_inc(v_givenName_1928_);
v___x_1936_ = l_Lean_MessageData_ofName(v_givenName_1928_);
v___x_1937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1935_);
lean_ctor_set(v___x_1937_, 1, v___x_1936_);
v___x_1938_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__3);
v___x_1939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1937_);
lean_ctor_set(v___x_1939_, 1, v___x_1938_);
lean_inc_ref(v___y_1933_);
v___x_1940_ = l_Lean_stringToMessageData(v___y_1933_);
v___x_1941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1939_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__5);
v___x_1943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1941_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
lean_inc(v_modName_1929_);
v___x_1944_ = l_Lean_MessageData_ofName(v_modName_1929_);
v___x_1945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__7);
v___x_1947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1945_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
v___x_1948_ = lean_array_push(v_fst_1918_, v___x_1947_);
v___x_1949_ = lean_box(v___y_1931_);
if (v_isShared_1925_ == 0)
{
lean_ctor_set(v___x_1924_, 1, v___x_1949_);
lean_ctor_set(v___x_1924_, 0, v___y_1932_);
v___x_1951_ = v___x_1924_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v___y_1932_);
lean_ctor_set(v_reuseFailAlloc_1955_, 1, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
lean_object* v___x_1953_; 
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 1, v___x_1951_);
lean_ctor_set(v___x_1920_, 0, v___x_1948_);
v___x_1953_ = v___x_1920_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v___x_1948_);
lean_ctor_set(v_reuseFailAlloc_1954_, 1, v___x_1951_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
v_a_1911_ = v___x_1953_;
goto v___jp_1910_;
}
}
}
v___jp_1956_:
{
uint8_t v___x_1961_; 
v___x_1961_ = l_Lean_Syntax_isNone(v_tk_1902_);
if (v___x_1961_ == 0)
{
if (v___y_1959_ == 0)
{
v___y_1931_ = v___y_1960_;
v___y_1932_ = v___y_1957_;
v___y_1933_ = v___y_1958_;
goto v___jp_1930_;
}
else
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
lean_del_object(v___x_1924_);
lean_del_object(v___x_1920_);
v___x_1962_ = lean_box(v___y_1960_);
lean_inc_ref(v___y_1957_);
v___x_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___y_1957_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
v___x_1964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1964_, 0, v_fst_1918_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
v_a_1911_ = v___x_1964_;
goto v___jp_1910_;
}
}
else
{
v___y_1931_ = v___y_1960_;
v___y_1932_ = v___y_1957_;
v___y_1933_ = v___y_1958_;
goto v___jp_1930_;
}
}
v___jp_1965_:
{
uint8_t v___x_1969_; 
v___x_1969_ = lean_unbox(v_snd_1922_);
if (v___x_1969_ == 0)
{
uint8_t v___x_1970_; 
v___x_1970_ = lean_unbox(v_snd_1922_);
lean_dec(v_snd_1922_);
v___y_1957_ = v___y_1968_;
v___y_1958_ = v___y_1966_;
v___y_1959_ = v___y_1967_;
v___y_1960_ = v___x_1970_;
goto v___jp_1956_;
}
else
{
lean_dec(v_snd_1922_);
v___y_1957_ = v___y_1968_;
v___y_1958_ = v___y_1966_;
v___y_1959_ = v___y_1967_;
v___y_1960_ = v___y_1967_;
goto v___jp_1956_;
}
}
v___jp_1971_:
{
if (v___y_1973_ == 0)
{
lean_object* v___x_1974_; 
v___x_1974_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8);
v___y_1966_ = v___y_1972_;
v___y_1967_ = v___y_1973_;
v___y_1968_ = v___x_1974_;
goto v___jp_1965_;
}
else
{
lean_object* v___x_1975_; 
v___x_1975_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9);
v___y_1966_ = v___y_1972_;
v___y_1967_ = v___y_1973_;
v___y_1968_ = v___x_1975_;
goto v___jp_1965_;
}
}
v___jp_1976_:
{
if (v_isDecl_1927_ == 0)
{
uint8_t v___x_1978_; 
v___x_1978_ = l_Array_contains___at___00Lean_Elab_Command_elabCheckAssertions_spec__0(v___x_1903_, v_givenName_1928_);
v___y_1972_ = v___y_1977_;
v___y_1973_ = v___x_1978_;
goto v___jp_1971_;
}
else
{
uint8_t v___x_1979_; 
lean_inc(v_givenName_1928_);
lean_inc_ref(v___x_1904_);
v___x_1979_ = l_Lean_Environment_contains(v___x_1904_, v_givenName_1928_, v___x_1915_);
v___y_1972_ = v___y_1977_;
v___y_1973_ = v___x_1979_;
goto v___jp_1971_;
}
}
}
}
}
v___jp_1910_:
{
size_t v___x_1912_; size_t v___x_1913_; 
v___x_1912_ = ((size_t)1ULL);
v___x_1913_ = lean_usize_add(v_i_1907_, v___x_1912_);
v_i_1907_ = v___x_1913_;
v_b_1908_ = v_a_1911_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___boxed(lean_object* v_tk_1985_, lean_object* v___x_1986_, lean_object* v___x_1987_, lean_object* v_as_1988_, lean_object* v_sz_1989_, lean_object* v_i_1990_, lean_object* v_b_1991_, lean_object* v___y_1992_){
_start:
{
size_t v_sz_boxed_1993_; size_t v_i_boxed_1994_; lean_object* v_res_1995_; 
v_sz_boxed_1993_ = lean_unbox_usize(v_sz_1989_);
lean_dec(v_sz_1989_);
v_i_boxed_1994_ = lean_unbox_usize(v_i_1990_);
lean_dec(v_i_1990_);
v_res_1995_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg(v_tk_1985_, v___x_1986_, v___x_1987_, v_as_1988_, v_sz_boxed_1993_, v_i_boxed_1994_, v_b_1991_);
lean_dec_ref(v_as_1988_);
lean_dec_ref(v___x_1986_);
lean_dec(v_tk_1985_);
return v_res_1995_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__0(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1996_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabImportPath_spec__1_spec__3___closed__0));
v___x_1997_ = l_Lean_stringToMessageData(v___x_1996_);
return v___x_1997_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__1(void){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1998_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__0, &l_Lean_Elab_Command_elabCheckAssertions___closed__0_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__0);
v___x_1999_ = lean_unsigned_to_nat(1u);
v___x_2000_ = lean_mk_empty_array_with_capacity(v___x_1999_);
v___x_2001_ = lean_array_push(v___x_2000_, v___x_1998_);
return v___x_2001_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__2(void){
_start:
{
uint8_t v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2002_ = 1;
v___x_2003_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__0, &l_Lean_Elab_Command_elabCheckAssertions___closed__0_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__0);
v___x_2004_ = lean_box(v___x_2002_);
v___x_2005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2003_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
return v___x_2005_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__3(void){
_start:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2006_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__2, &l_Lean_Elab_Command_elabCheckAssertions___closed__2_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__2);
v___x_2007_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__1, &l_Lean_Elab_Command_elabCheckAssertions___closed__1_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__1);
v___x_2008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
lean_ctor_set(v___x_2008_, 1, v___x_2006_);
return v___x_2008_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__5(void){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2010_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckAssertions___closed__4));
v___x_2011_ = l_Lean_stringToMessageData(v___x_2010_);
return v___x_2011_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__7(void){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2013_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckAssertions___closed__6));
v___x_2014_ = l_Lean_stringToMessageData(v___x_2013_);
return v___x_2014_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__8(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2015_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__7, &l_Lean_Elab_Command_elabCheckAssertions___closed__7_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__7);
v___x_2016_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__9);
v___x_2017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
lean_ctor_set(v___x_2017_, 1, v___x_2015_);
return v___x_2017_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__10(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckAssertions___closed__9));
v___x_2020_ = l_Lean_stringToMessageData(v___x_2019_);
return v___x_2020_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__11(void){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2021_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__10, &l_Lean_Elab_Command_elabCheckAssertions___closed__10_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__10);
v___x_2022_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg___closed__8);
v___x_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
lean_ctor_set(v___x_2023_, 1, v___x_2021_);
return v___x_2023_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__14(void){
_start:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckAssertions___closed__13));
v___x_2028_ = l_Lean_MessageData_ofFormat(v___x_2027_);
return v___x_2028_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabCheckAssertions___closed__17(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckAssertions___closed__16));
v___x_2033_ = l_Lean_MessageData_ofFormat(v___x_2032_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckAssertions(lean_object* v_stx_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v___x_2041_; lean_object* v_tk_2042_; lean_object* v___x_2043_; lean_object* v_env_2044_; lean_object* v___x_2045_; lean_object* v___x_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; 
v___x_2041_ = lean_unsigned_to_nat(1u);
v_tk_2042_ = l_Lean_Syntax_getArg(v_stx_2034_, v___x_2041_);
v___x_2043_ = lean_st_ref_get(v_a_2036_);
v_env_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc_ref_n(v_env_2044_, 2);
lean_dec(v___x_2043_);
v___x_2045_ = l_Lean_Elab_Command_getSortedAssertExists(v_env_2044_);
v___x_2077_ = lean_array_get_size(v___x_2045_);
v___x_2078_ = lean_unsigned_to_nat(0u);
v___x_2079_ = lean_nat_dec_eq(v___x_2077_, v___x_2078_);
if (v___x_2079_ == 0)
{
goto v___jp_2046_;
}
else
{
uint8_t v___x_2080_; 
v___x_2080_ = l_Lean_Syntax_isNone(v_tk_2042_);
if (v___x_2080_ == 0)
{
goto v___jp_2046_;
}
else
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
lean_dec_ref(v___x_2045_);
lean_dec_ref(v_env_2044_);
lean_dec(v_tk_2042_);
v___x_2081_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__17, &l_Lean_Elab_Command_elabCheckAssertions___closed__17_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__17);
v___x_2082_ = l_Lean_logInfo___at___00Lean_Elab_Command_elabCheckAssertions_spec__3(v___x_2081_, v_a_2035_, v_a_2036_);
return v___x_2082_;
}
}
v___jp_2038_:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = lean_box(0);
v___x_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
return v___x_2040_;
}
v___jp_2046_:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; size_t v_sz_2049_; size_t v___x_2050_; lean_object* v___x_2051_; 
v___x_2047_ = l_Lean_Environment_allImportedModuleNames(v_env_2044_);
v___x_2048_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__3, &l_Lean_Elab_Command_elabCheckAssertions___closed__3_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__3);
v_sz_2049_ = lean_array_size(v___x_2045_);
v___x_2050_ = ((size_t)0ULL);
v___x_2051_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg(v_tk_2042_, v___x_2047_, v_env_2044_, v___x_2045_, v_sz_2049_, v___x_2050_, v___x_2048_);
lean_dec_ref(v___x_2045_);
lean_dec_ref(v___x_2047_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v_snd_2053_; lean_object* v_fst_2054_; lean_object* v_snd_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc(v_a_2052_);
lean_dec_ref_known(v___x_2051_, 1);
v_snd_2053_ = lean_ctor_get(v_a_2052_, 1);
lean_inc(v_snd_2053_);
v_fst_2054_ = lean_ctor_get(v_a_2052_, 0);
lean_inc(v_fst_2054_);
lean_dec(v_a_2052_);
v_snd_2055_ = lean_ctor_get(v_snd_2053_, 1);
lean_inc(v_snd_2055_);
lean_dec(v_snd_2053_);
v___x_2056_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__5, &l_Lean_Elab_Command_elabCheckAssertions___closed__5_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__5);
v___x_2057_ = lean_array_push(v_fst_2054_, v___x_2056_);
v___x_2058_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__8, &l_Lean_Elab_Command_elabCheckAssertions___closed__8_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__8);
v___x_2059_ = lean_array_push(v___x_2057_, v___x_2058_);
v___x_2060_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__11, &l_Lean_Elab_Command_elabCheckAssertions___closed__11_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__11);
v___x_2061_ = lean_array_push(v___x_2059_, v___x_2060_);
v___x_2062_ = lean_array_to_list(v___x_2061_);
v___x_2063_ = lean_obj_once(&l_Lean_Elab_Command_elabCheckAssertions___closed__14, &l_Lean_Elab_Command_elabCheckAssertions___closed__14_once, _init_l_Lean_Elab_Command_elabCheckAssertions___closed__14);
v___x_2064_ = l_Lean_MessageData_joinSep(v___x_2062_, v___x_2063_);
v___x_2065_ = lean_unbox(v_snd_2055_);
lean_dec(v_snd_2055_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; 
lean_dec(v_tk_2042_);
v___x_2066_ = l_Lean_logWarning___at___00Lean_Elab_Command_elabCheckAssertions_spec__2(v___x_2064_, v_a_2035_, v_a_2036_);
return v___x_2066_;
}
else
{
uint8_t v___x_2067_; 
v___x_2067_ = l_Lean_Syntax_isNone(v_tk_2042_);
lean_dec(v_tk_2042_);
if (v___x_2067_ == 0)
{
lean_dec_ref(v___x_2064_);
goto v___jp_2038_;
}
else
{
lean_object* v___x_2068_; 
v___x_2068_ = l_Lean_logInfo___at___00Lean_Elab_Command_elabCheckAssertions_spec__3(v___x_2064_, v_a_2035_, v_a_2036_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_dec_ref_known(v___x_2068_, 1);
goto v___jp_2038_;
}
else
{
return v___x_2068_;
}
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec(v_tk_2042_);
v_a_2069_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2051_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2051_);
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
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckAssertions___boxed(lean_object* v_stx_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_Elab_Command_elabCheckAssertions(v_stx_2083_, v_a_2084_, v_a_2085_);
lean_dec(v_a_2085_);
lean_dec_ref(v_a_2084_);
lean_dec(v_stx_2083_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1(lean_object* v_tk_2088_, lean_object* v___x_2089_, lean_object* v___x_2090_, lean_object* v_as_2091_, size_t v_sz_2092_, size_t v_i_2093_, lean_object* v_b_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___redArg(v_tk_2088_, v___x_2089_, v___x_2090_, v_as_2091_, v_sz_2092_, v_i_2093_, v_b_2094_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1___boxed(lean_object* v_tk_2099_, lean_object* v___x_2100_, lean_object* v___x_2101_, lean_object* v_as_2102_, lean_object* v_sz_2103_, lean_object* v_i_2104_, lean_object* v_b_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
size_t v_sz_boxed_2109_; size_t v_i_boxed_2110_; lean_object* v_res_2111_; 
v_sz_boxed_2109_ = lean_unbox_usize(v_sz_2103_);
lean_dec(v_sz_2103_);
v_i_boxed_2110_ = lean_unbox_usize(v_i_2104_);
lean_dec(v_i_2104_);
v_res_2111_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabCheckAssertions_spec__1(v_tk_2099_, v___x_2100_, v___x_2101_, v_as_2102_, v_sz_boxed_2109_, v_i_boxed_2110_, v_b_2105_, v___y_2106_, v___y_2107_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec_ref(v_as_2102_);
lean_dec_ref(v___x_2100_);
lean_dec(v_tk_2099_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1(){
_start:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2125_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_2126_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__1));
v___x_2127_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3));
v___x_2128_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCheckAssertions___boxed), 4, 0);
v___x_2129_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2125_, v___x_2126_, v___x_2127_, v___x_2128_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___boxed(lean_object* v_a_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1();
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3(){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2134_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1___closed__3));
v___x_2135_ = ((lean_object*)(l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3___closed__0));
v___x_2136_ = l_Lean_addBuiltinDocString(v___x_2134_, v___x_2135_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3___boxed(lean_object* v_a_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3();
return v_res_2138_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_AssertExists(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_AssertExists_2003177635____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Command_assertExistsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Command_assertExistsExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabImportPath___regBuiltin_Lean_Elab_Command_elabImportPath_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotExists___regBuiltin_Lean_Elab_Command_elabAssertNotExists_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabAssertNotImported___regBuiltin_Lean_Elab_Command_elabAssertNotImported_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AssertExists_0__Lean_Elab_Command_elabCheckAssertions___regBuiltin_Lean_Elab_Command_elabCheckAssertions_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_AssertExists(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_AssertExists(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_AssertExists(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_AssertExists(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_AssertExists(builtin);
}
#ifdef __cplusplus
}
#endif
