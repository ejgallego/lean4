// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Pattern
// Imports: public import Lean.Elab.Tactic.Simp public import Lean.Elab.Tactic.Conv.Basic
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Expr_toHeadIndex(lean_object*);
uint8_t l_Lean_instBEqHeadIndex_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getRhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setMemoize(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_mkConvGoalFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "positive integer expected"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "`pattern` conv tactic failed, pattern was not found"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`pattern` conv tactic failed, pattern was found only "};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " times but "};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " expected"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14;
static const lean_array_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "occurrence list is not distinct"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17;
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18_value;
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_value)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "occsWildcard"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "occsIndexed"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24_value;
static const lean_array_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_value)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "occs"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Conv"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pattern"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_value),LEAN_SCALAR_PTR_LITERAL(59, 139, 144, 223, 221, 17, 152, 53)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "evalPattern"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 226, 241, 79, 162, 140, 83, 90)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(105) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(142) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(105) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(105) << 1) | 1)),((lean_object*)(((size_t)(65) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_value),((lean_object*)(((size_t)(54) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_value),((lean_object*)(((size_t)(65) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_5_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc(v_a_8_);
lean_dec_ref_known(v___x_7_, 1);
v___x_9_ = l_Lean_Meta_Simp_neutralConfig;
v___x_10_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0));
v___x_11_ = l_Lean_Options_empty;
v___x_12_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_9_, v___x_10_, v_a_8_, v___x_11_, v_a_3_, v_a_4_, v_a_5_);
return v___x_12_;
}
else
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_20_; 
v_a_13_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_20_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_20_ == 0)
{
v___x_15_ = v___x_7_;
v_isShared_16_ = v_isSharedCheck_20_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v___x_7_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_20_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_18_; 
if (v_isShared_16_ == 0)
{
v___x_18_ = v___x_15_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v_a_13_);
v___x_18_ = v_reuseFailAlloc_19_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
return v___x_18_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___boxed(lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v_a_21_, v_a_22_, v_a_23_);
lean_dec(v_a_23_);
lean_dec_ref(v_a_22_);
lean_dec_ref(v_a_21_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v_a_26_, v_a_28_, v_a_29_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___boxed(lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(v_a_32_, v_a_33_, v_a_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(lean_object* v_pattern_40_, lean_object* v_e_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
lean_inc_ref(v_e_41_);
v___x_50_ = l_Lean_Expr_toHeadIndex(v_e_41_);
lean_inc_ref(v_pattern_40_);
v___x_51_ = l_Lean_Expr_toHeadIndex(v_pattern_40_);
v___x_52_ = l_Lean_instBEqHeadIndex_beq(v___x_50_, v___x_51_);
lean_dec(v___x_51_);
lean_dec(v___x_50_);
if (v___x_52_ == 0)
{
lean_dec_ref(v_e_41_);
lean_dec_ref(v_pattern_40_);
goto v___jp_47_;
}
else
{
lean_object* v___x_53_; 
lean_inc_ref(v_e_41_);
lean_inc_ref(v_pattern_40_);
v___x_53_ = l_Lean_Meta_isExprDefEqGuarded(v_pattern_40_, v_e_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_96_; 
v_a_54_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_96_ == 0)
{
v___x_56_ = v___x_53_;
v_isShared_57_ = v_isSharedCheck_96_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_dec(v___x_53_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_96_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
uint8_t v___x_58_; 
v___x_58_ = lean_unbox(v_a_54_);
lean_dec(v_a_54_);
if (v___x_58_ == 0)
{
uint8_t v___x_59_; 
lean_del_object(v___x_56_);
v___x_59_ = l_Lean_Expr_isApp(v_e_41_);
if (v___x_59_ == 0)
{
lean_dec_ref(v_e_41_);
lean_dec_ref(v_pattern_40_);
goto v___jp_47_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = l_Lean_Expr_appFn_x21(v_e_41_);
v___x_61_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_pattern_40_, v___x_60_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
lean_inc(v_a_62_);
if (lean_obj_tag(v_a_62_) == 0)
{
lean_dec_ref(v_e_41_);
return v___x_61_;
}
else
{
lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_88_; 
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_88_ == 0)
{
lean_object* v_unused_89_; 
v_unused_89_ = lean_ctor_get(v___x_61_, 0);
lean_dec(v_unused_89_);
v___x_64_ = v___x_61_;
v_isShared_65_ = v_isSharedCheck_88_;
goto v_resetjp_63_;
}
else
{
lean_dec(v___x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_88_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v_val_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_87_; 
v_val_66_ = lean_ctor_get(v_a_62_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v_a_62_);
if (v_isSharedCheck_87_ == 0)
{
v___x_68_ = v_a_62_;
v_isShared_69_ = v_isSharedCheck_87_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_val_66_);
lean_dec(v_a_62_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_87_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v_fst_70_; lean_object* v_snd_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_86_; 
v_fst_70_ = lean_ctor_get(v_val_66_, 0);
v_snd_71_ = lean_ctor_get(v_val_66_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_val_66_);
if (v_isSharedCheck_86_ == 0)
{
v___x_73_ = v_val_66_;
v_isShared_74_ = v_isSharedCheck_86_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_snd_71_);
lean_inc(v_fst_70_);
lean_dec(v_val_66_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_86_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_75_ = l_Lean_Expr_appArg_x21(v_e_41_);
lean_dec_ref(v_e_41_);
v___x_76_ = lean_array_push(v_snd_71_, v___x_75_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v___x_76_);
v___x_78_ = v___x_73_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_fst_70_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_76_);
v___x_78_ = v_reuseFailAlloc_85_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
lean_object* v___x_80_; 
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v___x_78_);
v___x_80_ = v___x_68_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_78_);
v___x_80_ = v_reuseFailAlloc_84_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_object* v___x_82_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_80_);
v___x_82_ = v___x_64_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_80_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
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
lean_dec_ref(v_e_41_);
return v___x_61_;
}
}
}
else
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
lean_dec_ref(v_pattern_40_);
v___x_90_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0));
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v_e_41_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v___x_92_);
v___x_94_ = v___x_56_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
lean_dec_ref(v_e_41_);
lean_dec_ref(v_pattern_40_);
v_a_97_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_53_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_53_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
v___jp_47_:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_box(0);
v___x_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___boxed(lean_object* v_pattern_105_, lean_object* v_e_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_pattern_105_, v_e_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(lean_object* v_k_113_, uint8_t v_allowLevelAssignments_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_114_, v_k_113_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
else
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
v_a_129_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_120_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_120_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg___boxed(lean_object* v_k_137_, lean_object* v_allowLevelAssignments_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_144_; lean_object* v_res_145_; 
v_allowLevelAssignments_boxed_144_ = lean_unbox(v_allowLevelAssignments_138_);
v_res_145_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v_k_137_, v_allowLevelAssignments_boxed_144_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(lean_object* v_00_u03b1_146_, lean_object* v_k_147_, uint8_t v_allowLevelAssignments_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v_k_147_, v_allowLevelAssignments_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___boxed(lean_object* v_00_u03b1_155_, lean_object* v_k_156_, lean_object* v_allowLevelAssignments_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_163_; lean_object* v_res_164_; 
v_allowLevelAssignments_boxed_163_ = lean_unbox(v_allowLevelAssignments_157_);
v_res_164_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(v_00_u03b1_155_, v_k_156_, v_allowLevelAssignments_boxed_163_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(lean_object* v_pattern_165_, lean_object* v_e_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v___y_173_; lean_object* v___x_190_; 
v___x_190_ = l_Lean_Meta_openAbstractMVarsResult(v_pattern_165_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; lean_object* v_snd_192_; lean_object* v_snd_193_; lean_object* v___x_194_; uint8_t v_transparency_195_; uint8_t v___x_196_; uint8_t v___x_197_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_a_191_);
lean_dec_ref_known(v___x_190_, 1);
v_snd_192_ = lean_ctor_get(v_a_191_, 1);
lean_inc(v_snd_192_);
lean_dec(v_a_191_);
v_snd_193_ = lean_ctor_get(v_snd_192_, 1);
lean_inc(v_snd_193_);
lean_dec(v_snd_192_);
v___x_194_ = l_Lean_Meta_Context_config(v___y_167_);
v_transparency_195_ = lean_ctor_get_uint8(v___x_194_, 9);
lean_dec_ref(v___x_194_);
v___x_196_ = 2;
v___x_197_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_195_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v_keyedConfig_198_; uint8_t v_trackZetaDelta_199_; lean_object* v_zetaDeltaSet_200_; lean_object* v_lctx_201_; lean_object* v_localInstances_202_; lean_object* v_defEqCtx_x3f_203_; lean_object* v_synthPendingDepth_204_; lean_object* v_customCanUnfoldPredicate_x3f_205_; uint8_t v_univApprox_206_; uint8_t v_inTypeClassResolution_207_; uint8_t v_cacheInferType_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_217_; 
v_keyedConfig_198_ = lean_ctor_get(v___y_167_, 0);
v_trackZetaDelta_199_ = lean_ctor_get_uint8(v___y_167_, sizeof(void*)*7);
v_zetaDeltaSet_200_ = lean_ctor_get(v___y_167_, 1);
v_lctx_201_ = lean_ctor_get(v___y_167_, 2);
v_localInstances_202_ = lean_ctor_get(v___y_167_, 3);
v_defEqCtx_x3f_203_ = lean_ctor_get(v___y_167_, 4);
v_synthPendingDepth_204_ = lean_ctor_get(v___y_167_, 5);
v_customCanUnfoldPredicate_x3f_205_ = lean_ctor_get(v___y_167_, 6);
v_univApprox_206_ = lean_ctor_get_uint8(v___y_167_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_207_ = lean_ctor_get_uint8(v___y_167_, sizeof(void*)*7 + 2);
v_cacheInferType_208_ = lean_ctor_get_uint8(v___y_167_, sizeof(void*)*7 + 3);
v_isSharedCheck_217_ = !lean_is_exclusive(v___y_167_);
if (v_isSharedCheck_217_ == 0)
{
v___x_210_ = v___y_167_;
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_205_);
lean_inc(v_synthPendingDepth_204_);
lean_inc(v_defEqCtx_x3f_203_);
lean_inc(v_localInstances_202_);
lean_inc(v_lctx_201_);
lean_inc(v_zetaDeltaSet_200_);
lean_inc(v_keyedConfig_198_);
lean_dec(v___y_167_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_212_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_196_, v_keyedConfig_198_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_212_);
v___x_214_ = v___x_210_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_212_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_zetaDeltaSet_200_);
lean_ctor_set(v_reuseFailAlloc_216_, 2, v_lctx_201_);
lean_ctor_set(v_reuseFailAlloc_216_, 3, v_localInstances_202_);
lean_ctor_set(v_reuseFailAlloc_216_, 4, v_defEqCtx_x3f_203_);
lean_ctor_set(v_reuseFailAlloc_216_, 5, v_synthPendingDepth_204_);
lean_ctor_set(v_reuseFailAlloc_216_, 6, v_customCanUnfoldPredicate_x3f_205_);
lean_ctor_set_uint8(v_reuseFailAlloc_216_, sizeof(void*)*7, v_trackZetaDelta_199_);
lean_ctor_set_uint8(v_reuseFailAlloc_216_, sizeof(void*)*7 + 1, v_univApprox_206_);
lean_ctor_set_uint8(v_reuseFailAlloc_216_, sizeof(void*)*7 + 2, v_inTypeClassResolution_207_);
lean_ctor_set_uint8(v_reuseFailAlloc_216_, sizeof(void*)*7 + 3, v_cacheInferType_208_);
v___x_214_ = v_reuseFailAlloc_216_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_215_; 
v___x_215_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_snd_193_, v_e_166_, v___x_214_, v___y_168_, v___y_169_, v___y_170_);
lean_dec_ref(v___x_214_);
v___y_173_ = v___x_215_;
goto v___jp_172_;
}
}
}
else
{
lean_object* v___x_218_; 
v___x_218_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_snd_193_, v_e_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec_ref(v___y_167_);
v___y_173_ = v___x_218_;
goto v___jp_172_;
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec_ref(v___y_167_);
lean_dec_ref(v_e_166_);
v_a_219_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_190_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_190_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
v___jp_172_:
{
if (lean_obj_tag(v___y_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_181_; 
v_a_174_ = lean_ctor_get(v___y_173_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___y_173_);
if (v_isSharedCheck_181_ == 0)
{
v___x_176_ = v___y_173_;
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___y_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_179_; 
if (v_isShared_177_ == 0)
{
v___x_179_ = v___x_176_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_a_174_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
else
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
v_a_182_ = lean_ctor_get(v___y_173_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___y_173_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v___y_173_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___y_173_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed(lean_object* v_pattern_227_, lean_object* v_e_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(v_pattern_227_, v_e_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f(lean_object* v_pattern_235_, lean_object* v_e_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v___f_242_; uint8_t v___x_243_; lean_object* v___x_244_; 
v___f_242_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed), 7, 2);
lean_closure_set(v___f_242_, 0, v_pattern_235_);
lean_closure_set(v___f_242_, 1, v_e_236_);
v___x_243_ = 0;
v___x_244_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v___f_242_, v___x_243_, v_a_237_, v_a_238_, v_a_239_, v_a_240_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___boxed(lean_object* v_pattern_245_, lean_object* v_e_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f(v_pattern_245_, v_e_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___impl(lean_object* v_x_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_obj_tag_nat(v_x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___impl___boxed(lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___impl(v_x_255_);
lean_dec_ref(v_x_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(lean_object* v_t_257_, lean_object* v_k_258_){
_start:
{
if (lean_obj_tag(v_t_257_) == 0)
{
lean_object* v_subgoals_259_; lean_object* v___x_260_; 
v_subgoals_259_ = lean_ctor_get(v_t_257_, 0);
lean_inc_ref(v_subgoals_259_);
lean_dec_ref_known(v_t_257_, 1);
v___x_260_ = lean_apply_1(v_k_258_, v_subgoals_259_);
return v___x_260_;
}
else
{
lean_object* v_subgoals_261_; lean_object* v_idx_262_; lean_object* v_remaining_263_; lean_object* v___x_264_; 
v_subgoals_261_ = lean_ctor_get(v_t_257_, 0);
lean_inc_ref(v_subgoals_261_);
v_idx_262_ = lean_ctor_get(v_t_257_, 1);
lean_inc(v_idx_262_);
v_remaining_263_ = lean_ctor_get(v_t_257_, 2);
lean_inc(v_remaining_263_);
lean_dec_ref_known(v_t_257_, 3);
v___x_264_ = lean_apply_3(v_k_258_, v_subgoals_261_, v_idx_262_, v_remaining_263_);
return v___x_264_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(lean_object* v_motive_265_, lean_object* v_ctorIdx_266_, lean_object* v_t_267_, lean_object* v_h_268_, lean_object* v_k_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_267_, v_k_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___boxed(lean_object* v_motive_271_, lean_object* v_ctorIdx_272_, lean_object* v_t_273_, lean_object* v_h_274_, lean_object* v_k_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(v_motive_271_, v_ctorIdx_272_, v_t_273_, v_h_274_, v_k_275_);
lean_dec(v_ctorIdx_272_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim___redArg(lean_object* v_t_277_, lean_object* v_all_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_277_, v_all_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim(lean_object* v_motive_280_, lean_object* v_t_281_, lean_object* v_h_282_, lean_object* v_all_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_281_, v_all_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim___redArg(lean_object* v_t_285_, lean_object* v_occs_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_285_, v_occs_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim(lean_object* v_motive_288_, lean_object* v_t_289_, lean_object* v_h_290_, lean_object* v_occs_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_289_, v_occs_291_);
return v___x_292_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(lean_object* v_x_293_){
_start:
{
if (lean_obj_tag(v_x_293_) == 0)
{
uint8_t v___x_294_; 
v___x_294_ = 0;
return v___x_294_;
}
else
{
lean_object* v_remaining_295_; uint8_t v___x_296_; 
v_remaining_295_ = lean_ctor_get(v_x_293_, 2);
v___x_296_ = l_List_isEmpty___redArg(v_remaining_295_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone___boxed(lean_object* v_x_297_){
_start:
{
uint8_t v_res_298_; lean_object* v_r_299_; 
v_res_298_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(v_x_297_);
lean_dec_ref(v_x_297_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_300_) == 0)
{
uint8_t v___x_301_; 
v___x_301_ = 1;
return v___x_301_;
}
else
{
lean_object* v_remaining_302_; 
v_remaining_302_ = lean_ctor_get(v_x_300_, 2);
if (lean_obj_tag(v_remaining_302_) == 1)
{
lean_object* v_head_303_; lean_object* v_idx_304_; lean_object* v_fst_305_; uint8_t v___x_306_; 
v_head_303_ = lean_ctor_get(v_remaining_302_, 0);
v_idx_304_ = lean_ctor_get(v_x_300_, 1);
v_fst_305_ = lean_ctor_get(v_head_303_, 0);
v___x_306_ = lean_nat_dec_eq(v_idx_304_, v_fst_305_);
return v___x_306_;
}
else
{
uint8_t v___x_307_; 
v___x_307_ = 0;
return v___x_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady___boxed(lean_object* v_x_308_){
_start:
{
uint8_t v_res_309_; lean_object* v_r_310_; 
v_res_309_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(v_x_308_);
lean_dec_ref(v_x_308_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(lean_object* v_x_311_){
_start:
{
if (lean_obj_tag(v_x_311_) == 1)
{
lean_object* v_subgoals_312_; lean_object* v_idx_313_; lean_object* v_remaining_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_323_; 
v_subgoals_312_ = lean_ctor_get(v_x_311_, 0);
v_idx_313_ = lean_ctor_get(v_x_311_, 1);
v_remaining_314_ = lean_ctor_get(v_x_311_, 2);
v_isSharedCheck_323_ = !lean_is_exclusive(v_x_311_);
if (v_isSharedCheck_323_ == 0)
{
v___x_316_ = v_x_311_;
v_isShared_317_ = v_isSharedCheck_323_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_remaining_314_);
lean_inc(v_idx_313_);
lean_inc(v_subgoals_312_);
lean_dec(v_x_311_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_323_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
v___x_318_ = lean_unsigned_to_nat(1u);
v___x_319_ = lean_nat_add(v_idx_313_, v___x_318_);
lean_dec(v_idx_313_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 1, v___x_319_);
v___x_321_ = v___x_316_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_subgoals_312_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v___x_319_);
lean_ctor_set(v_reuseFailAlloc_322_, 2, v_remaining_314_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
return v_x_311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(lean_object* v_mvarId_324_, lean_object* v_x_325_){
_start:
{
if (lean_obj_tag(v_x_325_) == 0)
{
lean_object* v_subgoals_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_334_; 
v_subgoals_326_ = lean_ctor_get(v_x_325_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v_x_325_);
if (v_isSharedCheck_334_ == 0)
{
v___x_328_ = v_x_325_;
v_isShared_329_ = v_isSharedCheck_334_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_subgoals_326_);
lean_dec(v_x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_334_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_330_ = lean_array_push(v_subgoals_326_, v_mvarId_324_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_330_);
v___x_332_ = v___x_328_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
lean_object* v_remaining_335_; 
v_remaining_335_ = lean_ctor_get(v_x_325_, 2);
if (lean_obj_tag(v_remaining_335_) == 1)
{
lean_object* v_head_336_; lean_object* v_subgoals_337_; lean_object* v_idx_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_358_; 
lean_inc_ref(v_remaining_335_);
v_head_336_ = lean_ctor_get(v_remaining_335_, 0);
lean_inc(v_head_336_);
v_subgoals_337_ = lean_ctor_get(v_x_325_, 0);
v_idx_338_ = lean_ctor_get(v_x_325_, 1);
v_isSharedCheck_358_ = !lean_is_exclusive(v_x_325_);
if (v_isSharedCheck_358_ == 0)
{
lean_object* v_unused_359_; 
v_unused_359_ = lean_ctor_get(v_x_325_, 2);
lean_dec(v_unused_359_);
v___x_340_ = v_x_325_;
v_isShared_341_ = v_isSharedCheck_358_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_idx_338_);
lean_inc(v_subgoals_337_);
lean_dec(v_x_325_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_358_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v_tail_342_; lean_object* v_snd_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_356_; 
v_tail_342_ = lean_ctor_get(v_remaining_335_, 1);
lean_inc(v_tail_342_);
lean_dec_ref_known(v_remaining_335_, 2);
v_snd_343_ = lean_ctor_get(v_head_336_, 1);
v_isSharedCheck_356_ = !lean_is_exclusive(v_head_336_);
if (v_isSharedCheck_356_ == 0)
{
lean_object* v_unused_357_; 
v_unused_357_ = lean_ctor_get(v_head_336_, 0);
lean_dec(v_unused_357_);
v___x_345_ = v_head_336_;
v_isShared_346_ = v_isSharedCheck_356_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_snd_343_);
lean_dec(v_head_336_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_356_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 1, v_mvarId_324_);
lean_ctor_set(v___x_345_, 0, v_snd_343_);
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_snd_343_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_mvarId_324_);
v___x_348_ = v_reuseFailAlloc_355_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_349_ = lean_array_push(v_subgoals_337_, v___x_348_);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_nat_add(v_idx_338_, v___x_350_);
lean_dec(v_idx_338_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 2, v_tail_342_);
lean_ctor_set(v___x_340_, 1, v___x_351_);
lean_ctor_set(v___x_340_, 0, v___x_349_);
v___x_353_ = v___x_340_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_354_, 2, v_tail_342_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
else
{
lean_dec(v_mvarId_324_);
return v_x_325_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(lean_object* v_as_360_, size_t v_sz_361_, size_t v_i_362_, lean_object* v_b_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
uint8_t v___x_369_; 
v___x_369_ = lean_usize_dec_lt(v_i_362_, v_sz_361_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; 
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v_b_363_);
return v___x_370_;
}
else
{
lean_object* v_a_371_; lean_object* v___x_372_; 
v_a_371_ = lean_array_uget_borrowed(v_as_360_, v_i_362_);
lean_inc(v_a_371_);
v___x_372_ = l_Lean_Meta_mkCongrFun(v_b_363_, v_a_371_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; size_t v___x_374_; size_t v___x_375_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_372_, 1);
v___x_374_ = ((size_t)1ULL);
v___x_375_ = lean_usize_add(v_i_362_, v___x_374_);
v_i_362_ = v___x_375_;
v_b_363_ = v_a_373_;
goto _start;
}
else
{
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg___boxed(lean_object* v_as_377_, lean_object* v_sz_378_, lean_object* v_i_379_, lean_object* v_b_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
size_t v_sz_boxed_386_; size_t v_i_boxed_387_; lean_object* v_res_388_; 
v_sz_boxed_386_ = lean_unbox_usize(v_sz_378_);
lean_dec(v_sz_378_);
v_i_boxed_387_ = lean_unbox_usize(v_i_379_);
lean_dec(v_i_379_);
v_res_388_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_as_377_, v_sz_boxed_386_, v_i_boxed_387_, v_b_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec_ref(v_as_377_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(lean_object* v_pattern_391_, lean_object* v_state_392_, lean_object* v_e_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = lean_st_ref_get(v_state_392_);
v___x_403_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(v___x_402_);
lean_dec(v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f(v_pattern_391_, v_e_393_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_471_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_471_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_471_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_471_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
if (lean_obj_tag(v_a_405_) == 1)
{
lean_object* v_val_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_466_; 
v_val_409_ = lean_ctor_get(v_a_405_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v_a_405_);
if (v_isSharedCheck_466_ == 0)
{
v___x_411_ = v_a_405_;
v_isShared_412_ = v_isSharedCheck_466_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_val_409_);
lean_dec(v_a_405_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_466_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_fst_413_; lean_object* v_snd_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v_fst_413_ = lean_ctor_get(v_val_409_, 0);
lean_inc(v_fst_413_);
v_snd_414_ = lean_ctor_get(v_val_409_, 1);
lean_inc(v_snd_414_);
lean_dec(v_val_409_);
v___x_415_ = lean_st_ref_get(v_state_392_);
v___x_416_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(v___x_415_);
lean_dec(v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
lean_dec(v_snd_414_);
lean_dec(v_fst_413_);
lean_del_object(v___x_411_);
v___x_417_ = lean_st_ref_take(v_state_392_);
v___x_418_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(v___x_417_);
v___x_419_ = lean_st_ref_put(v_state_392_, v___x_418_);
v___x_420_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0));
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_420_);
v___x_422_ = v___x_407_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_420_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
else
{
lean_object* v___x_424_; lean_object* v___x_425_; 
lean_del_object(v___x_407_);
v___x_424_ = lean_box(0);
v___x_425_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v_fst_413_, v___x_424_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v_fst_427_; lean_object* v_snd_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; size_t v_sz_433_; size_t v___x_434_; lean_object* v___x_435_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v_fst_427_ = lean_ctor_get(v_a_426_, 0);
lean_inc(v_fst_427_);
v_snd_428_ = lean_ctor_get(v_a_426_, 1);
lean_inc(v_snd_428_);
lean_dec(v_a_426_);
v___x_429_ = lean_st_ref_take(v_state_392_);
v___x_430_ = l_Lean_Expr_mvarId_x21(v_snd_428_);
v___x_431_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(v___x_430_, v___x_429_);
v___x_432_ = lean_st_ref_put(v_state_392_, v___x_431_);
v_sz_433_ = lean_array_size(v_snd_414_);
v___x_434_ = ((size_t)0ULL);
v___x_435_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_snd_414_, v_sz_433_, v___x_434_, v_snd_428_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_449_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_449_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_449_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_449_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_440_ = l_Lean_mkAppN(v_fst_427_, v_snd_414_);
lean_dec(v_snd_414_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v_a_436_);
v___x_442_ = v___x_411_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_436_);
v___x_442_ = v_reuseFailAlloc_448_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_443_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_443_, 0, v___x_440_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
lean_ctor_set_uint8(v___x_443_, sizeof(void*)*2, v___x_416_);
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_444_);
v___x_446_ = v___x_438_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
else
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
lean_dec(v_fst_427_);
lean_dec(v_snd_414_);
lean_del_object(v___x_411_);
v_a_450_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_435_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_435_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
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
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_dec(v_snd_414_);
lean_del_object(v___x_411_);
v_a_458_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_425_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_425_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
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
}
else
{
lean_object* v___x_467_; lean_object* v___x_469_; 
lean_dec(v_a_405_);
v___x_467_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0));
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_467_);
v___x_469_ = v___x_407_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
v_a_472_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_404_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_404_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec_ref(v_pattern_391_);
v___x_480_ = lean_box(0);
v___x_481_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_481_, 0, v_e_393_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*2, v___x_403_);
v___x_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed(lean_object* v_pattern_484_, lean_object* v_state_485_, lean_object* v_e_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(v_pattern_484_, v_state_485_, v_e_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec(v_state_485_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(lean_object* v_as_496_, size_t v_sz_497_, size_t v_i_498_, lean_object* v_b_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_as_496_, v_sz_497_, v_i_498_, v_b_499_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___boxed(lean_object* v_as_509_, lean_object* v_sz_510_, lean_object* v_i_511_, lean_object* v_b_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
size_t v_sz_boxed_521_; size_t v_i_boxed_522_; lean_object* v_res_523_; 
v_sz_boxed_521_ = lean_unbox_usize(v_sz_510_);
lean_dec(v_sz_510_);
v_i_boxed_522_ = lean_unbox_usize(v_i_511_);
lean_dec(v_i_511_);
v_res_523_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(v_as_509_, v_sz_boxed_521_, v_i_boxed_522_, v_b_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v_as_509_);
return v_res_523_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_524_ = lean_box(0);
v___x_525_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
lean_ctor_set(v___x_526_, 1, v___x_524_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg(){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0);
v___x_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___boxed(lean_object* v___y_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(lean_object* v_00_u03b1_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___boxed(lean_object* v_00_u03b1_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(v_00_u03b1_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(lean_object* v_a_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg___boxed(lean_object* v_a_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(v_a_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(lean_object* v_00_u03b1_572_, lean_object* v_a_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___boxed(lean_object* v_00_u03b1_582_, lean_object* v_a_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(v_00_u03b1_582_, v_a_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(lean_object* v_e_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v_e_592_);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed(lean_object* v_e_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(v_e_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(lean_object* v___x_613_, uint8_t v___x_614_, lean_object* v_e_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_624_, 0, v_e_615_);
lean_ctor_set(v___x_624_, 1, v___x_613_);
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*2, v___x_614_);
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed(lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v_e_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
uint8_t v___x_16838__boxed_638_; lean_object* v_res_639_; 
v___x_16838__boxed_638_ = lean_unbox(v___x_628_);
v_res_639_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(v___x_627_, v___x_16838__boxed_638_, v_e_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(lean_object* v___x_640_, lean_object* v_x_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_650_, 0, v___x_640_);
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed(lean_object* v___x_652_, lean_object* v_x_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(v___x_652_, v_x_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v_x_653_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(lean_object* v___x_663_, lean_object* v_x_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_663_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed(lean_object* v___x_674_, lean_object* v_x_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(v___x_674_, v_x_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v_x_675_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(lean_object* v___x_685_, lean_object* v___x_686_, uint8_t v___x_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Lean_Elab_Term_elabTerm(v___x_685_, v___x_686_, v___x_687_, v___x_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_697_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_696_);
lean_dec_ref_known(v___x_695_, 1);
v___x_697_ = l_Lean_Meta_abstractMVars(v_a_696_, v___x_687_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
return v___x_697_;
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v_a_698_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_695_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_695_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed(lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v___x_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
uint8_t v___x_16941__boxed_716_; lean_object* v_res_717_; 
v___x_16941__boxed_716_ = lean_unbox(v___x_708_);
v_res_717_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(v___x_706_, v___x_707_, v___x_16941__boxed_716_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(lean_object* v___x_718_, lean_object* v___f_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_toCold_727_; lean_object* v_currRecDepth_728_; lean_object* v_ref_729_; uint16_t v_optionFlags_730_; uint8_t v_suppressElabErrors_731_; uint8_t v_checkDeprecated_732_; uint8_t v_isRecordingDeps_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_742_; 
v_toCold_727_ = lean_ctor_get(v___y_724_, 0);
v_currRecDepth_728_ = lean_ctor_get(v___y_724_, 1);
v_ref_729_ = lean_ctor_get(v___y_724_, 2);
v_optionFlags_730_ = lean_ctor_get_uint16(v___y_724_, sizeof(void*)*3);
v_suppressElabErrors_731_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*3 + 2);
v_checkDeprecated_732_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*3 + 3);
v_isRecordingDeps_733_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*3 + 4);
v_isSharedCheck_742_ = !lean_is_exclusive(v___y_724_);
if (v_isSharedCheck_742_ == 0)
{
v___x_735_ = v___y_724_;
v_isShared_736_ = v_isSharedCheck_742_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_ref_729_);
lean_inc(v_currRecDepth_728_);
lean_inc(v_toCold_727_);
lean_dec(v___y_724_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_742_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_ref_737_; lean_object* v___x_739_; 
v_ref_737_ = l_Lean_replaceRef(v___x_718_, v_ref_729_);
lean_dec(v_ref_729_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 2, v_ref_737_);
v___x_739_ = v___x_735_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_toCold_727_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_currRecDepth_728_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v_ref_737_);
lean_ctor_set_uint16(v_reuseFailAlloc_741_, sizeof(void*)*3, v_optionFlags_730_);
lean_ctor_set_uint8(v_reuseFailAlloc_741_, sizeof(void*)*3 + 2, v_suppressElabErrors_731_);
lean_ctor_set_uint8(v_reuseFailAlloc_741_, sizeof(void*)*3 + 3, v_checkDeprecated_732_);
lean_ctor_set_uint8(v_reuseFailAlloc_741_, sizeof(void*)*3 + 4, v_isRecordingDeps_733_);
v___x_739_ = v_reuseFailAlloc_741_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_740_; 
v___x_740_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___f_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___x_739_, v___y_725_);
lean_dec_ref(v___x_739_);
return v___x_740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed(lean_object* v___x_743_, lean_object* v___f_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(v___x_743_, v___f_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
lean_dec(v___y_750_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___x_743_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(size_t v_sz_753_, size_t v_i_754_, lean_object* v_bs_755_){
_start:
{
uint8_t v___x_756_; 
v___x_756_ = lean_usize_dec_lt(v_i_754_, v_sz_753_);
if (v___x_756_ == 0)
{
return v_bs_755_;
}
else
{
lean_object* v_v_757_; lean_object* v_snd_758_; lean_object* v___x_759_; lean_object* v_bs_x27_760_; size_t v___x_761_; size_t v___x_762_; lean_object* v___x_763_; 
v_v_757_ = lean_array_uget_borrowed(v_bs_755_, v_i_754_);
v_snd_758_ = lean_ctor_get(v_v_757_, 1);
lean_inc(v_snd_758_);
v___x_759_ = lean_unsigned_to_nat(0u);
v_bs_x27_760_ = lean_array_uset(v_bs_755_, v_i_754_, v___x_759_);
v___x_761_ = ((size_t)1ULL);
v___x_762_ = lean_usize_add(v_i_754_, v___x_761_);
v___x_763_ = lean_array_uset(v_bs_x27_760_, v_i_754_, v_snd_758_);
v_i_754_ = v___x_762_;
v_bs_755_ = v___x_763_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5___boxed(lean_object* v_sz_765_, lean_object* v_i_766_, lean_object* v_bs_767_){
_start:
{
size_t v_sz_boxed_768_; size_t v_i_boxed_769_; lean_object* v_res_770_; 
v_sz_boxed_768_ = lean_unbox_usize(v_sz_765_);
lean_dec(v_sz_765_);
v_i_boxed_769_ = lean_unbox_usize(v_i_766_);
lean_dec(v_i_766_);
v_res_770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(v_sz_boxed_768_, v_i_boxed_769_, v_bs_767_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(lean_object* v_msgData_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v___x_777_; lean_object* v_env_778_; uint8_t v___x_779_; lean_object* v_env_780_; lean_object* v___x_781_; lean_object* v_toCold_782_; lean_object* v_mctx_783_; lean_object* v_lctx_784_; lean_object* v_options_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_777_ = lean_st_ref_get(v___y_775_);
v_env_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc_ref(v_env_778_);
lean_dec(v___x_777_);
v___x_779_ = 0;
v_env_780_ = l_Lean_Environment_setRecordingDeps(v_env_778_, v___x_779_);
v___x_781_ = lean_st_ref_get(v___y_773_);
v_toCold_782_ = lean_ctor_get(v___y_774_, 0);
v_mctx_783_ = lean_ctor_get(v___x_781_, 0);
lean_inc_ref(v_mctx_783_);
lean_dec(v___x_781_);
v_lctx_784_ = lean_ctor_get(v___y_772_, 2);
v_options_785_ = lean_ctor_get(v_toCold_782_, 2);
lean_inc_ref(v_options_785_);
lean_inc_ref(v_lctx_784_);
v___x_786_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_786_, 0, v_env_780_);
lean_ctor_set(v___x_786_, 1, v_mctx_783_);
lean_ctor_set(v___x_786_, 2, v_lctx_784_);
lean_ctor_set(v___x_786_, 3, v_options_785_);
v___x_787_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
lean_ctor_set(v___x_787_, 1, v_msgData_771_);
v___x_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5___boxed(lean_object* v_msgData_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(v_msgData_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(lean_object* v_msg_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_ref_802_; lean_object* v___x_803_; lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_812_; 
v_ref_802_ = lean_ctor_get(v___y_799_, 2);
v___x_803_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(v_msg_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_812_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_808_; lean_object* v___x_810_; 
lean_inc(v_ref_802_);
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v_ref_802_);
lean_ctor_set(v___x_808_, 1, v_a_804_);
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 1);
lean_ctor_set(v___x_806_, 0, v___x_808_);
v___x_810_ = v___x_806_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg___boxed(lean_object* v_msg_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(lean_object* v_ref_820_, lean_object* v_msg_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_toCold_831_; lean_object* v_currRecDepth_832_; lean_object* v_ref_833_; uint16_t v_optionFlags_834_; uint8_t v_suppressElabErrors_835_; uint8_t v_checkDeprecated_836_; uint8_t v_isRecordingDeps_837_; lean_object* v_ref_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v_toCold_831_ = lean_ctor_get(v___y_828_, 0);
v_currRecDepth_832_ = lean_ctor_get(v___y_828_, 1);
v_ref_833_ = lean_ctor_get(v___y_828_, 2);
v_optionFlags_834_ = lean_ctor_get_uint16(v___y_828_, sizeof(void*)*3);
v_suppressElabErrors_835_ = lean_ctor_get_uint8(v___y_828_, sizeof(void*)*3 + 2);
v_checkDeprecated_836_ = lean_ctor_get_uint8(v___y_828_, sizeof(void*)*3 + 3);
v_isRecordingDeps_837_ = lean_ctor_get_uint8(v___y_828_, sizeof(void*)*3 + 4);
v_ref_838_ = l_Lean_replaceRef(v_ref_820_, v_ref_833_);
lean_inc(v_currRecDepth_832_);
lean_inc_ref(v_toCold_831_);
v___x_839_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_839_, 0, v_toCold_831_);
lean_ctor_set(v___x_839_, 1, v_currRecDepth_832_);
lean_ctor_set(v___x_839_, 2, v_ref_838_);
lean_ctor_set_uint16(v___x_839_, sizeof(void*)*3, v_optionFlags_834_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*3 + 2, v_suppressElabErrors_835_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*3 + 3, v_checkDeprecated_836_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*3 + 4, v_isRecordingDeps_837_);
v___x_840_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_821_, v___y_826_, v___y_827_, v___x_839_, v___y_829_);
lean_dec_ref_known(v___x_839_, 3);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___boxed(lean_object* v_ref_841_, lean_object* v_msg_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(v_ref_841_, v_msg_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec(v_ref_841_);
return v_res_852_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0));
v___x_855_ = l_Lean_stringToMessageData(v___x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(size_t v_sz_856_, size_t v_i_857_, lean_object* v_bs_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
uint8_t v___x_868_; 
v___x_868_ = lean_usize_dec_lt(v_i_857_, v_sz_856_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; 
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v_bs_858_);
return v___x_869_;
}
else
{
lean_object* v_v_870_; lean_object* v___x_871_; lean_object* v_bs_x27_872_; lean_object* v_a_874_; lean_object* v___x_879_; uint8_t v_isZero_880_; 
v_v_870_ = lean_array_uget(v_bs_858_, v_i_857_);
v___x_871_ = lean_unsigned_to_nat(0u);
v_bs_x27_872_ = lean_array_uset(v_bs_858_, v_i_857_, v___x_871_);
v___x_879_ = l_Lean_TSyntax_getNat(v_v_870_);
v_isZero_880_ = lean_nat_dec_eq(v___x_879_, v___x_871_);
if (v_isZero_880_ == 1)
{
lean_object* v___x_881_; lean_object* v___x_882_; 
lean_dec(v___x_879_);
v___x_881_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1);
v___x_882_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(v_v_870_, v___x_881_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
lean_dec(v_v_870_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref_known(v___x_882_, 1);
v_a_874_ = v_a_883_;
goto v___jp_873_;
}
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec_ref(v_bs_x27_872_);
v_a_884_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_882_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_882_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
else
{
lean_object* v___x_892_; lean_object* v_one_893_; lean_object* v_n_894_; lean_object* v___x_895_; 
lean_dec(v_v_870_);
v___x_892_ = lean_usize_to_nat(v_i_857_);
v_one_893_ = lean_unsigned_to_nat(1u);
v_n_894_ = lean_nat_sub(v___x_879_, v_one_893_);
lean_dec(v___x_879_);
v___x_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_895_, 0, v_n_894_);
lean_ctor_set(v___x_895_, 1, v___x_892_);
v_a_874_ = v___x_895_;
goto v___jp_873_;
}
v___jp_873_:
{
size_t v___x_875_; size_t v___x_876_; lean_object* v___x_877_; 
v___x_875_ = ((size_t)1ULL);
v___x_876_ = lean_usize_add(v_i_857_, v___x_875_);
v___x_877_ = lean_array_uset(v_bs_x27_872_, v_i_857_, v_a_874_);
v_i_857_ = v___x_876_;
v_bs_858_ = v___x_877_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___boxed(lean_object* v_sz_896_, lean_object* v_i_897_, lean_object* v_bs_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
size_t v_sz_boxed_908_; size_t v_i_boxed_909_; lean_object* v_res_910_; 
v_sz_boxed_908_ = lean_unbox_usize(v_sz_896_);
lean_dec(v_sz_896_);
v_i_boxed_909_ = lean_unbox_usize(v_i_897_);
lean_dec(v_i_897_);
v_res_910_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v_sz_boxed_908_, v_i_boxed_909_, v_bs_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(lean_object* v_hi_911_, lean_object* v_pivot_912_, lean_object* v_as_913_, lean_object* v_i_914_, lean_object* v_k_915_){
_start:
{
uint8_t v___x_916_; 
v___x_916_ = lean_nat_dec_lt(v_k_915_, v_hi_911_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; lean_object* v___x_918_; 
lean_dec(v_k_915_);
v___x_917_ = lean_array_fswap(v_as_913_, v_i_914_, v_hi_911_);
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v_i_914_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
return v___x_918_;
}
else
{
lean_object* v___x_919_; lean_object* v_fst_920_; lean_object* v_fst_921_; uint8_t v___x_922_; 
v___x_919_ = lean_array_fget_borrowed(v_as_913_, v_k_915_);
v_fst_920_ = lean_ctor_get(v___x_919_, 0);
v_fst_921_ = lean_ctor_get(v_pivot_912_, 0);
v___x_922_ = lean_nat_dec_lt(v_fst_920_, v_fst_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = lean_unsigned_to_nat(1u);
v___x_924_ = lean_nat_add(v_k_915_, v___x_923_);
lean_dec(v_k_915_);
v_k_915_ = v___x_924_;
goto _start;
}
else
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_926_ = lean_array_fswap(v_as_913_, v_i_914_, v_k_915_);
v___x_927_ = lean_unsigned_to_nat(1u);
v___x_928_ = lean_nat_add(v_i_914_, v___x_927_);
lean_dec(v_i_914_);
v___x_929_ = lean_nat_add(v_k_915_, v___x_927_);
lean_dec(v_k_915_);
v_as_913_ = v___x_926_;
v_i_914_ = v___x_928_;
v_k_915_ = v___x_929_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg___boxed(lean_object* v_hi_931_, lean_object* v_pivot_932_, lean_object* v_as_933_, lean_object* v_i_934_, lean_object* v_k_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_931_, v_pivot_932_, v_as_933_, v_i_934_, v_k_935_);
lean_dec_ref(v_pivot_932_);
lean_dec(v_hi_931_);
return v_res_936_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(lean_object* v_x1_937_, lean_object* v_x2_938_){
_start:
{
lean_object* v_fst_939_; lean_object* v_fst_940_; uint8_t v___x_941_; 
v_fst_939_ = lean_ctor_get(v_x1_937_, 0);
v_fst_940_ = lean_ctor_get(v_x2_938_, 0);
v___x_941_ = lean_nat_dec_lt(v_fst_939_, v_fst_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0___boxed(lean_object* v_x1_942_, lean_object* v_x2_943_){
_start:
{
uint8_t v_res_944_; lean_object* v_r_945_; 
v_res_944_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v_x1_942_, v_x2_943_);
lean_dec_ref(v_x2_943_);
lean_dec_ref(v_x1_942_);
v_r_945_ = lean_box(v_res_944_);
return v_r_945_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(lean_object* v_n_946_, lean_object* v_as_947_, lean_object* v_lo_948_, lean_object* v_hi_949_){
_start:
{
lean_object* v___y_951_; uint8_t v___x_961_; 
v___x_961_ = lean_nat_dec_lt(v_lo_948_, v_hi_949_);
if (v___x_961_ == 0)
{
lean_dec(v_lo_948_);
return v_as_947_;
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v_mid_964_; lean_object* v___y_966_; lean_object* v___y_972_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_962_ = lean_nat_add(v_lo_948_, v_hi_949_);
v___x_963_ = lean_unsigned_to_nat(1u);
v_mid_964_ = lean_nat_shiftr(v___x_962_, v___x_963_);
lean_dec(v___x_962_);
v___x_977_ = lean_array_fget_borrowed(v_as_947_, v_mid_964_);
v___x_978_ = lean_array_fget_borrowed(v_as_947_, v_lo_948_);
v___x_979_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
v___y_972_ = v_as_947_;
goto v___jp_971_;
}
else
{
lean_object* v___x_980_; 
v___x_980_ = lean_array_fswap(v_as_947_, v_lo_948_, v_mid_964_);
v___y_972_ = v___x_980_;
goto v___jp_971_;
}
v___jp_965_:
{
lean_object* v___x_967_; lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_967_ = lean_array_fget_borrowed(v___y_966_, v_mid_964_);
v___x_968_ = lean_array_fget_borrowed(v___y_966_, v_hi_949_);
v___x_969_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_967_, v___x_968_);
if (v___x_969_ == 0)
{
lean_dec(v_mid_964_);
v___y_951_ = v___y_966_;
goto v___jp_950_;
}
else
{
lean_object* v___x_970_; 
v___x_970_ = lean_array_fswap(v___y_966_, v_mid_964_, v_hi_949_);
lean_dec(v_mid_964_);
v___y_951_ = v___x_970_;
goto v___jp_950_;
}
}
v___jp_971_:
{
lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_973_ = lean_array_fget_borrowed(v___y_972_, v_hi_949_);
v___x_974_ = lean_array_fget_borrowed(v___y_972_, v_lo_948_);
v___x_975_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_973_, v___x_974_);
if (v___x_975_ == 0)
{
v___y_966_ = v___y_972_;
goto v___jp_965_;
}
else
{
lean_object* v___x_976_; 
v___x_976_ = lean_array_fswap(v___y_972_, v_lo_948_, v_hi_949_);
v___y_966_ = v___x_976_;
goto v___jp_965_;
}
}
}
v___jp_950_:
{
lean_object* v_pivot_952_; lean_object* v___x_953_; lean_object* v_fst_954_; lean_object* v_snd_955_; uint8_t v___x_956_; 
v_pivot_952_ = lean_array_fget(v___y_951_, v_hi_949_);
lean_inc_n(v_lo_948_, 2);
v___x_953_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_949_, v_pivot_952_, v___y_951_, v_lo_948_, v_lo_948_);
lean_dec(v_pivot_952_);
v_fst_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_fst_954_);
v_snd_955_ = lean_ctor_get(v___x_953_, 1);
lean_inc(v_snd_955_);
lean_dec_ref(v___x_953_);
v___x_956_ = lean_nat_dec_le(v_hi_949_, v_fst_954_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_946_, v_snd_955_, v_lo_948_, v_fst_954_);
v___x_958_ = lean_unsigned_to_nat(1u);
v___x_959_ = lean_nat_add(v_fst_954_, v___x_958_);
lean_dec(v_fst_954_);
v_as_947_ = v___x_957_;
v_lo_948_ = v___x_959_;
goto _start;
}
else
{
lean_dec(v_fst_954_);
lean_dec(v_lo_948_);
return v_snd_955_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___boxed(lean_object* v_n_981_, lean_object* v_as_982_, lean_object* v_lo_983_, lean_object* v_hi_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_981_, v_as_982_, v_lo_983_, v_hi_984_);
lean_dec(v_hi_984_);
lean_dec(v_n_981_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(lean_object* v_x_986_, lean_object* v_x_987_, lean_object* v_x_988_, lean_object* v_x_989_){
_start:
{
lean_object* v_ks_990_; lean_object* v_vs_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1015_; 
v_ks_990_ = lean_ctor_get(v_x_986_, 0);
v_vs_991_ = lean_ctor_get(v_x_986_, 1);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_x_986_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_993_ = v_x_986_;
v_isShared_994_ = v_isSharedCheck_1015_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_vs_991_);
lean_inc(v_ks_990_);
lean_dec(v_x_986_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1015_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_995_ = lean_array_get_size(v_ks_990_);
v___x_996_ = lean_nat_dec_lt(v_x_987_, v___x_995_);
if (v___x_996_ == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_1000_; 
lean_dec(v_x_987_);
v___x_997_ = lean_array_push(v_ks_990_, v_x_988_);
v___x_998_ = lean_array_push(v_vs_991_, v_x_989_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 1, v___x_998_);
lean_ctor_set(v___x_993_, 0, v___x_997_);
v___x_1000_ = v___x_993_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v___x_998_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
else
{
lean_object* v_k_x27_1002_; uint8_t v___x_1003_; 
v_k_x27_1002_ = lean_array_fget_borrowed(v_ks_990_, v_x_987_);
v___x_1003_ = l_Lean_instBEqMVarId_beq(v_x_988_, v_k_x27_1002_);
if (v___x_1003_ == 0)
{
lean_object* v___x_1005_; 
if (v_isShared_994_ == 0)
{
v___x_1005_ = v___x_993_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_ks_990_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_vs_991_);
v___x_1005_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_unsigned_to_nat(1u);
v___x_1007_ = lean_nat_add(v_x_987_, v___x_1006_);
lean_dec(v_x_987_);
v_x_986_ = v___x_1005_;
v_x_987_ = v___x_1007_;
goto _start;
}
}
else
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1010_ = lean_array_fset(v_ks_990_, v_x_987_, v_x_988_);
v___x_1011_ = lean_array_fset(v_vs_991_, v_x_987_, v_x_989_);
lean_dec(v_x_987_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 1, v___x_1011_);
lean_ctor_set(v___x_993_, 0, v___x_1010_);
v___x_1013_ = v___x_993_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v___x_1011_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(lean_object* v_n_1016_, lean_object* v_k_1017_, lean_object* v_v_1018_){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(v_n_1016_, v___x_1019_, v_k_1017_, v_v_1018_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(lean_object* v_x_1022_, size_t v_x_1023_, size_t v_x_1024_, lean_object* v_x_1025_, lean_object* v_x_1026_){
_start:
{
if (lean_obj_tag(v_x_1022_) == 0)
{
lean_object* v_es_1027_; size_t v___x_1028_; size_t v___x_1029_; lean_object* v_j_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v_es_1027_ = lean_ctor_get(v_x_1022_, 0);
v___x_1028_ = ((size_t)31ULL);
v___x_1029_ = lean_usize_land(v_x_1023_, v___x_1028_);
v_j_1030_ = lean_usize_to_nat(v___x_1029_);
v___x_1031_ = lean_array_get_size(v_es_1027_);
v___x_1032_ = lean_nat_dec_lt(v_j_1030_, v___x_1031_);
if (v___x_1032_ == 0)
{
lean_dec(v_j_1030_);
lean_dec(v_x_1026_);
lean_dec(v_x_1025_);
return v_x_1022_;
}
else
{
lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1071_; 
lean_inc_ref(v_es_1027_);
v_isSharedCheck_1071_ = !lean_is_exclusive(v_x_1022_);
if (v_isSharedCheck_1071_ == 0)
{
lean_object* v_unused_1072_; 
v_unused_1072_ = lean_ctor_get(v_x_1022_, 0);
lean_dec(v_unused_1072_);
v___x_1034_ = v_x_1022_;
v_isShared_1035_ = v_isSharedCheck_1071_;
goto v_resetjp_1033_;
}
else
{
lean_dec(v_x_1022_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1071_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v_v_1036_; lean_object* v___x_1037_; lean_object* v_xs_x27_1038_; lean_object* v___y_1040_; 
v_v_1036_ = lean_array_fget(v_es_1027_, v_j_1030_);
v___x_1037_ = lean_box(0);
v_xs_x27_1038_ = lean_array_fset(v_es_1027_, v_j_1030_, v___x_1037_);
switch(lean_obj_tag(v_v_1036_))
{
case 0:
{
lean_object* v_key_1045_; lean_object* v_val_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1056_; 
v_key_1045_ = lean_ctor_get(v_v_1036_, 0);
v_val_1046_ = lean_ctor_get(v_v_1036_, 1);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_v_1036_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1048_ = v_v_1036_;
v_isShared_1049_ = v_isSharedCheck_1056_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_val_1046_);
lean_inc(v_key_1045_);
lean_dec(v_v_1036_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1056_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
uint8_t v___x_1050_; 
v___x_1050_ = l_Lean_instBEqMVarId_beq(v_x_1025_, v_key_1045_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_del_object(v___x_1048_);
v___x_1051_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1045_, v_val_1046_, v_x_1025_, v_x_1026_);
v___x_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
v___y_1040_ = v___x_1052_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1054_; 
lean_dec(v_val_1046_);
lean_dec(v_key_1045_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 1, v_x_1026_);
lean_ctor_set(v___x_1048_, 0, v_x_1025_);
v___x_1054_ = v___x_1048_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_x_1025_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v_x_1026_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
v___y_1040_ = v___x_1054_;
goto v___jp_1039_;
}
}
}
}
case 1:
{
lean_object* v_node_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1069_; 
v_node_1057_ = lean_ctor_get(v_v_1036_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_v_1036_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1059_ = v_v_1036_;
v_isShared_1060_ = v_isSharedCheck_1069_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_node_1057_);
lean_dec(v_v_1036_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1069_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
size_t v___x_1061_; size_t v___x_1062_; size_t v___x_1063_; size_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1067_; 
v___x_1061_ = ((size_t)5ULL);
v___x_1062_ = lean_usize_shift_right(v_x_1023_, v___x_1061_);
v___x_1063_ = ((size_t)1ULL);
v___x_1064_ = lean_usize_add(v_x_1024_, v___x_1063_);
v___x_1065_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_node_1057_, v___x_1062_, v___x_1064_, v_x_1025_, v_x_1026_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1065_);
v___x_1067_ = v___x_1059_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1065_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
v___y_1040_ = v___x_1067_;
goto v___jp_1039_;
}
}
}
default: 
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v_x_1025_);
lean_ctor_set(v___x_1070_, 1, v_x_1026_);
v___y_1040_ = v___x_1070_;
goto v___jp_1039_;
}
}
v___jp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1041_ = lean_array_fset(v_xs_x27_1038_, v_j_1030_, v___y_1040_);
lean_dec(v_j_1030_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1041_);
v___x_1043_ = v___x_1034_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1041_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
}
else
{
lean_object* v_ks_1073_; lean_object* v_vs_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1092_; 
v_ks_1073_ = lean_ctor_get(v_x_1022_, 0);
v_vs_1074_ = lean_ctor_get(v_x_1022_, 1);
v_isSharedCheck_1092_ = !lean_is_exclusive(v_x_1022_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1076_ = v_x_1022_;
v_isShared_1077_ = v_isSharedCheck_1092_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_vs_1074_);
lean_inc(v_ks_1073_);
lean_dec(v_x_1022_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1092_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_ks_1073_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v_vs_1074_);
v___x_1079_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v_newNode_1080_; size_t v___x_1081_; uint8_t v___x_1082_; 
v_newNode_1080_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(v___x_1079_, v_x_1025_, v_x_1026_);
v___x_1081_ = ((size_t)7ULL);
v___x_1082_ = lean_usize_dec_le(v___x_1081_, v_x_1024_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; 
v___x_1083_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1080_);
v___x_1084_ = lean_unsigned_to_nat(4u);
v___x_1085_ = lean_nat_dec_lt(v___x_1083_, v___x_1084_);
lean_dec(v___x_1083_);
if (v___x_1085_ == 0)
{
lean_object* v_ks_1086_; lean_object* v_vs_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_ks_1086_ = lean_ctor_get(v_newNode_1080_, 0);
lean_inc_ref(v_ks_1086_);
v_vs_1087_ = lean_ctor_get(v_newNode_1080_, 1);
lean_inc_ref(v_vs_1087_);
lean_dec_ref(v_newNode_1080_);
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0);
v___x_1090_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_x_1024_, v_ks_1086_, v_vs_1087_, v___x_1088_, v___x_1089_);
lean_dec_ref(v_vs_1087_);
lean_dec_ref(v_ks_1086_);
return v___x_1090_;
}
else
{
return v_newNode_1080_;
}
}
else
{
return v_newNode_1080_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(size_t v_depth_1093_, lean_object* v_keys_1094_, lean_object* v_vals_1095_, lean_object* v_i_1096_, lean_object* v_entries_1097_){
_start:
{
lean_object* v___x_1098_; uint8_t v___x_1099_; 
v___x_1098_ = lean_array_get_size(v_keys_1094_);
v___x_1099_ = lean_nat_dec_lt(v_i_1096_, v___x_1098_);
if (v___x_1099_ == 0)
{
lean_dec(v_i_1096_);
return v_entries_1097_;
}
else
{
lean_object* v_k_1100_; lean_object* v_v_1101_; uint64_t v___x_1102_; size_t v_h_1103_; size_t v___x_1104_; lean_object* v___x_1105_; size_t v___x_1106_; size_t v___x_1107_; size_t v___x_1108_; size_t v_h_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v_k_1100_ = lean_array_fget_borrowed(v_keys_1094_, v_i_1096_);
v_v_1101_ = lean_array_fget_borrowed(v_vals_1095_, v_i_1096_);
v___x_1102_ = l_Lean_instHashableMVarId_hash(v_k_1100_);
v_h_1103_ = lean_uint64_to_usize(v___x_1102_);
v___x_1104_ = ((size_t)5ULL);
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = ((size_t)1ULL);
v___x_1107_ = lean_usize_sub(v_depth_1093_, v___x_1106_);
v___x_1108_ = lean_usize_mul(v___x_1104_, v___x_1107_);
v_h_1109_ = lean_usize_shift_right(v_h_1103_, v___x_1108_);
v___x_1110_ = lean_nat_add(v_i_1096_, v___x_1105_);
lean_dec(v_i_1096_);
lean_inc(v_v_1101_);
lean_inc(v_k_1100_);
v___x_1111_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_entries_1097_, v_h_1109_, v_depth_1093_, v_k_1100_, v_v_1101_);
v_i_1096_ = v___x_1110_;
v_entries_1097_ = v___x_1111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg___boxed(lean_object* v_depth_1113_, lean_object* v_keys_1114_, lean_object* v_vals_1115_, lean_object* v_i_1116_, lean_object* v_entries_1117_){
_start:
{
size_t v_depth_boxed_1118_; lean_object* v_res_1119_; 
v_depth_boxed_1118_ = lean_unbox_usize(v_depth_1113_);
lean_dec(v_depth_1113_);
v_res_1119_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_depth_boxed_1118_, v_keys_1114_, v_vals_1115_, v_i_1116_, v_entries_1117_);
lean_dec_ref(v_vals_1115_);
lean_dec_ref(v_keys_1114_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_x_1120_, lean_object* v_x_1121_, lean_object* v_x_1122_, lean_object* v_x_1123_, lean_object* v_x_1124_){
_start:
{
size_t v_x_17393__boxed_1125_; size_t v_x_17394__boxed_1126_; lean_object* v_res_1127_; 
v_x_17393__boxed_1125_ = lean_unbox_usize(v_x_1121_);
lean_dec(v_x_1121_);
v_x_17394__boxed_1126_ = lean_unbox_usize(v_x_1122_);
lean_dec(v_x_1122_);
v_res_1127_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_1120_, v_x_17393__boxed_1125_, v_x_17394__boxed_1126_, v_x_1123_, v_x_1124_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(lean_object* v_x_1128_, lean_object* v_x_1129_, lean_object* v_x_1130_){
_start:
{
uint64_t v___x_1131_; size_t v___x_1132_; size_t v___x_1133_; lean_object* v___x_1134_; 
v___x_1131_ = l_Lean_instHashableMVarId_hash(v_x_1129_);
v___x_1132_ = lean_uint64_to_usize(v___x_1131_);
v___x_1133_ = ((size_t)1ULL);
v___x_1134_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_1128_, v___x_1132_, v___x_1133_, v_x_1129_, v_x_1130_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(lean_object* v_mvarId_1135_, lean_object* v_val_1136_, lean_object* v___y_1137_){
_start:
{
lean_object* v___x_1139_; lean_object* v_mctx_1140_; lean_object* v_cache_1141_; lean_object* v_zetaDeltaFVarIds_1142_; lean_object* v_postponed_1143_; lean_object* v_diag_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1173_; 
v___x_1139_ = lean_st_ref_take(v___y_1137_);
v_mctx_1140_ = lean_ctor_get(v___x_1139_, 0);
v_cache_1141_ = lean_ctor_get(v___x_1139_, 1);
v_zetaDeltaFVarIds_1142_ = lean_ctor_get(v___x_1139_, 2);
v_postponed_1143_ = lean_ctor_get(v___x_1139_, 3);
v_diag_1144_ = lean_ctor_get(v___x_1139_, 4);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1146_ = v___x_1139_;
v_isShared_1147_ = v_isSharedCheck_1173_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_diag_1144_);
lean_inc(v_postponed_1143_);
lean_inc(v_zetaDeltaFVarIds_1142_);
lean_inc(v_cache_1141_);
lean_inc(v_mctx_1140_);
lean_dec(v___x_1139_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1173_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_depth_1148_; lean_object* v_levelAssignDepth_1149_; lean_object* v_lmvarCounter_1150_; lean_object* v_mvarCounter_1151_; lean_object* v_lDecls_1152_; lean_object* v_decls_1153_; lean_object* v_userNames_1154_; lean_object* v_lAssignment_1155_; lean_object* v_eAssignment_1156_; lean_object* v_dAssignment_1157_; lean_object* v_instanceTypedMVars_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1172_; 
v_depth_1148_ = lean_ctor_get(v_mctx_1140_, 0);
v_levelAssignDepth_1149_ = lean_ctor_get(v_mctx_1140_, 1);
v_lmvarCounter_1150_ = lean_ctor_get(v_mctx_1140_, 2);
v_mvarCounter_1151_ = lean_ctor_get(v_mctx_1140_, 3);
v_lDecls_1152_ = lean_ctor_get(v_mctx_1140_, 4);
v_decls_1153_ = lean_ctor_get(v_mctx_1140_, 5);
v_userNames_1154_ = lean_ctor_get(v_mctx_1140_, 6);
v_lAssignment_1155_ = lean_ctor_get(v_mctx_1140_, 7);
v_eAssignment_1156_ = lean_ctor_get(v_mctx_1140_, 8);
v_dAssignment_1157_ = lean_ctor_get(v_mctx_1140_, 9);
v_instanceTypedMVars_1158_ = lean_ctor_get(v_mctx_1140_, 10);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_mctx_1140_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1160_ = v_mctx_1140_;
v_isShared_1161_ = v_isSharedCheck_1172_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_instanceTypedMVars_1158_);
lean_inc(v_dAssignment_1157_);
lean_inc(v_eAssignment_1156_);
lean_inc(v_lAssignment_1155_);
lean_inc(v_userNames_1154_);
lean_inc(v_decls_1153_);
lean_inc(v_lDecls_1152_);
lean_inc(v_mvarCounter_1151_);
lean_inc(v_lmvarCounter_1150_);
lean_inc(v_levelAssignDepth_1149_);
lean_inc(v_depth_1148_);
lean_dec(v_mctx_1140_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1172_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1162_ = lean_box(0);
v___x_1163_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(v_eAssignment_1156_, v_mvarId_1135_, v_val_1136_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 8, v___x_1163_);
v___x_1165_ = v___x_1160_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_depth_1148_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_levelAssignDepth_1149_);
lean_ctor_set(v_reuseFailAlloc_1171_, 2, v_lmvarCounter_1150_);
lean_ctor_set(v_reuseFailAlloc_1171_, 3, v_mvarCounter_1151_);
lean_ctor_set(v_reuseFailAlloc_1171_, 4, v_lDecls_1152_);
lean_ctor_set(v_reuseFailAlloc_1171_, 5, v_decls_1153_);
lean_ctor_set(v_reuseFailAlloc_1171_, 6, v_userNames_1154_);
lean_ctor_set(v_reuseFailAlloc_1171_, 7, v_lAssignment_1155_);
lean_ctor_set(v_reuseFailAlloc_1171_, 8, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1171_, 9, v_dAssignment_1157_);
lean_ctor_set(v_reuseFailAlloc_1171_, 10, v_instanceTypedMVars_1158_);
v___x_1165_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1167_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1165_);
v___x_1167_ = v___x_1146_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1165_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_cache_1141_);
lean_ctor_set(v_reuseFailAlloc_1170_, 2, v_zetaDeltaFVarIds_1142_);
lean_ctor_set(v_reuseFailAlloc_1170_, 3, v_postponed_1143_);
lean_ctor_set(v_reuseFailAlloc_1170_, 4, v_diag_1144_);
v___x_1167_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = lean_st_ref_put(v___y_1137_, v___x_1167_);
v___x_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1162_);
return v___x_1169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg___boxed(lean_object* v_mvarId_1174_, lean_object* v_val_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_mvarId_1174_, v_val_1175_, v___y_1176_);
lean_dec(v___y_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(lean_object* v_x1_1179_, lean_object* v_x2_1180_){
_start:
{
lean_object* v_fst_1181_; lean_object* v_fst_1182_; uint8_t v___x_1183_; 
v_fst_1181_ = lean_ctor_get(v_x1_1179_, 0);
v_fst_1182_ = lean_ctor_get(v_x2_1180_, 0);
v___x_1183_ = lean_nat_dec_lt(v_fst_1181_, v_fst_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0___boxed(lean_object* v_x1_1184_, lean_object* v_x2_1185_){
_start:
{
uint8_t v_res_1186_; lean_object* v_r_1187_; 
v_res_1186_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v_x1_1184_, v_x2_1185_);
lean_dec_ref(v_x2_1185_);
lean_dec_ref(v_x1_1184_);
v_r_1187_ = lean_box(v_res_1186_);
return v_r_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(lean_object* v_hi_1188_, lean_object* v_pivot_1189_, lean_object* v_as_1190_, lean_object* v_i_1191_, lean_object* v_k_1192_){
_start:
{
uint8_t v___x_1193_; 
v___x_1193_ = lean_nat_dec_lt(v_k_1192_, v_hi_1188_);
if (v___x_1193_ == 0)
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec(v_k_1192_);
v___x_1194_ = lean_array_fswap(v_as_1190_, v_i_1191_, v_hi_1188_);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v_i_1191_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
return v___x_1195_;
}
else
{
lean_object* v___x_1196_; lean_object* v_fst_1197_; lean_object* v_fst_1198_; uint8_t v___x_1199_; 
v___x_1196_ = lean_array_fget_borrowed(v_as_1190_, v_k_1192_);
v_fst_1197_ = lean_ctor_get(v___x_1196_, 0);
v_fst_1198_ = lean_ctor_get(v_pivot_1189_, 0);
v___x_1199_ = lean_nat_dec_lt(v_fst_1197_, v_fst_1198_);
if (v___x_1199_ == 0)
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = lean_unsigned_to_nat(1u);
v___x_1201_ = lean_nat_add(v_k_1192_, v___x_1200_);
lean_dec(v_k_1192_);
v_k_1192_ = v___x_1201_;
goto _start;
}
else
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1203_ = lean_array_fswap(v_as_1190_, v_i_1191_, v_k_1192_);
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_nat_add(v_i_1191_, v___x_1204_);
lean_dec(v_i_1191_);
v___x_1206_ = lean_nat_add(v_k_1192_, v___x_1204_);
lean_dec(v_k_1192_);
v_as_1190_ = v___x_1203_;
v_i_1191_ = v___x_1205_;
v_k_1192_ = v___x_1206_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg___boxed(lean_object* v_hi_1208_, lean_object* v_pivot_1209_, lean_object* v_as_1210_, lean_object* v_i_1211_, lean_object* v_k_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_1208_, v_pivot_1209_, v_as_1210_, v_i_1211_, v_k_1212_);
lean_dec_ref(v_pivot_1209_);
lean_dec(v_hi_1208_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(lean_object* v_n_1214_, lean_object* v_as_1215_, lean_object* v_lo_1216_, lean_object* v_hi_1217_){
_start:
{
lean_object* v___y_1219_; uint8_t v___x_1229_; 
v___x_1229_ = lean_nat_dec_lt(v_lo_1216_, v_hi_1217_);
if (v___x_1229_ == 0)
{
lean_dec(v_lo_1216_);
return v_as_1215_;
}
else
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v_mid_1232_; lean_object* v___y_1234_; lean_object* v___y_1240_; lean_object* v___x_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1230_ = lean_nat_add(v_lo_1216_, v_hi_1217_);
v___x_1231_ = lean_unsigned_to_nat(1u);
v_mid_1232_ = lean_nat_shiftr(v___x_1230_, v___x_1231_);
lean_dec(v___x_1230_);
v___x_1245_ = lean_array_fget_borrowed(v_as_1215_, v_mid_1232_);
v___x_1246_ = lean_array_fget_borrowed(v_as_1215_, v_lo_1216_);
v___x_1247_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1245_, v___x_1246_);
if (v___x_1247_ == 0)
{
v___y_1240_ = v_as_1215_;
goto v___jp_1239_;
}
else
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_array_fswap(v_as_1215_, v_lo_1216_, v_mid_1232_);
v___y_1240_ = v___x_1248_;
goto v___jp_1239_;
}
v___jp_1233_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; uint8_t v___x_1237_; 
v___x_1235_ = lean_array_fget_borrowed(v___y_1234_, v_mid_1232_);
v___x_1236_ = lean_array_fget_borrowed(v___y_1234_, v_hi_1217_);
v___x_1237_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1235_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_dec(v_mid_1232_);
v___y_1219_ = v___y_1234_;
goto v___jp_1218_;
}
else
{
lean_object* v___x_1238_; 
v___x_1238_ = lean_array_fswap(v___y_1234_, v_mid_1232_, v_hi_1217_);
lean_dec(v_mid_1232_);
v___y_1219_ = v___x_1238_;
goto v___jp_1218_;
}
}
v___jp_1239_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v___x_1241_ = lean_array_fget_borrowed(v___y_1240_, v_hi_1217_);
v___x_1242_ = lean_array_fget_borrowed(v___y_1240_, v_lo_1216_);
v___x_1243_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1241_, v___x_1242_);
if (v___x_1243_ == 0)
{
v___y_1234_ = v___y_1240_;
goto v___jp_1233_;
}
else
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_array_fswap(v___y_1240_, v_lo_1216_, v_hi_1217_);
v___y_1234_ = v___x_1244_;
goto v___jp_1233_;
}
}
}
v___jp_1218_:
{
lean_object* v_pivot_1220_; lean_object* v___x_1221_; lean_object* v_fst_1222_; lean_object* v_snd_1223_; uint8_t v___x_1224_; 
v_pivot_1220_ = lean_array_fget(v___y_1219_, v_hi_1217_);
lean_inc_n(v_lo_1216_, 2);
v___x_1221_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_1217_, v_pivot_1220_, v___y_1219_, v_lo_1216_, v_lo_1216_);
lean_dec(v_pivot_1220_);
v_fst_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_fst_1222_);
v_snd_1223_ = lean_ctor_get(v___x_1221_, 1);
lean_inc(v_snd_1223_);
lean_dec_ref(v___x_1221_);
v___x_1224_ = lean_nat_dec_le(v_hi_1217_, v_fst_1222_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1225_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_1214_, v_snd_1223_, v_lo_1216_, v_fst_1222_);
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = lean_nat_add(v_fst_1222_, v___x_1226_);
lean_dec(v_fst_1222_);
v_as_1215_ = v___x_1225_;
v_lo_1216_ = v___x_1227_;
goto _start;
}
else
{
lean_dec(v_fst_1222_);
lean_dec(v_lo_1216_);
return v_snd_1223_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___boxed(lean_object* v_n_1249_, lean_object* v_as_1250_, lean_object* v_lo_1251_, lean_object* v_hi_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_1249_, v_as_1250_, v_lo_1251_, v_hi_1252_);
lean_dec(v_hi_1252_);
lean_dec(v_n_1249_);
return v_res_1253_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(lean_object* v_as_1254_, lean_object* v_a_1255_, lean_object* v_x_1256_){
_start:
{
lean_object* v_zero_1257_; uint8_t v_isZero_1258_; 
v_zero_1257_ = lean_unsigned_to_nat(0u);
v_isZero_1258_ = lean_nat_dec_eq(v_x_1256_, v_zero_1257_);
if (v_isZero_1258_ == 1)
{
lean_dec(v_x_1256_);
return v_isZero_1258_;
}
else
{
lean_object* v_fst_1259_; lean_object* v_one_1260_; lean_object* v_n_1261_; lean_object* v___x_1262_; lean_object* v_fst_1263_; uint8_t v___x_1264_; 
v_fst_1259_ = lean_ctor_get(v_a_1255_, 0);
v_one_1260_ = lean_unsigned_to_nat(1u);
v_n_1261_ = lean_nat_sub(v_x_1256_, v_one_1260_);
lean_dec(v_x_1256_);
v___x_1262_ = lean_array_fget_borrowed(v_as_1254_, v_n_1261_);
v_fst_1263_ = lean_ctor_get(v___x_1262_, 0);
v___x_1264_ = lean_nat_dec_eq(v_fst_1259_, v_fst_1263_);
if (v___x_1264_ == 0)
{
v_x_1256_ = v_n_1261_;
goto _start;
}
else
{
lean_dec(v_n_1261_);
return v_isZero_1258_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg___boxed(lean_object* v_as_1266_, lean_object* v_a_1267_, lean_object* v_x_1268_){
_start:
{
uint8_t v_res_1269_; lean_object* v_r_1270_; 
v_res_1269_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_1266_, v_a_1267_, v_x_1268_);
lean_dec_ref(v_a_1267_);
lean_dec_ref(v_as_1266_);
v_r_1270_ = lean_box(v_res_1269_);
return v_r_1270_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(lean_object* v_as_1271_, lean_object* v_i_1272_){
_start:
{
lean_object* v___x_1273_; uint8_t v___x_1274_; 
v___x_1273_ = lean_array_get_size(v_as_1271_);
v___x_1274_ = lean_nat_dec_lt(v_i_1272_, v___x_1273_);
if (v___x_1274_ == 0)
{
uint8_t v___x_1275_; 
lean_dec(v_i_1272_);
v___x_1275_ = 1;
return v___x_1275_;
}
else
{
lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = lean_array_fget_borrowed(v_as_1271_, v_i_1272_);
lean_inc(v_i_1272_);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_1271_, v___x_1276_, v_i_1272_);
if (v___x_1277_ == 0)
{
lean_dec(v_i_1272_);
return v___x_1277_;
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = lean_unsigned_to_nat(1u);
v___x_1279_ = lean_nat_add(v_i_1272_, v___x_1278_);
lean_dec(v_i_1272_);
v_i_1272_ = v___x_1279_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11___boxed(lean_object* v_as_1281_, lean_object* v_i_1282_){
_start:
{
uint8_t v_res_1283_; lean_object* v_r_1284_; 
v_res_1283_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(v_as_1281_, v_i_1282_);
lean_dec_ref(v_as_1281_);
v_r_1284_ = lean_box(v_res_1283_);
return v_r_1284_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(lean_object* v_as_1285_){
_start:
{
lean_object* v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = lean_unsigned_to_nat(0u);
v___x_1287_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(v_as_1285_, v___x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8___boxed(lean_object* v_as_1288_){
_start:
{
uint8_t v_res_1289_; lean_object* v_r_1290_; 
v_res_1289_ = l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(v_as_1288_);
lean_dec_ref(v_as_1288_);
v_r_1290_ = lean_box(v_res_1289_);
return v_r_1290_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1291_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1294_ = lean_unsigned_to_nat(0u);
v___x_1295_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1);
v___x_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v___x_1294_);
return v___x_1296_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1297_ = lean_unsigned_to_nat(32u);
v___x_1298_ = lean_mk_empty_array_with_capacity(v___x_1297_);
v___x_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
return v___x_1299_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4(void){
_start:
{
size_t v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1300_ = ((size_t)5ULL);
v___x_1301_ = lean_unsigned_to_nat(0u);
v___x_1302_ = lean_unsigned_to_nat(32u);
v___x_1303_ = lean_mk_empty_array_with_capacity(v___x_1302_);
v___x_1304_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3);
v___x_1305_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v___x_1303_);
lean_ctor_set(v___x_1305_, 2, v___x_1301_);
lean_ctor_set(v___x_1305_, 3, v___x_1301_);
lean_ctor_set_usize(v___x_1305_, 4, v___x_1300_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4);
v___x_1307_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1);
v___x_1308_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
lean_ctor_set(v___x_1308_, 2, v___x_1307_);
lean_ctor_set(v___x_1308_, 3, v___x_1306_);
return v___x_1308_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5);
v___x_1310_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1309_);
return v___x_1311_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8(void){
_start:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1313_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7));
v___x_1314_ = l_Lean_stringToMessageData(v___x_1313_);
return v___x_1314_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9));
v___x_1317_ = l_Lean_stringToMessageData(v___x_1316_);
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11));
v___x_1320_ = l_Lean_stringToMessageData(v___x_1319_);
return v___x_1320_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14(void){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13));
v___x_1323_ = l_Lean_stringToMessageData(v___x_1322_);
return v___x_1323_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16));
v___x_1328_ = l_Lean_stringToMessageData(v___x_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(uint8_t v___x_1349_, lean_object* v___f_1350_, lean_object* v_stx_1351_, lean_object* v___x_1352_, lean_object* v___x_1353_, lean_object* v___x_1354_, lean_object* v___x_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___y_1366_; lean_object* v_subgoals_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; 
if (v___x_1349_ == 0)
{
lean_object* v___x_1456_; 
lean_dec_ref(v___x_1355_);
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1353_);
lean_dec_ref(v___x_1352_);
lean_dec_ref(v___f_1350_);
v___x_1456_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_1456_;
}
else
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___y_1466_; lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; uint8_t v___y_1490_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v_occs_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1594_; lean_object* v___y_1595_; lean_object* v___y_1596_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; lean_object* v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v_occs_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1457_ = lean_unsigned_to_nat(0u);
v___x_1458_ = lean_unsigned_to_nat(1u);
v___x_1779_ = l_Lean_Syntax_getArg(v_stx_1351_, v___x_1458_);
v___x_1780_ = l_Lean_Syntax_isNone(v___x_1779_);
if (v___x_1780_ == 0)
{
uint8_t v___x_1781_; 
lean_inc(v___x_1779_);
v___x_1781_ = l_Lean_Syntax_matchesNull(v___x_1779_, v___x_1458_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1782_; 
lean_dec(v___x_1779_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1353_);
lean_dec_ref(v___x_1352_);
lean_dec_ref(v___f_1350_);
v___x_1782_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_1782_;
}
else
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v___x_1783_ = l_Lean_Syntax_getArg(v___x_1779_, v___x_1457_);
lean_dec(v___x_1779_);
v___x_1784_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27));
lean_inc_ref(v___x_1355_);
lean_inc_ref(v___x_1354_);
lean_inc_ref(v___x_1353_);
lean_inc_ref(v___x_1352_);
v___x_1785_ = l_Lean_Name_mkStr5(v___x_1352_, v___x_1353_, v___x_1354_, v___x_1355_, v___x_1784_);
lean_inc(v___x_1783_);
v___x_1786_ = l_Lean_Syntax_isOfKind(v___x_1783_, v___x_1785_);
lean_dec(v___x_1785_);
if (v___x_1786_ == 0)
{
lean_object* v___x_1787_; 
lean_dec(v___x_1783_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1353_);
lean_dec_ref(v___x_1352_);
lean_dec_ref(v___f_1350_);
v___x_1787_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_1787_;
}
else
{
lean_object* v___x_1788_; lean_object* v_occs_1789_; lean_object* v___x_1790_; 
v___x_1788_ = lean_unsigned_to_nat(3u);
v_occs_1789_ = l_Lean_Syntax_getArg(v___x_1783_, v___x_1788_);
lean_dec(v___x_1783_);
v___x_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1790_, 0, v_occs_1789_);
v_occs_1685_ = v___x_1790_;
v___y_1686_ = v___y_1356_;
v___y_1687_ = v___y_1357_;
v___y_1688_ = v___y_1358_;
v___y_1689_ = v___y_1359_;
v___y_1690_ = v___y_1360_;
v___y_1691_ = v___y_1361_;
v___y_1692_ = v___y_1362_;
v___y_1693_ = v___y_1363_;
goto v___jp_1684_;
}
}
}
else
{
lean_object* v___x_1791_; 
lean_dec(v___x_1779_);
v___x_1791_ = lean_box(0);
v_occs_1685_ = v___x_1791_;
v___y_1686_ = v___y_1356_;
v___y_1687_ = v___y_1357_;
v___y_1688_ = v___y_1358_;
v___y_1689_ = v___y_1359_;
v___y_1690_ = v___y_1360_;
v___y_1691_ = v___y_1361_;
v___y_1692_ = v___y_1362_;
v___y_1693_ = v___y_1363_;
goto v___jp_1684_;
}
v___jp_1459_:
{
lean_object* v___x_1470_; uint8_t v___x_1471_; 
v___x_1470_ = lean_array_get_size(v___y_1460_);
v___x_1471_ = lean_nat_dec_eq(v___x_1470_, v___x_1457_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; uint8_t v___x_1473_; 
v___x_1472_ = lean_nat_sub(v___x_1470_, v___x_1458_);
v___x_1473_ = lean_nat_dec_le(v___x_1457_, v___x_1472_);
if (v___x_1473_ == 0)
{
lean_inc(v___x_1472_);
v___y_1442_ = v___x_1470_;
v___y_1443_ = v___y_1469_;
v___y_1444_ = v___y_1460_;
v___y_1445_ = v___x_1472_;
v___y_1446_ = v___y_1463_;
v___y_1447_ = v___y_1462_;
v___y_1448_ = v___y_1461_;
v___y_1449_ = v___y_1464_;
v___y_1450_ = v___y_1467_;
v___y_1451_ = v___y_1468_;
v___y_1452_ = v___y_1465_;
v___y_1453_ = v___y_1466_;
v___y_1454_ = v___x_1472_;
goto v___jp_1441_;
}
else
{
v___y_1442_ = v___x_1470_;
v___y_1443_ = v___y_1469_;
v___y_1444_ = v___y_1460_;
v___y_1445_ = v___x_1472_;
v___y_1446_ = v___y_1463_;
v___y_1447_ = v___y_1462_;
v___y_1448_ = v___y_1461_;
v___y_1449_ = v___y_1464_;
v___y_1450_ = v___y_1467_;
v___y_1451_ = v___y_1468_;
v___y_1452_ = v___y_1465_;
v___y_1453_ = v___y_1466_;
v___y_1454_ = v___x_1457_;
goto v___jp_1441_;
}
}
else
{
v___y_1413_ = v___y_1464_;
v___y_1414_ = v___y_1469_;
v___y_1415_ = v___y_1467_;
v___y_1416_ = v___y_1468_;
v___y_1417_ = v___y_1465_;
v___y_1418_ = v___y_1463_;
v___y_1419_ = v___y_1462_;
v___y_1420_ = v___y_1466_;
v___y_1421_ = v___y_1461_;
v___y_1422_ = v___y_1460_;
goto v___jp_1412_;
}
}
v___jp_1474_:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1491_ = l_Lean_Meta_Simp_Context_setMemoize(v___y_1489_, v___y_1490_);
v___x_1492_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6);
lean_inc(v___y_1481_);
lean_inc_ref(v___y_1478_);
v___x_1493_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed), 11, 2);
lean_closure_set(v___x_1493_, 0, v___y_1478_);
lean_closure_set(v___x_1493_, 1, v___y_1481_);
lean_inc_ref(v___y_1482_);
lean_inc_ref(v___y_1484_);
v___x_1494_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
lean_ctor_set(v___x_1494_, 1, v___y_1479_);
lean_ctor_set(v___x_1494_, 2, v___y_1484_);
lean_ctor_set(v___x_1494_, 3, v___f_1350_);
lean_ctor_set(v___x_1494_, 4, v___y_1482_);
lean_ctor_set_uint8(v___x_1494_, sizeof(void*)*5, v___x_1349_);
v___x_1495_ = l_Lean_Meta_Simp_main(v___y_1485_, v___x_1491_, v___x_1492_, v___x_1494_, v___y_1476_, v___y_1483_, v___y_1480_, v___y_1486_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v_fst_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1572_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v_fst_1497_ = lean_ctor_get(v_a_1496_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_a_1496_);
if (v_isSharedCheck_1572_ == 0)
{
lean_object* v_unused_1573_; 
v_unused_1573_ = lean_ctor_get(v_a_1496_, 1);
lean_dec(v_unused_1573_);
v___x_1499_ = v_a_1496_;
v_isShared_1500_ = v_isSharedCheck_1572_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_fst_1497_);
lean_dec(v_a_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1572_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; 
v___x_1501_ = lean_st_ref_get(v___y_1481_);
lean_dec(v___y_1481_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_subgoals_1502_; lean_object* v___x_1503_; uint8_t v___x_1504_; 
v_subgoals_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc_ref(v_subgoals_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = lean_array_get_size(v_subgoals_1502_);
v___x_1504_ = lean_nat_dec_eq(v___x_1503_, v___x_1457_);
if (v___x_1504_ == 0)
{
lean_del_object(v___x_1499_);
lean_dec_ref(v___y_1478_);
v___y_1366_ = v_fst_1497_;
v_subgoals_1367_ = v_subgoals_1502_;
v___y_1368_ = v___y_1488_;
v___y_1369_ = v___y_1477_;
v___y_1370_ = v___y_1487_;
v___y_1371_ = v___y_1475_;
v___y_1372_ = v___y_1476_;
v___y_1373_ = v___y_1483_;
v___y_1374_ = v___y_1480_;
v___y_1375_ = v___y_1486_;
goto v___jp_1365_;
}
else
{
lean_object* v_expr_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
lean_dec_ref(v_subgoals_1502_);
lean_dec(v_fst_1497_);
v_expr_1505_ = lean_ctor_get(v___y_1478_, 2);
lean_inc_ref(v_expr_1505_);
lean_dec_ref(v___y_1478_);
v___x_1506_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8);
v___x_1507_ = l_Lean_indentExpr(v_expr_1505_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 7);
lean_ctor_set(v___x_1499_, 1, v___x_1507_);
lean_ctor_set(v___x_1499_, 0, v___x_1506_);
v___x_1509_ = v___x_1499_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1506_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1510_; lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
v___x_1510_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1509_, v___y_1476_, v___y_1483_, v___y_1480_, v___y_1486_);
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1513_ = v___x_1510_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1510_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1511_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
}
else
{
lean_object* v_subgoals_1520_; lean_object* v_idx_1521_; lean_object* v_remaining_1522_; uint8_t v___x_1523_; 
v_subgoals_1520_ = lean_ctor_get(v___x_1501_, 0);
lean_inc_ref(v_subgoals_1520_);
v_idx_1521_ = lean_ctor_get(v___x_1501_, 1);
lean_inc(v_idx_1521_);
v_remaining_1522_ = lean_ctor_get(v___x_1501_, 2);
lean_inc(v_remaining_1522_);
lean_dec_ref_known(v___x_1501_, 3);
v___x_1523_ = lean_nat_dec_eq(v_idx_1521_, v___x_1457_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; 
lean_dec_ref(v___y_1478_);
v___x_1524_ = l_List_getLast_x3f___redArg(v_remaining_1522_);
lean_dec(v_remaining_1522_);
if (lean_obj_tag(v___x_1524_) == 1)
{
lean_object* v_val_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1556_; 
lean_dec_ref(v_subgoals_1520_);
lean_dec(v_fst_1497_);
v_val_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1556_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_val_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1556_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v_fst_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1554_; 
v_fst_1529_ = lean_ctor_get(v_val_1525_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_val_1525_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; 
v_unused_1555_ = lean_ctor_get(v_val_1525_, 1);
lean_dec(v_unused_1555_);
v___x_1531_ = v_val_1525_;
v_isShared_1532_ = v_isSharedCheck_1554_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_fst_1529_);
lean_dec(v_val_1525_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1554_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1536_; 
v___x_1533_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10);
v___x_1534_ = l_Nat_reprFast(v_idx_1521_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set_tag(v___x_1527_, 3);
lean_ctor_set(v___x_1527_, 0, v___x_1534_);
v___x_1536_ = v___x_1527_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1534_);
v___x_1536_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1537_ = l_Lean_MessageData_ofFormat(v___x_1536_);
if (v_isShared_1532_ == 0)
{
lean_ctor_set_tag(v___x_1531_, 7);
lean_ctor_set(v___x_1531_, 1, v___x_1537_);
lean_ctor_set(v___x_1531_, 0, v___x_1533_);
v___x_1539_ = v___x_1531_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1533_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
v___x_1540_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12);
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 7);
lean_ctor_set(v___x_1499_, 1, v___x_1540_);
lean_ctor_set(v___x_1499_, 0, v___x_1539_);
v___x_1542_ = v___x_1499_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v___x_1540_);
v___x_1542_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1543_ = lean_nat_add(v_fst_1529_, v___x_1458_);
lean_dec(v_fst_1529_);
v___x_1544_ = l_Nat_reprFast(v___x_1543_);
v___x_1545_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
v___x_1546_ = l_Lean_MessageData_ofFormat(v___x_1545_);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1542_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1549_, v___y_1476_, v___y_1483_, v___y_1480_, v___y_1486_);
return v___x_1550_;
}
}
}
}
}
}
else
{
lean_dec(v___x_1524_);
lean_dec(v_idx_1521_);
lean_del_object(v___x_1499_);
v___y_1460_ = v_subgoals_1520_;
v___y_1461_ = v_fst_1497_;
v___y_1462_ = v___y_1488_;
v___y_1463_ = v___y_1477_;
v___y_1464_ = v___y_1487_;
v___y_1465_ = v___y_1475_;
v___y_1466_ = v___y_1476_;
v___y_1467_ = v___y_1483_;
v___y_1468_ = v___y_1480_;
v___y_1469_ = v___y_1486_;
goto v___jp_1459_;
}
}
else
{
lean_object* v_expr_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1561_; 
lean_dec(v_remaining_1522_);
lean_dec(v_idx_1521_);
lean_dec_ref(v_subgoals_1520_);
lean_dec(v_fst_1497_);
v_expr_1557_ = lean_ctor_get(v___y_1478_, 2);
lean_inc_ref(v_expr_1557_);
lean_dec_ref(v___y_1478_);
v___x_1558_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8);
v___x_1559_ = l_Lean_indentExpr(v_expr_1557_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 7);
lean_ctor_set(v___x_1499_, 1, v___x_1559_);
lean_ctor_set(v___x_1499_, 0, v___x_1558_);
v___x_1561_ = v___x_1499_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1558_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v___x_1559_);
v___x_1561_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
lean_object* v___x_1562_; lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
v___x_1562_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1561_, v___y_1476_, v___y_1483_, v___y_1480_, v___y_1486_);
v_a_1563_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1562_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1562_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1478_);
v_a_1574_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1495_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1495_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
v___jp_1582_:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_inc_ref(v_occs_1588_);
v___x_1597_ = lean_st_mk_ref(v_occs_1588_);
v___x_1598_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v___y_1593_, v___y_1595_, v___y_1596_);
if (lean_obj_tag(v___x_1598_) == 0)
{
if (lean_obj_tag(v_occs_1588_) == 0)
{
lean_object* v_a_1599_; 
lean_dec_ref_known(v_occs_1588_, 1);
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
v___y_1475_ = v___y_1592_;
v___y_1476_ = v___y_1593_;
v___y_1477_ = v___y_1590_;
v___y_1478_ = v___y_1586_;
v___y_1479_ = v___y_1585_;
v___y_1480_ = v___y_1595_;
v___y_1481_ = v___x_1597_;
v___y_1482_ = v___y_1587_;
v___y_1483_ = v___y_1594_;
v___y_1484_ = v___y_1583_;
v___y_1485_ = v___y_1584_;
v___y_1486_ = v___y_1596_;
v___y_1487_ = v___y_1591_;
v___y_1488_ = v___y_1589_;
v___y_1489_ = v_a_1599_;
v___y_1490_ = v___x_1349_;
goto v___jp_1474_;
}
else
{
lean_object* v_a_1600_; uint8_t v___x_1601_; 
lean_dec_ref(v_occs_1588_);
v_a_1600_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1598_, 1);
v___x_1601_ = 0;
v___y_1475_ = v___y_1592_;
v___y_1476_ = v___y_1593_;
v___y_1477_ = v___y_1590_;
v___y_1478_ = v___y_1586_;
v___y_1479_ = v___y_1585_;
v___y_1480_ = v___y_1595_;
v___y_1481_ = v___x_1597_;
v___y_1482_ = v___y_1587_;
v___y_1483_ = v___y_1594_;
v___y_1484_ = v___y_1583_;
v___y_1485_ = v___y_1584_;
v___y_1486_ = v___y_1596_;
v___y_1487_ = v___y_1591_;
v___y_1488_ = v___y_1589_;
v___y_1489_ = v_a_1600_;
v___y_1490_ = v___x_1601_;
goto v___jp_1474_;
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec(v___x_1597_);
lean_dec_ref(v_occs_1588_);
lean_dec_ref(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec_ref(v___f_1350_);
v_a_1602_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1598_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1598_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
v___jp_1610_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15));
v___x_1626_ = lean_array_to_list(v___y_1615_);
v___x_1627_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1457_);
lean_ctor_set(v___x_1627_, 2, v___x_1626_);
v___y_1583_ = v___y_1611_;
v___y_1584_ = v___y_1612_;
v___y_1585_ = v___y_1614_;
v___y_1586_ = v___y_1613_;
v___y_1587_ = v___y_1616_;
v_occs_1588_ = v___x_1627_;
v___y_1589_ = v___y_1617_;
v___y_1590_ = v___y_1618_;
v___y_1591_ = v___y_1619_;
v___y_1592_ = v___y_1620_;
v___y_1593_ = v___y_1621_;
v___y_1594_ = v___y_1622_;
v___y_1595_ = v___y_1623_;
v___y_1596_ = v___y_1624_;
goto v___jp_1582_;
}
v___jp_1628_:
{
uint8_t v___x_1643_; 
v___x_1643_ = l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(v___y_1642_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
lean_dec_ref(v___y_1642_);
lean_dec_ref(v___y_1638_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec_ref(v___f_1350_);
v___x_1644_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17);
v___x_1645_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1644_, v___y_1629_, v___y_1631_, v___y_1641_, v___y_1639_);
return v___x_1645_;
}
else
{
v___y_1611_ = v___y_1637_;
v___y_1612_ = v___y_1638_;
v___y_1613_ = v___y_1633_;
v___y_1614_ = v___y_1634_;
v___y_1615_ = v___y_1642_;
v___y_1616_ = v___y_1636_;
v___y_1617_ = v___y_1640_;
v___y_1618_ = v___y_1635_;
v___y_1619_ = v___y_1630_;
v___y_1620_ = v___y_1632_;
v___y_1621_ = v___y_1629_;
v___y_1622_ = v___y_1631_;
v___y_1623_ = v___y_1641_;
v___y_1624_ = v___y_1639_;
goto v___jp_1610_;
}
}
v___jp_1646_:
{
lean_object* v___x_1664_; 
v___x_1664_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v___y_1659_, v___y_1650_, v___y_1660_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec(v___y_1659_);
v___y_1629_ = v___y_1647_;
v___y_1630_ = v___y_1648_;
v___y_1631_ = v___y_1649_;
v___y_1632_ = v___y_1651_;
v___y_1633_ = v___y_1652_;
v___y_1634_ = v___y_1653_;
v___y_1635_ = v___y_1654_;
v___y_1636_ = v___y_1655_;
v___y_1637_ = v___y_1656_;
v___y_1638_ = v___y_1658_;
v___y_1639_ = v___y_1657_;
v___y_1640_ = v___y_1661_;
v___y_1641_ = v___y_1662_;
v___y_1642_ = v___x_1664_;
goto v___jp_1628_;
}
v___jp_1665_:
{
uint8_t v___x_1683_; 
v___x_1683_ = lean_nat_dec_le(v___y_1682_, v___y_1666_);
if (v___x_1683_ == 0)
{
lean_dec(v___y_1666_);
lean_inc(v___y_1682_);
v___y_1647_ = v___y_1667_;
v___y_1648_ = v___y_1668_;
v___y_1649_ = v___y_1669_;
v___y_1650_ = v___y_1670_;
v___y_1651_ = v___y_1671_;
v___y_1652_ = v___y_1672_;
v___y_1653_ = v___y_1673_;
v___y_1654_ = v___y_1674_;
v___y_1655_ = v___y_1675_;
v___y_1656_ = v___y_1676_;
v___y_1657_ = v___y_1677_;
v___y_1658_ = v___y_1678_;
v___y_1659_ = v___y_1679_;
v___y_1660_ = v___y_1682_;
v___y_1661_ = v___y_1680_;
v___y_1662_ = v___y_1681_;
v___y_1663_ = v___y_1682_;
goto v___jp_1646_;
}
else
{
v___y_1647_ = v___y_1667_;
v___y_1648_ = v___y_1668_;
v___y_1649_ = v___y_1669_;
v___y_1650_ = v___y_1670_;
v___y_1651_ = v___y_1671_;
v___y_1652_ = v___y_1672_;
v___y_1653_ = v___y_1673_;
v___y_1654_ = v___y_1674_;
v___y_1655_ = v___y_1675_;
v___y_1656_ = v___y_1676_;
v___y_1657_ = v___y_1677_;
v___y_1658_ = v___y_1678_;
v___y_1659_ = v___y_1679_;
v___y_1660_ = v___y_1682_;
v___y_1661_ = v___y_1680_;
v___y_1662_ = v___y_1681_;
v___y_1663_ = v___y_1666_;
goto v___jp_1646_;
}
}
v___jp_1684_:
{
lean_object* v_declName_x3f_1694_; lean_object* v_macroStack_1695_; uint8_t v_mayPostpone_1696_; uint8_t v_errToSorry_1697_; lean_object* v_autoBoundImplicitContext_1698_; lean_object* v_autoBoundImplicitForbidden_1699_; lean_object* v_sectionVars_1700_; lean_object* v_sectionFVars_1701_; uint8_t v_implicitLambda_1702_; uint8_t v_heedElabAsElim_1703_; uint8_t v_isNoncomputableSection_1704_; uint8_t v_isMetaSection_1705_; uint8_t v_inPattern_1706_; lean_object* v_tacSnap_x3f_1707_; uint8_t v_saveRecAppSyntax_1708_; uint8_t v_holesAsSyntheticOpaque_1709_; lean_object* v_fixedTermElabs_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___f_1715_; lean_object* v___f_1716_; lean_object* v___f_1717_; lean_object* v___x_1718_; lean_object* v___f_1719_; lean_object* v___f_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v_declName_x3f_1694_ = lean_ctor_get(v___y_1688_, 0);
v_macroStack_1695_ = lean_ctor_get(v___y_1688_, 1);
v_mayPostpone_1696_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8);
v_errToSorry_1697_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_1698_ = lean_ctor_get(v___y_1688_, 2);
v_autoBoundImplicitForbidden_1699_ = lean_ctor_get(v___y_1688_, 3);
v_sectionVars_1700_ = lean_ctor_get(v___y_1688_, 4);
v_sectionFVars_1701_ = lean_ctor_get(v___y_1688_, 5);
v_implicitLambda_1702_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 2);
v_heedElabAsElim_1703_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_1704_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 4);
v_isMetaSection_1705_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 5);
v_inPattern_1706_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_1707_ = lean_ctor_get(v___y_1688_, 6);
v_saveRecAppSyntax_1708_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_1709_ = lean_ctor_get_uint8(v___y_1688_, sizeof(void*)*8 + 9);
v_fixedTermElabs_1710_ = lean_ctor_get(v___y_1688_, 7);
v___x_1711_ = lean_unsigned_to_nat(2u);
v___x_1712_ = l_Lean_Syntax_getArg(v_stx_1351_, v___x_1711_);
v___x_1713_ = lean_box(0);
v___x_1714_ = lean_box(v___x_1349_);
v___f_1715_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1715_, 0, v___x_1713_);
lean_closure_set(v___f_1715_, 1, v___x_1714_);
v___f_1716_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18));
v___f_1717_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19));
v___x_1718_ = lean_box(v___x_1349_);
lean_inc(v___x_1712_);
v___f_1719_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed), 10, 3);
lean_closure_set(v___f_1719_, 0, v___x_1712_);
lean_closure_set(v___f_1719_, 1, v___x_1713_);
lean_closure_set(v___f_1719_, 2, v___x_1718_);
v___f_1720_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed), 9, 2);
lean_closure_set(v___f_1720_, 0, v___x_1712_);
lean_closure_set(v___f_1720_, 1, v___f_1719_);
lean_inc_ref(v_fixedTermElabs_1710_);
lean_inc(v_tacSnap_x3f_1707_);
lean_inc(v_sectionFVars_1701_);
lean_inc(v_sectionVars_1700_);
lean_inc_ref(v_autoBoundImplicitForbidden_1699_);
lean_inc(v_autoBoundImplicitContext_1698_);
lean_inc(v_macroStack_1695_);
lean_inc(v_declName_x3f_1694_);
v___x_1721_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_1721_, 0, v_declName_x3f_1694_);
lean_ctor_set(v___x_1721_, 1, v_macroStack_1695_);
lean_ctor_set(v___x_1721_, 2, v_autoBoundImplicitContext_1698_);
lean_ctor_set(v___x_1721_, 3, v_autoBoundImplicitForbidden_1699_);
lean_ctor_set(v___x_1721_, 4, v_sectionVars_1700_);
lean_ctor_set(v___x_1721_, 5, v_sectionFVars_1701_);
lean_ctor_set(v___x_1721_, 6, v_tacSnap_x3f_1707_);
lean_ctor_set(v___x_1721_, 7, v_fixedTermElabs_1710_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8, v_mayPostpone_1696_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 1, v_errToSorry_1697_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 2, v_implicitLambda_1702_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 3, v_heedElabAsElim_1703_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 4, v_isNoncomputableSection_1704_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 5, v_isMetaSection_1705_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 6, v___x_1349_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 7, v_inPattern_1706_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_1708_);
lean_ctor_set_uint8(v___x_1721_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_1709_);
v___x_1722_ = l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(v___f_1720_, v___x_1721_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
lean_dec_ref_known(v___x_1721_, 8);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v___x_1724_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v___x_1724_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_1687_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1724_) == 0)
{
if (lean_obj_tag(v_occs_1685_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1726_; 
lean_dec_ref(v___x_1355_);
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1353_);
lean_dec_ref(v___x_1352_);
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref_known(v___x_1724_, 1);
v___x_1726_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22));
v___y_1583_ = v___f_1716_;
v___y_1584_ = v_a_1725_;
v___y_1585_ = v___f_1715_;
v___y_1586_ = v_a_1723_;
v___y_1587_ = v___f_1717_;
v_occs_1588_ = v___x_1726_;
v___y_1589_ = v___y_1686_;
v___y_1590_ = v___y_1687_;
v___y_1591_ = v___y_1688_;
v___y_1592_ = v___y_1689_;
v___y_1593_ = v___y_1690_;
v___y_1594_ = v___y_1691_;
v___y_1595_ = v___y_1692_;
v___y_1596_ = v___y_1693_;
goto v___jp_1582_;
}
else
{
lean_object* v_a_1727_; lean_object* v_val_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; uint8_t v___x_1731_; 
v_a_1727_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1724_, 1);
v_val_1728_ = lean_ctor_get(v_occs_1685_, 0);
lean_inc_n(v_val_1728_, 2);
lean_dec_ref_known(v_occs_1685_, 1);
v___x_1729_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23));
lean_inc_ref(v___x_1355_);
lean_inc_ref(v___x_1354_);
lean_inc_ref(v___x_1353_);
lean_inc_ref(v___x_1352_);
v___x_1730_ = l_Lean_Name_mkStr5(v___x_1352_, v___x_1353_, v___x_1354_, v___x_1355_, v___x_1729_);
v___x_1731_ = l_Lean_Syntax_isOfKind(v_val_1728_, v___x_1730_);
lean_dec(v___x_1730_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1732_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24));
v___x_1733_ = l_Lean_Name_mkStr5(v___x_1352_, v___x_1353_, v___x_1354_, v___x_1355_, v___x_1732_);
lean_inc(v_val_1728_);
v___x_1734_ = l_Lean_Syntax_isOfKind(v_val_1728_, v___x_1733_);
lean_dec(v___x_1733_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
lean_dec(v_val_1728_);
lean_dec(v_a_1727_);
lean_dec(v_a_1723_);
lean_dec_ref(v___f_1715_);
lean_dec_ref(v___f_1350_);
v___x_1735_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1735_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1735_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1745_; size_t v_sz_1746_; size_t v___x_1747_; lean_object* v___x_1748_; 
v___x_1744_ = l_Lean_Syntax_getArg(v_val_1728_, v___x_1457_);
lean_dec(v_val_1728_);
v___x_1745_ = l_Lean_Syntax_getArgs(v___x_1744_);
lean_dec(v___x_1744_);
v_sz_1746_ = lean_array_size(v___x_1745_);
v___x_1747_ = ((size_t)0ULL);
v___x_1748_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v_sz_1746_, v___x_1747_, v___x_1745_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; uint8_t v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = lean_array_get_size(v_a_1749_);
v___x_1751_ = lean_nat_dec_eq(v___x_1750_, v___x_1457_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; uint8_t v___x_1753_; 
v___x_1752_ = lean_nat_sub(v___x_1750_, v___x_1458_);
v___x_1753_ = lean_nat_dec_le(v___x_1457_, v___x_1752_);
if (v___x_1753_ == 0)
{
lean_inc(v___x_1752_);
v___y_1666_ = v___x_1752_;
v___y_1667_ = v___y_1690_;
v___y_1668_ = v___y_1688_;
v___y_1669_ = v___y_1691_;
v___y_1670_ = v_a_1749_;
v___y_1671_ = v___y_1689_;
v___y_1672_ = v_a_1723_;
v___y_1673_ = v___f_1715_;
v___y_1674_ = v___y_1687_;
v___y_1675_ = v___f_1717_;
v___y_1676_ = v___f_1716_;
v___y_1677_ = v___y_1693_;
v___y_1678_ = v_a_1727_;
v___y_1679_ = v___x_1750_;
v___y_1680_ = v___y_1686_;
v___y_1681_ = v___y_1692_;
v___y_1682_ = v___x_1752_;
goto v___jp_1665_;
}
else
{
v___y_1666_ = v___x_1752_;
v___y_1667_ = v___y_1690_;
v___y_1668_ = v___y_1688_;
v___y_1669_ = v___y_1691_;
v___y_1670_ = v_a_1749_;
v___y_1671_ = v___y_1689_;
v___y_1672_ = v_a_1723_;
v___y_1673_ = v___f_1715_;
v___y_1674_ = v___y_1687_;
v___y_1675_ = v___f_1717_;
v___y_1676_ = v___f_1716_;
v___y_1677_ = v___y_1693_;
v___y_1678_ = v_a_1727_;
v___y_1679_ = v___x_1750_;
v___y_1680_ = v___y_1686_;
v___y_1681_ = v___y_1692_;
v___y_1682_ = v___x_1457_;
goto v___jp_1665_;
}
}
else
{
v___y_1629_ = v___y_1690_;
v___y_1630_ = v___y_1688_;
v___y_1631_ = v___y_1691_;
v___y_1632_ = v___y_1689_;
v___y_1633_ = v_a_1723_;
v___y_1634_ = v___f_1715_;
v___y_1635_ = v___y_1687_;
v___y_1636_ = v___f_1717_;
v___y_1637_ = v___f_1716_;
v___y_1638_ = v_a_1727_;
v___y_1639_ = v___y_1693_;
v___y_1640_ = v___y_1686_;
v___y_1641_ = v___y_1692_;
v___y_1642_ = v_a_1749_;
goto v___jp_1628_;
}
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec(v_a_1727_);
lean_dec(v_a_1723_);
lean_dec_ref(v___f_1715_);
lean_dec_ref(v___f_1350_);
v_a_1754_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1748_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1748_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
}
else
{
lean_object* v___x_1762_; 
lean_dec(v_val_1728_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1353_);
lean_dec_ref(v___x_1352_);
v___x_1762_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26));
v___y_1583_ = v___f_1716_;
v___y_1584_ = v_a_1727_;
v___y_1585_ = v___f_1715_;
v___y_1586_ = v_a_1723_;
v___y_1587_ = v___f_1717_;
v_occs_1588_ = v___x_1762_;
v___y_1589_ = v___y_1686_;
v___y_1590_ = v___y_1687_;
v___y_1591_ = v___y_1688_;
v___y_1592_ = v___y_1689_;
v___y_1593_ = v___y_1690_;
v___y_1594_ = v___y_1691_;
v___y_1595_ = v___y_1692_;
v___y_1596_ = v___y_1693_;
goto v___jp_1582_;
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec(v_a_1723_);
lean_dec_ref(v___f_1715_);
lean_dec(v_occs_1685_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1353_);
lean_dec_ref(v___x_1352_);
lean_dec_ref(v___f_1350_);
v_a_1763_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1724_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1724_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v___f_1715_);
lean_dec(v_occs_1685_);
lean_dec_ref(v___x_1355_);
lean_dec_ref(v___x_1354_);
lean_dec_ref(v___x_1353_);
lean_dec_ref(v___x_1352_);
lean_dec_ref(v___f_1350_);
v_a_1771_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1722_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1722_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
}
v___jp_1365_:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lean_Elab_Tactic_Conv_getRhs___redArg(v___y_1369_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v_expr_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_a_1377_);
lean_dec_ref_known(v___x_1376_, 1);
v_expr_1378_ = lean_ctor_get(v___y_1366_, 0);
v___x_1379_ = l_Lean_Expr_mvarId_x21(v_a_1377_);
lean_dec(v_a_1377_);
lean_inc_ref(v_expr_1378_);
v___x_1380_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v___x_1379_, v_expr_1378_, v___y_1373_);
lean_dec_ref(v___x_1380_);
v___x_1381_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1369_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v___x_1383_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v___x_1381_, 1);
v___x_1383_ = l_Lean_Meta_Simp_Result_getProof(v___y_1366_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref_known(v___x_1383_, 1);
v___x_1385_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_a_1382_, v_a_1384_, v___y_1373_);
lean_dec_ref(v___x_1385_);
v___x_1386_ = lean_array_to_list(v_subgoals_1367_);
v___x_1387_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1386_, v___y_1369_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
return v___x_1387_;
}
else
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
lean_dec(v_a_1382_);
lean_dec_ref(v_subgoals_1367_);
v_a_1388_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1383_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1383_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
else
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1403_; 
lean_dec_ref(v_subgoals_1367_);
lean_dec_ref(v___y_1366_);
v_a_1396_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1398_ = v___x_1381_;
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1381_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1396_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec_ref(v_subgoals_1367_);
lean_dec_ref(v___y_1366_);
v_a_1404_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1376_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1376_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
v___jp_1412_:
{
size_t v_sz_1423_; size_t v___x_1424_; lean_object* v___x_1425_; 
v_sz_1423_ = lean_array_size(v___y_1422_);
v___x_1424_ = ((size_t)0ULL);
v___x_1425_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(v_sz_1423_, v___x_1424_, v___y_1422_);
v___y_1366_ = v___y_1421_;
v_subgoals_1367_ = v___x_1425_;
v___y_1368_ = v___y_1419_;
v___y_1369_ = v___y_1418_;
v___y_1370_ = v___y_1413_;
v___y_1371_ = v___y_1417_;
v___y_1372_ = v___y_1420_;
v___y_1373_ = v___y_1415_;
v___y_1374_ = v___y_1416_;
v___y_1375_ = v___y_1414_;
goto v___jp_1365_;
}
v___jp_1426_:
{
lean_object* v___x_1440_; 
v___x_1440_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v___y_1427_, v___y_1430_, v___y_1429_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec(v___y_1427_);
v___y_1413_ = v___y_1434_;
v___y_1414_ = v___y_1428_;
v___y_1415_ = v___y_1435_;
v___y_1416_ = v___y_1436_;
v___y_1417_ = v___y_1437_;
v___y_1418_ = v___y_1431_;
v___y_1419_ = v___y_1432_;
v___y_1420_ = v___y_1438_;
v___y_1421_ = v___y_1433_;
v___y_1422_ = v___x_1440_;
goto v___jp_1412_;
}
v___jp_1441_:
{
uint8_t v___x_1455_; 
v___x_1455_ = lean_nat_dec_le(v___y_1454_, v___y_1445_);
if (v___x_1455_ == 0)
{
lean_dec(v___y_1445_);
lean_inc(v___y_1454_);
v___y_1427_ = v___y_1442_;
v___y_1428_ = v___y_1443_;
v___y_1429_ = v___y_1454_;
v___y_1430_ = v___y_1444_;
v___y_1431_ = v___y_1446_;
v___y_1432_ = v___y_1447_;
v___y_1433_ = v___y_1448_;
v___y_1434_ = v___y_1449_;
v___y_1435_ = v___y_1450_;
v___y_1436_ = v___y_1451_;
v___y_1437_ = v___y_1452_;
v___y_1438_ = v___y_1453_;
v___y_1439_ = v___y_1454_;
goto v___jp_1426_;
}
else
{
v___y_1427_ = v___y_1442_;
v___y_1428_ = v___y_1443_;
v___y_1429_ = v___y_1454_;
v___y_1430_ = v___y_1444_;
v___y_1431_ = v___y_1446_;
v___y_1432_ = v___y_1447_;
v___y_1433_ = v___y_1448_;
v___y_1434_ = v___y_1449_;
v___y_1435_ = v___y_1450_;
v___y_1436_ = v___y_1451_;
v___y_1437_ = v___y_1452_;
v___y_1438_ = v___y_1453_;
v___y_1439_ = v___y_1445_;
goto v___jp_1426_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed(lean_object* v___x_1792_, lean_object* v___f_1793_, lean_object* v_stx_1794_, lean_object* v___x_1795_, lean_object* v___x_1796_, lean_object* v___x_1797_, lean_object* v___x_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v___x_17854__boxed_1808_; lean_object* v_res_1809_; 
v___x_17854__boxed_1808_ = lean_unbox(v___x_1792_);
v_res_1809_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(v___x_17854__boxed_1808_, v___f_1793_, v_stx_1794_, v___x_1795_, v___x_1796_, v___x_1797_, v___x_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
lean_dec_ref(v___y_1799_);
lean_dec(v_stx_1794_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern(lean_object* v_stx_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_){
_start:
{
lean_object* v___f_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; lean_object* v___x_1839_; lean_object* v___y_1840_; lean_object* v___x_1841_; 
v___f_1832_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__0));
v___x_1833_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__1));
v___x_1834_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__2));
v___x_1835_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__3));
v___x_1836_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__4));
v___x_1837_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__6));
lean_inc(v_stx_1822_);
v___x_1838_ = l_Lean_Syntax_isOfKind(v_stx_1822_, v___x_1837_);
v___x_1839_ = lean_box(v___x_1838_);
v___y_1840_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed), 16, 7);
lean_closure_set(v___y_1840_, 0, v___x_1839_);
lean_closure_set(v___y_1840_, 1, v___f_1832_);
lean_closure_set(v___y_1840_, 2, v_stx_1822_);
lean_closure_set(v___y_1840_, 3, v___x_1833_);
lean_closure_set(v___y_1840_, 4, v___x_1834_);
lean_closure_set(v___y_1840_, 5, v___x_1835_);
lean_closure_set(v___y_1840_, 6, v___x_1836_);
v___x_1841_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_1840_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___boxed(lean_object* v_stx_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_Lean_Elab_Tactic_Conv_evalPattern(v_stx_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_);
lean_dec(v_a_1850_);
lean_dec_ref(v_a_1849_);
lean_dec(v_a_1848_);
lean_dec_ref(v_a_1847_);
lean_dec(v_a_1846_);
lean_dec_ref(v_a_1845_);
lean_dec(v_a_1844_);
lean_dec_ref(v_a_1843_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(lean_object* v_00_u03b1_1853_, lean_object* v_ref_1854_, lean_object* v_msg_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(v_ref_1854_, v_msg_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___boxed(lean_object* v_00_u03b1_1866_, lean_object* v_ref_1867_, lean_object* v_msg_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(v_00_u03b1_1866_, v_ref_1867_, v_msg_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v_ref_1867_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(lean_object* v_mvarId_1879_, lean_object* v_val_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_mvarId_1879_, v_val_1880_, v___y_1886_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___boxed(lean_object* v_mvarId_1891_, lean_object* v_val_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(v_mvarId_1891_, v_val_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(lean_object* v_00_u03b1_1903_, lean_object* v_msg_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_1904_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___boxed(lean_object* v_00_u03b1_1915_, lean_object* v_msg_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(v_00_u03b1_1915_, v_msg_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(lean_object* v_n_1927_, lean_object* v_as_1928_, lean_object* v_lo_1929_, lean_object* v_hi_1930_, lean_object* v_w_1931_, lean_object* v_hlo_1932_, lean_object* v_hhi_1933_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_1927_, v_as_1928_, v_lo_1929_, v_hi_1930_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___boxed(lean_object* v_n_1935_, lean_object* v_as_1936_, lean_object* v_lo_1937_, lean_object* v_hi_1938_, lean_object* v_w_1939_, lean_object* v_hlo_1940_, lean_object* v_hhi_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(v_n_1935_, v_as_1936_, v_lo_1937_, v_hi_1938_, v_w_1939_, v_hlo_1940_, v_hhi_1941_);
lean_dec(v_hi_1938_);
lean_dec(v_n_1935_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(lean_object* v_as_1943_, size_t v_sz_1944_, size_t v_i_1945_, lean_object* v_bs_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v_sz_1944_, v_i_1945_, v_bs_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___boxed(lean_object* v_as_1957_, lean_object* v_sz_1958_, lean_object* v_i_1959_, lean_object* v_bs_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_){
_start:
{
size_t v_sz_boxed_1970_; size_t v_i_boxed_1971_; lean_object* v_res_1972_; 
v_sz_boxed_1970_ = lean_unbox_usize(v_sz_1958_);
lean_dec(v_sz_1958_);
v_i_boxed_1971_ = lean_unbox_usize(v_i_1959_);
lean_dec(v_i_1959_);
v_res_1972_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(v_as_1957_, v_sz_boxed_1970_, v_i_boxed_1971_, v_bs_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
lean_dec(v___y_1964_);
lean_dec_ref(v___y_1963_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
lean_dec_ref(v_as_1957_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(lean_object* v_n_1973_, lean_object* v_as_1974_, lean_object* v_lo_1975_, lean_object* v_hi_1976_, lean_object* v_w_1977_, lean_object* v_hlo_1978_, lean_object* v_hhi_1979_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_1973_, v_as_1974_, v_lo_1975_, v_hi_1976_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___boxed(lean_object* v_n_1981_, lean_object* v_as_1982_, lean_object* v_lo_1983_, lean_object* v_hi_1984_, lean_object* v_w_1985_, lean_object* v_hlo_1986_, lean_object* v_hhi_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(v_n_1981_, v_as_1982_, v_lo_1983_, v_hi_1984_, v_w_1985_, v_hlo_1986_, v_hhi_1987_);
lean_dec(v_hi_1984_);
lean_dec(v_n_1981_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3(lean_object* v_00_u03b2_1989_, lean_object* v_x_1990_, lean_object* v_x_1991_, lean_object* v_x_1992_){
_start:
{
lean_object* v___x_1993_; 
v___x_1993_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(v_x_1990_, v_x_1991_, v_x_1992_);
return v___x_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(lean_object* v_n_1994_, lean_object* v_lo_1995_, lean_object* v_hi_1996_, lean_object* v_hhi_1997_, lean_object* v_pivot_1998_, lean_object* v_as_1999_, lean_object* v_i_2000_, lean_object* v_k_2001_, lean_object* v_ilo_2002_, lean_object* v_ik_2003_, lean_object* v_w_2004_){
_start:
{
lean_object* v___x_2005_; 
v___x_2005_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_1996_, v_pivot_1998_, v_as_1999_, v_i_2000_, v_k_2001_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___boxed(lean_object* v_n_2006_, lean_object* v_lo_2007_, lean_object* v_hi_2008_, lean_object* v_hhi_2009_, lean_object* v_pivot_2010_, lean_object* v_as_2011_, lean_object* v_i_2012_, lean_object* v_k_2013_, lean_object* v_ilo_2014_, lean_object* v_ik_2015_, lean_object* v_w_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(v_n_2006_, v_lo_2007_, v_hi_2008_, v_hhi_2009_, v_pivot_2010_, v_as_2011_, v_i_2012_, v_k_2013_, v_ilo_2014_, v_ik_2015_, v_w_2016_);
lean_dec_ref(v_pivot_2010_);
lean_dec(v_hi_2008_);
lean_dec(v_lo_2007_);
lean_dec(v_n_2006_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(lean_object* v_n_2018_, lean_object* v_lo_2019_, lean_object* v_hi_2020_, lean_object* v_hhi_2021_, lean_object* v_pivot_2022_, lean_object* v_as_2023_, lean_object* v_i_2024_, lean_object* v_k_2025_, lean_object* v_ilo_2026_, lean_object* v_ik_2027_, lean_object* v_w_2028_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_2020_, v_pivot_2022_, v_as_2023_, v_i_2024_, v_k_2025_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___boxed(lean_object* v_n_2030_, lean_object* v_lo_2031_, lean_object* v_hi_2032_, lean_object* v_hhi_2033_, lean_object* v_pivot_2034_, lean_object* v_as_2035_, lean_object* v_i_2036_, lean_object* v_k_2037_, lean_object* v_ilo_2038_, lean_object* v_ik_2039_, lean_object* v_w_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(v_n_2030_, v_lo_2031_, v_hi_2032_, v_hhi_2033_, v_pivot_2034_, v_as_2035_, v_i_2036_, v_k_2037_, v_ilo_2038_, v_ik_2039_, v_w_2040_);
lean_dec_ref(v_pivot_2034_);
lean_dec(v_hi_2032_);
lean_dec(v_lo_2031_);
lean_dec(v_n_2030_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(lean_object* v_00_u03b2_2042_, lean_object* v_x_2043_, size_t v_x_2044_, size_t v_x_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_2043_, v_x_2044_, v_x_2045_, v_x_2046_, v_x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2049_, lean_object* v_x_2050_, lean_object* v_x_2051_, lean_object* v_x_2052_, lean_object* v_x_2053_, lean_object* v_x_2054_){
_start:
{
size_t v_x_18965__boxed_2055_; size_t v_x_18966__boxed_2056_; lean_object* v_res_2057_; 
v_x_18965__boxed_2055_ = lean_unbox_usize(v_x_2051_);
lean_dec(v_x_2051_);
v_x_18966__boxed_2056_ = lean_unbox_usize(v_x_2052_);
lean_dec(v_x_2052_);
v_res_2057_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(v_00_u03b2_2049_, v_x_2050_, v_x_18965__boxed_2055_, v_x_18966__boxed_2056_, v_x_2053_, v_x_2054_);
return v_res_2057_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(lean_object* v_as_2058_, lean_object* v_a_2059_, lean_object* v_x_2060_, lean_object* v_x_2061_){
_start:
{
uint8_t v___x_2062_; 
v___x_2062_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_2058_, v_a_2059_, v_x_2060_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___boxed(lean_object* v_as_2063_, lean_object* v_a_2064_, lean_object* v_x_2065_, lean_object* v_x_2066_){
_start:
{
uint8_t v_res_2067_; lean_object* v_r_2068_; 
v_res_2067_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(v_as_2063_, v_a_2064_, v_x_2065_, v_x_2066_);
lean_dec_ref(v_a_2064_);
lean_dec_ref(v_as_2063_);
v_r_2068_ = lean_box(v_res_2067_);
return v_r_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12(lean_object* v_00_u03b2_2069_, lean_object* v_n_2070_, lean_object* v_k_2071_, lean_object* v_v_2072_){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(v_n_2070_, v_k_2071_, v_v_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(lean_object* v_00_u03b2_2074_, size_t v_depth_2075_, lean_object* v_keys_2076_, lean_object* v_vals_2077_, lean_object* v_heq_2078_, lean_object* v_i_2079_, lean_object* v_entries_2080_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_depth_2075_, v_keys_2076_, v_vals_2077_, v_i_2079_, v_entries_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___boxed(lean_object* v_00_u03b2_2082_, lean_object* v_depth_2083_, lean_object* v_keys_2084_, lean_object* v_vals_2085_, lean_object* v_heq_2086_, lean_object* v_i_2087_, lean_object* v_entries_2088_){
_start:
{
size_t v_depth_boxed_2089_; lean_object* v_res_2090_; 
v_depth_boxed_2089_ = lean_unbox_usize(v_depth_2083_);
lean_dec(v_depth_2083_);
v_res_2090_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(v_00_u03b2_2082_, v_depth_boxed_2089_, v_keys_2084_, v_vals_2085_, v_heq_2086_, v_i_2087_, v_entries_2088_);
lean_dec_ref(v_vals_2085_);
lean_dec_ref(v_keys_2084_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16(lean_object* v_00_u03b2_2091_, lean_object* v_x_2092_, lean_object* v_x_2093_, lean_object* v_x_2094_, lean_object* v_x_2095_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(v_x_2092_, v_x_2093_, v_x_2094_, v_x_2095_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1(){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2106_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2107_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__6));
v___x_2108_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2));
v___x_2109_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___boxed), 10, 0);
v___x_2110_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2106_, v___x_2107_, v___x_2108_, v___x_2109_);
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___boxed(lean_object* v_a_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3(){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2139_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2));
v___x_2140_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6));
v___x_2141_ = l_Lean_addBuiltinDeclarationRanges(v___x_2139_, v___x_2140_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___boxed(lean_object* v_a_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
return v_res_2143_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
}
#ifdef __cplusplus
}
#endif
