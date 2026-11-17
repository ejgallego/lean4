// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Simp
// Imports: public import Init.Grind.Lemmas public import Lean.Meta.Tactic.Simp.Main public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Tactic.Grind.MatchDiscrOnly import Lean.Meta.Tactic.Grind.MarkNestedSubsingletons import Lean.Meta.Sym.Util import Lean.Meta.Sym.Simp.Main import Lean.Meta.Sym.Simp.Simproc import Lean.Meta.Sym.DSimp.Main
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setBooleanGuardMode(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Simp_mainCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFactCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_canonicalizeDecisionProjections(lean_object*);
extern lean_object* l_Lean_Meta_Grind_backward_grind_normalizer;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_foldProjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_preprocessExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_dsimpMainCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_abstractNestedProofs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markNestedSubsingletons(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_normalizeLevels(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_eraseSimpMatchDiscrsOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_replacePreMatchCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decide_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 229, 9, 191, 122, 61, 70, 94)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__5;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_symNorm___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_symNorm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_symNorm___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_symNorm___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_symNorm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_symNorm___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_symNorm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_symNorm___closed__2;
static const lean_closure_object l_Lean_Meta_Grind_symNorm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_symNorm___lam__1___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Grind_symNorm___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_symNorm___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grind dsimp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_preprocessImpl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_preprocessImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 174, 175, 152, 201, 92, 177, 229)}};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_preprocessImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_preprocessImpl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__5;
static const lean_string_object l_Lean_Meta_Grind_preprocessImpl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\n===>\n"};
static const lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_preprocessImpl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_preprocessImpl___closed__7;
LEAN_EXPORT lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pushNewFact"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_preprocessImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 237, 7, 223, 90, 130, 102, 106)}};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNewFact_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__3;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " ==> "};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNewFact_x27___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__5;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_pushNewFact_x27___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__6_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__7_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNewFact_x27___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_pushNewFact_x27___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNewFact_x27___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNewFact_x27___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg(lean_object* v_a_15_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_17_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_15_);
v___x_18_ = l_Lean_Meta_Grind_backward_grind_normalizer;
v___x_19_ = l_Lean_Option_get___at___00Lean_Meta_Grind_isLegacyNormalizer_spec__0(v___x_17_, v___x_18_);
lean_dec_ref(v___x_17_);
v___x_20_ = lean_box(v___x_19_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___redArg___boxed(lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_22_);
lean_dec_ref(v_a_22_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer(lean_object* v_a_25_, lean_object* v_a_26_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_25_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isLegacyNormalizer___boxed(lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Meta_Grind_isLegacyNormalizer(v_a_29_, v_a_30_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
return v_res_32_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__5(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_box(0);
v___x_43_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__4));
v___x_44_ = l_Lean_mkConst(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__8(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7);
v___x_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__8, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__8);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
lean_ctor_set(v___x_53_, 2, v___x_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate(lean_object* v_dmethods_54_, lean_object* v_e_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
if (lean_obj_tag(v_e_55_) == 11)
{
lean_object* v_typeName_69_; 
v_typeName_69_ = lean_ctor_get(v_e_55_, 0);
if (lean_obj_tag(v_typeName_69_) == 1)
{
lean_object* v_pre_70_; 
v_pre_70_ = lean_ctor_get(v_typeName_69_, 0);
if (lean_obj_tag(v_pre_70_) == 0)
{
lean_object* v_idx_71_; lean_object* v_struct_72_; lean_object* v_str_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v_idx_71_ = lean_ctor_get(v_e_55_, 1);
v_struct_72_ = lean_ctor_get(v_e_55_, 2);
lean_inc_ref(v_struct_72_);
v_str_73_ = lean_ctor_get(v_typeName_69_, 1);
v___x_74_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__1));
v___x_75_ = lean_string_dec_eq(v_str_73_, v___x_74_);
if (v___x_75_ == 0)
{
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
goto v___jp_66_;
}
else
{
lean_object* v___x_76_; uint8_t v___x_77_; uint8_t v___y_79_; 
v___x_76_ = lean_unsigned_to_nat(0u);
v___x_77_ = lean_nat_dec_eq(v_idx_71_, v___x_76_);
if (v___x_77_ == 0)
{
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
goto v___jp_66_;
}
else
{
lean_object* v___x_82_; 
lean_inc_ref(v_e_55_);
v___x_82_ = l_Lean_Meta_getBoolDecision_x3f(v_e_55_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_234_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_234_ == 0)
{
v___x_85_ = v___x_82_;
v_isShared_86_ = v_isSharedCheck_234_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_a_83_);
lean_dec(v___x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_234_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
if (lean_obj_tag(v_a_83_) == 1)
{
lean_object* v_val_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_228_; 
lean_del_object(v___x_85_);
v_val_87_ = lean_ctor_get(v_a_83_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v_a_83_);
if (v_isSharedCheck_228_ == 0)
{
v___x_89_ = v_a_83_;
v_isShared_90_ = v_isSharedCheck_228_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_val_87_);
lean_dec(v_a_83_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_228_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v_fst_91_; lean_object* v___x_92_; 
v_fst_91_ = lean_ctor_get(v_val_87_, 0);
lean_inc(v_fst_91_);
lean_dec(v_val_87_);
v___x_92_ = l_Lean_Meta_Sym_shareCommon(v_fst_91_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v_a_93_; lean_object* v___y_95_; lean_object* v___y_96_; uint8_t v___y_97_; lean_object* v___y_98_; lean_object* v___y_99_; lean_object* v_h_100_; lean_object* v___y_101_; lean_object* v___y_102_; lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_126_; uint8_t v___y_127_; lean_object* v___y_128_; lean_object* v___x_191_; 
v_a_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc_n(v_a_93_, 2);
lean_dec_ref_known(v___x_92_, 1);
lean_inc(v_a_64_);
lean_inc_ref(v_a_63_);
lean_inc(v_a_62_);
lean_inc_ref(v_a_61_);
lean_inc(v_a_60_);
lean_inc_ref(v_a_59_);
lean_inc(v_a_58_);
lean_inc_ref(v_a_57_);
lean_inc(v_a_56_);
v___x_191_ = lean_sym_simp(v_a_93_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v_fst_194_; lean_object* v_fst_195_; uint8_t v_snd_196_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
if (lean_obj_tag(v_a_192_) == 0)
{
uint8_t v_contextDependent_212_; lean_object* v___x_213_; 
lean_del_object(v___x_89_);
v_contextDependent_212_ = lean_ctor_get_uint8(v_a_192_, 1);
lean_dec_ref_known(v_a_192_, 0);
v___x_213_ = lean_box(0);
lean_inc(v_a_93_);
v_fst_194_ = v_a_93_;
v_fst_195_ = v___x_213_;
v_snd_196_ = v_contextDependent_212_;
goto v___jp_193_;
}
else
{
lean_object* v_e_x27_214_; lean_object* v_proof_215_; uint8_t v_contextDependent_216_; lean_object* v___x_218_; 
v_e_x27_214_ = lean_ctor_get(v_a_192_, 0);
lean_inc_ref(v_e_x27_214_);
v_proof_215_ = lean_ctor_get(v_a_192_, 1);
lean_inc_ref(v_proof_215_);
v_contextDependent_216_ = lean_ctor_get_uint8(v_a_192_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_192_, 2);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 0, v_proof_215_);
v___x_218_ = v___x_89_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_proof_215_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v_fst_194_ = v_e_x27_214_;
v_fst_195_ = v___x_218_;
v_snd_196_ = v_contextDependent_216_;
goto v___jp_193_;
}
}
v___jp_193_:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
lean_inc_ref(v_fst_194_);
v___x_197_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_197_, 0, v_fst_194_);
v___x_198_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__6));
v___x_199_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9);
v___x_200_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_197_, v_dmethods_54_, v___x_198_, v___x_199_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v_fst_202_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref_known(v___x_200_, 1);
v_fst_202_ = lean_ctor_get(v_a_201_, 0);
lean_inc(v_fst_202_);
lean_dec(v_a_201_);
if (lean_obj_tag(v_fst_202_) == 0)
{
lean_dec_ref_known(v_fst_202_, 0);
v___y_126_ = v_fst_195_;
v___y_127_ = v_snd_196_;
v___y_128_ = v_fst_194_;
goto v___jp_125_;
}
else
{
lean_object* v_e_x27_203_; 
lean_dec_ref(v_fst_194_);
v_e_x27_203_ = lean_ctor_get(v_fst_202_, 0);
lean_inc_ref(v_e_x27_203_);
lean_dec_ref_known(v_fst_202_, 1);
v___y_126_ = v_fst_195_;
v___y_127_ = v_snd_196_;
v___y_128_ = v_e_x27_203_;
goto v___jp_125_;
}
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_211_; 
lean_dec(v_fst_195_);
lean_dec_ref(v_fst_194_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
v_a_204_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_211_ == 0)
{
v___x_206_ = v___x_200_;
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_200_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_211_;
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
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_a_204_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
}
else
{
lean_dec(v_a_93_);
lean_del_object(v___x_89_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
return v___x_191_;
}
v___jp_94_:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__3));
lean_inc(v___y_99_);
v___x_106_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_105_, v___y_99_, v___y_101_, v___y_102_, v___y_103_, v___y_104_);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_116_; 
v_a_107_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_116_ == 0)
{
v___x_109_ = v___x_106_;
v_isShared_110_ = v_isSharedCheck_116_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_106_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_116_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_111_ = l_Lean_mkApp5(v_a_107_, v_a_93_, v___y_98_, v_h_100_, v_struct_72_, v___y_95_);
v___x_112_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_112_, 0, v___y_96_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*2, v___x_77_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*2 + 1, v___y_97_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v___x_112_);
v___x_114_ = v___x_109_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
lean_dec_ref(v_h_100_);
lean_dec_ref(v___y_98_);
lean_dec_ref(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
v_a_117_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_106_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_106_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
v___jp_125_:
{
size_t v___x_129_; size_t v___x_130_; uint8_t v___x_131_; 
v___x_129_ = lean_ptr_addr(v_a_93_);
v___x_130_ = lean_ptr_addr(v___y_128_);
v___x_131_ = lean_usize_dec_eq(v___x_129_, v___x_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_132_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__4));
v___x_133_ = lean_box(0);
v___x_134_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__5, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__5);
lean_inc_ref(v___y_128_);
v___x_135_ = l_Lean_Expr_app___override(v___x_134_, v___y_128_);
v___x_136_ = lean_box(0);
v___x_137_ = l_Lean_Meta_trySynthInstance(v___x_135_, v___x_136_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_182_; 
v_a_138_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_182_ == 0)
{
v___x_140_ = v___x_137_;
v_isShared_141_ = v_isSharedCheck_182_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_137_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_182_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
if (lean_obj_tag(v_a_138_) == 1)
{
lean_object* v_a_142_; lean_object* v___x_143_; 
lean_del_object(v___x_140_);
v_a_142_ = lean_ctor_get(v_a_138_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v_a_138_, 1);
v___x_143_ = l_Lean_Meta_Sym_shareCommon(v_a_142_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_143_) == 0)
{
lean_object* v_a_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc_n(v_a_144_, 2);
lean_dec_ref_known(v___x_143_, 1);
v___x_145_ = l_Lean_mkProj(v___x_132_, v___x_76_, v_a_144_);
v___x_146_ = l_Lean_Meta_Sym_shareCommon(v___x_145_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v_a_147_; size_t v___x_148_; size_t v___x_149_; uint8_t v___x_150_; 
v_a_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v___x_146_, 1);
v___x_148_ = lean_ptr_addr(v_e_55_);
lean_dec_ref_known(v_e_55_, 3);
v___x_149_ = lean_ptr_addr(v_a_147_);
v___x_150_ = lean_usize_dec_eq(v___x_148_, v___x_149_);
if (v___x_150_ == 0)
{
if (lean_obj_tag(v___y_126_) == 0)
{
lean_object* v___x_151_; 
lean_inc_ref(v___y_128_);
v___x_151_ = l_Lean_Meta_mkEqRefl(v___y_128_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref_known(v___x_151_, 1);
v___y_95_ = v_a_144_;
v___y_96_ = v_a_147_;
v___y_97_ = v___y_127_;
v___y_98_ = v___y_128_;
v___y_99_ = v___x_133_;
v_h_100_ = v_a_152_;
v___y_101_ = v_a_61_;
v___y_102_ = v_a_62_;
v___y_103_ = v_a_63_;
v___y_104_ = v_a_64_;
goto v___jp_94_;
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec(v_a_147_);
lean_dec(v_a_144_);
lean_dec_ref(v___y_128_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
v_a_153_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_151_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_151_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
else
{
lean_object* v_val_161_; 
v_val_161_ = lean_ctor_get(v___y_126_, 0);
lean_inc(v_val_161_);
lean_dec_ref_known(v___y_126_, 1);
v___y_95_ = v_a_144_;
v___y_96_ = v_a_147_;
v___y_97_ = v___y_127_;
v___y_98_ = v___y_128_;
v___y_99_ = v___x_133_;
v_h_100_ = v_val_161_;
v___y_101_ = v_a_61_;
v___y_102_ = v_a_62_;
v___y_103_ = v_a_63_;
v___y_104_ = v_a_64_;
goto v___jp_94_;
}
}
else
{
lean_dec(v_a_147_);
lean_dec(v_a_144_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_126_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
v___y_79_ = v___y_127_;
goto v___jp_78_;
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
lean_dec(v_a_144_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_126_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
v_a_162_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_146_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_146_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec_ref(v___y_128_);
lean_dec(v___y_126_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
v_a_170_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_143_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_143_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
else
{
lean_object* v___x_178_; lean_object* v___x_180_; 
lean_dec(v_a_138_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_126_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
v___x_178_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_178_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_178_, 1, v___y_127_);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 0, v___x_178_);
v___x_180_ = v___x_140_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec_ref(v___y_128_);
lean_dec(v___y_126_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
v_a_183_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_137_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_137_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_dec_ref(v___y_128_);
lean_dec(v___y_126_);
lean_dec(v_a_93_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
v___y_79_ = v___y_127_;
goto v___jp_78_;
}
}
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
lean_del_object(v___x_89_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
v_a_220_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_92_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_92_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
else
{
uint8_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_232_; 
lean_dec(v_a_83_);
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
v___x_229_ = 0;
v___x_230_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_230_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_230_, 1, v___x_229_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_230_);
v___x_232_ = v___x_85_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec_ref(v_struct_72_);
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
v_a_235_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_82_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_82_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
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
v___jp_78_:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_80_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_80_, 1, v___y_79_);
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
}
else
{
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
goto v___jp_66_;
}
}
else
{
lean_dec_ref_known(v_e_55_, 3);
lean_dec_ref(v_dmethods_54_);
goto v___jp_66_;
}
}
else
{
lean_dec_ref(v_e_55_);
lean_dec_ref(v_dmethods_54_);
goto v___jp_66_;
}
v___jp_66_:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__0));
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___boxed(lean_object* v_dmethods_243_, lean_object* v_e_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate(v_dmethods_243_, v_e_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
lean_dec(v_a_249_);
lean_dec_ref(v_a_248_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
return v_res_255_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_symNorm___lam__0(uint8_t v___x_256_, uint8_t v___x_257_, lean_object* v_e_258_){
_start:
{
if (lean_obj_tag(v_e_258_) == 11)
{
lean_object* v_typeName_259_; 
v_typeName_259_ = lean_ctor_get(v_e_258_, 0);
if (lean_obj_tag(v_typeName_259_) == 1)
{
lean_object* v_pre_260_; 
v_pre_260_ = lean_ctor_get(v_typeName_259_, 0);
if (lean_obj_tag(v_pre_260_) == 0)
{
lean_object* v_idx_261_; lean_object* v_str_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v_idx_261_ = lean_ctor_get(v_e_258_, 1);
v_str_262_ = lean_ctor_get(v_typeName_259_, 1);
v___x_263_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__1));
v___x_264_ = lean_string_dec_eq(v_str_262_, v___x_263_);
if (v___x_264_ == 0)
{
return v___x_256_;
}
else
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(0u);
v___x_266_ = lean_nat_dec_eq(v_idx_261_, v___x_265_);
if (v___x_266_ == 0)
{
return v___x_256_;
}
else
{
return v___x_257_;
}
}
}
else
{
return v___x_256_;
}
}
else
{
return v___x_256_;
}
}
else
{
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___lam__0___boxed(lean_object* v___x_267_, lean_object* v___x_268_, lean_object* v_e_269_){
_start:
{
uint8_t v___x_6803__boxed_270_; uint8_t v___x_6804__boxed_271_; uint8_t v_res_272_; lean_object* v_r_273_; 
v___x_6803__boxed_270_ = lean_unbox(v___x_267_);
v___x_6804__boxed_271_ = lean_unbox(v___x_268_);
v_res_272_ = l_Lean_Meta_Grind_symNorm___lam__0(v___x_6803__boxed_270_, v___x_6804__boxed_271_, v_e_269_);
lean_dec_ref(v_e_269_);
v_r_273_ = lean_box(v_res_272_);
return v_r_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___lam__1(uint8_t v___x_274_, lean_object* v_x_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_286_, 0, v___x_274_);
lean_ctor_set_uint8(v___x_286_, 1, v___x_274_);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___lam__1___boxed(lean_object* v___x_288_, lean_object* v_x_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v___x_6825__boxed_300_; lean_object* v_res_301_; 
v___x_6825__boxed_300_ = lean_unbox(v___x_288_);
v_res_301_ = l_Lean_Meta_Grind_symNorm___lam__1(v___x_6825__boxed_300_, v_x_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v_x_289_);
return v_res_301_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_symNorm___closed__1(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7);
v___x_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
return v___x_306_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_symNorm___closed__2(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_307_ = lean_obj_once(&l_Lean_Meta_Grind_symNorm___closed__1, &l_Lean_Meta_Grind_symNorm___closed__1_once, _init_l_Lean_Meta_Grind_symNorm___closed__1);
v___x_308_ = lean_unsigned_to_nat(0u);
v___x_309_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_307_);
lean_ctor_set(v___x_309_, 2, v___x_307_);
lean_ctor_set(v___x_309_, 3, v___x_307_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm(lean_object* v_e_313_, lean_object* v_methods_314_, lean_object* v_dmethods_315_, lean_object* v_s_316_, lean_object* v_ds_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lean_Meta_Grind_foldProjs(v_e_313_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v___x_325_, 1);
v___x_327_ = l_Lean_Meta_Sym_preprocessExpr(v_a_326_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc_n(v_a_328_, 2);
lean_dec_ref_known(v___x_327_, 1);
v___x_329_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_329_, 0, v_a_328_);
v___x_330_ = ((lean_object*)(l_Lean_Meta_Grind_symNorm___closed__0));
v___x_331_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_329_, v_methods_314_, v___x_330_, v_s_316_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_437_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_437_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_437_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_437_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v_fst_336_; lean_object* v_snd_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_436_; 
v_fst_336_ = lean_ctor_get(v_a_332_, 0);
v_snd_337_ = lean_ctor_get(v_a_332_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_a_332_);
if (v_isSharedCheck_436_ == 0)
{
v___x_339_ = v_a_332_;
v_isShared_340_ = v_isSharedCheck_436_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_snd_337_);
lean_inc(v_fst_336_);
lean_dec(v_a_332_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_436_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_367_; uint8_t v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v_fst_412_; lean_object* v_snd_413_; 
if (lean_obj_tag(v_fst_336_) == 0)
{
lean_object* v___x_432_; 
lean_dec_ref_known(v_fst_336_, 0);
v___x_432_ = lean_box(0);
v_fst_412_ = v_a_328_;
v_snd_413_ = v___x_432_;
goto v___jp_411_;
}
else
{
lean_object* v_e_x27_433_; lean_object* v_proof_434_; lean_object* v___x_435_; 
lean_dec(v_a_328_);
v_e_x27_433_ = lean_ctor_get(v_fst_336_, 0);
lean_inc_ref(v_e_x27_433_);
v_proof_434_ = lean_ctor_get(v_fst_336_, 1);
lean_inc_ref(v_proof_434_);
lean_dec_ref_known(v_fst_336_, 2);
v___x_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_435_, 0, v_proof_434_);
v_fst_412_ = v_e_x27_433_;
v_snd_413_ = v___x_435_;
goto v___jp_411_;
}
v___jp_341_:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_Meta_Simp_Result_mkEqTrans(v___y_343_, v___y_344_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_357_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_357_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_357_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_357_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 1, v___y_342_);
lean_ctor_set(v___x_339_, 0, v_snd_337_);
v___x_351_ = v___x_339_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_snd_337_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v___y_342_);
v___x_351_ = v_reuseFailAlloc_356_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v_a_346_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_352_);
v___x_354_ = v___x_348_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_352_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
lean_dec_ref(v___y_342_);
lean_del_object(v___x_339_);
lean_dec(v_snd_337_);
v_a_358_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_345_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_345_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
v___jp_366_:
{
uint8_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___f_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_372_ = 1;
v___x_373_ = lean_box(v___y_368_);
v___x_374_ = lean_box(v___x_372_);
v___f_375_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_symNorm___lam__0___boxed), 3, 2);
lean_closure_set(v___f_375_, 0, v___x_373_);
lean_closure_set(v___f_375_, 1, v___x_374_);
lean_inc_ref(v___y_371_);
v___x_376_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_376_, 0, v___y_371_);
lean_ctor_set(v___x_376_, 1, v___y_367_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*2, v___x_372_);
v___x_377_ = lean_find_expr(v___f_375_, v___y_371_);
lean_dec_ref(v___f_375_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
lean_dec_ref(v___y_371_);
lean_del_object(v___x_339_);
lean_dec_ref(v_dmethods_315_);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v_snd_337_);
lean_ctor_set(v___x_378_, 1, v___y_369_);
v___x_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_376_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_379_);
v___x_381_ = v___x_334_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
else
{
lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_409_; 
lean_del_object(v___x_334_);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_409_ == 0)
{
lean_object* v_unused_410_; 
v_unused_410_ = lean_ctor_get(v___x_377_, 0);
lean_dec(v_unused_410_);
v___x_384_ = v___x_377_;
v_isShared_385_ = v_isSharedCheck_409_;
goto v_resetjp_383_;
}
else
{
lean_dec(v___x_377_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_409_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
lean_inc_ref(v___y_371_);
v___x_386_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_386_, 0, v___y_371_);
v___x_387_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___boxed), 12, 1);
lean_closure_set(v___x_387_, 0, v_dmethods_315_);
lean_inc_ref(v___y_370_);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
lean_ctor_set(v___x_388_, 1, v___y_370_);
v___x_389_ = lean_obj_once(&l_Lean_Meta_Grind_symNorm___closed__2, &l_Lean_Meta_Grind_symNorm___closed__2_once, _init_l_Lean_Meta_Grind_symNorm___closed__2);
v___x_390_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_386_, v___x_388_, v___x_330_, v___x_389_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v_fst_392_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_a_391_);
lean_dec_ref_known(v___x_390_, 1);
v_fst_392_ = lean_ctor_get(v_a_391_, 0);
lean_inc(v_fst_392_);
lean_dec(v_a_391_);
if (lean_obj_tag(v_fst_392_) == 0)
{
lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec_ref_known(v_fst_392_, 0);
lean_del_object(v___x_384_);
v___x_393_ = lean_box(0);
v___x_394_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_394_, 0, v___y_371_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
lean_ctor_set_uint8(v___x_394_, sizeof(void*)*2, v___x_372_);
v___y_342_ = v___y_369_;
v___y_343_ = v___x_376_;
v___y_344_ = v___x_394_;
goto v___jp_341_;
}
else
{
lean_object* v_e_x27_395_; lean_object* v_proof_396_; lean_object* v___x_398_; 
lean_dec_ref(v___y_371_);
v_e_x27_395_ = lean_ctor_get(v_fst_392_, 0);
lean_inc_ref(v_e_x27_395_);
v_proof_396_ = lean_ctor_get(v_fst_392_, 1);
lean_inc_ref(v_proof_396_);
lean_dec_ref_known(v_fst_392_, 2);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v_proof_396_);
v___x_398_ = v___x_384_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_proof_396_);
v___x_398_ = v_reuseFailAlloc_400_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_399_; 
v___x_399_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_399_, 0, v_e_x27_395_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
lean_ctor_set_uint8(v___x_399_, sizeof(void*)*2, v___x_372_);
v___y_342_ = v___y_369_;
v___y_343_ = v___x_376_;
v___y_344_ = v___x_399_;
goto v___jp_341_;
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_del_object(v___x_384_);
lean_dec_ref_known(v___x_376_, 2);
lean_dec_ref(v___y_371_);
lean_dec_ref(v___y_369_);
lean_del_object(v___x_339_);
lean_dec(v_snd_337_);
v_a_401_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_390_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_390_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
}
v___jp_411_:
{
lean_object* v___x_414_; uint8_t v___x_415_; lean_object* v___f_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
lean_inc_ref(v_fst_412_);
v___x_414_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_414_, 0, v_fst_412_);
v___x_415_ = 0;
v___f_416_ = ((lean_object*)(l_Lean_Meta_Grind_symNorm___closed__3));
v___x_417_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__6));
lean_inc_ref(v_dmethods_315_);
v___x_418_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_414_, v_dmethods_315_, v___x_417_, v_ds_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v_fst_420_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
lean_dec_ref_known(v___x_418_, 1);
v_fst_420_ = lean_ctor_get(v_a_419_, 0);
if (lean_obj_tag(v_fst_420_) == 0)
{
lean_object* v_snd_421_; 
v_snd_421_ = lean_ctor_get(v_a_419_, 1);
lean_inc(v_snd_421_);
lean_dec(v_a_419_);
v___y_367_ = v_snd_413_;
v___y_368_ = v___x_415_;
v___y_369_ = v_snd_421_;
v___y_370_ = v___f_416_;
v___y_371_ = v_fst_412_;
goto v___jp_366_;
}
else
{
lean_object* v_snd_422_; lean_object* v_e_x27_423_; 
lean_inc_ref(v_fst_420_);
lean_dec_ref(v_fst_412_);
v_snd_422_ = lean_ctor_get(v_a_419_, 1);
lean_inc(v_snd_422_);
lean_dec(v_a_419_);
v_e_x27_423_ = lean_ctor_get(v_fst_420_, 0);
lean_inc_ref(v_e_x27_423_);
lean_dec_ref_known(v_fst_420_, 1);
v___y_367_ = v_snd_413_;
v___y_368_ = v___x_415_;
v___y_369_ = v_snd_422_;
v___y_370_ = v___f_416_;
v___y_371_ = v_e_x27_423_;
goto v___jp_366_;
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
lean_dec(v_snd_413_);
lean_dec_ref(v_fst_412_);
lean_del_object(v___x_339_);
lean_dec(v_snd_337_);
lean_del_object(v___x_334_);
lean_dec_ref(v_dmethods_315_);
v_a_424_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___x_418_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_418_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec(v_a_328_);
lean_dec_ref(v_ds_317_);
lean_dec_ref(v_dmethods_315_);
v_a_438_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_331_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_331_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec_ref(v_ds_317_);
lean_dec_ref(v_s_316_);
lean_dec_ref(v_dmethods_315_);
lean_dec_ref(v_methods_314_);
v_a_446_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_327_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_327_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
lean_dec_ref(v_ds_317_);
lean_dec_ref(v_s_316_);
lean_dec_ref(v_dmethods_315_);
lean_dec_ref(v_methods_314_);
v_a_454_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_325_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_325_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_symNorm___boxed(lean_object* v_e_462_, lean_object* v_methods_463_, lean_object* v_dmethods_464_, lean_object* v_s_465_, lean_object* v_ds_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lean_Meta_Grind_symNorm(v_e_462_, v_methods_463_, v_dmethods_464_, v_s_465_, v_ds_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_);
lean_dec(v_a_472_);
lean_dec_ref(v_a_471_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(lean_object* v_category_475_, lean_object* v_opts_476_, lean_object* v_act_477_, lean_object* v_decl_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
lean_inc(v___y_487_);
lean_inc_ref(v___y_486_);
lean_inc(v___y_485_);
lean_inc_ref(v___y_484_);
lean_inc(v___y_483_);
lean_inc_ref(v___y_482_);
lean_inc(v___y_481_);
lean_inc_ref(v___y_480_);
lean_inc(v___y_479_);
v___x_489_ = lean_apply_9(v_act_477_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
v___x_490_ = l_Lean_profileitIOUnsafe___redArg(v_category_475_, v_opts_476_, v___x_489_, v_decl_478_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg___boxed(lean_object* v_category_491_, lean_object* v_opts_492_, lean_object* v_act_493_, lean_object* v_decl_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v_category_491_, v_opts_492_, v_act_493_, v_decl_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v_opts_492_);
lean_dec_ref(v_category_491_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0(lean_object* v_00_u03b1_506_, lean_object* v_category_507_, lean_object* v_opts_508_, lean_object* v_act_509_, lean_object* v_decl_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v_category_507_, v_opts_508_, v_act_509_, v_decl_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___boxed(lean_object* v_00_u03b1_522_, lean_object* v_category_523_, lean_object* v_opts_524_, lean_object* v_act_525_, lean_object* v_decl_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0(v_00_u03b1_522_, v_category_523_, v_opts_524_, v_act_525_, v_decl_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v_opts_524_);
lean_dec_ref(v_category_523_);
return v_res_537_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_538_ = lean_obj_once(&l_Lean_Meta_Grind_symNorm___closed__1, &l_Lean_Meta_Grind_symNorm___closed__1_once, _init_l_Lean_Meta_Grind_symNorm___closed__1);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
lean_ctor_set(v___x_540_, 1, v___x_538_);
lean_ctor_set(v___x_540_, 2, v___x_538_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0(lean_object* v_e_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v___x_552_; lean_object* v_congrThms_553_; lean_object* v_simp_554_; lean_object* v_symSimp_555_; lean_object* v_symDSimp_556_; lean_object* v_lastTag_557_; lean_object* v_counters_558_; lean_object* v_splitDiags_559_; lean_object* v_ematchDiags_560_; lean_object* v_lawfulEqCmpMap_561_; lean_object* v_reflCmpMap_562_; lean_object* v_anchors_563_; lean_object* v_fvarAnchors_564_; lean_object* v_instanceMap_565_; lean_object* v_hoistedDecls_566_; lean_object* v_proofInfos_567_; lean_object* v_numBranches_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_626_; 
v___x_552_ = lean_st_ref_take(v___y_544_);
v_congrThms_553_ = lean_ctor_get(v___x_552_, 0);
v_simp_554_ = lean_ctor_get(v___x_552_, 1);
v_symSimp_555_ = lean_ctor_get(v___x_552_, 2);
v_symDSimp_556_ = lean_ctor_get(v___x_552_, 3);
v_lastTag_557_ = lean_ctor_get(v___x_552_, 4);
v_counters_558_ = lean_ctor_get(v___x_552_, 5);
v_splitDiags_559_ = lean_ctor_get(v___x_552_, 6);
v_ematchDiags_560_ = lean_ctor_get(v___x_552_, 7);
v_lawfulEqCmpMap_561_ = lean_ctor_get(v___x_552_, 8);
v_reflCmpMap_562_ = lean_ctor_get(v___x_552_, 9);
v_anchors_563_ = lean_ctor_get(v___x_552_, 10);
v_fvarAnchors_564_ = lean_ctor_get(v___x_552_, 11);
v_instanceMap_565_ = lean_ctor_get(v___x_552_, 12);
v_hoistedDecls_566_ = lean_ctor_get(v___x_552_, 13);
v_proofInfos_567_ = lean_ctor_get(v___x_552_, 14);
v_numBranches_568_ = lean_ctor_get(v___x_552_, 15);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_626_ == 0)
{
v___x_570_ = v___x_552_;
v_isShared_571_ = v_isSharedCheck_626_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_numBranches_568_);
lean_inc(v_proofInfos_567_);
lean_inc(v_hoistedDecls_566_);
lean_inc(v_instanceMap_565_);
lean_inc(v_fvarAnchors_564_);
lean_inc(v_anchors_563_);
lean_inc(v_reflCmpMap_562_);
lean_inc(v_lawfulEqCmpMap_561_);
lean_inc(v_ematchDiags_560_);
lean_inc(v_splitDiags_559_);
lean_inc(v_counters_558_);
lean_inc(v_lastTag_557_);
lean_inc(v_symDSimp_556_);
lean_inc(v_symSimp_555_);
lean_inc(v_simp_554_);
lean_inc(v_congrThms_553_);
lean_dec(v___x_552_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_626_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_575_; 
v___x_572_ = lean_obj_once(&l_Lean_Meta_Grind_symNorm___closed__2, &l_Lean_Meta_Grind_symNorm___closed__2_once, _init_l_Lean_Meta_Grind_symNorm___closed__2);
v___x_573_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___closed__0);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 3, v___x_573_);
lean_ctor_set(v___x_570_, 2, v___x_572_);
v___x_575_ = v___x_570_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_congrThms_553_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_simp_554_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v___x_572_);
lean_ctor_set(v_reuseFailAlloc_625_, 3, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_625_, 4, v_lastTag_557_);
lean_ctor_set(v_reuseFailAlloc_625_, 5, v_counters_558_);
lean_ctor_set(v_reuseFailAlloc_625_, 6, v_splitDiags_559_);
lean_ctor_set(v_reuseFailAlloc_625_, 7, v_ematchDiags_560_);
lean_ctor_set(v_reuseFailAlloc_625_, 8, v_lawfulEqCmpMap_561_);
lean_ctor_set(v_reuseFailAlloc_625_, 9, v_reflCmpMap_562_);
lean_ctor_set(v_reuseFailAlloc_625_, 10, v_anchors_563_);
lean_ctor_set(v_reuseFailAlloc_625_, 11, v_fvarAnchors_564_);
lean_ctor_set(v_reuseFailAlloc_625_, 12, v_instanceMap_565_);
lean_ctor_set(v_reuseFailAlloc_625_, 13, v_hoistedDecls_566_);
lean_ctor_set(v_reuseFailAlloc_625_, 14, v_proofInfos_567_);
lean_ctor_set(v_reuseFailAlloc_625_, 15, v_numBranches_568_);
v___x_575_ = v_reuseFailAlloc_625_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; lean_object* v_symSimpMethods_577_; lean_object* v_symDSimpMethods_578_; lean_object* v___x_579_; 
v___x_576_ = lean_st_ref_put(v___y_544_, v___x_575_);
v_symSimpMethods_577_ = lean_ctor_get(v___y_543_, 2);
v_symDSimpMethods_578_ = lean_ctor_get(v___y_543_, 3);
lean_inc_ref(v_symDSimpMethods_578_);
lean_inc_ref(v_symSimpMethods_577_);
v___x_579_ = l_Lean_Meta_Grind_symNorm(v_e_541_, v_symSimpMethods_577_, v_symDSimpMethods_578_, v_symSimp_555_, v_symDSimp_556_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_616_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_616_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_616_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_616_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v_snd_584_; lean_object* v_fst_585_; lean_object* v_fst_586_; lean_object* v_snd_587_; lean_object* v___x_588_; lean_object* v_congrThms_589_; lean_object* v_simp_590_; lean_object* v_lastTag_591_; lean_object* v_counters_592_; lean_object* v_splitDiags_593_; lean_object* v_ematchDiags_594_; lean_object* v_lawfulEqCmpMap_595_; lean_object* v_reflCmpMap_596_; lean_object* v_anchors_597_; lean_object* v_fvarAnchors_598_; lean_object* v_instanceMap_599_; lean_object* v_hoistedDecls_600_; lean_object* v_proofInfos_601_; lean_object* v_numBranches_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_613_; 
v_snd_584_ = lean_ctor_get(v_a_580_, 1);
lean_inc(v_snd_584_);
v_fst_585_ = lean_ctor_get(v_a_580_, 0);
lean_inc(v_fst_585_);
lean_dec(v_a_580_);
v_fst_586_ = lean_ctor_get(v_snd_584_, 0);
lean_inc(v_fst_586_);
v_snd_587_ = lean_ctor_get(v_snd_584_, 1);
lean_inc(v_snd_587_);
lean_dec(v_snd_584_);
v___x_588_ = lean_st_ref_take(v___y_544_);
v_congrThms_589_ = lean_ctor_get(v___x_588_, 0);
v_simp_590_ = lean_ctor_get(v___x_588_, 1);
v_lastTag_591_ = lean_ctor_get(v___x_588_, 4);
v_counters_592_ = lean_ctor_get(v___x_588_, 5);
v_splitDiags_593_ = lean_ctor_get(v___x_588_, 6);
v_ematchDiags_594_ = lean_ctor_get(v___x_588_, 7);
v_lawfulEqCmpMap_595_ = lean_ctor_get(v___x_588_, 8);
v_reflCmpMap_596_ = lean_ctor_get(v___x_588_, 9);
v_anchors_597_ = lean_ctor_get(v___x_588_, 10);
v_fvarAnchors_598_ = lean_ctor_get(v___x_588_, 11);
v_instanceMap_599_ = lean_ctor_get(v___x_588_, 12);
v_hoistedDecls_600_ = lean_ctor_get(v___x_588_, 13);
v_proofInfos_601_ = lean_ctor_get(v___x_588_, 14);
v_numBranches_602_ = lean_ctor_get(v___x_588_, 15);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; lean_object* v_unused_615_; 
v_unused_614_ = lean_ctor_get(v___x_588_, 3);
lean_dec(v_unused_614_);
v_unused_615_ = lean_ctor_get(v___x_588_, 2);
lean_dec(v_unused_615_);
v___x_604_ = v___x_588_;
v_isShared_605_ = v_isSharedCheck_613_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_numBranches_602_);
lean_inc(v_proofInfos_601_);
lean_inc(v_hoistedDecls_600_);
lean_inc(v_instanceMap_599_);
lean_inc(v_fvarAnchors_598_);
lean_inc(v_anchors_597_);
lean_inc(v_reflCmpMap_596_);
lean_inc(v_lawfulEqCmpMap_595_);
lean_inc(v_ematchDiags_594_);
lean_inc(v_splitDiags_593_);
lean_inc(v_counters_592_);
lean_inc(v_lastTag_591_);
lean_inc(v_simp_590_);
lean_inc(v_congrThms_589_);
lean_dec(v___x_588_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_613_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 3, v_snd_587_);
lean_ctor_set(v___x_604_, 2, v_fst_586_);
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_congrThms_589_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_simp_590_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v_fst_586_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v_snd_587_);
lean_ctor_set(v_reuseFailAlloc_612_, 4, v_lastTag_591_);
lean_ctor_set(v_reuseFailAlloc_612_, 5, v_counters_592_);
lean_ctor_set(v_reuseFailAlloc_612_, 6, v_splitDiags_593_);
lean_ctor_set(v_reuseFailAlloc_612_, 7, v_ematchDiags_594_);
lean_ctor_set(v_reuseFailAlloc_612_, 8, v_lawfulEqCmpMap_595_);
lean_ctor_set(v_reuseFailAlloc_612_, 9, v_reflCmpMap_596_);
lean_ctor_set(v_reuseFailAlloc_612_, 10, v_anchors_597_);
lean_ctor_set(v_reuseFailAlloc_612_, 11, v_fvarAnchors_598_);
lean_ctor_set(v_reuseFailAlloc_612_, 12, v_instanceMap_599_);
lean_ctor_set(v_reuseFailAlloc_612_, 13, v_hoistedDecls_600_);
lean_ctor_set(v_reuseFailAlloc_612_, 14, v_proofInfos_601_);
lean_ctor_set(v_reuseFailAlloc_612_, 15, v_numBranches_602_);
v___x_607_ = v_reuseFailAlloc_612_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_608_ = lean_st_ref_put(v___y_544_, v___x_607_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v_fst_585_);
v___x_610_ = v___x_582_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_fst_585_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
v_a_617_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_579_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_579_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___boxed(lean_object* v_e_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0(v_e_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(lean_object* v_e_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v___f_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___f_651_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_651_, 0, v_e_640_);
v___x_652_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_648_);
v___x_653_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0));
v___x_654_ = lean_box(0);
v___x_655_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_653_, v___x_652_, v___f_651_, v___x_654_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_);
lean_dec_ref(v___x_652_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___boxed(lean_object* v_e_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(v_e_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
lean_dec(v_a_659_);
lean_dec_ref(v_a_658_);
lean_dec(v_a_657_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0(lean_object* v_e_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lean_Meta_Grind_foldProjs(v_e_668_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_681_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_a_680_);
lean_dec_ref_known(v___x_679_, 1);
v___x_681_ = l_Lean_Meta_Sym_preprocessExpr(v_a_680_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v_a_682_; lean_object* v___x_683_; lean_object* v_congrThms_684_; lean_object* v_simp_685_; lean_object* v_symSimp_686_; lean_object* v_symDSimp_687_; lean_object* v_lastTag_688_; lean_object* v_counters_689_; lean_object* v_splitDiags_690_; lean_object* v_ematchDiags_691_; lean_object* v_lawfulEqCmpMap_692_; lean_object* v_reflCmpMap_693_; lean_object* v_anchors_694_; lean_object* v_fvarAnchors_695_; lean_object* v_instanceMap_696_; lean_object* v_hoistedDecls_697_; lean_object* v_proofInfos_698_; lean_object* v_numBranches_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_759_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_681_, 1);
v___x_683_ = lean_st_ref_take(v___y_671_);
v_congrThms_684_ = lean_ctor_get(v___x_683_, 0);
v_simp_685_ = lean_ctor_get(v___x_683_, 1);
v_symSimp_686_ = lean_ctor_get(v___x_683_, 2);
v_symDSimp_687_ = lean_ctor_get(v___x_683_, 3);
v_lastTag_688_ = lean_ctor_get(v___x_683_, 4);
v_counters_689_ = lean_ctor_get(v___x_683_, 5);
v_splitDiags_690_ = lean_ctor_get(v___x_683_, 6);
v_ematchDiags_691_ = lean_ctor_get(v___x_683_, 7);
v_lawfulEqCmpMap_692_ = lean_ctor_get(v___x_683_, 8);
v_reflCmpMap_693_ = lean_ctor_get(v___x_683_, 9);
v_anchors_694_ = lean_ctor_get(v___x_683_, 10);
v_fvarAnchors_695_ = lean_ctor_get(v___x_683_, 11);
v_instanceMap_696_ = lean_ctor_get(v___x_683_, 12);
v_hoistedDecls_697_ = lean_ctor_get(v___x_683_, 13);
v_proofInfos_698_ = lean_ctor_get(v___x_683_, 14);
v_numBranches_699_ = lean_ctor_get(v___x_683_, 15);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_759_ == 0)
{
v___x_701_ = v___x_683_;
v_isShared_702_ = v_isSharedCheck_759_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_numBranches_699_);
lean_inc(v_proofInfos_698_);
lean_inc(v_hoistedDecls_697_);
lean_inc(v_instanceMap_696_);
lean_inc(v_fvarAnchors_695_);
lean_inc(v_anchors_694_);
lean_inc(v_reflCmpMap_693_);
lean_inc(v_lawfulEqCmpMap_692_);
lean_inc(v_ematchDiags_691_);
lean_inc(v_splitDiags_690_);
lean_inc(v_counters_689_);
lean_inc(v_lastTag_688_);
lean_inc(v_symDSimp_687_);
lean_inc(v_symSimp_686_);
lean_inc(v_simp_685_);
lean_inc(v_congrThms_684_);
lean_dec(v___x_683_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_759_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_703_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__9);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 3, v___x_703_);
v___x_705_ = v___x_701_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_congrThms_684_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_simp_685_);
lean_ctor_set(v_reuseFailAlloc_758_, 2, v_symSimp_686_);
lean_ctor_set(v_reuseFailAlloc_758_, 3, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_758_, 4, v_lastTag_688_);
lean_ctor_set(v_reuseFailAlloc_758_, 5, v_counters_689_);
lean_ctor_set(v_reuseFailAlloc_758_, 6, v_splitDiags_690_);
lean_ctor_set(v_reuseFailAlloc_758_, 7, v_ematchDiags_691_);
lean_ctor_set(v_reuseFailAlloc_758_, 8, v_lawfulEqCmpMap_692_);
lean_ctor_set(v_reuseFailAlloc_758_, 9, v_reflCmpMap_693_);
lean_ctor_set(v_reuseFailAlloc_758_, 10, v_anchors_694_);
lean_ctor_set(v_reuseFailAlloc_758_, 11, v_fvarAnchors_695_);
lean_ctor_set(v_reuseFailAlloc_758_, 12, v_instanceMap_696_);
lean_ctor_set(v_reuseFailAlloc_758_, 13, v_hoistedDecls_697_);
lean_ctor_set(v_reuseFailAlloc_758_, 14, v_proofInfos_698_);
lean_ctor_set(v_reuseFailAlloc_758_, 15, v_numBranches_699_);
v___x_705_ = v_reuseFailAlloc_758_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; lean_object* v_symDSimpMethods_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_706_ = lean_st_ref_put(v___y_671_, v___x_705_);
v_symDSimpMethods_707_ = lean_ctor_get(v___y_670_, 3);
lean_inc(v_a_682_);
v___x_708_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_708_, 0, v_a_682_);
v___x_709_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__6));
lean_inc_ref(v_symDSimpMethods_707_);
v___x_710_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_708_, v_symDSimpMethods_707_, v___x_709_, v_symDSimp_687_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_749_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_749_ == 0)
{
v___x_713_ = v___x_710_;
v_isShared_714_ = v_isSharedCheck_749_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_710_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_749_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v_fst_715_; lean_object* v_snd_716_; lean_object* v___x_717_; lean_object* v_congrThms_718_; lean_object* v_simp_719_; lean_object* v_symSimp_720_; lean_object* v_lastTag_721_; lean_object* v_counters_722_; lean_object* v_splitDiags_723_; lean_object* v_ematchDiags_724_; lean_object* v_lawfulEqCmpMap_725_; lean_object* v_reflCmpMap_726_; lean_object* v_anchors_727_; lean_object* v_fvarAnchors_728_; lean_object* v_instanceMap_729_; lean_object* v_hoistedDecls_730_; lean_object* v_proofInfos_731_; lean_object* v_numBranches_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_747_; 
v_fst_715_ = lean_ctor_get(v_a_711_, 0);
lean_inc(v_fst_715_);
v_snd_716_ = lean_ctor_get(v_a_711_, 1);
lean_inc(v_snd_716_);
lean_dec(v_a_711_);
v___x_717_ = lean_st_ref_take(v___y_671_);
v_congrThms_718_ = lean_ctor_get(v___x_717_, 0);
v_simp_719_ = lean_ctor_get(v___x_717_, 1);
v_symSimp_720_ = lean_ctor_get(v___x_717_, 2);
v_lastTag_721_ = lean_ctor_get(v___x_717_, 4);
v_counters_722_ = lean_ctor_get(v___x_717_, 5);
v_splitDiags_723_ = lean_ctor_get(v___x_717_, 6);
v_ematchDiags_724_ = lean_ctor_get(v___x_717_, 7);
v_lawfulEqCmpMap_725_ = lean_ctor_get(v___x_717_, 8);
v_reflCmpMap_726_ = lean_ctor_get(v___x_717_, 9);
v_anchors_727_ = lean_ctor_get(v___x_717_, 10);
v_fvarAnchors_728_ = lean_ctor_get(v___x_717_, 11);
v_instanceMap_729_ = lean_ctor_get(v___x_717_, 12);
v_hoistedDecls_730_ = lean_ctor_get(v___x_717_, 13);
v_proofInfos_731_ = lean_ctor_get(v___x_717_, 14);
v_numBranches_732_ = lean_ctor_get(v___x_717_, 15);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_747_ == 0)
{
lean_object* v_unused_748_; 
v_unused_748_ = lean_ctor_get(v___x_717_, 3);
lean_dec(v_unused_748_);
v___x_734_ = v___x_717_;
v_isShared_735_ = v_isSharedCheck_747_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_numBranches_732_);
lean_inc(v_proofInfos_731_);
lean_inc(v_hoistedDecls_730_);
lean_inc(v_instanceMap_729_);
lean_inc(v_fvarAnchors_728_);
lean_inc(v_anchors_727_);
lean_inc(v_reflCmpMap_726_);
lean_inc(v_lawfulEqCmpMap_725_);
lean_inc(v_ematchDiags_724_);
lean_inc(v_splitDiags_723_);
lean_inc(v_counters_722_);
lean_inc(v_lastTag_721_);
lean_inc(v_symSimp_720_);
lean_inc(v_simp_719_);
lean_inc(v_congrThms_718_);
lean_dec(v___x_717_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_747_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 3, v_snd_716_);
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_congrThms_718_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_simp_719_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_symSimp_720_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v_snd_716_);
lean_ctor_set(v_reuseFailAlloc_746_, 4, v_lastTag_721_);
lean_ctor_set(v_reuseFailAlloc_746_, 5, v_counters_722_);
lean_ctor_set(v_reuseFailAlloc_746_, 6, v_splitDiags_723_);
lean_ctor_set(v_reuseFailAlloc_746_, 7, v_ematchDiags_724_);
lean_ctor_set(v_reuseFailAlloc_746_, 8, v_lawfulEqCmpMap_725_);
lean_ctor_set(v_reuseFailAlloc_746_, 9, v_reflCmpMap_726_);
lean_ctor_set(v_reuseFailAlloc_746_, 10, v_anchors_727_);
lean_ctor_set(v_reuseFailAlloc_746_, 11, v_fvarAnchors_728_);
lean_ctor_set(v_reuseFailAlloc_746_, 12, v_instanceMap_729_);
lean_ctor_set(v_reuseFailAlloc_746_, 13, v_hoistedDecls_730_);
lean_ctor_set(v_reuseFailAlloc_746_, 14, v_proofInfos_731_);
lean_ctor_set(v_reuseFailAlloc_746_, 15, v_numBranches_732_);
v___x_737_ = v_reuseFailAlloc_746_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_738_; 
v___x_738_ = lean_st_ref_put(v___y_671_, v___x_737_);
if (lean_obj_tag(v_fst_715_) == 0)
{
lean_object* v___x_740_; 
lean_dec_ref_known(v_fst_715_, 0);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v_a_682_);
v___x_740_ = v___x_713_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_682_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
else
{
lean_object* v_e_x27_742_; lean_object* v___x_744_; 
lean_dec(v_a_682_);
v_e_x27_742_ = lean_ctor_get(v_fst_715_, 0);
lean_inc_ref(v_e_x27_742_);
lean_dec_ref_known(v_fst_715_, 1);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v_e_x27_742_);
v___x_744_ = v___x_713_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_e_x27_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec(v_a_682_);
v_a_750_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_710_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_710_);
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
}
}
else
{
return v___x_681_;
}
}
else
{
return v___x_679_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___boxed(lean_object* v_e_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0(v_e_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(lean_object* v_e_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_){
_start:
{
lean_object* v___f_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___f_784_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_784_, 0, v_e_773_);
v___x_785_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_781_);
v___x_786_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0));
v___x_787_ = lean_box(0);
v___x_788_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_786_, v___x_785_, v___f_784_, v___x_787_, v_a_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_);
lean_dec_ref(v___x_785_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___boxed(lean_object* v_e_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(v_e_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
lean_dec(v_a_790_);
return v_res_800_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_801_ = lean_box(0);
v___x_802_ = lean_unsigned_to_nat(16u);
v___x_803_ = lean_mk_array(v___x_802_, v___x_801_);
return v___x_803_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_804_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__0);
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
lean_ctor_set(v___x_806_, 1, v___x_804_);
return v___x_806_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_dsimpDecisionPredicate___closed__7);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; lean_object* v___x_812_; 
v___x_809_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2);
v___x_810_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1);
v___x_811_ = 1;
v___x_812_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v___x_809_);
lean_ctor_set_uint8(v___x_812_, sizeof(void*)*2, v___x_811_);
return v___x_812_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = lean_unsigned_to_nat(0u);
v___x_814_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2);
v___x_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
lean_ctor_set(v___x_815_, 1, v___x_813_);
return v___x_815_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_816_ = lean_unsigned_to_nat(32u);
v___x_817_ = lean_mk_empty_array_with_capacity(v___x_816_);
v___x_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
return v___x_818_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6(void){
_start:
{
size_t v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_819_ = ((size_t)5ULL);
v___x_820_ = lean_unsigned_to_nat(0u);
v___x_821_ = lean_unsigned_to_nat(32u);
v___x_822_ = lean_mk_empty_array_with_capacity(v___x_821_);
v___x_823_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__5);
v___x_824_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_824_, 0, v___x_823_);
lean_ctor_set(v___x_824_, 1, v___x_822_);
lean_ctor_set(v___x_824_, 2, v___x_820_);
lean_ctor_set(v___x_824_, 3, v___x_820_);
lean_ctor_set_usize(v___x_824_, 4, v___x_819_);
return v___x_824_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7(void){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__6);
v___x_826_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__2);
v___x_827_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
lean_ctor_set(v___x_827_, 2, v___x_826_);
lean_ctor_set(v___x_827_, 3, v___x_825_);
return v___x_827_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_828_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__7);
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__4);
v___x_831_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__1);
v___x_832_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__3);
v___x_833_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
lean_ctor_set(v___x_833_, 1, v___x_831_);
lean_ctor_set(v___x_833_, 2, v___x_831_);
lean_ctor_set(v___x_833_, 3, v___x_830_);
lean_ctor_set(v___x_833_, 4, v___x_829_);
lean_ctor_set(v___x_833_, 5, v___x_828_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0(lean_object* v_e_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v___x_845_; lean_object* v_congrThms_846_; lean_object* v_simp_847_; lean_object* v_symSimp_848_; lean_object* v_symDSimp_849_; lean_object* v_lastTag_850_; lean_object* v_counters_851_; lean_object* v_splitDiags_852_; lean_object* v_ematchDiags_853_; lean_object* v_lawfulEqCmpMap_854_; lean_object* v_reflCmpMap_855_; lean_object* v_anchors_856_; lean_object* v_fvarAnchors_857_; lean_object* v_instanceMap_858_; lean_object* v_hoistedDecls_859_; lean_object* v_proofInfos_860_; lean_object* v_numBranches_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_918_; 
v___x_845_ = lean_st_ref_take(v___y_837_);
v_congrThms_846_ = lean_ctor_get(v___x_845_, 0);
v_simp_847_ = lean_ctor_get(v___x_845_, 1);
v_symSimp_848_ = lean_ctor_get(v___x_845_, 2);
v_symDSimp_849_ = lean_ctor_get(v___x_845_, 3);
v_lastTag_850_ = lean_ctor_get(v___x_845_, 4);
v_counters_851_ = lean_ctor_get(v___x_845_, 5);
v_splitDiags_852_ = lean_ctor_get(v___x_845_, 6);
v_ematchDiags_853_ = lean_ctor_get(v___x_845_, 7);
v_lawfulEqCmpMap_854_ = lean_ctor_get(v___x_845_, 8);
v_reflCmpMap_855_ = lean_ctor_get(v___x_845_, 9);
v_anchors_856_ = lean_ctor_get(v___x_845_, 10);
v_fvarAnchors_857_ = lean_ctor_get(v___x_845_, 11);
v_instanceMap_858_ = lean_ctor_get(v___x_845_, 12);
v_hoistedDecls_859_ = lean_ctor_get(v___x_845_, 13);
v_proofInfos_860_ = lean_ctor_get(v___x_845_, 14);
v_numBranches_861_ = lean_ctor_get(v___x_845_, 15);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_918_ == 0)
{
v___x_863_ = v___x_845_;
v_isShared_864_ = v_isSharedCheck_918_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_numBranches_861_);
lean_inc(v_proofInfos_860_);
lean_inc(v_hoistedDecls_859_);
lean_inc(v_instanceMap_858_);
lean_inc(v_fvarAnchors_857_);
lean_inc(v_anchors_856_);
lean_inc(v_reflCmpMap_855_);
lean_inc(v_lawfulEqCmpMap_854_);
lean_inc(v_ematchDiags_853_);
lean_inc(v_splitDiags_852_);
lean_inc(v_counters_851_);
lean_inc(v_lastTag_850_);
lean_inc(v_symDSimp_849_);
lean_inc(v_symSimp_848_);
lean_inc(v_simp_847_);
lean_inc(v_congrThms_846_);
lean_dec(v___x_845_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_918_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
uint8_t v___x_865_; lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_865_ = 1;
v___x_866_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 1, v___x_866_);
v___x_868_ = v___x_863_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_congrThms_846_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_917_, 2, v_symSimp_848_);
lean_ctor_set(v_reuseFailAlloc_917_, 3, v_symDSimp_849_);
lean_ctor_set(v_reuseFailAlloc_917_, 4, v_lastTag_850_);
lean_ctor_set(v_reuseFailAlloc_917_, 5, v_counters_851_);
lean_ctor_set(v_reuseFailAlloc_917_, 6, v_splitDiags_852_);
lean_ctor_set(v_reuseFailAlloc_917_, 7, v_ematchDiags_853_);
lean_ctor_set(v_reuseFailAlloc_917_, 8, v_lawfulEqCmpMap_854_);
lean_ctor_set(v_reuseFailAlloc_917_, 9, v_reflCmpMap_855_);
lean_ctor_set(v_reuseFailAlloc_917_, 10, v_anchors_856_);
lean_ctor_set(v_reuseFailAlloc_917_, 11, v_fvarAnchors_857_);
lean_ctor_set(v_reuseFailAlloc_917_, 12, v_instanceMap_858_);
lean_ctor_set(v_reuseFailAlloc_917_, 13, v_hoistedDecls_859_);
lean_ctor_set(v_reuseFailAlloc_917_, 14, v_proofInfos_860_);
lean_ctor_set(v_reuseFailAlloc_917_, 15, v_numBranches_861_);
v___x_868_ = v_reuseFailAlloc_917_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; lean_object* v_simp_870_; lean_object* v_simpMethods_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_869_ = lean_st_ref_put(v___y_837_, v___x_868_);
v_simp_870_ = lean_ctor_get(v___y_836_, 0);
v_simpMethods_871_ = lean_ctor_get(v___y_836_, 1);
lean_inc_ref(v_simp_870_);
v___x_872_ = l_Lean_Meta_Simp_Context_setBooleanGuardMode(v_simp_870_, v___x_865_);
lean_inc_ref(v_simpMethods_871_);
v___x_873_ = l_Lean_Meta_Simp_mainCore(v_e_834_, v___x_872_, v_simp_847_, v_simpMethods_871_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_908_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_908_ == 0)
{
v___x_876_ = v___x_873_;
v_isShared_877_ = v_isSharedCheck_908_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_873_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_908_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v_fst_878_; lean_object* v_snd_879_; lean_object* v___x_880_; lean_object* v_congrThms_881_; lean_object* v_symSimp_882_; lean_object* v_symDSimp_883_; lean_object* v_lastTag_884_; lean_object* v_counters_885_; lean_object* v_splitDiags_886_; lean_object* v_ematchDiags_887_; lean_object* v_lawfulEqCmpMap_888_; lean_object* v_reflCmpMap_889_; lean_object* v_anchors_890_; lean_object* v_fvarAnchors_891_; lean_object* v_instanceMap_892_; lean_object* v_hoistedDecls_893_; lean_object* v_proofInfos_894_; lean_object* v_numBranches_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_906_; 
v_fst_878_ = lean_ctor_get(v_a_874_, 0);
lean_inc(v_fst_878_);
v_snd_879_ = lean_ctor_get(v_a_874_, 1);
lean_inc(v_snd_879_);
lean_dec(v_a_874_);
v___x_880_ = lean_st_ref_take(v___y_837_);
v_congrThms_881_ = lean_ctor_get(v___x_880_, 0);
v_symSimp_882_ = lean_ctor_get(v___x_880_, 2);
v_symDSimp_883_ = lean_ctor_get(v___x_880_, 3);
v_lastTag_884_ = lean_ctor_get(v___x_880_, 4);
v_counters_885_ = lean_ctor_get(v___x_880_, 5);
v_splitDiags_886_ = lean_ctor_get(v___x_880_, 6);
v_ematchDiags_887_ = lean_ctor_get(v___x_880_, 7);
v_lawfulEqCmpMap_888_ = lean_ctor_get(v___x_880_, 8);
v_reflCmpMap_889_ = lean_ctor_get(v___x_880_, 9);
v_anchors_890_ = lean_ctor_get(v___x_880_, 10);
v_fvarAnchors_891_ = lean_ctor_get(v___x_880_, 11);
v_instanceMap_892_ = lean_ctor_get(v___x_880_, 12);
v_hoistedDecls_893_ = lean_ctor_get(v___x_880_, 13);
v_proofInfos_894_ = lean_ctor_get(v___x_880_, 14);
v_numBranches_895_ = lean_ctor_get(v___x_880_, 15);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; 
v_unused_907_ = lean_ctor_get(v___x_880_, 1);
lean_dec(v_unused_907_);
v___x_897_ = v___x_880_;
v_isShared_898_ = v_isSharedCheck_906_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_numBranches_895_);
lean_inc(v_proofInfos_894_);
lean_inc(v_hoistedDecls_893_);
lean_inc(v_instanceMap_892_);
lean_inc(v_fvarAnchors_891_);
lean_inc(v_anchors_890_);
lean_inc(v_reflCmpMap_889_);
lean_inc(v_lawfulEqCmpMap_888_);
lean_inc(v_ematchDiags_887_);
lean_inc(v_splitDiags_886_);
lean_inc(v_counters_885_);
lean_inc(v_lastTag_884_);
lean_inc(v_symDSimp_883_);
lean_inc(v_symSimp_882_);
lean_inc(v_congrThms_881_);
lean_dec(v___x_880_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_906_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v_snd_879_);
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_congrThms_881_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_snd_879_);
lean_ctor_set(v_reuseFailAlloc_905_, 2, v_symSimp_882_);
lean_ctor_set(v_reuseFailAlloc_905_, 3, v_symDSimp_883_);
lean_ctor_set(v_reuseFailAlloc_905_, 4, v_lastTag_884_);
lean_ctor_set(v_reuseFailAlloc_905_, 5, v_counters_885_);
lean_ctor_set(v_reuseFailAlloc_905_, 6, v_splitDiags_886_);
lean_ctor_set(v_reuseFailAlloc_905_, 7, v_ematchDiags_887_);
lean_ctor_set(v_reuseFailAlloc_905_, 8, v_lawfulEqCmpMap_888_);
lean_ctor_set(v_reuseFailAlloc_905_, 9, v_reflCmpMap_889_);
lean_ctor_set(v_reuseFailAlloc_905_, 10, v_anchors_890_);
lean_ctor_set(v_reuseFailAlloc_905_, 11, v_fvarAnchors_891_);
lean_ctor_set(v_reuseFailAlloc_905_, 12, v_instanceMap_892_);
lean_ctor_set(v_reuseFailAlloc_905_, 13, v_hoistedDecls_893_);
lean_ctor_set(v_reuseFailAlloc_905_, 14, v_proofInfos_894_);
lean_ctor_set(v_reuseFailAlloc_905_, 15, v_numBranches_895_);
v___x_900_ = v_reuseFailAlloc_905_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_901_ = lean_st_ref_put(v___y_837_, v___x_900_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v_fst_878_);
v___x_903_ = v___x_876_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_fst_878_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_a_909_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_873_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_873_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___boxed(lean_object* v_e_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0(v_e_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(lean_object* v_e_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_){
_start:
{
lean_object* v___f_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___f_942_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_942_, 0, v_e_931_);
v___x_943_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_939_);
v___x_944_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore___closed__0));
v___x_945_ = lean_box(0);
v___x_946_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_944_, v___x_943_, v___f_942_, v___x_945_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec_ref(v___x_943_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___boxed(lean_object* v_e_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(v_e_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0(lean_object* v_e_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v___x_970_; lean_object* v_congrThms_971_; lean_object* v_simp_972_; lean_object* v_symSimp_973_; lean_object* v_symDSimp_974_; lean_object* v_lastTag_975_; lean_object* v_counters_976_; lean_object* v_splitDiags_977_; lean_object* v_ematchDiags_978_; lean_object* v_lawfulEqCmpMap_979_; lean_object* v_reflCmpMap_980_; lean_object* v_anchors_981_; lean_object* v_fvarAnchors_982_; lean_object* v_instanceMap_983_; lean_object* v_hoistedDecls_984_; lean_object* v_proofInfos_985_; lean_object* v_numBranches_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1043_; 
v___x_970_ = lean_st_ref_take(v___y_962_);
v_congrThms_971_ = lean_ctor_get(v___x_970_, 0);
v_simp_972_ = lean_ctor_get(v___x_970_, 1);
v_symSimp_973_ = lean_ctor_get(v___x_970_, 2);
v_symDSimp_974_ = lean_ctor_get(v___x_970_, 3);
v_lastTag_975_ = lean_ctor_get(v___x_970_, 4);
v_counters_976_ = lean_ctor_get(v___x_970_, 5);
v_splitDiags_977_ = lean_ctor_get(v___x_970_, 6);
v_ematchDiags_978_ = lean_ctor_get(v___x_970_, 7);
v_lawfulEqCmpMap_979_ = lean_ctor_get(v___x_970_, 8);
v_reflCmpMap_980_ = lean_ctor_get(v___x_970_, 9);
v_anchors_981_ = lean_ctor_get(v___x_970_, 10);
v_fvarAnchors_982_ = lean_ctor_get(v___x_970_, 11);
v_instanceMap_983_ = lean_ctor_get(v___x_970_, 12);
v_hoistedDecls_984_ = lean_ctor_get(v___x_970_, 13);
v_proofInfos_985_ = lean_ctor_get(v___x_970_, 14);
v_numBranches_986_ = lean_ctor_get(v___x_970_, 15);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_988_ = v___x_970_;
v_isShared_989_ = v_isSharedCheck_1043_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_numBranches_986_);
lean_inc(v_proofInfos_985_);
lean_inc(v_hoistedDecls_984_);
lean_inc(v_instanceMap_983_);
lean_inc(v_fvarAnchors_982_);
lean_inc(v_anchors_981_);
lean_inc(v_reflCmpMap_980_);
lean_inc(v_lawfulEqCmpMap_979_);
lean_inc(v_ematchDiags_978_);
lean_inc(v_splitDiags_977_);
lean_inc(v_counters_976_);
lean_inc(v_lastTag_975_);
lean_inc(v_symDSimp_974_);
lean_inc(v_symSimp_973_);
lean_inc(v_simp_972_);
lean_inc(v_congrThms_971_);
lean_dec(v___x_970_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1043_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
v___x_990_ = lean_unsigned_to_nat(32u);
v___x_991_ = lean_mk_empty_array_with_capacity(v___x_990_);
lean_dec_ref(v___x_991_);
v___x_992_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore___lam__0___closed__8);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v___x_992_);
v___x_994_ = v___x_988_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_congrThms_971_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v___x_992_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v_symSimp_973_);
lean_ctor_set(v_reuseFailAlloc_1042_, 3, v_symDSimp_974_);
lean_ctor_set(v_reuseFailAlloc_1042_, 4, v_lastTag_975_);
lean_ctor_set(v_reuseFailAlloc_1042_, 5, v_counters_976_);
lean_ctor_set(v_reuseFailAlloc_1042_, 6, v_splitDiags_977_);
lean_ctor_set(v_reuseFailAlloc_1042_, 7, v_ematchDiags_978_);
lean_ctor_set(v_reuseFailAlloc_1042_, 8, v_lawfulEqCmpMap_979_);
lean_ctor_set(v_reuseFailAlloc_1042_, 9, v_reflCmpMap_980_);
lean_ctor_set(v_reuseFailAlloc_1042_, 10, v_anchors_981_);
lean_ctor_set(v_reuseFailAlloc_1042_, 11, v_fvarAnchors_982_);
lean_ctor_set(v_reuseFailAlloc_1042_, 12, v_instanceMap_983_);
lean_ctor_set(v_reuseFailAlloc_1042_, 13, v_hoistedDecls_984_);
lean_ctor_set(v_reuseFailAlloc_1042_, 14, v_proofInfos_985_);
lean_ctor_set(v_reuseFailAlloc_1042_, 15, v_numBranches_986_);
v___x_994_ = v_reuseFailAlloc_1042_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; lean_object* v_simp_996_; lean_object* v_simpMethods_997_; lean_object* v___x_998_; 
v___x_995_ = lean_st_ref_put(v___y_962_, v___x_994_);
v_simp_996_ = lean_ctor_get(v___y_961_, 0);
v_simpMethods_997_ = lean_ctor_get(v___y_961_, 1);
lean_inc_ref(v_simpMethods_997_);
lean_inc_ref(v_simp_996_);
v___x_998_ = l_Lean_Meta_Simp_dsimpMainCore(v_e_959_, v_simp_996_, v_simp_972_, v_simpMethods_997_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1033_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1033_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1033_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v_fst_1003_; lean_object* v_snd_1004_; lean_object* v___x_1005_; lean_object* v_congrThms_1006_; lean_object* v_symSimp_1007_; lean_object* v_symDSimp_1008_; lean_object* v_lastTag_1009_; lean_object* v_counters_1010_; lean_object* v_splitDiags_1011_; lean_object* v_ematchDiags_1012_; lean_object* v_lawfulEqCmpMap_1013_; lean_object* v_reflCmpMap_1014_; lean_object* v_anchors_1015_; lean_object* v_fvarAnchors_1016_; lean_object* v_instanceMap_1017_; lean_object* v_hoistedDecls_1018_; lean_object* v_proofInfos_1019_; lean_object* v_numBranches_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1031_; 
v_fst_1003_ = lean_ctor_get(v_a_999_, 0);
lean_inc(v_fst_1003_);
v_snd_1004_ = lean_ctor_get(v_a_999_, 1);
lean_inc(v_snd_1004_);
lean_dec(v_a_999_);
v___x_1005_ = lean_st_ref_take(v___y_962_);
v_congrThms_1006_ = lean_ctor_get(v___x_1005_, 0);
v_symSimp_1007_ = lean_ctor_get(v___x_1005_, 2);
v_symDSimp_1008_ = lean_ctor_get(v___x_1005_, 3);
v_lastTag_1009_ = lean_ctor_get(v___x_1005_, 4);
v_counters_1010_ = lean_ctor_get(v___x_1005_, 5);
v_splitDiags_1011_ = lean_ctor_get(v___x_1005_, 6);
v_ematchDiags_1012_ = lean_ctor_get(v___x_1005_, 7);
v_lawfulEqCmpMap_1013_ = lean_ctor_get(v___x_1005_, 8);
v_reflCmpMap_1014_ = lean_ctor_get(v___x_1005_, 9);
v_anchors_1015_ = lean_ctor_get(v___x_1005_, 10);
v_fvarAnchors_1016_ = lean_ctor_get(v___x_1005_, 11);
v_instanceMap_1017_ = lean_ctor_get(v___x_1005_, 12);
v_hoistedDecls_1018_ = lean_ctor_get(v___x_1005_, 13);
v_proofInfos_1019_ = lean_ctor_get(v___x_1005_, 14);
v_numBranches_1020_ = lean_ctor_get(v___x_1005_, 15);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1031_ == 0)
{
lean_object* v_unused_1032_; 
v_unused_1032_ = lean_ctor_get(v___x_1005_, 1);
lean_dec(v_unused_1032_);
v___x_1022_ = v___x_1005_;
v_isShared_1023_ = v_isSharedCheck_1031_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_numBranches_1020_);
lean_inc(v_proofInfos_1019_);
lean_inc(v_hoistedDecls_1018_);
lean_inc(v_instanceMap_1017_);
lean_inc(v_fvarAnchors_1016_);
lean_inc(v_anchors_1015_);
lean_inc(v_reflCmpMap_1014_);
lean_inc(v_lawfulEqCmpMap_1013_);
lean_inc(v_ematchDiags_1012_);
lean_inc(v_splitDiags_1011_);
lean_inc(v_counters_1010_);
lean_inc(v_lastTag_1009_);
lean_inc(v_symDSimp_1008_);
lean_inc(v_symSimp_1007_);
lean_inc(v_congrThms_1006_);
lean_dec(v___x_1005_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1031_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 1, v_snd_1004_);
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_congrThms_1006_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_snd_1004_);
lean_ctor_set(v_reuseFailAlloc_1030_, 2, v_symSimp_1007_);
lean_ctor_set(v_reuseFailAlloc_1030_, 3, v_symDSimp_1008_);
lean_ctor_set(v_reuseFailAlloc_1030_, 4, v_lastTag_1009_);
lean_ctor_set(v_reuseFailAlloc_1030_, 5, v_counters_1010_);
lean_ctor_set(v_reuseFailAlloc_1030_, 6, v_splitDiags_1011_);
lean_ctor_set(v_reuseFailAlloc_1030_, 7, v_ematchDiags_1012_);
lean_ctor_set(v_reuseFailAlloc_1030_, 8, v_lawfulEqCmpMap_1013_);
lean_ctor_set(v_reuseFailAlloc_1030_, 9, v_reflCmpMap_1014_);
lean_ctor_set(v_reuseFailAlloc_1030_, 10, v_anchors_1015_);
lean_ctor_set(v_reuseFailAlloc_1030_, 11, v_fvarAnchors_1016_);
lean_ctor_set(v_reuseFailAlloc_1030_, 12, v_instanceMap_1017_);
lean_ctor_set(v_reuseFailAlloc_1030_, 13, v_hoistedDecls_1018_);
lean_ctor_set(v_reuseFailAlloc_1030_, 14, v_proofInfos_1019_);
lean_ctor_set(v_reuseFailAlloc_1030_, 15, v_numBranches_1020_);
v___x_1025_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
lean_object* v___x_1026_; lean_object* v___x_1028_; 
v___x_1026_ = lean_st_ref_put(v___y_962_, v___x_1025_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v_fst_1003_);
v___x_1028_ = v___x_1001_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_fst_1003_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
}
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
v_a_1034_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_998_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_998_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1034_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0___boxed(lean_object* v_e_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0(v_e_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(lean_object* v_e_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v___f_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___f_1067_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1067_, 0, v_e_1056_);
v___x_1068_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_1064_);
v___x_1069_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore___closed__0));
v___x_1070_ = lean_box(0);
v___x_1071_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore_spec__0___redArg(v___x_1069_, v___x_1068_, v___f_1067_, v___x_1070_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_);
lean_dec_ref(v___x_1068_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore___boxed(lean_object* v_e_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(v_e_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_);
lean_dec(v_a_1081_);
lean_dec_ref(v_a_1080_);
lean_dec(v_a_1079_);
lean_dec_ref(v_a_1078_);
lean_dec(v_a_1077_);
lean_dec_ref(v_a_1076_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore(lean_object* v_e_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_r_1096_; lean_object* v___x_1109_; lean_object* v_a_1110_; uint8_t v___x_1111_; 
v___x_1109_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_1092_);
v_a_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_a_1110_);
lean_dec_ref(v___x_1109_);
v___x_1111_ = lean_unbox(v_a_1110_);
lean_dec(v_a_1110_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; 
v___x_1112_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symSimpCore(v_e_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v___x_1112_, 1);
v_r_1096_ = v_a_1113_;
goto v___jp_1095_;
}
else
{
return v___x_1112_;
}
}
else
{
lean_object* v___x_1114_; 
v___x_1114_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacySimpCore(v_e_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 1);
v_r_1096_ = v_a_1115_;
goto v___jp_1095_;
}
else
{
return v___x_1114_;
}
}
v___jp_1095_:
{
lean_object* v_expr_1097_; lean_object* v_proof_x3f_1098_; uint8_t v_cache_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1108_; 
v_expr_1097_ = lean_ctor_get(v_r_1096_, 0);
v_proof_x3f_1098_ = lean_ctor_get(v_r_1096_, 1);
v_cache_1099_ = lean_ctor_get_uint8(v_r_1096_, sizeof(void*)*2);
v_isSharedCheck_1108_ = !lean_is_exclusive(v_r_1096_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1101_ = v_r_1096_;
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_proof_x3f_1098_);
lean_inc(v_expr_1097_);
lean_dec(v_r_1096_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1108_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1103_ = l_Lean_Meta_canonicalizeDecisionProjections(v_expr_1097_);
lean_dec_ref(v_expr_1097_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1103_);
v___x_1105_ = v___x_1101_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1103_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_proof_x3f_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1107_, sizeof(void*)*2, v_cache_1099_);
v___x_1105_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
return v___x_1106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpCore___boxed(lean_object* v_e_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lean_Meta_Grind_simpCore(v_e_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_);
lean_dec(v_a_1125_);
lean_dec_ref(v_a_1124_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
lean_dec(v_a_1121_);
lean_dec_ref(v_a_1120_);
lean_dec(v_a_1119_);
lean_dec_ref(v_a_1118_);
lean_dec(v_a_1117_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore(lean_object* v_e_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_){
_start:
{
lean_object* v_e_1140_; lean_object* v___x_1143_; lean_object* v_a_1144_; uint8_t v___x_1145_; 
v___x_1143_ = l_Lean_Meta_Grind_isLegacyNormalizer___redArg(v_a_1136_);
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref(v___x_1143_);
v___x_1145_ = lean_unbox(v_a_1144_);
lean_dec(v_a_1144_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; 
v___x_1146_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_symDSimpCore(v_e_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v_e_1140_ = v_a_1147_;
goto v___jp_1139_;
}
else
{
return v___x_1146_;
}
}
else
{
lean_object* v___x_1148_; 
v___x_1148_ = l___private_Lean_Meta_Tactic_Grind_Simp_0__Lean_Meta_Grind_legacyDSimpCore(v_e_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v_e_1140_ = v_a_1149_;
goto v___jp_1139_;
}
else
{
return v___x_1148_;
}
}
v___jp_1139_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = l_Lean_Meta_canonicalizeDecisionProjections(v_e_1140_);
lean_dec_ref(v_e_1140_);
v___x_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_dsimpCore___boxed(lean_object* v_e_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_Meta_Grind_dsimpCore(v_e_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_);
lean_dec(v_a_1159_);
lean_dec_ref(v_a_1158_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec(v_a_1155_);
lean_dec_ref(v_a_1154_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(lean_object* v_e_1162_, lean_object* v___y_1163_){
_start:
{
uint8_t v___x_1165_; 
v___x_1165_ = l_Lean_Expr_hasMVar(v_e_1162_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1166_, 0, v_e_1162_);
return v___x_1166_;
}
else
{
lean_object* v___x_1167_; lean_object* v_mctx_1168_; lean_object* v___x_1169_; lean_object* v_fst_1170_; lean_object* v_snd_1171_; lean_object* v___x_1172_; lean_object* v_cache_1173_; lean_object* v_zetaDeltaFVarIds_1174_; lean_object* v_postponed_1175_; lean_object* v_diag_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1185_; 
v___x_1167_ = lean_st_ref_get(v___y_1163_);
v_mctx_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc_ref(v_mctx_1168_);
lean_dec(v___x_1167_);
v___x_1169_ = l_Lean_instantiateMVarsCore(v_mctx_1168_, v_e_1162_);
v_fst_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_fst_1170_);
v_snd_1171_ = lean_ctor_get(v___x_1169_, 1);
lean_inc(v_snd_1171_);
lean_dec_ref(v___x_1169_);
v___x_1172_ = lean_st_ref_take(v___y_1163_);
v_cache_1173_ = lean_ctor_get(v___x_1172_, 1);
v_zetaDeltaFVarIds_1174_ = lean_ctor_get(v___x_1172_, 2);
v_postponed_1175_ = lean_ctor_get(v___x_1172_, 3);
v_diag_1176_ = lean_ctor_get(v___x_1172_, 4);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1185_ == 0)
{
lean_object* v_unused_1186_; 
v_unused_1186_ = lean_ctor_get(v___x_1172_, 0);
lean_dec(v_unused_1186_);
v___x_1178_ = v___x_1172_;
v_isShared_1179_ = v_isSharedCheck_1185_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_diag_1176_);
lean_inc(v_postponed_1175_);
lean_inc(v_zetaDeltaFVarIds_1174_);
lean_inc(v_cache_1173_);
lean_dec(v___x_1172_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1185_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 0, v_snd_1171_);
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_snd_1171_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_cache_1173_);
lean_ctor_set(v_reuseFailAlloc_1184_, 2, v_zetaDeltaFVarIds_1174_);
lean_ctor_set(v_reuseFailAlloc_1184_, 3, v_postponed_1175_);
lean_ctor_set(v_reuseFailAlloc_1184_, 4, v_diag_1176_);
v___x_1181_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_st_ref_put(v___y_1163_, v___x_1181_);
v___x_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_fst_1170_);
return v___x_1183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg___boxed(lean_object* v_e_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_1187_, v___y_1188_);
lean_dec(v___y_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0(lean_object* v_e_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_1191_, v___y_1199_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___boxed(lean_object* v_e_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0(v_e_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec(v___y_1205_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(lean_object* v_msgData_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v___x_1223_; lean_object* v_env_1224_; uint8_t v___x_1225_; lean_object* v_env_1226_; lean_object* v___x_1227_; lean_object* v_toCold_1228_; lean_object* v_mctx_1229_; lean_object* v_lctx_1230_; lean_object* v_options_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1223_ = lean_st_ref_get(v___y_1221_);
v_env_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc_ref(v_env_1224_);
lean_dec(v___x_1223_);
v___x_1225_ = 0;
v_env_1226_ = l_Lean_Environment_setRecordingDeps(v_env_1224_, v___x_1225_);
v___x_1227_ = lean_st_ref_get(v___y_1219_);
v_toCold_1228_ = lean_ctor_get(v___y_1220_, 0);
v_mctx_1229_ = lean_ctor_get(v___x_1227_, 0);
lean_inc_ref(v_mctx_1229_);
lean_dec(v___x_1227_);
v_lctx_1230_ = lean_ctor_get(v___y_1218_, 2);
v_options_1231_ = lean_ctor_get(v_toCold_1228_, 2);
lean_inc_ref(v_options_1231_);
lean_inc_ref(v_lctx_1230_);
v___x_1232_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1232_, 0, v_env_1226_);
lean_ctor_set(v___x_1232_, 1, v_mctx_1229_);
lean_ctor_set(v___x_1232_, 2, v_lctx_1230_);
lean_ctor_set(v___x_1232_, 3, v_options_1231_);
v___x_1233_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
lean_ctor_set(v___x_1233_, 1, v_msgData_1217_);
v___x_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1___boxed(lean_object* v_msgData_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(v_msgData_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
return v_res_1241_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1242_; double v___x_1243_; 
v___x_1242_ = lean_unsigned_to_nat(0u);
v___x_1243_ = lean_float_of_nat(v___x_1242_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(lean_object* v_cls_1247_, lean_object* v_msg_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v_ref_1254_; lean_object* v___x_1255_; lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1301_; 
v_ref_1254_ = lean_ctor_get(v___y_1251_, 2);
v___x_1255_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1_spec__1(v_msg_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1301_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1301_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1260_; lean_object* v_traceState_1261_; lean_object* v_env_1262_; lean_object* v_nextMacroScope_1263_; lean_object* v_ngen_1264_; lean_object* v_auxDeclNGen_1265_; lean_object* v_cache_1266_; lean_object* v_recordedDeps_1267_; lean_object* v_messages_1268_; lean_object* v_infoState_1269_; lean_object* v_snapshotTasks_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1300_; 
v___x_1260_ = lean_st_ref_take(v___y_1252_);
v_traceState_1261_ = lean_ctor_get(v___x_1260_, 4);
v_env_1262_ = lean_ctor_get(v___x_1260_, 0);
v_nextMacroScope_1263_ = lean_ctor_get(v___x_1260_, 1);
v_ngen_1264_ = lean_ctor_get(v___x_1260_, 2);
v_auxDeclNGen_1265_ = lean_ctor_get(v___x_1260_, 3);
v_cache_1266_ = lean_ctor_get(v___x_1260_, 5);
v_recordedDeps_1267_ = lean_ctor_get(v___x_1260_, 6);
v_messages_1268_ = lean_ctor_get(v___x_1260_, 7);
v_infoState_1269_ = lean_ctor_get(v___x_1260_, 8);
v_snapshotTasks_1270_ = lean_ctor_get(v___x_1260_, 9);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1272_ = v___x_1260_;
v_isShared_1273_ = v_isSharedCheck_1300_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_snapshotTasks_1270_);
lean_inc(v_infoState_1269_);
lean_inc(v_messages_1268_);
lean_inc(v_recordedDeps_1267_);
lean_inc(v_cache_1266_);
lean_inc(v_traceState_1261_);
lean_inc(v_auxDeclNGen_1265_);
lean_inc(v_ngen_1264_);
lean_inc(v_nextMacroScope_1263_);
lean_inc(v_env_1262_);
lean_dec(v___x_1260_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1300_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
uint64_t v_tid_1274_; lean_object* v_traces_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1299_; 
v_tid_1274_ = lean_ctor_get_uint64(v_traceState_1261_, sizeof(void*)*1);
v_traces_1275_ = lean_ctor_get(v_traceState_1261_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_traceState_1261_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1277_ = v_traceState_1261_;
v_isShared_1278_ = v_isSharedCheck_1299_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_traces_1275_);
lean_dec(v_traceState_1261_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1299_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; double v___x_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
v___x_1279_ = lean_box(0);
v___x_1280_ = lean_box(0);
v___x_1281_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__0);
v___x_1282_ = 0;
v___x_1283_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__1));
v___x_1284_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1284_, 0, v_cls_1247_);
lean_ctor_set(v___x_1284_, 1, v___x_1280_);
lean_ctor_set(v___x_1284_, 2, v___x_1283_);
lean_ctor_set_float(v___x_1284_, sizeof(void*)*3, v___x_1281_);
lean_ctor_set_float(v___x_1284_, sizeof(void*)*3 + 8, v___x_1281_);
lean_ctor_set_uint8(v___x_1284_, sizeof(void*)*3 + 16, v___x_1282_);
v___x_1285_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___closed__2));
v___x_1286_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v_a_1256_);
lean_ctor_set(v___x_1286_, 2, v___x_1285_);
lean_inc(v_ref_1254_);
v___x_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1287_, 0, v_ref_1254_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = l_Lean_PersistentArray_push___redArg(v_traces_1275_, v___x_1287_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v___x_1288_);
v___x_1290_ = v___x_1277_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1288_);
lean_ctor_set_uint64(v_reuseFailAlloc_1298_, sizeof(void*)*1, v_tid_1274_);
v___x_1290_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
lean_object* v___x_1292_; 
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 4, v___x_1290_);
v___x_1292_ = v___x_1272_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_env_1262_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_nextMacroScope_1263_);
lean_ctor_set(v_reuseFailAlloc_1297_, 2, v_ngen_1264_);
lean_ctor_set(v_reuseFailAlloc_1297_, 3, v_auxDeclNGen_1265_);
lean_ctor_set(v_reuseFailAlloc_1297_, 4, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1297_, 5, v_cache_1266_);
lean_ctor_set(v_reuseFailAlloc_1297_, 6, v_recordedDeps_1267_);
lean_ctor_set(v_reuseFailAlloc_1297_, 7, v_messages_1268_);
lean_ctor_set(v_reuseFailAlloc_1297_, 8, v_infoState_1269_);
lean_ctor_set(v_reuseFailAlloc_1297_, 9, v_snapshotTasks_1270_);
v___x_1292_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
lean_object* v___x_1293_; lean_object* v___x_1295_; 
v___x_1293_ = lean_st_ref_put(v___y_1252_, v___x_1292_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1279_);
v___x_1295_ = v___x_1258_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1279_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg___boxed(lean_object* v_cls_1302_, lean_object* v_msg_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v_cls_1302_, v_msg_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
return v_res_1309_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_preprocessImpl___closed__5(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1318_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__2));
v___x_1319_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__4));
v___x_1320_ = l_Lean_Name_append(v___x_1319_, v___x_1318_);
return v___x_1320_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_preprocessImpl___closed__7(void){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__6));
v___x_1323_ = l_Lean_stringToMessageData(v___x_1322_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* lean_grind_preprocess(lean_object* v_e_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v___x_1336_; lean_object* v_a_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1336_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_1324_, v_a_1332_);
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref(v___x_1336_);
v___x_1338_ = l_Lean_Meta_canonicalizeDecisionProjections(v_a_1337_);
lean_dec(v_a_1337_);
lean_inc_ref(v___x_1338_);
v___x_1339_ = l_Lean_Meta_Grind_simpCore(v___x_1338_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v_expr_1341_; lean_object* v___x_1342_; lean_object* v_a_1343_; lean_object* v___x_1344_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
lean_inc(v_a_1340_);
lean_dec_ref_known(v___x_1339_, 1);
v_expr_1341_ = lean_ctor_get(v_a_1340_, 0);
lean_inc_ref(v_expr_1341_);
v___x_1342_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_expr_1341_, v_a_1332_);
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_a_1343_);
lean_dec_ref(v___x_1342_);
v___x_1344_ = l_Lean_Meta_Sym_unfoldReducible(v_a_1343_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1346_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1346_ = l_Lean_Meta_Grind_abstractNestedProofs___redArg(v_a_1345_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1348_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1347_);
lean_dec_ref_known(v___x_1346_, 1);
v___x_1348_ = l_Lean_Meta_Grind_markNestedSubsingletons(v_a_1347_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1350_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v___x_1350_ = l_Lean_Meta_Grind_eraseIrrelevantMData(v_a_1349_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1352_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1352_ = l_Lean_Meta_Grind_foldProjs(v_a_1351_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1354_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
lean_dec_ref_known(v___x_1352_, 1);
v___x_1354_ = l_Lean_Meta_Sym_normalizeLevels(v_a_1353_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; lean_object* v___x_1356_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v___x_1354_, 1);
v___x_1356_ = l_Lean_Meta_Grind_eraseSimpMatchDiscrsOnly(v_a_1355_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v_a_1357_; lean_object* v___x_1358_; 
v_a_1357_ = lean_ctor_get(v___x_1356_, 0);
lean_inc_n(v_a_1357_, 2);
lean_dec_ref_known(v___x_1356_, 1);
v___x_1358_ = l_Lean_Meta_Simp_Result_mkEqTrans(v_a_1340_, v_a_1357_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; lean_object* v_expr_1360_; lean_object* v___x_1361_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_a_1359_);
lean_dec_ref_known(v___x_1358_, 1);
v_expr_1360_ = lean_ctor_get(v_a_1357_, 0);
lean_inc_ref(v_expr_1360_);
lean_dec(v_a_1357_);
v___x_1361_ = l_Lean_Meta_Grind_replacePreMatchCond(v_expr_1360_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1363_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc_n(v_a_1362_, 2);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = l_Lean_Meta_Simp_Result_mkEqTrans(v_a_1359_, v_a_1362_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v_expr_1365_; lean_object* v___x_1366_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1363_, 1);
v_expr_1365_ = lean_ctor_get(v_a_1362_, 0);
lean_inc_ref(v_expr_1365_);
lean_dec(v_a_1362_);
v___x_1366_ = l_Lean_Meta_Sym_canon(v_expr_1365_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1368_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v___x_1368_ = l_Lean_Meta_Sym_shareCommon(v_a_1367_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1417_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1371_ = v___x_1368_;
v_isShared_1372_ = v_isSharedCheck_1417_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1368_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1417_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v_toCold_1387_; lean_object* v_options_1388_; uint8_t v_hasTrace_1389_; 
v_toCold_1387_ = lean_ctor_get(v_a_1333_, 0);
v_options_1388_ = lean_ctor_get(v_toCold_1387_, 2);
v_hasTrace_1389_ = lean_ctor_get_uint8(v_options_1388_, sizeof(void*)*1);
if (v_hasTrace_1389_ == 0)
{
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
goto v___jp_1373_;
}
else
{
lean_object* v_inheritedTraceOptions_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v_inheritedTraceOptions_1390_ = lean_ctor_get(v_toCold_1387_, 11);
v___x_1391_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__2));
v___x_1392_ = lean_obj_once(&l_Lean_Meta_Grind_preprocessImpl___closed__5, &l_Lean_Meta_Grind_preprocessImpl___closed__5_once, _init_l_Lean_Meta_Grind_preprocessImpl___closed__5);
v___x_1393_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1390_, v_options_1388_, v___x_1392_);
if (v___x_1393_ == 0)
{
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
goto v___jp_1373_;
}
else
{
lean_object* v___x_1394_; 
v___x_1394_ = l_Lean_Meta_Grind_updateLastTag(v_a_1325_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_dec_ref_known(v___x_1394_, 1);
v___x_1395_ = l_Lean_MessageData_ofExpr(v___x_1338_);
v___x_1396_ = lean_obj_once(&l_Lean_Meta_Grind_preprocessImpl___closed__7, &l_Lean_Meta_Grind_preprocessImpl___closed__7_once, _init_l_Lean_Meta_Grind_preprocessImpl___closed__7);
v___x_1397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1395_);
lean_ctor_set(v___x_1397_, 1, v___x_1396_);
lean_inc(v_a_1369_);
v___x_1398_ = l_Lean_MessageData_ofExpr(v_a_1369_);
v___x_1399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1397_);
lean_ctor_set(v___x_1399_, 1, v___x_1398_);
v___x_1400_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v___x_1391_, v___x_1399_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_dec_ref_known(v___x_1400_, 1);
goto v___jp_1373_;
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_del_object(v___x_1371_);
lean_dec(v_a_1369_);
lean_dec(v_a_1364_);
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
else
{
lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
lean_del_object(v___x_1371_);
lean_dec(v_a_1369_);
lean_dec(v_a_1364_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
v_a_1409_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1394_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_dec(v___x_1394_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
v___jp_1373_:
{
lean_object* v_proof_x3f_1374_; uint8_t v_cache_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1385_; 
v_proof_x3f_1374_ = lean_ctor_get(v_a_1364_, 1);
v_cache_1375_ = lean_ctor_get_uint8(v_a_1364_, sizeof(void*)*2);
v_isSharedCheck_1385_ = !lean_is_exclusive(v_a_1364_);
if (v_isSharedCheck_1385_ == 0)
{
lean_object* v_unused_1386_; 
v_unused_1386_ = lean_ctor_get(v_a_1364_, 0);
lean_dec(v_unused_1386_);
v___x_1377_ = v_a_1364_;
v_isShared_1378_ = v_isSharedCheck_1385_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_proof_x3f_1374_);
lean_dec(v_a_1364_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1385_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 0, v_a_1369_);
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_a_1369_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v_proof_x3f_1374_);
lean_ctor_set_uint8(v_reuseFailAlloc_1384_, sizeof(void*)*2, v_cache_1375_);
v___x_1380_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
lean_object* v___x_1382_; 
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 0, v___x_1380_);
v___x_1382_ = v___x_1371_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1380_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1425_; 
lean_dec(v_a_1364_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1418_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1420_ = v___x_1368_;
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1368_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1423_; 
if (v_isShared_1421_ == 0)
{
v___x_1423_ = v___x_1420_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_a_1418_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_dec(v_a_1364_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1426_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1366_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1366_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
else
{
lean_dec(v_a_1362_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
return v___x_1363_;
}
}
else
{
lean_dec(v_a_1359_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
return v___x_1361_;
}
}
else
{
lean_dec(v_a_1357_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
return v___x_1358_;
}
}
else
{
lean_dec(v_a_1340_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
return v___x_1356_;
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec(v_a_1340_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1434_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1354_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1354_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec(v_a_1340_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1442_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1352_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1352_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec(v_a_1340_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1450_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1350_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1350_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec(v_a_1340_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1458_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1348_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1348_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec(v_a_1340_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1466_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1346_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1346_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec(v_a_1340_);
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
v_a_1474_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1344_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1344_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
else
{
lean_dec_ref(v___x_1338_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec(v_a_1325_);
return v___x_1339_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessImpl___boxed(lean_object* v_e_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = lean_grind_preprocess(v_e_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1(lean_object* v_cls_1495_, lean_object* v_msg_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v_cls_1495_, v_msg_1496_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___boxed(lean_object* v_cls_1509_, lean_object* v_msg_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1(v_cls_1509_, v_msg_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec(v___y_1511_);
return v_res_1522_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__3(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1529_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__2));
v___x_1530_ = ((lean_object*)(l_Lean_Meta_Grind_preprocessImpl___closed__4));
v___x_1531_ = l_Lean_Name_append(v___x_1530_, v___x_1529_);
return v___x_1531_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__5(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__4));
v___x_1534_ = l_Lean_stringToMessageData(v___x_1533_);
return v___x_1534_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__10(void){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1543_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__9));
v___x_1544_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__8));
v___x_1545_ = l_Lean_mkConst(v___x_1544_, v___x_1543_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27(lean_object* v_prop_1546_, lean_object* v_proof_1547_, lean_object* v_generation_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v___x_1560_; 
lean_inc(v_a_1558_);
lean_inc_ref(v_a_1557_);
lean_inc(v_a_1556_);
lean_inc_ref(v_a_1555_);
lean_inc(v_a_1554_);
lean_inc_ref(v_a_1553_);
lean_inc(v_a_1552_);
lean_inc_ref(v_a_1551_);
lean_inc(v_a_1550_);
lean_inc(v_a_1549_);
lean_inc_ref(v_prop_1546_);
v___x_1560_ = lean_grind_preprocess(v_prop_1546_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_);
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1561_; lean_object* v_expr_1562_; lean_object* v_proof_x3f_1563_; lean_object* v___y_1565_; 
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1561_);
lean_dec_ref_known(v___x_1560_, 1);
v_expr_1562_ = lean_ctor_get(v_a_1561_, 0);
lean_inc_ref(v_expr_1562_);
v_proof_x3f_1563_ = lean_ctor_get(v_a_1561_, 1);
lean_inc(v_proof_x3f_1563_);
lean_dec(v_a_1561_);
if (lean_obj_tag(v_proof_x3f_1563_) == 1)
{
lean_object* v_val_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v_val_1582_ = lean_ctor_get(v_proof_x3f_1563_, 0);
lean_inc(v_val_1582_);
lean_dec_ref_known(v_proof_x3f_1563_, 1);
v___x_1583_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__10, &l_Lean_Meta_Grind_pushNewFact_x27___closed__10_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__10);
lean_inc_ref(v_expr_1562_);
lean_inc_ref(v_prop_1546_);
v___x_1584_ = l_Lean_mkApp4(v___x_1583_, v_prop_1546_, v_expr_1562_, v_val_1582_, v_proof_1547_);
v___y_1565_ = v___x_1584_;
goto v___jp_1564_;
}
else
{
lean_dec(v_proof_x3f_1563_);
v___y_1565_ = v_proof_1547_;
goto v___jp_1564_;
}
v___jp_1564_:
{
lean_object* v_toCold_1566_; lean_object* v_options_1567_; uint8_t v_hasTrace_1568_; 
v_toCold_1566_ = lean_ctor_get(v_a_1557_, 0);
v_options_1567_ = lean_ctor_get(v_toCold_1566_, 2);
v_hasTrace_1568_ = lean_ctor_get_uint8(v_options_1567_, sizeof(void*)*1);
if (v_hasTrace_1568_ == 0)
{
lean_object* v___x_1569_; 
lean_dec_ref(v_prop_1546_);
v___x_1569_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_expr_1562_, v___y_1565_, v_generation_1548_, v_a_1549_);
return v___x_1569_;
}
else
{
lean_object* v_inheritedTraceOptions_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; uint8_t v___x_1573_; 
v_inheritedTraceOptions_1570_ = lean_ctor_get(v_toCold_1566_, 11);
v___x_1571_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__2));
v___x_1572_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__3, &l_Lean_Meta_Grind_pushNewFact_x27___closed__3_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__3);
v___x_1573_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1570_, v_options_1567_, v___x_1572_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; 
lean_dec_ref(v_prop_1546_);
v___x_1574_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_expr_1562_, v___y_1565_, v_generation_1548_, v_a_1549_);
return v___x_1574_;
}
else
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1575_ = l_Lean_MessageData_ofExpr(v_prop_1546_);
v___x_1576_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__5, &l_Lean_Meta_Grind_pushNewFact_x27___closed__5_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__5);
v___x_1577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
lean_inc_ref(v_expr_1562_);
v___x_1578_ = l_Lean_MessageData_ofExpr(v_expr_1562_);
v___x_1579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1577_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
v___x_1580_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v___x_1571_, v___x_1579_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v___x_1581_; 
lean_dec_ref_known(v___x_1580_, 1);
v___x_1581_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_expr_1562_, v___y_1565_, v_generation_1548_, v_a_1549_);
return v___x_1581_;
}
else
{
lean_dec_ref(v___y_1565_);
lean_dec_ref(v_expr_1562_);
lean_dec(v_generation_1548_);
return v___x_1580_;
}
}
}
}
}
else
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
lean_dec(v_generation_1548_);
lean_dec_ref(v_proof_1547_);
lean_dec_ref(v_prop_1546_);
v_a_1585_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1560_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1560_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact_x27___boxed(lean_object* v_prop_1593_, lean_object* v_proof_1594_, lean_object* v_generation_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lean_Meta_Grind_pushNewFact_x27(v_prop_1593_, v_proof_1594_, v_generation_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_);
lean_dec(v_a_1605_);
lean_dec_ref(v_a_1604_);
lean_dec(v_a_1603_);
lean_dec_ref(v_a_1602_);
lean_dec(v_a_1601_);
lean_dec_ref(v_a_1600_);
lean_dec(v_a_1599_);
lean_dec_ref(v_a_1598_);
lean_dec(v_a_1597_);
lean_dec(v_a_1596_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object* v_proof_1608_, lean_object* v_generation_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_){
_start:
{
lean_object* v___x_1621_; 
lean_inc(v_a_1619_);
lean_inc_ref(v_a_1618_);
lean_inc(v_a_1617_);
lean_inc_ref(v_a_1616_);
lean_inc_ref(v_proof_1608_);
v___x_1621_ = lean_infer_type(v_proof_1608_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_toCold_1622_; lean_object* v_options_1623_; uint8_t v_hasTrace_1624_; 
v_toCold_1622_ = lean_ctor_get(v_a_1618_, 0);
v_options_1623_ = lean_ctor_get(v_toCold_1622_, 2);
v_hasTrace_1624_ = lean_ctor_get_uint8(v_options_1623_, sizeof(void*)*1);
if (v_hasTrace_1624_ == 0)
{
lean_object* v_a_1625_; lean_object* v___x_1626_; 
v_a_1625_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1626_ = l_Lean_Meta_Grind_pushNewFact_x27(v_a_1625_, v_proof_1608_, v_generation_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
return v___x_1626_;
}
else
{
lean_object* v_a_1627_; lean_object* v_inheritedTraceOptions_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; 
v_a_1627_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1627_);
lean_dec_ref_known(v___x_1621_, 1);
v_inheritedTraceOptions_1628_ = lean_ctor_get(v_toCold_1622_, 11);
v___x_1629_ = ((lean_object*)(l_Lean_Meta_Grind_pushNewFact_x27___closed__2));
v___x_1630_ = lean_obj_once(&l_Lean_Meta_Grind_pushNewFact_x27___closed__3, &l_Lean_Meta_Grind_pushNewFact_x27___closed__3_once, _init_l_Lean_Meta_Grind_pushNewFact_x27___closed__3);
v___x_1631_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1628_, v_options_1623_, v___x_1630_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lean_Meta_Grind_pushNewFact_x27(v_a_1627_, v_proof_1608_, v_generation_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
return v___x_1632_;
}
else
{
lean_object* v___x_1633_; lean_object* v___x_1634_; 
lean_inc(v_a_1627_);
v___x_1633_ = l_Lean_MessageData_ofExpr(v_a_1627_);
v___x_1634_ = l_Lean_addTrace___at___00Lean_Meta_Grind_preprocessImpl_spec__1___redArg(v___x_1629_, v___x_1633_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v___x_1635_; 
lean_dec_ref_known(v___x_1634_, 1);
v___x_1635_ = l_Lean_Meta_Grind_pushNewFact_x27(v_a_1627_, v_proof_1608_, v_generation_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
return v___x_1635_;
}
else
{
lean_dec(v_a_1627_);
lean_dec(v_generation_1609_);
lean_dec_ref(v_proof_1608_);
return v___x_1634_;
}
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v_generation_1609_);
lean_dec_ref(v_proof_1608_);
v_a_1636_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1621_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1621_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNewFact___boxed(lean_object* v_proof_1644_, lean_object* v_generation_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_Lean_Meta_Grind_pushNewFact(v_proof_1644_, v_generation_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_);
lean_dec(v_a_1655_);
lean_dec_ref(v_a_1654_);
lean_dec(v_a_1653_);
lean_dec_ref(v_a_1652_);
lean_dec(v_a_1651_);
lean_dec_ref(v_a_1650_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec(v_a_1647_);
lean_dec(v_a_1646_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object* v_e_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___x_1669_; lean_object* v_a_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1669_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_preprocessImpl_spec__0___redArg(v_e_1658_, v_a_1665_);
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref(v___x_1669_);
v___x_1671_ = l_Lean_Meta_canonicalizeDecisionProjections(v_a_1670_);
lean_dec(v_a_1670_);
v___x_1672_ = l_Lean_Meta_Sym_unfoldReducible(v___x_1671_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1674_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1673_);
lean_dec_ref_known(v___x_1672_, 1);
v___x_1674_ = l_Lean_Meta_Grind_markNestedSubsingletons(v_a_1673_, v_a_1659_, v_a_1660_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1676_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_a_1675_);
lean_dec_ref_known(v___x_1674_, 1);
v___x_1676_ = l_Lean_Meta_Grind_eraseIrrelevantMData(v_a_1675_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1678_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1676_, 1);
v___x_1678_ = l_Lean_Meta_Grind_foldProjs(v_a_1677_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v___x_1680_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v___x_1678_, 1);
v___x_1680_ = l_Lean_Meta_Sym_normalizeLevels(v_a_1679_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_a_1681_; lean_object* v___x_1682_; 
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1680_, 1);
v___x_1682_ = l_Lean_Meta_Sym_canon(v_a_1681_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; lean_object* v___x_1684_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_a_1683_);
lean_dec_ref_known(v___x_1682_, 1);
v___x_1684_ = l_Lean_Meta_Sym_shareCommon(v_a_1683_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
return v___x_1684_;
}
else
{
return v___x_1682_;
}
}
else
{
return v___x_1680_;
}
}
else
{
return v___x_1678_;
}
}
else
{
return v___x_1676_;
}
}
else
{
return v___x_1674_;
}
}
else
{
return v___x_1672_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___redArg___boxed(lean_object* v_e_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Lean_Meta_Grind_preprocessLight___redArg(v_e_1685_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_, v_a_1690_, v_a_1691_, v_a_1692_, v_a_1693_, v_a_1694_);
lean_dec(v_a_1694_);
lean_dec_ref(v_a_1693_);
lean_dec(v_a_1692_);
lean_dec_ref(v_a_1691_);
lean_dec(v_a_1690_);
lean_dec_ref(v_a_1689_);
lean_dec(v_a_1688_);
lean_dec_ref(v_a_1687_);
lean_dec(v_a_1686_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight(lean_object* v_e_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_Meta_Grind_preprocessLight___redArg(v_e_1697_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_, v_a_1705_, v_a_1706_, v_a_1707_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_preprocessLight___boxed(lean_object* v_e_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_Meta_Grind_preprocessLight(v_e_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_, v_a_1718_, v_a_1719_, v_a_1720_);
lean_dec(v_a_1720_);
lean_dec_ref(v_a_1719_);
lean_dec(v_a_1718_);
lean_dec_ref(v_a_1717_);
lean_dec(v_a_1716_);
lean_dec_ref(v_a_1715_);
lean_dec(v_a_1714_);
lean_dec_ref(v_a_1713_);
lean_dec(v_a_1712_);
lean_dec(v_a_1711_);
return v_res_1722_;
}
}
lean_object* runtime_initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
}
#ifdef __cplusplus
}
#endif
