// Lean compiler output
// Module: Lean.Meta.Tactic.AuxLemma
// Imports: public import Lean.AddDecl public import Lean.DefEqAttrib
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
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_defeqAttr;
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqAuxLemmaKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqAuxLemmaKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instBEqAuxLemmaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqAuxLemmaKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instBEqAuxLemmaKey___closed__0 = (const lean_object*)&l_Lean_Meta_instBEqAuxLemmaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instBEqAuxLemmaKey = (const lean_object*)&l_Lean_Meta_instBEqAuxLemmaKey___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_instHashableAuxLemmaKey_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instHashableAuxLemmaKey_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_instHashableAuxLemmaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableAuxLemmaKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instHashableAuxLemmaKey___closed__0 = (const lean_object*)&l_Lean_Meta_instHashableAuxLemmaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instHashableAuxLemmaKey = (const lean_object*)&l_Lean_Meta_instHashableAuxLemmaKey___closed__0_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedAuxLemmas_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedAuxLemmas;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "auxLemmasExt"};
static const lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(95, 124, 117, 209, 228, 238, 156, 196)}};
static const lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_auxLemmasExt;
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__6_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__7;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__8 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__8_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__3;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__4;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkAuxLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_proof"};
static const lean_object* l_Lean_Meta_mkAuxLemma___closed__0 = (const lean_object*)&l_Lean_Meta_mkAuxLemma___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkAuxLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkAuxLemma___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 32, 192, 173, 72, 22, 234, 250)}};
static const lean_object* l_Lean_Meta_mkAuxLemma___closed__1 = (const lean_object*)&l_Lean_Meta_mkAuxLemma___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqAuxLemmaKey_beq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_type_3_; uint8_t v_isPrivate_4_; uint8_t v_defeq_5_; lean_object* v_type_6_; uint8_t v_isPrivate_7_; uint8_t v_defeq_8_; uint8_t v___y_10_; uint8_t v___x_11_; 
v_type_3_ = lean_ctor_get(v_x_1_, 0);
v_isPrivate_4_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*1);
v_defeq_5_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*1 + 1);
v_type_6_ = lean_ctor_get(v_x_2_, 0);
v_isPrivate_7_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*1);
v_defeq_8_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*1 + 1);
v___x_11_ = lean_expr_eqv(v_type_3_, v_type_6_);
if (v___x_11_ == 0)
{
return v___x_11_;
}
else
{
if (v_isPrivate_7_ == 0)
{
if (v_isPrivate_4_ == 0)
{
v___y_10_ = v___x_11_;
goto v___jp_9_;
}
else
{
return v_isPrivate_7_;
}
}
else
{
if (v_isPrivate_4_ == 0)
{
return v_isPrivate_4_;
}
else
{
v___y_10_ = v_isPrivate_4_;
goto v___jp_9_;
}
}
}
v___jp_9_:
{
if (v_defeq_8_ == 0)
{
if (v_defeq_5_ == 0)
{
return v___y_10_;
}
else
{
return v_defeq_8_;
}
}
else
{
return v_defeq_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqAuxLemmaKey_beq___boxed(lean_object* v_x_12_, lean_object* v_x_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_12_, v_x_13_);
lean_dec_ref(v_x_13_);
lean_dec_ref(v_x_12_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_instHashableAuxLemmaKey_hash(lean_object* v_x_18_){
_start:
{
lean_object* v_type_19_; uint8_t v_isPrivate_20_; uint8_t v_defeq_21_; uint64_t v___x_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v___y_26_; 
v_type_19_ = lean_ctor_get(v_x_18_, 0);
v_isPrivate_20_ = lean_ctor_get_uint8(v_x_18_, sizeof(void*)*1);
v_defeq_21_ = lean_ctor_get_uint8(v_x_18_, sizeof(void*)*1 + 1);
v___x_22_ = 0ULL;
v___x_23_ = l_Lean_Expr_hash(v_type_19_);
v___x_24_ = lean_uint64_mix_hash(v___x_22_, v___x_23_);
if (v_isPrivate_20_ == 0)
{
uint64_t v___x_32_; 
v___x_32_ = 13ULL;
v___y_26_ = v___x_32_;
goto v___jp_25_;
}
else
{
uint64_t v___x_33_; 
v___x_33_ = 11ULL;
v___y_26_ = v___x_33_;
goto v___jp_25_;
}
v___jp_25_:
{
uint64_t v___x_27_; 
v___x_27_ = lean_uint64_mix_hash(v___x_24_, v___y_26_);
if (v_defeq_21_ == 0)
{
uint64_t v___x_28_; uint64_t v___x_29_; 
v___x_28_ = 13ULL;
v___x_29_ = lean_uint64_mix_hash(v___x_27_, v___x_28_);
return v___x_29_;
}
else
{
uint64_t v___x_30_; uint64_t v___x_31_; 
v___x_30_ = 11ULL;
v___x_31_ = lean_uint64_mix_hash(v___x_27_, v___x_30_);
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instHashableAuxLemmaKey_hash___boxed(lean_object* v_x_34_){
_start:
{
uint64_t v_res_35_; lean_object* v_r_36_; 
v_res_35_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_x_34_);
lean_dec_ref(v_x_34_);
v_r_36_ = lean_box_uint64(v_res_35_);
return v_r_36_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas_default(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Meta_instInhabitedAuxLemmas_default;
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_(lean_object* v___x_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2____boxed(lean_object* v___x_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_(v___x_47_);
return v_res_49_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___f_51_; 
v___x_50_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1);
v___f_51_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_51_, 0, v___x_50_);
return v___f_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; lean_object* v___x_65_; 
v___f_60_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_);
v___x_61_ = lean_box(0);
v___x_62_ = lean_box(1);
v___x_63_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_));
v___x_64_ = 0;
v___x_65_ = l_Lean_registerEnvExtension___redArg(v___f_60_, v___x_61_, v___x_62_, v___x_63_, v___x_64_, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2____boxed(lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(lean_object* v_kind_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; lean_object* v_auxDeclNGen_72_; lean_object* v___x_73_; lean_object* v_env_74_; lean_object* v___x_75_; lean_object* v_fst_76_; lean_object* v_snd_77_; lean_object* v___x_78_; lean_object* v_env_79_; lean_object* v_nextMacroScope_80_; lean_object* v_ngen_81_; lean_object* v_traceState_82_; lean_object* v_cache_83_; lean_object* v_recordedDeps_84_; lean_object* v_messages_85_; lean_object* v_infoState_86_; lean_object* v_snapshotTasks_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_96_; 
v___x_71_ = lean_st_ref_get(v___y_69_);
v_auxDeclNGen_72_ = lean_ctor_get(v___x_71_, 3);
lean_inc_ref(v_auxDeclNGen_72_);
lean_dec(v___x_71_);
v___x_73_ = lean_st_ref_get(v___y_69_);
v_env_74_ = lean_ctor_get(v___x_73_, 0);
lean_inc_ref(v_env_74_);
lean_dec(v___x_73_);
v___x_75_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_74_, v_auxDeclNGen_72_, v_kind_68_);
v_fst_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_fst_76_);
v_snd_77_ = lean_ctor_get(v___x_75_, 1);
lean_inc(v_snd_77_);
lean_dec_ref(v___x_75_);
v___x_78_ = lean_st_ref_take(v___y_69_);
v_env_79_ = lean_ctor_get(v___x_78_, 0);
v_nextMacroScope_80_ = lean_ctor_get(v___x_78_, 1);
v_ngen_81_ = lean_ctor_get(v___x_78_, 2);
v_traceState_82_ = lean_ctor_get(v___x_78_, 4);
v_cache_83_ = lean_ctor_get(v___x_78_, 5);
v_recordedDeps_84_ = lean_ctor_get(v___x_78_, 6);
v_messages_85_ = lean_ctor_get(v___x_78_, 7);
v_infoState_86_ = lean_ctor_get(v___x_78_, 8);
v_snapshotTasks_87_ = lean_ctor_get(v___x_78_, 9);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_96_ == 0)
{
lean_object* v_unused_97_; 
v_unused_97_ = lean_ctor_get(v___x_78_, 3);
lean_dec(v_unused_97_);
v___x_89_ = v___x_78_;
v_isShared_90_ = v_isSharedCheck_96_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_snapshotTasks_87_);
lean_inc(v_infoState_86_);
lean_inc(v_messages_85_);
lean_inc(v_recordedDeps_84_);
lean_inc(v_cache_83_);
lean_inc(v_traceState_82_);
lean_inc(v_ngen_81_);
lean_inc(v_nextMacroScope_80_);
lean_inc(v_env_79_);
lean_dec(v___x_78_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_96_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 3, v_snd_77_);
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_env_79_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v_nextMacroScope_80_);
lean_ctor_set(v_reuseFailAlloc_95_, 2, v_ngen_81_);
lean_ctor_set(v_reuseFailAlloc_95_, 3, v_snd_77_);
lean_ctor_set(v_reuseFailAlloc_95_, 4, v_traceState_82_);
lean_ctor_set(v_reuseFailAlloc_95_, 5, v_cache_83_);
lean_ctor_set(v_reuseFailAlloc_95_, 6, v_recordedDeps_84_);
lean_ctor_set(v_reuseFailAlloc_95_, 7, v_messages_85_);
lean_ctor_set(v_reuseFailAlloc_95_, 8, v_infoState_86_);
lean_ctor_set(v_reuseFailAlloc_95_, 9, v_snapshotTasks_87_);
v___x_92_ = v_reuseFailAlloc_95_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_st_ref_put(v___y_69_, v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v_fst_76_);
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg___boxed(lean_object* v_kind_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v_kind_98_, v___y_99_);
lean_dec(v___y_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0(lean_object* v_kind_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v_kind_102_, v___y_106_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___boxed(lean_object* v_kind_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0(v_kind_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__8___redArg(lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
lean_object* v_ks_120_; lean_object* v_vs_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_145_; 
v_ks_120_ = lean_ctor_get(v_x_116_, 0);
v_vs_121_ = lean_ctor_get(v_x_116_, 1);
v_isSharedCheck_145_ = !lean_is_exclusive(v_x_116_);
if (v_isSharedCheck_145_ == 0)
{
v___x_123_ = v_x_116_;
v_isShared_124_ = v_isSharedCheck_145_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_vs_121_);
lean_inc(v_ks_120_);
lean_dec(v_x_116_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_145_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = lean_array_get_size(v_ks_120_);
v___x_126_ = lean_nat_dec_lt(v_x_117_, v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
lean_dec(v_x_117_);
v___x_127_ = lean_array_push(v_ks_120_, v_x_118_);
v___x_128_ = lean_array_push(v_vs_121_, v_x_119_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v___x_128_);
lean_ctor_set(v___x_123_, 0, v___x_127_);
v___x_130_ = v___x_123_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___x_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
else
{
lean_object* v_k_x27_132_; uint8_t v___x_133_; 
v_k_x27_132_ = lean_array_fget_borrowed(v_ks_120_, v_x_117_);
v___x_133_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_118_, v_k_x27_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_135_; 
if (v_isShared_124_ == 0)
{
v___x_135_ = v___x_123_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_ks_120_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v_vs_121_);
v___x_135_ = v_reuseFailAlloc_139_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_unsigned_to_nat(1u);
v___x_137_ = lean_nat_add(v_x_117_, v___x_136_);
lean_dec(v_x_117_);
v_x_116_ = v___x_135_;
v_x_117_ = v___x_137_;
goto _start;
}
}
else
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_140_ = lean_array_fset(v_ks_120_, v_x_117_, v_x_118_);
v___x_141_ = lean_array_fset(v_vs_121_, v_x_117_, v_x_119_);
lean_dec(v_x_117_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v___x_141_);
lean_ctor_set(v___x_123_, 0, v___x_140_);
v___x_143_ = v___x_123_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(lean_object* v_n_146_, lean_object* v_k_147_, lean_object* v_v_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__8___redArg(v_n_146_, v___x_149_, v_k_147_, v_v_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(lean_object* v_x_152_, size_t v_x_153_, size_t v_x_154_, lean_object* v_x_155_, lean_object* v_x_156_){
_start:
{
if (lean_obj_tag(v_x_152_) == 0)
{
lean_object* v_es_157_; size_t v___x_158_; size_t v___x_159_; lean_object* v_j_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v_es_157_ = lean_ctor_get(v_x_152_, 0);
v___x_158_ = ((size_t)31ULL);
v___x_159_ = lean_usize_land(v_x_153_, v___x_158_);
v_j_160_ = lean_usize_to_nat(v___x_159_);
v___x_161_ = lean_array_get_size(v_es_157_);
v___x_162_ = lean_nat_dec_lt(v_j_160_, v___x_161_);
if (v___x_162_ == 0)
{
lean_dec(v_j_160_);
lean_dec(v_x_156_);
lean_dec_ref(v_x_155_);
return v_x_152_;
}
else
{
lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_201_; 
lean_inc_ref(v_es_157_);
v_isSharedCheck_201_ = !lean_is_exclusive(v_x_152_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v_x_152_, 0);
lean_dec(v_unused_202_);
v___x_164_ = v_x_152_;
v_isShared_165_ = v_isSharedCheck_201_;
goto v_resetjp_163_;
}
else
{
lean_dec(v_x_152_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_201_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v_v_166_; lean_object* v___x_167_; lean_object* v_xs_x27_168_; lean_object* v___y_170_; 
v_v_166_ = lean_array_fget(v_es_157_, v_j_160_);
v___x_167_ = lean_box(0);
v_xs_x27_168_ = lean_array_fset(v_es_157_, v_j_160_, v___x_167_);
switch(lean_obj_tag(v_v_166_))
{
case 0:
{
lean_object* v_key_175_; lean_object* v_val_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_186_; 
v_key_175_ = lean_ctor_get(v_v_166_, 0);
v_val_176_ = lean_ctor_get(v_v_166_, 1);
v_isSharedCheck_186_ = !lean_is_exclusive(v_v_166_);
if (v_isSharedCheck_186_ == 0)
{
v___x_178_ = v_v_166_;
v_isShared_179_ = v_isSharedCheck_186_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_val_176_);
lean_inc(v_key_175_);
lean_dec(v_v_166_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_186_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
uint8_t v___x_180_; 
v___x_180_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_155_, v_key_175_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
lean_del_object(v___x_178_);
v___x_181_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_175_, v_val_176_, v_x_155_, v_x_156_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
v___y_170_ = v___x_182_;
goto v___jp_169_;
}
else
{
lean_object* v___x_184_; 
lean_dec(v_val_176_);
lean_dec(v_key_175_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_x_156_);
lean_ctor_set(v___x_178_, 0, v_x_155_);
v___x_184_ = v___x_178_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_x_155_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_x_156_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
v___y_170_ = v___x_184_;
goto v___jp_169_;
}
}
}
}
case 1:
{
lean_object* v_node_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_199_; 
v_node_187_ = lean_ctor_get(v_v_166_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v_v_166_);
if (v_isSharedCheck_199_ == 0)
{
v___x_189_ = v_v_166_;
v_isShared_190_ = v_isSharedCheck_199_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_node_187_);
lean_dec(v_v_166_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_199_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
size_t v___x_191_; size_t v___x_192_; size_t v___x_193_; size_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_191_ = ((size_t)5ULL);
v___x_192_ = lean_usize_shift_right(v_x_153_, v___x_191_);
v___x_193_ = ((size_t)1ULL);
v___x_194_ = lean_usize_add(v_x_154_, v___x_193_);
v___x_195_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_node_187_, v___x_192_, v___x_194_, v_x_155_, v_x_156_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_195_);
v___x_197_ = v___x_189_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
v___y_170_ = v___x_197_;
goto v___jp_169_;
}
}
}
default: 
{
lean_object* v___x_200_; 
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v_x_155_);
lean_ctor_set(v___x_200_, 1, v_x_156_);
v___y_170_ = v___x_200_;
goto v___jp_169_;
}
}
v___jp_169_:
{
lean_object* v___x_171_; lean_object* v___x_173_; 
v___x_171_ = lean_array_fset(v_xs_x27_168_, v_j_160_, v___y_170_);
lean_dec(v_j_160_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_171_);
v___x_173_ = v___x_164_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v___x_171_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
else
{
lean_object* v_ks_203_; lean_object* v_vs_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_222_; 
v_ks_203_ = lean_ctor_get(v_x_152_, 0);
v_vs_204_ = lean_ctor_get(v_x_152_, 1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_x_152_);
if (v_isSharedCheck_222_ == 0)
{
v___x_206_ = v_x_152_;
v_isShared_207_ = v_isSharedCheck_222_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_vs_204_);
lean_inc(v_ks_203_);
lean_dec(v_x_152_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_222_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_ks_203_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_vs_204_);
v___x_209_ = v_reuseFailAlloc_221_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v_newNode_210_; size_t v___x_211_; uint8_t v___x_212_; 
v_newNode_210_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(v___x_209_, v_x_155_, v_x_156_);
v___x_211_ = ((size_t)7ULL);
v___x_212_ = lean_usize_dec_le(v___x_211_, v_x_154_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_213_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_210_);
v___x_214_ = lean_unsigned_to_nat(4u);
v___x_215_ = lean_nat_dec_lt(v___x_213_, v___x_214_);
lean_dec(v___x_213_);
if (v___x_215_ == 0)
{
lean_object* v_ks_216_; lean_object* v_vs_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_ks_216_ = lean_ctor_get(v_newNode_210_, 0);
lean_inc_ref(v_ks_216_);
v_vs_217_ = lean_ctor_get(v_newNode_210_, 1);
lean_inc_ref(v_vs_217_);
lean_dec_ref(v_newNode_210_);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_219_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0);
v___x_220_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(v_x_154_, v_ks_216_, v_vs_217_, v___x_218_, v___x_219_);
lean_dec_ref(v_vs_217_);
lean_dec_ref(v_ks_216_);
return v___x_220_;
}
else
{
return v_newNode_210_;
}
}
else
{
return v_newNode_210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(size_t v_depth_223_, lean_object* v_keys_224_, lean_object* v_vals_225_, lean_object* v_i_226_, lean_object* v_entries_227_){
_start:
{
lean_object* v___x_228_; uint8_t v___x_229_; 
v___x_228_ = lean_array_get_size(v_keys_224_);
v___x_229_ = lean_nat_dec_lt(v_i_226_, v___x_228_);
if (v___x_229_ == 0)
{
lean_dec(v_i_226_);
return v_entries_227_;
}
else
{
lean_object* v_k_230_; lean_object* v_v_231_; uint64_t v___x_232_; size_t v_h_233_; size_t v___x_234_; lean_object* v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; size_t v_h_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_k_230_ = lean_array_fget_borrowed(v_keys_224_, v_i_226_);
v_v_231_ = lean_array_fget_borrowed(v_vals_225_, v_i_226_);
v___x_232_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_k_230_);
v_h_233_ = lean_uint64_to_usize(v___x_232_);
v___x_234_ = ((size_t)5ULL);
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = ((size_t)1ULL);
v___x_237_ = lean_usize_sub(v_depth_223_, v___x_236_);
v___x_238_ = lean_usize_mul(v___x_234_, v___x_237_);
v_h_239_ = lean_usize_shift_right(v_h_233_, v___x_238_);
v___x_240_ = lean_nat_add(v_i_226_, v___x_235_);
lean_dec(v_i_226_);
lean_inc(v_v_231_);
lean_inc(v_k_230_);
v___x_241_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_entries_227_, v_h_239_, v_depth_223_, v_k_230_, v_v_231_);
v_i_226_ = v___x_240_;
v_entries_227_ = v___x_241_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_depth_243_, lean_object* v_keys_244_, lean_object* v_vals_245_, lean_object* v_i_246_, lean_object* v_entries_247_){
_start:
{
size_t v_depth_boxed_248_; lean_object* v_res_249_; 
v_depth_boxed_248_ = lean_unbox_usize(v_depth_243_);
lean_dec(v_depth_243_);
v_res_249_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(v_depth_boxed_248_, v_keys_244_, v_vals_245_, v_i_246_, v_entries_247_);
lean_dec_ref(v_vals_245_);
lean_dec_ref(v_keys_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___boxed(lean_object* v_x_250_, lean_object* v_x_251_, lean_object* v_x_252_, lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
size_t v_x_7067__boxed_255_; size_t v_x_7068__boxed_256_; lean_object* v_res_257_; 
v_x_7067__boxed_255_ = lean_unbox_usize(v_x_251_);
lean_dec(v_x_251_);
v_x_7068__boxed_256_ = lean_unbox_usize(v_x_252_);
lean_dec(v_x_252_);
v_res_257_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_x_250_, v_x_7067__boxed_255_, v_x_7068__boxed_256_, v_x_253_, v_x_254_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(lean_object* v_x_258_, lean_object* v_x_259_, lean_object* v_x_260_){
_start:
{
uint64_t v___x_261_; size_t v___x_262_; size_t v___x_263_; lean_object* v___x_264_; 
v___x_261_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_x_259_);
v___x_262_ = lean_uint64_to_usize(v___x_261_);
v___x_263_ = ((size_t)1ULL);
v___x_264_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_x_258_, v___x_262_, v___x_263_, v_x_259_, v_x_260_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___lam__0(lean_object* v_a_265_, lean_object* v_levelParams_266_, lean_object* v___x_267_, lean_object* v_x_268_){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v_a_265_);
lean_ctor_set(v___x_269_, 1, v_levelParams_266_);
v___x_270_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(v_x_268_, v___x_267_, v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___redArg(lean_object* v_keys_271_, lean_object* v_vals_272_, lean_object* v_i_273_, lean_object* v_k_274_){
_start:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_array_get_size(v_keys_271_);
v___x_276_ = lean_nat_dec_lt(v_i_273_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
lean_dec(v_i_273_);
v___x_277_ = lean_box(0);
return v___x_277_;
}
else
{
lean_object* v_k_x27_278_; uint8_t v___x_279_; 
v_k_x27_278_ = lean_array_fget_borrowed(v_keys_271_, v_i_273_);
v___x_279_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_k_274_, v_k_x27_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = lean_nat_add(v_i_273_, v___x_280_);
lean_dec(v_i_273_);
v_i_273_ = v___x_281_;
goto _start;
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_array_fget_borrowed(v_vals_272_, v_i_273_);
lean_dec(v_i_273_);
lean_inc(v___x_283_);
v___x_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___redArg___boxed(lean_object* v_keys_285_, lean_object* v_vals_286_, lean_object* v_i_287_, lean_object* v_k_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___redArg(v_keys_285_, v_vals_286_, v_i_287_, v_k_288_);
lean_dec_ref(v_k_288_);
lean_dec_ref(v_vals_286_);
lean_dec_ref(v_keys_285_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___redArg(lean_object* v_x_290_, size_t v_x_291_, lean_object* v_x_292_){
_start:
{
if (lean_obj_tag(v_x_290_) == 0)
{
lean_object* v_es_293_; lean_object* v___x_294_; size_t v___x_295_; size_t v___x_296_; lean_object* v_j_297_; lean_object* v___x_298_; 
v_es_293_ = lean_ctor_get(v_x_290_, 0);
v___x_294_ = lean_box(2);
v___x_295_ = ((size_t)31ULL);
v___x_296_ = lean_usize_land(v_x_291_, v___x_295_);
v_j_297_ = lean_usize_to_nat(v___x_296_);
v___x_298_ = lean_array_get_borrowed(v___x_294_, v_es_293_, v_j_297_);
lean_dec(v_j_297_);
switch(lean_obj_tag(v___x_298_))
{
case 0:
{
lean_object* v_key_299_; lean_object* v_val_300_; uint8_t v___x_301_; 
v_key_299_ = lean_ctor_get(v___x_298_, 0);
v_val_300_ = lean_ctor_get(v___x_298_, 1);
v___x_301_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_292_, v_key_299_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
v___x_302_ = lean_box(0);
return v___x_302_;
}
else
{
lean_object* v___x_303_; 
lean_inc(v_val_300_);
v___x_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_303_, 0, v_val_300_);
return v___x_303_;
}
}
case 1:
{
lean_object* v_node_304_; size_t v___x_305_; size_t v___x_306_; 
v_node_304_ = lean_ctor_get(v___x_298_, 0);
v___x_305_ = ((size_t)5ULL);
v___x_306_ = lean_usize_shift_right(v_x_291_, v___x_305_);
v_x_290_ = v_node_304_;
v_x_291_ = v___x_306_;
goto _start;
}
default: 
{
lean_object* v___x_308_; 
v___x_308_ = lean_box(0);
return v___x_308_;
}
}
}
else
{
lean_object* v_ks_309_; lean_object* v_vs_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_ks_309_ = lean_ctor_get(v_x_290_, 0);
v_vs_310_ = lean_ctor_get(v_x_290_, 1);
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___redArg(v_ks_309_, v_vs_310_, v___x_311_, v_x_292_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___redArg___boxed(lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
size_t v_x_7261__boxed_316_; lean_object* v_res_317_; 
v_x_7261__boxed_316_ = lean_unbox_usize(v_x_314_);
lean_dec(v_x_314_);
v_res_317_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___redArg(v_x_313_, v_x_7261__boxed_316_, v_x_315_);
lean_dec_ref(v_x_315_);
lean_dec_ref(v_x_313_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg(lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
uint64_t v___x_320_; size_t v___x_321_; lean_object* v___x_322_; 
v___x_320_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_x_319_);
v___x_321_ = lean_uint64_to_usize(v___x_320_);
v___x_322_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___redArg(v_x_318_, v___x_321_, v_x_319_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg___boxed(lean_object* v_x_323_, lean_object* v_x_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg(v_x_323_, v_x_324_);
lean_dec_ref(v_x_324_);
lean_dec_ref(v_x_323_);
return v_res_325_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__5(lean_object* v_x_326_, lean_object* v_x_327_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
if (lean_obj_tag(v_x_327_) == 0)
{
uint8_t v___x_328_; 
v___x_328_ = 1;
return v___x_328_;
}
else
{
uint8_t v___x_329_; 
v___x_329_ = 0;
return v___x_329_;
}
}
else
{
if (lean_obj_tag(v_x_327_) == 0)
{
uint8_t v___x_330_; 
v___x_330_ = 0;
return v___x_330_;
}
else
{
lean_object* v_head_331_; lean_object* v_tail_332_; lean_object* v_head_333_; lean_object* v_tail_334_; uint8_t v___x_335_; 
v_head_331_ = lean_ctor_get(v_x_326_, 0);
v_tail_332_ = lean_ctor_get(v_x_326_, 1);
v_head_333_ = lean_ctor_get(v_x_327_, 0);
v_tail_334_ = lean_ctor_get(v_x_327_, 1);
v___x_335_ = lean_name_eq(v_head_331_, v_head_333_);
if (v___x_335_ == 0)
{
return v___x_335_;
}
else
{
v_x_326_ = v_tail_332_;
v_x_327_ = v_tail_334_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__5___boxed(lean_object* v_x_337_, lean_object* v_x_338_){
_start:
{
uint8_t v_res_339_; lean_object* v_r_340_; 
v_res_339_ = l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__5(v_x_337_, v_x_338_);
lean_dec(v_x_338_);
lean_dec(v_x_337_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8_spec__12(lean_object* v_msgData_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v___x_347_; lean_object* v_env_348_; uint8_t v___x_349_; lean_object* v_env_350_; lean_object* v___x_351_; lean_object* v_toCold_352_; lean_object* v_mctx_353_; lean_object* v_lctx_354_; lean_object* v_options_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_347_ = lean_st_ref_get(v___y_345_);
v_env_348_ = lean_ctor_get(v___x_347_, 0);
lean_inc_ref(v_env_348_);
lean_dec(v___x_347_);
v___x_349_ = 0;
v_env_350_ = l_Lean_Environment_setRecordingDeps(v_env_348_, v___x_349_);
v___x_351_ = lean_st_ref_get(v___y_343_);
v_toCold_352_ = lean_ctor_get(v___y_344_, 0);
v_mctx_353_ = lean_ctor_get(v___x_351_, 0);
lean_inc_ref(v_mctx_353_);
lean_dec(v___x_351_);
v_lctx_354_ = lean_ctor_get(v___y_342_, 2);
v_options_355_ = lean_ctor_get(v_toCold_352_, 2);
lean_inc_ref(v_options_355_);
lean_inc_ref(v_lctx_354_);
v___x_356_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_356_, 0, v_env_350_);
lean_ctor_set(v___x_356_, 1, v_mctx_353_);
lean_ctor_set(v___x_356_, 2, v_lctx_354_);
lean_ctor_set(v___x_356_, 3, v_options_355_);
v___x_357_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v_msgData_341_);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8_spec__12___boxed(lean_object* v_msgData_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8_spec__12(v_msgData_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg(lean_object* v_msg_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_ref_372_; lean_object* v___x_373_; lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_382_; 
v_ref_372_ = lean_ctor_get(v___y_369_, 2);
v___x_373_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8_spec__12(v_msg_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
v_a_374_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_382_ == 0)
{
v___x_376_ = v___x_373_;
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_373_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_380_; 
lean_inc(v_ref_372_);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v_ref_372_);
lean_ctor_set(v___x_378_, 1, v_a_374_);
if (v_isShared_377_ == 0)
{
lean_ctor_set_tag(v___x_376_, 1);
lean_ctor_set(v___x_376_, 0, v___x_378_);
v___x_380_ = v___x_376_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_msg_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg(v_msg_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
return v_res_389_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__0));
v___x_392_ = l_Lean_stringToMessageData(v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__2));
v___x_395_ = l_Lean_stringToMessageData(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__4));
v___x_398_ = l_Lean_stringToMessageData(v___x_397_);
return v___x_398_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__6));
v___x_401_ = l_Lean_stringToMessageData(v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__8));
v___x_404_ = l_Lean_stringToMessageData(v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg(lean_object* v_attrName_405_, lean_object* v_declName_406_, lean_object* v_asyncPrefix_x3f_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v___y_414_; 
if (lean_obj_tag(v_asyncPrefix_x3f_407_) == 0)
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_MessageData_nil;
v___y_414_ = v___x_427_;
goto v___jp_413_;
}
else
{
lean_object* v_val_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_val_428_ = lean_ctor_get(v_asyncPrefix_x3f_407_, 0);
lean_inc(v_val_428_);
lean_dec_ref_known(v_asyncPrefix_x3f_407_, 1);
v___x_429_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__7, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__7_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__7);
v___x_430_ = l_Lean_MessageData_ofName(v_val_428_);
v___x_431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_429_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__9, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__9_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__9);
v___x_433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___y_414_ = v___x_433_;
goto v___jp_413_;
}
v___jp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_415_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1);
v___x_416_ = l_Lean_MessageData_ofName(v_attrName_405_);
v___x_417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_415_);
lean_ctor_set(v___x_417_, 1, v___x_416_);
v___x_418_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3);
v___x_419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_417_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = 0;
v___x_421_ = l_Lean_MessageData_ofConstName(v_declName_406_, v___x_420_);
v___x_422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_419_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
v___x_423_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__5, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__5_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__5);
v___x_424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set(v___x_424_, 1, v___x_423_);
v___x_425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
lean_ctor_set(v___x_425_, 1, v___y_414_);
v___x_426_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg(v___x_425_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
return v___x_426_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___boxed(lean_object* v_attrName_434_, lean_object* v_declName_435_, lean_object* v_asyncPrefix_x3f_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg(v_attrName_434_, v_declName_435_, v_asyncPrefix_x3f_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___lam__0(lean_object* v_addEntryFn_443_, lean_object* v_decl_444_, lean_object* v_s_445_){
_start:
{
lean_object* v_importedEntries_446_; lean_object* v_state_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_455_; 
v_importedEntries_446_ = lean_ctor_get(v_s_445_, 0);
v_state_447_ = lean_ctor_get(v_s_445_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v_s_445_);
if (v_isSharedCheck_455_ == 0)
{
v___x_449_ = v_s_445_;
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_state_447_);
lean_inc(v_importedEntries_446_);
lean_dec(v_s_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v_state_451_; lean_object* v___x_453_; 
v_state_451_ = lean_apply_2(v_addEntryFn_443_, v_state_447_, v_decl_444_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 1, v_state_451_);
v___x_453_ = v___x_449_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_importedEntries_446_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_state_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___boxed(lean_object* v___dummy_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg();
return v_res_461_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__0));
v___x_464_ = l_Lean_stringToMessageData(v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(lean_object* v_attrName_465_, lean_object* v_declName_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_472_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__1);
v___x_473_ = l_Lean_MessageData_ofName(v_attrName_465_);
v___x_474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg___closed__3);
v___x_476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_474_);
lean_ctor_set(v___x_476_, 1, v___x_475_);
v___x_477_ = 0;
v___x_478_ = l_Lean_MessageData_ofConstName(v_declName_466_, v___x_477_);
v___x_479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_476_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___closed__1);
v___x_481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg(v___x_481_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___boxed(lean_object* v_attrName_483_, lean_object* v_declName_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(v_attrName_483_, v_declName_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_490_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0);
v___x_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0);
v___x_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2(void){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg();
return v___x_495_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__3(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0);
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
return v___x_497_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__4(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0);
v___x_500_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
lean_ctor_set(v___x_500_, 2, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_501_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__4, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__4_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__4);
v___x_502_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__3, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__3_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__3);
v___x_503_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__0);
v___x_504_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2);
v___x_505_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
lean_ctor_set(v___x_505_, 1, v___x_503_);
lean_ctor_set(v___x_505_, 2, v___x_502_);
lean_ctor_set(v___x_505_, 3, v___x_503_);
lean_ctor_set(v___x_505_, 4, v___x_503_);
lean_ctor_set(v___x_505_, 5, v___x_503_);
lean_ctor_set(v___x_505_, 6, v___x_503_);
lean_ctor_set(v___x_505_, 7, v___x_501_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3(lean_object* v_attr_506_, lean_object* v_decl_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___x_568_; lean_object* v_env_569_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v___x_584_; 
v___x_568_ = lean_st_ref_get(v___y_511_);
v_env_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc_ref(v_env_569_);
lean_dec(v___x_568_);
v___x_584_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_569_, v_decl_507_);
if (lean_obj_tag(v___x_584_) == 0)
{
v___y_571_ = v___y_508_;
v___y_572_ = v___y_509_;
v___y_573_ = v___y_510_;
v___y_574_ = v___y_511_;
goto v___jp_570_;
}
else
{
lean_object* v_attr_585_; lean_object* v_toAttributeImplCore_586_; lean_object* v_name_587_; lean_object* v___x_588_; 
lean_dec_ref_known(v___x_584_, 1);
lean_dec_ref(v_env_569_);
v_attr_585_ = lean_ctor_get(v_attr_506_, 0);
lean_inc_ref(v_attr_585_);
lean_dec_ref(v_attr_506_);
v_toAttributeImplCore_586_ = lean_ctor_get(v_attr_585_, 0);
lean_inc_ref(v_toAttributeImplCore_586_);
lean_dec_ref(v_attr_585_);
v_name_587_ = lean_ctor_get(v_toAttributeImplCore_586_, 1);
lean_inc(v_name_587_);
lean_dec_ref(v_toAttributeImplCore_586_);
v___x_588_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(v_name_587_, v_decl_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
return v___x_588_;
}
v___jp_513_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v_mctx_529_; lean_object* v_zetaDeltaFVarIds_530_; lean_object* v_postponed_531_; lean_object* v_diag_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_543_; 
v___x_525_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1);
v___x_526_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_526_, 0, v___y_524_);
lean_ctor_set(v___x_526_, 1, v___y_522_);
lean_ctor_set(v___x_526_, 2, v___y_521_);
lean_ctor_set(v___x_526_, 3, v___y_516_);
lean_ctor_set(v___x_526_, 4, v___y_515_);
lean_ctor_set(v___x_526_, 5, v___x_525_);
lean_ctor_set(v___x_526_, 6, v___y_514_);
lean_ctor_set(v___x_526_, 7, v___y_517_);
lean_ctor_set(v___x_526_, 8, v___y_518_);
lean_ctor_set(v___x_526_, 9, v___y_523_);
v___x_527_ = lean_st_ref_put(v___y_520_, v___x_526_);
v___x_528_ = lean_st_ref_take(v___y_519_);
v_mctx_529_ = lean_ctor_get(v___x_528_, 0);
v_zetaDeltaFVarIds_530_ = lean_ctor_get(v___x_528_, 2);
v_postponed_531_ = lean_ctor_get(v___x_528_, 3);
v_diag_532_ = lean_ctor_get(v___x_528_, 4);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_543_ == 0)
{
lean_object* v_unused_544_; 
v_unused_544_ = lean_ctor_get(v___x_528_, 1);
lean_dec(v_unused_544_);
v___x_534_ = v___x_528_;
v_isShared_535_ = v_isSharedCheck_543_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_diag_532_);
lean_inc(v_postponed_531_);
lean_inc(v_zetaDeltaFVarIds_530_);
lean_inc(v_mctx_529_);
lean_dec(v___x_528_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_543_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_536_ = lean_box(0);
v___x_537_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 1, v___x_537_);
v___x_539_ = v___x_534_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_mctx_529_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_542_, 2, v_zetaDeltaFVarIds_530_);
lean_ctor_set(v_reuseFailAlloc_542_, 3, v_postponed_531_);
lean_ctor_set(v_reuseFailAlloc_542_, 4, v_diag_532_);
v___x_539_ = v_reuseFailAlloc_542_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_st_ref_put(v___y_519_, v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_536_);
return v___x_541_;
}
}
}
v___jp_545_:
{
lean_object* v___x_548_; lean_object* v_ext_549_; lean_object* v_toEnvExtension_550_; lean_object* v_env_551_; lean_object* v_nextMacroScope_552_; lean_object* v_ngen_553_; lean_object* v_auxDeclNGen_554_; lean_object* v_traceState_555_; lean_object* v_recordedDeps_556_; lean_object* v_messages_557_; lean_object* v_infoState_558_; lean_object* v_snapshotTasks_559_; lean_object* v_addEntryFn_560_; lean_object* v_asyncMode_561_; uint8_t v_logWrites_562_; lean_object* v___f_563_; uint8_t v___x_564_; 
v___x_548_ = lean_st_ref_take(v___y_547_);
v_ext_549_ = lean_ctor_get(v_attr_506_, 1);
lean_inc_ref(v_ext_549_);
lean_dec_ref(v_attr_506_);
v_toEnvExtension_550_ = lean_ctor_get(v_ext_549_, 0);
lean_inc_ref(v_toEnvExtension_550_);
v_env_551_ = lean_ctor_get(v___x_548_, 0);
lean_inc_ref(v_env_551_);
v_nextMacroScope_552_ = lean_ctor_get(v___x_548_, 1);
lean_inc(v_nextMacroScope_552_);
v_ngen_553_ = lean_ctor_get(v___x_548_, 2);
lean_inc_ref(v_ngen_553_);
v_auxDeclNGen_554_ = lean_ctor_get(v___x_548_, 3);
lean_inc_ref(v_auxDeclNGen_554_);
v_traceState_555_ = lean_ctor_get(v___x_548_, 4);
lean_inc_ref(v_traceState_555_);
v_recordedDeps_556_ = lean_ctor_get(v___x_548_, 6);
lean_inc_ref(v_recordedDeps_556_);
v_messages_557_ = lean_ctor_get(v___x_548_, 7);
lean_inc_ref(v_messages_557_);
v_infoState_558_ = lean_ctor_get(v___x_548_, 8);
lean_inc_ref(v_infoState_558_);
v_snapshotTasks_559_ = lean_ctor_get(v___x_548_, 9);
lean_inc_ref(v_snapshotTasks_559_);
lean_dec(v___x_548_);
v_addEntryFn_560_ = lean_ctor_get(v_ext_549_, 3);
lean_inc(v_addEntryFn_560_);
lean_dec_ref(v_ext_549_);
v_asyncMode_561_ = lean_ctor_get(v_toEnvExtension_550_, 2);
lean_inc(v_asyncMode_561_);
v_logWrites_562_ = lean_ctor_get_uint8(v_toEnvExtension_550_, sizeof(void*)*6);
lean_inc(v_decl_507_);
v___f_563_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___lam__0), 3, 2);
lean_closure_set(v___f_563_, 0, v_addEntryFn_560_);
lean_closure_set(v___f_563_, 1, v_decl_507_);
v___x_564_ = 1;
if (v_logWrites_562_ == 0)
{
lean_object* v___x_565_; 
v___x_565_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_550_, v_env_551_, v___f_563_, v_asyncMode_561_, v_decl_507_, v___x_564_);
lean_dec(v_asyncMode_561_);
v___y_514_ = v_recordedDeps_556_;
v___y_515_ = v_traceState_555_;
v___y_516_ = v_auxDeclNGen_554_;
v___y_517_ = v_messages_557_;
v___y_518_ = v_infoState_558_;
v___y_519_ = v___y_546_;
v___y_520_ = v___y_547_;
v___y_521_ = v_ngen_553_;
v___y_522_ = v_nextMacroScope_552_;
v___y_523_ = v_snapshotTasks_559_;
v___y_524_ = v___x_565_;
goto v___jp_513_;
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; 
lean_inc_ref(v_toEnvExtension_550_);
v___x_566_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_550_, v_env_551_);
lean_dec_ref(v_env_551_);
v___x_567_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_550_, v___x_566_, v___f_563_, v_asyncMode_561_, v_decl_507_, v___x_564_);
lean_dec(v_asyncMode_561_);
v___y_514_ = v_recordedDeps_556_;
v___y_515_ = v_traceState_555_;
v___y_516_ = v_auxDeclNGen_554_;
v___y_517_ = v_messages_557_;
v___y_518_ = v_infoState_558_;
v___y_519_ = v___y_546_;
v___y_520_ = v___y_547_;
v___y_521_ = v_ngen_553_;
v___y_522_ = v_nextMacroScope_552_;
v___y_523_ = v_snapshotTasks_559_;
v___y_524_ = v___x_567_;
goto v___jp_513_;
}
}
v___jp_570_:
{
lean_object* v_ext_575_; lean_object* v_toEnvExtension_576_; lean_object* v_attr_577_; lean_object* v_asyncMode_578_; uint8_t v___x_579_; 
v_ext_575_ = lean_ctor_get(v_attr_506_, 1);
v_toEnvExtension_576_ = lean_ctor_get(v_ext_575_, 0);
v_attr_577_ = lean_ctor_get(v_attr_506_, 0);
v_asyncMode_578_ = lean_ctor_get(v_toEnvExtension_576_, 2);
lean_inc(v_decl_507_);
lean_inc_ref(v_env_569_);
v___x_579_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_569_, v_decl_507_, v_asyncMode_578_);
if (v___x_579_ == 0)
{
lean_object* v_toAttributeImplCore_580_; lean_object* v_name_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
lean_inc_ref(v_attr_577_);
lean_dec_ref(v_attr_506_);
v_toAttributeImplCore_580_ = lean_ctor_get(v_attr_577_, 0);
lean_inc_ref(v_toAttributeImplCore_580_);
lean_dec_ref(v_attr_577_);
v_name_581_ = lean_ctor_get(v_toAttributeImplCore_580_, 1);
lean_inc(v_name_581_);
lean_dec_ref(v_toAttributeImplCore_580_);
v___x_582_ = l_Lean_Environment_asyncPrefix_x3f(v_env_569_);
v___x_583_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg(v_name_581_, v_decl_507_, v___x_582_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
return v___x_583_;
}
else
{
lean_dec_ref(v_env_569_);
v___y_546_ = v___y_572_;
v___y_547_ = v___y_574_;
goto v___jp_545_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___boxed(lean_object* v_attr_589_, lean_object* v_decl_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3(v_attr_589_, v_decl_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma(lean_object* v_levelParams_600_, lean_object* v_type_601_, lean_object* v_value_602_, lean_object* v_kind_x3f_603_, uint8_t v_cache_604_, uint8_t v_inferRfl_605_, uint8_t v_forceExpose_606_, uint8_t v_defeq_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_nextMacroScope_614_; lean_object* v_ngen_615_; lean_object* v_auxDeclNGen_616_; lean_object* v_traceState_617_; lean_object* v_recordedDeps_618_; lean_object* v_messages_619_; lean_object* v_infoState_620_; lean_object* v_snapshotTasks_621_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v_nextMacroScope_648_; lean_object* v_ngen_649_; lean_object* v_auxDeclNGen_650_; lean_object* v_traceState_651_; lean_object* v_recordedDeps_652_; lean_object* v_messages_653_; lean_object* v_infoState_654_; lean_object* v_snapshotTasks_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v_env_679_; lean_object* v___x_680_; lean_object* v_asyncMode_681_; uint8_t v_logWrites_682_; uint8_t v_isExporting_683_; lean_object* v___x_684_; lean_object* v___y_686_; lean_object* v___y_687_; uint8_t v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_714_; lean_object* v___y_715_; uint8_t v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; uint8_t v___y_737_; lean_object* v___y_738_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; uint8_t v___y_765_; lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; uint8_t v___x_872_; lean_object* v___x_873_; lean_object* v___y_875_; lean_object* v___y_876_; uint8_t v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_918_; uint8_t v___y_919_; lean_object* v___y_920_; uint8_t v___y_934_; 
v___x_677_ = l_Lean_Meta_instInhabitedAuxLemmas_default;
v___x_678_ = lean_st_ref_get(v_a_611_);
v_env_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc_ref_n(v_env_679_, 2);
lean_dec(v___x_678_);
v___x_680_ = l_Lean_Meta_auxLemmasExt;
v_asyncMode_681_ = lean_ctor_get(v___x_680_, 2);
v_logWrites_682_ = lean_ctor_get_uint8(v___x_680_, sizeof(void*)*6);
v_isExporting_683_ = lean_ctor_get_uint8(v_env_679_, sizeof(void*)*13);
v___x_684_ = lean_box(0);
v___x_872_ = 0;
v___x_873_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_677_, v___x_680_, v_env_679_, v_asyncMode_681_, v___x_684_, v___x_872_);
if (v_isExporting_683_ == 0)
{
uint8_t v___x_938_; 
v___x_938_ = 1;
v___y_934_ = v___x_938_;
goto v___jp_933_;
}
else
{
v___y_934_ = v___x_872_;
goto v___jp_933_;
}
v___jp_613_:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v_mctx_630_; lean_object* v_zetaDeltaFVarIds_631_; lean_object* v_postponed_632_; lean_object* v_diag_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_643_; 
v___x_626_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1);
v___x_627_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_627_, 0, v___y_625_);
lean_ctor_set(v___x_627_, 1, v_nextMacroScope_614_);
lean_ctor_set(v___x_627_, 2, v_ngen_615_);
lean_ctor_set(v___x_627_, 3, v_auxDeclNGen_616_);
lean_ctor_set(v___x_627_, 4, v_traceState_617_);
lean_ctor_set(v___x_627_, 5, v___x_626_);
lean_ctor_set(v___x_627_, 6, v_recordedDeps_618_);
lean_ctor_set(v___x_627_, 7, v_messages_619_);
lean_ctor_set(v___x_627_, 8, v_infoState_620_);
lean_ctor_set(v___x_627_, 9, v_snapshotTasks_621_);
v___x_628_ = lean_st_ref_put(v___y_622_, v___x_627_);
v___x_629_ = lean_st_ref_take(v___y_624_);
v_mctx_630_ = lean_ctor_get(v___x_629_, 0);
v_zetaDeltaFVarIds_631_ = lean_ctor_get(v___x_629_, 2);
v_postponed_632_ = lean_ctor_get(v___x_629_, 3);
v_diag_633_ = lean_ctor_get(v___x_629_, 4);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; 
v_unused_644_ = lean_ctor_get(v___x_629_, 1);
lean_dec(v_unused_644_);
v___x_635_ = v___x_629_;
v_isShared_636_ = v_isSharedCheck_643_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_diag_633_);
lean_inc(v_postponed_632_);
lean_inc(v_zetaDeltaFVarIds_631_);
lean_inc(v_mctx_630_);
lean_dec(v___x_629_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_643_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_637_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v___x_637_);
v___x_639_ = v___x_635_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_mctx_630_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_zetaDeltaFVarIds_631_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_postponed_632_);
lean_ctor_set(v_reuseFailAlloc_642_, 4, v_diag_633_);
v___x_639_ = v_reuseFailAlloc_642_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_st_ref_put(v___y_624_, v___x_639_);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___y_623_);
return v___x_641_;
}
}
}
v___jp_645_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v_mctx_662_; lean_object* v_zetaDeltaFVarIds_663_; lean_object* v_postponed_664_; lean_object* v_diag_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_675_; 
v___x_658_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__1);
v___x_659_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_659_, 0, v___y_657_);
lean_ctor_set(v___x_659_, 1, v_nextMacroScope_648_);
lean_ctor_set(v___x_659_, 2, v_ngen_649_);
lean_ctor_set(v___x_659_, 3, v_auxDeclNGen_650_);
lean_ctor_set(v___x_659_, 4, v_traceState_651_);
lean_ctor_set(v___x_659_, 5, v___x_658_);
lean_ctor_set(v___x_659_, 6, v_recordedDeps_652_);
lean_ctor_set(v___x_659_, 7, v_messages_653_);
lean_ctor_set(v___x_659_, 8, v_infoState_654_);
lean_ctor_set(v___x_659_, 9, v_snapshotTasks_655_);
v___x_660_ = lean_st_ref_put(v___y_647_, v___x_659_);
v___x_661_ = lean_st_ref_take(v___y_646_);
v_mctx_662_ = lean_ctor_get(v___x_661_, 0);
v_zetaDeltaFVarIds_663_ = lean_ctor_get(v___x_661_, 2);
v_postponed_664_ = lean_ctor_get(v___x_661_, 3);
v_diag_665_ = lean_ctor_get(v___x_661_, 4);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v___x_661_, 1);
lean_dec(v_unused_676_);
v___x_667_ = v___x_661_;
v_isShared_668_ = v_isSharedCheck_675_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_diag_665_);
lean_inc(v_postponed_664_);
lean_inc(v_zetaDeltaFVarIds_663_);
lean_inc(v_mctx_662_);
lean_dec(v___x_661_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_675_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__5);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 1, v___x_669_);
v___x_671_ = v___x_667_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_mctx_662_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_674_, 2, v_zetaDeltaFVarIds_663_);
lean_ctor_set(v_reuseFailAlloc_674_, 3, v_postponed_664_);
lean_ctor_set(v_reuseFailAlloc_674_, 4, v_diag_665_);
v___x_671_ = v_reuseFailAlloc_674_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_st_ref_put(v___y_646_, v___x_671_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___y_656_);
return v___x_673_;
}
}
}
v___jp_685_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_st_ref_take(v___y_690_);
if (v_logWrites_682_ == 0)
{
lean_object* v_env_692_; lean_object* v_nextMacroScope_693_; lean_object* v_ngen_694_; lean_object* v_auxDeclNGen_695_; lean_object* v_traceState_696_; lean_object* v_recordedDeps_697_; lean_object* v_messages_698_; lean_object* v_infoState_699_; lean_object* v_snapshotTasks_700_; lean_object* v___x_701_; 
v_env_692_ = lean_ctor_get(v___x_691_, 0);
lean_inc_ref(v_env_692_);
v_nextMacroScope_693_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_nextMacroScope_693_);
v_ngen_694_ = lean_ctor_get(v___x_691_, 2);
lean_inc_ref(v_ngen_694_);
v_auxDeclNGen_695_ = lean_ctor_get(v___x_691_, 3);
lean_inc_ref(v_auxDeclNGen_695_);
v_traceState_696_ = lean_ctor_get(v___x_691_, 4);
lean_inc_ref(v_traceState_696_);
v_recordedDeps_697_ = lean_ctor_get(v___x_691_, 6);
lean_inc_ref(v_recordedDeps_697_);
v_messages_698_ = lean_ctor_get(v___x_691_, 7);
lean_inc_ref(v_messages_698_);
v_infoState_699_ = lean_ctor_get(v___x_691_, 8);
lean_inc_ref(v_infoState_699_);
v_snapshotTasks_700_ = lean_ctor_get(v___x_691_, 9);
lean_inc_ref(v_snapshotTasks_700_);
lean_dec(v___x_691_);
v___x_701_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v___x_680_, v_env_692_, v___y_686_, v_asyncMode_681_, v___x_684_, v___y_688_);
v_nextMacroScope_614_ = v_nextMacroScope_693_;
v_ngen_615_ = v_ngen_694_;
v_auxDeclNGen_616_ = v_auxDeclNGen_695_;
v_traceState_617_ = v_traceState_696_;
v_recordedDeps_618_ = v_recordedDeps_697_;
v_messages_619_ = v_messages_698_;
v_infoState_620_ = v_infoState_699_;
v_snapshotTasks_621_ = v_snapshotTasks_700_;
v___y_622_ = v___y_690_;
v___y_623_ = v___y_687_;
v___y_624_ = v___y_689_;
v___y_625_ = v___x_701_;
goto v___jp_613_;
}
else
{
lean_object* v_env_702_; lean_object* v_nextMacroScope_703_; lean_object* v_ngen_704_; lean_object* v_auxDeclNGen_705_; lean_object* v_traceState_706_; lean_object* v_recordedDeps_707_; lean_object* v_messages_708_; lean_object* v_infoState_709_; lean_object* v_snapshotTasks_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v_env_702_ = lean_ctor_get(v___x_691_, 0);
lean_inc_ref(v_env_702_);
v_nextMacroScope_703_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_nextMacroScope_703_);
v_ngen_704_ = lean_ctor_get(v___x_691_, 2);
lean_inc_ref(v_ngen_704_);
v_auxDeclNGen_705_ = lean_ctor_get(v___x_691_, 3);
lean_inc_ref(v_auxDeclNGen_705_);
v_traceState_706_ = lean_ctor_get(v___x_691_, 4);
lean_inc_ref(v_traceState_706_);
v_recordedDeps_707_ = lean_ctor_get(v___x_691_, 6);
lean_inc_ref(v_recordedDeps_707_);
v_messages_708_ = lean_ctor_get(v___x_691_, 7);
lean_inc_ref(v_messages_708_);
v_infoState_709_ = lean_ctor_get(v___x_691_, 8);
lean_inc_ref(v_infoState_709_);
v_snapshotTasks_710_ = lean_ctor_get(v___x_691_, 9);
lean_inc_ref(v_snapshotTasks_710_);
lean_dec(v___x_691_);
v___x_711_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v___x_680_, v_env_702_);
lean_dec_ref(v_env_702_);
v___x_712_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v___x_680_, v___x_711_, v___y_686_, v_asyncMode_681_, v___x_684_, v___y_688_);
v_nextMacroScope_614_ = v_nextMacroScope_703_;
v_ngen_615_ = v_ngen_704_;
v_auxDeclNGen_616_ = v_auxDeclNGen_705_;
v_traceState_617_ = v_traceState_706_;
v_recordedDeps_618_ = v_recordedDeps_707_;
v_messages_619_ = v_messages_708_;
v_infoState_620_ = v_infoState_709_;
v_snapshotTasks_621_ = v_snapshotTasks_710_;
v___y_622_ = v___y_690_;
v___y_623_ = v___y_687_;
v___y_624_ = v___y_689_;
v___y_625_ = v___x_712_;
goto v___jp_613_;
}
}
v___jp_713_:
{
if (v_inferRfl_605_ == 0)
{
v___y_686_ = v___y_714_;
v___y_687_ = v___y_715_;
v___y_688_ = v___y_716_;
v___y_689_ = v___y_718_;
v___y_690_ = v___y_720_;
goto v___jp_685_;
}
else
{
lean_object* v___x_721_; 
lean_inc(v___y_715_);
v___x_721_ = l_Lean_inferDefEqAttr(v___y_715_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_dec_ref_known(v___x_721_, 1);
v___y_686_ = v___y_714_;
v___y_687_ = v___y_715_;
v___y_688_ = v___y_716_;
v___y_689_ = v___y_718_;
v___y_690_ = v___y_720_;
goto v___jp_685_;
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
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
v___jp_730_:
{
lean_object* v___x_739_; 
v___x_739_ = l_Lean_addDecl(v___y_738_, v_forceExpose_606_, v___y_734_, v___y_731_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_dec_ref_known(v___x_739_, 1);
if (v_defeq_607_ == 0)
{
v___y_714_ = v___y_732_;
v___y_715_ = v___y_736_;
v___y_716_ = v___y_737_;
v___y_717_ = v___y_735_;
v___y_718_ = v___y_733_;
v___y_719_ = v___y_734_;
v___y_720_ = v___y_731_;
goto v___jp_713_;
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = l_Lean_defeqAttr;
lean_inc(v___y_736_);
v___x_741_ = l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3(v___x_740_, v___y_736_, v___y_735_, v___y_733_, v___y_734_, v___y_731_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_dec_ref_known(v___x_741_, 1);
v___y_714_ = v___y_732_;
v___y_715_ = v___y_736_;
v___y_716_ = v___y_737_;
v___y_717_ = v___y_735_;
v___y_718_ = v___y_733_;
v___y_719_ = v___y_734_;
v___y_720_ = v___y_731_;
goto v___jp_713_;
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec(v___y_736_);
lean_dec_ref(v___y_732_);
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec(v___y_736_);
lean_dec_ref(v___y_732_);
v_a_750_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_739_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_739_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
v___jp_758_:
{
lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
lean_inc_n(v___y_764_, 2);
v___x_766_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_766_, 0, v___y_764_);
lean_ctor_set(v___x_766_, 1, v_levelParams_600_);
lean_ctor_set(v___x_766_, 2, v_type_601_);
v___x_767_ = lean_box(0);
v___x_768_ = 0;
v___x_769_ = lean_box(0);
v___x_770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_770_, 0, v___y_764_);
lean_ctor_set(v___x_770_, 1, v___x_769_);
v___x_771_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_771_, 0, v___x_766_);
lean_ctor_set(v___x_771_, 1, v_value_602_);
lean_ctor_set(v___x_771_, 2, v___x_767_);
lean_ctor_set(v___x_771_, 3, v___x_770_);
lean_ctor_set_uint8(v___x_771_, sizeof(void*)*4, v___x_768_);
v___x_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
v___y_731_ = v___y_759_;
v___y_732_ = v___y_760_;
v___y_733_ = v___y_762_;
v___y_734_ = v___y_761_;
v___y_735_ = v___y_763_;
v___y_736_ = v___y_764_;
v___y_737_ = v___y_765_;
v___y_738_ = v___x_772_;
goto v___jp_730_;
}
v___jp_773_:
{
lean_object* v___x_778_; lean_object* v_env_779_; lean_object* v_nextMacroScope_780_; lean_object* v_ngen_781_; lean_object* v_auxDeclNGen_782_; lean_object* v_traceState_783_; lean_object* v_recordedDeps_784_; lean_object* v_messages_785_; lean_object* v_infoState_786_; lean_object* v_snapshotTasks_787_; uint8_t v___x_788_; 
v___x_778_ = lean_st_ref_take(v___y_777_);
v_env_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc_ref(v_env_779_);
v_nextMacroScope_780_ = lean_ctor_get(v___x_778_, 1);
lean_inc(v_nextMacroScope_780_);
v_ngen_781_ = lean_ctor_get(v___x_778_, 2);
lean_inc_ref(v_ngen_781_);
v_auxDeclNGen_782_ = lean_ctor_get(v___x_778_, 3);
lean_inc_ref(v_auxDeclNGen_782_);
v_traceState_783_ = lean_ctor_get(v___x_778_, 4);
lean_inc_ref(v_traceState_783_);
v_recordedDeps_784_ = lean_ctor_get(v___x_778_, 6);
lean_inc_ref(v_recordedDeps_784_);
v_messages_785_ = lean_ctor_get(v___x_778_, 7);
lean_inc_ref(v_messages_785_);
v_infoState_786_ = lean_ctor_get(v___x_778_, 8);
lean_inc_ref(v_infoState_786_);
v_snapshotTasks_787_ = lean_ctor_get(v___x_778_, 9);
lean_inc_ref(v_snapshotTasks_787_);
lean_dec(v___x_778_);
v___x_788_ = 1;
if (v_logWrites_682_ == 0)
{
lean_object* v___x_789_; 
v___x_789_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v___x_680_, v_env_779_, v___y_774_, v_asyncMode_681_, v___x_684_, v___x_788_);
v___y_646_ = v___y_776_;
v___y_647_ = v___y_777_;
v_nextMacroScope_648_ = v_nextMacroScope_780_;
v_ngen_649_ = v_ngen_781_;
v_auxDeclNGen_650_ = v_auxDeclNGen_782_;
v_traceState_651_ = v_traceState_783_;
v_recordedDeps_652_ = v_recordedDeps_784_;
v_messages_653_ = v_messages_785_;
v_infoState_654_ = v_infoState_786_;
v_snapshotTasks_655_ = v_snapshotTasks_787_;
v___y_656_ = v___y_775_;
v___y_657_ = v___x_789_;
goto v___jp_645_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v___x_680_, v_env_779_);
lean_dec_ref(v_env_779_);
v___x_791_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v___x_680_, v___x_790_, v___y_774_, v_asyncMode_681_, v___x_684_, v___x_788_);
v___y_646_ = v___y_776_;
v___y_647_ = v___y_777_;
v_nextMacroScope_648_ = v_nextMacroScope_780_;
v_ngen_649_ = v_ngen_781_;
v_auxDeclNGen_650_ = v_auxDeclNGen_782_;
v_traceState_651_ = v_traceState_783_;
v_recordedDeps_652_ = v_recordedDeps_784_;
v_messages_653_ = v_messages_785_;
v_infoState_654_ = v_infoState_786_;
v_snapshotTasks_655_ = v_snapshotTasks_787_;
v___y_656_ = v___y_775_;
v___y_657_ = v___x_791_;
goto v___jp_645_;
}
}
v___jp_792_:
{
if (v_inferRfl_605_ == 0)
{
v___y_774_ = v___y_793_;
v___y_775_ = v___y_794_;
v___y_776_ = v___y_796_;
v___y_777_ = v___y_798_;
goto v___jp_773_;
}
else
{
lean_object* v___x_799_; 
lean_inc(v___y_794_);
v___x_799_ = l_Lean_inferDefEqAttr(v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_dec_ref_known(v___x_799_, 1);
v___y_774_ = v___y_793_;
v___y_775_ = v___y_794_;
v___y_776_ = v___y_796_;
v___y_777_ = v___y_798_;
goto v___jp_773_;
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
v_a_800_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_799_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_799_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
v___jp_808_:
{
lean_object* v___x_816_; 
v___x_816_ = l_Lean_addDecl(v___y_815_, v_forceExpose_606_, v___y_811_, v___y_814_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_dec_ref_known(v___x_816_, 1);
if (v_defeq_607_ == 0)
{
v___y_793_ = v___y_812_;
v___y_794_ = v___y_813_;
v___y_795_ = v___y_810_;
v___y_796_ = v___y_809_;
v___y_797_ = v___y_811_;
v___y_798_ = v___y_814_;
goto v___jp_792_;
}
else
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = l_Lean_defeqAttr;
lean_inc(v___y_813_);
v___x_818_ = l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3(v___x_817_, v___y_813_, v___y_810_, v___y_809_, v___y_811_, v___y_814_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_dec_ref_known(v___x_818_, 1);
v___y_793_ = v___y_812_;
v___y_794_ = v___y_813_;
v___y_795_ = v___y_810_;
v___y_796_ = v___y_809_;
v___y_797_ = v___y_811_;
v___y_798_ = v___y_814_;
goto v___jp_792_;
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
v_a_827_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_816_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_816_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
v___jp_835_:
{
lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
lean_inc_n(v___y_840_, 2);
v___x_842_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_842_, 0, v___y_840_);
lean_ctor_set(v___x_842_, 1, v_levelParams_600_);
lean_ctor_set(v___x_842_, 2, v_type_601_);
v___x_843_ = lean_box(0);
v___x_844_ = 0;
v___x_845_ = lean_box(0);
v___x_846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_846_, 0, v___y_840_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_847_, 0, v___x_842_);
lean_ctor_set(v___x_847_, 1, v_value_602_);
lean_ctor_set(v___x_847_, 2, v___x_843_);
lean_ctor_set(v___x_847_, 3, v___x_846_);
lean_ctor_set_uint8(v___x_847_, sizeof(void*)*4, v___x_844_);
v___x_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
v___y_809_ = v___y_836_;
v___y_810_ = v___y_838_;
v___y_811_ = v___y_837_;
v___y_812_ = v___y_839_;
v___y_813_ = v___y_840_;
v___y_814_ = v___y_841_;
v___y_815_ = v___x_848_;
goto v___jp_808_;
}
v___jp_849_:
{
lean_object* v___x_856_; lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_871_; 
v___x_856_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v___y_851_, v___y_855_);
v_a_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_871_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_871_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_871_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___f_861_; uint8_t v___x_862_; 
lean_inc(v_levelParams_600_);
lean_inc(v_a_857_);
v___f_861_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxLemma___lam__0), 4, 3);
lean_closure_set(v___f_861_, 0, v_a_857_);
lean_closure_set(v___f_861_, 1, v_levelParams_600_);
lean_closure_set(v___f_861_, 2, v___y_850_);
lean_inc_ref(v_env_679_);
v___x_862_ = l_Lean_Environment_hasUnsafe(v_env_679_, v_type_601_);
if (v___x_862_ == 0)
{
uint8_t v___x_863_; 
v___x_863_ = l_Lean_Environment_hasUnsafe(v_env_679_, v_value_602_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
lean_inc_n(v_a_857_, 2);
v___x_864_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_864_, 0, v_a_857_);
lean_ctor_set(v___x_864_, 1, v_levelParams_600_);
lean_ctor_set(v___x_864_, 2, v_type_601_);
v___x_865_ = lean_box(0);
v___x_866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_866_, 0, v_a_857_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v___x_867_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_867_, 0, v___x_864_);
lean_ctor_set(v___x_867_, 1, v_value_602_);
lean_ctor_set(v___x_867_, 2, v___x_866_);
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 2);
lean_ctor_set(v___x_859_, 0, v___x_867_);
v___x_869_ = v___x_859_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_867_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
v___y_809_ = v___y_853_;
v___y_810_ = v___y_852_;
v___y_811_ = v___y_854_;
v___y_812_ = v___f_861_;
v___y_813_ = v_a_857_;
v___y_814_ = v___y_855_;
v___y_815_ = v___x_869_;
goto v___jp_808_;
}
}
else
{
lean_del_object(v___x_859_);
v___y_836_ = v___y_853_;
v___y_837_ = v___y_854_;
v___y_838_ = v___y_852_;
v___y_839_ = v___f_861_;
v___y_840_ = v_a_857_;
v___y_841_ = v___y_855_;
goto v___jp_835_;
}
}
else
{
lean_del_object(v___x_859_);
lean_dec_ref(v_env_679_);
v___y_836_ = v___y_853_;
v___y_837_ = v___y_854_;
v___y_838_ = v___y_852_;
v___y_839_ = v___f_861_;
v___y_840_ = v_a_857_;
v___y_841_ = v___y_855_;
goto v___jp_835_;
}
}
}
v___jp_874_:
{
if (v___y_877_ == 0)
{
lean_dec(v___x_873_);
v___y_850_ = v___y_875_;
v___y_851_ = v___y_876_;
v___y_852_ = v___y_878_;
v___y_853_ = v___y_879_;
v___y_854_ = v___y_880_;
v___y_855_ = v___y_881_;
goto v___jp_849_;
}
else
{
lean_object* v___x_882_; lean_object* v___x_883_; 
lean_inc_ref(v_type_601_);
v___x_882_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_882_, 0, v_type_601_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1, v___x_872_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 1, v_defeq_607_);
v___x_883_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg(v___x_873_, v___x_882_);
lean_dec_ref_known(v___x_882_, 1);
lean_dec(v___x_873_);
if (lean_obj_tag(v___x_883_) == 1)
{
lean_object* v_val_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_916_; 
v_val_884_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_916_ == 0)
{
v___x_886_ = v___x_883_;
v_isShared_887_ = v_isSharedCheck_916_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_val_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_916_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v_fst_888_; lean_object* v_snd_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_915_; 
v_fst_888_ = lean_ctor_get(v_val_884_, 0);
v_snd_889_ = lean_ctor_get(v_val_884_, 1);
v_isSharedCheck_915_ = !lean_is_exclusive(v_val_884_);
if (v_isSharedCheck_915_ == 0)
{
v___x_891_ = v_val_884_;
v_isShared_892_ = v_isSharedCheck_915_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_snd_889_);
lean_inc(v_fst_888_);
lean_dec(v_val_884_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_915_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
uint8_t v___x_893_; 
v___x_893_ = l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__5(v_levelParams_600_, v_snd_889_);
lean_dec(v_snd_889_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_911_; 
lean_dec(v_fst_888_);
lean_del_object(v___x_886_);
v___x_894_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v___y_876_, v___y_881_);
v_a_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_911_ == 0)
{
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_911_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_911_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___f_899_; uint8_t v___x_900_; 
lean_inc(v_levelParams_600_);
lean_inc(v_a_895_);
v___f_899_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxLemma___lam__0), 4, 3);
lean_closure_set(v___f_899_, 0, v_a_895_);
lean_closure_set(v___f_899_, 1, v_levelParams_600_);
lean_closure_set(v___f_899_, 2, v___y_875_);
lean_inc_ref(v_env_679_);
v___x_900_ = l_Lean_Environment_hasUnsafe(v_env_679_, v_type_601_);
if (v___x_900_ == 0)
{
uint8_t v___x_901_; 
v___x_901_ = l_Lean_Environment_hasUnsafe(v_env_679_, v_value_602_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
lean_inc_n(v_a_895_, 2);
v___x_902_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_902_, 0, v_a_895_);
lean_ctor_set(v___x_902_, 1, v_levelParams_600_);
lean_ctor_set(v___x_902_, 2, v_type_601_);
v___x_903_ = lean_box(0);
if (v_isShared_892_ == 0)
{
lean_ctor_set_tag(v___x_891_, 1);
lean_ctor_set(v___x_891_, 1, v___x_903_);
lean_ctor_set(v___x_891_, 0, v_a_895_);
v___x_905_ = v___x_891_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_895_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v___x_903_);
v___x_905_ = v_reuseFailAlloc_910_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_906_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_906_, 0, v___x_902_);
lean_ctor_set(v___x_906_, 1, v_value_602_);
lean_ctor_set(v___x_906_, 2, v___x_905_);
if (v_isShared_898_ == 0)
{
lean_ctor_set_tag(v___x_897_, 2);
lean_ctor_set(v___x_897_, 0, v___x_906_);
v___x_908_ = v___x_897_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
v___y_731_ = v___y_881_;
v___y_732_ = v___f_899_;
v___y_733_ = v___y_879_;
v___y_734_ = v___y_880_;
v___y_735_ = v___y_878_;
v___y_736_ = v_a_895_;
v___y_737_ = v___y_877_;
v___y_738_ = v___x_908_;
goto v___jp_730_;
}
}
}
else
{
lean_del_object(v___x_897_);
lean_del_object(v___x_891_);
v___y_759_ = v___y_881_;
v___y_760_ = v___f_899_;
v___y_761_ = v___y_880_;
v___y_762_ = v___y_879_;
v___y_763_ = v___y_878_;
v___y_764_ = v_a_895_;
v___y_765_ = v___y_877_;
goto v___jp_758_;
}
}
else
{
lean_del_object(v___x_897_);
lean_del_object(v___x_891_);
lean_dec_ref(v_env_679_);
v___y_759_ = v___y_881_;
v___y_760_ = v___f_899_;
v___y_761_ = v___y_880_;
v___y_762_ = v___y_879_;
v___y_763_ = v___y_878_;
v___y_764_ = v_a_895_;
v___y_765_ = v___y_877_;
goto v___jp_758_;
}
}
}
else
{
lean_object* v___x_913_; 
lean_del_object(v___x_891_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec_ref(v_env_679_);
lean_dec_ref(v_value_602_);
lean_dec_ref(v_type_601_);
lean_dec(v_levelParams_600_);
if (v_isShared_887_ == 0)
{
lean_ctor_set_tag(v___x_886_, 0);
lean_ctor_set(v___x_886_, 0, v_fst_888_);
v___x_913_ = v___x_886_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_fst_888_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
else
{
lean_dec(v___x_883_);
v___y_850_ = v___y_875_;
v___y_851_ = v___y_876_;
v___y_852_ = v___y_878_;
v___y_853_ = v___y_879_;
v___y_854_ = v___y_880_;
v___y_855_ = v___y_881_;
goto v___jp_849_;
}
}
}
v___jp_917_:
{
if (v_cache_604_ == 0)
{
lean_dec(v___x_873_);
v___y_850_ = v___y_918_;
v___y_851_ = v___y_920_;
v___y_852_ = v_a_608_;
v___y_853_ = v_a_609_;
v___y_854_ = v_a_610_;
v___y_855_ = v_a_611_;
goto v___jp_849_;
}
else
{
lean_object* v___x_921_; 
v___x_921_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg(v___x_873_, v___y_918_);
if (lean_obj_tag(v___x_921_) == 1)
{
lean_object* v_val_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_932_; 
v_val_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_932_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_val_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v_fst_926_; lean_object* v_snd_927_; uint8_t v___x_928_; 
v_fst_926_ = lean_ctor_get(v_val_922_, 0);
lean_inc(v_fst_926_);
v_snd_927_ = lean_ctor_get(v_val_922_, 1);
lean_inc(v_snd_927_);
lean_dec(v_val_922_);
v___x_928_ = l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__5(v_levelParams_600_, v_snd_927_);
lean_dec(v_snd_927_);
if (v___x_928_ == 0)
{
lean_dec(v_fst_926_);
lean_del_object(v___x_924_);
v___y_875_ = v___y_918_;
v___y_876_ = v___y_920_;
v___y_877_ = v___y_919_;
v___y_878_ = v_a_608_;
v___y_879_ = v_a_609_;
v___y_880_ = v_a_610_;
v___y_881_ = v_a_611_;
goto v___jp_874_;
}
else
{
lean_object* v___x_930_; 
lean_dec(v___y_920_);
lean_dec_ref(v___y_918_);
lean_dec(v___x_873_);
lean_dec_ref(v_env_679_);
lean_dec_ref(v_value_602_);
lean_dec_ref(v_type_601_);
lean_dec(v_levelParams_600_);
if (v_isShared_925_ == 0)
{
lean_ctor_set_tag(v___x_924_, 0);
lean_ctor_set(v___x_924_, 0, v_fst_926_);
v___x_930_ = v___x_924_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_fst_926_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
else
{
lean_dec(v___x_921_);
v___y_875_ = v___y_918_;
v___y_876_ = v___y_920_;
v___y_877_ = v___y_919_;
v___y_878_ = v_a_608_;
v___y_879_ = v_a_609_;
v___y_880_ = v_a_610_;
v___y_881_ = v_a_611_;
goto v___jp_874_;
}
}
}
v___jp_933_:
{
lean_object* v___x_935_; 
lean_inc_ref(v_type_601_);
v___x_935_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_935_, 0, v_type_601_);
lean_ctor_set_uint8(v___x_935_, sizeof(void*)*1, v___y_934_);
lean_ctor_set_uint8(v___x_935_, sizeof(void*)*1 + 1, v_defeq_607_);
if (lean_obj_tag(v_kind_x3f_603_) == 0)
{
lean_object* v___x_936_; 
v___x_936_ = ((lean_object*)(l_Lean_Meta_mkAuxLemma___closed__1));
v___y_918_ = v___x_935_;
v___y_919_ = v___y_934_;
v___y_920_ = v___x_936_;
goto v___jp_917_;
}
else
{
lean_object* v_val_937_; 
v_val_937_ = lean_ctor_get(v_kind_x3f_603_, 0);
lean_inc(v_val_937_);
lean_dec_ref_known(v_kind_x3f_603_, 1);
v___y_918_ = v___x_935_;
v___y_919_ = v___y_934_;
v___y_920_ = v_val_937_;
goto v___jp_917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___boxed(lean_object* v_levelParams_939_, lean_object* v_type_940_, lean_object* v_value_941_, lean_object* v_kind_x3f_942_, lean_object* v_cache_943_, lean_object* v_inferRfl_944_, lean_object* v_forceExpose_945_, lean_object* v_defeq_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
uint8_t v_cache_boxed_952_; uint8_t v_inferRfl_boxed_953_; uint8_t v_forceExpose_boxed_954_; uint8_t v_defeq_boxed_955_; lean_object* v_res_956_; 
v_cache_boxed_952_ = lean_unbox(v_cache_943_);
v_inferRfl_boxed_953_ = lean_unbox(v_inferRfl_944_);
v_forceExpose_boxed_954_ = lean_unbox(v_forceExpose_945_);
v_defeq_boxed_955_ = lean_unbox(v_defeq_946_);
v_res_956_ = l_Lean_Meta_mkAuxLemma(v_levelParams_939_, v_type_940_, v_value_941_, v_kind_x3f_942_, v_cache_boxed_952_, v_inferRfl_boxed_953_, v_forceExpose_boxed_954_, v_defeq_boxed_955_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1(lean_object* v_00_u03b2_957_, lean_object* v_x_958_, lean_object* v_x_959_, lean_object* v_x_960_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(v_x_958_, v_x_959_, v_x_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3(lean_object* v_00_u03b2_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2___redArg(){
_start:
{
lean_object* v___x_965_; 
v___x_965_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2___redArg___boxed(lean_object* v___dummy_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2___redArg();
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkAuxLemma_spec__2(lean_object* v_00_u03b2_968_){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3___closed__2);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4(lean_object* v_00_u03b2_970_, lean_object* v_x_971_, lean_object* v_x_972_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___redArg(v_x_971_, v_x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4___boxed(lean_object* v_00_u03b2_974_, lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4(v_00_u03b2_974_, v_x_975_, v_x_976_);
lean_dec_ref(v_x_976_);
lean_dec_ref(v_x_975_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1(lean_object* v_00_u03b2_978_, lean_object* v_x_979_, size_t v_x_980_, size_t v_x_981_, lean_object* v_x_982_, lean_object* v_x_983_){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_x_979_, v_x_980_, v_x_981_, v_x_982_, v_x_983_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___boxed(lean_object* v_00_u03b2_985_, lean_object* v_x_986_, lean_object* v_x_987_, lean_object* v_x_988_, lean_object* v_x_989_, lean_object* v_x_990_){
_start:
{
size_t v_x_8396__boxed_991_; size_t v_x_8397__boxed_992_; lean_object* v_res_993_; 
v_x_8396__boxed_991_ = lean_unbox_usize(v_x_987_);
lean_dec(v_x_987_);
v_x_8397__boxed_992_ = lean_unbox_usize(v_x_988_);
lean_dec(v_x_988_);
v_res_993_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1(v_00_u03b2_985_, v_x_986_, v_x_8396__boxed_991_, v_x_8397__boxed_992_, v_x_989_, v_x_990_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5(lean_object* v_00_u03b1_994_, lean_object* v_attrName_995_, lean_object* v_declName_996_, lean_object* v_asyncPrefix_x3f_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___redArg(v_attrName_995_, v_declName_996_, v_asyncPrefix_x3f_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_attrName_1005_, lean_object* v_declName_1006_, lean_object* v_asyncPrefix_x3f_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5(v_00_u03b1_1004_, v_attrName_1005_, v_declName_1006_, v_asyncPrefix_x3f_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6(lean_object* v_00_u03b1_1014_, lean_object* v_attrName_1015_, lean_object* v_declName_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(v_attrName_1015_, v_declName_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___boxed(lean_object* v_00_u03b1_1023_, lean_object* v_attrName_1024_, lean_object* v_declName_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6(v_00_u03b1_1023_, v_attrName_1024_, v_declName_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8(lean_object* v_00_u03b2_1032_, lean_object* v_x_1033_, size_t v_x_1034_, lean_object* v_x_1035_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___redArg(v_x_1033_, v_x_1034_, v_x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8___boxed(lean_object* v_00_u03b2_1037_, lean_object* v_x_1038_, lean_object* v_x_1039_, lean_object* v_x_1040_){
_start:
{
size_t v_x_8447__boxed_1041_; lean_object* v_res_1042_; 
v_x_8447__boxed_1041_ = lean_unbox_usize(v_x_1039_);
lean_dec(v_x_1039_);
v_res_1042_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8(v_00_u03b2_1037_, v_x_1038_, v_x_8447__boxed_1041_, v_x_1040_);
lean_dec_ref(v_x_1040_);
lean_dec_ref(v_x_1038_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1043_, lean_object* v_n_1044_, lean_object* v_k_1045_, lean_object* v_v_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(v_n_1044_, v_k_1045_, v_v_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1048_, size_t v_depth_1049_, lean_object* v_keys_1050_, lean_object* v_vals_1051_, lean_object* v_heq_1052_, lean_object* v_i_1053_, lean_object* v_entries_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(v_depth_1049_, v_keys_1050_, v_vals_1051_, v_i_1053_, v_entries_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1056_, lean_object* v_depth_1057_, lean_object* v_keys_1058_, lean_object* v_vals_1059_, lean_object* v_heq_1060_, lean_object* v_i_1061_, lean_object* v_entries_1062_){
_start:
{
size_t v_depth_boxed_1063_; lean_object* v_res_1064_; 
v_depth_boxed_1063_ = lean_unbox_usize(v_depth_1057_);
lean_dec(v_depth_1057_);
v_res_1064_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3(v_00_u03b2_1056_, v_depth_boxed_1063_, v_keys_1058_, v_vals_1059_, v_heq_1060_, v_i_1061_, v_entries_1062_);
lean_dec_ref(v_vals_1059_);
lean_dec_ref(v_keys_1058_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8(lean_object* v_00_u03b1_1065_, lean_object* v_msg_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___redArg(v_msg_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1073_, lean_object* v_msg_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__3_spec__5_spec__8(v_00_u03b1_1073_, v_msg_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12(lean_object* v_00_u03b2_1081_, lean_object* v_keys_1082_, lean_object* v_vals_1083_, lean_object* v_heq_1084_, lean_object* v_i_1085_, lean_object* v_k_1086_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___redArg(v_keys_1082_, v_vals_1083_, v_i_1085_, v_k_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12___boxed(lean_object* v_00_u03b2_1088_, lean_object* v_keys_1089_, lean_object* v_vals_1090_, lean_object* v_heq_1091_, lean_object* v_i_1092_, lean_object* v_k_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__4_spec__8_spec__12(v_00_u03b2_1088_, v_keys_1089_, v_vals_1090_, v_heq_1091_, v_i_1092_, v_k_1093_);
lean_dec_ref(v_k_1093_);
lean_dec_ref(v_vals_1090_);
lean_dec_ref(v_keys_1089_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__8(lean_object* v_00_u03b2_1095_, lean_object* v_x_1096_, lean_object* v_x_1097_, lean_object* v_x_1098_, lean_object* v_x_1099_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__8___redArg(v_x_1096_, v_x_1097_, v_x_1098_, v_x_1099_);
return v___x_1100_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_DefEqAttrib(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedAuxLemmas_default = _init_l_Lean_Meta_instInhabitedAuxLemmas_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedAuxLemmas_default);
l_Lean_Meta_instInhabitedAuxLemmas = _init_l_Lean_Meta_instInhabitedAuxLemmas();
lean_mark_persistent(l_Lean_Meta_instInhabitedAuxLemmas);
res = l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_830486828____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_auxLemmasExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_auxLemmasExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_DefEqAttrib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_AuxLemma(builtin);
}
#ifdef __cplusplus
}
#endif
