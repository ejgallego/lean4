// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Lookahead
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Split import Lean.Meta.Tactic.Grind.EMatchAction
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
lean_object* l_Lean_Meta_Grind_Action_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_instantiate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_splitNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_mkAction();
lean_object* l_Lean_Meta_Grind_Action_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_assertAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_checkSplitStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_to_do(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_splitNext___boxed, .m_arity = 15, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_assertAll___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_instantiate___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed, .m_arity = 14, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "of_lookahead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 178, 46, 74, 114, 9, 243, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lookahead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value),LEAN_SCALAR_PTR_LITERAL(12, 254, 220, 45, 238, 117, 220, 189)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_value),LEAN_SCALAR_PTR_LITERAL(194, 159, 125, 127, 17, 128, 107, 57)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "try"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value),LEAN_SCALAR_PTR_LITERAL(12, 254, 220, 45, 238, 117, 220, 189)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_value),LEAN_SCALAR_PTR_LITERAL(132, 37, 244, 19, 72, 39, 101, 115)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(10000u);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(lean_object* v___f_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0));
v___x_21_ = l_Lean_Meta_Grind_Action_orElse(v___x_20_, v___f_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed(lean_object* v___f_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(v___f_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(lean_object* v_a_37_, lean_object* v___f_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Grind_Action_orElse(v_a_37_, v___f_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed(lean_object* v_a_53_, lean_object* v___f_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(v_a_53_, v___f_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(lean_object* v___f_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(10000u);
v___x_84_ = l_Lean_Meta_Grind_Action_loop___redArg(v___x_83_, v___f_69_, v___y_70_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed(lean_object* v___f_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(v___f_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_87_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(lean_object* v___f_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0));
v___x_116_ = l_Lean_Meta_Grind_Action_andThen(v___x_115_, v___f_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed(lean_object* v___f_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(v___f_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(lean_object* v___x_132_, lean_object* v___f_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Meta_Grind_Action_andThen(v___x_132_, v___f_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed(lean_object* v___x_148_, lean_object* v___f_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(v___x_148_, v___f_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(lean_object* v_goal_167_, lean_object* v_generation_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v_ref_179_; lean_object* v___f_180_; lean_object* v___x_181_; 
v_ref_179_ = lean_ctor_get(v_a_176_, 2);
v___f_180_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1));
v___x_181_ = l_Lean_Meta_Grind_Solvers_mkAction();
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___f_187_; lean_object* v___x_188_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v___f_183_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed), 15, 2);
lean_closure_set(v___f_183_, 0, v_a_182_);
lean_closure_set(v___f_183_, 1, v___f_180_);
v___f_184_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed), 14, 1);
lean_closure_set(v___f_184_, 0, v___f_183_);
v___f_185_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed), 14, 1);
lean_closure_set(v___f_185_, 0, v___f_184_);
v___x_186_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_intros___boxed), 14, 1);
lean_closure_set(v___x_186_, 0, v_generation_168_);
v___f_187_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed), 15, 2);
lean_closure_set(v___f_187_, 0, v___x_186_);
lean_closure_set(v___f_187_, 1, v___f_185_);
lean_inc_ref(v_goal_167_);
v___x_188_ = l_Lean_Meta_Grind_Action_run(v_goal_167_, v___f_187_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_215_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_215_ == 0)
{
v___x_191_ = v___x_188_;
v_isShared_192_ = v_isSharedCheck_215_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_215_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
if (lean_obj_tag(v_a_189_) == 0)
{
lean_object* v___x_193_; lean_object* v___x_195_; 
lean_dec_ref_known(v_a_189_, 1);
lean_dec_ref(v_goal_167_);
v___x_193_ = lean_box(0);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_193_);
v___x_195_ = v___x_191_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
else
{
lean_object* v_gs_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_214_; 
v_gs_197_ = lean_ctor_get(v_a_189_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_a_189_);
if (v_isSharedCheck_214_ == 0)
{
v___x_199_ = v_a_189_;
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_gs_197_);
lean_dec(v_a_189_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
if (lean_obj_tag(v_gs_197_) == 1)
{
lean_object* v_head_201_; lean_object* v___x_203_; 
lean_dec_ref(v_goal_167_);
v_head_201_ = lean_ctor_get(v_gs_197_, 0);
lean_inc(v_head_201_);
lean_dec_ref_known(v_gs_197_, 2);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_head_201_);
v___x_203_ = v___x_199_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_head_201_);
v___x_203_ = v_reuseFailAlloc_207_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_205_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_203_);
v___x_205_ = v___x_191_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
else
{
lean_object* v___x_209_; 
lean_dec(v_gs_197_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_goal_167_);
v___x_209_ = v___x_199_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_goal_167_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_209_);
v___x_211_ = v___x_191_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec_ref(v_goal_167_);
v_a_216_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_188_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_188_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_235_; 
lean_dec(v_generation_168_);
lean_dec_ref(v_goal_167_);
v_a_224_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_235_ == 0)
{
v___x_226_ = v___x_181_;
v_isShared_227_ = v_isSharedCheck_235_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_181_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_235_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_228_ = lean_io_error_to_string(v_a_224_);
v___x_229_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
v___x_230_ = l_Lean_MessageData_ofFormat(v___x_229_);
lean_inc(v_ref_179_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v_ref_179_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_231_);
v___x_233_ = v___x_226_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___boxed(lean_object* v_goal_236_, lean_object* v_generation_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(v_goal_236_, v_generation_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec_ref(v_a_241_);
lean_dec(v_a_240_);
lean_dec_ref(v_a_239_);
lean_dec(v_a_238_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(lean_object* v_e_249_, lean_object* v___y_250_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = l_Lean_Expr_hasMVar(v_e_249_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_e_249_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; lean_object* v_mctx_255_; lean_object* v___x_256_; lean_object* v_fst_257_; lean_object* v_snd_258_; lean_object* v___x_259_; lean_object* v_cache_260_; lean_object* v_zetaDeltaFVarIds_261_; lean_object* v_postponed_262_; lean_object* v_diag_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_272_; 
v___x_254_ = lean_st_ref_get(v___y_250_);
v_mctx_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc_ref(v_mctx_255_);
lean_dec(v___x_254_);
v___x_256_ = l_Lean_instantiateMVarsCore(v_mctx_255_, v_e_249_);
v_fst_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_fst_257_);
v_snd_258_ = lean_ctor_get(v___x_256_, 1);
lean_inc(v_snd_258_);
lean_dec_ref(v___x_256_);
v___x_259_ = lean_st_ref_take(v___y_250_);
v_cache_260_ = lean_ctor_get(v___x_259_, 1);
v_zetaDeltaFVarIds_261_ = lean_ctor_get(v___x_259_, 2);
v_postponed_262_ = lean_ctor_get(v___x_259_, 3);
v_diag_263_ = lean_ctor_get(v___x_259_, 4);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v___x_259_, 0);
lean_dec(v_unused_273_);
v___x_265_ = v___x_259_;
v_isShared_266_ = v_isSharedCheck_272_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_diag_263_);
lean_inc(v_postponed_262_);
lean_inc(v_zetaDeltaFVarIds_261_);
lean_inc(v_cache_260_);
lean_dec(v___x_259_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_272_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v_snd_258_);
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_snd_258_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_cache_260_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v_zetaDeltaFVarIds_261_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v_postponed_262_);
lean_ctor_set(v_reuseFailAlloc_271_, 4, v_diag_263_);
v___x_268_ = v_reuseFailAlloc_271_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_st_ref_put(v___y_250_, v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v_fst_257_);
return v___x_270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg___boxed(lean_object* v_e_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_e_274_, v___y_275_);
lean_dec(v___y_275_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(lean_object* v_e_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_e_278_, v___y_286_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___boxed(lean_object* v_e_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(v_e_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v___y_293_);
lean_dec(v___y_292_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(lean_object* v___y_304_, lean_object* v_mctx_305_, lean_object* v_cache_306_, lean_object* v_a_x3f_307_){
_start:
{
lean_object* v___x_309_; lean_object* v_zetaDeltaFVarIds_310_; lean_object* v_postponed_311_; lean_object* v_diag_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_322_; 
v___x_309_ = lean_st_ref_take(v___y_304_);
v_zetaDeltaFVarIds_310_ = lean_ctor_get(v___x_309_, 2);
v_postponed_311_ = lean_ctor_get(v___x_309_, 3);
v_diag_312_ = lean_ctor_get(v___x_309_, 4);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_322_ == 0)
{
lean_object* v_unused_323_; lean_object* v_unused_324_; 
v_unused_323_ = lean_ctor_get(v___x_309_, 1);
lean_dec(v_unused_323_);
v_unused_324_ = lean_ctor_get(v___x_309_, 0);
lean_dec(v_unused_324_);
v___x_314_ = v___x_309_;
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_diag_312_);
lean_inc(v_postponed_311_);
lean_inc(v_zetaDeltaFVarIds_310_);
lean_dec(v___x_309_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = lean_box(0);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_cache_306_);
lean_ctor_set(v___x_314_, 0, v_mctx_305_);
v___x_318_ = v___x_314_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_mctx_305_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_cache_306_);
lean_ctor_set(v_reuseFailAlloc_321_, 2, v_zetaDeltaFVarIds_310_);
lean_ctor_set(v_reuseFailAlloc_321_, 3, v_postponed_311_);
lean_ctor_set(v_reuseFailAlloc_321_, 4, v_diag_312_);
v___x_318_ = v_reuseFailAlloc_321_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_st_ref_put(v___y_304_, v___x_318_);
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_316_);
return v___x_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0___boxed(lean_object* v___y_325_, lean_object* v_mctx_326_, lean_object* v_cache_327_, lean_object* v_a_x3f_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_325_, v_mctx_326_, v_cache_327_, v_a_x3f_328_);
lean_dec(v_a_x3f_328_);
lean_dec(v___y_325_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(lean_object* v_x_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___x_343_; lean_object* v_mctx_344_; lean_object* v___x_345_; lean_object* v_cache_346_; lean_object* v___x_347_; 
v___x_343_ = lean_st_ref_get(v___y_339_);
v_mctx_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc_ref(v_mctx_344_);
lean_dec(v___x_343_);
v___x_345_ = lean_st_ref_get(v___y_339_);
v_cache_346_ = lean_ctor_get(v___x_345_, 1);
lean_inc_ref(v_cache_346_);
lean_dec(v___x_345_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
lean_inc(v___y_339_);
lean_inc_ref(v___y_338_);
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
lean_inc(v___y_335_);
lean_inc_ref(v___y_334_);
lean_inc(v___y_333_);
lean_inc(v___y_332_);
v___x_347_ = lean_apply_11(v_x_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, lean_box(0));
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_364_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_364_ == 0)
{
v___x_350_ = v___x_347_;
v_isShared_351_ = v_isSharedCheck_364_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_347_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_364_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
lean_inc(v_a_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set_tag(v___x_350_, 1);
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_363_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
v___x_354_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_339_, v_mctx_344_, v_cache_346_, v___x_353_);
lean_dec_ref(v___x_353_);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_361_ == 0)
{
lean_object* v_unused_362_; 
v_unused_362_ = lean_ctor_get(v___x_354_, 0);
lean_dec(v_unused_362_);
v___x_356_ = v___x_354_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_dec(v___x_354_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v_a_348_);
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_348_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
v_a_365_ = lean_ctor_get(v___x_347_, 0);
lean_inc(v_a_365_);
lean_dec_ref_known(v___x_347_, 1);
v___x_366_ = lean_box(0);
v___x_367_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_339_, v_mctx_344_, v_cache_346_, v___x_366_);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v___x_367_, 0);
lean_dec(v_unused_375_);
v___x_369_ = v___x_367_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_dec(v___x_367_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set_tag(v___x_369_, 1);
lean_ctor_set(v___x_369_, 0, v_a_365_);
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_365_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___boxed(lean_object* v_x_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v_x_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec(v___y_377_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(lean_object* v_00_u03b1_389_, lean_object* v_x_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v_x_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___boxed(lean_object* v_00_u03b1_403_, lean_object* v_x_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(v_00_u03b1_403_, v_x_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
lean_dec(v___y_406_);
lean_dec(v___y_405_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(lean_object* v_mvarId_419_, lean_object* v_e_420_, lean_object* v_toGoalState_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lean_MVarId_getTag(v_mvarId_419_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_435_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_433_, 1);
v___x_435_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_426_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v___x_435_, 1);
lean_inc_ref(v_e_420_);
v___x_437_ = l_Lean_mkNot(v_e_420_);
v___x_438_ = l_Lean_mkArrow(v___x_437_, v_a_436_, v___y_430_, v___y_431_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_440_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref_known(v___x_438_, 1);
v___x_440_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_439_, v_a_434_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v_nextDeclIdx_442_; lean_object* v_enodeMap_443_; lean_object* v_exprs_444_; lean_object* v_parents_445_; lean_object* v_condParents_446_; lean_object* v_congrTable_447_; lean_object* v_appMap_448_; lean_object* v_indicesFound_449_; lean_object* v_internalizing_450_; uint8_t v_inconsistent_451_; lean_object* v_nextIdx_452_; lean_object* v_newRawFacts_453_; lean_object* v_facts_454_; lean_object* v_extThms_455_; lean_object* v_ematch_456_; lean_object* v_inj_457_; lean_object* v_split_458_; lean_object* v_clean_459_; lean_object* v_sstates_460_; lean_object* v_goalStack_461_; uint64_t v_introBase_462_; lean_object* v_numIntros_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_511_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref_known(v___x_440_, 1);
v_nextDeclIdx_442_ = lean_ctor_get(v_toGoalState_421_, 0);
v_enodeMap_443_ = lean_ctor_get(v_toGoalState_421_, 1);
v_exprs_444_ = lean_ctor_get(v_toGoalState_421_, 2);
v_parents_445_ = lean_ctor_get(v_toGoalState_421_, 3);
v_condParents_446_ = lean_ctor_get(v_toGoalState_421_, 4);
v_congrTable_447_ = lean_ctor_get(v_toGoalState_421_, 5);
v_appMap_448_ = lean_ctor_get(v_toGoalState_421_, 6);
v_indicesFound_449_ = lean_ctor_get(v_toGoalState_421_, 7);
v_internalizing_450_ = lean_ctor_get(v_toGoalState_421_, 9);
v_inconsistent_451_ = lean_ctor_get_uint8(v_toGoalState_421_, sizeof(void*)*21 + 8);
v_nextIdx_452_ = lean_ctor_get(v_toGoalState_421_, 10);
v_newRawFacts_453_ = lean_ctor_get(v_toGoalState_421_, 11);
v_facts_454_ = lean_ctor_get(v_toGoalState_421_, 12);
v_extThms_455_ = lean_ctor_get(v_toGoalState_421_, 13);
v_ematch_456_ = lean_ctor_get(v_toGoalState_421_, 14);
v_inj_457_ = lean_ctor_get(v_toGoalState_421_, 15);
v_split_458_ = lean_ctor_get(v_toGoalState_421_, 16);
v_clean_459_ = lean_ctor_get(v_toGoalState_421_, 17);
v_sstates_460_ = lean_ctor_get(v_toGoalState_421_, 18);
v_goalStack_461_ = lean_ctor_get(v_toGoalState_421_, 19);
v_introBase_462_ = lean_ctor_get_uint64(v_toGoalState_421_, sizeof(void*)*21);
v_numIntros_463_ = lean_ctor_get(v_toGoalState_421_, 20);
v_isSharedCheck_511_ = !lean_is_exclusive(v_toGoalState_421_);
if (v_isSharedCheck_511_ == 0)
{
lean_object* v_unused_512_; 
v_unused_512_ = lean_ctor_get(v_toGoalState_421_, 8);
lean_dec(v_unused_512_);
v___x_465_ = v_toGoalState_421_;
v_isShared_466_ = v_isSharedCheck_511_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_numIntros_463_);
lean_inc(v_goalStack_461_);
lean_inc(v_sstates_460_);
lean_inc(v_clean_459_);
lean_inc(v_split_458_);
lean_inc(v_inj_457_);
lean_inc(v_ematch_456_);
lean_inc(v_extThms_455_);
lean_inc(v_facts_454_);
lean_inc(v_newRawFacts_453_);
lean_inc(v_nextIdx_452_);
lean_inc(v_internalizing_450_);
lean_inc(v_indicesFound_449_);
lean_inc(v_appMap_448_);
lean_inc(v_congrTable_447_);
lean_inc(v_condParents_446_);
lean_inc(v_parents_445_);
lean_inc(v_exprs_444_);
lean_inc(v_enodeMap_443_);
lean_inc(v_nextDeclIdx_442_);
lean_dec(v_toGoalState_421_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_511_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_467_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0));
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 8, v___x_467_);
v___x_469_ = v___x_465_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_nextDeclIdx_442_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_enodeMap_443_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v_exprs_444_);
lean_ctor_set(v_reuseFailAlloc_510_, 3, v_parents_445_);
lean_ctor_set(v_reuseFailAlloc_510_, 4, v_condParents_446_);
lean_ctor_set(v_reuseFailAlloc_510_, 5, v_congrTable_447_);
lean_ctor_set(v_reuseFailAlloc_510_, 6, v_appMap_448_);
lean_ctor_set(v_reuseFailAlloc_510_, 7, v_indicesFound_449_);
lean_ctor_set(v_reuseFailAlloc_510_, 8, v___x_467_);
lean_ctor_set(v_reuseFailAlloc_510_, 9, v_internalizing_450_);
lean_ctor_set(v_reuseFailAlloc_510_, 10, v_nextIdx_452_);
lean_ctor_set(v_reuseFailAlloc_510_, 11, v_newRawFacts_453_);
lean_ctor_set(v_reuseFailAlloc_510_, 12, v_facts_454_);
lean_ctor_set(v_reuseFailAlloc_510_, 13, v_extThms_455_);
lean_ctor_set(v_reuseFailAlloc_510_, 14, v_ematch_456_);
lean_ctor_set(v_reuseFailAlloc_510_, 15, v_inj_457_);
lean_ctor_set(v_reuseFailAlloc_510_, 16, v_split_458_);
lean_ctor_set(v_reuseFailAlloc_510_, 17, v_clean_459_);
lean_ctor_set(v_reuseFailAlloc_510_, 18, v_sstates_460_);
lean_ctor_set(v_reuseFailAlloc_510_, 19, v_goalStack_461_);
lean_ctor_set(v_reuseFailAlloc_510_, 20, v_numIntros_463_);
lean_ctor_set_uint8(v_reuseFailAlloc_510_, sizeof(void*)*21 + 8, v_inconsistent_451_);
lean_ctor_set_uint64(v_reuseFailAlloc_510_, sizeof(void*)*21, v_introBase_462_);
v___x_469_ = v_reuseFailAlloc_510_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = l_Lean_Expr_mvarId_x21(v_a_441_);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_420_, v___y_422_);
lean_dec_ref(v_e_420_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_474_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
v___x_474_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(v___x_471_, v_a_473_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_493_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_493_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_493_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_493_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
if (lean_obj_tag(v_a_475_) == 0)
{
lean_object* v___x_479_; lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_488_; 
lean_del_object(v___x_477_);
v___x_479_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_a_441_, v___y_429_);
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_488_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v_a_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_484_);
v___x_486_ = v___x_482_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
else
{
lean_object* v___x_489_; lean_object* v___x_491_; 
lean_dec_ref_known(v_a_475_, 1);
lean_dec(v_a_441_);
v___x_489_ = lean_box(0);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___x_489_);
v___x_491_ = v___x_477_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_489_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_dec(v_a_441_);
v_a_494_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_474_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_474_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_509_; 
lean_dec_ref_known(v___x_471_, 2);
lean_dec(v_a_441_);
v_a_502_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_509_ == 0)
{
v___x_504_ = v___x_472_;
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_472_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_507_; 
if (v_isShared_505_ == 0)
{
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_502_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
}
}
else
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
lean_dec_ref(v_toGoalState_421_);
lean_dec_ref(v_e_420_);
v_a_513_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_520_ == 0)
{
v___x_515_ = v___x_440_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_440_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_513_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_dec(v_a_434_);
lean_dec_ref(v_toGoalState_421_);
lean_dec_ref(v_e_420_);
v_a_521_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_438_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_438_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_a_434_);
lean_dec_ref(v_toGoalState_421_);
lean_dec_ref(v_e_420_);
v_a_529_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_435_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_435_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v_toGoalState_421_);
lean_dec_ref(v_e_420_);
v_a_537_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_433_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_433_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed(lean_object* v_mvarId_545_, lean_object* v_e_546_, lean_object* v_toGoalState_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(v_mvarId_545_, v_e_546_, v_toGoalState_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec(v___y_549_);
lean_dec(v___y_548_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(lean_object* v_msgData_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v___x_566_; lean_object* v_env_567_; uint8_t v___x_568_; lean_object* v_env_569_; lean_object* v___x_570_; lean_object* v_toCold_571_; lean_object* v_mctx_572_; lean_object* v_lctx_573_; lean_object* v_options_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_566_ = lean_st_ref_get(v___y_564_);
v_env_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc_ref(v_env_567_);
lean_dec(v___x_566_);
v___x_568_ = 0;
v_env_569_ = l_Lean_Environment_setRecordingDeps(v_env_567_, v___x_568_);
v___x_570_ = lean_st_ref_get(v___y_562_);
v_toCold_571_ = lean_ctor_get(v___y_563_, 0);
v_mctx_572_ = lean_ctor_get(v___x_570_, 0);
lean_inc_ref(v_mctx_572_);
lean_dec(v___x_570_);
v_lctx_573_ = lean_ctor_get(v___y_561_, 2);
v_options_574_ = lean_ctor_get(v_toCold_571_, 2);
lean_inc_ref(v_options_574_);
lean_inc_ref(v_lctx_573_);
v___x_575_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_575_, 0, v_env_569_);
lean_ctor_set(v___x_575_, 1, v_mctx_572_);
lean_ctor_set(v___x_575_, 2, v_lctx_573_);
lean_ctor_set(v___x_575_, 3, v_options_574_);
v___x_576_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v_msgData_560_);
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2___boxed(lean_object* v_msgData_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(v_msgData_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
return v_res_584_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_585_; double v___x_586_; 
v___x_585_ = lean_unsigned_to_nat(0u);
v___x_586_ = lean_float_of_nat(v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(lean_object* v_cls_590_, lean_object* v_msg_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_ref_597_; lean_object* v___x_598_; lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_644_; 
v_ref_597_ = lean_ctor_get(v___y_594_, 2);
v___x_598_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(v_msg_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
v_a_599_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_644_ == 0)
{
v___x_601_ = v___x_598_;
v_isShared_602_ = v_isSharedCheck_644_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_598_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_644_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v_traceState_604_; lean_object* v_env_605_; lean_object* v_nextMacroScope_606_; lean_object* v_ngen_607_; lean_object* v_auxDeclNGen_608_; lean_object* v_cache_609_; lean_object* v_recordedDeps_610_; lean_object* v_messages_611_; lean_object* v_infoState_612_; lean_object* v_snapshotTasks_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_643_; 
v___x_603_ = lean_st_ref_take(v___y_595_);
v_traceState_604_ = lean_ctor_get(v___x_603_, 4);
v_env_605_ = lean_ctor_get(v___x_603_, 0);
v_nextMacroScope_606_ = lean_ctor_get(v___x_603_, 1);
v_ngen_607_ = lean_ctor_get(v___x_603_, 2);
v_auxDeclNGen_608_ = lean_ctor_get(v___x_603_, 3);
v_cache_609_ = lean_ctor_get(v___x_603_, 5);
v_recordedDeps_610_ = lean_ctor_get(v___x_603_, 6);
v_messages_611_ = lean_ctor_get(v___x_603_, 7);
v_infoState_612_ = lean_ctor_get(v___x_603_, 8);
v_snapshotTasks_613_ = lean_ctor_get(v___x_603_, 9);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_643_ == 0)
{
v___x_615_ = v___x_603_;
v_isShared_616_ = v_isSharedCheck_643_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_snapshotTasks_613_);
lean_inc(v_infoState_612_);
lean_inc(v_messages_611_);
lean_inc(v_recordedDeps_610_);
lean_inc(v_cache_609_);
lean_inc(v_traceState_604_);
lean_inc(v_auxDeclNGen_608_);
lean_inc(v_ngen_607_);
lean_inc(v_nextMacroScope_606_);
lean_inc(v_env_605_);
lean_dec(v___x_603_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_643_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint64_t v_tid_617_; lean_object* v_traces_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_642_; 
v_tid_617_ = lean_ctor_get_uint64(v_traceState_604_, sizeof(void*)*1);
v_traces_618_ = lean_ctor_get(v_traceState_604_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v_traceState_604_);
if (v_isSharedCheck_642_ == 0)
{
v___x_620_ = v_traceState_604_;
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_traces_618_);
lean_dec(v_traceState_604_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_623_; double v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_622_ = lean_box(0);
v___x_623_ = lean_box(0);
v___x_624_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0);
v___x_625_ = 0;
v___x_626_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1));
v___x_627_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_627_, 0, v_cls_590_);
lean_ctor_set(v___x_627_, 1, v___x_623_);
lean_ctor_set(v___x_627_, 2, v___x_626_);
lean_ctor_set_float(v___x_627_, sizeof(void*)*3, v___x_624_);
lean_ctor_set_float(v___x_627_, sizeof(void*)*3 + 8, v___x_624_);
lean_ctor_set_uint8(v___x_627_, sizeof(void*)*3 + 16, v___x_625_);
v___x_628_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2));
v___x_629_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_629_, 0, v___x_627_);
lean_ctor_set(v___x_629_, 1, v_a_599_);
lean_ctor_set(v___x_629_, 2, v___x_628_);
lean_inc(v_ref_597_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v_ref_597_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = l_Lean_PersistentArray_push___redArg(v_traces_618_, v___x_630_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_631_);
v___x_633_ = v___x_620_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_631_);
lean_ctor_set_uint64(v_reuseFailAlloc_641_, sizeof(void*)*1, v_tid_617_);
v___x_633_ = v_reuseFailAlloc_641_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_635_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 4, v___x_633_);
v___x_635_ = v___x_615_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_env_605_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v_nextMacroScope_606_);
lean_ctor_set(v_reuseFailAlloc_640_, 2, v_ngen_607_);
lean_ctor_set(v_reuseFailAlloc_640_, 3, v_auxDeclNGen_608_);
lean_ctor_set(v_reuseFailAlloc_640_, 4, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_640_, 5, v_cache_609_);
lean_ctor_set(v_reuseFailAlloc_640_, 6, v_recordedDeps_610_);
lean_ctor_set(v_reuseFailAlloc_640_, 7, v_messages_611_);
lean_ctor_set(v_reuseFailAlloc_640_, 8, v_infoState_612_);
lean_ctor_set(v_reuseFailAlloc_640_, 9, v_snapshotTasks_613_);
v___x_635_ = v_reuseFailAlloc_640_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_636_ = lean_st_ref_put(v___y_595_, v___x_635_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_622_);
v___x_638_ = v___x_601_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_622_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___boxed(lean_object* v_cls_645_, lean_object* v_msg_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_645_, v_msg_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
return v_res_652_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_660_ = lean_box(0);
v___x_661_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3));
v___x_662_ = l_Lean_mkConst(v___x_661_, v___x_660_);
return v___x_662_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8));
v___x_674_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10));
v___x_675_ = l_Lean_Name_append(v___x_674_, v___x_673_);
return v___x_675_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14(void){
_start:
{
lean_object* v_cls_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_cls_681_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13));
v___x_682_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10));
v___x_683_ = l_Lean_Name_append(v___x_682_, v_cls_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(lean_object* v_e_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v_config_738_; lean_object* v_toCold_739_; lean_object* v_options_740_; lean_object* v_simp_741_; lean_object* v_simpMethods_742_; lean_object* v_symSimpMethods_743_; lean_object* v_symDSimpMethods_744_; lean_object* v_identity_745_; lean_object* v_activeSolvers_746_; lean_object* v_anchorRefs_x3f_747_; uint8_t v_anchors_748_; uint8_t v_reportMVarIssue_749_; lean_object* v_splitSource_750_; lean_object* v_ematchDiagSource_751_; lean_object* v_symPrios_752_; lean_object* v_extensions_753_; uint8_t v_debug_754_; uint8_t v_ematchDiag_755_; uint8_t v_trace_756_; uint8_t v_markInstances_757_; uint8_t v_lax_758_; uint8_t v_suggestions_759_; uint8_t v_locals_760_; lean_object* v_branches_761_; lean_object* v_splits_762_; lean_object* v_ematch_763_; lean_object* v_gen_764_; lean_object* v_genLocal_765_; lean_object* v_instances_766_; uint8_t v_matchEqs_767_; uint8_t v_splitMatch_768_; uint8_t v_splitIte_769_; uint8_t v_splitIndPred_770_; uint8_t v_splitImp_771_; lean_object* v_canonHeartbeats_772_; uint8_t v_ext_773_; uint8_t v_extAll_774_; uint8_t v_etaStruct_775_; uint8_t v_funext_776_; uint8_t v_lookahead_777_; uint8_t v_verbose_778_; uint8_t v_clean_779_; uint8_t v_mbtc_780_; uint8_t v_zetaDelta_781_; uint8_t v_zeta_782_; uint8_t v_distrib_783_; lean_object* v_maxChar_784_; uint8_t v_ring_785_; lean_object* v_ringSteps_786_; lean_object* v_ringMaxDegree_787_; uint8_t v_linarith_788_; uint8_t v_lia_789_; lean_object* v_liaSteps_790_; lean_object* v_liaReorders_791_; lean_object* v_liaReorderCases_792_; uint8_t v_hom_793_; uint8_t v_ac_794_; lean_object* v_acSteps_795_; lean_object* v_exp_796_; uint8_t v_abstractProof_797_; uint8_t v_inj_798_; uint8_t v_order_799_; lean_object* v_min_800_; lean_object* v_detailed_801_; uint8_t v_useSorry_802_; uint8_t v_revert_803_; uint8_t v_funCC_804_; uint8_t v_reducible_805_; lean_object* v_maxSuggestions_806_; lean_object* v_inheritedTraceOptions_807_; uint8_t v_hasTrace_808_; uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___x_864_; 
v_config_738_ = lean_ctor_get(v_a_687_, 4);
v_toCold_739_ = lean_ctor_get(v_a_693_, 0);
v_options_740_ = lean_ctor_get(v_toCold_739_, 2);
v_simp_741_ = lean_ctor_get(v_a_687_, 0);
v_simpMethods_742_ = lean_ctor_get(v_a_687_, 1);
v_symSimpMethods_743_ = lean_ctor_get(v_a_687_, 2);
v_symDSimpMethods_744_ = lean_ctor_get(v_a_687_, 3);
v_identity_745_ = lean_ctor_get(v_a_687_, 5);
v_activeSolvers_746_ = lean_ctor_get(v_a_687_, 6);
v_anchorRefs_x3f_747_ = lean_ctor_get(v_a_687_, 7);
v_anchors_748_ = lean_ctor_get_uint8(v_a_687_, sizeof(void*)*12);
v_reportMVarIssue_749_ = lean_ctor_get_uint8(v_a_687_, sizeof(void*)*12 + 2);
v_splitSource_750_ = lean_ctor_get(v_a_687_, 8);
v_ematchDiagSource_751_ = lean_ctor_get(v_a_687_, 9);
v_symPrios_752_ = lean_ctor_get(v_a_687_, 10);
v_extensions_753_ = lean_ctor_get(v_a_687_, 11);
v_debug_754_ = lean_ctor_get_uint8(v_a_687_, sizeof(void*)*12 + 3);
v_ematchDiag_755_ = lean_ctor_get_uint8(v_a_687_, sizeof(void*)*12 + 4);
v_trace_756_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18);
v_markInstances_757_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 1);
v_lax_758_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 2);
v_suggestions_759_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 3);
v_locals_760_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 4);
v_branches_761_ = lean_ctor_get(v_config_738_, 0);
v_splits_762_ = lean_ctor_get(v_config_738_, 1);
v_ematch_763_ = lean_ctor_get(v_config_738_, 2);
v_gen_764_ = lean_ctor_get(v_config_738_, 3);
v_genLocal_765_ = lean_ctor_get(v_config_738_, 4);
v_instances_766_ = lean_ctor_get(v_config_738_, 5);
v_matchEqs_767_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 5);
v_splitMatch_768_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 6);
v_splitIte_769_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 7);
v_splitIndPred_770_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 8);
v_splitImp_771_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 9);
v_canonHeartbeats_772_ = lean_ctor_get(v_config_738_, 6);
v_ext_773_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 10);
v_extAll_774_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 11);
v_etaStruct_775_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 12);
v_funext_776_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 13);
v_lookahead_777_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 14);
v_verbose_778_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 15);
v_clean_779_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 16);
v_mbtc_780_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 18);
v_zetaDelta_781_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 19);
v_zeta_782_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 20);
v_distrib_783_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 21);
v_maxChar_784_ = lean_ctor_get(v_config_738_, 7);
v_ring_785_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 22);
v_ringSteps_786_ = lean_ctor_get(v_config_738_, 8);
v_ringMaxDegree_787_ = lean_ctor_get(v_config_738_, 9);
v_linarith_788_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 23);
v_lia_789_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 24);
v_liaSteps_790_ = lean_ctor_get(v_config_738_, 10);
v_liaReorders_791_ = lean_ctor_get(v_config_738_, 11);
v_liaReorderCases_792_ = lean_ctor_get(v_config_738_, 12);
v_hom_793_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 25);
v_ac_794_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 26);
v_acSteps_795_ = lean_ctor_get(v_config_738_, 13);
v_exp_796_ = lean_ctor_get(v_config_738_, 14);
v_abstractProof_797_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 27);
v_inj_798_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 28);
v_order_799_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 29);
v_min_800_ = lean_ctor_get(v_config_738_, 15);
v_detailed_801_ = lean_ctor_get(v_config_738_, 16);
v_useSorry_802_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 30);
v_revert_803_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 31);
v_funCC_804_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 32);
v_reducible_805_ = lean_ctor_get_uint8(v_config_738_, sizeof(void*)*18 + 33);
v_maxSuggestions_806_ = lean_ctor_get(v_config_738_, 17);
v_inheritedTraceOptions_807_ = lean_ctor_get(v_toCold_739_, 11);
v_hasTrace_808_ = lean_ctor_get_uint8(v_options_740_, sizeof(void*)*1);
v___x_809_ = 1;
lean_inc(v_maxSuggestions_806_);
lean_inc(v_detailed_801_);
lean_inc(v_min_800_);
lean_inc(v_exp_796_);
lean_inc(v_acSteps_795_);
lean_inc(v_liaReorderCases_792_);
lean_inc(v_liaReorders_791_);
lean_inc(v_liaSteps_790_);
lean_inc(v_ringMaxDegree_787_);
lean_inc(v_ringSteps_786_);
lean_inc(v_maxChar_784_);
lean_inc(v_canonHeartbeats_772_);
lean_inc(v_instances_766_);
lean_inc(v_genLocal_765_);
lean_inc(v_gen_764_);
lean_inc(v_ematch_763_);
lean_inc(v_splits_762_);
lean_inc(v_branches_761_);
v___x_810_ = lean_alloc_ctor(0, 18, 34);
lean_ctor_set(v___x_810_, 0, v_branches_761_);
lean_ctor_set(v___x_810_, 1, v_splits_762_);
lean_ctor_set(v___x_810_, 2, v_ematch_763_);
lean_ctor_set(v___x_810_, 3, v_gen_764_);
lean_ctor_set(v___x_810_, 4, v_genLocal_765_);
lean_ctor_set(v___x_810_, 5, v_instances_766_);
lean_ctor_set(v___x_810_, 6, v_canonHeartbeats_772_);
lean_ctor_set(v___x_810_, 7, v_maxChar_784_);
lean_ctor_set(v___x_810_, 8, v_ringSteps_786_);
lean_ctor_set(v___x_810_, 9, v_ringMaxDegree_787_);
lean_ctor_set(v___x_810_, 10, v_liaSteps_790_);
lean_ctor_set(v___x_810_, 11, v_liaReorders_791_);
lean_ctor_set(v___x_810_, 12, v_liaReorderCases_792_);
lean_ctor_set(v___x_810_, 13, v_acSteps_795_);
lean_ctor_set(v___x_810_, 14, v_exp_796_);
lean_ctor_set(v___x_810_, 15, v_min_800_);
lean_ctor_set(v___x_810_, 16, v_detailed_801_);
lean_ctor_set(v___x_810_, 17, v_maxSuggestions_806_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18, v_trace_756_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 1, v_markInstances_757_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 2, v_lax_758_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 3, v_suggestions_759_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 4, v_locals_760_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 5, v_matchEqs_767_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 6, v_splitMatch_768_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 7, v_splitIte_769_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 8, v_splitIndPred_770_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 9, v_splitImp_771_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 10, v_ext_773_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 11, v_extAll_774_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 12, v_etaStruct_775_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 13, v_funext_776_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 14, v_lookahead_777_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 15, v_verbose_778_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 16, v_clean_779_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 17, v___x_809_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 18, v_mbtc_780_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 19, v_zetaDelta_781_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 20, v_zeta_782_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 21, v_distrib_783_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 22, v_ring_785_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 23, v_linarith_788_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 24, v_lia_789_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 25, v_hom_793_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 26, v_ac_794_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 27, v_abstractProof_797_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 28, v_inj_798_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 29, v_order_799_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 30, v_useSorry_802_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 31, v_revert_803_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 32, v_funCC_804_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*18 + 33, v_reducible_805_);
lean_inc_ref(v_extensions_753_);
lean_inc_ref(v_symPrios_752_);
lean_inc(v_ematchDiagSource_751_);
lean_inc(v_splitSource_750_);
lean_inc(v_anchorRefs_x3f_747_);
lean_inc_ref(v_activeSolvers_746_);
lean_inc(v_identity_745_);
lean_inc_ref(v_symDSimpMethods_744_);
lean_inc_ref(v_symSimpMethods_743_);
lean_inc_ref(v_simpMethods_742_);
lean_inc_ref(v_simp_741_);
v___x_864_ = lean_alloc_ctor(0, 12, 5);
lean_ctor_set(v___x_864_, 0, v_simp_741_);
lean_ctor_set(v___x_864_, 1, v_simpMethods_742_);
lean_ctor_set(v___x_864_, 2, v_symSimpMethods_743_);
lean_ctor_set(v___x_864_, 3, v_symDSimpMethods_744_);
lean_ctor_set(v___x_864_, 4, v___x_810_);
lean_ctor_set(v___x_864_, 5, v_identity_745_);
lean_ctor_set(v___x_864_, 6, v_activeSolvers_746_);
lean_ctor_set(v___x_864_, 7, v_anchorRefs_x3f_747_);
lean_ctor_set(v___x_864_, 8, v_splitSource_750_);
lean_ctor_set(v___x_864_, 9, v_ematchDiagSource_751_);
lean_ctor_set(v___x_864_, 10, v_symPrios_752_);
lean_ctor_set(v___x_864_, 11, v_extensions_753_);
lean_ctor_set_uint8(v___x_864_, sizeof(void*)*12, v_anchors_748_);
lean_ctor_set_uint8(v___x_864_, sizeof(void*)*12 + 1, v___x_809_);
lean_ctor_set_uint8(v___x_864_, sizeof(void*)*12 + 2, v_reportMVarIssue_749_);
lean_ctor_set_uint8(v___x_864_, sizeof(void*)*12 + 3, v_debug_754_);
lean_ctor_set_uint8(v___x_864_, sizeof(void*)*12 + 4, v_ematchDiag_755_);
if (v_hasTrace_808_ == 0)
{
v___y_812_ = v_a_685_;
v___y_813_ = v_a_686_;
v___y_814_ = v___x_864_;
v___y_815_ = v_a_688_;
v___y_816_ = v_a_689_;
v___y_817_ = v_a_690_;
v___y_818_ = v_a_691_;
v___y_819_ = v_a_692_;
v___y_820_ = v_a_693_;
v___y_821_ = v_a_694_;
goto v___jp_811_;
}
else
{
lean_object* v_cls_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v_cls_865_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13));
v___x_866_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14);
v___x_867_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_807_, v_options_740_, v___x_866_);
if (v___x_867_ == 0)
{
v___y_812_ = v_a_685_;
v___y_813_ = v_a_686_;
v___y_814_ = v___x_864_;
v___y_815_ = v_a_688_;
v___y_816_ = v_a_689_;
v___y_817_ = v_a_690_;
v___y_818_ = v_a_691_;
v___y_819_ = v_a_692_;
v___y_820_ = v_a_693_;
v___y_821_ = v_a_694_;
goto v___jp_811_;
}
else
{
lean_object* v___x_868_; 
v___x_868_ = l_Lean_Meta_Grind_updateLastTag(v_a_685_, v_a_686_, v___x_864_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; 
lean_dec_ref_known(v___x_868_, 1);
lean_inc_ref(v_e_684_);
v___x_869_ = l_Lean_MessageData_ofExpr(v_e_684_);
v___x_870_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_865_, v___x_869_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_dec_ref_known(v___x_870_, 1);
v___y_812_ = v_a_685_;
v___y_813_ = v_a_686_;
v___y_814_ = v___x_864_;
v___y_815_ = v_a_688_;
v___y_816_ = v_a_689_;
v___y_817_ = v_a_690_;
v___y_818_ = v_a_691_;
v___y_819_ = v_a_692_;
v___y_820_ = v_a_693_;
v___y_821_ = v_a_694_;
goto v___jp_811_;
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec_ref_known(v___x_864_, 12);
lean_dec_ref(v_e_684_);
v_a_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_dec_ref_known(v___x_864_, 12);
lean_dec_ref(v_e_684_);
v_a_879_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_868_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_868_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
}
v___jp_696_:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_708_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4);
lean_inc_ref(v_e_684_);
v___x_709_ = l_Lean_mkAppB(v___x_708_, v_e_684_, v___y_697_);
v___x_710_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_684_, v___x_709_, v___y_698_, v___y_700_, v___y_702_, v___y_704_, v___y_705_, v___y_706_, v___y_707_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v___x_711_; 
lean_dec_ref_known(v___x_710_, 1);
lean_inc(v___y_707_);
lean_inc_ref(v___y_706_);
lean_inc(v___y_705_);
lean_inc_ref(v___y_704_);
lean_inc(v___y_703_);
lean_inc_ref(v___y_702_);
lean_inc(v___y_701_);
lean_inc(v___y_699_);
lean_inc(v___y_698_);
v___x_711_ = lean_grind_process_to_do(v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_720_; 
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; 
v_unused_721_ = lean_ctor_get(v___x_711_, 0);
lean_dec(v_unused_721_);
v___x_713_ = v___x_711_;
v_isShared_714_ = v_isSharedCheck_720_;
goto v_resetjp_712_;
}
else
{
lean_dec(v___x_711_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_720_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
uint8_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_715_ = 1;
v___x_716_ = lean_box(v___x_715_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_716_);
v___x_718_ = v___x_713_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
v_a_722_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_711_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_711_);
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
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec_ref(v___y_700_);
v_a_730_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_710_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_710_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
v___jp_811_:
{
lean_object* v___x_822_; lean_object* v_toGoalState_823_; lean_object* v_mvarId_824_; lean_object* v___f_825_; lean_object* v___x_826_; 
v___x_822_ = lean_st_ref_get(v___y_812_);
v_toGoalState_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc_ref(v_toGoalState_823_);
v_mvarId_824_ = lean_ctor_get(v___x_822_, 1);
lean_inc(v_mvarId_824_);
lean_dec(v___x_822_);
lean_inc_ref(v_e_684_);
v___f_825_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed), 14, 3);
lean_closure_set(v___f_825_, 0, v_mvarId_824_);
lean_closure_set(v___f_825_, 1, v_e_684_);
lean_closure_set(v___f_825_, 2, v_toGoalState_823_);
v___x_826_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v___f_825_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_855_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_855_ == 0)
{
v___x_829_ = v___x_826_;
v_isShared_830_ = v_isSharedCheck_855_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_826_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_855_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
if (lean_obj_tag(v_a_827_) == 1)
{
lean_object* v_toCold_831_; lean_object* v_options_832_; uint8_t v_hasTrace_833_; 
lean_del_object(v___x_829_);
v_toCold_831_ = lean_ctor_get(v___y_820_, 0);
v_options_832_ = lean_ctor_get(v_toCold_831_, 2);
v_hasTrace_833_ = lean_ctor_get_uint8(v_options_832_, sizeof(void*)*1);
if (v_hasTrace_833_ == 0)
{
lean_object* v_val_834_; 
v_val_834_ = lean_ctor_get(v_a_827_, 0);
lean_inc(v_val_834_);
lean_dec_ref_known(v_a_827_, 1);
v___y_697_ = v_val_834_;
v___y_698_ = v___y_812_;
v___y_699_ = v___y_813_;
v___y_700_ = v___y_814_;
v___y_701_ = v___y_815_;
v___y_702_ = v___y_816_;
v___y_703_ = v___y_817_;
v___y_704_ = v___y_818_;
v___y_705_ = v___y_819_;
v___y_706_ = v___y_820_;
v___y_707_ = v___y_821_;
goto v___jp_696_;
}
else
{
lean_object* v_val_835_; lean_object* v_inheritedTraceOptions_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v_val_835_ = lean_ctor_get(v_a_827_, 0);
lean_inc(v_val_835_);
lean_dec_ref_known(v_a_827_, 1);
v_inheritedTraceOptions_836_ = lean_ctor_get(v_toCold_831_, 11);
v___x_837_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8));
v___x_838_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11);
v___x_839_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_836_, v_options_832_, v___x_838_);
if (v___x_839_ == 0)
{
v___y_697_ = v_val_835_;
v___y_698_ = v___y_812_;
v___y_699_ = v___y_813_;
v___y_700_ = v___y_814_;
v___y_701_ = v___y_815_;
v___y_702_ = v___y_816_;
v___y_703_ = v___y_817_;
v___y_704_ = v___y_818_;
v___y_705_ = v___y_819_;
v___y_706_ = v___y_820_;
v___y_707_ = v___y_821_;
goto v___jp_696_;
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; 
lean_inc_ref(v_e_684_);
v___x_840_ = l_Lean_MessageData_ofExpr(v_e_684_);
v___x_841_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v___x_837_, v___x_840_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_dec_ref_known(v___x_841_, 1);
v___y_697_ = v_val_835_;
v___y_698_ = v___y_812_;
v___y_699_ = v___y_813_;
v___y_700_ = v___y_814_;
v___y_701_ = v___y_815_;
v___y_702_ = v___y_816_;
v___y_703_ = v___y_817_;
v___y_704_ = v___y_818_;
v___y_705_ = v___y_819_;
v___y_706_ = v___y_820_;
v___y_707_ = v___y_821_;
goto v___jp_696_;
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
lean_dec(v_val_835_);
lean_dec_ref(v___y_814_);
lean_dec_ref(v_e_684_);
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
}
else
{
uint8_t v___x_850_; lean_object* v___x_851_; lean_object* v___x_853_; 
lean_dec(v_a_827_);
lean_dec_ref(v___y_814_);
lean_dec_ref(v_e_684_);
v___x_850_ = 0;
v___x_851_ = lean_box(v___x_850_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 0, v___x_851_);
v___x_853_ = v___x_829_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec_ref(v___y_814_);
lean_dec_ref(v_e_684_);
v_a_856_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_826_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_826_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___boxed(lean_object* v_e_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(v_e_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
lean_dec(v_a_897_);
lean_dec_ref(v_a_896_);
lean_dec(v_a_895_);
lean_dec_ref(v_a_894_);
lean_dec(v_a_893_);
lean_dec_ref(v_a_892_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
lean_dec(v_a_889_);
lean_dec(v_a_888_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(lean_object* v_cls_900_, lean_object* v_msg_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_900_, v_msg_901_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___boxed(lean_object* v_cls_914_, lean_object* v_msg_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(v_cls_914_, v_msg_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec(v___y_916_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(uint8_t v___x_928_, lean_object* v_as_x27_929_, lean_object* v_b_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
if (lean_obj_tag(v_as_x27_929_) == 0)
{
lean_object* v___x_942_; 
v___x_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_942_, 0, v_b_930_);
return v___x_942_;
}
else
{
lean_object* v_snd_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_1018_; 
v_snd_943_ = lean_ctor_get(v_b_930_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_b_930_);
if (v_isSharedCheck_1018_ == 0)
{
lean_object* v_unused_1019_; 
v_unused_1019_ = lean_ctor_get(v_b_930_, 0);
lean_dec(v_unused_1019_);
v___x_945_ = v_b_930_;
v_isShared_946_ = v_isSharedCheck_1018_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_snd_943_);
lean_dec(v_b_930_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_1018_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v_head_947_; lean_object* v_tail_948_; lean_object* v_fst_949_; lean_object* v_snd_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_1017_; 
v_head_947_ = lean_ctor_get(v_as_x27_929_, 0);
v_tail_948_ = lean_ctor_get(v_as_x27_929_, 1);
v_fst_949_ = lean_ctor_get(v_snd_943_, 0);
v_snd_950_ = lean_ctor_get(v_snd_943_, 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_snd_943_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_952_ = v_snd_943_;
v_isShared_953_ = v_isSharedCheck_1017_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_snd_950_);
lean_inc(v_fst_949_);
lean_dec(v_snd_943_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_1017_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_954_; lean_object* v___x_969_; 
v___x_954_ = lean_box(0);
v___x_969_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_931_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_1008_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_1008_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_1008_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
uint8_t v___x_974_; 
v___x_974_ = lean_unbox(v_a_970_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; 
lean_del_object(v___x_972_);
lean_dec(v_a_970_);
lean_inc(v_head_947_);
v___x_975_ = l_Lean_Meta_Grind_checkSplitStatus(v_head_947_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
lean_dec_ref_known(v___x_975_, 1);
switch(lean_obj_tag(v_a_976_))
{
case 0:
{
lean_dec(v_snd_950_);
goto v___jp_955_;
}
case 1:
{
lean_del_object(v___x_952_);
lean_del_object(v___x_945_);
goto v___jp_964_;
}
default: 
{
uint8_t v_tryPostpone_977_; 
v_tryPostpone_977_ = lean_ctor_get_uint8(v_a_976_, sizeof(void*)*1 + 1);
lean_dec_ref_known(v_a_976_, 1);
if (v_tryPostpone_977_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_head_947_);
v___x_979_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(v___x_978_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; uint8_t v___x_981_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_a_980_);
lean_dec_ref_known(v___x_979_, 1);
v___x_981_ = lean_unbox(v_a_980_);
lean_dec(v_a_980_);
if (v___x_981_ == 0)
{
lean_del_object(v___x_952_);
lean_del_object(v___x_945_);
goto v___jp_964_;
}
else
{
lean_dec(v_snd_950_);
goto v___jp_955_;
}
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
lean_dec(v_fst_949_);
lean_del_object(v___x_945_);
v_a_982_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_979_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_979_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
else
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
lean_del_object(v___x_952_);
lean_del_object(v___x_945_);
lean_inc(v_head_947_);
v___x_990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_990_, 0, v_head_947_);
lean_ctor_set(v___x_990_, 1, v_fst_949_);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
lean_ctor_set(v___x_991_, 1, v_snd_950_);
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_954_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v_as_x27_929_ = v_tail_948_;
v_b_930_ = v___x_992_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
lean_dec(v_fst_949_);
lean_del_object(v___x_945_);
v_a_994_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_975_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_975_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
else
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1006_; 
lean_del_object(v___x_952_);
lean_del_object(v___x_945_);
v___x_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1002_, 0, v_a_970_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v_fst_949_);
lean_ctor_set(v___x_1003_, 1, v_snd_950_);
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1002_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v___x_1004_);
v___x_1006_ = v___x_972_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
lean_dec(v_fst_949_);
lean_del_object(v___x_945_);
v_a_1009_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_969_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_969_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
v___jp_955_:
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = lean_box(v___x_928_);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v___x_956_);
v___x_958_ = v___x_952_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_fst_949_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v___x_956_);
v___x_958_ = v_reuseFailAlloc_963_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v___x_958_);
lean_ctor_set(v___x_945_, 0, v___x_954_);
v___x_960_ = v___x_945_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v___x_958_);
v___x_960_ = v_reuseFailAlloc_962_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
v_as_x27_929_ = v_tail_948_;
v_b_930_ = v___x_960_;
goto _start;
}
}
}
v___jp_964_:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
lean_inc(v_head_947_);
v___x_965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_965_, 0, v_head_947_);
lean_ctor_set(v___x_965_, 1, v_fst_949_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
lean_ctor_set(v___x_966_, 1, v_snd_950_);
v___x_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_954_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v_as_x27_929_ = v_tail_948_;
v_b_930_ = v___x_967_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg___boxed(lean_object* v___x_1020_, lean_object* v_as_x27_1021_, lean_object* v_b_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
uint8_t v___x_40829__boxed_1034_; lean_object* v_res_1035_; 
v___x_40829__boxed_1034_ = lean_unbox(v___x_1020_);
v_res_1035_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v___x_40829__boxed_1034_, v_as_x27_1021_, v_b_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec(v_as_x27_1021_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead(lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1038_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1231_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1231_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1231_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
uint8_t v_lookahead_1056_; 
v_lookahead_1056_ = lean_ctor_get_uint8(v_a_1052_, sizeof(void*)*18 + 14);
lean_dec(v_a_1052_);
if (v_lookahead_1056_ == 0)
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1057_ = lean_box(v_lookahead_1056_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1057_);
v___x_1059_ = v___x_1054_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
else
{
lean_object* v___x_1061_; lean_object* v_toGoalState_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1229_; 
lean_del_object(v___x_1054_);
v___x_1061_ = lean_st_ref_get(v_a_1036_);
v_toGoalState_1062_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1229_ == 0)
{
lean_object* v_unused_1230_; 
v_unused_1230_ = lean_ctor_get(v___x_1061_, 1);
lean_dec(v_unused_1230_);
v___x_1064_ = v___x_1061_;
v_isShared_1065_ = v_isSharedCheck_1229_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_toGoalState_1062_);
lean_dec(v___x_1061_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1229_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v_split_1066_; lean_object* v_lookaheads_1067_; uint8_t v___x_1068_; 
v_split_1066_ = lean_ctor_get(v_toGoalState_1062_, 16);
lean_inc_ref(v_split_1066_);
lean_dec_ref(v_toGoalState_1062_);
v_lookaheads_1067_ = lean_ctor_get(v_split_1066_, 4);
lean_inc(v_lookaheads_1067_);
lean_dec_ref(v_split_1066_);
v___x_1068_ = l_List_isEmpty___redArg(v_lookaheads_1067_);
lean_dec(v_lookaheads_1067_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v_toGoalState_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1227_; 
v___x_1069_ = lean_box(0);
v___x_1070_ = lean_st_ref_get(v_a_1036_);
v_toGoalState_1071_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1227_ == 0)
{
lean_object* v_unused_1228_; 
v_unused_1228_ = lean_ctor_get(v___x_1070_, 1);
lean_dec(v_unused_1228_);
v___x_1073_ = v___x_1070_;
v_isShared_1074_ = v_isSharedCheck_1227_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_toGoalState_1071_);
lean_dec(v___x_1070_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1227_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v_split_1075_; lean_object* v_lookaheads_1076_; lean_object* v___x_1077_; lean_object* v_toGoalState_1078_; lean_object* v_split_1079_; lean_object* v_mvarId_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1225_; 
v_split_1075_ = lean_ctor_get(v_toGoalState_1071_, 16);
lean_inc_ref(v_split_1075_);
lean_dec_ref(v_toGoalState_1071_);
v_lookaheads_1076_ = lean_ctor_get(v_split_1075_, 4);
lean_inc(v_lookaheads_1076_);
lean_dec_ref(v_split_1075_);
v___x_1077_ = lean_st_ref_take(v_a_1036_);
v_toGoalState_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc_ref(v_toGoalState_1078_);
v_split_1079_ = lean_ctor_get(v_toGoalState_1078_, 16);
lean_inc_ref(v_split_1079_);
v_mvarId_1080_ = lean_ctor_get(v___x_1077_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1225_ == 0)
{
lean_object* v_unused_1226_; 
v_unused_1226_ = lean_ctor_get(v___x_1077_, 0);
lean_dec(v_unused_1226_);
v___x_1082_ = v___x_1077_;
v_isShared_1083_ = v_isSharedCheck_1225_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_mvarId_1080_);
lean_dec(v___x_1077_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1225_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v_nextDeclIdx_1084_; lean_object* v_enodeMap_1085_; lean_object* v_exprs_1086_; lean_object* v_parents_1087_; lean_object* v_condParents_1088_; lean_object* v_congrTable_1089_; lean_object* v_appMap_1090_; lean_object* v_indicesFound_1091_; lean_object* v_toProcess_1092_; lean_object* v_internalizing_1093_; uint8_t v_inconsistent_1094_; lean_object* v_nextIdx_1095_; lean_object* v_newRawFacts_1096_; lean_object* v_facts_1097_; lean_object* v_extThms_1098_; lean_object* v_ematch_1099_; lean_object* v_inj_1100_; lean_object* v_clean_1101_; lean_object* v_sstates_1102_; lean_object* v_goalStack_1103_; uint64_t v_introBase_1104_; lean_object* v_numIntros_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1223_; 
v_nextDeclIdx_1084_ = lean_ctor_get(v_toGoalState_1078_, 0);
v_enodeMap_1085_ = lean_ctor_get(v_toGoalState_1078_, 1);
v_exprs_1086_ = lean_ctor_get(v_toGoalState_1078_, 2);
v_parents_1087_ = lean_ctor_get(v_toGoalState_1078_, 3);
v_condParents_1088_ = lean_ctor_get(v_toGoalState_1078_, 4);
v_congrTable_1089_ = lean_ctor_get(v_toGoalState_1078_, 5);
v_appMap_1090_ = lean_ctor_get(v_toGoalState_1078_, 6);
v_indicesFound_1091_ = lean_ctor_get(v_toGoalState_1078_, 7);
v_toProcess_1092_ = lean_ctor_get(v_toGoalState_1078_, 8);
v_internalizing_1093_ = lean_ctor_get(v_toGoalState_1078_, 9);
v_inconsistent_1094_ = lean_ctor_get_uint8(v_toGoalState_1078_, sizeof(void*)*21 + 8);
v_nextIdx_1095_ = lean_ctor_get(v_toGoalState_1078_, 10);
v_newRawFacts_1096_ = lean_ctor_get(v_toGoalState_1078_, 11);
v_facts_1097_ = lean_ctor_get(v_toGoalState_1078_, 12);
v_extThms_1098_ = lean_ctor_get(v_toGoalState_1078_, 13);
v_ematch_1099_ = lean_ctor_get(v_toGoalState_1078_, 14);
v_inj_1100_ = lean_ctor_get(v_toGoalState_1078_, 15);
v_clean_1101_ = lean_ctor_get(v_toGoalState_1078_, 17);
v_sstates_1102_ = lean_ctor_get(v_toGoalState_1078_, 18);
v_goalStack_1103_ = lean_ctor_get(v_toGoalState_1078_, 19);
v_introBase_1104_ = lean_ctor_get_uint64(v_toGoalState_1078_, sizeof(void*)*21);
v_numIntros_1105_ = lean_ctor_get(v_toGoalState_1078_, 20);
v_isSharedCheck_1223_ = !lean_is_exclusive(v_toGoalState_1078_);
if (v_isSharedCheck_1223_ == 0)
{
lean_object* v_unused_1224_; 
v_unused_1224_ = lean_ctor_get(v_toGoalState_1078_, 16);
lean_dec(v_unused_1224_);
v___x_1107_ = v_toGoalState_1078_;
v_isShared_1108_ = v_isSharedCheck_1223_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_numIntros_1105_);
lean_inc(v_goalStack_1103_);
lean_inc(v_sstates_1102_);
lean_inc(v_clean_1101_);
lean_inc(v_inj_1100_);
lean_inc(v_ematch_1099_);
lean_inc(v_extThms_1098_);
lean_inc(v_facts_1097_);
lean_inc(v_newRawFacts_1096_);
lean_inc(v_nextIdx_1095_);
lean_inc(v_internalizing_1093_);
lean_inc(v_toProcess_1092_);
lean_inc(v_indicesFound_1091_);
lean_inc(v_appMap_1090_);
lean_inc(v_congrTable_1089_);
lean_inc(v_condParents_1088_);
lean_inc(v_parents_1087_);
lean_inc(v_exprs_1086_);
lean_inc(v_enodeMap_1085_);
lean_inc(v_nextDeclIdx_1084_);
lean_dec(v_toGoalState_1078_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1223_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v_candidates_1109_; lean_object* v_added_1110_; lean_object* v_resolved_1111_; lean_object* v_trace_1112_; lean_object* v_argPosMap_1113_; lean_object* v_argsAt_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1221_; 
v_candidates_1109_ = lean_ctor_get(v_split_1079_, 0);
v_added_1110_ = lean_ctor_get(v_split_1079_, 1);
v_resolved_1111_ = lean_ctor_get(v_split_1079_, 2);
v_trace_1112_ = lean_ctor_get(v_split_1079_, 3);
v_argPosMap_1113_ = lean_ctor_get(v_split_1079_, 5);
v_argsAt_1114_ = lean_ctor_get(v_split_1079_, 6);
v_isSharedCheck_1221_ = !lean_is_exclusive(v_split_1079_);
if (v_isSharedCheck_1221_ == 0)
{
lean_object* v_unused_1222_; 
v_unused_1222_ = lean_ctor_get(v_split_1079_, 4);
lean_dec(v_unused_1222_);
v___x_1116_ = v_split_1079_;
v_isShared_1117_ = v_isSharedCheck_1221_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_argsAt_1114_);
lean_inc(v_argPosMap_1113_);
lean_inc(v_trace_1112_);
lean_inc(v_resolved_1111_);
lean_inc(v_added_1110_);
lean_inc(v_candidates_1109_);
lean_dec(v_split_1079_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1221_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 4, v___x_1069_);
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_candidates_1109_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_added_1110_);
lean_ctor_set(v_reuseFailAlloc_1220_, 2, v_resolved_1111_);
lean_ctor_set(v_reuseFailAlloc_1220_, 3, v_trace_1112_);
lean_ctor_set(v_reuseFailAlloc_1220_, 4, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1220_, 5, v_argPosMap_1113_);
lean_ctor_set(v_reuseFailAlloc_1220_, 6, v_argsAt_1114_);
v___x_1119_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
lean_object* v___x_1121_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 16, v___x_1119_);
v___x_1121_ = v___x_1107_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_nextDeclIdx_1084_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v_enodeMap_1085_);
lean_ctor_set(v_reuseFailAlloc_1219_, 2, v_exprs_1086_);
lean_ctor_set(v_reuseFailAlloc_1219_, 3, v_parents_1087_);
lean_ctor_set(v_reuseFailAlloc_1219_, 4, v_condParents_1088_);
lean_ctor_set(v_reuseFailAlloc_1219_, 5, v_congrTable_1089_);
lean_ctor_set(v_reuseFailAlloc_1219_, 6, v_appMap_1090_);
lean_ctor_set(v_reuseFailAlloc_1219_, 7, v_indicesFound_1091_);
lean_ctor_set(v_reuseFailAlloc_1219_, 8, v_toProcess_1092_);
lean_ctor_set(v_reuseFailAlloc_1219_, 9, v_internalizing_1093_);
lean_ctor_set(v_reuseFailAlloc_1219_, 10, v_nextIdx_1095_);
lean_ctor_set(v_reuseFailAlloc_1219_, 11, v_newRawFacts_1096_);
lean_ctor_set(v_reuseFailAlloc_1219_, 12, v_facts_1097_);
lean_ctor_set(v_reuseFailAlloc_1219_, 13, v_extThms_1098_);
lean_ctor_set(v_reuseFailAlloc_1219_, 14, v_ematch_1099_);
lean_ctor_set(v_reuseFailAlloc_1219_, 15, v_inj_1100_);
lean_ctor_set(v_reuseFailAlloc_1219_, 16, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1219_, 17, v_clean_1101_);
lean_ctor_set(v_reuseFailAlloc_1219_, 18, v_sstates_1102_);
lean_ctor_set(v_reuseFailAlloc_1219_, 19, v_goalStack_1103_);
lean_ctor_set(v_reuseFailAlloc_1219_, 20, v_numIntros_1105_);
lean_ctor_set_uint8(v_reuseFailAlloc_1219_, sizeof(void*)*21 + 8, v_inconsistent_1094_);
lean_ctor_set_uint64(v_reuseFailAlloc_1219_, sizeof(void*)*21, v_introBase_1104_);
v___x_1121_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_object* v___x_1123_; 
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1121_);
v___x_1123_ = v___x_1082_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_mvarId_1080_);
v___x_1123_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1128_; 
v___x_1124_ = lean_st_ref_put(v_a_1036_, v___x_1123_);
v___x_1125_ = lean_box(0);
v___x_1126_ = lean_box(v___x_1068_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 1, v___x_1126_);
lean_ctor_set(v___x_1073_, 0, v___x_1069_);
v___x_1128_ = v___x_1073_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v___x_1126_);
v___x_1128_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1130_; 
if (v_isShared_1065_ == 0)
{
lean_ctor_set(v___x_1064_, 1, v___x_1128_);
lean_ctor_set(v___x_1064_, 0, v___x_1125_);
v___x_1130_ = v___x_1064_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1125_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; 
v___x_1131_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v_lookahead_1056_, v_lookaheads_1076_, v___x_1130_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
lean_dec(v_lookaheads_1076_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1207_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1134_ = v___x_1131_;
v_isShared_1135_ = v_isSharedCheck_1207_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1207_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v_fst_1136_; 
v_fst_1136_ = lean_ctor_get(v_a_1132_, 0);
if (lean_obj_tag(v_fst_1136_) == 0)
{
lean_object* v_snd_1137_; lean_object* v_snd_1138_; uint8_t v___x_1139_; 
v_snd_1137_ = lean_ctor_get(v_a_1132_, 1);
lean_inc(v_snd_1137_);
lean_dec(v_a_1132_);
v_snd_1138_ = lean_ctor_get(v_snd_1137_, 1);
lean_inc(v_snd_1138_);
v___x_1139_ = lean_unbox(v_snd_1138_);
if (v___x_1139_ == 0)
{
lean_dec(v_snd_1138_);
lean_dec(v_snd_1137_);
lean_del_object(v___x_1134_);
goto v___jp_1047_;
}
else
{
lean_object* v_fst_1140_; lean_object* v___x_1141_; lean_object* v_toGoalState_1142_; lean_object* v_split_1143_; lean_object* v_mvarId_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1201_; 
v_fst_1140_ = lean_ctor_get(v_snd_1137_, 0);
lean_inc(v_fst_1140_);
lean_dec(v_snd_1137_);
v___x_1141_ = lean_st_ref_take(v_a_1036_);
v_toGoalState_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc_ref(v_toGoalState_1142_);
v_split_1143_ = lean_ctor_get(v_toGoalState_1142_, 16);
lean_inc_ref(v_split_1143_);
v_mvarId_1144_ = lean_ctor_get(v___x_1141_, 1);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1201_ == 0)
{
lean_object* v_unused_1202_; 
v_unused_1202_ = lean_ctor_get(v___x_1141_, 0);
lean_dec(v_unused_1202_);
v___x_1146_ = v___x_1141_;
v_isShared_1147_ = v_isSharedCheck_1201_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_mvarId_1144_);
lean_dec(v___x_1141_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1201_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_nextDeclIdx_1148_; lean_object* v_enodeMap_1149_; lean_object* v_exprs_1150_; lean_object* v_parents_1151_; lean_object* v_condParents_1152_; lean_object* v_congrTable_1153_; lean_object* v_appMap_1154_; lean_object* v_indicesFound_1155_; lean_object* v_toProcess_1156_; lean_object* v_internalizing_1157_; uint8_t v_inconsistent_1158_; lean_object* v_nextIdx_1159_; lean_object* v_newRawFacts_1160_; lean_object* v_facts_1161_; lean_object* v_extThms_1162_; lean_object* v_ematch_1163_; lean_object* v_inj_1164_; lean_object* v_clean_1165_; lean_object* v_sstates_1166_; lean_object* v_goalStack_1167_; uint64_t v_introBase_1168_; lean_object* v_numIntros_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1199_; 
v_nextDeclIdx_1148_ = lean_ctor_get(v_toGoalState_1142_, 0);
v_enodeMap_1149_ = lean_ctor_get(v_toGoalState_1142_, 1);
v_exprs_1150_ = lean_ctor_get(v_toGoalState_1142_, 2);
v_parents_1151_ = lean_ctor_get(v_toGoalState_1142_, 3);
v_condParents_1152_ = lean_ctor_get(v_toGoalState_1142_, 4);
v_congrTable_1153_ = lean_ctor_get(v_toGoalState_1142_, 5);
v_appMap_1154_ = lean_ctor_get(v_toGoalState_1142_, 6);
v_indicesFound_1155_ = lean_ctor_get(v_toGoalState_1142_, 7);
v_toProcess_1156_ = lean_ctor_get(v_toGoalState_1142_, 8);
v_internalizing_1157_ = lean_ctor_get(v_toGoalState_1142_, 9);
v_inconsistent_1158_ = lean_ctor_get_uint8(v_toGoalState_1142_, sizeof(void*)*21 + 8);
v_nextIdx_1159_ = lean_ctor_get(v_toGoalState_1142_, 10);
v_newRawFacts_1160_ = lean_ctor_get(v_toGoalState_1142_, 11);
v_facts_1161_ = lean_ctor_get(v_toGoalState_1142_, 12);
v_extThms_1162_ = lean_ctor_get(v_toGoalState_1142_, 13);
v_ematch_1163_ = lean_ctor_get(v_toGoalState_1142_, 14);
v_inj_1164_ = lean_ctor_get(v_toGoalState_1142_, 15);
v_clean_1165_ = lean_ctor_get(v_toGoalState_1142_, 17);
v_sstates_1166_ = lean_ctor_get(v_toGoalState_1142_, 18);
v_goalStack_1167_ = lean_ctor_get(v_toGoalState_1142_, 19);
v_introBase_1168_ = lean_ctor_get_uint64(v_toGoalState_1142_, sizeof(void*)*21);
v_numIntros_1169_ = lean_ctor_get(v_toGoalState_1142_, 20);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_toGoalState_1142_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; 
v_unused_1200_ = lean_ctor_get(v_toGoalState_1142_, 16);
lean_dec(v_unused_1200_);
v___x_1171_ = v_toGoalState_1142_;
v_isShared_1172_ = v_isSharedCheck_1199_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_numIntros_1169_);
lean_inc(v_goalStack_1167_);
lean_inc(v_sstates_1166_);
lean_inc(v_clean_1165_);
lean_inc(v_inj_1164_);
lean_inc(v_ematch_1163_);
lean_inc(v_extThms_1162_);
lean_inc(v_facts_1161_);
lean_inc(v_newRawFacts_1160_);
lean_inc(v_nextIdx_1159_);
lean_inc(v_internalizing_1157_);
lean_inc(v_toProcess_1156_);
lean_inc(v_indicesFound_1155_);
lean_inc(v_appMap_1154_);
lean_inc(v_congrTable_1153_);
lean_inc(v_condParents_1152_);
lean_inc(v_parents_1151_);
lean_inc(v_exprs_1150_);
lean_inc(v_enodeMap_1149_);
lean_inc(v_nextDeclIdx_1148_);
lean_dec(v_toGoalState_1142_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1199_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v_candidates_1173_; lean_object* v_added_1174_; lean_object* v_resolved_1175_; lean_object* v_trace_1176_; lean_object* v_lookaheads_1177_; lean_object* v_argPosMap_1178_; lean_object* v_argsAt_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1198_; 
v_candidates_1173_ = lean_ctor_get(v_split_1143_, 0);
v_added_1174_ = lean_ctor_get(v_split_1143_, 1);
v_resolved_1175_ = lean_ctor_get(v_split_1143_, 2);
v_trace_1176_ = lean_ctor_get(v_split_1143_, 3);
v_lookaheads_1177_ = lean_ctor_get(v_split_1143_, 4);
v_argPosMap_1178_ = lean_ctor_get(v_split_1143_, 5);
v_argsAt_1179_ = lean_ctor_get(v_split_1143_, 6);
v_isSharedCheck_1198_ = !lean_is_exclusive(v_split_1143_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1181_ = v_split_1143_;
v_isShared_1182_ = v_isSharedCheck_1198_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_argsAt_1179_);
lean_inc(v_argPosMap_1178_);
lean_inc(v_lookaheads_1177_);
lean_inc(v_trace_1176_);
lean_inc(v_resolved_1175_);
lean_inc(v_added_1174_);
lean_inc(v_candidates_1173_);
lean_dec(v_split_1143_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1198_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1183_ = l_List_reverse___redArg(v_fst_1140_);
v___x_1184_ = l_List_appendTR___redArg(v_lookaheads_1177_, v___x_1183_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 4, v___x_1184_);
v___x_1186_ = v___x_1181_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_candidates_1173_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v_added_1174_);
lean_ctor_set(v_reuseFailAlloc_1197_, 2, v_resolved_1175_);
lean_ctor_set(v_reuseFailAlloc_1197_, 3, v_trace_1176_);
lean_ctor_set(v_reuseFailAlloc_1197_, 4, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1197_, 5, v_argPosMap_1178_);
lean_ctor_set(v_reuseFailAlloc_1197_, 6, v_argsAt_1179_);
v___x_1186_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1188_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 16, v___x_1186_);
v___x_1188_ = v___x_1171_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_nextDeclIdx_1148_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v_enodeMap_1149_);
lean_ctor_set(v_reuseFailAlloc_1196_, 2, v_exprs_1150_);
lean_ctor_set(v_reuseFailAlloc_1196_, 3, v_parents_1151_);
lean_ctor_set(v_reuseFailAlloc_1196_, 4, v_condParents_1152_);
lean_ctor_set(v_reuseFailAlloc_1196_, 5, v_congrTable_1153_);
lean_ctor_set(v_reuseFailAlloc_1196_, 6, v_appMap_1154_);
lean_ctor_set(v_reuseFailAlloc_1196_, 7, v_indicesFound_1155_);
lean_ctor_set(v_reuseFailAlloc_1196_, 8, v_toProcess_1156_);
lean_ctor_set(v_reuseFailAlloc_1196_, 9, v_internalizing_1157_);
lean_ctor_set(v_reuseFailAlloc_1196_, 10, v_nextIdx_1159_);
lean_ctor_set(v_reuseFailAlloc_1196_, 11, v_newRawFacts_1160_);
lean_ctor_set(v_reuseFailAlloc_1196_, 12, v_facts_1161_);
lean_ctor_set(v_reuseFailAlloc_1196_, 13, v_extThms_1162_);
lean_ctor_set(v_reuseFailAlloc_1196_, 14, v_ematch_1163_);
lean_ctor_set(v_reuseFailAlloc_1196_, 15, v_inj_1164_);
lean_ctor_set(v_reuseFailAlloc_1196_, 16, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1196_, 17, v_clean_1165_);
lean_ctor_set(v_reuseFailAlloc_1196_, 18, v_sstates_1166_);
lean_ctor_set(v_reuseFailAlloc_1196_, 19, v_goalStack_1167_);
lean_ctor_set(v_reuseFailAlloc_1196_, 20, v_numIntros_1169_);
lean_ctor_set_uint8(v_reuseFailAlloc_1196_, sizeof(void*)*21 + 8, v_inconsistent_1158_);
lean_ctor_set_uint64(v_reuseFailAlloc_1196_, sizeof(void*)*21, v_introBase_1168_);
v___x_1188_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1190_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1188_);
v___x_1190_ = v___x_1146_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1188_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_mvarId_1144_);
v___x_1190_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; lean_object* v___x_1193_; 
v___x_1191_ = lean_st_ref_put(v_a_1036_, v___x_1190_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v_snd_1138_);
v___x_1193_ = v___x_1134_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_snd_1138_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
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
lean_object* v_val_1203_; lean_object* v___x_1205_; 
lean_inc_ref(v_fst_1136_);
lean_dec(v_a_1132_);
v_val_1203_ = lean_ctor_get(v_fst_1136_, 0);
lean_inc(v_val_1203_);
lean_dec_ref_known(v_fst_1136_, 1);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v_val_1203_);
v___x_1205_ = v___x_1134_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_val_1203_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
else
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
v_a_1208_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1131_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1131_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
}
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
lean_del_object(v___x_1064_);
goto v___jp_1047_;
}
}
}
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_a_1232_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1051_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1051_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
v___jp_1047_:
{
uint8_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1048_ = 0;
v___x_1049_ = lean_box(v___x_1048_);
v___x_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead___boxed(lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_Meta_Grind_lookahead(v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
lean_dec(v_a_1249_);
lean_dec_ref(v_a_1248_);
lean_dec(v_a_1247_);
lean_dec_ref(v_a_1246_);
lean_dec(v_a_1245_);
lean_dec_ref(v_a_1244_);
lean_dec(v_a_1243_);
lean_dec_ref(v_a_1242_);
lean_dec(v_a_1241_);
lean_dec(v_a_1240_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(uint8_t v___x_1252_, lean_object* v_as_1253_, lean_object* v_as_x27_1254_, lean_object* v_b_1255_, lean_object* v_a_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v___x_1252_, v_as_x27_1254_, v_b_1255_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___boxed(lean_object* v___x_1269_, lean_object* v_as_1270_, lean_object* v_as_x27_1271_, lean_object* v_b_1272_, lean_object* v_a_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
uint8_t v___x_41256__boxed_1285_; lean_object* v_res_1286_; 
v___x_41256__boxed_1285_ = lean_unbox(v___x_1269_);
v_res_1286_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(v___x_41256__boxed_1285_, v_as_1270_, v_as_x27_1271_, v_b_1272_, v_a_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec(v___y_1274_);
lean_dec(v_as_x27_1271_);
lean_dec(v_as_1270_);
return v_res_1286_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EMatchAction(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_EMatchAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations = _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_EMatchAction(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_EMatchAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
}
#ifdef __cplusplus
}
#endif
