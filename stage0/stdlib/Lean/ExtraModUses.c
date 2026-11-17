// Lean compiler output
// Module: Lean.ExtraModUses
// Imports: public import Lean.CoreM public import Lean.Compiler.MetaAttr import Init.Data.Range.Polymorphic.Stream
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqIndirectModUse_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqIndirectModUse_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqIndirectModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqIndirectModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqIndirectModUse___closed__0 = (const lean_object*)&l_Lean_instBEqIndirectModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqIndirectModUse = (const lean_object*)&l_Lean_instBEqIndirectModUse___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "indirectModUseExt"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 173, 36, 115, 222, 236, 117, 108)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_indirectModUseExt;
static lean_once_cell_t l_Lean_getIndirectModUses___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getIndirectModUses___closed__0;
static lean_once_cell_t l_Lean_getIndirectModUses___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getIndirectModUses___closed__1;
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_recordIndirectModUse___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "recording indirect mod use of `"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_recordIndirectModUse___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "` ("};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_recordIndirectModUse___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__3;
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__4 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__5___closed__4_value;
static lean_once_cell_t l_Lean_recordIndirectModUse___redArg___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__5;
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_recordIndirectModUse___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__6___closed__1 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqExtraModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqExtraModUse___closed__0 = (const lean_object*)&l_Lean_instBEqExtraModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqExtraModUse = (const lean_object*)&l_Lean_instBEqExtraModUse___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableExtraModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableExtraModUse___closed__0 = (const lean_object*)&l_Lean_instHashableExtraModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableExtraModUse = (const lean_object*)&l_Lean_instHashableExtraModUse___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprExtraModUse_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "isExported"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isMeta"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__14_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__15 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__17;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__18 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__15_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__19 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprExtraModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprExtraModUse_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprExtraModUse___closed__0 = (const lean_object*)&l_Lean_instReprExtraModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprExtraModUse = (const lean_object*)&l_Lean_instReprExtraModUse___closed__0_value;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1(lean_object*);
static const lean_array_object l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ExtraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 69, 125, 143, 117, 200, 37, 103)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(163, 125, 98, 145, 27, 242, 139, 173)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(238, 80, 45, 80, 85, 236, 79, 117)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(66, 241, 212, 4, 163, 62, 5, 148)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
static lean_once_cell_t l_Lean_getExtraModUses___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getExtraModUses___closed__0;
static lean_once_cell_t l_Lean_getExtraModUses___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getExtraModUses___closed__1;
LEAN_EXPORT lean_object* l_Lean_getExtraModUses(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExtraModUses___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_copyExtraModUses(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__1;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__3;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__4_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__6_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__7;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__10_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__11_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__12_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5___boxed(lean_object**);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___redArg___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___redArg___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___redArg___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "isExtraRevModUseExt"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 81, 220, 33, 30, 172, 4, 212)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt;
static const lean_ctor_object l_Lean_isExtraRevModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_isExtraRevModUse___closed__0 = (const lean_object*)&l_Lean_isExtraRevModUse___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_isExtraRevModUse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isExtraRevModUse___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "recording extra reverse use of current module"};
static const lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(131, 211, 254, 26, 237, 216, 211, 30)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 203, 147, 114, 124, 159, 234, 194)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 198, 100, 78, 72, 145, 180, 196)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(235, 126, 81, 65, 191, 6, 222, 76)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqIndirectModUse_beq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_kind_3_; lean_object* v_declName_4_; lean_object* v_kind_5_; lean_object* v_declName_6_; uint8_t v___x_7_; 
v_kind_3_ = lean_ctor_get(v_x_1_, 0);
v_declName_4_ = lean_ctor_get(v_x_1_, 1);
v_kind_5_ = lean_ctor_get(v_x_2_, 0);
v_declName_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_string_dec_eq(v_kind_3_, v_kind_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_name_eq(v_declName_4_, v_declName_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqIndirectModUse_beq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_instBEqIndirectModUse_beq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object* v_es_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_array_mk(v_es_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object* v_s_17_, lean_object* v_x_18_){
_start:
{
lean_inc_ref(v_s_17_);
return v_s_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object* v_s_19_, lean_object* v_x_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(v_s_19_, v_x_20_);
lean_dec_ref(v_x_20_);
lean_dec_ref(v_s_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
if (lean_obj_tag(v_x_23_) == 0)
{
return v_x_22_;
}
else
{
lean_object* v_key_24_; lean_object* v_value_25_; lean_object* v_tail_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_52_; 
v_key_24_ = lean_ctor_get(v_x_23_, 0);
v_value_25_ = lean_ctor_get(v_x_23_, 1);
v_tail_26_ = lean_ctor_get(v_x_23_, 2);
v_isSharedCheck_52_ = !lean_is_exclusive(v_x_23_);
if (v_isSharedCheck_52_ == 0)
{
v___x_28_ = v_x_23_;
v_isShared_29_ = v_isSharedCheck_52_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_tail_26_);
lean_inc(v_value_25_);
lean_inc(v_key_24_);
lean_dec(v_x_23_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_52_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; uint64_t v___y_32_; 
v___x_30_ = lean_array_get_size(v_x_22_);
if (lean_obj_tag(v_key_24_) == 0)
{
uint64_t v___x_50_; 
v___x_50_ = 1723ULL;
v___y_32_ = v___x_50_;
goto v___jp_31_;
}
else
{
uint64_t v_hash_51_; 
v_hash_51_ = lean_ctor_get_uint64(v_key_24_, sizeof(void*)*2);
v___y_32_ = v_hash_51_;
goto v___jp_31_;
}
v___jp_31_:
{
uint64_t v___x_33_; uint64_t v___x_34_; uint64_t v_fold_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; size_t v___x_39_; size_t v___x_40_; size_t v___x_41_; size_t v___x_42_; size_t v___x_43_; lean_object* v___x_44_; lean_object* v___x_46_; 
v___x_33_ = 32ULL;
v___x_34_ = lean_uint64_shift_right(v___y_32_, v___x_33_);
v_fold_35_ = lean_uint64_xor(v___y_32_, v___x_34_);
v___x_36_ = 16ULL;
v___x_37_ = lean_uint64_shift_right(v_fold_35_, v___x_36_);
v___x_38_ = lean_uint64_xor(v_fold_35_, v___x_37_);
v___x_39_ = lean_uint64_to_usize(v___x_38_);
v___x_40_ = lean_usize_of_nat(v___x_30_);
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_sub(v___x_40_, v___x_41_);
v___x_43_ = lean_usize_land(v___x_39_, v___x_42_);
v___x_44_ = lean_array_uget_borrowed(v_x_22_, v___x_43_);
lean_inc(v___x_44_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 2, v___x_44_);
v___x_46_ = v___x_28_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_key_24_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v_value_25_);
lean_ctor_set(v_reuseFailAlloc_49_, 2, v___x_44_);
v___x_46_ = v_reuseFailAlloc_49_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_47_; 
v___x_47_ = lean_array_uset(v_x_22_, v___x_43_, v___x_46_);
v_x_22_ = v___x_47_;
v_x_23_ = v_tail_26_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object* v_i_53_, lean_object* v_source_54_, lean_object* v_target_55_){
_start:
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = lean_array_get_size(v_source_54_);
v___x_57_ = lean_nat_dec_lt(v_i_53_, v___x_56_);
if (v___x_57_ == 0)
{
lean_dec_ref(v_source_54_);
lean_dec(v_i_53_);
return v_target_55_;
}
else
{
lean_object* v_es_58_; lean_object* v___x_59_; lean_object* v_source_60_; lean_object* v_target_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_es_58_ = lean_array_fget(v_source_54_, v_i_53_);
v___x_59_ = lean_box(0);
v_source_60_ = lean_array_fset(v_source_54_, v_i_53_, v___x_59_);
v_target_61_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(v_target_55_, v_es_58_);
v___x_62_ = lean_unsigned_to_nat(1u);
v___x_63_ = lean_nat_add(v_i_53_, v___x_62_);
lean_dec(v_i_53_);
v_i_53_ = v___x_63_;
v_source_54_ = v_source_60_;
v_target_55_ = v_target_61_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_data_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v_nbuckets_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_66_ = lean_array_get_size(v_data_65_);
v___x_67_ = lean_unsigned_to_nat(2u);
v_nbuckets_68_ = lean_nat_mul(v___x_66_, v___x_67_);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_box(0);
v___x_71_ = lean_mk_array(v_nbuckets_68_, v___x_70_);
v___x_72_ = lean_array_propagate_mark(v_data_65_, v___x_71_);
v___x_73_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v___x_69_, v_data_65_, v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(lean_object* v_val_76_, lean_object* v_x_77_){
_start:
{
lean_object* v___y_79_; 
if (lean_obj_tag(v_x_77_) == 0)
{
lean_object* v___x_82_; 
v___x_82_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0));
v___y_79_ = v___x_82_;
goto v___jp_78_;
}
else
{
lean_object* v_val_83_; 
v_val_83_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_val_83_);
lean_dec_ref_known(v_x_77_, 1);
v___y_79_ = v_val_83_;
goto v___jp_78_;
}
v___jp_78_:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = lean_array_push(v___y_79_, v_val_76_);
v___x_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_val_84_, lean_object* v_a_85_, lean_object* v_x_86_){
_start:
{
if (lean_obj_tag(v_x_86_) == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v_val_89_; lean_object* v___x_90_; 
v___x_87_ = lean_box(0);
v___x_88_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(v_val_84_, v___x_87_);
v_val_89_ = lean_ctor_get(v___x_88_, 0);
lean_inc(v_val_89_);
lean_dec(v___x_88_);
v___x_90_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_90_, 0, v_a_85_);
lean_ctor_set(v___x_90_, 1, v_val_89_);
lean_ctor_set(v___x_90_, 2, v_x_86_);
return v___x_90_;
}
else
{
lean_object* v_key_91_; lean_object* v_value_92_; lean_object* v_tail_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_108_; 
v_key_91_ = lean_ctor_get(v_x_86_, 0);
v_value_92_ = lean_ctor_get(v_x_86_, 1);
v_tail_93_ = lean_ctor_get(v_x_86_, 2);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_86_);
if (v_isSharedCheck_108_ == 0)
{
v___x_95_ = v_x_86_;
v_isShared_96_ = v_isSharedCheck_108_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_tail_93_);
lean_inc(v_value_92_);
lean_inc(v_key_91_);
lean_dec(v_x_86_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_108_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
uint8_t v___x_97_; 
v___x_97_ = lean_name_eq(v_key_91_, v_a_85_);
if (v___x_97_ == 0)
{
lean_object* v_tail_98_; lean_object* v___x_100_; 
v_tail_98_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(v_val_84_, v_a_85_, v_tail_93_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 2, v_tail_98_);
v___x_100_ = v___x_95_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_key_91_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_value_92_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v_tail_98_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_val_104_; lean_object* v___x_106_; 
lean_dec(v_key_91_);
v___x_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_102_, 0, v_value_92_);
v___x_103_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(v_val_84_, v___x_102_);
v_val_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_val_104_);
lean_dec(v___x_103_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 1, v_val_104_);
lean_ctor_set(v___x_95_, 0, v_a_85_);
v___x_106_ = v___x_95_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_85_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_val_104_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_tail_93_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_a_109_, lean_object* v_x_110_){
_start:
{
if (lean_obj_tag(v_x_110_) == 0)
{
uint8_t v___x_111_; 
v___x_111_ = 0;
return v___x_111_;
}
else
{
lean_object* v_key_112_; lean_object* v_tail_113_; uint8_t v___x_114_; 
v_key_112_ = lean_ctor_get(v_x_110_, 0);
v_tail_113_ = lean_ctor_get(v_x_110_, 2);
v___x_114_ = lean_name_eq(v_key_112_, v_a_109_);
if (v___x_114_ == 0)
{
v_x_110_ = v_tail_113_;
goto _start;
}
else
{
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_a_116_, lean_object* v_x_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_116_, v_x_117_);
lean_dec(v_x_117_);
lean_dec(v_a_116_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0(lean_object* v_val_120_, lean_object* v_m_121_, lean_object* v_a_122_){
_start:
{
lean_object* v___y_124_; lean_object* v___y_125_; size_t v___y_126_; lean_object* v___y_127_; lean_object* v_size_130_; lean_object* v_buckets_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_178_; 
v_size_130_ = lean_ctor_get(v_m_121_, 0);
v_buckets_131_ = lean_ctor_get(v_m_121_, 1);
v_isSharedCheck_178_ = !lean_is_exclusive(v_m_121_);
if (v_isSharedCheck_178_ == 0)
{
v___x_133_ = v_m_121_;
v_isShared_134_ = v_isSharedCheck_178_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_buckets_131_);
lean_inc(v_size_130_);
lean_dec(v_m_121_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_178_;
goto v_resetjp_132_;
}
v___jp_123_:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_array_uset(v___y_124_, v___y_126_, v___y_125_);
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v___y_127_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
return v___x_129_;
}
v_resetjp_132_:
{
lean_object* v___x_135_; uint64_t v___y_137_; 
v___x_135_ = lean_array_get_size(v_buckets_131_);
if (lean_obj_tag(v_a_122_) == 0)
{
uint64_t v___x_176_; 
v___x_176_ = 1723ULL;
v___y_137_ = v___x_176_;
goto v___jp_136_;
}
else
{
uint64_t v_hash_177_; 
v_hash_177_ = lean_ctor_get_uint64(v_a_122_, sizeof(void*)*2);
v___y_137_ = v_hash_177_;
goto v___jp_136_;
}
v___jp_136_:
{
uint64_t v___x_138_; uint64_t v___x_139_; uint64_t v_fold_140_; uint64_t v___x_141_; uint64_t v___x_142_; uint64_t v___x_143_; size_t v___x_144_; size_t v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; lean_object* v_bkt_149_; uint8_t v___x_150_; 
v___x_138_ = 32ULL;
v___x_139_ = lean_uint64_shift_right(v___y_137_, v___x_138_);
v_fold_140_ = lean_uint64_xor(v___y_137_, v___x_139_);
v___x_141_ = 16ULL;
v___x_142_ = lean_uint64_shift_right(v_fold_140_, v___x_141_);
v___x_143_ = lean_uint64_xor(v_fold_140_, v___x_142_);
v___x_144_ = lean_uint64_to_usize(v___x_143_);
v___x_145_ = lean_usize_of_nat(v___x_135_);
v___x_146_ = ((size_t)1ULL);
v___x_147_ = lean_usize_sub(v___x_145_, v___x_146_);
v___x_148_ = lean_usize_land(v___x_144_, v___x_147_);
v_bkt_149_ = lean_array_uget_borrowed(v_buckets_131_, v___x_148_);
v___x_150_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_122_, v_bkt_149_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_size_x27_154_; lean_object* v___x_155_; lean_object* v_buckets_x27_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_151_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0));
v___x_152_ = lean_array_push(v___x_151_, v_val_120_);
v___x_153_ = lean_unsigned_to_nat(1u);
v_size_x27_154_ = lean_nat_add(v_size_130_, v___x_153_);
lean_dec(v_size_130_);
lean_inc(v_bkt_149_);
v___x_155_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_155_, 0, v_a_122_);
lean_ctor_set(v___x_155_, 1, v___x_152_);
lean_ctor_set(v___x_155_, 2, v_bkt_149_);
v_buckets_x27_156_ = lean_array_uset(v_buckets_131_, v___x_148_, v___x_155_);
v___x_157_ = lean_unsigned_to_nat(4u);
v___x_158_ = lean_nat_mul(v_size_x27_154_, v___x_157_);
v___x_159_ = lean_unsigned_to_nat(3u);
v___x_160_ = lean_nat_div(v___x_158_, v___x_159_);
lean_dec(v___x_158_);
v___x_161_ = lean_array_get_size(v_buckets_x27_156_);
v___x_162_ = lean_nat_dec_le(v___x_160_, v___x_161_);
lean_dec(v___x_160_);
if (v___x_162_ == 0)
{
lean_object* v_val_163_; lean_object* v___x_165_; 
v_val_163_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(v_buckets_x27_156_);
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 1, v_val_163_);
lean_ctor_set(v___x_133_, 0, v_size_x27_154_);
v___x_165_ = v___x_133_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_size_x27_154_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_val_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
else
{
lean_object* v___x_168_; 
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 1, v_buckets_x27_156_);
lean_ctor_set(v___x_133_, 0, v_size_x27_154_);
v___x_168_ = v___x_133_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_size_x27_154_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v_buckets_x27_156_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
else
{
lean_object* v___x_170_; lean_object* v_buckets_x27_171_; lean_object* v_bkt_x27_172_; uint8_t v___x_173_; 
lean_inc(v_bkt_149_);
lean_del_object(v___x_133_);
v___x_170_ = lean_box(0);
v_buckets_x27_171_ = lean_array_uset(v_buckets_131_, v___x_148_, v___x_170_);
lean_inc(v_a_122_);
v_bkt_x27_172_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(v_val_120_, v_a_122_, v_bkt_149_);
v___x_173_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_122_, v_bkt_x27_172_);
lean_dec(v_a_122_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(1u);
v___x_175_ = lean_nat_sub(v_size_130_, v___x_174_);
lean_dec(v_size_130_);
v___y_124_ = v_buckets_x27_171_;
v___y_125_ = v_bkt_x27_172_;
v___y_126_ = v___x_148_;
v___y_127_ = v___x_175_;
goto v___jp_123_;
}
else
{
v___y_124_ = v_buckets_x27_171_;
v___y_125_ = v_bkt_x27_172_;
v___y_126_ = v___x_148_;
v___y_127_ = v_size_130_;
goto v___jp_123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(lean_object* v_val_179_, lean_object* v_as_180_, size_t v_sz_181_, size_t v_i_182_, lean_object* v_b_183_){
_start:
{
uint8_t v___x_184_; 
v___x_184_ = lean_usize_dec_lt(v_i_182_, v_sz_181_);
if (v___x_184_ == 0)
{
lean_dec(v_val_179_);
return v_b_183_;
}
else
{
lean_object* v_a_185_; lean_object* v_declName_186_; lean_object* v___x_187_; size_t v___x_188_; size_t v___x_189_; 
v_a_185_ = lean_array_uget_borrowed(v_as_180_, v_i_182_);
v_declName_186_ = lean_ctor_get(v_a_185_, 1);
lean_inc(v_declName_186_);
lean_inc(v_val_179_);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0(v_val_179_, v_b_183_, v_declName_186_);
v___x_188_ = ((size_t)1ULL);
v___x_189_ = lean_usize_add(v_i_182_, v___x_188_);
v_i_182_ = v___x_189_;
v_b_183_ = v___x_187_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1___boxed(lean_object* v_val_191_, lean_object* v_as_192_, lean_object* v_sz_193_, lean_object* v_i_194_, lean_object* v_b_195_){
_start:
{
size_t v_sz_boxed_196_; size_t v_i_boxed_197_; lean_object* v_res_198_; 
v_sz_boxed_196_ = lean_unbox_usize(v_sz_193_);
lean_dec(v_sz_193_);
v_i_boxed_197_ = lean_unbox_usize(v_i_194_);
lean_dec(v_i_194_);
v_res_198_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(v_val_191_, v_as_192_, v_sz_boxed_196_, v_i_boxed_197_, v_b_195_);
lean_dec_ref(v_as_192_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(lean_object* v_as_199_, size_t v_sz_200_, size_t v_i_201_, lean_object* v_b_202_){
_start:
{
uint8_t v___x_203_; 
v___x_203_ = lean_usize_dec_lt(v_i_201_, v_sz_200_);
if (v___x_203_ == 0)
{
return v_b_202_;
}
else
{
lean_object* v_snd_204_; 
v_snd_204_ = lean_ctor_get(v_b_202_, 1);
lean_inc(v_snd_204_);
if (lean_obj_tag(v_snd_204_) == 0)
{
lean_object* v_fst_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
v_fst_205_ = lean_ctor_get(v_b_202_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v_b_202_);
if (v_isSharedCheck_212_ == 0)
{
lean_object* v_unused_213_; 
v_unused_213_ = lean_ctor_get(v_b_202_, 1);
lean_dec(v_unused_213_);
v___x_207_ = v_b_202_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_fst_205_);
lean_dec(v_b_202_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_fst_205_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_snd_204_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
else
{
lean_object* v_fst_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_238_; 
v_fst_214_ = lean_ctor_get(v_b_202_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v_b_202_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; 
v_unused_239_ = lean_ctor_get(v_b_202_, 1);
lean_dec(v_unused_239_);
v___x_216_ = v_b_202_;
v_isShared_217_ = v_isSharedCheck_238_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_fst_214_);
lean_dec(v_b_202_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_238_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v_val_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_237_; 
v_val_218_ = lean_ctor_get(v_snd_204_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v_snd_204_);
if (v_isSharedCheck_237_ == 0)
{
v___x_220_ = v_snd_204_;
v_isShared_221_ = v_isSharedCheck_237_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_val_218_);
lean_dec(v_snd_204_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_237_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v_a_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_226_; 
v_a_222_ = lean_array_uget_borrowed(v_as_199_, v_i_201_);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_nat_add(v_val_218_, v___x_223_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_224_);
v___x_226_ = v___x_220_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_224_);
v___x_226_ = v_reuseFailAlloc_236_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
size_t v_sz_227_; size_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_231_; 
v_sz_227_ = lean_array_size(v_a_222_);
v___x_228_ = ((size_t)0ULL);
v___x_229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(v_val_218_, v_a_222_, v_sz_227_, v___x_228_, v_fst_214_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 1, v___x_226_);
lean_ctor_set(v___x_216_, 0, v___x_229_);
v___x_231_ = v___x_216_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___x_226_);
v___x_231_ = v_reuseFailAlloc_235_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
size_t v___x_232_; size_t v___x_233_; 
v___x_232_ = ((size_t)1ULL);
v___x_233_ = lean_usize_add(v_i_201_, v___x_232_);
v_i_201_ = v___x_233_;
v_b_202_ = v___x_231_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2___boxed(lean_object* v_as_240_, lean_object* v_sz_241_, lean_object* v_i_242_, lean_object* v_b_243_){
_start:
{
size_t v_sz_boxed_244_; size_t v_i_boxed_245_; lean_object* v_res_246_; 
v_sz_boxed_244_ = lean_unbox_usize(v_sz_241_);
lean_dec(v_sz_241_);
v_i_boxed_245_ = lean_unbox_usize(v_i_242_);
lean_dec(v_i_242_);
v_res_246_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(v_as_240_, v_sz_boxed_244_, v_i_boxed_245_, v_b_243_);
lean_dec_ref(v_as_240_);
return v_res_246_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_box(0);
v___x_248_ = lean_unsigned_to_nat(16u);
v___x_249_ = lean_mk_array(v___x_248_, v___x_247_);
return v___x_249_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v_s_252_; 
v___x_250_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_);
v___x_251_ = lean_unsigned_to_nat(0u);
v_s_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_252_, 0, v___x_251_);
lean_ctor_set(v_s_252_, 1, v___x_250_);
return v_s_252_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_255_; lean_object* v_s_256_; lean_object* v___x_257_; 
v___x_255_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_));
v_s_256_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_s_256_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object* v_es_258_){
_start:
{
lean_object* v___x_259_; size_t v_sz_260_; size_t v___x_261_; lean_object* v___x_262_; lean_object* v_fst_263_; 
v___x_259_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_);
v_sz_260_ = lean_array_size(v_es_258_);
v___x_261_ = ((size_t)0ULL);
v___x_262_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(v_es_258_, v_sz_260_, v___x_261_, v___x_259_);
v_fst_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_fst_263_);
lean_dec_ref(v___x_262_);
return v_fst_263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object* v_es_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(v_es_264_);
lean_dec_ref(v_es_264_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_));
v___x_284_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_();
return v_res_286_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_287_, lean_object* v_a_288_, lean_object* v_x_289_){
_start:
{
uint8_t v___x_290_; 
v___x_290_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_288_, v_x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_291_, lean_object* v_a_292_, lean_object* v_x_293_){
_start:
{
uint8_t v_res_294_; lean_object* v_r_295_; 
v_res_294_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_291_, v_a_292_, v_x_293_);
lean_dec(v_x_293_);
lean_dec(v_a_292_);
v_r_295_ = lean_box(v_res_294_);
return v_r_295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b2_296_, lean_object* v_data_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(v_data_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object* v_00_u03b2_299_, lean_object* v_i_300_, lean_object* v_source_301_, lean_object* v_target_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_i_300_, v_source_301_, v_target_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_304_, lean_object* v_x_305_, lean_object* v_x_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(v_x_305_, v_x_306_);
return v___x_307_;
}
}
static lean_object* _init_l_Lean_getIndirectModUses___closed__0(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Std_HashMap_instInhabited___redArg();
return v___x_308_;
}
}
static lean_object* _init_l_Lean_getIndirectModUses___closed__1(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__0, &l_Lean_getIndirectModUses___closed__0_once, _init_l_Lean_getIndirectModUses___closed__0);
v___x_310_ = lean_box(0);
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v___x_309_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses(lean_object* v_env_312_, lean_object* v_modIdx_313_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; lean_object* v___x_317_; 
v___x_314_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__1, &l_Lean_getIndirectModUses___closed__1_once, _init_l_Lean_getIndirectModUses___closed__1);
v___x_315_ = l_Lean_indirectModUseExt;
v___x_316_ = 0;
v___x_317_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_314_, v___x_315_, v_env_312_, v_modIdx_313_, v___x_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses___boxed(lean_object* v_env_318_, lean_object* v_modIdx_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_getIndirectModUses(v_env_318_, v_modIdx_319_);
lean_dec(v_modIdx_319_);
lean_dec_ref(v_env_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__0(lean_object* v_addEntryFn_321_, lean_object* v___x_322_, lean_object* v_s_323_){
_start:
{
lean_object* v_importedEntries_324_; lean_object* v_state_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_333_; 
v_importedEntries_324_ = lean_ctor_get(v_s_323_, 0);
v_state_325_ = lean_ctor_get(v_s_323_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v_s_323_);
if (v_isSharedCheck_333_ == 0)
{
v___x_327_ = v_s_323_;
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_state_325_);
lean_inc(v_importedEntries_324_);
lean_dec(v_s_323_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v_state_329_; lean_object* v___x_331_; 
v_state_329_ = lean_apply_2(v_addEntryFn_321_, v_state_325_, v___x_322_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_state_329_);
v___x_331_ = v___x_327_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_importedEntries_324_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_state_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__1(lean_object* v_kind_334_, lean_object* v_declName_335_, lean_object* v_x_336_){
_start:
{
lean_object* v___x_337_; lean_object* v_toEnvExtension_338_; lean_object* v_addEntryFn_339_; lean_object* v_asyncMode_340_; uint8_t v_logWrites_341_; lean_object* v___x_342_; lean_object* v___f_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_337_ = l_Lean_indirectModUseExt;
v_toEnvExtension_338_ = lean_ctor_get(v___x_337_, 0);
v_addEntryFn_339_ = lean_ctor_get(v___x_337_, 3);
v_asyncMode_340_ = lean_ctor_get(v_toEnvExtension_338_, 2);
v_logWrites_341_ = lean_ctor_get_uint8(v_toEnvExtension_338_, sizeof(void*)*6);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v_kind_334_);
lean_ctor_set(v___x_342_, 1, v_declName_335_);
lean_inc(v_addEntryFn_339_);
v___f_343_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__0), 3, 2);
lean_closure_set(v___f_343_, 0, v_addEntryFn_339_);
lean_closure_set(v___f_343_, 1, v___x_342_);
v___x_344_ = lean_box(0);
v___x_345_ = 1;
if (v_logWrites_341_ == 0)
{
lean_object* v___x_346_; 
lean_inc_ref(v_toEnvExtension_338_);
v___x_346_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_338_, v_x_336_, v___f_343_, v_asyncMode_340_, v___x_344_, v___x_345_);
return v___x_346_;
}
else
{
lean_object* v___x_347_; lean_object* v___x_348_; 
lean_inc_ref_n(v_toEnvExtension_338_, 2);
v___x_347_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_338_, v_x_336_);
lean_dec_ref(v_x_336_);
v___x_348_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_338_, v___x_347_, v___f_343_, v_asyncMode_340_, v___x_344_, v___x_345_);
return v___x_348_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__2(lean_object* v_modifyEnv_349_, lean_object* v___f_350_, lean_object* v_____r_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_apply_1(v_modifyEnv_349_, v___f_350_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__3(lean_object* v_toPure_356_, lean_object* v_cls_357_, lean_object* v_____do__lift_358_, lean_object* v_____do__lift_359_){
_start:
{
uint8_t v_hasTrace_360_; 
v_hasTrace_360_ = lean_ctor_get_uint8(v_____do__lift_359_, sizeof(void*)*1);
if (v_hasTrace_360_ == 0)
{
lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec(v_cls_357_);
v___x_361_ = lean_box(v_hasTrace_360_);
v___x_362_ = lean_apply_2(v_toPure_356_, lean_box(0), v___x_361_);
return v___x_362_;
}
else
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_363_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__3___closed__1));
v___x_364_ = l_Lean_Name_append(v___x_363_, v_cls_357_);
v___x_365_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_358_, v_____do__lift_359_, v___x_364_);
lean_dec(v___x_364_);
v___x_366_ = lean_box(v___x_365_);
v___x_367_ = lean_apply_2(v_toPure_356_, lean_box(0), v___x_366_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__3___boxed(lean_object* v_toPure_368_, lean_object* v_cls_369_, lean_object* v_____do__lift_370_, lean_object* v_____do__lift_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_recordIndirectModUse___redArg___lam__3(v_toPure_368_, v_cls_369_, v_____do__lift_370_, v_____do__lift_371_);
lean_dec_ref(v_____do__lift_371_);
lean_dec_ref(v_____do__lift_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__4(lean_object* v_inst_373_, lean_object* v_toPure_374_, lean_object* v_cls_375_, lean_object* v_toBind_376_, lean_object* v_____do__lift_377_){
_start:
{
lean_object* v_getOptionsUnrestricted_378_; lean_object* v___f_379_; lean_object* v___x_380_; 
v_getOptionsUnrestricted_378_ = lean_ctor_get(v_inst_373_, 1);
lean_inc(v_getOptionsUnrestricted_378_);
lean_dec_ref(v_inst_373_);
v___f_379_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_379_, 0, v_toPure_374_);
lean_closure_set(v___f_379_, 1, v_cls_375_);
lean_closure_set(v___f_379_, 2, v_____do__lift_377_);
v___x_380_ = lean_apply_4(v_toBind_376_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_378_, v___f_379_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_recordIndirectModUse___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__0));
v___x_383_ = l_Lean_stringToMessageData(v___x_382_);
return v___x_383_;
}
}
static lean_object* _init_l_Lean_recordIndirectModUse___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__2));
v___x_386_ = l_Lean_stringToMessageData(v___x_385_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_recordIndirectModUse___redArg___lam__5___closed__5(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__4));
v___x_389_ = l_Lean_stringToMessageData(v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__5(lean_object* v_modifyEnv_390_, lean_object* v___f_391_, lean_object* v_declName_392_, lean_object* v_kind_393_, lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_inst_396_, lean_object* v_inst_397_, lean_object* v_cls_398_, lean_object* v_toBind_399_, lean_object* v___f_400_, uint8_t v_____do__lift_401_){
_start:
{
if (v_____do__lift_401_ == 0)
{
lean_object* v___x_402_; 
lean_dec(v___f_400_);
lean_dec(v_toBind_399_);
lean_dec(v_cls_398_);
lean_dec(v_inst_397_);
lean_dec_ref(v_inst_396_);
lean_dec_ref(v_inst_395_);
lean_dec_ref(v_inst_394_);
lean_dec_ref(v_kind_393_);
lean_dec(v_declName_392_);
v___x_402_ = lean_apply_1(v_modifyEnv_390_, v___f_391_);
return v___x_402_;
}
else
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec_ref(v___f_391_);
lean_dec(v_modifyEnv_390_);
v___x_403_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__5___closed__1, &l_Lean_recordIndirectModUse___redArg___lam__5___closed__1_once, _init_l_Lean_recordIndirectModUse___redArg___lam__5___closed__1);
v___x_404_ = l_Lean_MessageData_ofName(v_declName_392_);
v___x_405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_403_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__5___closed__3, &l_Lean_recordIndirectModUse___redArg___lam__5___closed__3_once, _init_l_Lean_recordIndirectModUse___redArg___lam__5___closed__3);
v___x_407_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_405_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = l_Lean_stringToMessageData(v_kind_393_);
v___x_409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__5___closed__5, &l_Lean_recordIndirectModUse___redArg___lam__5___closed__5_once, _init_l_Lean_recordIndirectModUse___redArg___lam__5___closed__5);
v___x_411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_409_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = l_Lean_addTrace___redArg(v_inst_394_, v_inst_395_, v_inst_396_, v_inst_397_, v_cls_398_, v___x_411_);
v___x_413_ = lean_apply_4(v_toBind_399_, lean_box(0), lean_box(0), v___x_412_, v___f_400_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___boxed(lean_object* v_modifyEnv_414_, lean_object* v___f_415_, lean_object* v_declName_416_, lean_object* v_kind_417_, lean_object* v_inst_418_, lean_object* v_inst_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_cls_422_, lean_object* v_toBind_423_, lean_object* v___f_424_, lean_object* v_____do__lift_425_){
_start:
{
uint8_t v_____do__lift_549__boxed_426_; lean_object* v_res_427_; 
v_____do__lift_549__boxed_426_ = lean_unbox(v_____do__lift_425_);
v_res_427_ = l_Lean_recordIndirectModUse___redArg___lam__5(v_modifyEnv_414_, v___f_415_, v_declName_416_, v_kind_417_, v_inst_418_, v_inst_419_, v_inst_420_, v_inst_421_, v_cls_422_, v_toBind_423_, v___f_424_, v_____do__lift_549__boxed_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__6(lean_object* v___x_431_, lean_object* v_kind_432_, lean_object* v_declName_433_, lean_object* v___x_434_, lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_toPure_437_, lean_object* v_toBind_438_, lean_object* v_modifyEnv_439_, lean_object* v___f_440_, lean_object* v_inst_441_, lean_object* v_inst_442_, lean_object* v_inst_443_, lean_object* v___f_444_, lean_object* v_____do__lift_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_446_ = l_Lean_indirectModUseExt;
v___x_447_ = lean_box(2);
v___x_448_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_431_, v___x_446_, v_____do__lift_445_, v___x_447_);
lean_inc(v_declName_433_);
lean_inc_ref(v_kind_432_);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v_kind_432_);
lean_ctor_set(v___x_449_, 1, v_declName_433_);
v___x_450_ = l_List_elem___redArg(v___x_434_, v___x_449_, v___x_448_);
if (v___x_450_ == 0)
{
lean_object* v_getInheritedTraceOptions_451_; lean_object* v_cls_452_; lean_object* v___f_453_; lean_object* v___f_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_getInheritedTraceOptions_451_ = lean_ctor_get(v_inst_435_, 2);
lean_inc(v_getInheritedTraceOptions_451_);
v_cls_452_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__6___closed__1));
lean_inc_n(v_toBind_438_, 3);
v___f_453_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__4), 5, 4);
lean_closure_set(v___f_453_, 0, v_inst_436_);
lean_closure_set(v___f_453_, 1, v_toPure_437_);
lean_closure_set(v___f_453_, 2, v_cls_452_);
lean_closure_set(v___f_453_, 3, v_toBind_438_);
v___f_454_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__5___boxed), 12, 11);
lean_closure_set(v___f_454_, 0, v_modifyEnv_439_);
lean_closure_set(v___f_454_, 1, v___f_440_);
lean_closure_set(v___f_454_, 2, v_declName_433_);
lean_closure_set(v___f_454_, 3, v_kind_432_);
lean_closure_set(v___f_454_, 4, v_inst_441_);
lean_closure_set(v___f_454_, 5, v_inst_435_);
lean_closure_set(v___f_454_, 6, v_inst_442_);
lean_closure_set(v___f_454_, 7, v_inst_443_);
lean_closure_set(v___f_454_, 8, v_cls_452_);
lean_closure_set(v___f_454_, 9, v_toBind_438_);
lean_closure_set(v___f_454_, 10, v___f_444_);
v___x_455_ = lean_apply_4(v_toBind_438_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_451_, v___f_453_);
v___x_456_ = lean_apply_4(v_toBind_438_, lean_box(0), lean_box(0), v___x_455_, v___f_454_);
return v___x_456_;
}
else
{
lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec(v___f_444_);
lean_dec(v_inst_443_);
lean_dec_ref(v_inst_442_);
lean_dec_ref(v_inst_441_);
lean_dec_ref(v___f_440_);
lean_dec(v_modifyEnv_439_);
lean_dec(v_toBind_438_);
lean_dec_ref(v_inst_436_);
lean_dec_ref(v_inst_435_);
lean_dec(v_declName_433_);
lean_dec_ref(v_kind_432_);
v___x_457_ = lean_box(0);
v___x_458_ = lean_apply_2(v_toPure_437_, lean_box(0), v___x_457_);
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg(lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_inst_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_kind_465_, lean_object* v_declName_466_){
_start:
{
lean_object* v_toApplicative_467_; lean_object* v_toBind_468_; lean_object* v_getEnv_469_; lean_object* v_modifyEnv_470_; lean_object* v_toPure_471_; lean_object* v___f_472_; lean_object* v___f_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___f_476_; lean_object* v___x_477_; 
v_toApplicative_467_ = lean_ctor_get(v_inst_459_, 0);
v_toBind_468_ = lean_ctor_get(v_inst_459_, 1);
lean_inc_n(v_toBind_468_, 2);
v_getEnv_469_ = lean_ctor_get(v_inst_460_, 0);
lean_inc(v_getEnv_469_);
v_modifyEnv_470_ = lean_ctor_get(v_inst_460_, 1);
lean_inc_n(v_modifyEnv_470_, 2);
lean_dec_ref(v_inst_460_);
v_toPure_471_ = lean_ctor_get(v_toApplicative_467_, 1);
lean_inc(v_toPure_471_);
lean_inc(v_declName_466_);
lean_inc_ref(v_kind_465_);
v___f_472_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__1), 3, 2);
lean_closure_set(v___f_472_, 0, v_kind_465_);
lean_closure_set(v___f_472_, 1, v_declName_466_);
lean_inc_ref(v___f_472_);
v___f_473_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__2), 3, 2);
lean_closure_set(v___f_473_, 0, v_modifyEnv_470_);
lean_closure_set(v___f_473_, 1, v___f_472_);
v___x_474_ = ((lean_object*)(l_Lean_instBEqIndirectModUse___closed__0));
v___x_475_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__0, &l_Lean_getIndirectModUses___closed__0_once, _init_l_Lean_getIndirectModUses___closed__0);
v___f_476_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__6), 15, 14);
lean_closure_set(v___f_476_, 0, v___x_475_);
lean_closure_set(v___f_476_, 1, v_kind_465_);
lean_closure_set(v___f_476_, 2, v_declName_466_);
lean_closure_set(v___f_476_, 3, v___x_474_);
lean_closure_set(v___f_476_, 4, v_inst_461_);
lean_closure_set(v___f_476_, 5, v_inst_462_);
lean_closure_set(v___f_476_, 6, v_toPure_471_);
lean_closure_set(v___f_476_, 7, v_toBind_468_);
lean_closure_set(v___f_476_, 8, v_modifyEnv_470_);
lean_closure_set(v___f_476_, 9, v___f_472_);
lean_closure_set(v___f_476_, 10, v_inst_459_);
lean_closure_set(v___f_476_, 11, v_inst_463_);
lean_closure_set(v___f_476_, 12, v_inst_464_);
lean_closure_set(v___f_476_, 13, v___f_473_);
v___x_477_ = lean_apply_4(v_toBind_468_, lean_box(0), lean_box(0), v_getEnv_469_, v___f_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse(lean_object* v_m_478_, lean_object* v_inst_479_, lean_object* v_inst_480_, lean_object* v_inst_481_, lean_object* v_inst_482_, lean_object* v_inst_483_, lean_object* v_inst_484_, lean_object* v_kind_485_, lean_object* v_declName_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_recordIndirectModUse___redArg(v_inst_479_, v_inst_480_, v_inst_481_, v_inst_482_, v_inst_483_, v_inst_484_, v_kind_485_, v_declName_486_);
return v___x_487_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqExtraModUse_beq(lean_object* v_x_488_, lean_object* v_x_489_){
_start:
{
lean_object* v_module_490_; uint8_t v_isExported_491_; uint8_t v_isMeta_492_; lean_object* v_module_493_; uint8_t v_isExported_494_; uint8_t v_isMeta_495_; uint8_t v___y_497_; uint8_t v___x_498_; 
v_module_490_ = lean_ctor_get(v_x_488_, 0);
v_isExported_491_ = lean_ctor_get_uint8(v_x_488_, sizeof(void*)*1);
v_isMeta_492_ = lean_ctor_get_uint8(v_x_488_, sizeof(void*)*1 + 1);
v_module_493_ = lean_ctor_get(v_x_489_, 0);
v_isExported_494_ = lean_ctor_get_uint8(v_x_489_, sizeof(void*)*1);
v_isMeta_495_ = lean_ctor_get_uint8(v_x_489_, sizeof(void*)*1 + 1);
v___x_498_ = lean_name_eq(v_module_490_, v_module_493_);
if (v___x_498_ == 0)
{
return v___x_498_;
}
else
{
if (v_isExported_494_ == 0)
{
if (v_isExported_491_ == 0)
{
v___y_497_ = v___x_498_;
goto v___jp_496_;
}
else
{
return v_isExported_494_;
}
}
else
{
if (v_isExported_491_ == 0)
{
return v_isExported_491_;
}
else
{
v___y_497_ = v_isExported_491_;
goto v___jp_496_;
}
}
}
v___jp_496_:
{
if (v_isMeta_495_ == 0)
{
if (v_isMeta_492_ == 0)
{
return v___y_497_;
}
else
{
return v_isMeta_495_;
}
}
else
{
return v_isMeta_492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object* v_x_499_, lean_object* v_x_500_){
_start:
{
uint8_t v_res_501_; lean_object* v_r_502_; 
v_res_501_ = l_Lean_instBEqExtraModUse_beq(v_x_499_, v_x_500_);
lean_dec_ref(v_x_500_);
lean_dec_ref(v_x_499_);
v_r_502_ = lean_box(v_res_501_);
return v_r_502_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableExtraModUse_hash(lean_object* v_x_505_){
_start:
{
lean_object* v_module_506_; uint8_t v_isExported_507_; uint8_t v_isMeta_508_; uint64_t v___y_510_; uint64_t v___y_511_; uint64_t v___x_517_; uint64_t v___y_519_; 
v_module_506_ = lean_ctor_get(v_x_505_, 0);
v_isExported_507_ = lean_ctor_get_uint8(v_x_505_, sizeof(void*)*1);
v_isMeta_508_ = lean_ctor_get_uint8(v_x_505_, sizeof(void*)*1 + 1);
v___x_517_ = 0ULL;
if (lean_obj_tag(v_module_506_) == 0)
{
uint64_t v___x_523_; 
v___x_523_ = 1723ULL;
v___y_519_ = v___x_523_;
goto v___jp_518_;
}
else
{
uint64_t v_hash_524_; 
v_hash_524_ = lean_ctor_get_uint64(v_module_506_, sizeof(void*)*2);
v___y_519_ = v_hash_524_;
goto v___jp_518_;
}
v___jp_509_:
{
uint64_t v___x_512_; 
v___x_512_ = lean_uint64_mix_hash(v___y_510_, v___y_511_);
if (v_isMeta_508_ == 0)
{
uint64_t v___x_513_; uint64_t v___x_514_; 
v___x_513_ = 13ULL;
v___x_514_ = lean_uint64_mix_hash(v___x_512_, v___x_513_);
return v___x_514_;
}
else
{
uint64_t v___x_515_; uint64_t v___x_516_; 
v___x_515_ = 11ULL;
v___x_516_ = lean_uint64_mix_hash(v___x_512_, v___x_515_);
return v___x_516_;
}
}
v___jp_518_:
{
uint64_t v___x_520_; 
v___x_520_ = lean_uint64_mix_hash(v___x_517_, v___y_519_);
if (v_isExported_507_ == 0)
{
uint64_t v___x_521_; 
v___x_521_ = 13ULL;
v___y_510_ = v___x_520_;
v___y_511_ = v___x_521_;
goto v___jp_509_;
}
else
{
uint64_t v___x_522_; 
v___x_522_ = 11ULL;
v___y_510_ = v___x_520_;
v___y_511_ = v___x_522_;
goto v___jp_509_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object* v_x_525_){
_start:
{
uint64_t v_res_526_; lean_object* v_r_527_; 
v_res_526_ = l_Lean_instHashableExtraModUse_hash(v_x_525_);
lean_dec_ref(v_x_525_);
v_r_527_ = lean_box_uint64(v_res_526_);
return v_r_527_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprExtraModUse_repr_spec__0(lean_object* v_a_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = lean_nat_to_int(v_a_530_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(10u);
v___x_546_ = lean_nat_to_int(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(14u);
v___x_554_ = lean_nat_to_int(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__0));
v___x_560_ = lean_string_length(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__16, &l_Lean_instReprExtraModUse_repr___redArg___closed__16_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__16);
v___x_562_ = lean_nat_to_int(v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___redArg(lean_object* v_x_567_){
_start:
{
lean_object* v_module_568_; uint8_t v_isExported_569_; uint8_t v_isMeta_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; uint8_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_module_568_ = lean_ctor_get(v_x_567_, 0);
lean_inc(v_module_568_);
v_isExported_569_ = lean_ctor_get_uint8(v_x_567_, sizeof(void*)*1);
v_isMeta_570_ = lean_ctor_get_uint8(v_x_567_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_567_);
v___x_571_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__5));
v___x_572_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__6));
v___x_573_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__7, &l_Lean_instReprExtraModUse_repr___redArg___closed__7_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__7);
v___x_574_ = lean_unsigned_to_nat(0u);
v___x_575_ = l_Lean_Name_reprPrec(v_module_568_, v___x_574_);
v___x_576_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_573_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
v___x_577_ = 0;
v___x_578_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_578_, 0, v___x_576_);
lean_ctor_set_uint8(v___x_578_, sizeof(void*)*1, v___x_577_);
v___x_579_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_572_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__9));
v___x_581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_box(1);
v___x_583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__11));
v___x_585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v___x_571_);
v___x_587_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__12, &l_Lean_instReprExtraModUse_repr___redArg___closed__12_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__12);
v___x_588_ = l_Bool_repr___redArg(v_isExported_569_);
v___x_589_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set_uint8(v___x_590_, sizeof(void*)*1, v___x_577_);
v___x_591_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_586_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v___x_580_);
v___x_593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v___x_582_);
v___x_594_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__14));
v___x_595_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v___x_571_);
v___x_597_ = l_Bool_repr___redArg(v_isMeta_570_);
v___x_598_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_573_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_599_, 0, v___x_598_);
lean_ctor_set_uint8(v___x_599_, sizeof(void*)*1, v___x_577_);
v___x_600_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_596_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__17, &l_Lean_instReprExtraModUse_repr___redArg___closed__17_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__17);
v___x_602_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__18));
v___x_603_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v___x_600_);
v___x_604_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__19));
v___x_605_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_603_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_601_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
v___x_607_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_607_, 0, v___x_606_);
lean_ctor_set_uint8(v___x_607_, sizeof(void*)*1, v___x_577_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr(lean_object* v_x_608_, lean_object* v_prec_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_instReprExtraModUse_repr___redArg(v_x_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___boxed(lean_object* v_x_611_, lean_object* v_prec_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lean_instReprExtraModUse_repr(v_x_611_, v_prec_612_);
lean_dec(v_prec_612_);
return v_res_613_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_616_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg(){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v___dummy_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg();
return v_res_622_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0(void){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg();
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_x_628_, lean_object* v_x_629_, lean_object* v_entries_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_631_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_632_ = lean_array_mk(v_entries_630_);
v___x_633_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_633_, 0, v___x_631_);
lean_ctor_set(v___x_633_, 1, v___x_631_);
lean_ctor_set(v___x_633_, 2, v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object* v_x_634_, lean_object* v_x_635_, lean_object* v_entries_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(v_x_634_, v_x_635_, v_entries_636_);
lean_dec_ref(v_x_635_);
lean_dec_ref(v_x_634_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_es_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = lean_array_mk(v_es_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_x_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object* v_x_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(v_x_642_);
lean_dec_ref(v_x_642_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
lean_object* v_ks_648_; lean_object* v_vs_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_673_; 
v_ks_648_ = lean_ctor_get(v_x_644_, 0);
v_vs_649_ = lean_ctor_get(v_x_644_, 1);
v_isSharedCheck_673_ = !lean_is_exclusive(v_x_644_);
if (v_isSharedCheck_673_ == 0)
{
v___x_651_ = v_x_644_;
v_isShared_652_ = v_isSharedCheck_673_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_vs_649_);
lean_inc(v_ks_648_);
lean_dec(v_x_644_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_673_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_653_ = lean_array_get_size(v_ks_648_);
v___x_654_ = lean_nat_dec_lt(v_x_645_, v___x_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
lean_dec(v_x_645_);
v___x_655_ = lean_array_push(v_ks_648_, v_x_646_);
v___x_656_ = lean_array_push(v_vs_649_, v_x_647_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v___x_656_);
lean_ctor_set(v___x_651_, 0, v___x_655_);
v___x_658_ = v___x_651_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
else
{
lean_object* v_k_x27_660_; uint8_t v___x_661_; 
v_k_x27_660_ = lean_array_fget_borrowed(v_ks_648_, v_x_645_);
v___x_661_ = l_Lean_instBEqExtraModUse_beq(v_x_646_, v_k_x27_660_);
if (v___x_661_ == 0)
{
lean_object* v___x_663_; 
if (v_isShared_652_ == 0)
{
v___x_663_ = v___x_651_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_ks_648_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v_vs_649_);
v___x_663_ = v_reuseFailAlloc_667_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = lean_unsigned_to_nat(1u);
v___x_665_ = lean_nat_add(v_x_645_, v___x_664_);
lean_dec(v_x_645_);
v_x_644_ = v___x_663_;
v_x_645_ = v___x_665_;
goto _start;
}
}
else
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_668_ = lean_array_fset(v_ks_648_, v_x_645_, v_x_646_);
v___x_669_ = lean_array_fset(v_vs_649_, v_x_645_, v_x_647_);
lean_dec(v_x_645_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v___x_669_);
lean_ctor_set(v___x_651_, 0, v___x_668_);
v___x_671_ = v___x_651_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(lean_object* v_n_674_, lean_object* v_k_675_, lean_object* v_v_676_){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(v_n_674_, v___x_677_, v_k_675_, v_v_676_);
return v___x_678_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_x_680_, size_t v_x_681_, size_t v_x_682_, lean_object* v_x_683_, lean_object* v_x_684_){
_start:
{
if (lean_obj_tag(v_x_680_) == 0)
{
lean_object* v_es_685_; size_t v___x_686_; size_t v___x_687_; lean_object* v_j_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_es_685_ = lean_ctor_get(v_x_680_, 0);
v___x_686_ = ((size_t)31ULL);
v___x_687_ = lean_usize_land(v_x_681_, v___x_686_);
v_j_688_ = lean_usize_to_nat(v___x_687_);
v___x_689_ = lean_array_get_size(v_es_685_);
v___x_690_ = lean_nat_dec_lt(v_j_688_, v___x_689_);
if (v___x_690_ == 0)
{
lean_dec(v_j_688_);
lean_dec(v_x_684_);
lean_dec_ref(v_x_683_);
return v_x_680_;
}
else
{
lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_729_; 
lean_inc_ref(v_es_685_);
v_isSharedCheck_729_ = !lean_is_exclusive(v_x_680_);
if (v_isSharedCheck_729_ == 0)
{
lean_object* v_unused_730_; 
v_unused_730_ = lean_ctor_get(v_x_680_, 0);
lean_dec(v_unused_730_);
v___x_692_ = v_x_680_;
v_isShared_693_ = v_isSharedCheck_729_;
goto v_resetjp_691_;
}
else
{
lean_dec(v_x_680_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_729_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v_v_694_; lean_object* v___x_695_; lean_object* v_xs_x27_696_; lean_object* v___y_698_; 
v_v_694_ = lean_array_fget(v_es_685_, v_j_688_);
v___x_695_ = lean_box(0);
v_xs_x27_696_ = lean_array_fset(v_es_685_, v_j_688_, v___x_695_);
switch(lean_obj_tag(v_v_694_))
{
case 0:
{
lean_object* v_key_703_; lean_object* v_val_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_714_; 
v_key_703_ = lean_ctor_get(v_v_694_, 0);
v_val_704_ = lean_ctor_get(v_v_694_, 1);
v_isSharedCheck_714_ = !lean_is_exclusive(v_v_694_);
if (v_isSharedCheck_714_ == 0)
{
v___x_706_ = v_v_694_;
v_isShared_707_ = v_isSharedCheck_714_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_val_704_);
lean_inc(v_key_703_);
lean_dec(v_v_694_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_714_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
uint8_t v___x_708_; 
v___x_708_ = l_Lean_instBEqExtraModUse_beq(v_x_683_, v_key_703_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; lean_object* v___x_710_; 
lean_del_object(v___x_706_);
v___x_709_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_703_, v_val_704_, v_x_683_, v_x_684_);
v___x_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
v___y_698_ = v___x_710_;
goto v___jp_697_;
}
else
{
lean_object* v___x_712_; 
lean_dec(v_val_704_);
lean_dec(v_key_703_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 1, v_x_684_);
lean_ctor_set(v___x_706_, 0, v_x_683_);
v___x_712_ = v___x_706_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_x_683_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v_x_684_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
v___y_698_ = v___x_712_;
goto v___jp_697_;
}
}
}
}
case 1:
{
lean_object* v_node_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_727_; 
v_node_715_ = lean_ctor_get(v_v_694_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v_v_694_);
if (v_isSharedCheck_727_ == 0)
{
v___x_717_ = v_v_694_;
v_isShared_718_ = v_isSharedCheck_727_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_node_715_);
lean_dec(v_v_694_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_727_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
size_t v___x_719_; size_t v___x_720_; size_t v___x_721_; size_t v___x_722_; lean_object* v___x_723_; lean_object* v___x_725_; 
v___x_719_ = ((size_t)5ULL);
v___x_720_ = lean_usize_shift_right(v_x_681_, v___x_719_);
v___x_721_ = ((size_t)1ULL);
v___x_722_ = lean_usize_add(v_x_682_, v___x_721_);
v___x_723_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_node_715_, v___x_720_, v___x_722_, v_x_683_, v_x_684_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 0, v___x_723_);
v___x_725_ = v___x_717_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
v___y_698_ = v___x_725_;
goto v___jp_697_;
}
}
}
default: 
{
lean_object* v___x_728_; 
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v_x_683_);
lean_ctor_set(v___x_728_, 1, v_x_684_);
v___y_698_ = v___x_728_;
goto v___jp_697_;
}
}
v___jp_697_:
{
lean_object* v___x_699_; lean_object* v___x_701_; 
v___x_699_ = lean_array_fset(v_xs_x27_696_, v_j_688_, v___y_698_);
lean_dec(v_j_688_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_699_);
v___x_701_ = v___x_692_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_699_);
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
else
{
lean_object* v_ks_731_; lean_object* v_vs_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_750_; 
v_ks_731_ = lean_ctor_get(v_x_680_, 0);
v_vs_732_ = lean_ctor_get(v_x_680_, 1);
v_isSharedCheck_750_ = !lean_is_exclusive(v_x_680_);
if (v_isSharedCheck_750_ == 0)
{
v___x_734_ = v_x_680_;
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_vs_732_);
lean_inc(v_ks_731_);
lean_dec(v_x_680_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_ks_731_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v_vs_732_);
v___x_737_ = v_reuseFailAlloc_749_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v_newNode_738_; size_t v___x_739_; uint8_t v___x_740_; 
v_newNode_738_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(v___x_737_, v_x_683_, v_x_684_);
v___x_739_ = ((size_t)7ULL);
v___x_740_ = lean_usize_dec_le(v___x_739_, v_x_682_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_741_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_738_);
v___x_742_ = lean_unsigned_to_nat(4u);
v___x_743_ = lean_nat_dec_lt(v___x_741_, v___x_742_);
lean_dec(v___x_741_);
if (v___x_743_ == 0)
{
lean_object* v_ks_744_; lean_object* v_vs_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_ks_744_ = lean_ctor_get(v_newNode_738_, 0);
lean_inc_ref(v_ks_744_);
v_vs_745_ = lean_ctor_get(v_newNode_738_, 1);
lean_inc_ref(v_vs_745_);
lean_dec_ref(v_newNode_738_);
v___x_746_ = lean_unsigned_to_nat(0u);
v___x_747_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0);
v___x_748_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(v_x_682_, v_ks_744_, v_vs_745_, v___x_746_, v___x_747_);
lean_dec_ref(v_vs_745_);
lean_dec_ref(v_ks_744_);
return v___x_748_;
}
else
{
return v_newNode_738_;
}
}
else
{
return v_newNode_738_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(size_t v_depth_751_, lean_object* v_keys_752_, lean_object* v_vals_753_, lean_object* v_i_754_, lean_object* v_entries_755_){
_start:
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_array_get_size(v_keys_752_);
v___x_757_ = lean_nat_dec_lt(v_i_754_, v___x_756_);
if (v___x_757_ == 0)
{
lean_dec(v_i_754_);
return v_entries_755_;
}
else
{
lean_object* v_k_758_; lean_object* v_v_759_; uint64_t v___x_760_; size_t v_h_761_; size_t v___x_762_; lean_object* v___x_763_; size_t v___x_764_; size_t v___x_765_; size_t v___x_766_; size_t v_h_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_k_758_ = lean_array_fget_borrowed(v_keys_752_, v_i_754_);
v_v_759_ = lean_array_fget_borrowed(v_vals_753_, v_i_754_);
v___x_760_ = l_Lean_instHashableExtraModUse_hash(v_k_758_);
v_h_761_ = lean_uint64_to_usize(v___x_760_);
v___x_762_ = ((size_t)5ULL);
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = ((size_t)1ULL);
v___x_765_ = lean_usize_sub(v_depth_751_, v___x_764_);
v___x_766_ = lean_usize_mul(v___x_762_, v___x_765_);
v_h_767_ = lean_usize_shift_right(v_h_761_, v___x_766_);
v___x_768_ = lean_nat_add(v_i_754_, v___x_763_);
lean_dec(v_i_754_);
lean_inc(v_v_759_);
lean_inc(v_k_758_);
v___x_769_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_entries_755_, v_h_767_, v_depth_751_, v_k_758_, v_v_759_);
v_i_754_ = v___x_768_;
v_entries_755_ = v___x_769_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_depth_771_, lean_object* v_keys_772_, lean_object* v_vals_773_, lean_object* v_i_774_, lean_object* v_entries_775_){
_start:
{
size_t v_depth_boxed_776_; lean_object* v_res_777_; 
v_depth_boxed_776_ = lean_unbox_usize(v_depth_771_);
lean_dec(v_depth_771_);
v_res_777_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(v_depth_boxed_776_, v_keys_772_, v_vals_773_, v_i_774_, v_entries_775_);
lean_dec_ref(v_vals_773_);
lean_dec_ref(v_keys_772_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_x_778_, lean_object* v_x_779_, lean_object* v_x_780_, lean_object* v_x_781_, lean_object* v_x_782_){
_start:
{
size_t v_x_582__boxed_783_; size_t v_x_583__boxed_784_; lean_object* v_res_785_; 
v_x_582__boxed_783_ = lean_unbox_usize(v_x_779_);
lean_dec(v_x_779_);
v_x_583__boxed_784_ = lean_unbox_usize(v_x_780_);
lean_dec(v_x_780_);
v_res_785_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_x_778_, v_x_582__boxed_783_, v_x_583__boxed_784_, v_x_781_, v_x_782_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(lean_object* v_x_786_, lean_object* v_x_787_, lean_object* v_x_788_){
_start:
{
uint64_t v___x_789_; size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; 
v___x_789_ = l_Lean_instHashableExtraModUse_hash(v_x_787_);
v___x_790_ = lean_uint64_to_usize(v___x_789_);
v___x_791_ = ((size_t)1ULL);
v___x_792_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_x_786_, v___x_790_, v___x_791_, v_x_787_, v_x_788_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_m_793_, lean_object* v_k_794_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = lean_box(0);
v___x_796_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(v_m_793_, v_k_794_, v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object* v_keys_797_, lean_object* v_i_798_, lean_object* v_k_799_){
_start:
{
lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = lean_array_get_size(v_keys_797_);
v___x_801_ = lean_nat_dec_lt(v_i_798_, v___x_800_);
if (v___x_801_ == 0)
{
lean_dec(v_i_798_);
return v___x_801_;
}
else
{
lean_object* v_k_x27_802_; uint8_t v___x_803_; 
v_k_x27_802_ = lean_array_fget_borrowed(v_keys_797_, v_i_798_);
v___x_803_ = l_Lean_instBEqExtraModUse_beq(v_k_799_, v_k_x27_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = lean_unsigned_to_nat(1u);
v___x_805_ = lean_nat_add(v_i_798_, v___x_804_);
lean_dec(v_i_798_);
v_i_798_ = v___x_805_;
goto _start;
}
else
{
lean_dec(v_i_798_);
return v___x_801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_807_, lean_object* v_i_808_, lean_object* v_k_809_){
_start:
{
uint8_t v_res_810_; lean_object* v_r_811_; 
v_res_810_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_keys_807_, v_i_808_, v_k_809_);
lean_dec_ref(v_k_809_);
lean_dec_ref(v_keys_807_);
v_r_811_ = lean_box(v_res_810_);
return v_r_811_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_812_, size_t v_x_813_, lean_object* v_x_814_){
_start:
{
if (lean_obj_tag(v_x_812_) == 0)
{
lean_object* v_es_815_; lean_object* v___x_816_; size_t v___x_817_; size_t v___x_818_; lean_object* v_j_819_; lean_object* v___x_820_; 
v_es_815_ = lean_ctor_get(v_x_812_, 0);
v___x_816_ = lean_box(2);
v___x_817_ = ((size_t)31ULL);
v___x_818_ = lean_usize_land(v_x_813_, v___x_817_);
v_j_819_ = lean_usize_to_nat(v___x_818_);
v___x_820_ = lean_array_get_borrowed(v___x_816_, v_es_815_, v_j_819_);
lean_dec(v_j_819_);
switch(lean_obj_tag(v___x_820_))
{
case 0:
{
lean_object* v_key_821_; uint8_t v___x_822_; 
v_key_821_ = lean_ctor_get(v___x_820_, 0);
v___x_822_ = l_Lean_instBEqExtraModUse_beq(v_x_814_, v_key_821_);
return v___x_822_;
}
case 1:
{
lean_object* v_node_823_; size_t v___x_824_; size_t v___x_825_; 
v_node_823_ = lean_ctor_get(v___x_820_, 0);
v___x_824_ = ((size_t)5ULL);
v___x_825_ = lean_usize_shift_right(v_x_813_, v___x_824_);
v_x_812_ = v_node_823_;
v_x_813_ = v___x_825_;
goto _start;
}
default: 
{
uint8_t v___x_827_; 
v___x_827_ = 0;
return v___x_827_;
}
}
}
else
{
lean_object* v_ks_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v_ks_828_ = lean_ctor_get(v_x_812_, 0);
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_ks_828_, v___x_829_, v_x_814_);
return v___x_830_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_831_, lean_object* v_x_832_, lean_object* v_x_833_){
_start:
{
size_t v_x_764__boxed_834_; uint8_t v_res_835_; lean_object* v_r_836_; 
v_x_764__boxed_834_ = lean_unbox_usize(v_x_832_);
lean_dec(v_x_832_);
v_res_835_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_831_, v_x_764__boxed_834_, v_x_833_);
lean_dec_ref(v_x_833_);
lean_dec_ref(v_x_831_);
v_r_836_ = lean_box(v_res_835_);
return v_r_836_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_837_, lean_object* v_x_838_){
_start:
{
uint64_t v___x_839_; size_t v___x_840_; uint8_t v___x_841_; 
v___x_839_ = l_Lean_instHashableExtraModUse_hash(v_x_838_);
v___x_840_ = lean_uint64_to_usize(v___x_839_);
v___x_841_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_837_, v___x_840_, v_x_838_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_x_842_, lean_object* v_x_843_){
_start:
{
uint8_t v_res_844_; lean_object* v_r_845_; 
v_res_844_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(v_x_842_, v_x_843_);
lean_dec_ref(v_x_843_);
lean_dec_ref(v_x_842_);
v_r_845_ = lean_box(v_res_844_);
return v_r_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_889_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_();
return v_res_891_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_892_, lean_object* v_x_893_, lean_object* v_x_894_){
_start:
{
uint8_t v___x_895_; 
v___x_895_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(v_x_893_, v_x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b2_896_, lean_object* v_x_897_, lean_object* v_x_898_){
_start:
{
uint8_t v_res_899_; lean_object* v_r_900_; 
v_res_899_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0(v_00_u03b2_896_, v_x_897_, v_x_898_);
lean_dec_ref(v_x_898_);
lean_dec_ref(v_x_897_);
v_r_900_ = lean_box(v_res_899_);
return v_r_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2(lean_object* v_00_u03b2_901_, lean_object* v_x_902_, lean_object* v_x_903_, lean_object* v_x_904_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(v_x_902_, v_x_903_, v_x_904_);
return v___x_905_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_906_, lean_object* v_x_907_, size_t v_x_908_, lean_object* v_x_909_){
_start:
{
uint8_t v___x_910_; 
v___x_910_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_907_, v_x_908_, v_x_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_911_, lean_object* v_x_912_, lean_object* v_x_913_, lean_object* v_x_914_){
_start:
{
size_t v_x_965__boxed_915_; uint8_t v_res_916_; lean_object* v_r_917_; 
v_x_965__boxed_915_ = lean_unbox_usize(v_x_913_);
lean_dec(v_x_913_);
v_res_916_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_911_, v_x_912_, v_x_965__boxed_915_, v_x_914_);
lean_dec_ref(v_x_914_);
lean_dec_ref(v_x_912_);
v_r_917_ = lean_box(v_res_916_);
return v_r_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_00_u03b2_918_, lean_object* v_x_919_, size_t v_x_920_, size_t v_x_921_, lean_object* v_x_922_, lean_object* v_x_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_x_919_, v_x_920_, v_x_921_, v_x_922_, v_x_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_00_u03b2_925_, lean_object* v_x_926_, lean_object* v_x_927_, lean_object* v_x_928_, lean_object* v_x_929_, lean_object* v_x_930_){
_start:
{
size_t v_x_976__boxed_931_; size_t v_x_977__boxed_932_; lean_object* v_res_933_; 
v_x_976__boxed_931_ = lean_unbox_usize(v_x_927_);
lean_dec(v_x_927_);
v_x_977__boxed_932_ = lean_unbox_usize(v_x_928_);
lean_dec(v_x_928_);
v_res_933_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3(v_00_u03b2_925_, v_x_926_, v_x_976__boxed_931_, v_x_977__boxed_932_, v_x_929_, v_x_930_);
return v_res_933_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_00_u03b2_934_, lean_object* v_keys_935_, lean_object* v_vals_936_, lean_object* v_heq_937_, lean_object* v_i_938_, lean_object* v_k_939_){
_start:
{
uint8_t v___x_940_; 
v___x_940_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_keys_935_, v_i_938_, v_k_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_941_, lean_object* v_keys_942_, lean_object* v_vals_943_, lean_object* v_heq_944_, lean_object* v_i_945_, lean_object* v_k_946_){
_start:
{
uint8_t v_res_947_; lean_object* v_r_948_; 
v_res_947_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_00_u03b2_941_, v_keys_942_, v_vals_943_, v_heq_944_, v_i_945_, v_k_946_);
lean_dec_ref(v_k_946_);
lean_dec_ref(v_vals_943_);
lean_dec_ref(v_keys_942_);
v_r_948_ = lean_box(v_res_947_);
return v_r_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5(lean_object* v_00_u03b2_949_, lean_object* v_n_950_, lean_object* v_k_951_, lean_object* v_v_952_){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(v_n_950_, v_k_951_, v_v_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6(lean_object* v_00_u03b2_954_, size_t v_depth_955_, lean_object* v_keys_956_, lean_object* v_vals_957_, lean_object* v_heq_958_, lean_object* v_i_959_, lean_object* v_entries_960_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(v_depth_955_, v_keys_956_, v_vals_957_, v_i_959_, v_entries_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_962_, lean_object* v_depth_963_, lean_object* v_keys_964_, lean_object* v_vals_965_, lean_object* v_heq_966_, lean_object* v_i_967_, lean_object* v_entries_968_){
_start:
{
size_t v_depth_boxed_969_; lean_object* v_res_970_; 
v_depth_boxed_969_ = lean_unbox_usize(v_depth_963_);
lean_dec(v_depth_963_);
v_res_970_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6(v_00_u03b2_962_, v_depth_boxed_969_, v_keys_964_, v_vals_965_, v_heq_966_, v_i_967_, v_entries_968_);
lean_dec_ref(v_vals_965_);
lean_dec_ref(v_keys_964_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_971_, lean_object* v_x_972_, lean_object* v_x_973_, lean_object* v_x_974_, lean_object* v_x_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(v_x_972_, v_x_973_, v_x_974_, v_x_975_);
return v___x_976_;
}
}
static lean_object* _init_l_Lean_getExtraModUses___closed__0(void){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_977_;
}
}
static lean_object* _init_l_Lean_getExtraModUses___closed__1(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_978_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_979_ = lean_box(0);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
lean_ctor_set(v___x_980_, 1, v___x_978_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExtraModUses(lean_object* v_env_981_, lean_object* v_modIdx_982_){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; lean_object* v___x_986_; 
v___x_983_ = lean_obj_once(&l_Lean_getExtraModUses___closed__1, &l_Lean_getExtraModUses___closed__1_once, _init_l_Lean_getExtraModUses___closed__1);
v___x_984_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_985_ = 0;
v___x_986_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_983_, v___x_984_, v_env_981_, v_modIdx_982_, v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExtraModUses___boxed(lean_object* v_env_987_, lean_object* v_modIdx_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lean_getExtraModUses(v_env_987_, v_modIdx_988_);
lean_dec(v_modIdx_988_);
lean_dec_ref(v_env_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg___lam__0(lean_object* v_addEntryFn_990_, lean_object* v_head_991_, lean_object* v_s_992_){
_start:
{
lean_object* v_importedEntries_993_; lean_object* v_state_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1002_; 
v_importedEntries_993_ = lean_ctor_get(v_s_992_, 0);
v_state_994_ = lean_ctor_get(v_s_992_, 1);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_s_992_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_996_ = v_s_992_;
v_isShared_997_ = v_isSharedCheck_1002_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_state_994_);
lean_inc(v_importedEntries_993_);
lean_dec(v_s_992_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1002_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v_state_998_; lean_object* v___x_1000_; 
v_state_998_ = lean_apply_2(v_addEntryFn_990_, v_state_994_, v_head_991_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 1, v_state_998_);
v___x_1000_ = v___x_996_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_importedEntries_993_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_state_998_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(lean_object* v_as_x27_1003_, lean_object* v_b_1004_){
_start:
{
if (lean_obj_tag(v_as_x27_1003_) == 0)
{
return v_b_1004_;
}
else
{
lean_object* v_head_1005_; lean_object* v_tail_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v_head_1005_ = lean_ctor_get(v_as_x27_1003_, 0);
v_tail_1006_ = lean_ctor_get(v_as_x27_1003_, 1);
v___x_1007_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1008_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_1009_ = lean_box(1);
v___x_1010_ = lean_box(0);
lean_inc_ref(v_b_1004_);
v___x_1011_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1008_, v___x_1007_, v_b_1004_, v___x_1009_, v___x_1010_);
v___x_1012_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(v___x_1011_, v_head_1005_);
lean_dec(v___x_1011_);
if (v___x_1012_ == 0)
{
lean_object* v_toEnvExtension_1013_; lean_object* v_addEntryFn_1014_; lean_object* v_asyncMode_1015_; uint8_t v_logWrites_1016_; lean_object* v___f_1017_; uint8_t v___x_1018_; 
v_toEnvExtension_1013_ = lean_ctor_get(v___x_1007_, 0);
v_addEntryFn_1014_ = lean_ctor_get(v___x_1007_, 3);
v_asyncMode_1015_ = lean_ctor_get(v_toEnvExtension_1013_, 2);
v_logWrites_1016_ = lean_ctor_get_uint8(v_toEnvExtension_1013_, sizeof(void*)*6);
lean_inc(v_head_1005_);
lean_inc(v_addEntryFn_1014_);
v___f_1017_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1017_, 0, v_addEntryFn_1014_);
lean_closure_set(v___f_1017_, 1, v_head_1005_);
v___x_1018_ = 1;
if (v_logWrites_1016_ == 0)
{
lean_object* v___x_1019_; 
lean_inc_ref(v_toEnvExtension_1013_);
v___x_1019_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1013_, v_b_1004_, v___f_1017_, v_asyncMode_1015_, v___x_1010_, v___x_1018_);
v_as_x27_1003_ = v_tail_1006_;
v_b_1004_ = v___x_1019_;
goto _start;
}
else
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_inc_ref_n(v_toEnvExtension_1013_, 2);
v___x_1021_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1013_, v_b_1004_);
lean_dec_ref(v_b_1004_);
v___x_1022_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1013_, v___x_1021_, v___f_1017_, v_asyncMode_1015_, v___x_1010_, v___x_1018_);
v_as_x27_1003_ = v_tail_1006_;
v_b_1004_ = v___x_1022_;
goto _start;
}
}
else
{
v_as_x27_1003_ = v_tail_1006_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg___boxed(lean_object* v_as_x27_1025_, lean_object* v_b_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(v_as_x27_1025_, v_b_1026_);
lean_dec(v_as_x27_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_copyExtraModUses(lean_object* v_src_1028_, lean_object* v_dest_1029_){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1030_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_1031_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1032_ = lean_box(1);
v___x_1033_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1030_, v___x_1031_, v_src_1028_, v___x_1032_);
v___x_1034_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(v___x_1033_, v_dest_1029_);
lean_dec(v___x_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0(lean_object* v_as_1035_, lean_object* v_as_x27_1036_, lean_object* v_b_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(v_as_x27_1036_, v_b_1037_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___boxed(lean_object* v_as_1040_, lean_object* v_as_x27_1041_, lean_object* v_b_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0(v_as_1040_, v_as_x27_1041_, v_b_1042_, v_a_1043_);
lean_dec(v_as_x27_1041_);
lean_dec(v_as_1040_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__0(lean_object* v_addEntryFn_1045_, lean_object* v_entry_1046_, lean_object* v_s_1047_){
_start:
{
lean_object* v_importedEntries_1048_; lean_object* v_state_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1057_; 
v_importedEntries_1048_ = lean_ctor_get(v_s_1047_, 0);
v_state_1049_ = lean_ctor_get(v_s_1047_, 1);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_s_1047_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1051_ = v_s_1047_;
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_state_1049_);
lean_inc(v_importedEntries_1048_);
lean_dec(v_s_1047_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v_state_1053_; lean_object* v___x_1055_; 
v_state_1053_ = lean_apply_2(v_addEntryFn_1045_, v_state_1049_, v_entry_1046_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 1, v_state_1053_);
v___x_1055_ = v___x_1051_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_importedEntries_1048_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_state_1053_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1(lean_object* v_entry_1058_, lean_object* v_x_1059_){
_start:
{
lean_object* v___x_1060_; lean_object* v_toEnvExtension_1061_; lean_object* v_addEntryFn_1062_; lean_object* v_asyncMode_1063_; uint8_t v_logWrites_1064_; lean_object* v___f_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; 
v___x_1060_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_1061_ = lean_ctor_get(v___x_1060_, 0);
v_addEntryFn_1062_ = lean_ctor_get(v___x_1060_, 3);
v_asyncMode_1063_ = lean_ctor_get(v_toEnvExtension_1061_, 2);
v_logWrites_1064_ = lean_ctor_get_uint8(v_toEnvExtension_1061_, sizeof(void*)*6);
lean_inc(v_addEntryFn_1062_);
v___f_1065_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1065_, 0, v_addEntryFn_1062_);
lean_closure_set(v___f_1065_, 1, v_entry_1058_);
v___x_1066_ = lean_box(0);
v___x_1067_ = 1;
if (v_logWrites_1064_ == 0)
{
lean_object* v___x_1068_; 
lean_inc_ref(v_toEnvExtension_1061_);
v___x_1068_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1061_, v_x_1059_, v___f_1065_, v_asyncMode_1063_, v___x_1066_, v___x_1067_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_inc_ref_n(v_toEnvExtension_1061_, 2);
v___x_1069_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1061_, v_x_1059_);
lean_dec_ref(v_x_1059_);
v___x_1070_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1061_, v___x_1069_, v___f_1065_, v_asyncMode_1063_, v___x_1066_, v___x_1067_);
return v___x_1070_;
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__0));
v___x_1073_ = l_Lean_stringToMessageData(v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__2));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__5(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__4));
v___x_1079_ = l_Lean_stringToMessageData(v___x_1078_);
return v___x_1079_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__7(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__6));
v___x_1082_ = l_Lean_stringToMessageData(v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__9(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__8));
v___x_1085_ = l_Lean_stringToMessageData(v___x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5(lean_object* v_modifyEnv_1090_, lean_object* v___f_1091_, lean_object* v_inst_1092_, lean_object* v_inst_1093_, lean_object* v_inst_1094_, lean_object* v_inst_1095_, lean_object* v_cls_1096_, lean_object* v_toBind_1097_, lean_object* v___f_1098_, lean_object* v_mod_1099_, lean_object* v_hint_1100_, uint8_t v_isMeta_1101_, uint8_t v_isExporting_1102_, uint8_t v_____do__lift_1103_){
_start:
{
lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1111_; lean_object* v___y_1112_; 
if (v_____do__lift_1103_ == 0)
{
lean_object* v___x_1124_; 
lean_dec(v_hint_1100_);
lean_dec(v_mod_1099_);
lean_dec(v___f_1098_);
lean_dec(v_toBind_1097_);
lean_dec(v_cls_1096_);
lean_dec(v_inst_1095_);
lean_dec_ref(v_inst_1094_);
lean_dec_ref(v_inst_1093_);
lean_dec_ref(v_inst_1092_);
v___x_1124_ = lean_apply_1(v_modifyEnv_1090_, v___f_1091_);
return v___x_1124_;
}
else
{
lean_object* v___x_1125_; lean_object* v___y_1127_; 
lean_dec_ref(v___f_1091_);
lean_dec(v_modifyEnv_1090_);
v___x_1125_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__7);
if (v_isExporting_1102_ == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__12));
v___y_1127_ = v___x_1134_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1135_; 
v___x_1135_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__13));
v___y_1127_ = v___x_1135_;
goto v___jp_1126_;
}
v___jp_1126_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_inc_ref(v___y_1127_);
v___x_1128_ = l_Lean_stringToMessageData(v___y_1127_);
v___x_1129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1125_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__9);
v___x_1131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
if (v_isMeta_1101_ == 0)
{
lean_object* v___x_1132_; 
v___x_1132_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__10));
v___y_1111_ = v___x_1131_;
v___y_1112_ = v___x_1132_;
goto v___jp_1110_;
}
else
{
lean_object* v___x_1133_; 
v___x_1133_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__11));
v___y_1111_ = v___x_1131_;
v___y_1112_ = v___x_1133_;
goto v___jp_1110_;
}
}
}
v___jp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___y_1105_);
lean_ctor_set(v___x_1107_, 1, v___y_1106_);
v___x_1108_ = l_Lean_addTrace___redArg(v_inst_1092_, v_inst_1093_, v_inst_1094_, v_inst_1095_, v_cls_1096_, v___x_1107_);
v___x_1109_ = lean_apply_4(v_toBind_1097_, lean_box(0), lean_box(0), v___x_1108_, v___f_1098_);
return v___x_1109_;
}
v___jp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; uint8_t v___x_1119_; 
lean_inc_ref(v___y_1112_);
v___x_1113_ = l_Lean_stringToMessageData(v___y_1112_);
v___x_1114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___y_1111_);
lean_ctor_set(v___x_1114_, 1, v___x_1113_);
v___x_1115_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__1);
v___x_1116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = l_Lean_MessageData_ofName(v_mod_1099_);
v___x_1118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = l_Lean_Name_isAnonymous(v_hint_1100_);
if (v___x_1119_ == 0)
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1120_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__3);
v___x_1121_ = l_Lean_MessageData_ofName(v_hint_1100_);
v___x_1122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1120_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
v___y_1105_ = v___x_1118_;
v___y_1106_ = v___x_1122_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1123_; 
lean_dec(v_hint_1100_);
v___x_1123_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___closed__5);
v___y_1105_ = v___x_1118_;
v___y_1106_ = v___x_1123_;
goto v___jp_1104_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___boxed(lean_object* v_modifyEnv_1136_, lean_object* v___f_1137_, lean_object* v_inst_1138_, lean_object* v_inst_1139_, lean_object* v_inst_1140_, lean_object* v_inst_1141_, lean_object* v_cls_1142_, lean_object* v_toBind_1143_, lean_object* v___f_1144_, lean_object* v_mod_1145_, lean_object* v_hint_1146_, lean_object* v_isMeta_1147_, lean_object* v_isExporting_1148_, lean_object* v_____do__lift_1149_){
_start:
{
uint8_t v_isMeta_boxed_1150_; uint8_t v_isExporting_boxed_1151_; uint8_t v_____do__lift_749__boxed_1152_; lean_object* v_res_1153_; 
v_isMeta_boxed_1150_ = lean_unbox(v_isMeta_1147_);
v_isExporting_boxed_1151_ = lean_unbox(v_isExporting_1148_);
v_____do__lift_749__boxed_1152_ = lean_unbox(v_____do__lift_1149_);
v_res_1153_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5(v_modifyEnv_1136_, v___f_1137_, v_inst_1138_, v_inst_1139_, v_inst_1140_, v_inst_1141_, v_cls_1142_, v_toBind_1143_, v___f_1144_, v_mod_1145_, v_hint_1146_, v_isMeta_boxed_1150_, v_isExporting_boxed_1151_, v_____do__lift_749__boxed_1152_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2(lean_object* v___x_1154_, lean_object* v___x_1155_, lean_object* v___x_1156_, lean_object* v_entry_1157_, lean_object* v_inst_1158_, lean_object* v_inst_1159_, lean_object* v_toPure_1160_, lean_object* v_toBind_1161_, lean_object* v_modifyEnv_1162_, lean_object* v___f_1163_, lean_object* v_inst_1164_, lean_object* v_inst_1165_, lean_object* v_inst_1166_, lean_object* v___f_1167_, lean_object* v_mod_1168_, lean_object* v_hint_1169_, uint8_t v_isMeta_1170_, uint8_t v_isExporting_1171_, lean_object* v_____do__lift_1172_){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; 
v___x_1173_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1174_ = lean_box(1);
v___x_1175_ = lean_box(0);
v___x_1176_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1154_, v___x_1173_, v_____do__lift_1172_, v___x_1174_, v___x_1175_);
v___x_1177_ = l_Lean_PersistentHashMap_contains___redArg(v___x_1155_, v___x_1156_, v___x_1176_, v_entry_1157_);
if (v___x_1177_ == 0)
{
lean_object* v_getInheritedTraceOptions_1178_; lean_object* v_cls_1179_; lean_object* v___f_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___f_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_getInheritedTraceOptions_1178_ = lean_ctor_get(v_inst_1158_, 2);
lean_inc(v_getInheritedTraceOptions_1178_);
v_cls_1179_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__6___closed__1));
lean_inc_n(v_toBind_1161_, 3);
v___f_1180_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1180_, 0, v_inst_1159_);
lean_closure_set(v___f_1180_, 1, v_toPure_1160_);
lean_closure_set(v___f_1180_, 2, v_cls_1179_);
lean_closure_set(v___f_1180_, 3, v_toBind_1161_);
v___x_1181_ = lean_box(v_isMeta_1170_);
v___x_1182_ = lean_box(v_isExporting_1171_);
v___f_1183_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_1183_, 0, v_modifyEnv_1162_);
lean_closure_set(v___f_1183_, 1, v___f_1163_);
lean_closure_set(v___f_1183_, 2, v_inst_1164_);
lean_closure_set(v___f_1183_, 3, v_inst_1158_);
lean_closure_set(v___f_1183_, 4, v_inst_1165_);
lean_closure_set(v___f_1183_, 5, v_inst_1166_);
lean_closure_set(v___f_1183_, 6, v_cls_1179_);
lean_closure_set(v___f_1183_, 7, v_toBind_1161_);
lean_closure_set(v___f_1183_, 8, v___f_1167_);
lean_closure_set(v___f_1183_, 9, v_mod_1168_);
lean_closure_set(v___f_1183_, 10, v_hint_1169_);
lean_closure_set(v___f_1183_, 11, v___x_1181_);
lean_closure_set(v___f_1183_, 12, v___x_1182_);
v___x_1184_ = lean_apply_4(v_toBind_1161_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1178_, v___f_1180_);
v___x_1185_ = lean_apply_4(v_toBind_1161_, lean_box(0), lean_box(0), v___x_1184_, v___f_1183_);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_dec(v_hint_1169_);
lean_dec(v_mod_1168_);
lean_dec(v___f_1167_);
lean_dec(v_inst_1166_);
lean_dec_ref(v_inst_1165_);
lean_dec_ref(v_inst_1164_);
lean_dec_ref(v___f_1163_);
lean_dec(v_modifyEnv_1162_);
lean_dec(v_toBind_1161_);
lean_dec_ref(v_inst_1159_);
lean_dec_ref(v_inst_1158_);
v___x_1186_ = lean_box(0);
v___x_1187_ = lean_apply_2(v_toPure_1160_, lean_box(0), v___x_1186_);
return v___x_1187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_1188_ = _args[0];
lean_object* v___x_1189_ = _args[1];
lean_object* v___x_1190_ = _args[2];
lean_object* v_entry_1191_ = _args[3];
lean_object* v_inst_1192_ = _args[4];
lean_object* v_inst_1193_ = _args[5];
lean_object* v_toPure_1194_ = _args[6];
lean_object* v_toBind_1195_ = _args[7];
lean_object* v_modifyEnv_1196_ = _args[8];
lean_object* v___f_1197_ = _args[9];
lean_object* v_inst_1198_ = _args[10];
lean_object* v_inst_1199_ = _args[11];
lean_object* v_inst_1200_ = _args[12];
lean_object* v___f_1201_ = _args[13];
lean_object* v_mod_1202_ = _args[14];
lean_object* v_hint_1203_ = _args[15];
lean_object* v_isMeta_1204_ = _args[16];
lean_object* v_isExporting_1205_ = _args[17];
lean_object* v_____do__lift_1206_ = _args[18];
_start:
{
uint8_t v_isMeta_boxed_1207_; uint8_t v_isExporting_boxed_1208_; lean_object* v_res_1209_; 
v_isMeta_boxed_1207_ = lean_unbox(v_isMeta_1204_);
v_isExporting_boxed_1208_ = lean_unbox(v_isExporting_1205_);
v_res_1209_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2(v___x_1188_, v___x_1189_, v___x_1190_, v_entry_1191_, v_inst_1192_, v_inst_1193_, v_toPure_1194_, v_toBind_1195_, v_modifyEnv_1196_, v___f_1197_, v_inst_1198_, v_inst_1199_, v_inst_1200_, v___f_1201_, v_mod_1202_, v_hint_1203_, v_isMeta_boxed_1207_, v_isExporting_boxed_1208_, v_____do__lift_1206_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__3(lean_object* v_mod_1210_, uint8_t v_isMeta_1211_, lean_object* v_modifyEnv_1212_, lean_object* v___x_1213_, lean_object* v___x_1214_, lean_object* v___x_1215_, lean_object* v_inst_1216_, lean_object* v_inst_1217_, lean_object* v_toPure_1218_, lean_object* v_toBind_1219_, lean_object* v_inst_1220_, lean_object* v_inst_1221_, lean_object* v_inst_1222_, lean_object* v_hint_1223_, lean_object* v_getEnv_1224_, lean_object* v_____do__lift_1225_){
_start:
{
uint8_t v_isExporting_1226_; lean_object* v_entry_1227_; lean_object* v___f_1228_; lean_object* v___f_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___f_1232_; lean_object* v___x_1233_; 
v_isExporting_1226_ = lean_ctor_get_uint8(v_____do__lift_1225_, sizeof(void*)*13);
lean_inc(v_mod_1210_);
v_entry_1227_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1227_, 0, v_mod_1210_);
lean_ctor_set_uint8(v_entry_1227_, sizeof(void*)*1, v_isExporting_1226_);
lean_ctor_set_uint8(v_entry_1227_, sizeof(void*)*1 + 1, v_isMeta_1211_);
lean_inc_ref(v_entry_1227_);
v___f_1228_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1228_, 0, v_entry_1227_);
lean_inc_ref(v___f_1228_);
lean_inc(v_modifyEnv_1212_);
v___f_1229_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1229_, 0, v_modifyEnv_1212_);
lean_closure_set(v___f_1229_, 1, v___f_1228_);
v___x_1230_ = lean_box(v_isMeta_1211_);
v___x_1231_ = lean_box(v_isExporting_1226_);
lean_inc(v_toBind_1219_);
v___f_1232_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2___boxed), 19, 18);
lean_closure_set(v___f_1232_, 0, v___x_1213_);
lean_closure_set(v___f_1232_, 1, v___x_1214_);
lean_closure_set(v___f_1232_, 2, v___x_1215_);
lean_closure_set(v___f_1232_, 3, v_entry_1227_);
lean_closure_set(v___f_1232_, 4, v_inst_1216_);
lean_closure_set(v___f_1232_, 5, v_inst_1217_);
lean_closure_set(v___f_1232_, 6, v_toPure_1218_);
lean_closure_set(v___f_1232_, 7, v_toBind_1219_);
lean_closure_set(v___f_1232_, 8, v_modifyEnv_1212_);
lean_closure_set(v___f_1232_, 9, v___f_1228_);
lean_closure_set(v___f_1232_, 10, v_inst_1220_);
lean_closure_set(v___f_1232_, 11, v_inst_1221_);
lean_closure_set(v___f_1232_, 12, v_inst_1222_);
lean_closure_set(v___f_1232_, 13, v___f_1229_);
lean_closure_set(v___f_1232_, 14, v_mod_1210_);
lean_closure_set(v___f_1232_, 15, v_hint_1223_);
lean_closure_set(v___f_1232_, 16, v___x_1230_);
lean_closure_set(v___f_1232_, 17, v___x_1231_);
v___x_1233_ = lean_apply_4(v_toBind_1219_, lean_box(0), lean_box(0), v_getEnv_1224_, v___f_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__3___boxed(lean_object* v_mod_1234_, lean_object* v_isMeta_1235_, lean_object* v_modifyEnv_1236_, lean_object* v___x_1237_, lean_object* v___x_1238_, lean_object* v___x_1239_, lean_object* v_inst_1240_, lean_object* v_inst_1241_, lean_object* v_toPure_1242_, lean_object* v_toBind_1243_, lean_object* v_inst_1244_, lean_object* v_inst_1245_, lean_object* v_inst_1246_, lean_object* v_hint_1247_, lean_object* v_getEnv_1248_, lean_object* v_____do__lift_1249_){
_start:
{
uint8_t v_isMeta_boxed_1250_; lean_object* v_res_1251_; 
v_isMeta_boxed_1250_ = lean_unbox(v_isMeta_1235_);
v_res_1251_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__3(v_mod_1234_, v_isMeta_boxed_1250_, v_modifyEnv_1236_, v___x_1237_, v___x_1238_, v___x_1239_, v_inst_1240_, v_inst_1241_, v_toPure_1242_, v_toBind_1243_, v_inst_1244_, v_inst_1245_, v_inst_1246_, v_hint_1247_, v_getEnv_1248_, v_____do__lift_1249_);
lean_dec_ref(v_____do__lift_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(lean_object* v_inst_1252_, lean_object* v_inst_1253_, lean_object* v_inst_1254_, lean_object* v_inst_1255_, lean_object* v_inst_1256_, lean_object* v_inst_1257_, lean_object* v_mod_1258_, uint8_t v_isMeta_1259_, lean_object* v_hint_1260_){
_start:
{
lean_object* v_toApplicative_1261_; lean_object* v_toBind_1262_; lean_object* v_getEnv_1263_; lean_object* v_modifyEnv_1264_; lean_object* v_toPure_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___f_1270_; lean_object* v___x_1271_; 
v_toApplicative_1261_ = lean_ctor_get(v_inst_1252_, 0);
v_toBind_1262_ = lean_ctor_get(v_inst_1252_, 1);
lean_inc_n(v_toBind_1262_, 2);
v_getEnv_1263_ = lean_ctor_get(v_inst_1253_, 0);
lean_inc_n(v_getEnv_1263_, 2);
v_modifyEnv_1264_ = lean_ctor_get(v_inst_1253_, 1);
lean_inc(v_modifyEnv_1264_);
lean_dec_ref(v_inst_1253_);
v_toPure_1265_ = lean_ctor_get(v_toApplicative_1261_, 1);
lean_inc(v_toPure_1265_);
v___x_1266_ = ((lean_object*)(l_Lean_instBEqExtraModUse___closed__0));
v___x_1267_ = ((lean_object*)(l_Lean_instHashableExtraModUse___closed__0));
v___x_1268_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_1269_ = lean_box(v_isMeta_1259_);
v___f_1270_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__3___boxed), 16, 15);
lean_closure_set(v___f_1270_, 0, v_mod_1258_);
lean_closure_set(v___f_1270_, 1, v___x_1269_);
lean_closure_set(v___f_1270_, 2, v_modifyEnv_1264_);
lean_closure_set(v___f_1270_, 3, v___x_1268_);
lean_closure_set(v___f_1270_, 4, v___x_1266_);
lean_closure_set(v___f_1270_, 5, v___x_1267_);
lean_closure_set(v___f_1270_, 6, v_inst_1254_);
lean_closure_set(v___f_1270_, 7, v_inst_1255_);
lean_closure_set(v___f_1270_, 8, v_toPure_1265_);
lean_closure_set(v___f_1270_, 9, v_toBind_1262_);
lean_closure_set(v___f_1270_, 10, v_inst_1252_);
lean_closure_set(v___f_1270_, 11, v_inst_1256_);
lean_closure_set(v___f_1270_, 12, v_inst_1257_);
lean_closure_set(v___f_1270_, 13, v_hint_1260_);
lean_closure_set(v___f_1270_, 14, v_getEnv_1263_);
v___x_1271_ = lean_apply_4(v_toBind_1262_, lean_box(0), lean_box(0), v_getEnv_1263_, v___f_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___boxed(lean_object* v_inst_1272_, lean_object* v_inst_1273_, lean_object* v_inst_1274_, lean_object* v_inst_1275_, lean_object* v_inst_1276_, lean_object* v_inst_1277_, lean_object* v_mod_1278_, lean_object* v_isMeta_1279_, lean_object* v_hint_1280_){
_start:
{
uint8_t v_isMeta_boxed_1281_; lean_object* v_res_1282_; 
v_isMeta_boxed_1281_ = lean_unbox(v_isMeta_1279_);
v_res_1282_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1272_, v_inst_1273_, v_inst_1274_, v_inst_1275_, v_inst_1276_, v_inst_1277_, v_mod_1278_, v_isMeta_boxed_1281_, v_hint_1280_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore(lean_object* v_m_1283_, lean_object* v_inst_1284_, lean_object* v_inst_1285_, lean_object* v_inst_1286_, lean_object* v_inst_1287_, lean_object* v_inst_1288_, lean_object* v_inst_1289_, lean_object* v_mod_1290_, uint8_t v_isMeta_1291_, lean_object* v_hint_1292_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1284_, v_inst_1285_, v_inst_1286_, v_inst_1287_, v_inst_1288_, v_inst_1289_, v_mod_1290_, v_isMeta_1291_, v_hint_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___boxed(lean_object* v_m_1294_, lean_object* v_inst_1295_, lean_object* v_inst_1296_, lean_object* v_inst_1297_, lean_object* v_inst_1298_, lean_object* v_inst_1299_, lean_object* v_inst_1300_, lean_object* v_mod_1301_, lean_object* v_isMeta_1302_, lean_object* v_hint_1303_){
_start:
{
uint8_t v_isMeta_boxed_1304_; lean_object* v_res_1305_; 
v_isMeta_boxed_1304_ = lean_unbox(v_isMeta_1302_);
v_res_1305_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore(v_m_1294_, v_inst_1295_, v_inst_1296_, v_inst_1297_, v_inst_1298_, v_inst_1299_, v_inst_1300_, v_mod_1301_, v_isMeta_boxed_1304_, v_hint_1303_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0(lean_object* v_modName_1306_, lean_object* v_inst_1307_, lean_object* v_inst_1308_, lean_object* v_inst_1309_, lean_object* v_inst_1310_, lean_object* v_inst_1311_, lean_object* v_inst_1312_, uint8_t v_isMeta_1313_, lean_object* v_toPure_1314_, lean_object* v_____do__lift_1315_){
_start:
{
lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = l_Lean_Environment_mainModule(v_____do__lift_1315_);
v___x_1317_ = lean_name_eq(v_modName_1306_, v___x_1316_);
lean_dec(v___x_1316_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_dec(v_toPure_1314_);
v___x_1318_ = lean_box(0);
v___x_1319_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1307_, v_inst_1308_, v_inst_1309_, v_inst_1310_, v_inst_1311_, v_inst_1312_, v_modName_1306_, v_isMeta_1313_, v___x_1318_);
return v___x_1319_;
}
else
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_dec(v_inst_1312_);
lean_dec_ref(v_inst_1311_);
lean_dec_ref(v_inst_1310_);
lean_dec_ref(v_inst_1309_);
lean_dec_ref(v_inst_1308_);
lean_dec_ref(v_inst_1307_);
lean_dec(v_modName_1306_);
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_apply_2(v_toPure_1314_, lean_box(0), v___x_1320_);
return v___x_1321_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0___boxed(lean_object* v_modName_1322_, lean_object* v_inst_1323_, lean_object* v_inst_1324_, lean_object* v_inst_1325_, lean_object* v_inst_1326_, lean_object* v_inst_1327_, lean_object* v_inst_1328_, lean_object* v_isMeta_1329_, lean_object* v_toPure_1330_, lean_object* v_____do__lift_1331_){
_start:
{
uint8_t v_isMeta_boxed_1332_; lean_object* v_res_1333_; 
v_isMeta_boxed_1332_ = lean_unbox(v_isMeta_1329_);
v_res_1333_ = l_Lean_recordExtraModUse___redArg___lam__0(v_modName_1322_, v_inst_1323_, v_inst_1324_, v_inst_1325_, v_inst_1326_, v_inst_1327_, v_inst_1328_, v_isMeta_boxed_1332_, v_toPure_1330_, v_____do__lift_1331_);
lean_dec_ref(v_____do__lift_1331_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg(lean_object* v_inst_1334_, lean_object* v_inst_1335_, lean_object* v_inst_1336_, lean_object* v_inst_1337_, lean_object* v_inst_1338_, lean_object* v_inst_1339_, lean_object* v_modName_1340_, uint8_t v_isMeta_1341_){
_start:
{
lean_object* v_toApplicative_1342_; lean_object* v_toBind_1343_; lean_object* v_getEnv_1344_; lean_object* v_toPure_1345_; lean_object* v___x_1346_; lean_object* v___f_1347_; lean_object* v___x_1348_; 
v_toApplicative_1342_ = lean_ctor_get(v_inst_1334_, 0);
v_toBind_1343_ = lean_ctor_get(v_inst_1334_, 1);
lean_inc(v_toBind_1343_);
v_getEnv_1344_ = lean_ctor_get(v_inst_1335_, 0);
lean_inc(v_getEnv_1344_);
v_toPure_1345_ = lean_ctor_get(v_toApplicative_1342_, 1);
lean_inc(v_toPure_1345_);
v___x_1346_ = lean_box(v_isMeta_1341_);
v___f_1347_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUse___redArg___lam__0___boxed), 10, 9);
lean_closure_set(v___f_1347_, 0, v_modName_1340_);
lean_closure_set(v___f_1347_, 1, v_inst_1334_);
lean_closure_set(v___f_1347_, 2, v_inst_1335_);
lean_closure_set(v___f_1347_, 3, v_inst_1336_);
lean_closure_set(v___f_1347_, 4, v_inst_1337_);
lean_closure_set(v___f_1347_, 5, v_inst_1338_);
lean_closure_set(v___f_1347_, 6, v_inst_1339_);
lean_closure_set(v___f_1347_, 7, v___x_1346_);
lean_closure_set(v___f_1347_, 8, v_toPure_1345_);
v___x_1348_ = lean_apply_4(v_toBind_1343_, lean_box(0), lean_box(0), v_getEnv_1344_, v___f_1347_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___boxed(lean_object* v_inst_1349_, lean_object* v_inst_1350_, lean_object* v_inst_1351_, lean_object* v_inst_1352_, lean_object* v_inst_1353_, lean_object* v_inst_1354_, lean_object* v_modName_1355_, lean_object* v_isMeta_1356_){
_start:
{
uint8_t v_isMeta_boxed_1357_; lean_object* v_res_1358_; 
v_isMeta_boxed_1357_ = lean_unbox(v_isMeta_1356_);
v_res_1358_ = l_Lean_recordExtraModUse___redArg(v_inst_1349_, v_inst_1350_, v_inst_1351_, v_inst_1352_, v_inst_1353_, v_inst_1354_, v_modName_1355_, v_isMeta_boxed_1357_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse(lean_object* v_m_1359_, lean_object* v_inst_1360_, lean_object* v_inst_1361_, lean_object* v_inst_1362_, lean_object* v_inst_1363_, lean_object* v_inst_1364_, lean_object* v_inst_1365_, lean_object* v_modName_1366_, uint8_t v_isMeta_1367_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_recordExtraModUse___redArg(v_inst_1360_, v_inst_1361_, v_inst_1362_, v_inst_1363_, v_inst_1364_, v_inst_1365_, v_modName_1366_, v_isMeta_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___boxed(lean_object* v_m_1369_, lean_object* v_inst_1370_, lean_object* v_inst_1371_, lean_object* v_inst_1372_, lean_object* v_inst_1373_, lean_object* v_inst_1374_, lean_object* v_inst_1375_, lean_object* v_modName_1376_, lean_object* v_isMeta_1377_){
_start:
{
uint8_t v_isMeta_boxed_1378_; lean_object* v_res_1379_; 
v_isMeta_boxed_1378_ = lean_unbox(v_isMeta_1377_);
v_res_1379_ = l_Lean_recordExtraModUse(v_m_1369_, v_inst_1370_, v_inst_1371_, v_inst_1372_, v_inst_1373_, v_inst_1374_, v_inst_1375_, v_modName_1376_, v_isMeta_boxed_1378_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__0(lean_object* v_toPure_1380_, lean_object* v_____s_1381_){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = lean_box(0);
v___x_1383_ = lean_apply_2(v_toPure_1380_, lean_box(0), v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__1(lean_object* v___x_1384_, lean_object* v_toPure_1385_, lean_object* v_r_1386_){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1384_);
v___x_1388_ = lean_apply_2(v_toPure_1385_, lean_box(0), v___x_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2(lean_object* v_env_1389_, lean_object* v___x_1390_, lean_object* v_inst_1391_, lean_object* v_inst_1392_, lean_object* v_inst_1393_, lean_object* v_inst_1394_, lean_object* v_inst_1395_, lean_object* v_inst_1396_, lean_object* v_declName_1397_, lean_object* v_toBind_1398_, lean_object* v___f_1399_, lean_object* v_a_1400_, lean_object* v_x_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1403_; lean_object* v_modules_1404_; lean_object* v___x_1405_; lean_object* v_toImport_1406_; lean_object* v_module_1407_; uint8_t v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1403_ = l_Lean_Environment_header(v_env_1389_);
v_modules_1404_ = lean_ctor_get(v___x_1403_, 3);
lean_inc_ref(v_modules_1404_);
lean_dec_ref(v___x_1403_);
v___x_1405_ = lean_array_get(v___x_1390_, v_modules_1404_, v_a_1400_);
lean_dec_ref(v_modules_1404_);
v_toImport_1406_ = lean_ctor_get(v___x_1405_, 0);
lean_inc_ref(v_toImport_1406_);
lean_dec(v___x_1405_);
v_module_1407_ = lean_ctor_get(v_toImport_1406_, 0);
lean_inc(v_module_1407_);
lean_dec_ref(v_toImport_1406_);
v___x_1408_ = 0;
v___x_1409_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1391_, v_inst_1392_, v_inst_1393_, v_inst_1394_, v_inst_1395_, v_inst_1396_, v_module_1407_, v___x_1408_, v_declName_1397_);
v___x_1410_ = lean_apply_4(v_toBind_1398_, lean_box(0), lean_box(0), v___x_1409_, v___f_1399_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2___boxed(lean_object* v_env_1411_, lean_object* v___x_1412_, lean_object* v_inst_1413_, lean_object* v_inst_1414_, lean_object* v_inst_1415_, lean_object* v_inst_1416_, lean_object* v_inst_1417_, lean_object* v_inst_1418_, lean_object* v_declName_1419_, lean_object* v_toBind_1420_, lean_object* v___f_1421_, lean_object* v_a_1422_, lean_object* v_x_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l_Lean_recordExtraModUseFromDecl___redArg___lam__2(v_env_1411_, v___x_1412_, v_inst_1413_, v_inst_1414_, v_inst_1415_, v_inst_1416_, v_inst_1417_, v_inst_1418_, v_declName_1419_, v_toBind_1420_, v___f_1421_, v_a_1422_, v_x_1423_, v___y_1424_);
lean_dec(v_a_1422_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v_env_1411_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__3(lean_object* v_toPure_1426_, lean_object* v_env_1427_, lean_object* v___x_1428_, lean_object* v_inst_1429_, lean_object* v_inst_1430_, lean_object* v_inst_1431_, lean_object* v_inst_1432_, lean_object* v_inst_1433_, lean_object* v_inst_1434_, lean_object* v_declName_1435_, lean_object* v_toBind_1436_, lean_object* v___f_1437_, lean_object* v___x_1438_, lean_object* v___x_1439_, lean_object* v___x_1440_, lean_object* v_____r_1441_){
_start:
{
lean_object* v___y_1443_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1451_ = l_Lean_indirectModUseExt;
v___x_1452_ = lean_box(1);
v___x_1453_ = lean_box(0);
lean_inc_ref(v_env_1427_);
v___x_1454_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1438_, v___x_1451_, v_env_1427_, v___x_1452_, v___x_1453_);
lean_inc(v_declName_1435_);
v___x_1455_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_1439_, v___x_1440_, v___x_1454_, v_declName_1435_);
lean_dec(v___x_1454_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v___x_1456_; 
v___x_1456_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0));
v___y_1443_ = v___x_1456_;
goto v___jp_1442_;
}
else
{
lean_object* v_val_1457_; 
v_val_1457_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_val_1457_);
lean_dec_ref_known(v___x_1455_, 1);
v___y_1443_ = v_val_1457_;
goto v___jp_1442_;
}
v___jp_1442_:
{
lean_object* v___x_1444_; lean_object* v___f_1445_; lean_object* v___f_1446_; size_t v_sz_1447_; size_t v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1444_ = lean_box(0);
v___f_1445_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1445_, 0, v___x_1444_);
lean_closure_set(v___f_1445_, 1, v_toPure_1426_);
lean_inc(v_toBind_1436_);
lean_inc_ref(v_inst_1429_);
v___f_1446_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__2___boxed), 14, 11);
lean_closure_set(v___f_1446_, 0, v_env_1427_);
lean_closure_set(v___f_1446_, 1, v___x_1428_);
lean_closure_set(v___f_1446_, 2, v_inst_1429_);
lean_closure_set(v___f_1446_, 3, v_inst_1430_);
lean_closure_set(v___f_1446_, 4, v_inst_1431_);
lean_closure_set(v___f_1446_, 5, v_inst_1432_);
lean_closure_set(v___f_1446_, 6, v_inst_1433_);
lean_closure_set(v___f_1446_, 7, v_inst_1434_);
lean_closure_set(v___f_1446_, 8, v_declName_1435_);
lean_closure_set(v___f_1446_, 9, v_toBind_1436_);
lean_closure_set(v___f_1446_, 10, v___f_1445_);
v_sz_1447_ = lean_array_size(v___y_1443_);
v___x_1448_ = ((size_t)0ULL);
v___x_1449_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1429_, v___y_1443_, v___f_1446_, v_sz_1447_, v___x_1448_, v___x_1444_);
v___x_1450_ = lean_apply_4(v_toBind_1436_, lean_box(0), lean_box(0), v___x_1449_, v___f_1437_);
return v___x_1450_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4(lean_object* v___x_1458_, lean_object* v_inst_1459_, lean_object* v_inst_1460_, lean_object* v_inst_1461_, lean_object* v_inst_1462_, lean_object* v_inst_1463_, lean_object* v_inst_1464_, lean_object* v_declName_1465_, lean_object* v_toBind_1466_, lean_object* v___f_1467_, uint8_t v_isMeta_1468_, lean_object* v_____do__lift_1469_){
_start:
{
uint8_t v___y_1471_; 
if (v_isMeta_1468_ == 0)
{
lean_dec_ref(v_____do__lift_1469_);
v___y_1471_ = v_isMeta_1468_;
goto v___jp_1470_;
}
else
{
uint8_t v___x_1476_; 
lean_inc(v_declName_1465_);
v___x_1476_ = l_Lean_isMarkedMeta(v_____do__lift_1469_, v_declName_1465_);
if (v___x_1476_ == 0)
{
v___y_1471_ = v_isMeta_1468_;
goto v___jp_1470_;
}
else
{
uint8_t v___x_1477_; 
v___x_1477_ = 0;
v___y_1471_ = v___x_1477_;
goto v___jp_1470_;
}
}
v___jp_1470_:
{
lean_object* v_toImport_1472_; lean_object* v_module_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_toImport_1472_ = lean_ctor_get(v___x_1458_, 0);
lean_inc_ref(v_toImport_1472_);
lean_dec_ref(v___x_1458_);
v_module_1473_ = lean_ctor_get(v_toImport_1472_, 0);
lean_inc(v_module_1473_);
lean_dec_ref(v_toImport_1472_);
v___x_1474_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1459_, v_inst_1460_, v_inst_1461_, v_inst_1462_, v_inst_1463_, v_inst_1464_, v_module_1473_, v___y_1471_, v_declName_1465_);
v___x_1475_ = lean_apply_4(v_toBind_1466_, lean_box(0), lean_box(0), v___x_1474_, v___f_1467_);
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4___boxed(lean_object* v___x_1478_, lean_object* v_inst_1479_, lean_object* v_inst_1480_, lean_object* v_inst_1481_, lean_object* v_inst_1482_, lean_object* v_inst_1483_, lean_object* v_inst_1484_, lean_object* v_declName_1485_, lean_object* v_toBind_1486_, lean_object* v___f_1487_, lean_object* v_isMeta_1488_, lean_object* v_____do__lift_1489_){
_start:
{
uint8_t v_isMeta_boxed_1490_; lean_object* v_res_1491_; 
v_isMeta_boxed_1490_ = lean_unbox(v_isMeta_1488_);
v_res_1491_ = l_Lean_recordExtraModUseFromDecl___redArg___lam__4(v___x_1478_, v_inst_1479_, v_inst_1480_, v_inst_1481_, v_inst_1482_, v_inst_1483_, v_inst_1484_, v_declName_1485_, v_toBind_1486_, v___f_1487_, v_isMeta_boxed_1490_, v_____do__lift_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5(lean_object* v_toPure_1492_, lean_object* v_declName_1493_, lean_object* v___x_1494_, lean_object* v_inst_1495_, lean_object* v_inst_1496_, lean_object* v_inst_1497_, lean_object* v_inst_1498_, lean_object* v_inst_1499_, lean_object* v_inst_1500_, lean_object* v_toBind_1501_, lean_object* v___f_1502_, lean_object* v___x_1503_, lean_object* v___x_1504_, lean_object* v___x_1505_, uint8_t v_isMeta_1506_, lean_object* v_getEnv_1507_, lean_object* v_env_1508_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1508_, v_declName_1493_);
if (lean_obj_tag(v___x_1512_) == 0)
{
lean_dec_ref(v_env_1508_);
lean_dec(v_getEnv_1507_);
lean_dec_ref(v___x_1505_);
lean_dec_ref(v___x_1504_);
lean_dec_ref(v___x_1503_);
lean_dec(v___f_1502_);
lean_dec(v_toBind_1501_);
lean_dec(v_inst_1500_);
lean_dec_ref(v_inst_1499_);
lean_dec_ref(v_inst_1498_);
lean_dec_ref(v_inst_1497_);
lean_dec_ref(v_inst_1496_);
lean_dec_ref(v_inst_1495_);
lean_dec_ref(v___x_1494_);
lean_dec(v_declName_1493_);
goto v___jp_1509_;
}
else
{
lean_object* v_val_1513_; lean_object* v___x_1514_; lean_object* v_modules_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v_val_1513_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_val_1513_);
lean_dec_ref_known(v___x_1512_, 1);
v___x_1514_ = l_Lean_Environment_header(v_env_1508_);
v_modules_1515_ = lean_ctor_get(v___x_1514_, 3);
lean_inc_ref(v_modules_1515_);
lean_dec_ref(v___x_1514_);
v___x_1516_ = lean_array_get_size(v_modules_1515_);
v___x_1517_ = lean_nat_dec_lt(v_val_1513_, v___x_1516_);
if (v___x_1517_ == 0)
{
lean_dec_ref(v_modules_1515_);
lean_dec(v_val_1513_);
lean_dec_ref(v_env_1508_);
lean_dec(v_getEnv_1507_);
lean_dec_ref(v___x_1505_);
lean_dec_ref(v___x_1504_);
lean_dec_ref(v___x_1503_);
lean_dec(v___f_1502_);
lean_dec(v_toBind_1501_);
lean_dec(v_inst_1500_);
lean_dec_ref(v_inst_1499_);
lean_dec_ref(v_inst_1498_);
lean_dec_ref(v_inst_1497_);
lean_dec_ref(v_inst_1496_);
lean_dec_ref(v_inst_1495_);
lean_dec_ref(v___x_1494_);
lean_dec(v_declName_1493_);
goto v___jp_1509_;
}
else
{
lean_object* v___f_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___f_1521_; lean_object* v___x_1522_; 
lean_inc_n(v_toBind_1501_, 2);
lean_inc(v_declName_1493_);
lean_inc(v_inst_1500_);
lean_inc_ref(v_inst_1499_);
lean_inc_ref(v_inst_1498_);
lean_inc_ref(v_inst_1497_);
lean_inc_ref(v_inst_1496_);
lean_inc_ref(v_inst_1495_);
v___f_1518_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__3), 16, 15);
lean_closure_set(v___f_1518_, 0, v_toPure_1492_);
lean_closure_set(v___f_1518_, 1, v_env_1508_);
lean_closure_set(v___f_1518_, 2, v___x_1494_);
lean_closure_set(v___f_1518_, 3, v_inst_1495_);
lean_closure_set(v___f_1518_, 4, v_inst_1496_);
lean_closure_set(v___f_1518_, 5, v_inst_1497_);
lean_closure_set(v___f_1518_, 6, v_inst_1498_);
lean_closure_set(v___f_1518_, 7, v_inst_1499_);
lean_closure_set(v___f_1518_, 8, v_inst_1500_);
lean_closure_set(v___f_1518_, 9, v_declName_1493_);
lean_closure_set(v___f_1518_, 10, v_toBind_1501_);
lean_closure_set(v___f_1518_, 11, v___f_1502_);
lean_closure_set(v___f_1518_, 12, v___x_1503_);
lean_closure_set(v___f_1518_, 13, v___x_1504_);
lean_closure_set(v___f_1518_, 14, v___x_1505_);
v___x_1519_ = lean_array_fget(v_modules_1515_, v_val_1513_);
lean_dec(v_val_1513_);
lean_dec_ref(v_modules_1515_);
v___x_1520_ = lean_box(v_isMeta_1506_);
v___f_1521_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__4___boxed), 12, 11);
lean_closure_set(v___f_1521_, 0, v___x_1519_);
lean_closure_set(v___f_1521_, 1, v_inst_1495_);
lean_closure_set(v___f_1521_, 2, v_inst_1496_);
lean_closure_set(v___f_1521_, 3, v_inst_1497_);
lean_closure_set(v___f_1521_, 4, v_inst_1498_);
lean_closure_set(v___f_1521_, 5, v_inst_1499_);
lean_closure_set(v___f_1521_, 6, v_inst_1500_);
lean_closure_set(v___f_1521_, 7, v_declName_1493_);
lean_closure_set(v___f_1521_, 8, v_toBind_1501_);
lean_closure_set(v___f_1521_, 9, v___f_1518_);
lean_closure_set(v___f_1521_, 10, v___x_1520_);
v___x_1522_ = lean_apply_4(v_toBind_1501_, lean_box(0), lean_box(0), v_getEnv_1507_, v___f_1521_);
return v___x_1522_;
}
}
v___jp_1509_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_box(0);
v___x_1511_ = lean_apply_2(v_toPure_1492_, lean_box(0), v___x_1510_);
return v___x_1511_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_toPure_1523_ = _args[0];
lean_object* v_declName_1524_ = _args[1];
lean_object* v___x_1525_ = _args[2];
lean_object* v_inst_1526_ = _args[3];
lean_object* v_inst_1527_ = _args[4];
lean_object* v_inst_1528_ = _args[5];
lean_object* v_inst_1529_ = _args[6];
lean_object* v_inst_1530_ = _args[7];
lean_object* v_inst_1531_ = _args[8];
lean_object* v_toBind_1532_ = _args[9];
lean_object* v___f_1533_ = _args[10];
lean_object* v___x_1534_ = _args[11];
lean_object* v___x_1535_ = _args[12];
lean_object* v___x_1536_ = _args[13];
lean_object* v_isMeta_1537_ = _args[14];
lean_object* v_getEnv_1538_ = _args[15];
lean_object* v_env_1539_ = _args[16];
_start:
{
uint8_t v_isMeta_boxed_1540_; lean_object* v_res_1541_; 
v_isMeta_boxed_1540_ = lean_unbox(v_isMeta_1537_);
v_res_1541_ = l_Lean_recordExtraModUseFromDecl___redArg___lam__5(v_toPure_1523_, v_declName_1524_, v___x_1525_, v_inst_1526_, v_inst_1527_, v_inst_1528_, v_inst_1529_, v_inst_1530_, v_inst_1531_, v_toBind_1532_, v___f_1533_, v___x_1534_, v___x_1535_, v___x_1536_, v_isMeta_boxed_1540_, v_getEnv_1538_, v_env_1539_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object* v_inst_1544_, lean_object* v_inst_1545_, lean_object* v_inst_1546_, lean_object* v_inst_1547_, lean_object* v_inst_1548_, lean_object* v_inst_1549_, lean_object* v_declName_1550_, uint8_t v_isMeta_1551_){
_start:
{
lean_object* v_toApplicative_1552_; lean_object* v_toBind_1553_; lean_object* v_getEnv_1554_; lean_object* v_toPure_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___f_1560_; lean_object* v___x_1561_; lean_object* v___f_1562_; lean_object* v___x_1563_; 
v_toApplicative_1552_ = lean_ctor_get(v_inst_1544_, 0);
v_toBind_1553_ = lean_ctor_get(v_inst_1544_, 1);
lean_inc_n(v_toBind_1553_, 2);
v_getEnv_1554_ = lean_ctor_get(v_inst_1545_, 0);
lean_inc_n(v_getEnv_1554_, 2);
v_toPure_1555_ = lean_ctor_get(v_toApplicative_1552_, 1);
lean_inc_n(v_toPure_1555_, 2);
v___x_1556_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___redArg___closed__0));
v___x_1557_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___redArg___closed__1));
v___x_1558_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__0, &l_Lean_getIndirectModUses___closed__0_once, _init_l_Lean_getIndirectModUses___closed__0);
v___x_1559_ = l_Lean_instInhabitedEffectiveImport_default;
v___f_1560_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1560_, 0, v_toPure_1555_);
v___x_1561_ = lean_box(v_isMeta_1551_);
v___f_1562_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_1562_, 0, v_toPure_1555_);
lean_closure_set(v___f_1562_, 1, v_declName_1550_);
lean_closure_set(v___f_1562_, 2, v___x_1559_);
lean_closure_set(v___f_1562_, 3, v_inst_1544_);
lean_closure_set(v___f_1562_, 4, v_inst_1545_);
lean_closure_set(v___f_1562_, 5, v_inst_1546_);
lean_closure_set(v___f_1562_, 6, v_inst_1547_);
lean_closure_set(v___f_1562_, 7, v_inst_1548_);
lean_closure_set(v___f_1562_, 8, v_inst_1549_);
lean_closure_set(v___f_1562_, 9, v_toBind_1553_);
lean_closure_set(v___f_1562_, 10, v___f_1560_);
lean_closure_set(v___f_1562_, 11, v___x_1558_);
lean_closure_set(v___f_1562_, 12, v___x_1556_);
lean_closure_set(v___f_1562_, 13, v___x_1557_);
lean_closure_set(v___f_1562_, 14, v___x_1561_);
lean_closure_set(v___f_1562_, 15, v_getEnv_1554_);
v___x_1563_ = lean_apply_4(v_toBind_1553_, lean_box(0), lean_box(0), v_getEnv_1554_, v___f_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___boxed(lean_object* v_inst_1564_, lean_object* v_inst_1565_, lean_object* v_inst_1566_, lean_object* v_inst_1567_, lean_object* v_inst_1568_, lean_object* v_inst_1569_, lean_object* v_declName_1570_, lean_object* v_isMeta_1571_){
_start:
{
uint8_t v_isMeta_boxed_1572_; lean_object* v_res_1573_; 
v_isMeta_boxed_1572_ = lean_unbox(v_isMeta_1571_);
v_res_1573_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_1564_, v_inst_1565_, v_inst_1566_, v_inst_1567_, v_inst_1568_, v_inst_1569_, v_declName_1570_, v_isMeta_boxed_1572_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl(lean_object* v_m_1574_, lean_object* v_inst_1575_, lean_object* v_inst_1576_, lean_object* v_inst_1577_, lean_object* v_inst_1578_, lean_object* v_inst_1579_, lean_object* v_inst_1580_, lean_object* v_declName_1581_, uint8_t v_isMeta_1582_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_1575_, v_inst_1576_, v_inst_1577_, v_inst_1578_, v_inst_1579_, v_inst_1580_, v_declName_1581_, v_isMeta_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___boxed(lean_object* v_m_1584_, lean_object* v_inst_1585_, lean_object* v_inst_1586_, lean_object* v_inst_1587_, lean_object* v_inst_1588_, lean_object* v_inst_1589_, lean_object* v_inst_1590_, lean_object* v_declName_1591_, lean_object* v_isMeta_1592_){
_start:
{
uint8_t v_isMeta_boxed_1593_; lean_object* v_res_1594_; 
v_isMeta_boxed_1593_ = lean_unbox(v_isMeta_1592_);
v_res_1594_ = l_Lean_recordExtraModUseFromDecl(v_m_1584_, v_inst_1585_, v_inst_1586_, v_inst_1587_, v_inst_1588_, v_inst_1589_, v_inst_1590_, v_declName_1591_, v_isMeta_boxed_1593_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object* v_s_1595_, lean_object* v_e_1596_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = lean_box(0);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object* v_x_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_box(0);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object* v_x_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(v_x_1600_);
lean_dec_ref(v_x_1600_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object* v_es_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_array_mk(v_es_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_));
v___x_1621_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object* v_a_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_();
return v_res_1623_;
}
}
LEAN_EXPORT uint8_t l_Lean_isExtraRevModUse(lean_object* v_env_1627_, lean_object* v_modIdx_1628_){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1629_ = ((lean_object*)(l_Lean_isExtraRevModUse___closed__0));
v___x_1630_ = l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt;
v___x_1631_ = 0;
v___x_1632_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1629_, v___x_1630_, v_env_1627_, v_modIdx_1628_, v___x_1631_);
v___x_1633_ = lean_array_get_size(v___x_1632_);
lean_dec_ref(v___x_1632_);
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1635_ = lean_nat_dec_eq(v___x_1633_, v___x_1634_);
if (v___x_1635_ == 0)
{
uint8_t v___x_1636_; 
v___x_1636_ = 1;
return v___x_1636_;
}
else
{
uint8_t v___x_1637_; 
v___x_1637_ = 0;
return v___x_1637_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isExtraRevModUse___boxed(lean_object* v_env_1638_, lean_object* v_modIdx_1639_){
_start:
{
uint8_t v_res_1640_; lean_object* v_r_1641_; 
v_res_1640_ = l_Lean_isExtraRevModUse(v_env_1638_, v_modIdx_1639_);
lean_dec(v_modIdx_1639_);
lean_dec_ref(v_env_1638_);
v_r_1641_ = lean_box(v_res_1640_);
return v_r_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__0(lean_object* v_addEntryFn_1642_, lean_object* v___x_1643_, lean_object* v_s_1644_){
_start:
{
lean_object* v_importedEntries_1645_; lean_object* v_state_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1654_; 
v_importedEntries_1645_ = lean_ctor_get(v_s_1644_, 0);
v_state_1646_ = lean_ctor_get(v_s_1644_, 1);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_s_1644_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1648_ = v_s_1644_;
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_state_1646_);
lean_inc(v_importedEntries_1645_);
lean_dec(v_s_1644_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v_state_1650_; lean_object* v___x_1652_; 
v_state_1650_ = lean_apply_2(v_addEntryFn_1642_, v_state_1646_, v___x_1643_);
if (v_isShared_1649_ == 0)
{
lean_ctor_set(v___x_1648_, 1, v_state_1650_);
v___x_1652_ = v___x_1648_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_importedEntries_1645_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_state_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1(lean_object* v___x_1655_, uint8_t v___x_1656_, lean_object* v_x_1657_){
_start:
{
lean_object* v_toEnvExtension_1658_; lean_object* v_addEntryFn_1659_; lean_object* v_asyncMode_1660_; uint8_t v_logWrites_1661_; lean_object* v___x_1662_; lean_object* v___f_1663_; lean_object* v___x_1664_; 
v_toEnvExtension_1658_ = lean_ctor_get(v___x_1655_, 0);
lean_inc_ref(v_toEnvExtension_1658_);
v_addEntryFn_1659_ = lean_ctor_get(v___x_1655_, 3);
lean_inc(v_addEntryFn_1659_);
lean_dec_ref(v___x_1655_);
v_asyncMode_1660_ = lean_ctor_get(v_toEnvExtension_1658_, 2);
lean_inc(v_asyncMode_1660_);
v_logWrites_1661_ = lean_ctor_get_uint8(v_toEnvExtension_1658_, sizeof(void*)*6);
v___x_1662_ = lean_box(0);
v___f_1663_ = lean_alloc_closure((void*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1663_, 0, v_addEntryFn_1659_);
lean_closure_set(v___f_1663_, 1, v___x_1662_);
v___x_1664_ = lean_box(0);
if (v_logWrites_1661_ == 0)
{
lean_object* v___x_1665_; 
v___x_1665_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1658_, v_x_1657_, v___f_1663_, v_asyncMode_1660_, v___x_1664_, v___x_1656_);
lean_dec(v_asyncMode_1660_);
return v___x_1665_;
}
else
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
lean_inc_ref(v_toEnvExtension_1658_);
v___x_1666_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1658_, v_x_1657_);
lean_dec_ref(v_x_1657_);
v___x_1667_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1658_, v___x_1666_, v___f_1663_, v_asyncMode_1660_, v___x_1664_, v___x_1656_);
lean_dec(v_asyncMode_1660_);
return v___x_1667_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___boxed(lean_object* v___x_1668_, lean_object* v___x_1669_, lean_object* v_x_1670_){
_start:
{
uint8_t v___x_287__boxed_1671_; lean_object* v_res_1672_; 
v___x_287__boxed_1671_ = lean_unbox(v___x_1669_);
v_res_1672_ = l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1(v___x_1668_, v___x_287__boxed_1671_, v_x_1670_);
return v_res_1672_;
}
}
static lean_object* _init_l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1674_ = ((lean_object*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__0));
v___x_1675_ = l_Lean_stringToMessageData(v___x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5(lean_object* v_modifyEnv_1676_, lean_object* v___f_1677_, lean_object* v_inst_1678_, lean_object* v_inst_1679_, lean_object* v_inst_1680_, lean_object* v_inst_1681_, lean_object* v_cls_1682_, lean_object* v_toBind_1683_, lean_object* v___f_1684_, uint8_t v_____do__lift_1685_){
_start:
{
if (v_____do__lift_1685_ == 0)
{
lean_object* v___x_1686_; 
lean_dec(v___f_1684_);
lean_dec(v_toBind_1683_);
lean_dec(v_cls_1682_);
lean_dec(v_inst_1681_);
lean_dec_ref(v_inst_1680_);
lean_dec_ref(v_inst_1679_);
lean_dec_ref(v_inst_1678_);
v___x_1686_ = lean_apply_1(v_modifyEnv_1676_, v___f_1677_);
return v___x_1686_;
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_dec_ref(v___f_1677_);
lean_dec(v_modifyEnv_1676_);
v___x_1687_ = lean_obj_once(&l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__1, &l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__1_once, _init_l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___closed__1);
v___x_1688_ = l_Lean_addTrace___redArg(v_inst_1678_, v_inst_1679_, v_inst_1680_, v_inst_1681_, v_cls_1682_, v___x_1687_);
v___x_1689_ = lean_apply_4(v_toBind_1683_, lean_box(0), lean_box(0), v___x_1688_, v___f_1684_);
return v___x_1689_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___boxed(lean_object* v_modifyEnv_1690_, lean_object* v___f_1691_, lean_object* v_inst_1692_, lean_object* v_inst_1693_, lean_object* v_inst_1694_, lean_object* v_inst_1695_, lean_object* v_cls_1696_, lean_object* v_toBind_1697_, lean_object* v___f_1698_, lean_object* v_____do__lift_1699_){
_start:
{
uint8_t v_____do__lift_320__boxed_1700_; lean_object* v_res_1701_; 
v_____do__lift_320__boxed_1700_ = lean_unbox(v_____do__lift_1699_);
v_res_1701_ = l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5(v_modifyEnv_1690_, v___f_1691_, v_inst_1692_, v_inst_1693_, v_inst_1694_, v_inst_1695_, v_cls_1696_, v_toBind_1697_, v___f_1698_, v_____do__lift_320__boxed_1700_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__2(lean_object* v___x_1702_, lean_object* v_toPure_1703_, lean_object* v_inst_1704_, lean_object* v_modifyEnv_1705_, lean_object* v_inst_1706_, lean_object* v_toBind_1707_, lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_inst_1710_, lean_object* v_____do__lift_1711_){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v___x_1712_ = l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt;
v___x_1713_ = lean_box(1);
v___x_1714_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1702_, v___x_1712_, v_____do__lift_1711_, v___x_1713_);
v___x_1715_ = l_List_isEmpty___redArg(v___x_1714_);
lean_dec(v___x_1714_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1717_; 
lean_dec(v_inst_1710_);
lean_dec_ref(v_inst_1709_);
lean_dec_ref(v_inst_1708_);
lean_dec(v_toBind_1707_);
lean_dec_ref(v_inst_1706_);
lean_dec(v_modifyEnv_1705_);
lean_dec_ref(v_inst_1704_);
v___x_1716_ = lean_box(0);
v___x_1717_ = lean_apply_2(v_toPure_1703_, lean_box(0), v___x_1716_);
return v___x_1717_;
}
else
{
lean_object* v_getInheritedTraceOptions_1718_; lean_object* v___x_1719_; lean_object* v___f_1720_; lean_object* v___f_1721_; lean_object* v_cls_1722_; lean_object* v___f_1723_; lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_getInheritedTraceOptions_1718_ = lean_ctor_get(v_inst_1704_, 2);
lean_inc(v_getInheritedTraceOptions_1718_);
v___x_1719_ = lean_box(v___x_1715_);
v___f_1720_ = lean_alloc_closure((void*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_1720_, 0, v___x_1712_);
lean_closure_set(v___f_1720_, 1, v___x_1719_);
lean_inc_ref(v___f_1720_);
lean_inc(v_modifyEnv_1705_);
v___f_1721_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1721_, 0, v_modifyEnv_1705_);
lean_closure_set(v___f_1721_, 1, v___f_1720_);
v_cls_1722_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__6___closed__1));
lean_inc_n(v_toBind_1707_, 3);
v___f_1723_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1723_, 0, v_inst_1706_);
lean_closure_set(v___f_1723_, 1, v_toPure_1703_);
lean_closure_set(v___f_1723_, 2, v_cls_1722_);
lean_closure_set(v___f_1723_, 3, v_toBind_1707_);
v___f_1724_ = lean_alloc_closure((void*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__5___boxed), 10, 9);
lean_closure_set(v___f_1724_, 0, v_modifyEnv_1705_);
lean_closure_set(v___f_1724_, 1, v___f_1720_);
lean_closure_set(v___f_1724_, 2, v_inst_1708_);
lean_closure_set(v___f_1724_, 3, v_inst_1704_);
lean_closure_set(v___f_1724_, 4, v_inst_1709_);
lean_closure_set(v___f_1724_, 5, v_inst_1710_);
lean_closure_set(v___f_1724_, 6, v_cls_1722_);
lean_closure_set(v___f_1724_, 7, v_toBind_1707_);
lean_closure_set(v___f_1724_, 8, v___f_1721_);
v___x_1725_ = lean_apply_4(v_toBind_1707_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1718_, v___f_1723_);
v___x_1726_ = lean_apply_4(v_toBind_1707_, lean_box(0), lean_box(0), v___x_1725_, v___f_1724_);
return v___x_1726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg(lean_object* v_inst_1727_, lean_object* v_inst_1728_, lean_object* v_inst_1729_, lean_object* v_inst_1730_, lean_object* v_inst_1731_, lean_object* v_inst_1732_){
_start:
{
lean_object* v_toApplicative_1733_; lean_object* v_toBind_1734_; lean_object* v_getEnv_1735_; lean_object* v_modifyEnv_1736_; lean_object* v_toPure_1737_; lean_object* v___x_1738_; lean_object* v___f_1739_; lean_object* v___x_1740_; 
v_toApplicative_1733_ = lean_ctor_get(v_inst_1727_, 0);
v_toBind_1734_ = lean_ctor_get(v_inst_1727_, 1);
lean_inc_n(v_toBind_1734_, 2);
v_getEnv_1735_ = lean_ctor_get(v_inst_1728_, 0);
lean_inc(v_getEnv_1735_);
v_modifyEnv_1736_ = lean_ctor_get(v_inst_1728_, 1);
lean_inc(v_modifyEnv_1736_);
lean_dec_ref(v_inst_1728_);
v_toPure_1737_ = lean_ctor_get(v_toApplicative_1733_, 1);
lean_inc(v_toPure_1737_);
v___x_1738_ = lean_box(0);
v___f_1739_ = lean_alloc_closure((void*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__2), 10, 9);
lean_closure_set(v___f_1739_, 0, v___x_1738_);
lean_closure_set(v___f_1739_, 1, v_toPure_1737_);
lean_closure_set(v___f_1739_, 2, v_inst_1729_);
lean_closure_set(v___f_1739_, 3, v_modifyEnv_1736_);
lean_closure_set(v___f_1739_, 4, v_inst_1730_);
lean_closure_set(v___f_1739_, 5, v_toBind_1734_);
lean_closure_set(v___f_1739_, 6, v_inst_1727_);
lean_closure_set(v___f_1739_, 7, v_inst_1731_);
lean_closure_set(v___f_1739_, 8, v_inst_1732_);
v___x_1740_ = lean_apply_4(v_toBind_1734_, lean_box(0), lean_box(0), v_getEnv_1735_, v___f_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule(lean_object* v_m_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, lean_object* v_inst_1744_, lean_object* v_inst_1745_, lean_object* v_inst_1746_, lean_object* v_inst_1747_){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Lean_recordExtraRevUseOfCurrentModule___redArg(v_inst_1742_, v_inst_1743_, v_inst_1744_, v_inst_1745_, v_inst_1746_, v_inst_1747_);
return v___x_1748_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1763_ = lean_unsigned_to_nat(4259277863u);
v___x_1764_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_));
v___x_1765_ = l_Lean_Name_num___override(v___x_1764_, v___x_1763_);
return v___x_1765_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_));
v___x_1768_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1769_ = l_Lean_Name_str___override(v___x_1768_, v___x_1767_);
return v___x_1769_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_));
v___x_1772_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1773_ = l_Lean_Name_str___override(v___x_1772_, v___x_1771_);
return v___x_1773_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1774_ = lean_unsigned_to_nat(2u);
v___x_1775_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1776_ = l_Lean_Name_num___override(v___x_1775_, v___x_1774_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1778_; uint8_t v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1778_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__6___closed__1));
v___x_1779_ = 0;
v___x_1780_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1781_ = l_Lean_registerTraceClass(v___x_1778_, v___x_1779_, v___x_1780_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2____boxed(lean_object* v_a_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_();
return v_res_1783_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_indirectModUseExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_indirectModUseExt);
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_ExtraModUses_0__Lean_extraModUses = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_ExtraModUses_0__Lean_extraModUses);
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt);
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ExtraModUses(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ExtraModUses(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ExtraModUses(builtin);
}
#ifdef __cplusplus
}
#endif
