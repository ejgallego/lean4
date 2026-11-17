// Lean compiler output
// Module: Lean.Server.Completion.SyntheticCompletion
// Imports: public import Lean.Elab.InfoTree.Util public import Lean.Server.Completion.CompletionUtils
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
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailingSize(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_lineStart(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isToken(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object*);
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object*);
lean_object* l_Lean_Elab_InfoTree_smallestInfo_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
uint8_t l_Lean_Elab_Info_isSmaller(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_lctx(lean_object*);
uint8_t l_Lean_LocalContext_isEmpty(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Info_occursInOrOnBoundary(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_hasArgs(lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
lean_object* l_Lean_Syntax_findStack_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Elab.InfoTree.Util.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.InfoTree.Util"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1___boxed(lean_object*);
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0_value;
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value;
static const lean_string_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "completion"};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5_value;
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_1),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value_aux_2),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(231, 49, 5, 252, 150, 235, 247, 237)}};
static const lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6 = (const lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0(lean_object*);
static const lean_string_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0 = (const lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0_value;
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_1),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value_aux_2),((lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1 = (const lean_object*)&l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1_value;
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeqBracketed"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 80, 121, 250, 245, 54, 71, 145)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty___boxed(lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0_value;
static const lean_ctor_object l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0 = (const lean_object*)&l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f(lean_object*);
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_0),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_1),((lean_object*)&l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticFieldCompletion_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_Completion_findSyntheticCompletions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_Completion_findSyntheticCompletions___closed__0 = (const lean_object*)&l_Lean_Server_Completion_findSyntheticCompletions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findSyntheticCompletions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(lean_object* v_gt_1_, lean_object* v_a_2_, lean_object* v_b_3_){
_start:
{
if (lean_obj_tag(v_a_2_) == 0)
{
uint8_t v___x_4_; 
lean_dec(v_b_3_);
lean_dec_ref(v_gt_1_);
v___x_4_ = 0;
return v___x_4_;
}
else
{
if (lean_obj_tag(v_b_3_) == 0)
{
uint8_t v___x_5_; 
lean_dec_ref_known(v_a_2_, 1);
lean_dec_ref(v_gt_1_);
v___x_5_ = 1;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_val_6_ = lean_ctor_get(v_a_2_, 0);
lean_inc(v_val_6_);
lean_dec_ref_known(v_a_2_, 1);
v_val_7_ = lean_ctor_get(v_b_3_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v_b_3_, 1);
v___x_8_ = lean_apply_2(v_gt_1_, v_val_6_, v_val_7_);
v___x_9_ = lean_unbox(v___x_8_);
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg___boxed(lean_object* v_gt_10_, lean_object* v_a_11_, lean_object* v_b_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_10_, v_a_11_, v_b_12_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter(lean_object* v_00_u03b1_15_, lean_object* v_gt_16_, lean_object* v_a_17_, lean_object* v_b_18_){
_start:
{
uint8_t v___x_19_; 
v___x_19_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_16_, v_a_17_, v_b_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___boxed(lean_object* v_00_u03b1_20_, lean_object* v_gt_21_, lean_object* v_a_22_, lean_object* v_b_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter(v_00_u03b1_20_, v_gt_21_, v_a_22_, v_b_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
if (lean_obj_tag(v_a_26_) == 0)
{
lean_object* v___x_28_; 
v___x_28_ = l_List_reverse___redArg(v_a_27_);
return v___x_28_;
}
else
{
lean_object* v_head_29_; lean_object* v_tail_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_42_; 
v_head_29_ = lean_ctor_get(v_a_26_, 0);
v_tail_30_ = lean_ctor_get(v_a_26_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_a_26_);
if (v_isSharedCheck_42_ == 0)
{
v___x_32_ = v_a_26_;
v_isShared_33_ = v_isSharedCheck_42_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_tail_30_);
lean_inc(v_head_29_);
lean_dec(v_a_26_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_42_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___y_35_; 
if (lean_obj_tag(v_head_29_) == 0)
{
lean_object* v___x_40_; 
v___x_40_ = lean_box(0);
v___y_35_ = v___x_40_;
goto v___jp_34_;
}
else
{
lean_object* v_val_41_; 
v_val_41_ = lean_ctor_get(v_head_29_, 0);
lean_inc(v_val_41_);
lean_dec_ref_known(v_head_29_, 1);
v___y_35_ = v_val_41_;
goto v___jp_34_;
}
v___jp_34_:
{
lean_object* v___x_37_; 
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 1, v_a_27_);
lean_ctor_set(v___x_32_, 0, v___y_35_);
v___x_37_ = v___x_32_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___y_35_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_a_27_);
v___x_37_ = v_reuseFailAlloc_39_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
v_a_26_ = v_tail_30_;
v_a_27_ = v___x_37_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(lean_object* v_gt_43_, lean_object* v_x_44_, lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_45_) == 0)
{
lean_dec_ref(v_gt_43_);
return v_x_44_;
}
else
{
lean_object* v_head_46_; lean_object* v_tail_47_; uint8_t v___x_48_; 
v_head_46_ = lean_ctor_get(v_x_45_, 0);
lean_inc_n(v_head_46_, 2);
v_tail_47_ = lean_ctor_get(v_x_45_, 1);
lean_inc(v_tail_47_);
lean_dec_ref_known(v_x_45_, 2);
lean_inc(v_x_44_);
lean_inc_ref(v_gt_43_);
v___x_48_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_43_, v_x_44_, v_head_46_);
if (v___x_48_ == 0)
{
lean_dec(v_x_44_);
v_x_44_ = v_head_46_;
v_x_45_ = v_tail_47_;
goto _start;
}
else
{
lean_dec(v_head_46_);
v_x_45_ = v_tail_47_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose___redArg(lean_object* v_gt_51_, lean_object* v_f_52_, lean_object* v_ctx_53_, lean_object* v_info_54_, lean_object* v_cs_55_, lean_object* v_childValues_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v_bestChildValue_60_; lean_object* v___x_61_; 
v___x_57_ = lean_box(0);
v___x_58_ = lean_box(0);
v___x_59_ = l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(v_childValues_56_, v___x_58_);
lean_inc_ref(v_gt_51_);
v_bestChildValue_60_ = l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(v_gt_51_, v___x_57_, v___x_59_);
v___x_61_ = lean_apply_3(v_f_52_, v_ctx_53_, v_info_54_, v_cs_55_);
if (lean_obj_tag(v___x_61_) == 1)
{
uint8_t v___x_62_; 
lean_inc(v_bestChildValue_60_);
lean_inc_ref(v___x_61_);
v___x_62_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_isBetter___redArg(v_gt_51_, v___x_61_, v_bestChildValue_60_);
if (v___x_62_ == 0)
{
lean_dec_ref_known(v___x_61_, 1);
return v_bestChildValue_60_;
}
else
{
lean_dec(v_bestChildValue_60_);
return v___x_61_;
}
}
else
{
lean_dec(v___x_61_);
lean_dec_ref(v_gt_51_);
return v_bestChildValue_60_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose(lean_object* v_00_u03b1_63_, lean_object* v_gt_64_, lean_object* v_f_65_, lean_object* v_ctx_66_, lean_object* v_info_67_, lean_object* v_cs_68_, lean_object* v_childValues_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose___redArg(v_gt_64_, v_f_65_, v_ctx_66_, v_info_67_, v_cs_68_, v_childValues_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0(lean_object* v_00_u03b1_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_List_mapTR_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__0___redArg(v_a_72_, v_a_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1(lean_object* v_00_u03b1_75_, lean_object* v_gt_76_, lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_List_foldl___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose_spec__1___redArg(v_gt_76_, v_x_77_, v_x_78_);
return v___x_79_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0(lean_object* v_x_80_, lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0___boxed(lean_object* v_x_84_, lean_object* v_x_85_, lean_object* v_x_86_){
_start:
{
uint8_t v_res_87_; lean_object* v_r_88_; 
v_res_87_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___lam__0(v_x_84_, v_x_85_, v_x_86_);
lean_dec_ref(v_x_86_);
lean_dec_ref(v_x_85_);
lean_dec_ref(v_x_84_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(lean_object* v_msg_96_){
_start:
{
lean_object* v___f_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___f_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___f_97_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0));
v___f_98_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1));
v___f_99_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2));
v___f_100_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3));
v___f_101_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4));
v___f_102_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5));
v___f_103_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6));
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___f_97_);
lean_ctor_set(v___x_104_, 1, v___f_98_);
v___x_105_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___f_99_);
lean_ctor_set(v___x_105_, 2, v___f_100_);
lean_ctor_set(v___x_105_, 3, v___f_101_);
lean_ctor_set(v___x_105_, 4, v___f_102_);
v___x_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___f_103_);
v___x_107_ = lean_box(0);
v___x_108_ = l_instInhabitedOfMonad___redArg(v___x_106_, v___x_107_);
v___x_109_ = lean_panic_fn_borrowed(v___x_108_, v_msg_96_);
lean_dec(v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_113_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__2));
v___x_114_ = lean_unsigned_to_nat(21u);
v___x_115_ = lean_unsigned_to_nat(65u);
v___x_116_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__1));
v___x_117_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__0));
v___x_118_ = l_mkPanicMessageWithDecl(v___x_117_, v___x_116_, v___x_115_, v___x_114_, v___x_113_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(lean_object* v_preNode_119_, lean_object* v_postNode_120_, lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
switch(lean_obj_tag(v_x_122_))
{
case 0:
{
lean_object* v_i_123_; lean_object* v_t_124_; lean_object* v___x_125_; 
v_i_123_ = lean_ctor_get(v_x_122_, 0);
lean_inc_ref(v_i_123_);
v_t_124_ = lean_ctor_get(v_x_122_, 1);
lean_inc_ref(v_t_124_);
lean_dec_ref_known(v_x_122_, 2);
v___x_125_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_123_, v_x_121_);
v_x_121_ = v___x_125_;
v_x_122_ = v_t_124_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_121_) == 0)
{
lean_object* v___x_127_; lean_object* v___x_128_; 
lean_dec_ref_known(v_x_122_, 2);
lean_dec(v_postNode_120_);
lean_dec_ref(v_preNode_119_);
v___x_127_ = lean_obj_once(&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3, &l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3_once, _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg___closed__3);
v___x_128_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(v___x_127_);
return v___x_128_;
}
else
{
lean_object* v_i_129_; lean_object* v_children_130_; lean_object* v_val_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v_i_129_ = lean_ctor_get(v_x_122_, 0);
lean_inc_ref_n(v_i_129_, 2);
v_children_130_ = lean_ctor_get(v_x_122_, 1);
lean_inc_ref_n(v_children_130_, 2);
lean_dec_ref_known(v_x_122_, 2);
v_val_131_ = lean_ctor_get(v_x_121_, 0);
lean_inc_n(v_val_131_, 2);
lean_inc_ref(v_preNode_119_);
v___x_132_ = lean_apply_3(v_preNode_119_, v_val_131_, v_i_129_, v_children_130_);
v___x_133_ = lean_unbox(v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_142_; 
lean_dec_ref(v_preNode_119_);
v_isSharedCheck_142_ = !lean_is_exclusive(v_x_121_);
if (v_isSharedCheck_142_ == 0)
{
lean_object* v_unused_143_; 
v_unused_143_ = lean_ctor_get(v_x_121_, 0);
lean_dec(v_unused_143_);
v___x_135_ = v_x_121_;
v_isShared_136_ = v_isSharedCheck_142_;
goto v_resetjp_134_;
}
else
{
lean_dec(v_x_121_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_142_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_137_ = lean_box(0);
v___x_138_ = lean_apply_4(v_postNode_120_, v_val_131_, v_i_129_, v_children_130_, v___x_137_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_138_);
v___x_140_ = v___x_135_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_144_ = l_Lean_Elab_Info_updateContext_x3f(v_x_121_, v_i_129_);
v___x_145_ = l_Lean_PersistentArray_toList___redArg(v_children_130_);
v___x_146_ = lean_box(0);
lean_inc(v_postNode_120_);
v___x_147_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(v_preNode_119_, v_postNode_120_, v___x_144_, v___x_145_, v___x_146_);
v___x_148_ = lean_apply_4(v_postNode_120_, v_val_131_, v_i_129_, v_children_130_, v___x_147_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
}
default: 
{
lean_object* v___x_150_; 
lean_dec_ref_known(v_x_122_, 1);
lean_dec(v_x_121_);
lean_dec(v_postNode_120_);
lean_dec_ref(v_preNode_119_);
v___x_150_ = lean_box(0);
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(lean_object* v_preNode_151_, lean_object* v_postNode_152_, lean_object* v___x_153_, lean_object* v_x_154_, lean_object* v_x_155_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
lean_object* v___x_156_; 
lean_dec(v___x_153_);
lean_dec(v_postNode_152_);
lean_dec_ref(v_preNode_151_);
v___x_156_ = l_List_reverse___redArg(v_x_155_);
return v___x_156_;
}
else
{
lean_object* v_head_157_; lean_object* v_tail_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_167_; 
v_head_157_ = lean_ctor_get(v_x_154_, 0);
v_tail_158_ = lean_ctor_get(v_x_154_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_154_);
if (v_isSharedCheck_167_ == 0)
{
v___x_160_ = v_x_154_;
v_isShared_161_ = v_isSharedCheck_167_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_tail_158_);
lean_inc(v_head_157_);
lean_dec(v_x_154_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_167_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
lean_inc(v___x_153_);
lean_inc(v_postNode_152_);
lean_inc_ref(v_preNode_151_);
v___x_162_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(v_preNode_151_, v_postNode_152_, v___x_153_, v_head_157_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v_x_155_);
lean_ctor_set(v___x_160_, 0, v___x_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_x_155_);
v___x_164_ = v_reuseFailAlloc_166_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
v_x_154_ = v_tail_158_;
v_x_155_ = v___x_164_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(lean_object* v_infoTree_169_, lean_object* v_gt_170_, lean_object* v_f_171_){
_start:
{
lean_object* v___f_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___f_172_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg___closed__0));
v___x_173_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_choose), 7, 3);
lean_closure_set(v___x_173_, 0, lean_box(0));
lean_closure_set(v___x_173_, 1, v_gt_170_);
lean_closure_set(v___x_173_, 2, v_f_171_);
v___x_174_ = lean_box(0);
v___x_175_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(v___f_172_, v___x_173_, v___x_174_, v_infoTree_169_);
if (lean_obj_tag(v___x_175_) == 0)
{
return v___x_174_;
}
else
{
lean_object* v_val_176_; 
v_val_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_val_176_);
lean_dec_ref_known(v___x_175_, 1);
return v_val_176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f(lean_object* v_00_u03b1_177_, lean_object* v_infoTree_178_, lean_object* v_gt_179_, lean_object* v_f_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(v_infoTree_178_, v_gt_179_, v_f_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0(lean_object* v_00_u03b1_182_, lean_object* v_msg_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg(v_msg_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0(lean_object* v_00_u03b1_185_, lean_object* v_preNode_186_, lean_object* v_postNode_187_, lean_object* v_x_188_, lean_object* v_x_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0___redArg(v_preNode_186_, v_postNode_187_, v_x_188_, v_x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1(lean_object* v_00_u03b1_191_, lean_object* v_preNode_192_, lean_object* v_postNode_193_, lean_object* v___x_194_, lean_object* v_x_195_, lean_object* v_x_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__1___redArg(v_preNode_192_, v_postNode_193_, v___x_194_, v_x_195_, v_x_196_);
return v___x_197_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter(lean_object* v_a_198_, lean_object* v_b_199_){
_start:
{
lean_object* v_snd_200_; lean_object* v_snd_201_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_snd_200_ = lean_ctor_get(v_a_198_, 1);
v_snd_201_ = lean_ctor_get(v_b_199_, 1);
v___x_210_ = l_Lean_Elab_Info_lctx(v_snd_200_);
v___x_211_ = l_Lean_LocalContext_isEmpty(v___x_210_);
lean_dec_ref(v___x_210_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = l_Lean_Elab_Info_lctx(v_snd_201_);
v___x_213_ = l_Lean_LocalContext_isEmpty(v___x_212_);
lean_dec_ref(v___x_212_);
if (v___x_213_ == 0)
{
goto v___jp_205_;
}
else
{
return v___x_213_;
}
}
else
{
goto v___jp_205_;
}
v___jp_202_:
{
uint8_t v___x_203_; 
v___x_203_ = l_Lean_Elab_Info_isSmaller(v_snd_200_, v_snd_201_);
if (v___x_203_ == 0)
{
uint8_t v___x_204_; 
v___x_204_ = l_Lean_Elab_Info_isSmaller(v_snd_201_, v_snd_200_);
if (v___x_204_ == 0)
{
return v___x_204_;
}
else
{
return v___x_203_;
}
}
else
{
return v___x_203_;
}
}
v___jp_205_:
{
lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_206_ = l_Lean_Elab_Info_lctx(v_snd_200_);
v___x_207_ = l_Lean_LocalContext_isEmpty(v___x_206_);
lean_dec_ref(v___x_206_);
if (v___x_207_ == 0)
{
goto v___jp_202_;
}
else
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = l_Lean_Elab_Info_lctx(v_snd_201_);
v___x_209_ = l_Lean_LocalContext_isEmpty(v___x_208_);
lean_dec_ref(v___x_208_);
if (v___x_209_ == 0)
{
return v___x_209_;
}
else
{
goto v___jp_202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter___boxed(lean_object* v_a_214_, lean_object* v_b_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f_isBetter(v_a_214_, v_b_215_);
lean_dec_ref(v_b_215_);
lean_dec_ref(v_a_214_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0(lean_object* v_hoverPos_218_, lean_object* v_ctx_219_, lean_object* v_info_220_, lean_object* v_x_221_){
_start:
{
uint8_t v___x_222_; 
v___x_222_ = l_Lean_Elab_Info_occursInOrOnBoundary(v_info_220_, v_hoverPos_218_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; 
lean_dec_ref(v_info_220_);
lean_dec_ref(v_ctx_219_);
v___x_223_ = lean_box(0);
return v___x_223_;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v_ctx_219_);
lean_ctor_set(v___x_224_, 1, v_info_220_);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0___boxed(lean_object* v_hoverPos_226_, lean_object* v_ctx_227_, lean_object* v_info_228_, lean_object* v_x_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0(v_hoverPos_226_, v_ctx_227_, v_info_228_, v_x_229_);
lean_dec_ref(v_x_229_);
lean_dec(v_hoverPos_226_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f(lean_object* v_hoverPos_232_, lean_object* v_infoTree_233_){
_start:
{
lean_object* v___f_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___f_234_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___lam__0___boxed), 4, 1);
lean_closure_set(v___f_234_, 0, v_hoverPos_232_);
v___x_235_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f___closed__0));
v___x_236_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f___redArg(v_infoTree_233_, v___x_235_, v___f_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__2(lean_object* v_msg_237_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_unsigned_to_nat(0u);
v___x_239_ = lean_panic_fn_borrowed(v___x_238_, v_msg_237_);
return v___x_239_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0(lean_object* v_hoverPos_240_, lean_object* v_x_241_){
_start:
{
uint8_t v___x_242_; lean_object* v___x_243_; 
v___x_242_ = 0;
v___x_243_ = l_Lean_Syntax_getRange_x3f(v_x_241_, v___x_242_);
if (lean_obj_tag(v___x_243_) == 0)
{
return v___x_242_;
}
else
{
lean_object* v_val_244_; uint8_t v___x_245_; uint8_t v___x_246_; 
v_val_244_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_val_244_);
lean_dec_ref_known(v___x_243_, 1);
v___x_245_ = 1;
v___x_246_ = l_Lean_Syntax_Range_contains(v_val_244_, v_hoverPos_240_, v___x_245_);
lean_dec(v_val_244_);
return v___x_246_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0___boxed(lean_object* v_hoverPos_247_, lean_object* v_x_248_){
_start:
{
uint8_t v_res_249_; lean_object* v_r_250_; 
v_res_249_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0(v_hoverPos_247_, v_x_248_);
lean_dec(v_x_248_);
lean_dec(v_hoverPos_247_);
v_r_250_ = lean_box(v_res_249_);
return v_r_250_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1(lean_object* v_stx_251_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = l_Lean_Syntax_hasArgs(v_stx_251_);
if (v___x_252_ == 0)
{
uint8_t v___x_253_; 
v___x_253_ = 1;
return v___x_253_;
}
else
{
uint8_t v___x_254_; 
v___x_254_ = 0;
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1___boxed(lean_object* v_stx_255_){
_start:
{
uint8_t v_res_256_; lean_object* v_r_257_; 
v_res_256_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__1(v_stx_255_);
lean_dec(v_stx_255_);
v_r_257_ = lean_box(v_res_256_);
return v_r_257_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0(lean_object* v_x_270_){
_start:
{
if (lean_obj_tag(v_x_270_) == 0)
{
return v_x_270_;
}
else
{
lean_object* v_head_271_; lean_object* v_tail_272_; lean_object* v_fst_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v_head_271_ = lean_ctor_get(v_x_270_, 0);
v_tail_272_ = lean_ctor_get(v_x_270_, 1);
v_fst_273_ = lean_ctor_get(v_head_271_, 0);
v___x_274_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1));
lean_inc(v_fst_273_);
v___x_275_ = l_Lean_Syntax_isOfKind(v_fst_273_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6));
lean_inc(v_fst_273_);
v___x_277_ = l_Lean_Syntax_isOfKind(v_fst_273_, v___x_276_);
if (v___x_277_ == 0)
{
lean_inc(v_tail_272_);
lean_dec_ref_known(v_x_270_, 2);
v_x_270_ = v_tail_272_;
goto _start;
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_279_ = lean_unsigned_to_nat(0u);
v___x_280_ = l_Lean_Syntax_getArg(v_fst_273_, v___x_279_);
v___x_281_ = l_Lean_Syntax_isOfKind(v___x_280_, v___x_274_);
if (v___x_281_ == 0)
{
lean_inc(v_tail_272_);
lean_dec_ref_known(v_x_270_, 2);
v_x_270_ = v_tail_272_;
goto _start;
}
else
{
return v_x_270_;
}
}
}
else
{
return v_x_270_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(lean_object* v_x_289_){
_start:
{
if (lean_obj_tag(v_x_289_) == 0)
{
uint8_t v___x_290_; 
v___x_290_ = 0;
return v___x_290_;
}
else
{
lean_object* v_head_291_; lean_object* v_tail_292_; lean_object* v_fst_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v_head_291_ = lean_ctor_get(v_x_289_, 0);
lean_inc(v_head_291_);
v_tail_292_ = lean_ctor_get(v_x_289_, 1);
lean_inc(v_tail_292_);
lean_dec_ref_known(v_x_289_, 2);
v_fst_293_ = lean_ctor_get(v_head_291_, 0);
lean_inc_n(v_fst_293_, 2);
lean_dec(v_head_291_);
v___x_294_ = ((lean_object*)(l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___closed__1));
v___x_295_ = l_Lean_Syntax_isOfKind(v_fst_293_, v___x_294_);
if (v___x_295_ == 0)
{
lean_dec(v_fst_293_);
v_x_289_ = v_tail_292_;
goto _start;
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_297_ = lean_unsigned_to_nat(1u);
v___x_298_ = l_Lean_Syntax_getArg(v_fst_293_, v___x_297_);
lean_dec(v_fst_293_);
v___x_299_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1));
v___x_300_ = l_Lean_Syntax_isOfKind(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
v_x_289_ = v_tail_292_;
goto _start;
}
else
{
lean_dec(v_tail_292_);
return v___x_300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1___boxed(lean_object* v_x_302_){
_start:
{
uint8_t v_res_303_; lean_object* v_r_304_; 
v_res_303_ = l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(v_x_302_);
v_r_304_ = lean_box(v_res_303_);
return v_r_304_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_309_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__3));
v___x_310_ = lean_unsigned_to_nat(14u);
v___x_311_ = lean_unsigned_to_nat(22u);
v___x_312_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__2));
v___x_313_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__1));
v___x_314_ = l_mkPanicMessageWithDecl(v___x_313_, v___x_312_, v___x_311_, v___x_310_, v___x_309_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f(lean_object* v_hoverPos_315_, lean_object* v_infoTree_316_){
_start:
{
lean_object* v___x_317_; 
lean_inc(v_hoverPos_315_);
v___x_317_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findClosestInfoWithLocalContextAt_x3f(v_hoverPos_315_, v_infoTree_316_);
if (lean_obj_tag(v___x_317_) == 1)
{
lean_object* v_val_318_; lean_object* v_fst_319_; lean_object* v_snd_320_; lean_object* v___f_321_; lean_object* v___f_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_val_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_val_318_);
lean_dec_ref_known(v___x_317_, 1);
v_fst_319_ = lean_ctor_get(v_val_318_, 0);
lean_inc(v_fst_319_);
v_snd_320_ = lean_ctor_get(v_val_318_, 1);
lean_inc(v_snd_320_);
lean_dec(v_val_318_);
lean_inc(v_hoverPos_315_);
v___f_321_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___lam__0___boxed), 2, 1);
lean_closure_set(v___f_321_, 0, v_hoverPos_315_);
v___f_322_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__0));
v___x_323_ = l_Lean_Elab_Info_stx(v_snd_320_);
v___x_324_ = l_Lean_Syntax_findStack_x3f(v___x_323_, v___f_321_, v___f_322_);
if (lean_obj_tag(v___x_324_) == 1)
{
lean_object* v_val_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_381_; 
v_val_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_381_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_381_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_val_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_381_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v_stack_329_; lean_object* v___x_330_; 
v_stack_329_ = l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0(v_val_325_);
v___x_330_ = l_List_head_x3f___redArg(v_stack_329_);
if (lean_obj_tag(v___x_330_) == 1)
{
lean_object* v_val_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_379_; 
v_val_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_379_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_379_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_val_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_379_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_fst_335_; lean_object* v___y_337_; uint8_t v___y_338_; lean_object* v___y_339_; lean_object* v___y_348_; uint8_t v___y_349_; lean_object* v___y_350_; uint8_t v_isDotIdCompletion_359_; lean_object* v_fst_361_; uint8_t v_snd_362_; 
v_fst_335_ = lean_ctor_get(v_val_331_, 0);
lean_inc(v_fst_335_);
lean_dec(v_val_331_);
v_isDotIdCompletion_359_ = l_List_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__1(v_stack_329_);
if (v_isDotIdCompletion_359_ == 0)
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__1));
lean_inc(v_fst_335_);
v___x_368_ = l_Lean_Syntax_isOfKind(v_fst_335_, v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = ((lean_object*)(l_List_dropWhile___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__0___closed__6));
lean_inc(v_fst_335_);
v___x_370_ = l_Lean_Syntax_isOfKind(v_fst_335_, v___x_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; 
lean_dec(v_fst_335_);
lean_del_object(v___x_333_);
lean_del_object(v___x_327_);
lean_dec(v_snd_320_);
lean_dec(v_fst_319_);
lean_dec(v_hoverPos_315_);
v___x_371_ = lean_box(0);
return v___x_371_;
}
else
{
lean_object* v___x_372_; lean_object* v_id_373_; uint8_t v___x_374_; 
v___x_372_ = lean_unsigned_to_nat(0u);
v_id_373_ = l_Lean_Syntax_getArg(v_fst_335_, v___x_372_);
lean_inc(v_id_373_);
v___x_374_ = l_Lean_Syntax_isOfKind(v_id_373_, v___x_367_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v_id_373_);
lean_dec(v_fst_335_);
lean_del_object(v___x_333_);
lean_del_object(v___x_327_);
lean_dec(v_snd_320_);
lean_dec(v_fst_319_);
lean_dec(v_hoverPos_315_);
v___x_375_ = lean_box(0);
return v___x_375_;
}
else
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_TSyntax_getId(v_id_373_);
lean_dec(v_id_373_);
v_fst_361_ = v___x_376_;
v_snd_362_ = v___x_374_;
goto v___jp_360_;
}
}
}
else
{
lean_object* v___x_377_; 
v___x_377_ = l_Lean_TSyntax_getId(v_fst_335_);
v_fst_361_ = v___x_377_;
v_snd_362_ = v_isDotIdCompletion_359_;
goto v___jp_360_;
}
}
else
{
lean_object* v___x_378_; 
lean_dec(v_fst_335_);
lean_del_object(v___x_333_);
lean_del_object(v___x_327_);
lean_dec(v_snd_320_);
lean_dec(v_fst_319_);
lean_dec(v_hoverPos_315_);
v___x_378_ = lean_box(0);
return v___x_378_;
}
v___jp_336_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_345_; 
v___x_340_ = l_Lean_Elab_Info_lctx(v_snd_320_);
lean_dec(v_snd_320_);
v___x_341_ = lean_box(0);
v___x_342_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_342_, 0, v_fst_335_);
lean_ctor_set(v___x_342_, 1, v___y_337_);
lean_ctor_set(v___x_342_, 2, v___x_340_);
lean_ctor_set(v___x_342_, 3, v___x_341_);
lean_ctor_set_uint8(v___x_342_, sizeof(void*)*4, v___y_338_);
v___x_343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_343_, 0, v___y_339_);
lean_ctor_set(v___x_343_, 1, v_fst_319_);
lean_ctor_set(v___x_343_, 2, v___x_342_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_343_);
v___x_345_ = v___x_333_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
v___jp_347_:
{
lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = lean_nat_add(v_hoverPos_315_, v___x_351_);
v___x_353_ = lean_nat_dec_le(v___x_352_, v___y_350_);
lean_dec(v___x_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
lean_dec(v___y_350_);
lean_del_object(v___x_327_);
lean_dec(v_hoverPos_315_);
v___x_354_ = lean_box(0);
v___y_337_ = v___y_348_;
v___y_338_ = v___y_349_;
v___y_339_ = v___x_354_;
goto v___jp_336_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_nat_sub(v___y_350_, v_hoverPos_315_);
lean_dec(v_hoverPos_315_);
lean_dec(v___y_350_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_355_);
v___x_357_ = v___x_327_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
v___y_337_ = v___y_348_;
v___y_338_ = v___y_349_;
v___y_339_ = v___x_357_;
goto v___jp_336_;
}
}
}
v___jp_360_:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_Syntax_getTailPos_x3f(v_fst_335_, v_isDotIdCompletion_359_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_obj_once(&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4, &l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4_once, _init_l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4);
v___x_365_ = l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f_spec__2(v___x_364_);
v___y_348_ = v_fst_361_;
v___y_349_ = v_snd_362_;
v___y_350_ = v___x_365_;
goto v___jp_347_;
}
else
{
lean_object* v_val_366_; 
v_val_366_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_val_366_);
lean_dec_ref_known(v___x_363_, 1);
v___y_348_ = v_fst_361_;
v___y_349_ = v_snd_362_;
v___y_350_ = v_val_366_;
goto v___jp_347_;
}
}
}
}
else
{
lean_object* v___x_380_; 
lean_dec(v___x_330_);
lean_dec(v_stack_329_);
lean_del_object(v___x_327_);
lean_dec(v_snd_320_);
lean_dec(v_fst_319_);
lean_dec(v_hoverPos_315_);
v___x_380_ = lean_box(0);
return v___x_380_;
}
}
}
else
{
lean_object* v___x_382_; 
lean_dec(v___x_324_);
lean_dec(v_snd_320_);
lean_dec(v_fst_319_);
lean_dec(v_hoverPos_315_);
v___x_382_ = lean_box(0);
return v___x_382_;
}
}
else
{
lean_object* v___x_383_; 
lean_dec(v___x_317_);
lean_dec(v_hoverPos_315_);
v___x_383_ = lean_box(0);
return v___x_383_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(lean_object* v_fileMap_384_, lean_object* v_hoverPos_385_){
_start:
{
lean_object* v_source_386_; uint8_t v___x_387_; 
v_source_386_ = lean_ctor_get(v_fileMap_384_, 0);
v___x_387_ = lean_string_utf8_at_end(v_source_386_, v_hoverPos_385_);
if (v___x_387_ == 0)
{
uint32_t v___x_388_; uint32_t v___x_389_; uint8_t v___x_390_; 
v___x_388_ = lean_string_utf8_get(v_source_386_, v_hoverPos_385_);
v___x_389_ = 32;
v___x_390_ = lean_uint32_dec_eq(v___x_388_, v___x_389_);
if (v___x_390_ == 0)
{
uint32_t v___x_391_; uint8_t v___x_392_; 
v___x_391_ = 9;
v___x_392_ = lean_uint32_dec_eq(v___x_388_, v___x_391_);
if (v___x_392_ == 0)
{
uint32_t v___x_393_; uint8_t v___x_394_; 
v___x_393_ = 13;
v___x_394_ = lean_uint32_dec_eq(v___x_388_, v___x_393_);
if (v___x_394_ == 0)
{
uint32_t v___x_395_; uint8_t v___x_396_; 
v___x_395_ = 10;
v___x_396_ = lean_uint32_dec_eq(v___x_388_, v___x_395_);
return v___x_396_;
}
else
{
return v___x_394_;
}
}
else
{
return v___x_392_;
}
}
else
{
return v___x_390_;
}
}
else
{
return v___x_387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace___boxed(lean_object* v_fileMap_397_, lean_object* v_hoverPos_398_){
_start:
{
uint8_t v_res_399_; lean_object* v_r_400_; 
v_res_399_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(v_fileMap_397_, v_hoverPos_398_);
lean_dec(v_hoverPos_398_);
lean_dec_ref(v_fileMap_397_);
v_r_400_ = lean_box(v_res_399_);
return v_r_400_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(lean_object* v_fileMap_401_, lean_object* v_hoverPos_402_){
_start:
{
lean_object* v_source_403_; uint8_t v___x_416_; 
v_source_403_ = lean_ctor_get(v_fileMap_401_, 0);
v___x_416_ = lean_string_utf8_at_end(v_source_403_, v_hoverPos_402_);
if (v___x_416_ == 0)
{
uint32_t v___x_417_; uint32_t v___x_418_; uint8_t v___x_419_; 
v___x_417_ = lean_string_utf8_get(v_source_403_, v_hoverPos_402_);
v___x_418_ = 32;
v___x_419_ = lean_uint32_dec_eq(v___x_417_, v___x_418_);
if (v___x_419_ == 0)
{
uint32_t v___x_420_; uint8_t v___x_421_; 
v___x_420_ = 9;
v___x_421_ = lean_uint32_dec_eq(v___x_417_, v___x_420_);
if (v___x_421_ == 0)
{
uint32_t v___x_422_; uint8_t v___x_423_; 
v___x_422_ = 13;
v___x_423_ = lean_uint32_dec_eq(v___x_417_, v___x_422_);
if (v___x_423_ == 0)
{
uint32_t v___x_424_; uint8_t v___x_425_; 
v___x_424_ = 10;
v___x_425_ = lean_uint32_dec_eq(v___x_417_, v___x_424_);
if (v___x_425_ == 0)
{
return v___x_425_;
}
else
{
goto v___jp_404_;
}
}
else
{
goto v___jp_404_;
}
}
else
{
goto v___jp_404_;
}
}
else
{
goto v___jp_404_;
}
}
else
{
goto v___jp_404_;
}
v___jp_404_:
{
lean_object* v___x_405_; lean_object* v___x_406_; uint32_t v___x_407_; uint32_t v___x_408_; uint8_t v___x_409_; 
v___x_405_ = lean_unsigned_to_nat(1u);
v___x_406_ = lean_nat_sub(v_hoverPos_402_, v___x_405_);
v___x_407_ = lean_string_utf8_get(v_source_403_, v___x_406_);
lean_dec(v___x_406_);
v___x_408_ = 32;
v___x_409_ = lean_uint32_dec_eq(v___x_407_, v___x_408_);
if (v___x_409_ == 0)
{
uint32_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = 9;
v___x_411_ = lean_uint32_dec_eq(v___x_407_, v___x_410_);
if (v___x_411_ == 0)
{
uint32_t v___x_412_; uint8_t v___x_413_; 
v___x_412_ = 13;
v___x_413_ = lean_uint32_dec_eq(v___x_407_, v___x_412_);
if (v___x_413_ == 0)
{
uint32_t v___x_414_; uint8_t v___x_415_; 
v___x_414_ = 10;
v___x_415_ = lean_uint32_dec_eq(v___x_407_, v___x_414_);
return v___x_415_;
}
else
{
return v___x_413_;
}
}
else
{
return v___x_411_;
}
}
else
{
return v___x_409_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace___boxed(lean_object* v_fileMap_426_, lean_object* v_hoverPos_427_){
_start:
{
uint8_t v_res_428_; lean_object* v_r_429_; 
v_res_428_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_426_, v_hoverPos_427_);
lean_dec(v_hoverPos_427_);
lean_dec_ref(v_fileMap_426_);
v_r_429_ = lean_box(v_res_428_);
return v_r_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(lean_object* v_stx_443_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
lean_inc(v_stx_443_);
v___x_444_ = l_Lean_Syntax_getKind(v_stx_443_);
v___x_445_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2));
v___x_446_ = lean_name_eq(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_447_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4));
v___x_448_ = lean_name_eq(v___x_444_, v___x_447_);
lean_dec(v___x_444_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; 
lean_dec(v_stx_443_);
v___x_449_ = lean_box(0);
return v___x_449_;
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_unsigned_to_nat(1u);
v___x_451_ = l_Lean_Syntax_getArg(v_stx_443_, v___x_450_);
lean_dec(v_stx_443_);
v___x_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
else
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
lean_dec(v___x_444_);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = l_Lean_Syntax_getArg(v_stx_443_, v___x_453_);
lean_dec(v_stx_443_);
v___x_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(lean_object* v_fileMap_456_, lean_object* v_hoverPos_457_, lean_object* v_hoverFilePos_458_, lean_object* v_stx_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(v_stx_459_);
if (lean_obj_tag(v___x_460_) == 1)
{
lean_object* v_val_461_; uint8_t v___x_462_; lean_object* v___x_463_; 
v_val_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_val_461_);
lean_dec_ref_known(v___x_460_, 1);
v___x_462_ = 0;
v___x_463_ = l_Lean_Syntax_getPos_x3f(v_val_461_, v___x_462_);
lean_dec(v_val_461_);
if (lean_obj_tag(v___x_463_) == 1)
{
lean_object* v_val_464_; lean_object* v___x_465_; lean_object* v_column_466_; lean_object* v_column_467_; uint8_t v___x_468_; 
v_val_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_val_464_);
lean_dec_ref_known(v___x_463_, 1);
lean_inc_ref(v_fileMap_456_);
v___x_465_ = l_Lean_FileMap_toPosition(v_fileMap_456_, v_val_464_);
lean_dec(v_val_464_);
v_column_466_ = lean_ctor_get(v___x_465_, 1);
lean_inc(v_column_466_);
lean_dec_ref(v___x_465_);
v_column_467_ = lean_ctor_get(v_hoverFilePos_458_, 1);
v___x_468_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_456_, v_hoverPos_457_);
lean_dec_ref(v_fileMap_456_);
if (v___x_468_ == 0)
{
lean_dec(v_column_466_);
return v___x_468_;
}
else
{
uint8_t v_isCursorInTacticBlock_469_; 
v_isCursorInTacticBlock_469_ = lean_nat_dec_eq(v_column_467_, v_column_466_);
lean_dec(v_column_466_);
return v_isCursorInTacticBlock_469_;
}
}
else
{
lean_dec(v___x_463_);
lean_dec_ref(v_fileMap_456_);
return v___x_462_;
}
}
else
{
uint8_t v___x_470_; 
lean_dec(v___x_460_);
lean_dec_ref(v_fileMap_456_);
v___x_470_ = 0;
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation___boxed(lean_object* v_fileMap_471_, lean_object* v_hoverPos_472_, lean_object* v_hoverFilePos_473_, lean_object* v_stx_474_){
_start:
{
uint8_t v_res_475_; lean_object* v_r_476_; 
v_res_475_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(v_fileMap_471_, v_hoverPos_472_, v_hoverFilePos_473_, v_stx_474_);
lean_dec_ref(v_hoverFilePos_473_);
lean_dec(v_hoverPos_472_);
v_r_476_ = lean_box(v_res_475_);
return v_r_476_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(lean_object* v_hoverPos_478_, lean_object* v_as_479_, size_t v_i_480_, size_t v_stop_481_){
_start:
{
uint8_t v___x_486_; 
v___x_486_ = lean_usize_dec_eq(v_i_480_, v_stop_481_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_array_uget_borrowed(v_as_479_, v_i_480_);
v___x_488_ = l_Lean_Syntax_getTailPos_x3f(v___x_487_, v___x_486_);
if (lean_obj_tag(v___x_488_) == 1)
{
lean_object* v_val_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v_val_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_val_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___closed__0));
lean_inc(v___x_487_);
v___x_491_ = l_Lean_Syntax_isToken(v___x_490_, v___x_487_);
if (v___x_491_ == 0)
{
lean_dec(v_val_489_);
goto v___jp_482_;
}
else
{
uint8_t v___x_492_; 
v___x_492_ = lean_nat_dec_le(v_val_489_, v_hoverPos_478_);
if (v___x_492_ == 0)
{
lean_dec(v_val_489_);
goto v___jp_482_;
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_493_ = l_Lean_Syntax_getTrailingSize(v___x_487_);
v___x_494_ = lean_nat_add(v_val_489_, v___x_493_);
lean_dec(v___x_493_);
lean_dec(v_val_489_);
v___x_495_ = lean_nat_dec_le(v_hoverPos_478_, v___x_494_);
lean_dec(v___x_494_);
if (v___x_495_ == 0)
{
goto v___jp_482_;
}
else
{
return v___x_495_;
}
}
}
}
else
{
lean_dec(v___x_488_);
goto v___jp_482_;
}
}
else
{
uint8_t v___x_496_; 
v___x_496_ = 0;
return v___x_496_;
}
v___jp_482_:
{
size_t v___x_483_; size_t v___x_484_; 
v___x_483_ = ((size_t)1ULL);
v___x_484_ = lean_usize_add(v_i_480_, v___x_483_);
v_i_480_ = v___x_484_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0___boxed(lean_object* v_hoverPos_497_, lean_object* v_as_498_, lean_object* v_i_499_, lean_object* v_stop_500_){
_start:
{
size_t v_i_boxed_501_; size_t v_stop_boxed_502_; uint8_t v_res_503_; lean_object* v_r_504_; 
v_i_boxed_501_ = lean_unbox_usize(v_i_499_);
lean_dec(v_i_499_);
v_stop_boxed_502_ = lean_unbox_usize(v_stop_500_);
lean_dec(v_stop_500_);
v_res_503_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(v_hoverPos_497_, v_as_498_, v_i_boxed_501_, v_stop_boxed_502_);
lean_dec_ref(v_as_498_);
lean_dec(v_hoverPos_497_);
v_r_504_ = lean_box(v_res_503_);
return v_r_504_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(lean_object* v_fileMap_505_, lean_object* v_hoverPos_506_, lean_object* v_stx_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f(v_stx_507_);
if (lean_obj_tag(v___x_508_) == 1)
{
lean_object* v_val_509_; uint8_t v___x_510_; 
v_val_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_val_509_);
lean_dec_ref_known(v___x_508_, 1);
v___x_510_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(v_fileMap_505_, v_hoverPos_506_);
if (v___x_510_ == 0)
{
lean_dec(v_val_509_);
return v___x_510_;
}
else
{
lean_object* v_tactics_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_tactics_511_ = l_Lean_Syntax_getArgs(v_val_509_);
lean_dec(v_val_509_);
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = lean_array_get_size(v_tactics_511_);
v___x_514_ = lean_nat_dec_lt(v___x_512_, v___x_513_);
if (v___x_514_ == 0)
{
lean_dec_ref(v_tactics_511_);
return v___x_514_;
}
else
{
if (v___x_514_ == 0)
{
lean_dec_ref(v_tactics_511_);
return v___x_514_;
}
else
{
size_t v___x_515_; size_t v___x_516_; uint8_t v___x_517_; 
v___x_515_ = ((size_t)0ULL);
v___x_516_ = lean_usize_of_nat(v___x_513_);
v___x_517_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon_spec__0(v_hoverPos_506_, v_tactics_511_, v___x_515_, v___x_516_);
lean_dec_ref(v_tactics_511_);
return v___x_517_;
}
}
}
}
else
{
uint8_t v___x_518_; 
lean_dec(v___x_508_);
v___x_518_ = 0;
return v___x_518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon___boxed(lean_object* v_fileMap_519_, lean_object* v_hoverPos_520_, lean_object* v_stx_521_){
_start:
{
uint8_t v_res_522_; lean_object* v_r_523_; 
v_res_522_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(v_fileMap_519_, v_hoverPos_520_, v_stx_521_);
lean_dec(v_hoverPos_520_);
lean_dec_ref(v_fileMap_519_);
v_r_523_ = lean_box(v_res_522_);
return v_r_523_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(lean_object* v_fileMap_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_fst_526_; lean_object* v_snd_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_549_; 
v_fst_526_ = lean_ctor_get(v_a_525_, 0);
v_snd_527_ = lean_ctor_get(v_a_525_, 1);
v_isSharedCheck_549_ = !lean_is_exclusive(v_a_525_);
if (v_isSharedCheck_549_ == 0)
{
v___x_529_ = v_a_525_;
v_isShared_530_ = v_isSharedCheck_549_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_snd_527_);
lean_inc(v_fst_526_);
lean_dec(v_a_525_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_549_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_source_531_; uint8_t v___x_532_; 
v_source_531_ = lean_ctor_get(v_fileMap_524_, 0);
v___x_532_ = lean_string_utf8_at_end(v_source_531_, v_fst_526_);
if (v___x_532_ == 0)
{
uint32_t v___x_533_; uint32_t v___x_534_; uint8_t v___x_535_; 
v___x_533_ = lean_string_utf8_get(v_source_531_, v_fst_526_);
v___x_534_ = 32;
v___x_535_ = lean_uint32_dec_eq(v___x_533_, v___x_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_537_; 
if (v_isShared_530_ == 0)
{
v___x_537_ = v___x_529_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_fst_526_);
lean_ctor_set(v_reuseFailAlloc_538_, 1, v_snd_527_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_539_ = lean_string_utf8_next(v_source_531_, v_fst_526_);
lean_dec(v_fst_526_);
v___x_540_ = lean_unsigned_to_nat(1u);
v___x_541_ = lean_nat_add(v_snd_527_, v___x_540_);
lean_dec(v_snd_527_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 1, v___x_541_);
lean_ctor_set(v___x_529_, 0, v___x_539_);
v___x_543_ = v___x_529_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v___x_541_);
v___x_543_ = v_reuseFailAlloc_545_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
v_a_525_ = v___x_543_;
goto _start;
}
}
}
else
{
lean_object* v___x_547_; 
if (v_isShared_530_ == 0)
{
v___x_547_ = v___x_529_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_fst_526_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_snd_527_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg___boxed(lean_object* v_fileMap_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(v_fileMap_550_, v_a_551_);
lean_dec_ref(v_fileMap_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(lean_object* v_fileMap_553_, lean_object* v_pos_554_){
_start:
{
lean_object* v_n_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v_snd_558_; 
v_n_555_ = lean_unsigned_to_nat(0u);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v_pos_554_);
lean_ctor_set(v___x_556_, 1, v_n_555_);
v___x_557_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(v_fileMap_553_, v___x_556_);
v_snd_558_ = lean_ctor_get(v___x_557_, 1);
lean_inc(v_snd_558_);
lean_dec_ref(v___x_557_);
return v_snd_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces___boxed(lean_object* v_fileMap_559_, lean_object* v_pos_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(v_fileMap_559_, v_pos_560_);
lean_dec_ref(v_fileMap_559_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0(lean_object* v_fileMap_562_, lean_object* v_inst_563_, lean_object* v_a_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___redArg(v_fileMap_562_, v_a_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0___boxed(lean_object* v_fileMap_566_, lean_object* v_inst_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces_spec__0(v_fileMap_566_, v_inst_567_, v_a_568_);
lean_dec_ref(v_fileMap_566_);
return v_res_569_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(lean_object* v_fileMap_570_, lean_object* v_hoverPos_571_, lean_object* v_leadingTokenTailPos_x3f_572_){
_start:
{
if (lean_obj_tag(v_leadingTokenTailPos_x3f_572_) == 1)
{
lean_object* v_val_573_; lean_object* v_hoverFilePos_574_; lean_object* v_line_575_; lean_object* v_column_576_; lean_object* v_tokenTailFilePos_577_; lean_object* v_line_578_; uint8_t v___x_579_; 
v_val_573_ = lean_ctor_get(v_leadingTokenTailPos_x3f_572_, 0);
lean_inc_ref_n(v_fileMap_570_, 2);
v_hoverFilePos_574_ = l_Lean_FileMap_toPosition(v_fileMap_570_, v_hoverPos_571_);
v_line_575_ = lean_ctor_get(v_hoverFilePos_574_, 0);
lean_inc(v_line_575_);
v_column_576_ = lean_ctor_get(v_hoverFilePos_574_, 1);
lean_inc(v_column_576_);
lean_dec_ref(v_hoverFilePos_574_);
v_tokenTailFilePos_577_ = l_Lean_FileMap_toPosition(v_fileMap_570_, v_val_573_);
v_line_578_ = lean_ctor_get(v_tokenTailFilePos_577_, 0);
lean_inc(v_line_578_);
lean_dec_ref(v_tokenTailFilePos_577_);
v___x_579_ = lean_nat_dec_eq(v_line_575_, v_line_578_);
lean_dec(v_line_575_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v_expectedColumn_583_; uint8_t v___x_584_; 
v___x_580_ = l_Lean_FileMap_lineStart(v_fileMap_570_, v_line_578_);
lean_dec(v_line_578_);
v___x_581_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_countLeadingSpaces(v_fileMap_570_, v___x_580_);
lean_dec_ref(v_fileMap_570_);
v___x_582_ = lean_unsigned_to_nat(2u);
v_expectedColumn_583_ = lean_nat_add(v___x_581_, v___x_582_);
lean_dec(v___x_581_);
v___x_584_ = lean_nat_dec_eq(v_column_576_, v_expectedColumn_583_);
lean_dec(v_expectedColumn_583_);
lean_dec(v_column_576_);
return v___x_584_;
}
else
{
uint8_t v___x_585_; 
lean_dec(v_line_578_);
lean_dec(v_column_576_);
lean_dec_ref(v_fileMap_570_);
v___x_585_ = lean_nat_dec_le(v_val_573_, v_hoverPos_571_);
return v___x_585_;
}
}
else
{
uint8_t v___x_586_; 
lean_dec_ref(v_fileMap_570_);
v___x_586_ = 1;
return v___x_586_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation___boxed(lean_object* v_fileMap_587_, lean_object* v_hoverPos_588_, lean_object* v_leadingTokenTailPos_x3f_589_){
_start:
{
uint8_t v_res_590_; lean_object* v_r_591_; 
v_res_590_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(v_fileMap_587_, v_hoverPos_588_, v_leadingTokenTailPos_x3f_589_);
lean_dec(v_leadingTokenTailPos_x3f_589_);
lean_dec(v_hoverPos_588_);
v_r_591_ = lean_box(v_res_590_);
return v_r_591_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(lean_object* v_a_592_){
_start:
{
switch(lean_obj_tag(v_a_592_))
{
case 0:
{
uint8_t v___x_593_; 
v___x_593_ = 1;
return v___x_593_;
}
case 1:
{
lean_object* v_args_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
v_args_594_ = lean_ctor_get(v_a_592_, 2);
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = lean_array_get_size(v_args_594_);
v___x_597_ = lean_nat_dec_lt(v___x_595_, v___x_596_);
if (v___x_597_ == 0)
{
uint8_t v___x_598_; 
v___x_598_ = 1;
return v___x_598_;
}
else
{
if (v___x_597_ == 0)
{
return v___x_597_;
}
else
{
size_t v___x_599_; size_t v___x_600_; uint8_t v___x_601_; 
v___x_599_ = ((size_t)0ULL);
v___x_600_ = lean_usize_of_nat(v___x_596_);
v___x_601_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(v_args_594_, v___x_599_, v___x_600_);
if (v___x_601_ == 0)
{
return v___x_597_;
}
else
{
uint8_t v___x_602_; 
v___x_602_ = 0;
return v___x_602_;
}
}
}
}
default: 
{
uint8_t v___x_603_; 
v___x_603_ = 0;
return v___x_603_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(lean_object* v_as_604_, size_t v_i_605_, size_t v_stop_606_){
_start:
{
uint8_t v___x_607_; 
v___x_607_ = lean_usize_dec_eq(v_i_605_, v_stop_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_608_ = lean_array_uget_borrowed(v_as_604_, v_i_605_);
v___x_609_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v___x_608_);
if (v___x_609_ == 0)
{
uint8_t v___x_610_; 
v___x_610_ = 1;
return v___x_610_;
}
else
{
size_t v___x_611_; size_t v___x_612_; 
v___x_611_ = ((size_t)1ULL);
v___x_612_ = lean_usize_add(v_i_605_, v___x_611_);
v_i_605_ = v___x_612_;
goto _start;
}
}
else
{
uint8_t v___x_614_; 
v___x_614_ = 0;
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0___boxed(lean_object* v_as_615_, lean_object* v_i_616_, lean_object* v_stop_617_){
_start:
{
size_t v_i_boxed_618_; size_t v_stop_boxed_619_; uint8_t v_res_620_; lean_object* v_r_621_; 
v_i_boxed_618_ = lean_unbox_usize(v_i_616_);
lean_dec(v_i_616_);
v_stop_boxed_619_ = lean_unbox_usize(v_stop_617_);
lean_dec(v_stop_617_);
v_res_620_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty_spec__0(v_as_615_, v_i_boxed_618_, v_stop_boxed_619_);
lean_dec_ref(v_as_615_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty___boxed(lean_object* v_a_622_){
_start:
{
uint8_t v_res_623_; lean_object* v_r_624_; 
v_res_623_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v_a_622_);
lean_dec(v_a_622_);
v_r_624_ = lean_box(v_res_623_);
return v_r_624_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(lean_object* v_stx_631_){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
lean_inc(v_stx_631_);
v___x_644_ = l_Lean_Syntax_getKind(v_stx_631_);
v___x_645_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___closed__1));
v___x_646_ = lean_name_eq(v___x_644_, v___x_645_);
lean_dec(v___x_644_);
if (v___x_646_ == 0)
{
goto v___jp_639_;
}
else
{
uint8_t v___x_647_; 
v___x_647_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v_stx_631_);
if (v___x_647_ == 0)
{
goto v___jp_639_;
}
else
{
lean_dec(v_stx_631_);
return v___x_647_;
}
}
v___jp_632_:
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
lean_inc(v_stx_631_);
v___x_633_ = l_Lean_Syntax_getKind(v_stx_631_);
v___x_634_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4));
v___x_635_ = lean_name_eq(v___x_633_, v___x_634_);
lean_dec(v___x_633_);
if (v___x_635_ == 0)
{
lean_dec(v_stx_631_);
return v___x_635_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_636_ = lean_unsigned_to_nat(1u);
v___x_637_ = l_Lean_Syntax_getArg(v_stx_631_, v___x_636_);
lean_dec(v_stx_631_);
v___x_638_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v___x_637_);
lean_dec(v___x_637_);
return v___x_638_;
}
}
v___jp_639_:
{
lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
lean_inc(v_stx_631_);
v___x_640_ = l_Lean_Syntax_getKind(v_stx_631_);
v___x_641_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__2));
v___x_642_ = lean_name_eq(v___x_640_, v___x_641_);
lean_dec(v___x_640_);
if (v___x_642_ == 0)
{
goto v___jp_632_;
}
else
{
uint8_t v___x_643_; 
v___x_643_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmpty(v_stx_631_);
if (v___x_643_ == 0)
{
goto v___jp_632_;
}
else
{
lean_dec(v_stx_631_);
return v___x_643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock___boxed(lean_object* v_stx_648_){
_start:
{
uint8_t v_res_649_; lean_object* v_r_650_; 
v_res_649_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(v_stx_648_);
v_r_650_ = lean_box(v_res_649_);
return v_r_650_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(lean_object* v_fileMap_651_, lean_object* v_hoverPos_652_, lean_object* v_stx_653_, lean_object* v_leadingTokenTailPos_x3f_654_){
_start:
{
uint8_t v___x_655_; 
v___x_655_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_651_, v_hoverPos_652_);
if (v___x_655_ == 0)
{
lean_dec(v_stx_653_);
lean_dec_ref(v_fileMap_651_);
return v___x_655_;
}
else
{
uint8_t v___x_656_; 
lean_inc(v_stx_653_);
v___x_656_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isEmptyTacticBlock(v_stx_653_);
if (v___x_656_ == 0)
{
lean_dec(v_stx_653_);
lean_dec_ref(v_fileMap_651_);
return v___x_656_;
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
lean_inc(v_stx_653_);
v___x_657_ = l_Lean_Syntax_getKind(v_stx_653_);
v___x_658_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_getTacticsNode_x3f___closed__4));
v___x_659_ = lean_name_eq(v___x_657_, v___x_658_);
lean_dec(v___x_657_);
if (v___x_659_ == 0)
{
uint8_t v___x_660_; 
lean_dec(v_stx_653_);
v___x_660_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isAtExpectedTacticIndentation(v_fileMap_651_, v_hoverPos_652_, v_leadingTokenTailPos_x3f_654_);
return v___x_660_;
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; lean_object* v___x_664_; 
lean_dec_ref(v_fileMap_651_);
v___x_661_ = lean_unsigned_to_nat(0u);
v___x_662_ = l_Lean_Syntax_getArg(v_stx_653_, v___x_661_);
v___x_663_ = 0;
v___x_664_ = l_Lean_Syntax_getTailPos_x3f(v___x_662_, v___x_663_);
lean_dec(v___x_662_);
if (lean_obj_tag(v___x_664_) == 1)
{
lean_object* v_val_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_val_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_val_665_);
lean_dec_ref_known(v___x_664_, 1);
v___x_666_ = lean_unsigned_to_nat(2u);
v___x_667_ = l_Lean_Syntax_getArg(v_stx_653_, v___x_666_);
lean_dec(v_stx_653_);
v___x_668_ = l_Lean_Syntax_getPos_x3f(v___x_667_, v___x_663_);
lean_dec(v___x_667_);
if (lean_obj_tag(v___x_668_) == 1)
{
lean_object* v_val_669_; uint8_t v___x_670_; 
v_val_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_val_669_);
lean_dec_ref_known(v___x_668_, 1);
v___x_670_ = lean_nat_dec_le(v_val_665_, v_hoverPos_652_);
lean_dec(v_val_665_);
if (v___x_670_ == 0)
{
lean_dec(v_val_669_);
return v___x_670_;
}
else
{
uint8_t v___x_671_; 
v___x_671_ = lean_nat_dec_le(v_hoverPos_652_, v_val_669_);
lean_dec(v_val_669_);
return v___x_671_;
}
}
else
{
lean_dec(v___x_668_);
lean_dec(v_val_665_);
return v___x_663_;
}
}
else
{
lean_dec(v___x_664_);
lean_dec(v_stx_653_);
return v___x_663_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock___boxed(lean_object* v_fileMap_672_, lean_object* v_hoverPos_673_, lean_object* v_stx_674_, lean_object* v_leadingTokenTailPos_x3f_675_){
_start:
{
uint8_t v_res_676_; lean_object* v_r_677_; 
v_res_676_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_672_, v_hoverPos_673_, v_stx_674_, v_leadingTokenTailPos_x3f_675_);
lean_dec(v_leadingTokenTailPos_x3f_675_);
lean_dec(v_hoverPos_673_);
v_r_677_ = lean_box(v_res_676_);
return v_r_677_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(lean_object* v_fileMap_678_, lean_object* v_hoverPos_679_, lean_object* v_hoverFilePos_680_, lean_object* v_stx_681_, lean_object* v_leadingWs_682_, lean_object* v_leadingTokenTailPos_x3f_683_){
_start:
{
uint8_t v___x_684_; lean_object* v___x_685_; 
v___x_684_ = 0;
v___x_685_ = l_Lean_Syntax_getPos_x3f(v_stx_681_, v___x_684_);
if (lean_obj_tag(v___x_685_) == 1)
{
lean_object* v_val_686_; lean_object* v___x_687_; 
v_val_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_val_686_);
lean_dec_ref_known(v___x_685_, 1);
v___x_687_ = l_Lean_Syntax_getTailPos_x3f(v_stx_681_, v___x_684_);
if (lean_obj_tag(v___x_687_) == 1)
{
lean_object* v_val_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_val_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_val_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = lean_nat_sub(v_val_686_, v_leadingWs_682_);
lean_dec(v_val_686_);
v___x_690_ = lean_nat_dec_le(v___x_689_, v_hoverPos_679_);
lean_dec(v___x_689_);
if (v___x_690_ == 0)
{
lean_dec(v_val_688_);
lean_dec(v_leadingTokenTailPos_x3f_683_);
lean_dec(v_leadingWs_682_);
lean_dec(v_stx_681_);
lean_dec_ref(v_fileMap_678_);
return v___x_690_;
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = l_Lean_Syntax_getTrailingSize(v_stx_681_);
v___x_692_ = lean_nat_add(v_val_688_, v___x_691_);
lean_dec(v___x_691_);
lean_dec(v_val_688_);
v___x_693_ = lean_nat_dec_le(v_hoverPos_679_, v___x_692_);
lean_dec(v___x_692_);
if (v___x_693_ == 0)
{
lean_dec(v_leadingTokenTailPos_x3f_683_);
lean_dec(v_leadingWs_682_);
lean_dec(v_stx_681_);
lean_dec_ref(v_fileMap_678_);
return v___x_693_;
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; size_t v_sz_698_; size_t v___x_699_; lean_object* v___x_700_; lean_object* v_fst_701_; 
v___x_694_ = l_Lean_Syntax_getArgs(v_stx_681_);
v___x_695_ = lean_box(0);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v_leadingWs_682_);
lean_ctor_set(v___x_696_, 1, v_leadingTokenTailPos_x3f_683_);
v___x_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v_sz_698_ = lean_array_size(v___x_694_);
v___x_699_ = ((size_t)0ULL);
lean_inc_ref(v_fileMap_678_);
v___x_700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(v_fileMap_678_, v_hoverPos_679_, v_hoverFilePos_680_, v___x_694_, v_sz_698_, v___x_699_, v___x_697_);
lean_dec_ref(v___x_694_);
v_fst_701_ = lean_ctor_get(v___x_700_, 0);
if (lean_obj_tag(v_fst_701_) == 0)
{
lean_object* v_snd_702_; lean_object* v_snd_703_; uint8_t v___x_704_; 
v_snd_702_ = lean_ctor_get(v___x_700_, 1);
lean_inc(v_snd_702_);
lean_dec_ref(v___x_700_);
v_snd_703_ = lean_ctor_get(v_snd_702_, 1);
lean_inc(v_snd_703_);
lean_dec(v_snd_702_);
lean_inc(v_stx_681_);
lean_inc_ref(v_fileMap_678_);
v___x_704_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_678_, v_hoverPos_679_, v_stx_681_, v_snd_703_);
lean_dec(v_snd_703_);
if (v___x_704_ == 0)
{
uint8_t v___x_705_; 
lean_inc(v_stx_681_);
v___x_705_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionAfterSemicolon(v_fileMap_678_, v_hoverPos_679_, v_stx_681_);
if (v___x_705_ == 0)
{
uint8_t v___x_706_; 
v___x_706_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionOnTacticBlockIndentation(v_fileMap_678_, v_hoverPos_679_, v_hoverFilePos_680_, v_stx_681_);
return v___x_706_;
}
else
{
lean_dec(v_stx_681_);
lean_dec_ref(v_fileMap_678_);
return v___x_705_;
}
}
else
{
lean_dec(v_stx_681_);
lean_dec_ref(v_fileMap_678_);
return v___x_704_;
}
}
else
{
lean_object* v_val_707_; uint8_t v___x_708_; 
lean_inc_ref(v_fst_701_);
lean_dec_ref(v___x_700_);
lean_dec(v_stx_681_);
lean_dec_ref(v_fileMap_678_);
v_val_707_ = lean_ctor_get(v_fst_701_, 0);
lean_inc(v_val_707_);
lean_dec_ref_known(v_fst_701_, 1);
v___x_708_ = lean_unbox(v_val_707_);
lean_dec(v_val_707_);
return v___x_708_;
}
}
}
}
else
{
uint8_t v___x_709_; 
lean_dec(v___x_687_);
lean_dec(v_val_686_);
lean_dec(v_leadingWs_682_);
v___x_709_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_678_, v_hoverPos_679_, v_stx_681_, v_leadingTokenTailPos_x3f_683_);
lean_dec(v_leadingTokenTailPos_x3f_683_);
return v___x_709_;
}
}
else
{
uint8_t v___x_710_; 
lean_dec(v___x_685_);
lean_dec(v_leadingWs_682_);
v___x_710_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_isCompletionInEmptyTacticBlock(v_fileMap_678_, v_hoverPos_679_, v_stx_681_, v_leadingTokenTailPos_x3f_683_);
lean_dec(v_leadingTokenTailPos_x3f_683_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(lean_object* v_fileMap_711_, lean_object* v_hoverPos_712_, lean_object* v_hoverFilePos_713_, lean_object* v_as_714_, size_t v_sz_715_, size_t v_i_716_, lean_object* v_b_717_){
_start:
{
uint8_t v___x_718_; 
v___x_718_ = lean_usize_dec_lt(v_i_716_, v_sz_715_);
if (v___x_718_ == 0)
{
lean_dec_ref(v_fileMap_711_);
return v_b_717_;
}
else
{
lean_object* v_snd_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_753_; 
v_snd_719_ = lean_ctor_get(v_b_717_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v_b_717_);
if (v_isSharedCheck_753_ == 0)
{
lean_object* v_unused_754_; 
v_unused_754_ = lean_ctor_get(v_b_717_, 0);
lean_dec(v_unused_754_);
v___x_721_ = v_b_717_;
v_isShared_722_ = v_isSharedCheck_753_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_snd_719_);
lean_dec(v_b_717_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_753_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_752_; 
v_fst_723_ = lean_ctor_get(v_snd_719_, 0);
v_snd_724_ = lean_ctor_get(v_snd_719_, 1);
v_isSharedCheck_752_ = !lean_is_exclusive(v_snd_719_);
if (v_isSharedCheck_752_ == 0)
{
v___x_726_ = v_snd_719_;
v_isShared_727_ = v_isSharedCheck_752_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_snd_724_);
lean_inc(v_fst_723_);
lean_dec(v_snd_719_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_752_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v_a_728_; uint8_t v___x_729_; 
v_a_728_ = lean_array_uget_borrowed(v_as_714_, v_i_716_);
lean_inc(v_snd_724_);
lean_inc(v_fst_723_);
lean_inc(v_a_728_);
lean_inc_ref(v_fileMap_711_);
v___x_729_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(v_fileMap_711_, v_hoverPos_712_, v_hoverFilePos_713_, v_a_728_, v_fst_723_, v_snd_724_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___y_733_; lean_object* v___x_743_; 
lean_dec(v_fst_723_);
v___x_730_ = lean_box(0);
v___x_731_ = l_Lean_Syntax_getTrailingSize(v_a_728_);
v___x_743_ = l_Lean_Syntax_getTailPos_x3f(v_a_728_, v___x_729_);
if (lean_obj_tag(v___x_743_) == 0)
{
v___y_733_ = v_snd_724_;
goto v___jp_732_;
}
else
{
lean_dec(v_snd_724_);
v___y_733_ = v___x_743_;
goto v___jp_732_;
}
v___jp_732_:
{
lean_object* v___x_735_; 
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v___y_733_);
lean_ctor_set(v___x_726_, 0, v___x_731_);
v___x_735_ = v___x_726_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v___y_733_);
v___x_735_ = v_reuseFailAlloc_742_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_737_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 1, v___x_735_);
lean_ctor_set(v___x_721_, 0, v___x_730_);
v___x_737_ = v___x_721_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_735_);
v___x_737_ = v_reuseFailAlloc_741_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
size_t v___x_738_; size_t v___x_739_; 
v___x_738_ = ((size_t)1ULL);
v___x_739_ = lean_usize_add(v_i_716_, v___x_738_);
v_i_716_ = v___x_739_;
v_b_717_ = v___x_737_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
lean_dec_ref(v_fileMap_711_);
v___x_744_ = lean_box(v___x_729_);
v___x_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
if (v_isShared_727_ == 0)
{
v___x_747_ = v___x_726_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_fst_723_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v_snd_724_);
v___x_747_ = v_reuseFailAlloc_751_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_749_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 1, v___x_747_);
lean_ctor_set(v___x_721_, 0, v___x_745_);
v___x_749_ = v___x_721_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0___boxed(lean_object* v_fileMap_755_, lean_object* v_hoverPos_756_, lean_object* v_hoverFilePos_757_, lean_object* v_as_758_, lean_object* v_sz_759_, lean_object* v_i_760_, lean_object* v_b_761_){
_start:
{
size_t v_sz_boxed_762_; size_t v_i_boxed_763_; lean_object* v_res_764_; 
v_sz_boxed_762_ = lean_unbox_usize(v_sz_759_);
lean_dec(v_sz_759_);
v_i_boxed_763_ = lean_unbox_usize(v_i_760_);
lean_dec(v_i_760_);
v_res_764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go_spec__0(v_fileMap_755_, v_hoverPos_756_, v_hoverFilePos_757_, v_as_758_, v_sz_boxed_762_, v_i_boxed_763_, v_b_761_);
lean_dec_ref(v_as_758_);
lean_dec_ref(v_hoverFilePos_757_);
lean_dec(v_hoverPos_756_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go___boxed(lean_object* v_fileMap_765_, lean_object* v_hoverPos_766_, lean_object* v_hoverFilePos_767_, lean_object* v_stx_768_, lean_object* v_leadingWs_769_, lean_object* v_leadingTokenTailPos_x3f_770_){
_start:
{
uint8_t v_res_771_; lean_object* v_r_772_; 
v_res_771_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(v_fileMap_765_, v_hoverPos_766_, v_hoverFilePos_767_, v_stx_768_, v_leadingWs_769_, v_leadingTokenTailPos_x3f_770_);
lean_dec_ref(v_hoverFilePos_767_);
lean_dec(v_hoverPos_766_);
v_r_772_ = lean_box(v_res_771_);
return v_r_772_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(lean_object* v_fileMap_773_, lean_object* v_hoverPos_774_, lean_object* v_cmdStx_775_){
_start:
{
lean_object* v_hoverFilePos_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; 
lean_inc_ref(v_fileMap_773_);
v_hoverFilePos_776_ = l_Lean_FileMap_toPosition(v_fileMap_773_, v_hoverPos_774_);
v___x_777_ = lean_unsigned_to_nat(0u);
v___x_778_ = lean_box(0);
v___x_779_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion_go(v_fileMap_773_, v_hoverPos_774_, v_hoverFilePos_776_, v_cmdStx_775_, v___x_777_, v___x_778_);
lean_dec_ref(v_hoverFilePos_776_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion___boxed(lean_object* v_fileMap_780_, lean_object* v_hoverPos_781_, lean_object* v_cmdStx_782_){
_start:
{
uint8_t v_res_783_; lean_object* v_r_784_; 
v_res_783_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(v_fileMap_780_, v_hoverPos_781_, v_cmdStx_782_);
lean_dec(v_hoverPos_781_);
v_r_784_ = lean_box(v_res_783_);
return v_r_784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(lean_object* v_as_790_, size_t v_sz_791_, size_t v_i_792_, lean_object* v_b_793_){
_start:
{
uint8_t v___x_794_; 
v___x_794_ = lean_usize_dec_lt(v_i_792_, v_sz_791_);
if (v___x_794_ == 0)
{
lean_inc_ref(v_b_793_);
return v_b_793_;
}
else
{
lean_object* v___x_795_; lean_object* v_a_796_; lean_object* v___x_797_; 
v___x_795_ = lean_box(0);
v_a_796_ = lean_array_uget_borrowed(v_as_790_, v_i_792_);
v___x_797_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(v_a_796_);
if (lean_obj_tag(v___x_797_) == 1)
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
lean_ctor_set(v___x_799_, 1, v___x_795_);
return v___x_799_;
}
else
{
lean_object* v___x_800_; size_t v___x_801_; size_t v___x_802_; 
lean_dec(v___x_797_);
v___x_800_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v___x_801_ = ((size_t)1ULL);
v___x_802_ = lean_usize_add(v_i_792_, v___x_801_);
v_i_792_ = v___x_802_;
v_b_793_ = v___x_800_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(lean_object* v_as_804_, size_t v_sz_805_, size_t v_i_806_, lean_object* v_b_807_){
_start:
{
uint8_t v___x_808_; 
v___x_808_ = lean_usize_dec_lt(v_i_806_, v_sz_805_);
if (v___x_808_ == 0)
{
lean_inc_ref(v_b_807_);
return v_b_807_;
}
else
{
lean_object* v___x_809_; lean_object* v_a_810_; lean_object* v___x_811_; 
v___x_809_ = lean_box(0);
v_a_810_ = lean_array_uget_borrowed(v_as_804_, v_i_806_);
lean_inc(v_a_810_);
v___x_811_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(v_a_810_);
if (lean_obj_tag(v___x_811_) == 1)
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v___x_809_);
return v___x_813_;
}
else
{
lean_object* v___x_814_; size_t v___x_815_; size_t v___x_816_; 
lean_dec(v___x_811_);
v___x_814_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v___x_815_ = ((size_t)1ULL);
v___x_816_ = lean_usize_add(v_i_806_, v___x_815_);
v_i_806_ = v___x_816_;
v_b_807_ = v___x_814_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(lean_object* v_x_818_){
_start:
{
if (lean_obj_tag(v_x_818_) == 0)
{
lean_object* v_cs_819_; lean_object* v___x_820_; lean_object* v___x_821_; size_t v_sz_822_; size_t v___x_823_; lean_object* v___x_824_; lean_object* v_fst_825_; 
v_cs_819_ = lean_ctor_get(v_x_818_, 0);
v___x_820_ = lean_box(0);
v___x_821_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v_sz_822_ = lean_array_size(v_cs_819_);
v___x_823_ = ((size_t)0ULL);
v___x_824_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(v_cs_819_, v_sz_822_, v___x_823_, v___x_821_);
v_fst_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_fst_825_);
lean_dec_ref(v___x_824_);
if (lean_obj_tag(v_fst_825_) == 0)
{
return v___x_820_;
}
else
{
lean_object* v_val_826_; 
v_val_826_ = lean_ctor_get(v_fst_825_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v_fst_825_, 1);
return v_val_826_;
}
}
else
{
lean_object* v_vs_827_; lean_object* v___x_828_; lean_object* v___x_829_; size_t v_sz_830_; size_t v___x_831_; lean_object* v___x_832_; lean_object* v_fst_833_; 
v_vs_827_ = lean_ctor_get(v_x_818_, 0);
v___x_828_ = lean_box(0);
v___x_829_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v_sz_830_ = lean_array_size(v_vs_827_);
v___x_831_ = ((size_t)0ULL);
v___x_832_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(v_vs_827_, v_sz_830_, v___x_831_, v___x_829_);
v_fst_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_fst_833_);
lean_dec_ref(v___x_832_);
if (lean_obj_tag(v_fst_833_) == 0)
{
return v___x_828_;
}
else
{
lean_object* v_val_834_; 
v_val_834_ = lean_ctor_get(v_fst_833_, 0);
lean_inc(v_val_834_);
lean_dec_ref_known(v_fst_833_, 1);
return v_val_834_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(lean_object* v_t_835_){
_start:
{
lean_object* v_root_836_; lean_object* v_tail_837_; lean_object* v___x_838_; 
v_root_836_ = lean_ctor_get(v_t_835_, 0);
v_tail_837_ = lean_ctor_get(v_t_835_, 1);
v___x_838_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(v_root_836_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v___x_839_; size_t v_sz_840_; size_t v___x_841_; lean_object* v___x_842_; lean_object* v_fst_843_; 
v___x_839_ = ((lean_object*)(l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___closed__0));
v_sz_840_ = lean_array_size(v_tail_837_);
v___x_841_ = ((size_t)0ULL);
v___x_842_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(v_tail_837_, v_sz_840_, v___x_841_, v___x_839_);
v_fst_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_fst_843_);
lean_dec_ref(v___x_842_);
if (lean_obj_tag(v_fst_843_) == 0)
{
return v___x_838_;
}
else
{
lean_object* v_val_844_; 
v_val_844_ = lean_ctor_get(v_fst_843_, 0);
lean_inc(v_val_844_);
lean_dec_ref_known(v_fst_843_, 1);
return v_val_844_;
}
}
else
{
return v___x_838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(lean_object* v_i_845_){
_start:
{
switch(lean_obj_tag(v_i_845_))
{
case 0:
{
lean_object* v_i_846_; 
v_i_846_ = lean_ctor_get(v_i_845_, 0);
lean_inc_ref(v_i_846_);
if (lean_obj_tag(v_i_846_) == 0)
{
lean_object* v_info_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_857_; 
lean_dec_ref_known(v_i_845_, 2);
v_info_847_ = lean_ctor_get(v_i_846_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v_i_846_);
if (v_isSharedCheck_857_ == 0)
{
v___x_849_ = v_i_846_;
v_isShared_850_ = v_isSharedCheck_857_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_info_847_);
lean_dec(v_i_846_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_857_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_851_ = lean_box(0);
v___x_852_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go___closed__0));
v___x_853_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_853_, 0, v_info_847_);
lean_ctor_set(v___x_853_, 1, v___x_851_);
lean_ctor_set(v___x_853_, 2, v___x_852_);
if (v_isShared_850_ == 0)
{
lean_ctor_set_tag(v___x_849_, 1);
lean_ctor_set(v___x_849_, 0, v___x_853_);
v___x_855_ = v___x_849_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
else
{
lean_object* v_t_858_; 
lean_dec_ref(v_i_846_);
v_t_858_ = lean_ctor_get(v_i_845_, 1);
lean_inc_ref(v_t_858_);
lean_dec_ref_known(v_i_845_, 2);
v_i_845_ = v_t_858_;
goto _start;
}
}
case 1:
{
lean_object* v_children_860_; lean_object* v___x_861_; 
v_children_860_ = lean_ctor_get(v_i_845_, 1);
lean_inc_ref(v_children_860_);
lean_dec_ref_known(v_i_845_, 2);
v___x_861_ = l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(v_children_860_);
lean_dec_ref(v_children_860_);
return v___x_861_;
}
default: 
{
lean_object* v___x_862_; 
lean_dec_ref_known(v_i_845_, 1);
v___x_862_ = lean_box(0);
return v___x_862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0___boxed(lean_object* v_t_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0(v_t_863_);
lean_dec_ref(v_t_863_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1___boxed(lean_object* v_as_865_, lean_object* v_sz_866_, lean_object* v_i_867_, lean_object* v_b_868_){
_start:
{
size_t v_sz_boxed_869_; size_t v_i_boxed_870_; lean_object* v_res_871_; 
v_sz_boxed_869_ = lean_unbox_usize(v_sz_866_);
lean_dec(v_sz_866_);
v_i_boxed_870_ = lean_unbox_usize(v_i_867_);
lean_dec(v_i_867_);
v_res_871_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__1(v_as_865_, v_sz_boxed_869_, v_i_boxed_870_, v_b_868_);
lean_dec_ref(v_b_868_);
lean_dec_ref(v_as_865_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1___boxed(lean_object* v_as_872_, lean_object* v_sz_873_, lean_object* v_i_874_, lean_object* v_b_875_){
_start:
{
size_t v_sz_boxed_876_; size_t v_i_boxed_877_; lean_object* v_res_878_; 
v_sz_boxed_876_ = lean_unbox_usize(v_sz_873_);
lean_dec(v_sz_873_);
v_i_boxed_877_ = lean_unbox_usize(v_i_874_);
lean_dec(v_i_874_);
v_res_878_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0_spec__1(v_as_872_, v_sz_boxed_876_, v_i_boxed_877_, v_b_875_);
lean_dec_ref(v_b_875_);
lean_dec_ref(v_as_872_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0___boxed(lean_object* v_x_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go_spec__0_spec__0(v_x_879_);
lean_dec_ref(v_x_879_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f(lean_object* v_i_881_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(v_i_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(lean_object* v_fileMap_885_, lean_object* v_hoverPos_886_, lean_object* v_cmdStx_887_, lean_object* v_infoTree_888_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findOutermostContextInfo_x3f_go(v_infoTree_888_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v___x_890_; 
lean_dec(v_cmdStx_887_);
lean_dec_ref(v_fileMap_885_);
v___x_890_ = lean_box(0);
return v___x_890_;
}
else
{
lean_object* v_val_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_903_; 
v_val_891_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_903_ == 0)
{
v___x_893_ = v___x_889_;
v_isShared_894_ = v_isSharedCheck_903_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_val_891_);
lean_dec(v___x_889_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_903_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
uint8_t v___x_895_; 
v___x_895_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticTacticCompletion(v_fileMap_885_, v_hoverPos_886_, v_cmdStx_887_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
lean_del_object(v___x_893_);
lean_dec(v_val_891_);
v___x_896_ = lean_box(0);
return v___x_896_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_897_ = lean_box(0);
v___x_898_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___closed__0));
v___x_899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set(v___x_899_, 1, v_val_891_);
lean_ctor_set(v___x_899_, 2, v___x_898_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_899_);
v___x_901_ = v___x_893_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f___boxed(lean_object* v_fileMap_904_, lean_object* v_hoverPos_905_, lean_object* v_cmdStx_906_, lean_object* v_infoTree_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(v_fileMap_904_, v_hoverPos_905_, v_cmdStx_906_, v_infoTree_907_);
lean_dec(v_hoverPos_905_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt_spec__0(lean_object* v_msg_909_){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = l_Lean_instInhabitedExpr;
v___x_911_ = lean_panic_fn_borrowed(v___x_910_, v_msg_909_);
return v___x_911_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0(lean_object* v_hoverPos_912_, lean_object* v_i_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_Elab_Info_pos_x3f(v_i_913_);
if (lean_obj_tag(v___x_914_) == 1)
{
lean_object* v_val_915_; lean_object* v___x_916_; 
v_val_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_val_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = l_Lean_Elab_Info_tailPos_x3f(v_i_913_);
if (lean_obj_tag(v___x_916_) == 1)
{
if (lean_obj_tag(v_i_913_) == 1)
{
lean_object* v_i_917_; lean_object* v_expectedType_x3f_918_; 
v_i_917_ = lean_ctor_get(v_i_913_, 0);
v_expectedType_x3f_918_ = lean_ctor_get(v_i_917_, 2);
if (lean_obj_tag(v_expectedType_x3f_918_) == 0)
{
uint8_t v___x_919_; 
lean_dec_ref_known(v___x_916_, 1);
lean_dec(v_val_915_);
v___x_919_ = 0;
return v___x_919_;
}
else
{
lean_object* v_val_920_; uint8_t v___x_921_; 
v_val_920_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_val_920_);
lean_dec_ref_known(v___x_916_, 1);
v___x_921_ = lean_nat_dec_le(v_val_915_, v_hoverPos_912_);
lean_dec(v_val_915_);
if (v___x_921_ == 0)
{
lean_dec(v_val_920_);
return v___x_921_;
}
else
{
uint8_t v___x_922_; 
v___x_922_ = lean_nat_dec_le(v_hoverPos_912_, v_val_920_);
lean_dec(v_val_920_);
return v___x_922_;
}
}
}
else
{
uint8_t v___x_923_; 
lean_dec_ref_known(v___x_916_, 1);
lean_dec(v_val_915_);
v___x_923_ = 0;
return v___x_923_;
}
}
else
{
uint8_t v___x_924_; 
lean_dec(v___x_916_);
lean_dec(v_val_915_);
v___x_924_ = 0;
return v___x_924_;
}
}
else
{
uint8_t v___x_925_; 
lean_dec(v___x_914_);
v___x_925_ = 0;
return v___x_925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0___boxed(lean_object* v_hoverPos_926_, lean_object* v_i_927_){
_start:
{
uint8_t v_res_928_; lean_object* v_r_929_; 
v_res_928_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0(v_hoverPos_926_, v_i_927_);
lean_dec_ref(v_i_927_);
lean_dec(v_hoverPos_926_);
v_r_929_ = lean_box(v_res_928_);
return v_r_929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt(lean_object* v_infoTree_930_, lean_object* v_hoverPos_931_){
_start:
{
lean_object* v___f_932_; lean_object* v___x_933_; 
v___f_932_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt___lam__0___boxed), 2, 1);
lean_closure_set(v___f_932_, 0, v_hoverPos_931_);
v___x_933_ = l_Lean_Elab_InfoTree_smallestInfo_x3f(v___f_932_, v_infoTree_930_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v___x_934_; 
v___x_934_ = lean_box(0);
return v___x_934_;
}
else
{
lean_object* v_val_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_959_; 
v_val_935_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_959_ == 0)
{
v___x_937_ = v___x_933_;
v_isShared_938_ = v_isSharedCheck_959_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_val_935_);
lean_dec(v___x_933_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_959_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v_fst_939_; lean_object* v_snd_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_958_; 
v_fst_939_ = lean_ctor_get(v_val_935_, 0);
v_snd_940_ = lean_ctor_get(v_val_935_, 1);
v_isSharedCheck_958_ = !lean_is_exclusive(v_val_935_);
if (v_isSharedCheck_958_ == 0)
{
v___x_942_ = v_val_935_;
v_isShared_943_ = v_isSharedCheck_958_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_snd_940_);
lean_inc(v_fst_939_);
lean_dec(v_val_935_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_958_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___y_945_; 
if (lean_obj_tag(v_snd_940_) == 1)
{
lean_object* v_i_952_; lean_object* v_expectedType_x3f_953_; 
v_i_952_ = lean_ctor_get(v_snd_940_, 0);
lean_inc_ref(v_i_952_);
lean_dec_ref_known(v_snd_940_, 1);
v_expectedType_x3f_953_ = lean_ctor_get(v_i_952_, 2);
lean_inc(v_expectedType_x3f_953_);
lean_dec_ref(v_i_952_);
if (lean_obj_tag(v_expectedType_x3f_953_) == 0)
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_obj_once(&l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4, &l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4_once, _init_l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f___closed__4);
v___x_955_ = l_panic___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt_spec__0(v___x_954_);
v___y_945_ = v___x_955_;
goto v___jp_944_;
}
else
{
lean_object* v_val_956_; 
v_val_956_ = lean_ctor_get(v_expectedType_x3f_953_, 0);
lean_inc(v_val_956_);
lean_dec_ref_known(v_expectedType_x3f_953_, 1);
v___y_945_ = v_val_956_;
goto v___jp_944_;
}
}
else
{
lean_object* v___x_957_; 
lean_del_object(v___x_942_);
lean_dec(v_snd_940_);
lean_dec(v_fst_939_);
lean_del_object(v___x_937_);
v___x_957_ = lean_box(0);
return v___x_957_;
}
v___jp_944_:
{
lean_object* v___x_947_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v___y_945_);
v___x_947_ = v___x_942_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_fst_939_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___y_945_);
v___x_947_ = v_reuseFailAlloc_951_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
lean_object* v___x_949_; 
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_947_);
v___x_949_ = v___x_937_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_947_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(lean_object* v_f_960_, lean_object* v_leadingToken_x3f_961_, lean_object* v_acc_962_, lean_object* v_stx_963_){
_start:
{
lean_object* v___f_964_; lean_object* v___f_965_; lean_object* v___f_966_; lean_object* v___f_967_; lean_object* v___f_968_; lean_object* v___f_969_; lean_object* v___f_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v_acc_974_; 
v___f_964_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__0));
v___f_965_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__1));
v___f_966_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__2));
v___f_967_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__3));
v___f_968_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__4));
v___f_969_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__5));
v___f_970_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findBest_x3f_spec__0_spec__0___redArg___closed__6));
v___x_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_971_, 0, v___f_964_);
lean_ctor_set(v___x_971_, 1, v___f_965_);
v___x_972_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_972_, 0, v___x_971_);
lean_ctor_set(v___x_972_, 1, v___f_966_);
lean_ctor_set(v___x_972_, 2, v___f_967_);
lean_ctor_set(v___x_972_, 3, v___f_968_);
lean_ctor_set(v___x_972_, 4, v___f_969_);
v___x_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
lean_ctor_set(v___x_973_, 1, v___f_970_);
lean_inc(v_f_960_);
lean_inc(v_stx_963_);
lean_inc(v_leadingToken_x3f_961_);
v_acc_974_ = lean_apply_3(v_f_960_, v_acc_962_, v_leadingToken_x3f_961_, v_stx_963_);
switch(lean_obj_tag(v_stx_963_))
{
case 0:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
lean_dec_ref_known(v___x_973_, 2);
lean_dec(v_leadingToken_x3f_961_);
lean_dec(v_f_960_);
v___x_975_ = lean_box(0);
v___x_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
lean_ctor_set(v___x_976_, 1, v_acc_974_);
return v___x_976_;
}
case 1:
{
lean_object* v_args_977_; lean_object* v___f_978_; lean_object* v_lastToken_x3f_979_; lean_object* v___x_980_; size_t v_sz_981_; size_t v___x_982_; lean_object* v___x_983_; lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
v_args_977_ = lean_ctor_get(v_stx_963_, 2);
lean_inc_ref(v_args_977_);
lean_dec_ref_known(v_stx_963_, 3);
v___f_978_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg___lam__0), 5, 2);
lean_closure_set(v___f_978_, 0, v_f_960_);
lean_closure_set(v___f_978_, 1, v_leadingToken_x3f_961_);
v_lastToken_x3f_979_ = lean_box(0);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v_acc_974_);
lean_ctor_set(v___x_980_, 1, v_lastToken_x3f_979_);
v_sz_981_ = lean_array_size(v_args_977_);
v___x_982_ = ((size_t)0ULL);
v___x_983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_973_, v_args_977_, v___f_978_, v_sz_981_, v___x_982_, v___x_980_);
v_fst_984_ = lean_ctor_get(v___x_983_, 0);
v_snd_985_ = lean_ctor_get(v___x_983_, 1);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_983_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_snd_985_);
lean_inc(v_fst_984_);
lean_dec(v___x_983_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 1, v_fst_984_);
lean_ctor_set(v___x_987_, 0, v_snd_985_);
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_snd_985_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_fst_984_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
default: 
{
lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec_ref_known(v___x_973_, 2);
lean_dec(v_leadingToken_x3f_961_);
lean_dec(v_f_960_);
v___x_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_993_, 0, v_stx_963_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v_acc_974_);
return v___x_994_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg___lam__0(lean_object* v_f_995_, lean_object* v_leadingToken_x3f_996_, lean_object* v_a_997_, lean_object* v_x_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v_fst_1005_; lean_object* v_snd_1006_; lean_object* v___y_1008_; 
v_fst_1005_ = lean_ctor_get(v___y_999_, 0);
lean_inc(v_fst_1005_);
v_snd_1006_ = lean_ctor_get(v___y_999_, 1);
lean_inc(v_snd_1006_);
lean_dec_ref(v___y_999_);
if (lean_obj_tag(v_snd_1006_) == 0)
{
v___y_1008_ = v_leadingToken_x3f_996_;
goto v___jp_1007_;
}
else
{
lean_dec(v_leadingToken_x3f_996_);
lean_inc_ref(v_snd_1006_);
v___y_1008_ = v_snd_1006_;
goto v___jp_1007_;
}
v___jp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___y_1001_);
lean_ctor_set(v___x_1003_, 1, v___y_1002_);
v___x_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
v___jp_1007_:
{
lean_object* v___x_1009_; lean_object* v_fst_1010_; 
v___x_1009_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(v_f_995_, v___y_1008_, v_fst_1005_, v_a_997_);
v_fst_1010_ = lean_ctor_get(v___x_1009_, 0);
if (lean_obj_tag(v_fst_1010_) == 0)
{
lean_object* v_snd_1011_; 
v_snd_1011_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_snd_1011_);
lean_dec_ref(v___x_1009_);
v___y_1001_ = v_snd_1011_;
v___y_1002_ = v_snd_1006_;
goto v___jp_1000_;
}
else
{
lean_object* v_snd_1012_; 
lean_inc_ref(v_fst_1010_);
lean_dec(v_snd_1006_);
v_snd_1012_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_snd_1012_);
lean_dec_ref(v___x_1009_);
v___y_1001_ = v_snd_1012_;
v___y_1002_ = v_fst_1010_;
goto v___jp_1000_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go(lean_object* v_00_u03b1_1013_, lean_object* v_f_1014_, lean_object* v_inst_1015_, lean_object* v_leadingToken_x3f_1016_, lean_object* v_acc_1017_, lean_object* v_stx_1018_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(v_f_1014_, v_leadingToken_x3f_1016_, v_acc_1017_, v_stx_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___boxed(lean_object* v_00_u03b1_1020_, lean_object* v_f_1021_, lean_object* v_inst_1022_, lean_object* v_leadingToken_x3f_1023_, lean_object* v_acc_1024_, lean_object* v_stx_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go(v_00_u03b1_1020_, v_f_1021_, v_inst_1022_, v_leadingToken_x3f_1023_, v_acc_1024_, v_stx_1025_);
lean_dec(v_inst_1022_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(lean_object* v_f_1027_, lean_object* v_init_1028_, lean_object* v_stx_1029_){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v_snd_1032_; 
v___x_1030_ = lean_box(0);
v___x_1031_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken_go___redArg(v_f_1027_, v___x_1030_, v_init_1028_, v_stx_1029_);
v_snd_1032_ = lean_ctor_get(v___x_1031_, 1);
lean_inc(v_snd_1032_);
lean_dec_ref(v___x_1031_);
return v_snd_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken(lean_object* v_00_u03b1_1033_, lean_object* v_inst_1034_, lean_object* v_f_1035_, lean_object* v_init_1036_, lean_object* v_stx_1037_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(v_f_1035_, v_init_1036_, v_stx_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___boxed(lean_object* v_00_u03b1_1039_, lean_object* v_inst_1040_, lean_object* v_f_1041_, lean_object* v_init_1042_, lean_object* v_stx_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken(v_00_u03b1_1039_, v_inst_1040_, v_f_1041_, v_init_1042_, v_stx_1043_);
lean_dec(v_inst_1040_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0(lean_object* v_p_1045_, lean_object* v_foundStx_x3f_1046_, lean_object* v_leadingToken_x3f_1047_, lean_object* v_stx_1048_){
_start:
{
if (lean_obj_tag(v_foundStx_x3f_1046_) == 0)
{
lean_object* v___x_1049_; uint8_t v___x_1050_; 
lean_inc(v_stx_1048_);
v___x_1049_ = lean_apply_2(v_p_1045_, v_leadingToken_x3f_1047_, v_stx_1048_);
v___x_1050_ = lean_unbox(v___x_1049_);
if (v___x_1050_ == 0)
{
lean_dec(v_stx_1048_);
return v_foundStx_x3f_1046_;
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1051_, 0, v_stx_1048_);
return v___x_1051_;
}
}
else
{
lean_dec(v_stx_1048_);
lean_dec(v_leadingToken_x3f_1047_);
lean_dec_ref(v_p_1045_);
lean_inc_ref(v_foundStx_x3f_1046_);
return v_foundStx_x3f_1046_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0___boxed(lean_object* v_p_1052_, lean_object* v_foundStx_x3f_1053_, lean_object* v_leadingToken_x3f_1054_, lean_object* v_stx_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0(v_p_1052_, v_foundStx_x3f_1053_, v_leadingToken_x3f_1054_, v_stx_1055_);
lean_dec(v_foundStx_x3f_1053_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f(lean_object* v_p_1057_, lean_object* v_stx_1058_){
_start:
{
lean_object* v___f_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___f_1059_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1059_, 0, v_p_1057_);
v___x_1060_ = lean_box(0);
v___x_1061_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_foldWithLeadingToken___redArg(v___f_1059_, v___x_1060_, v_stx_1058_);
return v___x_1061_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(uint8_t v___y_1062_, lean_object* v_hoverPos_1063_, lean_object* v_as_1064_, size_t v_i_1065_, size_t v_stop_1066_){
_start:
{
uint8_t v___y_1072_; uint8_t v___x_1073_; 
v___x_1073_ = lean_usize_dec_eq(v_i_1065_, v_stop_1066_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; lean_object* v_fst_1075_; lean_object* v_snd_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1074_ = lean_array_uget_borrowed(v_as_1064_, v_i_1065_);
v_fst_1075_ = lean_ctor_get(v___x_1074_, 0);
v_snd_1076_ = lean_ctor_get(v___x_1074_, 1);
v___x_1077_ = lean_unsigned_to_nat(0u);
v___x_1078_ = lean_unsigned_to_nat(2u);
v___x_1079_ = lean_nat_mod(v_snd_1076_, v___x_1078_);
v___x_1080_ = lean_nat_dec_eq(v___x_1079_, v___x_1077_);
lean_dec(v___x_1079_);
if (v___x_1080_ == 0)
{
uint8_t v___x_1081_; 
v___x_1081_ = l_Lean_Syntax_isAtom(v_fst_1075_);
if (v___x_1081_ == 0)
{
v___y_1072_ = v___y_1062_;
goto v___jp_1071_;
}
else
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_Syntax_getTailPos_x3f(v_fst_1075_, v___x_1080_);
if (lean_obj_tag(v___x_1082_) == 1)
{
lean_object* v_val_1083_; uint8_t v___x_1084_; 
v_val_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_val_1083_);
lean_dec_ref_known(v___x_1082_, 1);
v___x_1084_ = lean_nat_dec_le(v_val_1083_, v_hoverPos_1063_);
if (v___x_1084_ == 0)
{
lean_dec(v_val_1083_);
goto v___jp_1067_;
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1085_ = l_Lean_Syntax_getTrailingSize(v_fst_1075_);
v___x_1086_ = lean_nat_add(v_val_1083_, v___x_1085_);
lean_dec(v___x_1085_);
lean_dec(v_val_1083_);
v___x_1087_ = lean_nat_dec_le(v_hoverPos_1063_, v___x_1086_);
lean_dec(v___x_1086_);
v___y_1072_ = v___x_1087_;
goto v___jp_1071_;
}
}
else
{
lean_dec(v___x_1082_);
goto v___jp_1067_;
}
}
}
else
{
v___y_1072_ = v___y_1062_;
goto v___jp_1071_;
}
}
else
{
uint8_t v___x_1088_; 
v___x_1088_ = 0;
return v___x_1088_;
}
v___jp_1067_:
{
size_t v___x_1068_; size_t v___x_1069_; 
v___x_1068_ = ((size_t)1ULL);
v___x_1069_ = lean_usize_add(v_i_1065_, v___x_1068_);
v_i_1065_ = v___x_1069_;
goto _start;
}
v___jp_1071_:
{
if (v___y_1072_ == 0)
{
goto v___jp_1067_;
}
else
{
return v___y_1072_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0___boxed(lean_object* v___y_1089_, lean_object* v_hoverPos_1090_, lean_object* v_as_1091_, lean_object* v_i_1092_, lean_object* v_stop_1093_){
_start:
{
uint8_t v___y_2126__boxed_1094_; size_t v_i_boxed_1095_; size_t v_stop_boxed_1096_; uint8_t v_res_1097_; lean_object* v_r_1098_; 
v___y_2126__boxed_1094_ = lean_unbox(v___y_1089_);
v_i_boxed_1095_ = lean_unbox_usize(v_i_1092_);
lean_dec(v_i_1092_);
v_stop_boxed_1096_ = lean_unbox_usize(v_stop_1093_);
lean_dec(v_stop_1093_);
v_res_1097_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(v___y_2126__boxed_1094_, v_hoverPos_1090_, v_as_1091_, v_i_boxed_1095_, v_stop_boxed_1096_);
lean_dec_ref(v_as_1091_);
lean_dec(v_hoverPos_1090_);
v_r_1098_ = lean_box(v_res_1097_);
return v_r_1098_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0(uint8_t v_isCursorInProperWhitespace_1105_, lean_object* v_fileMap_1106_, lean_object* v_hoverFilePos_1107_, lean_object* v_hoverPos_1108_, lean_object* v_leadingToken_x3f_1109_, lean_object* v_stx_1110_){
_start:
{
uint8_t v___y_1112_; 
if (lean_obj_tag(v_leadingToken_x3f_1109_) == 1)
{
lean_object* v_val_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v_val_1119_ = lean_ctor_get(v_leadingToken_x3f_1109_, 0);
lean_inc(v_stx_1110_);
v___x_1120_ = l_Lean_Syntax_getKind(v_stx_1110_);
v___x_1121_ = ((lean_object*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___closed__1));
v___x_1122_ = lean_name_eq(v___x_1120_, v___x_1121_);
lean_dec(v___x_1120_);
if (v___x_1122_ == 0)
{
lean_dec(v_stx_1110_);
lean_dec_ref(v_fileMap_1106_);
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_Syntax_getTailPos_x3f(v_val_1119_, v___x_1122_);
if (lean_obj_tag(v___x_1123_) == 1)
{
lean_object* v_val_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v_fieldsAndSeps_1127_; uint8_t v___y_1129_; lean_object* v_val_1137_; lean_object* v___x_1142_; 
v_val_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc(v_val_1124_);
lean_dec_ref_known(v___x_1123_, 1);
v___x_1125_ = lean_unsigned_to_nat(0u);
v___x_1126_ = l_Lean_Syntax_getArg(v_stx_1110_, v___x_1125_);
v_fieldsAndSeps_1127_ = l_Lean_Syntax_getArgs(v___x_1126_);
lean_dec(v___x_1126_);
v___x_1142_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_1110_, v___x_1122_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_val_1119_, v___x_1122_);
if (lean_obj_tag(v___x_1143_) == 1)
{
lean_object* v_val_1144_; 
v_val_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_val_1144_);
lean_dec_ref_known(v___x_1143_, 1);
v_val_1137_ = v_val_1144_;
goto v___jp_1136_;
}
else
{
uint8_t v___x_1145_; 
lean_dec(v___x_1143_);
lean_dec_ref(v_fieldsAndSeps_1127_);
lean_dec(v_val_1124_);
lean_dec(v_stx_1110_);
lean_dec_ref(v_fileMap_1106_);
v___x_1145_ = 0;
return v___x_1145_;
}
}
else
{
lean_object* v_val_1146_; 
v_val_1146_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_val_1146_);
lean_dec_ref_known(v___x_1142_, 1);
v_val_1137_ = v_val_1146_;
goto v___jp_1136_;
}
v___jp_1128_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1130_ = l_Array_zipIdx___redArg(v_fieldsAndSeps_1127_, v___x_1125_);
v___x_1131_ = lean_array_get_size(v___x_1130_);
v___x_1132_ = lean_nat_dec_lt(v___x_1125_, v___x_1131_);
if (v___x_1132_ == 0)
{
lean_dec_ref(v___x_1130_);
v___y_1112_ = v___x_1132_;
goto v___jp_1111_;
}
else
{
if (v___x_1132_ == 0)
{
lean_dec_ref(v___x_1130_);
v___y_1112_ = v___x_1132_;
goto v___jp_1111_;
}
else
{
size_t v___x_1133_; size_t v___x_1134_; uint8_t v___x_1135_; 
v___x_1133_ = ((size_t)0ULL);
v___x_1134_ = lean_usize_of_nat(v___x_1131_);
v___x_1135_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion_spec__0(v___y_1129_, v_hoverPos_1108_, v___x_1130_, v___x_1133_, v___x_1134_);
lean_dec_ref(v___x_1130_);
if (v___x_1135_ == 0)
{
v___y_1112_ = v___x_1135_;
goto v___jp_1111_;
}
else
{
lean_dec(v_stx_1110_);
lean_dec_ref(v_fileMap_1106_);
return v___x_1135_;
}
}
}
}
v___jp_1136_:
{
lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = lean_array_get_size(v_fieldsAndSeps_1127_);
v___x_1139_ = lean_nat_dec_eq(v___x_1138_, v___x_1125_);
if (v___x_1139_ == 0)
{
lean_dec(v_val_1137_);
lean_dec(v_val_1124_);
v___y_1129_ = v___x_1139_;
goto v___jp_1128_;
}
else
{
lean_object* v_outerBounds_1140_; uint8_t v___x_1141_; 
v_outerBounds_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_outerBounds_1140_, 0, v_val_1124_);
lean_ctor_set(v_outerBounds_1140_, 1, v_val_1137_);
v___x_1141_ = l_Lean_Syntax_Range_contains(v_outerBounds_1140_, v_hoverPos_1108_, v___x_1139_);
lean_dec_ref_known(v_outerBounds_1140_, 2);
if (v___x_1141_ == 0)
{
v___y_1129_ = v___x_1141_;
goto v___jp_1128_;
}
else
{
lean_dec_ref(v_fieldsAndSeps_1127_);
lean_dec(v_stx_1110_);
lean_dec_ref(v_fileMap_1106_);
return v___x_1141_;
}
}
}
}
else
{
uint8_t v___x_1147_; 
lean_dec(v___x_1123_);
lean_dec(v_stx_1110_);
lean_dec_ref(v_fileMap_1106_);
v___x_1147_ = 0;
return v___x_1147_;
}
}
}
else
{
uint8_t v___x_1148_; 
lean_dec(v_stx_1110_);
lean_dec_ref(v_fileMap_1106_);
v___x_1148_ = 0;
return v___x_1148_;
}
v___jp_1111_:
{
if (v_isCursorInProperWhitespace_1105_ == 0)
{
lean_dec(v_stx_1110_);
lean_dec_ref(v_fileMap_1106_);
return v___y_1112_;
}
else
{
lean_object* v___x_1113_; 
v___x_1113_ = l_Lean_Syntax_getPos_x3f(v_stx_1110_, v___y_1112_);
lean_dec(v_stx_1110_);
if (lean_obj_tag(v___x_1113_) == 1)
{
lean_object* v_val_1114_; lean_object* v___x_1115_; lean_object* v_column_1116_; lean_object* v_column_1117_; uint8_t v_isCursorInBlock_1118_; 
v_val_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_val_1114_);
lean_dec_ref_known(v___x_1113_, 1);
v___x_1115_ = l_Lean_FileMap_toPosition(v_fileMap_1106_, v_val_1114_);
lean_dec(v_val_1114_);
v_column_1116_ = lean_ctor_get(v___x_1115_, 1);
lean_inc(v_column_1116_);
lean_dec_ref(v___x_1115_);
v_column_1117_ = lean_ctor_get(v_hoverFilePos_1107_, 1);
v_isCursorInBlock_1118_ = lean_nat_dec_eq(v_column_1117_, v_column_1116_);
lean_dec(v_column_1116_);
return v_isCursorInBlock_1118_;
}
else
{
lean_dec(v___x_1113_);
lean_dec_ref(v_fileMap_1106_);
return v___y_1112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___boxed(lean_object* v_isCursorInProperWhitespace_1149_, lean_object* v_fileMap_1150_, lean_object* v_hoverFilePos_1151_, lean_object* v_hoverPos_1152_, lean_object* v_leadingToken_x3f_1153_, lean_object* v_stx_1154_){
_start:
{
uint8_t v_isCursorInProperWhitespace_boxed_1155_; uint8_t v_res_1156_; lean_object* v_r_1157_; 
v_isCursorInProperWhitespace_boxed_1155_ = lean_unbox(v_isCursorInProperWhitespace_1149_);
v_res_1156_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0(v_isCursorInProperWhitespace_boxed_1155_, v_fileMap_1150_, v_hoverFilePos_1151_, v_hoverPos_1152_, v_leadingToken_x3f_1153_, v_stx_1154_);
lean_dec(v_leadingToken_x3f_1153_);
lean_dec(v_hoverPos_1152_);
lean_dec_ref(v_hoverFilePos_1151_);
v_r_1157_ = lean_box(v_res_1156_);
return v_r_1157_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(lean_object* v_fileMap_1158_, lean_object* v_hoverPos_1159_, lean_object* v_cmdStx_1160_){
_start:
{
uint8_t v_isCursorOnWhitespace_1161_; 
v_isCursorOnWhitespace_1161_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorOnWhitespace(v_fileMap_1158_, v_hoverPos_1159_);
if (v_isCursorOnWhitespace_1161_ == 0)
{
lean_dec(v_cmdStx_1160_);
lean_dec(v_hoverPos_1159_);
lean_dec_ref(v_fileMap_1158_);
return v_isCursorOnWhitespace_1161_;
}
else
{
uint8_t v_isCursorInProperWhitespace_1162_; lean_object* v_hoverFilePos_1163_; lean_object* v___x_1164_; lean_object* v___f_1165_; lean_object* v___x_1166_; 
v_isCursorInProperWhitespace_1162_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isCursorInProperWhitespace(v_fileMap_1158_, v_hoverPos_1159_);
lean_inc_ref(v_fileMap_1158_);
v_hoverFilePos_1163_ = l_Lean_FileMap_toPosition(v_fileMap_1158_, v_hoverPos_1159_);
v___x_1164_ = lean_box(v_isCursorInProperWhitespace_1162_);
v___f_1165_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1165_, 0, v___x_1164_);
lean_closure_set(v___f_1165_, 1, v_fileMap_1158_);
lean_closure_set(v___f_1165_, 2, v_hoverFilePos_1163_);
lean_closure_set(v___f_1165_, 3, v_hoverPos_1159_);
v___x_1166_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findWithLeadingToken_x3f(v___f_1165_, v_cmdStx_1160_);
if (lean_obj_tag(v___x_1166_) == 0)
{
uint8_t v___x_1167_; 
v___x_1167_ = 0;
return v___x_1167_;
}
else
{
lean_dec_ref_known(v___x_1166_, 1);
return v_isCursorOnWhitespace_1161_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion___boxed(lean_object* v_fileMap_1168_, lean_object* v_hoverPos_1169_, lean_object* v_cmdStx_1170_){
_start:
{
uint8_t v_res_1171_; lean_object* v_r_1172_; 
v_res_1171_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(v_fileMap_1168_, v_hoverPos_1169_, v_cmdStx_1170_);
v_r_1172_ = lean_box(v_res_1171_);
return v_r_1172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticFieldCompletion_x3f(lean_object* v_fileMap_1173_, lean_object* v_hoverPos_1174_, lean_object* v_cmdStx_1175_, lean_object* v_infoTree_1176_){
_start:
{
uint8_t v___x_1177_; 
lean_inc(v_hoverPos_1174_);
v___x_1177_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_isSyntheticStructFieldCompletion(v_fileMap_1173_, v_hoverPos_1174_, v_cmdStx_1175_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1178_; 
lean_dec_ref(v_infoTree_1176_);
lean_dec(v_hoverPos_1174_);
v___x_1178_ = lean_box(0);
return v___x_1178_;
}
else
{
lean_object* v___x_1179_; 
v___x_1179_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findExpectedTypeAt(v_infoTree_1176_, v_hoverPos_1174_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_box(0);
return v___x_1180_;
}
else
{
lean_object* v_val_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1203_; 
v_val_1181_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1183_ = v___x_1179_;
v_isShared_1184_ = v_isSharedCheck_1203_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_val_1181_);
lean_dec(v___x_1179_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1203_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v_fst_1185_; lean_object* v_snd_1186_; lean_object* v___x_1187_; 
v_fst_1185_ = lean_ctor_get(v_val_1181_, 0);
lean_inc(v_fst_1185_);
v_snd_1186_ = lean_ctor_get(v_val_1181_, 1);
lean_inc(v_snd_1186_);
lean_dec(v_val_1181_);
v___x_1187_ = l_Lean_Expr_getAppFn(v_snd_1186_);
lean_dec(v_snd_1186_);
if (lean_obj_tag(v___x_1187_) == 4)
{
lean_object* v_toCommandContextInfo_1188_; lean_object* v_declName_1189_; lean_object* v_env_1190_; uint8_t v___x_1191_; 
v_toCommandContextInfo_1188_ = lean_ctor_get(v_fst_1185_, 0);
v_declName_1189_ = lean_ctor_get(v___x_1187_, 0);
lean_inc_n(v_declName_1189_, 2);
lean_dec_ref_known(v___x_1187_, 2);
v_env_1190_ = lean_ctor_get(v_toCommandContextInfo_1188_, 0);
lean_inc_ref(v_env_1190_);
v___x_1191_ = l_Lean_isStructure(v_env_1190_, v_declName_1189_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; 
lean_dec(v_declName_1189_);
lean_dec(v_fst_1185_);
lean_del_object(v___x_1183_);
v___x_1192_ = lean_box(0);
return v___x_1192_;
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_box(0);
v___x_1195_ = lean_box(0);
v___x_1196_ = l_Lean_LocalContext_empty;
v___x_1197_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1194_);
lean_ctor_set(v___x_1197_, 1, v___x_1195_);
lean_ctor_set(v___x_1197_, 2, v___x_1196_);
lean_ctor_set(v___x_1197_, 3, v_declName_1189_);
v___x_1198_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1193_);
lean_ctor_set(v___x_1198_, 1, v_fst_1185_);
lean_ctor_set(v___x_1198_, 2, v___x_1197_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___x_1198_);
v___x_1200_ = v___x_1183_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
else
{
lean_object* v___x_1202_; 
lean_dec_ref(v___x_1187_);
lean_dec(v_fst_1185_);
lean_del_object(v___x_1183_);
v___x_1202_ = lean_box(0);
return v___x_1202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findSyntheticCompletions(lean_object* v_fileMap_1206_, lean_object* v_hoverPos_1207_, lean_object* v_cmdStx_1208_, lean_object* v_infoTree_1209_){
_start:
{
lean_object* v_val_1211_; lean_object* v___x_1215_; 
lean_inc_ref(v_infoTree_1209_);
lean_inc(v_cmdStx_1208_);
lean_inc_ref(v_fileMap_1206_);
v___x_1215_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticTacticCompletion_x3f(v_fileMap_1206_, v_hoverPos_1207_, v_cmdStx_1208_, v_infoTree_1209_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v___x_1216_; 
lean_inc_ref(v_infoTree_1209_);
lean_inc(v_hoverPos_1207_);
v___x_1216_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticFieldCompletion_x3f(v_fileMap_1206_, v_hoverPos_1207_, v_cmdStx_1208_, v_infoTree_1209_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v___x_1217_; 
v___x_1217_ = l___private_Lean_Server_Completion_SyntheticCompletion_0__Lean_Server_Completion_findSyntheticIdentifierCompletion_x3f(v_hoverPos_1207_, v_infoTree_1209_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v___x_1218_; 
v___x_1218_ = ((lean_object*)(l_Lean_Server_Completion_findSyntheticCompletions___closed__0));
return v___x_1218_;
}
else
{
lean_object* v_val_1219_; 
v_val_1219_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_val_1219_);
lean_dec_ref_known(v___x_1217_, 1);
v_val_1211_ = v_val_1219_;
goto v___jp_1210_;
}
}
else
{
lean_object* v_val_1220_; 
lean_dec_ref(v_infoTree_1209_);
lean_dec(v_hoverPos_1207_);
v_val_1220_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_val_1220_);
lean_dec_ref_known(v___x_1216_, 1);
v_val_1211_ = v_val_1220_;
goto v___jp_1210_;
}
}
else
{
lean_object* v_val_1221_; 
lean_dec_ref(v_infoTree_1209_);
lean_dec(v_cmdStx_1208_);
lean_dec(v_hoverPos_1207_);
lean_dec_ref(v_fileMap_1206_);
v_val_1221_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_val_1221_);
lean_dec_ref_known(v___x_1215_, 1);
v_val_1211_ = v_val_1221_;
goto v___jp_1210_;
}
v___jp_1210_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = lean_unsigned_to_nat(1u);
v___x_1213_ = lean_mk_empty_array_with_capacity(v___x_1212_);
v___x_1214_ = lean_array_push(v___x_1213_, v_val_1211_);
return v___x_1214_;
}
}
}
lean_object* runtime_initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_CompletionUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_CompletionUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
}
#ifdef __cplusplus
}
#endif
