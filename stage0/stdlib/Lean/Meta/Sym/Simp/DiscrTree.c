// Lean compiler output
// Module: Lean.Meta.Sym.Simp.DiscrTree
// Imports: public import Lean.Meta.Sym.Pattern public import Lean.Meta.DiscrTree.Util import Lean.Meta.Sym.Offset import Lean.Meta.Sym.Eta import Init.Omega
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_etaReduce(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
uint8_t l_Lean_Meta_Sym_isOffset_x27(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Sym_isQuasiOffset(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_ignoreArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_ignoreArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushAllArgs(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 6}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_mkPathAux(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_mkPathAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_initCapacity;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__1_value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsTodo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Sym_getMatch___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_getMatch___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_getMatch___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_ignoreArg(lean_object* v_infos_1_, lean_object* v_i_2_){
_start:
{
lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_3_ = lean_array_get_size(v_infos_1_);
v___x_4_ = lean_nat_dec_lt(v_i_2_, v___x_3_);
if (v___x_4_ == 0)
{
return v___x_4_;
}
else
{
lean_object* v_info_5_; uint8_t v_isInstance_6_; 
v_info_5_ = lean_array_fget_borrowed(v_infos_1_, v_i_2_);
v_isInstance_6_ = lean_ctor_get_uint8(v_info_5_, 1);
if (v_isInstance_6_ == 0)
{
uint8_t v_isProof_7_; 
v_isProof_7_ = lean_ctor_get_uint8(v_info_5_, 0);
return v_isProof_7_;
}
else
{
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_ignoreArg___boxed(lean_object* v_infos_8_, lean_object* v_i_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_ignoreArg(v_infos_8_, v_i_9_);
lean_dec(v_i_9_);
lean_dec_ref(v_infos_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushAllArgs(lean_object* v_e_12_, lean_object* v_todo_13_){
_start:
{
if (lean_obj_tag(v_e_12_) == 5)
{
lean_object* v_fn_14_; lean_object* v_arg_15_; lean_object* v___x_16_; 
v_fn_14_ = lean_ctor_get(v_e_12_, 0);
lean_inc_ref(v_fn_14_);
v_arg_15_ = lean_ctor_get(v_e_12_, 1);
lean_inc_ref(v_arg_15_);
lean_dec_ref_known(v_e_12_, 2);
v___x_16_ = lean_array_push(v_todo_13_, v_arg_15_);
v_e_12_ = v_fn_14_;
v_todo_13_ = v___x_16_;
goto _start;
}
else
{
lean_dec_ref(v_e_12_);
return v_todo_13_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___closed__0(void){
_start:
{
lean_object* v___x_18_; lean_object* v_dummyBVar_19_; 
v___x_18_ = lean_unsigned_to_nat(1000000u);
v_dummyBVar_19_ = l_Lean_Expr_bvar___override(v___x_18_);
return v_dummyBVar_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo(lean_object* v_infos_20_, lean_object* v_i_21_, lean_object* v_e_22_, lean_object* v_todo_23_){
_start:
{
if (lean_obj_tag(v_e_22_) == 5)
{
lean_object* v_fn_24_; lean_object* v_arg_25_; uint8_t v___x_26_; 
v_fn_24_ = lean_ctor_get(v_e_22_, 0);
lean_inc_ref(v_fn_24_);
v_arg_25_ = lean_ctor_get(v_e_22_, 1);
lean_inc_ref(v_arg_25_);
lean_dec_ref_known(v_e_22_, 2);
v___x_26_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_ignoreArg(v_infos_20_, v_i_21_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_unsigned_to_nat(1u);
v___x_28_ = lean_nat_sub(v_i_21_, v___x_27_);
lean_dec(v_i_21_);
v___x_29_ = lean_array_push(v_todo_23_, v_arg_25_);
v_i_21_ = v___x_28_;
v_e_22_ = v_fn_24_;
v_todo_23_ = v___x_29_;
goto _start;
}
else
{
lean_object* v_dummyBVar_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
lean_dec_ref(v_arg_25_);
v_dummyBVar_31_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___closed__0, &l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___closed__0);
v___x_32_ = lean_unsigned_to_nat(1u);
v___x_33_ = lean_nat_sub(v_i_21_, v___x_32_);
lean_dec(v_i_21_);
v___x_34_ = lean_array_push(v_todo_23_, v_dummyBVar_31_);
v_i_21_ = v___x_33_;
v_e_22_ = v_fn_24_;
v_todo_23_ = v___x_34_;
goto _start;
}
}
else
{
lean_dec_ref(v_e_22_);
lean_dec(v_i_21_);
return v_todo_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo___boxed(lean_object* v_infos_36_, lean_object* v_i_37_, lean_object* v_e_38_, lean_object* v_todo_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo(v_infos_36_, v_i_37_, v_e_38_, v_todo_39_);
lean_dec_ref(v_infos_36_);
return v_res_40_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection(lean_object* v_e_46_){
_start:
{
lean_object* v_e_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; uint8_t v___x_51_; 
v_e_47_ = l_Lean_Expr_consumeMData(v_e_46_);
v___x_48_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__0));
v___x_49_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___closed__2));
v___x_50_ = lean_unsigned_to_nat(2u);
v___x_51_ = l_Lean_Expr_isAppOfArity(v_e_47_, v___x_49_, v___x_50_);
if (v___x_51_ == 0)
{
if (lean_obj_tag(v_e_47_) == 11)
{
lean_object* v_typeName_52_; 
v_typeName_52_ = lean_ctor_get(v_e_47_, 0);
lean_inc(v_typeName_52_);
if (lean_obj_tag(v_typeName_52_) == 1)
{
lean_object* v_pre_53_; 
v_pre_53_ = lean_ctor_get(v_typeName_52_, 0);
if (lean_obj_tag(v_pre_53_) == 0)
{
lean_object* v_idx_54_; lean_object* v_str_55_; uint8_t v___x_56_; 
v_idx_54_ = lean_ctor_get(v_e_47_, 1);
lean_inc(v_idx_54_);
lean_dec_ref_known(v_e_47_, 3);
v_str_55_ = lean_ctor_get(v_typeName_52_, 1);
lean_inc_ref(v_str_55_);
lean_dec_ref_known(v_typeName_52_, 2);
v___x_56_ = lean_string_dec_eq(v_str_55_, v___x_48_);
lean_dec_ref(v_str_55_);
if (v___x_56_ == 0)
{
lean_dec(v_idx_54_);
return v___x_56_;
}
else
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = lean_nat_dec_eq(v_idx_54_, v___x_57_);
lean_dec(v_idx_54_);
return v___x_58_;
}
}
else
{
lean_dec_ref_known(v_typeName_52_, 2);
lean_dec_ref_known(v_e_47_, 3);
return v___x_51_;
}
}
else
{
lean_dec_ref_known(v_e_47_, 3);
lean_dec(v_typeName_52_);
return v___x_51_;
}
}
else
{
lean_dec_ref(v_e_47_);
return v___x_51_;
}
}
else
{
lean_dec_ref(v_e_47_);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection___boxed(lean_object* v_e_59_){
_start:
{
uint8_t v_res_60_; lean_object* v_r_61_; 
v_res_60_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection(v_e_59_);
lean_dec_ref(v_e_59_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___redArg(lean_object* v_a_62_, lean_object* v_x_63_){
_start:
{
if (lean_obj_tag(v_x_63_) == 0)
{
lean_object* v___x_64_; 
v___x_64_ = lean_box(0);
return v___x_64_;
}
else
{
lean_object* v_key_65_; lean_object* v_value_66_; lean_object* v_tail_67_; uint8_t v___x_68_; 
v_key_65_ = lean_ctor_get(v_x_63_, 0);
v_value_66_ = lean_ctor_get(v_x_63_, 1);
v_tail_67_ = lean_ctor_get(v_x_63_, 2);
v___x_68_ = lean_name_eq(v_key_65_, v_a_62_);
if (v___x_68_ == 0)
{
v_x_63_ = v_tail_67_;
goto _start;
}
else
{
lean_object* v___x_70_; 
lean_inc(v_value_66_);
v___x_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_70_, 0, v_value_66_);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___redArg___boxed(lean_object* v_a_71_, lean_object* v_x_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___redArg(v_a_71_, v_x_72_);
lean_dec(v_x_72_);
lean_dec(v_a_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs(uint8_t v_root_79_, lean_object* v_fnInfos_80_, lean_object* v_todo_81_, lean_object* v_e_82_){
_start:
{
uint8_t v___x_86_; 
v___x_86_ = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(v_e_82_);
if (v___x_86_ == 0)
{
uint8_t v___x_87_; 
v___x_87_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection(v_e_82_);
if (v___x_87_ == 0)
{
lean_object* v_fn_88_; 
v_fn_88_ = l_Lean_Expr_getAppFn(v_e_82_);
switch(lean_obj_tag(v_fn_88_))
{
case 9:
{
lean_object* v_a_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec_ref(v_e_82_);
v_a_89_ = lean_ctor_get(v_fn_88_, 0);
lean_inc_ref(v_a_89_);
lean_dec_ref_known(v_fn_88_, 1);
v___x_90_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_90_, 0, v_a_89_);
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v_todo_81_);
return v___x_91_;
}
case 0:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec_ref_known(v_fn_88_, 1);
lean_dec_ref(v_e_82_);
v___x_92_ = lean_box(0);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v_todo_81_);
return v___x_93_;
}
case 7:
{
lean_object* v_binderType_94_; lean_object* v_body_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
lean_dec_ref(v_e_82_);
v_binderType_94_ = lean_ctor_get(v_fn_88_, 1);
lean_inc_ref(v_binderType_94_);
v_body_95_ = lean_ctor_get(v_fn_88_, 2);
lean_inc_ref(v_body_95_);
lean_dec_ref_known(v_fn_88_, 3);
v___x_96_ = lean_box(5);
v___x_97_ = lean_array_push(v_todo_81_, v_body_95_);
v___x_98_ = lean_array_push(v___x_97_, v_binderType_94_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_96_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
return v___x_99_;
}
case 4:
{
lean_object* v_declName_100_; lean_object* v___y_102_; lean_object* v___y_103_; 
v_declName_100_ = lean_ctor_get(v_fn_88_, 0);
lean_inc(v_declName_100_);
lean_dec_ref_known(v_fn_88_, 2);
if (v_root_79_ == 0)
{
uint8_t v___x_114_; 
v___x_114_ = l_Lean_Meta_Sym_isOffset_x27(v_declName_100_, v_e_82_);
if (v___x_114_ == 0)
{
uint8_t v___x_115_; 
v___x_115_ = l_Lean_Meta_Sym_isQuasiOffset(v_e_82_);
if (v___x_115_ == 0)
{
goto v___jp_106_;
}
else
{
lean_dec(v_declName_100_);
lean_dec_ref(v_e_82_);
goto v___jp_83_;
}
}
else
{
lean_dec(v_declName_100_);
lean_dec_ref(v_e_82_);
goto v___jp_83_;
}
}
else
{
goto v___jp_106_;
}
v___jp_101_:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_104_, 0, v_declName_100_);
lean_ctor_set(v___x_104_, 1, v___y_102_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___y_103_);
return v___x_105_;
}
v___jp_106_:
{
lean_object* v_numArgs_107_; lean_object* v___x_108_; 
v_numArgs_107_ = l_Lean_Expr_getAppNumArgs(v_e_82_);
v___x_108_ = l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___redArg(v_declName_100_, v_fnInfos_80_);
if (lean_obj_tag(v___x_108_) == 1)
{
lean_object* v_val_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_val_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_109_);
lean_dec_ref_known(v___x_108_, 1);
v___x_110_ = lean_unsigned_to_nat(1u);
v___x_111_ = lean_nat_sub(v_numArgs_107_, v___x_110_);
v___x_112_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsUsingInfo(v_val_109_, v___x_111_, v_e_82_, v_todo_81_);
lean_dec(v_val_109_);
v___y_102_ = v_numArgs_107_;
v___y_103_ = v___x_112_;
goto v___jp_101_;
}
else
{
lean_object* v___x_113_; 
lean_dec(v___x_108_);
v___x_113_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushAllArgs(v_e_82_, v_todo_81_);
v___y_102_ = v_numArgs_107_;
v___y_103_ = v___x_113_;
goto v___jp_101_;
}
}
}
case 1:
{
lean_object* v_fvarId_116_; lean_object* v_numArgs_117_; lean_object* v_todo_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_fvarId_116_ = lean_ctor_get(v_fn_88_, 0);
lean_inc(v_fvarId_116_);
lean_dec_ref_known(v_fn_88_, 1);
v_numArgs_117_ = l_Lean_Expr_getAppNumArgs(v_e_82_);
v_todo_118_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushAllArgs(v_e_82_, v_todo_81_);
v___x_119_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_119_, 0, v_fvarId_116_);
lean_ctor_set(v___x_119_, 1, v_numArgs_117_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v_todo_118_);
return v___x_120_;
}
default: 
{
lean_object* v___x_121_; lean_object* v___x_122_; 
lean_dec_ref(v_fn_88_);
lean_dec_ref(v_e_82_);
v___x_121_ = lean_box(1);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v_todo_81_);
return v___x_122_;
}
}
}
else
{
lean_dec_ref(v_e_82_);
if (v_root_79_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v_todo_81_);
return v___x_124_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__1));
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v_todo_81_);
return v___x_126_;
}
}
}
else
{
lean_dec_ref(v_e_82_);
goto v___jp_83_;
}
v___jp_83_:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_box(0);
v___x_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v_todo_81_);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___boxed(lean_object* v_root_127_, lean_object* v_fnInfos_128_, lean_object* v_todo_129_, lean_object* v_e_130_){
_start:
{
uint8_t v_root_boxed_131_; lean_object* v_res_132_; 
v_root_boxed_131_ = lean_unbox(v_root_127_);
v_res_132_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs(v_root_boxed_131_, v_fnInfos_128_, v_todo_129_, v_e_130_);
lean_dec(v_fnInfos_128_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0(lean_object* v_00_u03b2_133_, lean_object* v_a_134_, lean_object* v_x_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___redArg(v_a_134_, v_x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0___boxed(lean_object* v_00_u03b2_137_, lean_object* v_a_138_, lean_object* v_x_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_AssocList_find_x3f___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs_spec__0(v_00_u03b2_137_, v_a_138_, v_x_139_);
lean_dec(v_x_139_);
lean_dec(v_a_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_mkPathAux(uint8_t v_root_141_, lean_object* v_fnInfos_142_, lean_object* v_todo_143_, lean_object* v_keys_144_){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_145_ = lean_array_get_size(v_todo_143_);
v___x_146_ = lean_unsigned_to_nat(0u);
v___x_147_ = lean_nat_dec_eq(v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v_e_151_; lean_object* v_todo_152_; lean_object* v___x_153_; lean_object* v_fst_154_; lean_object* v_snd_155_; lean_object* v___x_156_; 
v___x_148_ = l_Lean_instInhabitedExpr;
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_sub(v___x_145_, v___x_149_);
v_e_151_ = lean_array_get(v___x_148_, v_todo_143_, v___x_150_);
lean_dec(v___x_150_);
v_todo_152_ = lean_array_pop(v_todo_143_);
v___x_153_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs(v_root_141_, v_fnInfos_142_, v_todo_152_, v_e_151_);
v_fst_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_fst_154_);
v_snd_155_ = lean_ctor_get(v___x_153_, 1);
lean_inc(v_snd_155_);
lean_dec_ref(v___x_153_);
v___x_156_ = lean_array_push(v_keys_144_, v_fst_154_);
v_root_141_ = v___x_147_;
v_todo_143_ = v_snd_155_;
v_keys_144_ = v___x_156_;
goto _start;
}
else
{
lean_dec_ref(v_todo_143_);
return v_keys_144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_mkPathAux___boxed(lean_object* v_root_158_, lean_object* v_fnInfos_159_, lean_object* v_todo_160_, lean_object* v_keys_161_){
_start:
{
uint8_t v_root_boxed_162_; lean_object* v_res_163_; 
v_root_boxed_162_ = lean_unbox(v_root_158_);
v_res_163_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_mkPathAux(v_root_boxed_162_, v_fnInfos_159_, v_todo_160_, v_keys_161_);
lean_dec(v_fnInfos_159_);
return v_res_163_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_initCapacity(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_unsigned_to_nat(8u);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(lean_object* v_p_165_){
_start:
{
lean_object* v_pattern_166_; lean_object* v_fnInfos_167_; lean_object* v___x_168_; lean_object* v_todo_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_pattern_166_ = lean_ctor_get(v_p_165_, 3);
lean_inc_ref(v_pattern_166_);
v_fnInfos_167_ = lean_ctor_get(v_p_165_, 4);
lean_inc(v_fnInfos_167_);
lean_dec_ref(v_p_165_);
v___x_168_ = lean_unsigned_to_nat(8u);
v_todo_169_ = lean_mk_empty_array_with_capacity(v___x_168_);
v___x_170_ = 1;
lean_inc_ref(v_todo_169_);
v___x_171_ = lean_array_push(v_todo_169_, v_pattern_166_);
v___x_172_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_mkPathAux(v___x_170_, v_fnInfos_167_, v___x_171_, v_todo_169_);
lean_dec(v_fnInfos_167_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___redArg(lean_object* v_inst_173_, lean_object* v_d_174_, lean_object* v_p_175_, lean_object* v_v_176_){
_start:
{
lean_object* v_keys_177_; lean_object* v___x_178_; 
v_keys_177_ = l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(v_p_175_);
v___x_178_ = l_Lean_Meta_DiscrTree_insertKeyValue___redArg(v_inst_173_, v_d_174_, v_keys_177_, v_v_176_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern(lean_object* v_00_u03b1_179_, lean_object* v_inst_180_, lean_object* v_d_181_, lean_object* v_p_182_, lean_object* v_v_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_Meta_Sym_insertPattern___redArg(v_inst_180_, v_d_181_, v_p_182_, v_v_183_);
return v___x_184_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0(lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
lean_object* v_fst_187_; lean_object* v_fst_188_; uint8_t v___x_189_; 
v_fst_187_ = lean_ctor_get(v_a_185_, 0);
v_fst_188_ = lean_ctor_get(v_b_186_, 0);
v___x_189_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_187_, v_fst_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0___boxed(lean_object* v_a_190_, lean_object* v_b_191_){
_start:
{
uint8_t v_res_192_; lean_object* v_r_193_; 
v_res_192_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0(v_a_190_, v_b_191_);
lean_dec_ref(v_b_191_);
lean_dec_ref(v_a_190_);
v_r_193_ = lean_box(v_res_192_);
return v_r_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg(lean_object* v_cs_200_, lean_object* v_k_201_){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_202_ = lean_unsigned_to_nat(0u);
v___x_203_ = lean_array_get_size(v_cs_200_);
v___x_204_ = lean_nat_dec_lt(v___x_202_, v___x_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
lean_dec(v_k_201_);
v___x_205_ = lean_box(0);
return v___x_205_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_206_ = lean_unsigned_to_nat(1u);
v___x_207_ = lean_nat_sub(v___x_203_, v___x_206_);
v___x_208_ = lean_nat_dec_le(v___x_202_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; 
lean_dec(v___x_207_);
lean_dec(v_k_201_);
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v___f_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___f_210_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__0));
v___x_211_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__2));
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v_k_201_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__3));
v___x_214_ = l_Array_binSearchAux___redArg(v___f_210_, v___x_213_, v_cs_200_, v___x_212_, v___x_202_, v___x_207_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___boxed(lean_object* v_cs_215_, lean_object* v_k_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg(v_cs_215_, v_k_216_);
lean_dec_ref(v_cs_215_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f(lean_object* v_00_u03b1_218_, lean_object* v_cs_219_, lean_object* v_k_220_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_array_get_size(v_cs_219_);
v___x_223_ = lean_nat_dec_lt(v___x_221_, v___x_222_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; 
lean_dec(v_k_220_);
v___x_224_ = lean_box(0);
return v___x_224_;
}
else
{
lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = lean_nat_sub(v___x_222_, v___x_225_);
v___x_227_ = lean_nat_dec_le(v___x_221_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
lean_dec(v___x_226_);
lean_dec(v_k_220_);
v___x_228_ = lean_box(0);
return v___x_228_;
}
else
{
lean_object* v___f_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___f_229_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__0));
v___x_230_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__2));
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v_k_220_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__3));
v___x_233_ = l_Array_binSearchAux___redArg(v___f_229_, v___x_232_, v_cs_219_, v___x_231_, v___x_221_, v___x_226_);
return v___x_233_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___boxed(lean_object* v_00_u03b1_234_, lean_object* v_cs_235_, lean_object* v_k_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f(v_00_u03b1_234_, v_cs_235_, v_k_236_);
lean_dec_ref(v_cs_235_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey(lean_object* v_e_238_){
_start:
{
uint8_t v___x_239_; 
v___x_239_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection(v_e_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
v___x_240_ = l_Lean_Expr_getAppFn_x27(v_e_238_);
switch(lean_obj_tag(v___x_240_))
{
case 9:
{
lean_object* v_a_241_; lean_object* v___x_242_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc_ref(v_a_241_);
lean_dec_ref_known(v___x_240_, 1);
v___x_242_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_242_, 0, v_a_241_);
return v___x_242_;
}
case 4:
{
lean_object* v_declName_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_declName_243_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_declName_243_);
lean_dec_ref_known(v___x_240_, 2);
v___x_244_ = l_Lean_Expr_getAppNumArgs_x27(v_e_238_);
v___x_245_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_245_, 0, v_declName_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
return v___x_245_;
}
case 1:
{
lean_object* v_fvarId_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_fvarId_246_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_fvarId_246_);
lean_dec_ref_known(v___x_240_, 1);
v___x_247_ = l_Lean_Expr_getAppNumArgs_x27(v_e_238_);
v___x_248_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_248_, 0, v_fvarId_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
return v___x_248_;
}
case 7:
{
lean_object* v___x_249_; 
lean_dec_ref_known(v___x_240_, 3);
v___x_249_ = lean_box(5);
return v___x_249_;
}
default: 
{
lean_object* v___x_250_; 
lean_dec_ref(v___x_240_);
v___x_250_ = lean_box(1);
return v___x_250_;
}
}
}
else
{
lean_object* v___x_251_; 
v___x_251_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgs___closed__1));
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey___boxed(lean_object* v_e_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey(v_e_252_);
lean_dec_ref(v_e_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars(lean_object* v_mctx_254_, lean_object* v_e_255_){
_start:
{
uint8_t v___x_256_; 
v___x_256_ = l_Lean_Expr_hasExprMVar(v_e_255_);
if (v___x_256_ == 0)
{
return v_e_255_;
}
else
{
lean_object* v___x_257_; 
v___x_257_ = l_Lean_Expr_getAppFn(v_e_255_);
if (lean_obj_tag(v___x_257_) == 2)
{
lean_object* v_mvarId_258_; lean_object* v___x_259_; 
v_mvarId_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_mvarId_258_);
lean_dec_ref_known(v___x_257_, 1);
v___x_259_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_254_, v_mvarId_258_);
lean_dec(v_mvarId_258_);
if (lean_obj_tag(v___x_259_) == 0)
{
return v_e_255_;
}
else
{
lean_object* v_val_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; lean_object* v___x_265_; 
v_val_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_val_260_);
lean_dec_ref_known(v___x_259_, 1);
v___x_261_ = l_Lean_Expr_getAppNumArgs(v_e_255_);
v___x_262_ = lean_mk_empty_array_with_capacity(v___x_261_);
lean_dec(v___x_261_);
v___x_263_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_255_, v___x_262_);
v___x_264_ = 0;
v___x_265_ = l_Lean_Expr_betaRev(v_val_260_, v___x_263_, v___x_264_, v___x_264_);
lean_dec_ref(v___x_263_);
v_e_255_ = v___x_265_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_257_);
return v_e_255_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars___boxed(lean_object* v_mctx_267_, lean_object* v_e_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars(v_mctx_267_, v_e_268_);
lean_dec_ref(v_mctx_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsTodo(lean_object* v_todo_270_, lean_object* v_e_271_){
_start:
{
uint8_t v___x_272_; 
v___x_272_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_isDecisionProjection(v_e_271_);
if (v___x_272_ == 0)
{
switch(lean_obj_tag(v_e_271_))
{
case 5:
{
lean_object* v_fn_273_; lean_object* v_arg_274_; lean_object* v___x_275_; 
v_fn_273_ = lean_ctor_get(v_e_271_, 0);
lean_inc_ref(v_fn_273_);
v_arg_274_ = lean_ctor_get(v_e_271_, 1);
lean_inc_ref(v_arg_274_);
lean_dec_ref_known(v_e_271_, 2);
v___x_275_ = lean_array_push(v_todo_270_, v_arg_274_);
v_todo_270_ = v___x_275_;
v_e_271_ = v_fn_273_;
goto _start;
}
case 7:
{
lean_object* v_binderType_277_; lean_object* v_body_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_binderType_277_ = lean_ctor_get(v_e_271_, 1);
lean_inc_ref(v_binderType_277_);
v_body_278_ = lean_ctor_get(v_e_271_, 2);
lean_inc_ref(v_body_278_);
lean_dec_ref_known(v_e_271_, 3);
v___x_279_ = lean_array_push(v_todo_270_, v_body_278_);
v___x_280_ = lean_array_push(v___x_279_, v_binderType_277_);
return v___x_280_;
}
case 10:
{
lean_object* v_expr_281_; 
v_expr_281_ = lean_ctor_get(v_e_271_, 1);
lean_inc_ref(v_expr_281_);
lean_dec_ref_known(v_e_271_, 2);
v_e_271_ = v_expr_281_;
goto _start;
}
default: 
{
lean_dec_ref(v_e_271_);
return v_todo_270_;
}
}
}
else
{
lean_dec_ref(v_e_271_);
return v_todo_270_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___redArg(lean_object* v_as_283_, lean_object* v_k_284_, lean_object* v_x_285_, lean_object* v_x_286_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_m_289_; lean_object* v_a_290_; uint8_t v___x_291_; 
v___x_287_ = lean_nat_add(v_x_285_, v_x_286_);
v___x_288_ = lean_unsigned_to_nat(1u);
v_m_289_ = lean_nat_shiftr(v___x_287_, v___x_288_);
lean_dec(v___x_287_);
v_a_290_ = lean_array_fget_borrowed(v_as_283_, v_m_289_);
v___x_291_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0(v_a_290_, v_k_284_);
if (v___x_291_ == 0)
{
uint8_t v___x_292_; 
lean_dec(v_x_286_);
v___x_292_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___lam__0(v_k_284_, v_a_290_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; 
lean_dec(v_m_289_);
lean_dec(v_x_285_);
lean_inc(v_a_290_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v_a_290_);
return v___x_293_;
}
else
{
lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = lean_nat_dec_eq(v_m_289_, v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_nat_sub(v_m_289_, v___x_288_);
lean_dec(v_m_289_);
v___x_297_ = lean_nat_dec_lt(v___x_296_, v_x_285_);
if (v___x_297_ == 0)
{
v_x_286_ = v___x_296_;
goto _start;
}
else
{
lean_object* v___x_299_; 
lean_dec(v___x_296_);
lean_dec(v_x_285_);
v___x_299_ = lean_box(0);
return v___x_299_;
}
}
else
{
lean_object* v___x_300_; 
lean_dec(v_m_289_);
lean_dec(v_x_285_);
v___x_300_ = lean_box(0);
return v___x_300_;
}
}
}
else
{
lean_object* v___x_301_; uint8_t v___x_302_; 
lean_dec(v_x_285_);
v___x_301_ = lean_nat_add(v_m_289_, v___x_288_);
lean_dec(v_m_289_);
v___x_302_ = lean_nat_dec_le(v___x_301_, v_x_286_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; 
lean_dec(v___x_301_);
lean_dec(v_x_286_);
v___x_303_ = lean_box(0);
return v___x_303_;
}
else
{
v_x_285_ = v___x_301_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___redArg___boxed(lean_object* v_as_305_, lean_object* v_k_306_, lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___redArg(v_as_305_, v_k_306_, v_x_307_, v_x_308_);
lean_dec_ref(v_k_306_);
lean_dec_ref(v_as_305_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg(lean_object* v_mctx_310_, lean_object* v_todo_311_, lean_object* v_c_312_, lean_object* v_result_313_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_instInhabitedExpr;
if (lean_obj_tag(v_c_312_) == 0)
{
lean_object* v_key_315_; lean_object* v_child_316_; lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v_key_315_ = lean_ctor_get(v_c_312_, 0);
lean_inc(v_key_315_);
v_child_316_ = lean_ctor_get(v_c_312_, 1);
lean_inc_ref(v_child_316_);
lean_dec_ref_known(v_c_312_, 2);
v___x_317_ = lean_array_get_size(v_todo_311_);
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = lean_nat_dec_eq(v___x_317_, v___x_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v_todo_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_sub(v___x_317_, v___x_320_);
v___x_322_ = lean_array_get(v___x_314_, v_todo_311_, v___x_321_);
lean_dec(v___x_321_);
v_todo_323_ = lean_array_pop(v_todo_311_);
v___x_324_ = lean_box(0);
v___x_325_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_key_315_, v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; lean_object* v_e_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_326_ = l_Lean_Meta_Sym_etaReduce(v___x_322_);
lean_dec(v___x_322_);
v_e_327_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars(v_mctx_310_, v___x_326_);
v___x_328_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey(v_e_327_);
v___x_329_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_key_315_, v___x_328_);
lean_dec(v___x_328_);
lean_dec(v_key_315_);
if (v___x_329_ == 0)
{
lean_dec_ref(v_e_327_);
lean_dec_ref(v_todo_323_);
lean_dec_ref(v_child_316_);
return v_result_313_;
}
else
{
lean_object* v___x_330_; 
v___x_330_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsTodo(v_todo_323_, v_e_327_);
v_todo_311_ = v___x_330_;
v_c_312_ = v_child_316_;
goto _start;
}
}
else
{
lean_dec(v___x_322_);
lean_dec(v_key_315_);
v_todo_311_ = v_todo_323_;
v_c_312_ = v_child_316_;
goto _start;
}
}
else
{
lean_dec_ref(v_child_316_);
lean_dec(v_key_315_);
lean_dec_ref(v_todo_311_);
return v_result_313_;
}
}
else
{
lean_object* v_vs_333_; lean_object* v_children_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v_vs_333_ = lean_ctor_get(v_c_312_, 0);
lean_inc_ref(v_vs_333_);
v_children_334_ = lean_ctor_get(v_c_312_, 1);
lean_inc_ref(v_children_334_);
lean_dec_ref_known(v_c_312_, 2);
v___x_335_ = lean_array_get_size(v_todo_311_);
v___x_336_ = lean_unsigned_to_nat(0u);
v___x_337_ = lean_nat_dec_eq(v___x_335_, v___x_336_);
if (v___x_337_ == 0)
{
lean_object* v_csize_338_; uint8_t v___x_339_; 
lean_dec_ref(v_vs_333_);
v_csize_338_ = lean_array_get_size(v_children_334_);
v___x_339_ = lean_nat_dec_eq(v_csize_338_, v___x_336_);
if (v___x_339_ == 0)
{
lean_object* v_first_340_; lean_object* v_fst_341_; lean_object* v_snd_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_370_; 
v_first_340_ = lean_array_fget(v_children_334_, v___x_336_);
v_fst_341_ = lean_ctor_get(v_first_340_, 0);
v_snd_342_ = lean_ctor_get(v_first_340_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v_first_340_);
if (v_isSharedCheck_370_ == 0)
{
v___x_344_ = v_first_340_;
v_isShared_345_ = v_isSharedCheck_370_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_snd_342_);
lean_inc(v_fst_341_);
lean_dec(v_first_340_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_370_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v_e_350_; lean_object* v_todo_351_; lean_object* v___y_353_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_sub(v___x_335_, v___x_346_);
v___x_348_ = lean_array_get_borrowed(v___x_314_, v_todo_311_, v___x_347_);
lean_dec(v___x_347_);
v___x_349_ = l_Lean_Meta_Sym_etaReduce(v___x_348_);
v_e_350_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars(v_mctx_310_, v___x_349_);
v_todo_351_ = lean_array_pop(v_todo_311_);
v___x_367_ = lean_box(0);
v___x_368_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_fst_341_, v___x_367_);
lean_dec(v_fst_341_);
if (v___x_368_ == 0)
{
lean_dec(v_snd_342_);
v___y_353_ = v_result_313_;
goto v___jp_352_;
}
else
{
lean_object* v___x_369_; 
lean_inc_ref(v_todo_351_);
v___x_369_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg(v_mctx_310_, v_todo_351_, v_snd_342_, v_result_313_);
v___y_353_ = v___x_369_;
goto v___jp_352_;
}
v___jp_352_:
{
uint8_t v___x_354_; 
v___x_354_ = lean_nat_dec_lt(v___x_336_, v_csize_338_);
if (v___x_354_ == 0)
{
lean_dec_ref(v_todo_351_);
lean_dec_ref(v_e_350_);
lean_del_object(v___x_344_);
lean_dec_ref(v_children_334_);
return v___y_353_;
}
else
{
lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_355_ = lean_nat_sub(v_csize_338_, v___x_346_);
v___x_356_ = lean_nat_dec_le(v___x_336_, v___x_355_);
if (v___x_356_ == 0)
{
lean_dec(v___x_355_);
lean_dec_ref(v_todo_351_);
lean_dec_ref(v_e_350_);
lean_del_object(v___x_344_);
lean_dec_ref(v_children_334_);
return v___y_353_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_357_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey(v_e_350_);
v___x_358_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__2));
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 1, v___x_358_);
lean_ctor_set(v___x_344_, 0, v___x_357_);
v___x_360_ = v___x_344_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v___x_358_);
v___x_360_ = v_reuseFailAlloc_366_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
lean_object* v___x_361_; 
v___x_361_ = l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___redArg(v_children_334_, v___x_360_, v___x_336_, v___x_355_);
lean_dec_ref(v___x_360_);
lean_dec_ref(v_children_334_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_dec_ref(v_todo_351_);
lean_dec_ref(v_e_350_);
return v___y_353_;
}
else
{
lean_object* v_val_362_; lean_object* v_snd_363_; lean_object* v___x_364_; 
v_val_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_val_362_);
lean_dec_ref_known(v___x_361_, 1);
v_snd_363_ = lean_ctor_get(v_val_362_, 1);
lean_inc(v_snd_363_);
lean_dec(v_val_362_);
v___x_364_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsTodo(v_todo_351_, v_e_350_);
v_todo_311_ = v___x_364_;
v_c_312_ = v_snd_363_;
v_result_313_ = v___y_353_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_children_334_);
lean_dec_ref(v_todo_311_);
return v_result_313_;
}
}
else
{
lean_object* v___x_371_; 
lean_dec_ref(v_children_334_);
lean_dec_ref(v_todo_311_);
v___x_371_ = l_Array_append___redArg(v_result_313_, v_vs_333_);
lean_dec_ref(v_vs_333_);
return v___x_371_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg___boxed(lean_object* v_mctx_372_, lean_object* v_todo_373_, lean_object* v_c_374_, lean_object* v_result_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg(v_mctx_372_, v_todo_373_, v_c_374_, v_result_375_);
lean_dec_ref(v_mctx_372_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop(lean_object* v_00_u03b1_377_, lean_object* v_mctx_378_, lean_object* v_todo_379_, lean_object* v_c_380_, lean_object* v_result_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg(v_mctx_378_, v_todo_379_, v_c_380_, v_result_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___boxed(lean_object* v_00_u03b1_383_, lean_object* v_mctx_384_, lean_object* v_todo_385_, lean_object* v_c_386_, lean_object* v_result_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop(v_00_u03b1_383_, v_mctx_384_, v_todo_385_, v_c_386_, v_result_387_);
lean_dec_ref(v_mctx_384_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0(lean_object* v_00_u03b1_389_, lean_object* v_as_390_, lean_object* v_k_391_, lean_object* v_x_392_, lean_object* v_x_393_, lean_object* v_x_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___redArg(v_as_390_, v_k_391_, v_x_392_, v_x_393_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0___boxed(lean_object* v_00_u03b1_396_, lean_object* v_as_397_, lean_object* v_k_398_, lean_object* v_x_399_, lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Array_binSearchAux___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop_spec__0(v_00_u03b1_396_, v_as_397_, v_k_398_, v_x_399_, v_x_400_, v_x_401_);
lean_dec_ref(v_k_398_);
lean_dec_ref(v_as_397_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_403_, lean_object* v_vals_404_, lean_object* v_i_405_, lean_object* v_k_406_){
_start:
{
lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_407_ = lean_array_get_size(v_keys_403_);
v___x_408_ = lean_nat_dec_lt(v_i_405_, v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
lean_dec(v_i_405_);
v___x_409_ = lean_box(0);
return v___x_409_;
}
else
{
lean_object* v_k_x27_410_; uint8_t v___x_411_; 
v_k_x27_410_ = lean_array_fget_borrowed(v_keys_403_, v_i_405_);
v___x_411_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_k_406_, v_k_x27_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_unsigned_to_nat(1u);
v___x_413_ = lean_nat_add(v_i_405_, v___x_412_);
lean_dec(v_i_405_);
v_i_405_ = v___x_413_;
goto _start;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_array_fget_borrowed(v_vals_404_, v_i_405_);
lean_dec(v_i_405_);
lean_inc(v___x_415_);
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_417_, lean_object* v_vals_418_, lean_object* v_i_419_, lean_object* v_k_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___redArg(v_keys_417_, v_vals_418_, v_i_419_, v_k_420_);
lean_dec(v_k_420_);
lean_dec_ref(v_vals_418_);
lean_dec_ref(v_keys_417_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___redArg(lean_object* v_x_422_, size_t v_x_423_, lean_object* v_x_424_){
_start:
{
if (lean_obj_tag(v_x_422_) == 0)
{
lean_object* v_es_425_; lean_object* v___x_426_; size_t v___x_427_; size_t v___x_428_; lean_object* v_j_429_; lean_object* v___x_430_; 
v_es_425_ = lean_ctor_get(v_x_422_, 0);
v___x_426_ = lean_box(2);
v___x_427_ = ((size_t)31ULL);
v___x_428_ = lean_usize_land(v_x_423_, v___x_427_);
v_j_429_ = lean_usize_to_nat(v___x_428_);
v___x_430_ = lean_array_get_borrowed(v___x_426_, v_es_425_, v_j_429_);
lean_dec(v_j_429_);
switch(lean_obj_tag(v___x_430_))
{
case 0:
{
lean_object* v_key_431_; lean_object* v_val_432_; uint8_t v___x_433_; 
v_key_431_ = lean_ctor_get(v___x_430_, 0);
v_val_432_ = lean_ctor_get(v___x_430_, 1);
v___x_433_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_424_, v_key_431_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
v___x_434_ = lean_box(0);
return v___x_434_;
}
else
{
lean_object* v___x_435_; 
lean_inc(v_val_432_);
v___x_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_435_, 0, v_val_432_);
return v___x_435_;
}
}
case 1:
{
lean_object* v_node_436_; size_t v___x_437_; size_t v___x_438_; 
v_node_436_ = lean_ctor_get(v___x_430_, 0);
v___x_437_ = ((size_t)5ULL);
v___x_438_ = lean_usize_shift_right(v_x_423_, v___x_437_);
v_x_422_ = v_node_436_;
v_x_423_ = v___x_438_;
goto _start;
}
default: 
{
lean_object* v___x_440_; 
v___x_440_ = lean_box(0);
return v___x_440_;
}
}
}
else
{
lean_object* v_ks_441_; lean_object* v_vs_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_ks_441_ = lean_ctor_get(v_x_422_, 0);
v_vs_442_ = lean_ctor_get(v_x_422_, 1);
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___redArg(v_ks_441_, v_vs_442_, v___x_443_, v_x_424_);
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___redArg___boxed(lean_object* v_x_445_, lean_object* v_x_446_, lean_object* v_x_447_){
_start:
{
size_t v_x_203__boxed_448_; lean_object* v_res_449_; 
v_x_203__boxed_448_ = lean_unbox_usize(v_x_446_);
lean_dec(v_x_446_);
v_res_449_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___redArg(v_x_445_, v_x_203__boxed_448_, v_x_447_);
lean_dec(v_x_447_);
lean_dec_ref(v_x_445_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg(lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
uint64_t v___x_452_; size_t v___x_453_; lean_object* v___x_454_; 
v___x_452_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_451_);
v___x_453_ = lean_uint64_to_usize(v___x_452_);
v___x_454_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___redArg(v_x_450_, v___x_453_, v_x_451_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg___boxed(lean_object* v_x_455_, lean_object* v_x_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg(v_x_455_, v_x_456_);
lean_dec(v_x_456_);
lean_dec_ref(v_x_455_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch___redArg(lean_object* v_mctx_460_, lean_object* v_d_461_, lean_object* v_e_462_){
_start:
{
lean_object* v___y_464_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_box(0);
v___x_474_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg(v_d_461_, v___x_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_unsigned_to_nat(8u);
v___x_476_ = lean_mk_empty_array_with_capacity(v___x_475_);
v___y_464_ = v___x_476_;
goto v___jp_463_;
}
else
{
lean_object* v_val_477_; 
v_val_477_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_val_477_);
lean_dec_ref_known(v___x_474_, 1);
if (lean_obj_tag(v_val_477_) == 0)
{
lean_object* v___x_478_; 
lean_dec_ref_known(v_val_477_, 2);
v___x_478_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_findKey_x3f___redArg___closed__1));
v___y_464_ = v___x_478_;
goto v___jp_463_;
}
else
{
lean_object* v_vs_479_; 
v_vs_479_ = lean_ctor_get(v_val_477_, 0);
lean_inc_ref(v_vs_479_);
lean_dec_ref_known(v_val_477_, 2);
v___y_464_ = v_vs_479_;
goto v___jp_463_;
}
}
v___jp_463_:
{
lean_object* v___x_465_; lean_object* v_e_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_465_ = l_Lean_Meta_Sym_etaReduce(v_e_462_);
v_e_466_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars(v_mctx_460_, v___x_465_);
v___x_467_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey(v_e_466_);
v___x_468_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg(v_d_461_, v___x_467_);
lean_dec(v___x_467_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_dec_ref(v_e_466_);
return v___y_464_;
}
else
{
lean_object* v_val_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_val_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_val_469_);
lean_dec_ref_known(v___x_468_, 1);
v___x_470_ = ((lean_object*)(l_Lean_Meta_Sym_getMatch___redArg___closed__0));
v___x_471_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_pushArgsTodo(v___x_470_, v_e_466_);
v___x_472_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchLoop___redArg(v_mctx_460_, v___x_471_, v_val_469_, v___y_464_);
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch___redArg___boxed(lean_object* v_mctx_480_, lean_object* v_d_481_, lean_object* v_e_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_Meta_Sym_getMatch___redArg(v_mctx_480_, v_d_481_, v_e_482_);
lean_dec_ref(v_e_482_);
lean_dec_ref(v_d_481_);
lean_dec_ref(v_mctx_480_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch(lean_object* v_00_u03b1_484_, lean_object* v_mctx_485_, lean_object* v_d_486_, lean_object* v_e_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_Meta_Sym_getMatch___redArg(v_mctx_485_, v_d_486_, v_e_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatch___boxed(lean_object* v_00_u03b1_489_, lean_object* v_mctx_490_, lean_object* v_d_491_, lean_object* v_e_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lean_Meta_Sym_getMatch(v_00_u03b1_489_, v_mctx_490_, v_d_491_, v_e_492_);
lean_dec_ref(v_e_492_);
lean_dec_ref(v_d_491_);
lean_dec_ref(v_mctx_490_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0(lean_object* v_00_u03b2_494_, lean_object* v_x_495_, lean_object* v_x_496_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg(v_x_495_, v_x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___boxed(lean_object* v_00_u03b2_498_, lean_object* v_x_499_, lean_object* v_x_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0(v_00_u03b2_498_, v_x_499_, v_x_500_);
lean_dec(v_x_500_);
lean_dec_ref(v_x_499_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0(lean_object* v_00_u03b2_502_, lean_object* v_x_503_, size_t v_x_504_, lean_object* v_x_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___redArg(v_x_503_, v_x_504_, v_x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0___boxed(lean_object* v_00_u03b2_507_, lean_object* v_x_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
size_t v_x_315__boxed_511_; lean_object* v_res_512_; 
v_x_315__boxed_511_ = lean_unbox_usize(v_x_509_);
lean_dec(v_x_509_);
v_res_512_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0(v_00_u03b2_507_, v_x_508_, v_x_315__boxed_511_, v_x_510_);
lean_dec(v_x_510_);
lean_dec_ref(v_x_508_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_513_, lean_object* v_keys_514_, lean_object* v_vals_515_, lean_object* v_heq_516_, lean_object* v_i_517_, lean_object* v_k_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___redArg(v_keys_514_, v_vals_515_, v_i_517_, v_k_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_520_, lean_object* v_keys_521_, lean_object* v_vals_522_, lean_object* v_heq_523_, lean_object* v_i_524_, lean_object* v_k_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0_spec__0_spec__1(v_00_u03b2_520_, v_keys_521_, v_vals_522_, v_heq_523_, v_i_524_, v_k_525_);
lean_dec(v_k_525_);
lean_dec_ref(v_vals_522_);
lean_dec_ref(v_keys_521_);
return v_res_526_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___redArg(lean_object* v_d_527_, lean_object* v_k_528_){
_start:
{
lean_object* v_k_530_; 
switch(lean_obj_tag(v_k_528_))
{
case 4:
{
lean_object* v_a_534_; lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_547_; 
v_a_534_ = lean_ctor_get(v_k_528_, 0);
v_a_535_ = lean_ctor_get(v_k_528_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_k_528_);
if (v_isSharedCheck_547_ == 0)
{
v___x_537_ = v_k_528_;
v_isShared_538_ = v_isSharedCheck_547_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_inc(v_a_534_);
lean_dec(v_k_528_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_547_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v_zero_539_; uint8_t v_isZero_540_; 
v_zero_539_ = lean_unsigned_to_nat(0u);
v_isZero_540_ = lean_nat_dec_eq(v_a_535_, v_zero_539_);
if (v_isZero_540_ == 0)
{
lean_object* v_one_541_; lean_object* v_n_542_; lean_object* v___x_544_; 
v_one_541_ = lean_unsigned_to_nat(1u);
v_n_542_ = lean_nat_sub(v_a_535_, v_one_541_);
lean_dec(v_a_535_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v_n_542_);
v___x_544_ = v___x_537_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_534_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_n_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
v_k_530_ = v___x_544_;
goto v___jp_529_;
}
}
else
{
uint8_t v___x_546_; 
lean_del_object(v___x_537_);
lean_dec(v_a_535_);
lean_dec(v_a_534_);
v___x_546_ = 0;
return v___x_546_;
}
}
}
case 3:
{
lean_object* v_a_548_; lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_561_; 
v_a_548_ = lean_ctor_get(v_k_528_, 0);
v_a_549_ = lean_ctor_get(v_k_528_, 1);
v_isSharedCheck_561_ = !lean_is_exclusive(v_k_528_);
if (v_isSharedCheck_561_ == 0)
{
v___x_551_ = v_k_528_;
v_isShared_552_ = v_isSharedCheck_561_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_inc(v_a_548_);
lean_dec(v_k_528_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_561_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v_zero_553_; uint8_t v_isZero_554_; 
v_zero_553_ = lean_unsigned_to_nat(0u);
v_isZero_554_ = lean_nat_dec_eq(v_a_549_, v_zero_553_);
if (v_isZero_554_ == 0)
{
lean_object* v_one_555_; lean_object* v_n_556_; lean_object* v___x_558_; 
v_one_555_ = lean_unsigned_to_nat(1u);
v_n_556_ = lean_nat_sub(v_a_549_, v_one_555_);
lean_dec(v_a_549_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 1, v_n_556_);
v___x_558_ = v___x_551_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_548_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_n_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
v_k_530_ = v___x_558_;
goto v___jp_529_;
}
}
else
{
uint8_t v___x_560_; 
lean_del_object(v___x_551_);
lean_dec(v_a_549_);
lean_dec(v_a_548_);
v___x_560_ = 0;
return v___x_560_;
}
}
}
default: 
{
uint8_t v___x_562_; 
lean_dec(v_k_528_);
v___x_562_ = 0;
return v___x_562_;
}
}
v___jp_529_:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMatch_spec__0___redArg(v_d_527_, v_k_530_);
if (lean_obj_tag(v___x_531_) == 0)
{
v_k_528_ = v_k_530_;
goto _start;
}
else
{
uint8_t v___x_533_; 
lean_dec_ref_known(v___x_531_, 1);
lean_dec(v_k_530_);
v___x_533_ = 1;
return v___x_533_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___redArg___boxed(lean_object* v_d_563_, lean_object* v_k_564_){
_start:
{
uint8_t v_res_565_; lean_object* v_r_566_; 
v_res_565_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___redArg(v_d_563_, v_k_564_);
lean_dec_ref(v_d_563_);
v_r_566_ = lean_box(v_res_565_);
return v_r_566_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix(lean_object* v_00_u03b1_567_, lean_object* v_d_568_, lean_object* v_k_569_){
_start:
{
uint8_t v___x_570_; 
v___x_570_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___redArg(v_d_568_, v_k_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___boxed(lean_object* v_00_u03b1_571_, lean_object* v_d_572_, lean_object* v_k_573_){
_start:
{
uint8_t v_res_574_; lean_object* v_r_575_; 
v_res_574_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix(v_00_u03b1_571_, v_d_572_, v_k_573_);
lean_dec_ref(v_d_572_);
v_r_575_ = lean_box(v_res_574_);
return v_r_575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___redArg(lean_object* v_numExtra_576_, size_t v_sz_577_, size_t v_i_578_, lean_object* v_bs_579_){
_start:
{
uint8_t v___x_580_; 
v___x_580_ = lean_usize_dec_lt(v_i_578_, v_sz_577_);
if (v___x_580_ == 0)
{
lean_dec(v_numExtra_576_);
return v_bs_579_;
}
else
{
lean_object* v_v_581_; lean_object* v___x_582_; lean_object* v_bs_x27_583_; lean_object* v___x_584_; size_t v___x_585_; size_t v___x_586_; lean_object* v___x_587_; 
v_v_581_ = lean_array_uget(v_bs_579_, v_i_578_);
v___x_582_ = lean_unsigned_to_nat(0u);
v_bs_x27_583_ = lean_array_uset(v_bs_579_, v_i_578_, v___x_582_);
lean_inc(v_numExtra_576_);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v_v_581_);
lean_ctor_set(v___x_584_, 1, v_numExtra_576_);
v___x_585_ = ((size_t)1ULL);
v___x_586_ = lean_usize_add(v_i_578_, v___x_585_);
v___x_587_ = lean_array_uset(v_bs_x27_583_, v_i_578_, v___x_584_);
v_i_578_ = v___x_586_;
v_bs_579_ = v___x_587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___redArg___boxed(lean_object* v_numExtra_589_, lean_object* v_sz_590_, lean_object* v_i_591_, lean_object* v_bs_592_){
_start:
{
size_t v_sz_boxed_593_; size_t v_i_boxed_594_; lean_object* v_res_595_; 
v_sz_boxed_593_ = lean_unbox_usize(v_sz_590_);
lean_dec(v_sz_590_);
v_i_boxed_594_ = lean_unbox_usize(v_i_591_);
lean_dec(v_i_591_);
v_res_595_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___redArg(v_numExtra_589_, v_sz_boxed_593_, v_i_boxed_594_, v_bs_592_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___redArg(lean_object* v_mctx_596_, lean_object* v_d_597_, lean_object* v_e_598_, lean_object* v_numExtra_599_, lean_object* v_result_600_){
_start:
{
lean_object* v___x_601_; size_t v_sz_602_; size_t v___x_603_; lean_object* v___x_604_; lean_object* v_result_605_; lean_object* v_e_606_; uint8_t v___x_607_; 
v___x_601_ = l_Lean_Meta_Sym_getMatch___redArg(v_mctx_596_, v_d_597_, v_e_598_);
v_sz_602_ = lean_array_size(v___x_601_);
v___x_603_ = ((size_t)0ULL);
lean_inc(v_numExtra_599_);
v___x_604_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___redArg(v_numExtra_599_, v_sz_602_, v___x_603_, v___x_601_);
v_result_605_ = l_Array_append___redArg(v_result_600_, v___x_604_);
lean_dec_ref(v___x_604_);
v_e_606_ = l_Lean_Expr_consumeMData(v_e_598_);
lean_dec_ref(v_e_598_);
v___x_607_ = l_Lean_Expr_isApp(v_e_606_);
if (v___x_607_ == 0)
{
lean_dec_ref(v_e_606_);
lean_dec(v_numExtra_599_);
return v_result_605_;
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = l_Lean_Expr_appFn_x21(v_e_606_);
lean_dec_ref(v_e_606_);
v___x_609_ = lean_unsigned_to_nat(1u);
v___x_610_ = lean_nat_add(v_numExtra_599_, v___x_609_);
lean_dec(v_numExtra_599_);
v_e_598_ = v___x_608_;
v_numExtra_599_ = v___x_610_;
v_result_600_ = v_result_605_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___redArg___boxed(lean_object* v_mctx_612_, lean_object* v_d_613_, lean_object* v_e_614_, lean_object* v_numExtra_615_, lean_object* v_result_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___redArg(v_mctx_612_, v_d_613_, v_e_614_, v_numExtra_615_, v_result_616_);
lean_dec_ref(v_d_613_);
lean_dec_ref(v_mctx_612_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go(lean_object* v_00_u03b1_618_, lean_object* v_mctx_619_, lean_object* v_d_620_, lean_object* v_e_621_, lean_object* v_numExtra_622_, lean_object* v_result_623_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___redArg(v_mctx_619_, v_d_620_, v_e_621_, v_numExtra_622_, v_result_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___boxed(lean_object* v_00_u03b1_625_, lean_object* v_mctx_626_, lean_object* v_d_627_, lean_object* v_e_628_, lean_object* v_numExtra_629_, lean_object* v_result_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go(v_00_u03b1_625_, v_mctx_626_, v_d_627_, v_e_628_, v_numExtra_629_, v_result_630_);
lean_dec_ref(v_d_627_);
lean_dec_ref(v_mctx_626_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0(lean_object* v_00_u03b1_632_, lean_object* v_numExtra_633_, size_t v_sz_634_, size_t v_i_635_, lean_object* v_bs_636_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___redArg(v_numExtra_633_, v_sz_634_, v_i_635_, v_bs_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0___boxed(lean_object* v_00_u03b1_638_, lean_object* v_numExtra_639_, lean_object* v_sz_640_, lean_object* v_i_641_, lean_object* v_bs_642_){
_start:
{
size_t v_sz_boxed_643_; size_t v_i_boxed_644_; lean_object* v_res_645_; 
v_sz_boxed_643_ = lean_unbox_usize(v_sz_640_);
lean_dec(v_sz_640_);
v_i_boxed_644_ = lean_unbox_usize(v_i_641_);
lean_dec(v_i_641_);
v_res_645_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go_spec__0(v_00_u03b1_638_, v_numExtra_639_, v_sz_boxed_643_, v_i_boxed_644_, v_bs_642_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___redArg(size_t v_sz_646_, size_t v_i_647_, lean_object* v_bs_648_){
_start:
{
uint8_t v___x_649_; 
v___x_649_ = lean_usize_dec_lt(v_i_647_, v_sz_646_);
if (v___x_649_ == 0)
{
return v_bs_648_;
}
else
{
lean_object* v_v_650_; lean_object* v___x_651_; lean_object* v_bs_x27_652_; lean_object* v___x_653_; size_t v___x_654_; size_t v___x_655_; lean_object* v___x_656_; 
v_v_650_ = lean_array_uget(v_bs_648_, v_i_647_);
v___x_651_ = lean_unsigned_to_nat(0u);
v_bs_x27_652_ = lean_array_uset(v_bs_648_, v_i_647_, v___x_651_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v_v_650_);
lean_ctor_set(v___x_653_, 1, v___x_651_);
v___x_654_ = ((size_t)1ULL);
v___x_655_ = lean_usize_add(v_i_647_, v___x_654_);
v___x_656_ = lean_array_uset(v_bs_x27_652_, v_i_647_, v___x_653_);
v_i_647_ = v___x_655_;
v_bs_648_ = v___x_656_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___redArg___boxed(lean_object* v_sz_658_, lean_object* v_i_659_, lean_object* v_bs_660_){
_start:
{
size_t v_sz_boxed_661_; size_t v_i_boxed_662_; lean_object* v_res_663_; 
v_sz_boxed_661_ = lean_unbox_usize(v_sz_658_);
lean_dec(v_sz_658_);
v_i_boxed_662_ = lean_unbox_usize(v_i_659_);
lean_dec(v_i_659_);
v_res_663_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___redArg(v_sz_boxed_661_, v_i_boxed_662_, v_bs_660_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra___redArg(lean_object* v_mctx_664_, lean_object* v_d_665_, lean_object* v_e_666_){
_start:
{
lean_object* v___x_667_; lean_object* v_e_668_; lean_object* v_e_669_; lean_object* v_result_670_; size_t v_sz_671_; size_t v___x_672_; lean_object* v_result_673_; uint8_t v___x_674_; 
v___x_667_ = l_Lean_Meta_Sym_etaReduce(v_e_666_);
v_e_668_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_resolveAssignedMVars(v_mctx_664_, v___x_667_);
v_e_669_ = l_Lean_Expr_consumeMData(v_e_668_);
lean_dec_ref(v_e_668_);
v_result_670_ = l_Lean_Meta_Sym_getMatch___redArg(v_mctx_664_, v_d_665_, v_e_669_);
v_sz_671_ = lean_array_size(v_result_670_);
v___x_672_ = ((size_t)0ULL);
v_result_673_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___redArg(v_sz_671_, v___x_672_, v_result_670_);
v___x_674_ = l_Lean_Expr_isApp(v_e_669_);
if (v___x_674_ == 0)
{
lean_dec_ref(v_e_669_);
return v_result_673_;
}
else
{
lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_675_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getKey(v_e_669_);
v___x_676_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_mayMatchPrefix___redArg(v_d_665_, v___x_675_);
if (v___x_676_ == 0)
{
lean_dec_ref(v_e_669_);
return v_result_673_;
}
else
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_677_ = l_Lean_Expr_appFn_x21(v_e_669_);
lean_dec_ref(v_e_669_);
v___x_678_ = lean_unsigned_to_nat(1u);
v___x_679_ = l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_getMatchWithExtra_go___redArg(v_mctx_664_, v_d_665_, v___x_677_, v___x_678_, v_result_673_);
return v___x_679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra___redArg___boxed(lean_object* v_mctx_680_, lean_object* v_d_681_, lean_object* v_e_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lean_Meta_Sym_getMatchWithExtra___redArg(v_mctx_680_, v_d_681_, v_e_682_);
lean_dec_ref(v_e_682_);
lean_dec_ref(v_d_681_);
lean_dec_ref(v_mctx_680_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra(lean_object* v_00_u03b1_684_, lean_object* v_mctx_685_, lean_object* v_d_686_, lean_object* v_e_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Lean_Meta_Sym_getMatchWithExtra___redArg(v_mctx_685_, v_d_686_, v_e_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMatchWithExtra___boxed(lean_object* v_00_u03b1_689_, lean_object* v_mctx_690_, lean_object* v_d_691_, lean_object* v_e_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_Meta_Sym_getMatchWithExtra(v_00_u03b1_689_, v_mctx_690_, v_d_691_, v_e_692_);
lean_dec_ref(v_e_692_);
lean_dec_ref(v_d_691_);
lean_dec_ref(v_mctx_690_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0(lean_object* v_00_u03b1_694_, size_t v_sz_695_, size_t v_i_696_, lean_object* v_bs_697_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___redArg(v_sz_695_, v_i_696_, v_bs_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0___boxed(lean_object* v_00_u03b1_699_, lean_object* v_sz_700_, lean_object* v_i_701_, lean_object* v_bs_702_){
_start:
{
size_t v_sz_boxed_703_; size_t v_i_boxed_704_; lean_object* v_res_705_; 
v_sz_boxed_703_ = lean_unbox_usize(v_sz_700_);
lean_dec(v_sz_700_);
v_i_boxed_704_ = lean_unbox_usize(v_i_701_);
lean_dec(v_i_701_);
v_res_705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_getMatchWithExtra_spec__0(v_00_u03b1_699_, v_sz_boxed_703_, v_i_boxed_704_, v_bs_702_);
return v_res_705_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Offset(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_initCapacity = _init_l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_initCapacity();
lean_mark_persistent(l___private_Lean_Meta_Sym_Simp_DiscrTree_0__Lean_Meta_Sym_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Offset(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
}
#ifdef __cplusplus
}
#endif
