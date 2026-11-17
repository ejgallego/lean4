// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Basic
// Imports: public import Lean.Meta.Tactic.BVDecide.Attr public import Std.Tactic.BVDecide.Syntax public import Lean.Meta.Sym.ExprPtr public import Lean.Meta.Sym.SymM public import Lean.Meta.Sym.Simp.SimpM public import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InferType import Lean.Meta.Sym.InstantiateMVarsS public import Lean.Meta.Sym.DSimp.DSimpM import Lean.Meta.Sym.DSimp.Result public import Lean.Meta.Tactic.Grind.Types public import Lean.Meta.Tactic.Grind.BVDecide.Types public import Lean.Meta.Tactic.BVDecide.TacticContext
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
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_Result_getResultExpr(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assignFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg();
lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_instMonadControlReaderT___redArg();
lean_object* l_instMonadControlStateRefT_x27___redArg();
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_GoalM_runCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_cegar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_cegar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "assumption "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "enum domain size lemma for "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "structure lemma projection: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "and flattening from "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grind state"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cegar refinement loop"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2;
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Learned hypothesis: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Running pass: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___boxed(lean_object**);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Fixpoint iteration solved the goal"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Pipeline reached a fixpoint"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Rerunning pipeline"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v_contextDependent_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_12_; 
v_contextDependent_3_ = lean_ctor_get_uint8(v_x_2_, 1);
v_isSharedCheck_12_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_12_ == 0)
{
v___x_5_ = v_x_2_;
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
else
{
lean_dec(v_x_2_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
uint8_t v___x_7_; lean_object* v___x_9_; 
v___x_7_ = 1;
if (v_isShared_6_ == 0)
{
v___x_9_ = v___x_5_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_11_, 1, v_contextDependent_3_);
v___x_9_ = v_reuseFailAlloc_11_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
lean_object* v___x_10_; 
lean_ctor_set_uint8(v___x_9_, 0, v___x_7_);
v___x_10_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_9_);
return v___x_10_;
}
}
}
else
{
lean_object* v_e_x27_13_; lean_object* v_proof_14_; uint8_t v_contextDependent_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v_e_x27_13_ = lean_ctor_get(v_x_2_, 0);
v_proof_14_ = lean_ctor_get(v_x_2_, 1);
v_contextDependent_15_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*2 + 1);
v_isSharedCheck_24_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_24_ == 0)
{
v___x_17_ = v_x_2_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_proof_14_);
lean_inc(v_e_x27_13_);
lean_dec(v_x_2_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
uint8_t v___x_19_; lean_object* v___x_21_; 
v___x_19_ = 1;
if (v_isShared_18_ == 0)
{
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_e_x27_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_proof_14_);
lean_ctor_set_uint8(v_reuseFailAlloc_23_, sizeof(void*)*2 + 1, v_contextDependent_15_);
v___x_21_ = v_reuseFailAlloc_23_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; 
lean_ctor_set_uint8(v___x_21_, sizeof(void*)*2, v___x_19_);
v___x_22_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_21_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg(lean_object* v_inst_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_toPure_29_; lean_object* v___f_30_; lean_object* v___x_31_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_25_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_25_, 1);
lean_inc(v_toBind_28_);
lean_dec_ref(v_inst_25_);
v_toPure_29_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc(v_toPure_29_);
lean_dec_ref(v_toApplicative_27_);
v___f_30_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_30_, 0, v_toPure_29_);
v___x_31_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v_x_26_, v___f_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult(lean_object* v_m_32_, lean_object* v_inst_33_, lean_object* v_x_34_){
_start:
{
lean_object* v_toApplicative_35_; lean_object* v_toBind_36_; lean_object* v_toPure_37_; lean_object* v___f_38_; lean_object* v___x_39_; 
v_toApplicative_35_ = lean_ctor_get(v_inst_33_, 0);
lean_inc_ref(v_toApplicative_35_);
v_toBind_36_ = lean_ctor_get(v_inst_33_, 1);
lean_inc(v_toBind_36_);
lean_dec_ref(v_inst_33_);
v_toPure_37_ = lean_ctor_get(v_toApplicative_35_, 1);
lean_inc(v_toPure_37_);
lean_dec_ref(v_toApplicative_35_);
v___f_38_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_38_, 0, v_toPure_37_);
v___x_39_ = lean_apply_4(v_toBind_36_, lean_box(0), lean_box(0), v_x_34_, v___f_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___impl(lean_object* v_x_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_obj_tag_nat(v_x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___impl___boxed(lean_object* v_x_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___impl(v_x_42_);
lean_dec_ref(v_x_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(lean_object* v_t_44_, lean_object* v_k_45_){
_start:
{
if (lean_obj_tag(v_t_44_) == 0)
{
lean_object* v_mvar_46_; lean_object* v___x_47_; 
v_mvar_46_ = lean_ctor_get(v_t_44_, 0);
lean_inc(v_mvar_46_);
lean_dec_ref_known(v_t_44_, 1);
v___x_47_ = lean_apply_1(v_k_45_, v_mvar_46_);
return v___x_47_;
}
else
{
lean_object* v_goal_48_; lean_object* v___x_49_; 
v_goal_48_ = lean_ctor_get(v_t_44_, 0);
lean_inc_ref(v_goal_48_);
lean_dec_ref_known(v_t_44_, 1);
v___x_49_ = lean_apply_1(v_k_45_, v_goal_48_);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(lean_object* v_motive_50_, lean_object* v_ctorIdx_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_k_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_52_, v_k_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___boxed(lean_object* v_motive_56_, lean_object* v_ctorIdx_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_k_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(v_motive_56_, v_ctorIdx_57_, v_t_58_, v_h_59_, v_k_60_);
lean_dec(v_ctorIdx_57_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim___redArg(lean_object* v_t_62_, lean_object* v_mvarIdTarget_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_62_, v_mvarIdTarget_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_mvarIdTarget_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_66_, v_mvarIdTarget_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim___redArg(lean_object* v_t_70_, lean_object* v_grindTarget_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_70_, v_grindTarget_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim(lean_object* v_motive_73_, lean_object* v_t_74_, lean_object* v_h_75_, lean_object* v_grindTarget_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_74_, v_grindTarget_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object* v_x_82_){
_start:
{
if (lean_obj_tag(v_x_82_) == 0)
{
lean_object* v_mvar_83_; 
v_mvar_83_ = lean_ctor_get(v_x_82_, 0);
lean_inc(v_mvar_83_);
return v_mvar_83_;
}
else
{
lean_object* v_goal_84_; lean_object* v_mvarId_85_; 
v_goal_84_ = lean_ctor_get(v_x_82_, 0);
v_mvarId_85_ = lean_ctor_get(v_goal_84_, 1);
lean_inc(v_mvarId_85_);
return v_mvarId_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId___boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_x_86_);
lean_dec_ref(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_88_) == 0)
{
uint8_t v___x_89_; 
v___x_89_ = 0;
return v___x_89_;
}
else
{
uint8_t v___x_90_; 
v___x_90_ = 1;
return v___x_90_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind___boxed(lean_object* v_x_91_){
_start:
{
uint8_t v_res_92_; lean_object* v_r_93_; 
v_res_92_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(v_x_91_);
lean_dec_ref(v_x_91_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(lean_object* v_x_94_){
_start:
{
if (lean_obj_tag(v_x_94_) == 0)
{
uint8_t v___x_95_; 
v___x_95_ = 1;
return v___x_95_;
}
else
{
uint8_t v___x_96_; 
v___x_96_ = 0;
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar___boxed(lean_object* v_x_97_){
_start:
{
uint8_t v_res_98_; lean_object* v_r_99_; 
v_res_98_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(v_x_97_);
lean_dec_ref(v_x_97_);
v_r_99_ = lean_box(v_res_98_);
return v_r_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___impl(lean_object* v_x_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_tag_nat(v_x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___impl___boxed(lean_object* v_x_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___impl(v_x_102_);
lean_dec_ref(v_x_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object* v_t_104_, lean_object* v_k_105_){
_start:
{
lean_object* v_info_106_; lean_object* v_ctors_107_; lean_object* v___x_108_; 
v_info_106_ = lean_ctor_get(v_t_104_, 0);
lean_inc_ref(v_info_106_);
v_ctors_107_ = lean_ctor_get(v_t_104_, 1);
lean_inc_ref(v_ctors_107_);
lean_dec_ref(v_t_104_);
v___x_108_ = lean_apply_2(v_k_105_, v_info_106_, v_ctors_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object* v_motive_109_, lean_object* v_ctorIdx_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_k_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_111_, v_k_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object* v_motive_115_, lean_object* v_ctorIdx_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_k_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(v_motive_115_, v_ctorIdx_116_, v_t_117_, v_h_118_, v_k_119_);
lean_dec(v_ctorIdx_116_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object* v_t_121_, lean_object* v_simpleEnum_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_121_, v_simpleEnum_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_simpleEnum_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_125_, v_simpleEnum_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object* v_t_129_, lean_object* v_enumWithDefault_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_129_, v_enumWithDefault_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_enumWithDefault_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_133_, v_enumWithDefault_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(lean_object* v_x_137_){
_start:
{
lean_object* v_info_138_; 
v_info_138_ = lean_ctor_get(v_x_137_, 0);
lean_inc_ref(v_info_138_);
return v_info_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo___boxed(lean_object* v_x_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(v_x_139_);
lean_dec_ref(v_x_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___impl(lean_object* v_x_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_obj_tag_nat(v_x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___impl___boxed(lean_object* v_x_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___impl(v_x_143_);
lean_dec(v_x_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(lean_object* v_t_145_, lean_object* v_k_146_){
_start:
{
switch(lean_obj_tag(v_t_145_))
{
case 0:
{
lean_object* v_fvar_147_; lean_object* v___x_148_; 
v_fvar_147_ = lean_ctor_get(v_t_145_, 0);
lean_inc(v_fvar_147_);
lean_dec_ref_known(v_t_145_, 1);
v___x_148_ = lean_apply_1(v_k_146_, v_fvar_147_);
return v___x_148_;
}
case 1:
{
lean_object* v_n_149_; lean_object* v___x_150_; 
v_n_149_ = lean_ctor_get(v_t_145_, 0);
lean_inc(v_n_149_);
lean_dec_ref_known(v_t_145_, 1);
v___x_150_ = lean_apply_1(v_k_146_, v_n_149_);
return v___x_150_;
}
case 2:
{
lean_object* v_e_151_; lean_object* v___x_152_; 
v_e_151_ = lean_ctor_get(v_t_145_, 0);
lean_inc_ref(v_e_151_);
lean_dec_ref_known(v_t_145_, 1);
v___x_152_ = lean_apply_1(v_k_146_, v_e_151_);
return v___x_152_;
}
case 3:
{
lean_object* v_s_153_; lean_object* v___x_154_; 
v_s_153_ = lean_ctor_get(v_t_145_, 0);
lean_inc(v_s_153_);
lean_dec_ref_known(v_t_145_, 1);
v___x_154_ = lean_apply_1(v_k_146_, v_s_153_);
return v___x_154_;
}
default: 
{
lean_dec(v_t_145_);
return v_k_146_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(lean_object* v_motive_155_, lean_object* v_ctorIdx_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_k_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_157_, v_k_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___boxed(lean_object* v_motive_161_, lean_object* v_ctorIdx_162_, lean_object* v_t_163_, lean_object* v_h_164_, lean_object* v_k_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(v_motive_161_, v_ctorIdx_162_, v_t_163_, v_h_164_, v_k_165_);
lean_dec(v_ctorIdx_162_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim___redArg(lean_object* v_t_167_, lean_object* v_lctx_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_167_, v_lctx_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim(lean_object* v_motive_170_, lean_object* v_t_171_, lean_object* v_h_172_, lean_object* v_lctx_173_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_171_, v_lctx_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim___redArg(lean_object* v_t_175_, lean_object* v_enumDomain_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_175_, v_enumDomain_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim(lean_object* v_motive_178_, lean_object* v_t_179_, lean_object* v_h_180_, lean_object* v_enumDomain_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_179_, v_enumDomain_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim___redArg(lean_object* v_t_183_, lean_object* v_structureProjection_184_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_183_, v_structureProjection_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim(lean_object* v_motive_186_, lean_object* v_t_187_, lean_object* v_h_188_, lean_object* v_structureProjection_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_187_, v_structureProjection_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim___redArg(lean_object* v_t_191_, lean_object* v_andFlattened_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_191_, v_andFlattened_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim(lean_object* v_motive_194_, lean_object* v_t_195_, lean_object* v_h_196_, lean_object* v_andFlattened_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_195_, v_andFlattened_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim___redArg(lean_object* v_t_199_, lean_object* v_grind_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_199_, v_grind_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim(lean_object* v_motive_202_, lean_object* v_t_203_, lean_object* v_h_204_, lean_object* v_grind_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_203_, v_grind_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_cegar_elim___redArg(lean_object* v_t_207_, lean_object* v_cegar_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_207_, v_cegar_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_cegar_elim(lean_object* v_motive_210_, lean_object* v_t_211_, lean_object* v_h_212_, lean_object* v_cegar_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_211_, v_cegar_213_);
return v___x_214_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(lean_object* v_x_219_){
_start:
{
switch(lean_obj_tag(v_x_219_))
{
case 0:
{
lean_object* v_fvar_220_; uint64_t v___x_221_; uint64_t v___x_222_; uint64_t v___x_223_; 
v_fvar_220_ = lean_ctor_get(v_x_219_, 0);
v___x_221_ = 0ULL;
v___x_222_ = l_Lean_instHashableFVarId_hash(v_fvar_220_);
v___x_223_ = lean_uint64_mix_hash(v___x_221_, v___x_222_);
return v___x_223_;
}
case 1:
{
lean_object* v_n_224_; uint64_t v___x_225_; 
v_n_224_ = lean_ctor_get(v_x_219_, 0);
v___x_225_ = 1ULL;
if (lean_obj_tag(v_n_224_) == 0)
{
uint64_t v___x_226_; 
v___x_226_ = 13067028307566252276ULL;
return v___x_226_;
}
else
{
uint64_t v_hash_227_; uint64_t v___x_228_; 
v_hash_227_ = lean_ctor_get_uint64(v_n_224_, sizeof(void*)*2);
v___x_228_ = lean_uint64_mix_hash(v___x_225_, v_hash_227_);
return v___x_228_;
}
}
case 2:
{
lean_object* v_e_229_; uint64_t v___x_230_; uint64_t v___x_231_; uint64_t v___x_232_; 
v_e_229_ = lean_ctor_get(v_x_219_, 0);
v___x_230_ = 2ULL;
v___x_231_ = l_Lean_Expr_hash(v_e_229_);
v___x_232_ = lean_uint64_mix_hash(v___x_230_, v___x_231_);
return v___x_232_;
}
case 3:
{
lean_object* v_s_233_; uint64_t v___x_234_; uint64_t v___x_235_; uint64_t v___x_236_; 
v_s_233_ = lean_ctor_get(v_x_219_, 0);
v___x_234_ = 3ULL;
v___x_235_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(v_s_233_);
v___x_236_ = lean_uint64_mix_hash(v___x_234_, v___x_235_);
return v___x_236_;
}
case 4:
{
uint64_t v___x_237_; 
v___x_237_ = 4ULL;
return v___x_237_;
}
default: 
{
uint64_t v___x_238_; 
v___x_238_ = 5ULL;
return v___x_238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed(lean_object* v_x_239_){
_start:
{
uint64_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(v_x_239_);
lean_dec(v_x_239_);
v_r_241_ = lean_box_uint64(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
switch(lean_obj_tag(v_x_244_))
{
case 0:
{
if (lean_obj_tag(v_x_245_) == 0)
{
lean_object* v_fvar_246_; lean_object* v_fvar_247_; uint8_t v___x_248_; 
v_fvar_246_ = lean_ctor_get(v_x_244_, 0);
v_fvar_247_ = lean_ctor_get(v_x_245_, 0);
v___x_248_ = l_Lean_instBEqFVarId_beq(v_fvar_246_, v_fvar_247_);
return v___x_248_;
}
else
{
uint8_t v___x_249_; 
v___x_249_ = 0;
return v___x_249_;
}
}
case 1:
{
if (lean_obj_tag(v_x_245_) == 1)
{
lean_object* v_n_250_; lean_object* v_n_251_; uint8_t v___x_252_; 
v_n_250_ = lean_ctor_get(v_x_244_, 0);
v_n_251_ = lean_ctor_get(v_x_245_, 0);
v___x_252_ = lean_name_eq(v_n_250_, v_n_251_);
return v___x_252_;
}
else
{
uint8_t v___x_253_; 
v___x_253_ = 0;
return v___x_253_;
}
}
case 2:
{
if (lean_obj_tag(v_x_245_) == 2)
{
lean_object* v_e_254_; lean_object* v_e_255_; uint8_t v___x_256_; 
v_e_254_ = lean_ctor_get(v_x_244_, 0);
v_e_255_ = lean_ctor_get(v_x_245_, 0);
v___x_256_ = lean_expr_eqv(v_e_254_, v_e_255_);
return v___x_256_;
}
else
{
uint8_t v___x_257_; 
v___x_257_ = 0;
return v___x_257_;
}
}
case 3:
{
if (lean_obj_tag(v_x_245_) == 3)
{
lean_object* v_s_258_; lean_object* v_s_259_; 
v_s_258_ = lean_ctor_get(v_x_244_, 0);
v_s_259_ = lean_ctor_get(v_x_245_, 0);
v_x_244_ = v_s_258_;
v_x_245_ = v_s_259_;
goto _start;
}
else
{
uint8_t v___x_261_; 
v___x_261_ = 0;
return v___x_261_;
}
}
case 4:
{
if (lean_obj_tag(v_x_245_) == 4)
{
uint8_t v___x_262_; 
v___x_262_ = 1;
return v___x_262_;
}
else
{
uint8_t v___x_263_; 
v___x_263_ = 0;
return v___x_263_;
}
}
default: 
{
if (lean_obj_tag(v_x_245_) == 5)
{
uint8_t v___x_264_; 
v___x_264_ = 1;
return v___x_264_;
}
else
{
uint8_t v___x_265_; 
v___x_265_ = 0;
return v___x_265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed(lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
uint8_t v_res_268_; lean_object* v_r_269_; 
v_res_268_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(v_x_266_, v_x_267_);
lean_dec(v_x_267_);
lean_dec(v_x_266_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(lean_object* v_s_272_){
_start:
{
if (lean_obj_tag(v_s_272_) == 3)
{
lean_object* v_s_273_; 
v_s_273_ = lean_ctor_get(v_s_272_, 0);
v_s_272_ = v_s_273_;
goto _start;
}
else
{
lean_inc(v_s_272_);
return v_s_272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten___boxed(lean_object* v_s_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(v_s_275_);
lean_dec(v_s_275_);
return v_res_276_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0));
v___x_279_ = l_Lean_stringToMessageData(v___x_278_);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2));
v___x_282_ = l_Lean_stringToMessageData(v___x_281_);
return v___x_282_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4));
v___x_285_ = l_Lean_stringToMessageData(v___x_284_);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6));
v___x_288_ = l_Lean_stringToMessageData(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8));
v___x_291_ = l_Lean_stringToMessageData(v___x_290_);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__11(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__10));
v___x_294_ = l_Lean_stringToMessageData(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(lean_object* v_s_295_){
_start:
{
switch(lean_obj_tag(v_s_295_))
{
case 0:
{
lean_object* v_fvar_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_fvar_296_ = lean_ctor_get(v_s_295_, 0);
lean_inc(v_fvar_296_);
lean_dec_ref_known(v_s_295_, 1);
v___x_297_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1);
v___x_298_ = l_Lean_mkFVar(v_fvar_296_);
v___x_299_ = l_Lean_MessageData_ofExpr(v___x_298_);
v___x_300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_297_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
return v___x_300_;
}
case 1:
{
lean_object* v_n_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_n_301_ = lean_ctor_get(v_s_295_, 0);
lean_inc(v_n_301_);
lean_dec_ref_known(v_s_295_, 1);
v___x_302_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3);
v___x_303_ = l_Lean_MessageData_ofName(v_n_301_);
v___x_304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_302_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
return v___x_304_;
}
case 2:
{
lean_object* v_e_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_e_305_ = lean_ctor_get(v_s_295_, 0);
lean_inc_ref(v_e_305_);
lean_dec_ref_known(v_s_295_, 1);
v___x_306_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5);
v___x_307_ = l_Lean_MessageData_ofExpr(v_e_305_);
v___x_308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_306_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
return v___x_308_;
}
case 3:
{
lean_object* v_s_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_s_309_ = lean_ctor_get(v_s_295_, 0);
lean_inc(v_s_309_);
lean_dec_ref_known(v_s_295_, 1);
v___x_310_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7);
v___x_311_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(v_s_309_);
lean_dec(v_s_309_);
v___x_312_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(v___x_311_);
v___x_313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_310_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
return v___x_313_;
}
case 4:
{
lean_object* v___x_314_; 
v___x_314_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9);
return v___x_314_;
}
default: 
{
lean_object* v___x_315_; 
v___x_315_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__11);
return v___x_315_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = lean_box(0);
v___x_322_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1));
v___x_323_ = l_Lean_Expr_const___override(v___x_322_, v___x_321_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_324_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default));
v___x_325_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2);
v___x_326_ = lean_box(0);
v___x_327_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
lean_ctor_set(v___x_327_, 1, v___x_325_);
lean_ctor_set(v___x_327_, 2, v___x_325_);
lean_ctor_set(v___x_327_, 3, v___x_324_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default(void){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3);
return v___x_328_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp(void){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
return v___x_329_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(lean_object* v_lhs_330_, lean_object* v_rhs_331_){
_start:
{
lean_object* v_type_332_; lean_object* v_type_333_; uint8_t v___x_334_; 
v_type_332_ = lean_ctor_get(v_lhs_330_, 1);
v_type_333_ = lean_ctor_get(v_rhs_331_, 1);
v___x_334_ = lean_expr_eqv(v_type_332_, v_type_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed(lean_object* v_lhs_335_, lean_object* v_rhs_336_){
_start:
{
uint8_t v_res_337_; lean_object* v_r_338_; 
v_res_337_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(v_lhs_335_, v_rhs_336_);
lean_dec_ref(v_rhs_336_);
lean_dec_ref(v_lhs_335_);
v_r_338_ = lean_box(v_res_337_);
return v_r_338_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(lean_object* v_hyp_341_){
_start:
{
lean_object* v_type_342_; uint64_t v___x_343_; 
v_type_342_ = lean_ctor_get(v_hyp_341_, 1);
v___x_343_ = l_Lean_Expr_hash(v_type_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed(lean_object* v_hyp_344_){
_start:
{
uint64_t v_res_345_; lean_object* v_r_346_; 
v_res_345_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(v_hyp_344_);
lean_dec_ref(v_hyp_344_);
v_r_346_ = lean_box_uint64(v_res_345_);
return v_r_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0(lean_object* v_hyp_349_){
_start:
{
lean_object* v_type_350_; lean_object* v___x_351_; 
v_type_350_ = lean_ctor_get(v_hyp_349_, 1);
lean_inc_ref(v_type_350_);
lean_dec_ref(v_hyp_349_);
v___x_351_ = l_Lean_MessageData_ofExpr(v_type_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___impl(lean_object* v_x_354_){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = lean_obj_tag_nat(v_x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___impl___boxed(lean_object* v_x_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___impl(v_x_356_);
lean_dec(v_x_356_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(lean_object* v_t_358_, lean_object* v_k_359_){
_start:
{
if (lean_obj_tag(v_t_358_) == 0)
{
lean_object* v_restrictedTypes_360_; lean_object* v___x_361_; 
v_restrictedTypes_360_ = lean_ctor_get(v_t_358_, 0);
lean_inc(v_restrictedTypes_360_);
lean_dec_ref_known(v_t_358_, 1);
v___x_361_ = lean_apply_1(v_k_359_, v_restrictedTypes_360_);
return v___x_361_;
}
else
{
return v_k_359_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(lean_object* v_motive_362_, lean_object* v_ctorIdx_363_, lean_object* v_t_364_, lean_object* v_h_365_, lean_object* v_k_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_364_, v_k_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___boxed(lean_object* v_motive_368_, lean_object* v_ctorIdx_369_, lean_object* v_t_370_, lean_object* v_h_371_, lean_object* v_k_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(v_motive_368_, v_ctorIdx_369_, v_t_370_, v_h_371_, v_k_372_);
lean_dec(v_ctorIdx_369_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim___redArg(lean_object* v_t_374_, lean_object* v_solve_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_374_, v_solve_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim(lean_object* v_motive_377_, lean_object* v_t_378_, lean_object* v_h_379_, lean_object* v_solve_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_378_, v_solve_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim___redArg(lean_object* v_t_382_, lean_object* v_push_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_382_, v_push_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim(lean_object* v_motive_385_, lean_object* v_t_386_, lean_object* v_h_387_, lean_object* v_push_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_386_, v_push_388_);
return v___x_389_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object* v_x_390_){
_start:
{
if (lean_obj_tag(v_x_390_) == 0)
{
uint8_t v___x_391_; 
v___x_391_ = 0;
return v___x_391_;
}
else
{
uint8_t v___x_392_; 
v___x_392_ = 1;
return v___x_392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush___boxed(lean_object* v_x_393_){
_start:
{
uint8_t v_res_394_; lean_object* v_r_395_; 
v_res_394_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_x_393_);
lean_dec(v_x_393_);
v_r_395_ = lean_box(v_res_394_);
return v_r_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_396_) == 0)
{
lean_object* v_restrictedTypes_397_; 
v_restrictedTypes_397_ = lean_ctor_get(v_x_396_, 0);
lean_inc(v_restrictedTypes_397_);
return v_restrictedTypes_397_;
}
else
{
lean_object* v___x_398_; 
v___x_398_ = lean_box(0);
return v___x_398_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes___boxed(lean_object* v_x_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_x_399_);
lean_dec(v_x_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(lean_object* v_mode_401_, lean_object* v_config_402_){
_start:
{
if (lean_obj_tag(v_mode_401_) == 0)
{
return v_config_402_;
}
else
{
lean_object* v_timeout_403_; uint8_t v_trimProofs_404_; uint8_t v_binaryProofs_405_; uint8_t v_acNf_406_; uint8_t v_graphviz_407_; lean_object* v_maxSteps_408_; uint8_t v_shortCircuit_409_; uint8_t v_solverMode_410_; uint8_t v_uf_411_; lean_object* v_cegarRounds_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_420_; 
v_timeout_403_ = lean_ctor_get(v_config_402_, 0);
v_trimProofs_404_ = lean_ctor_get_uint8(v_config_402_, sizeof(void*)*3);
v_binaryProofs_405_ = lean_ctor_get_uint8(v_config_402_, sizeof(void*)*3 + 1);
v_acNf_406_ = lean_ctor_get_uint8(v_config_402_, sizeof(void*)*3 + 2);
v_graphviz_407_ = lean_ctor_get_uint8(v_config_402_, sizeof(void*)*3 + 8);
v_maxSteps_408_ = lean_ctor_get(v_config_402_, 1);
v_shortCircuit_409_ = lean_ctor_get_uint8(v_config_402_, sizeof(void*)*3 + 9);
v_solverMode_410_ = lean_ctor_get_uint8(v_config_402_, sizeof(void*)*3 + 10);
v_uf_411_ = lean_ctor_get_uint8(v_config_402_, sizeof(void*)*3 + 11);
v_cegarRounds_412_ = lean_ctor_get(v_config_402_, 2);
v_isSharedCheck_420_ = !lean_is_exclusive(v_config_402_);
if (v_isSharedCheck_420_ == 0)
{
v___x_414_ = v_config_402_;
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_cegarRounds_412_);
lean_inc(v_maxSteps_408_);
lean_inc(v_timeout_403_);
lean_dec(v_config_402_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
uint8_t v___x_416_; lean_object* v___x_418_; 
v___x_416_ = 0;
if (v_isShared_415_ == 0)
{
v___x_418_ = v___x_414_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 3, 12);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_timeout_403_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_maxSteps_408_);
lean_ctor_set(v_reuseFailAlloc_419_, 2, v_cegarRounds_412_);
lean_ctor_set_uint8(v_reuseFailAlloc_419_, sizeof(void*)*3, v_trimProofs_404_);
lean_ctor_set_uint8(v_reuseFailAlloc_419_, sizeof(void*)*3 + 1, v_binaryProofs_405_);
lean_ctor_set_uint8(v_reuseFailAlloc_419_, sizeof(void*)*3 + 2, v_acNf_406_);
lean_ctor_set_uint8(v_reuseFailAlloc_419_, sizeof(void*)*3 + 8, v_graphviz_407_);
lean_ctor_set_uint8(v_reuseFailAlloc_419_, sizeof(void*)*3 + 9, v_shortCircuit_409_);
lean_ctor_set_uint8(v_reuseFailAlloc_419_, sizeof(void*)*3 + 10, v_solverMode_410_);
lean_ctor_set_uint8(v_reuseFailAlloc_419_, sizeof(void*)*3 + 11, v_uf_411_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*3 + 3, v___x_416_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*3 + 4, v___x_416_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*3 + 5, v___x_416_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*3 + 6, v___x_416_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*3 + 7, v___x_416_);
return v___x_418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig___boxed(lean_object* v_mode_421_, lean_object* v_config_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(v_mode_421_, v_config_422_);
lean_dec(v_mode_421_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(lean_object* v_mode_424_, lean_object* v_config_425_, lean_object* v_keepCaches_426_){
_start:
{
uint8_t v___y_428_; 
if (lean_obj_tag(v_keepCaches_426_) == 0)
{
uint8_t v_uf_431_; 
v_uf_431_ = lean_ctor_get_uint8(v_config_425_, sizeof(void*)*3 + 11);
if (v_uf_431_ == 0)
{
uint8_t v___x_432_; 
v___x_432_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_424_);
v___y_428_ = v___x_432_;
goto v___jp_427_;
}
else
{
v___y_428_ = v_uf_431_;
goto v___jp_427_;
}
}
else
{
lean_object* v_val_433_; uint8_t v___x_434_; 
v_val_433_ = lean_ctor_get(v_keepCaches_426_, 0);
v___x_434_ = lean_unbox(v_val_433_);
v___y_428_ = v___x_434_;
goto v___jp_427_;
}
v___jp_427_:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(v_mode_424_, v_config_425_);
v___x_430_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v_mode_424_);
lean_ctor_set_uint8(v___x_430_, sizeof(void*)*2, v___y_428_);
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new___boxed(lean_object* v_mode_435_, lean_object* v_config_436_, lean_object* v_keepCaches_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(v_mode_435_, v_config_436_, v_keepCaches_437_);
lean_dec(v_keepCaches_437_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_TacticContext_preProcessContext(lean_object* v_ctx_439_){
_start:
{
lean_object* v_config_440_; lean_object* v_restrictedTypes_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_config_440_ = lean_ctor_get(v_ctx_439_, 5);
lean_inc_ref(v_config_440_);
v_restrictedTypes_441_ = lean_ctor_get(v_ctx_439_, 6);
lean_inc(v_restrictedTypes_441_);
lean_dec_ref(v_ctx_439_);
v___x_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_442_, 0, v_restrictedTypes_441_);
v___x_443_ = lean_box(0);
v___x_444_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(v___x_442_, v_config_440_, v___x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___impl(uint8_t v_x_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_box(v_x_445_);
v___x_447_ = lean_obj_tag_nat(v___x_446_);
lean_dec(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___impl___boxed(lean_object* v_x_448_){
_start:
{
uint8_t v_x_4__boxed_449_; lean_object* v_res_450_; 
v_x_4__boxed_449_ = lean_unbox(v_x_448_);
v_res_450_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___impl(v_x_4__boxed_449_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(lean_object* v_k_451_){
_start:
{
lean_inc(v_k_451_);
return v_k_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg___boxed(lean_object* v_k_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(v_k_452_);
lean_dec(v_k_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(lean_object* v_motive_454_, lean_object* v_ctorIdx_455_, uint8_t v_t_456_, lean_object* v_h_457_, lean_object* v_k_458_){
_start:
{
lean_inc(v_k_458_);
return v_k_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___boxed(lean_object* v_motive_459_, lean_object* v_ctorIdx_460_, lean_object* v_t_461_, lean_object* v_h_462_, lean_object* v_k_463_){
_start:
{
uint8_t v_t_boxed_464_; lean_object* v_res_465_; 
v_t_boxed_464_ = lean_unbox(v_t_461_);
v_res_465_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(v_motive_459_, v_ctorIdx_460_, v_t_boxed_464_, v_h_462_, v_k_463_);
lean_dec(v_k_463_);
lean_dec(v_ctorIdx_460_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(lean_object* v_rewrite_466_){
_start:
{
lean_inc(v_rewrite_466_);
return v_rewrite_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg___boxed(lean_object* v_rewrite_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(v_rewrite_467_);
lean_dec(v_rewrite_467_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(lean_object* v_motive_469_, uint8_t v_t_470_, lean_object* v_h_471_, lean_object* v_rewrite_472_){
_start:
{
lean_inc(v_rewrite_472_);
return v_rewrite_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___boxed(lean_object* v_motive_473_, lean_object* v_t_474_, lean_object* v_h_475_, lean_object* v_rewrite_476_){
_start:
{
uint8_t v_t_boxed_477_; lean_object* v_res_478_; 
v_t_boxed_477_ = lean_unbox(v_t_474_);
v_res_478_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(v_motive_473_, v_t_boxed_477_, v_h_475_, v_rewrite_476_);
lean_dec(v_rewrite_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(lean_object* v_ac_479_){
_start:
{
lean_inc(v_ac_479_);
return v_ac_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg___boxed(lean_object* v_ac_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(v_ac_480_);
lean_dec(v_ac_480_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(lean_object* v_motive_482_, uint8_t v_t_483_, lean_object* v_h_484_, lean_object* v_ac_485_){
_start:
{
lean_inc(v_ac_485_);
return v_ac_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___boxed(lean_object* v_motive_486_, lean_object* v_t_487_, lean_object* v_h_488_, lean_object* v_ac_489_){
_start:
{
uint8_t v_t_boxed_490_; lean_object* v_res_491_; 
v_t_boxed_490_ = lean_unbox(v_t_487_);
v_res_491_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(v_motive_486_, v_t_boxed_490_, v_h_488_, v_ac_489_);
lean_dec(v_ac_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___impl(uint8_t v_x_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_box(v_x_492_);
v___x_494_ = lean_obj_tag_nat(v___x_493_);
lean_dec(v___x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___impl___boxed(lean_object* v_x_495_){
_start:
{
uint8_t v_x_4__boxed_496_; lean_object* v_res_497_; 
v_x_4__boxed_496_ = lean_unbox(v_x_495_);
v_res_497_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___impl(v_x_4__boxed_496_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(lean_object* v_k_498_){
_start:
{
lean_inc(v_k_498_);
return v_k_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg___boxed(lean_object* v_k_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(v_k_499_);
lean_dec(v_k_499_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(lean_object* v_motive_501_, lean_object* v_ctorIdx_502_, uint8_t v_t_503_, lean_object* v_h_504_, lean_object* v_k_505_){
_start:
{
lean_inc(v_k_505_);
return v_k_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___boxed(lean_object* v_motive_506_, lean_object* v_ctorIdx_507_, lean_object* v_t_508_, lean_object* v_h_509_, lean_object* v_k_510_){
_start:
{
uint8_t v_t_boxed_511_; lean_object* v_res_512_; 
v_t_boxed_511_ = lean_unbox(v_t_508_);
v_res_512_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(v_motive_506_, v_ctorIdx_507_, v_t_boxed_511_, v_h_509_, v_k_510_);
lean_dec(v_k_510_);
lean_dec(v_ctorIdx_507_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(lean_object* v_rewrite_513_){
_start:
{
lean_inc(v_rewrite_513_);
return v_rewrite_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg___boxed(lean_object* v_rewrite_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(v_rewrite_514_);
lean_dec(v_rewrite_514_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(lean_object* v_motive_516_, uint8_t v_t_517_, lean_object* v_h_518_, lean_object* v_rewrite_519_){
_start:
{
lean_inc(v_rewrite_519_);
return v_rewrite_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___boxed(lean_object* v_motive_520_, lean_object* v_t_521_, lean_object* v_h_522_, lean_object* v_rewrite_523_){
_start:
{
uint8_t v_t_boxed_524_; lean_object* v_res_525_; 
v_t_boxed_524_ = lean_unbox(v_t_521_);
v_res_525_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(v_motive_520_, v_t_boxed_524_, v_h_522_, v_rewrite_523_);
lean_dec(v_rewrite_523_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(lean_object* v_reduction_526_){
_start:
{
lean_inc(v_reduction_526_);
return v_reduction_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg___boxed(lean_object* v_reduction_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(v_reduction_527_);
lean_dec(v_reduction_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(lean_object* v_motive_529_, uint8_t v_t_530_, lean_object* v_h_531_, lean_object* v_reduction_532_){
_start:
{
lean_inc(v_reduction_532_);
return v_reduction_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___boxed(lean_object* v_motive_533_, lean_object* v_t_534_, lean_object* v_h_535_, lean_object* v_reduction_536_){
_start:
{
uint8_t v_t_boxed_537_; lean_object* v_res_538_; 
v_t_boxed_537_ = lean_unbox(v_t_534_);
v_res_538_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(v_motive_533_, v_t_boxed_537_, v_h_535_, v_reduction_536_);
lean_dec(v_reduction_536_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(uint8_t v_x_539_, lean_object* v_x_540_){
_start:
{
if (v_x_539_ == 0)
{
lean_object* v_rewriteSimp_541_; 
v_rewriteSimp_541_ = lean_ctor_get(v_x_540_, 1);
lean_inc_ref(v_rewriteSimp_541_);
return v_rewriteSimp_541_;
}
else
{
lean_object* v_ac_542_; 
v_ac_542_ = lean_ctor_get(v_x_540_, 3);
lean_inc_ref(v_ac_542_);
return v_ac_542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get___boxed(lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
uint8_t v_x_15__boxed_545_; lean_object* v_res_546_; 
v_x_15__boxed_545_ = lean_unbox(v_x_543_);
v_res_546_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(v_x_15__boxed_545_, v_x_544_);
lean_dec_ref(v_x_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(uint8_t v_x_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
if (v_x_547_ == 0)
{
lean_object* v_reduction_550_; lean_object* v_rewriteDSimp_551_; lean_object* v_ac_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_reduction_550_ = lean_ctor_get(v_x_549_, 0);
v_rewriteDSimp_551_ = lean_ctor_get(v_x_549_, 2);
v_ac_552_ = lean_ctor_get(v_x_549_, 3);
v_isSharedCheck_559_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_559_ == 0)
{
lean_object* v_unused_560_; 
v_unused_560_ = lean_ctor_get(v_x_549_, 1);
lean_dec(v_unused_560_);
v___x_554_ = v_x_549_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_ac_552_);
lean_inc(v_rewriteDSimp_551_);
lean_inc(v_reduction_550_);
lean_dec(v_x_549_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_x_548_);
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_reduction_550_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_x_548_);
lean_ctor_set(v_reuseFailAlloc_558_, 2, v_rewriteDSimp_551_);
lean_ctor_set(v_reuseFailAlloc_558_, 3, v_ac_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
else
{
lean_object* v_reduction_561_; lean_object* v_rewriteSimp_562_; lean_object* v_rewriteDSimp_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_reduction_561_ = lean_ctor_get(v_x_549_, 0);
v_rewriteSimp_562_ = lean_ctor_get(v_x_549_, 1);
v_rewriteDSimp_563_ = lean_ctor_get(v_x_549_, 2);
v_isSharedCheck_570_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_570_ == 0)
{
lean_object* v_unused_571_; 
v_unused_571_ = lean_ctor_get(v_x_549_, 3);
lean_dec(v_unused_571_);
v___x_565_ = v_x_549_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_rewriteDSimp_563_);
lean_inc(v_rewriteSimp_562_);
lean_inc(v_reduction_561_);
lean_dec(v_x_549_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 3, v_x_548_);
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_reduction_561_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v_rewriteSimp_562_);
lean_ctor_set(v_reuseFailAlloc_569_, 2, v_rewriteDSimp_563_);
lean_ctor_set(v_reuseFailAlloc_569_, 3, v_x_548_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set___boxed(lean_object* v_x_572_, lean_object* v_x_573_, lean_object* v_x_574_){
_start:
{
uint8_t v_x_28__boxed_575_; lean_object* v_res_576_; 
v_x_28__boxed_575_ = lean_unbox(v_x_572_);
v_res_576_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_x_28__boxed_575_, v_x_573_, v_x_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(uint8_t v_x_577_, lean_object* v_x_578_){
_start:
{
if (v_x_577_ == 0)
{
lean_object* v_rewriteDSimp_579_; 
v_rewriteDSimp_579_ = lean_ctor_get(v_x_578_, 2);
lean_inc_ref(v_rewriteDSimp_579_);
return v_rewriteDSimp_579_;
}
else
{
lean_object* v_reduction_580_; 
v_reduction_580_ = lean_ctor_get(v_x_578_, 0);
lean_inc_ref(v_reduction_580_);
return v_reduction_580_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get___boxed(lean_object* v_x_581_, lean_object* v_x_582_){
_start:
{
uint8_t v_x_15__boxed_583_; lean_object* v_res_584_; 
v_x_15__boxed_583_ = lean_unbox(v_x_581_);
v_res_584_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(v_x_15__boxed_583_, v_x_582_);
lean_dec_ref(v_x_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(uint8_t v_x_585_, lean_object* v_x_586_, lean_object* v_x_587_){
_start:
{
if (v_x_585_ == 0)
{
lean_object* v_reduction_588_; lean_object* v_rewriteSimp_589_; lean_object* v_ac_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_reduction_588_ = lean_ctor_get(v_x_587_, 0);
v_rewriteSimp_589_ = lean_ctor_get(v_x_587_, 1);
v_ac_590_ = lean_ctor_get(v_x_587_, 3);
v_isSharedCheck_597_ = !lean_is_exclusive(v_x_587_);
if (v_isSharedCheck_597_ == 0)
{
lean_object* v_unused_598_; 
v_unused_598_ = lean_ctor_get(v_x_587_, 2);
lean_dec(v_unused_598_);
v___x_592_ = v_x_587_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_ac_590_);
lean_inc(v_rewriteSimp_589_);
lean_inc(v_reduction_588_);
lean_dec(v_x_587_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 2, v_x_586_);
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_reduction_588_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_rewriteSimp_589_);
lean_ctor_set(v_reuseFailAlloc_596_, 2, v_x_586_);
lean_ctor_set(v_reuseFailAlloc_596_, 3, v_ac_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
else
{
lean_object* v_rewriteSimp_599_; lean_object* v_rewriteDSimp_600_; lean_object* v_ac_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
v_rewriteSimp_599_ = lean_ctor_get(v_x_587_, 1);
v_rewriteDSimp_600_ = lean_ctor_get(v_x_587_, 2);
v_ac_601_ = lean_ctor_get(v_x_587_, 3);
v_isSharedCheck_608_ = !lean_is_exclusive(v_x_587_);
if (v_isSharedCheck_608_ == 0)
{
lean_object* v_unused_609_; 
v_unused_609_ = lean_ctor_get(v_x_587_, 0);
lean_dec(v_unused_609_);
v___x_603_ = v_x_587_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_ac_601_);
lean_inc(v_rewriteDSimp_600_);
lean_inc(v_rewriteSimp_599_);
lean_dec(v_x_587_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v_x_586_);
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_x_586_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_rewriteSimp_599_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_rewriteDSimp_600_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v_ac_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set___boxed(lean_object* v_x_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
uint8_t v_x_28__boxed_613_; lean_object* v_res_614_; 
v_x_28__boxed_613_ = lean_unbox(v_x_610_);
v_res_614_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_x_28__boxed_613_, v_x_611_, v_x_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object* v_hyp_620_, lean_object* v_result_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
if (lean_obj_tag(v_result_621_) == 0)
{
lean_object* v___x_628_; 
lean_dec_ref_known(v_result_621_, 0);
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v_hyp_620_);
return v___x_628_;
}
else
{
lean_object* v_e_x27_629_; lean_object* v_proof_630_; lean_object* v_name_631_; lean_object* v_type_632_; lean_object* v_value_633_; lean_object* v_source_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_663_; 
v_e_x27_629_ = lean_ctor_get(v_result_621_, 0);
lean_inc_ref(v_e_x27_629_);
v_proof_630_ = lean_ctor_get(v_result_621_, 1);
lean_inc_ref(v_proof_630_);
lean_dec_ref_known(v_result_621_, 2);
v_name_631_ = lean_ctor_get(v_hyp_620_, 0);
v_type_632_ = lean_ctor_get(v_hyp_620_, 1);
v_value_633_ = lean_ctor_get(v_hyp_620_, 2);
v_source_634_ = lean_ctor_get(v_hyp_620_, 3);
v_isSharedCheck_663_ = !lean_is_exclusive(v_hyp_620_);
if (v_isSharedCheck_663_ == 0)
{
v___x_636_ = v_hyp_620_;
v_isShared_637_ = v_isSharedCheck_663_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_source_634_);
lean_inc(v_value_633_);
lean_inc(v_type_632_);
lean_inc(v_name_631_);
lean_dec(v_hyp_620_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_663_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; 
lean_inc_ref(v_type_632_);
v___x_638_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_632_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_654_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_654_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_654_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_654_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_643_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2));
v___x_644_ = lean_box(0);
v___x_645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_645_, 0, v_a_639_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
v___x_646_ = l_Lean_mkConst(v___x_643_, v___x_645_);
lean_inc_ref(v_e_x27_629_);
v___x_647_ = l_Lean_mkApp4(v___x_646_, v_type_632_, v_e_x27_629_, v_proof_630_, v_value_633_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 2, v___x_647_);
lean_ctor_set(v___x_636_, 1, v_e_x27_629_);
v___x_649_ = v___x_636_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_name_631_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_e_x27_629_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v___x_647_);
lean_ctor_set(v_reuseFailAlloc_653_, 3, v_source_634_);
v___x_649_ = v_reuseFailAlloc_653_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_651_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v___x_649_);
v___x_651_ = v___x_641_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
lean_del_object(v___x_636_);
lean_dec(v_source_634_);
lean_dec_ref(v_value_633_);
lean_dec_ref(v_type_632_);
lean_dec(v_name_631_);
lean_dec_ref(v_proof_630_);
lean_dec_ref(v_e_x27_629_);
v_a_655_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_638_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_638_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object* v_hyp_664_, lean_object* v_result_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_664_, v_result_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_);
lean_dec(v_a_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_a_668_);
lean_dec_ref(v_a_667_);
lean_dec(v_a_666_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object* v_hyp_673_, lean_object* v_result_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_673_, v_result_674_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object* v_hyp_683_, lean_object* v_result_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(v_hyp_683_, v_result_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
lean_dec(v_a_688_);
lean_dec_ref(v_a_687_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(lean_object* v_hyp_693_, lean_object* v_result_694_){
_start:
{
lean_object* v_name_696_; lean_object* v_type_697_; lean_object* v_value_698_; lean_object* v_source_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_708_; 
v_name_696_ = lean_ctor_get(v_hyp_693_, 0);
v_type_697_ = lean_ctor_get(v_hyp_693_, 1);
v_value_698_ = lean_ctor_get(v_hyp_693_, 2);
v_source_699_ = lean_ctor_get(v_hyp_693_, 3);
v_isSharedCheck_708_ = !lean_is_exclusive(v_hyp_693_);
if (v_isSharedCheck_708_ == 0)
{
v___x_701_ = v_hyp_693_;
v_isShared_702_ = v_isSharedCheck_708_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_source_699_);
lean_inc(v_value_698_);
lean_inc(v_type_697_);
lean_inc(v_name_696_);
lean_dec(v_hyp_693_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_708_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_703_ = l_Lean_Meta_Sym_DSimp_Result_getResultExpr(v_type_697_, v_result_694_);
lean_dec_ref(v_type_697_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v___x_703_);
v___x_705_ = v___x_701_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_name_696_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_707_, 2, v_value_698_);
lean_ctor_set(v_reuseFailAlloc_707_, 3, v_source_699_);
v___x_705_ = v_reuseFailAlloc_707_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; 
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
return v___x_706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg___boxed(lean_object* v_hyp_709_, lean_object* v_result_710_, lean_object* v_a_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_709_, v_result_710_);
lean_dec_ref(v_result_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(lean_object* v_hyp_713_, lean_object* v_result_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_713_, v_result_714_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___boxed(lean_object* v_hyp_723_, lean_object* v_result_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(v_hyp_723_, v_result_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
lean_dec(v_a_728_);
lean_dec_ref(v_a_727_);
lean_dec(v_a_726_);
lean_dec_ref(v_a_725_);
lean_dec_ref(v_result_724_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object* v_a_733_){
_start:
{
lean_object* v_config_735_; lean_object* v___x_736_; 
v_config_735_ = lean_ctor_get(v_a_733_, 0);
lean_inc_ref(v_config_735_);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v_config_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(v_a_737_);
lean_dec_ref(v_a_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_config_752_; lean_object* v___x_753_; 
v_config_752_ = lean_ctor_get(v_a_740_, 0);
lean_inc_ref(v_config_752_);
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v_config_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
lean_dec(v_a_756_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(lean_object* v_a_767_){
_start:
{
lean_object* v_mode_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v_mode_769_ = lean_ctor_get(v_a_767_, 1);
v___x_770_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_mode_769_);
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg___boxed(lean_object* v_a_772_, lean_object* v_a_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(v_a_772_);
lean_dec_ref(v_a_772_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_mode_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v_mode_787_ = lean_ctor_get(v_a_775_, 1);
v___x_788_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_mode_787_);
v___x_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___boxed(lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(lean_object* v_a_803_){
_start:
{
lean_object* v_mode_805_; uint8_t v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_mode_805_ = lean_ctor_get(v_a_803_, 1);
v___x_806_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_805_);
v___x_807_ = lean_box(v___x_806_);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg___boxed(lean_object* v_a_809_, lean_object* v_a_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(v_a_809_);
lean_dec_ref(v_a_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_mode_824_; uint8_t v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_mode_824_ = lean_ctor_get(v_a_812_, 1);
v___x_825_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_824_);
v___x_826_ = lean_box(v___x_825_);
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___boxed(lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(v_a_828_, v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_);
lean_dec(v_a_838_);
lean_dec_ref(v_a_837_);
lean_dec(v_a_836_);
lean_dec_ref(v_a_835_);
lean_dec(v_a_834_);
lean_dec_ref(v_a_833_);
lean_dec(v_a_832_);
lean_dec_ref(v_a_831_);
lean_dec(v_a_830_);
lean_dec(v_a_829_);
lean_dec_ref(v_a_828_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(lean_object* v_a_841_){
_start:
{
lean_object* v___x_843_; lean_object* v_target_844_; lean_object* v___x_845_; 
v___x_843_ = lean_st_ref_get(v_a_841_);
v_target_844_ = lean_ctor_get(v___x_843_, 2);
lean_inc_ref(v_target_844_);
lean_dec(v___x_843_);
v___x_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_845_, 0, v_target_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg___boxed(lean_object* v_a_846_, lean_object* v_a_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(v_a_846_);
lean_dec(v_a_846_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_){
_start:
{
lean_object* v___x_861_; lean_object* v_target_862_; lean_object* v___x_863_; 
v___x_861_ = lean_st_ref_get(v_a_850_);
v_target_862_ = lean_ctor_get(v___x_861_, 2);
lean_inc_ref(v_target_862_);
lean_dec(v___x_861_);
v___x_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_863_, 0, v_target_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___boxed(lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_);
lean_dec(v_a_874_);
lean_dec_ref(v_a_873_);
lean_dec(v_a_872_);
lean_dec_ref(v_a_871_);
lean_dec(v_a_870_);
lean_dec_ref(v_a_869_);
lean_dec(v_a_868_);
lean_dec_ref(v_a_867_);
lean_dec(v_a_866_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(lean_object* v_a_877_){
_start:
{
lean_object* v___x_879_; lean_object* v_target_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_879_ = lean_st_ref_get(v_a_877_);
v_target_880_ = lean_ctor_get(v___x_879_, 2);
lean_inc_ref(v_target_880_);
lean_dec(v___x_879_);
v___x_881_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_880_);
lean_dec_ref(v_target_880_);
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg___boxed(lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(v_a_883_);
lean_dec(v_a_883_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
lean_object* v___x_898_; lean_object* v_target_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_898_ = lean_st_ref_get(v_a_887_);
v_target_899_ = lean_ctor_get(v___x_898_, 2);
lean_inc_ref(v_target_899_);
lean_dec(v___x_898_);
v___x_900_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_899_);
lean_dec_ref(v_target_899_);
v___x_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___boxed(lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
lean_dec(v_a_912_);
lean_dec_ref(v_a_911_);
lean_dec(v_a_910_);
lean_dec_ref(v_a_909_);
lean_dec(v_a_908_);
lean_dec_ref(v_a_907_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(lean_object* v_target_915_, lean_object* v_a_916_){
_start:
{
lean_object* v___x_918_; lean_object* v_caches_919_; lean_object* v_typeAnalysis_920_; lean_object* v_hypotheses_921_; uint8_t v_didChange_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_932_; 
v___x_918_ = lean_st_ref_take(v_a_916_);
v_caches_919_ = lean_ctor_get(v___x_918_, 0);
v_typeAnalysis_920_ = lean_ctor_get(v___x_918_, 1);
v_hypotheses_921_ = lean_ctor_get(v___x_918_, 3);
v_didChange_922_ = lean_ctor_get_uint8(v___x_918_, sizeof(void*)*4);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_932_ == 0)
{
lean_object* v_unused_933_; 
v_unused_933_ = lean_ctor_get(v___x_918_, 2);
lean_dec(v_unused_933_);
v___x_924_ = v___x_918_;
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_hypotheses_921_);
lean_inc(v_typeAnalysis_920_);
lean_inc(v_caches_919_);
lean_dec(v___x_918_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_box(0);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 2, v_target_915_);
v___x_928_ = v___x_924_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_caches_919_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_typeAnalysis_920_);
lean_ctor_set(v_reuseFailAlloc_931_, 2, v_target_915_);
lean_ctor_set(v_reuseFailAlloc_931_, 3, v_hypotheses_921_);
lean_ctor_set_uint8(v_reuseFailAlloc_931_, sizeof(void*)*4, v_didChange_922_);
v___x_928_ = v_reuseFailAlloc_931_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_929_ = lean_st_ref_put(v_a_916_, v___x_928_);
v___x_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_930_, 0, v___x_926_);
return v___x_930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg___boxed(lean_object* v_target_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(v_target_934_, v_a_935_);
lean_dec(v_a_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(lean_object* v_target_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_){
_start:
{
lean_object* v___x_951_; lean_object* v_caches_952_; lean_object* v_typeAnalysis_953_; lean_object* v_hypotheses_954_; uint8_t v_didChange_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_965_; 
v___x_951_ = lean_st_ref_take(v_a_940_);
v_caches_952_ = lean_ctor_get(v___x_951_, 0);
v_typeAnalysis_953_ = lean_ctor_get(v___x_951_, 1);
v_hypotheses_954_ = lean_ctor_get(v___x_951_, 3);
v_didChange_955_ = lean_ctor_get_uint8(v___x_951_, sizeof(void*)*4);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; 
v_unused_966_ = lean_ctor_get(v___x_951_, 2);
lean_dec(v_unused_966_);
v___x_957_ = v___x_951_;
v_isShared_958_ = v_isSharedCheck_965_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_hypotheses_954_);
lean_inc(v_typeAnalysis_953_);
lean_inc(v_caches_952_);
lean_dec(v___x_951_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_965_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_959_ = lean_box(0);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 2, v_target_938_);
v___x_961_ = v___x_957_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_caches_952_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_typeAnalysis_953_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_target_938_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_hypotheses_954_);
lean_ctor_set_uint8(v_reuseFailAlloc_964_, sizeof(void*)*4, v_didChange_955_);
v___x_961_ = v_reuseFailAlloc_964_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = lean_st_ref_put(v_a_940_, v___x_961_);
v___x_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_959_);
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___boxed(lean_object* v_target_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(v_target_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_);
lean_dec(v_a_978_);
lean_dec_ref(v_a_977_);
lean_dec(v_a_976_);
lean_dec_ref(v_a_975_);
lean_dec(v_a_974_);
lean_dec_ref(v_a_973_);
lean_dec(v_a_972_);
lean_dec_ref(v_a_971_);
lean_dec(v_a_970_);
lean_dec(v_a_969_);
lean_dec_ref(v_a_968_);
return v_res_980_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0(void){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_instMonadControlReaderT___redArg();
return v___x_981_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1(void){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_instMonadControlStateRefT_x27___redArg();
return v___x_982_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2(void){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_instMonadEIO___redArg();
return v___x_983_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2);
v___x_985_ = l_StateRefT_x27_instMonad___redArg(v___x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(lean_object* v_x_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_){
_start:
{
lean_object* v___x_1002_; lean_object* v_target_1003_; 
v___x_1002_ = lean_st_ref_get(v_a_991_);
v_target_1003_ = lean_ctor_get(v___x_1002_, 2);
lean_inc_ref(v_target_1003_);
lean_dec(v___x_1002_);
if (lean_obj_tag(v_target_1003_) == 1)
{
lean_object* v_goal_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1132_; 
v_goal_1004_ = lean_ctor_get(v_target_1003_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_target_1003_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1006_ = v_target_1003_;
v_isShared_1007_ = v_isSharedCheck_1132_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_goal_1004_);
lean_dec(v_target_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1132_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v_toApplicative_1011_; lean_object* v_toFunctor_1012_; lean_object* v_toSeq_1013_; lean_object* v_toSeqLeft_1014_; lean_object* v_toSeqRight_1015_; lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___f_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___f_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___f_1029_; lean_object* v___f_1030_; lean_object* v___x_1031_; lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___x_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___x_1037_; lean_object* v___f_1038_; lean_object* v___f_1039_; lean_object* v___x_1040_; lean_object* v___f_1041_; lean_object* v___f_1042_; lean_object* v___x_1043_; lean_object* v_toApplicative_1044_; lean_object* v_toFunctor_1045_; lean_object* v_toSeq_1046_; lean_object* v_toSeqLeft_1047_; lean_object* v_toSeqRight_1048_; lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___x_1051_; lean_object* v___f_1052_; lean_object* v___f_1053_; lean_object* v___f_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v_toApplicative_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1130_; 
v___x_1008_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0);
v___x_1009_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1);
v___x_1010_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_1011_ = lean_ctor_get(v___x_1010_, 0);
v_toFunctor_1012_ = lean_ctor_get(v_toApplicative_1011_, 0);
v_toSeq_1013_ = lean_ctor_get(v_toApplicative_1011_, 2);
v_toSeqLeft_1014_ = lean_ctor_get(v_toApplicative_1011_, 3);
v_toSeqRight_1015_ = lean_ctor_get(v_toApplicative_1011_, 4);
v___f_1016_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_1017_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_1012_, 2);
v___f_1018_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1018_, 0, v_toFunctor_1012_);
v___f_1019_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1019_, 0, v_toFunctor_1012_);
v___x_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___f_1018_);
lean_ctor_set(v___x_1020_, 1, v___f_1019_);
lean_inc(v_toSeqRight_1015_);
v___f_1021_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1021_, 0, v_toSeqRight_1015_);
lean_inc(v_toSeqLeft_1014_);
v___f_1022_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1022_, 0, v_toSeqLeft_1014_);
lean_inc(v_toSeq_1013_);
v___f_1023_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1023_, 0, v_toSeq_1013_);
v___x_1024_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1020_);
lean_ctor_set(v___x_1024_, 1, v___f_1016_);
lean_ctor_set(v___x_1024_, 2, v___f_1023_);
lean_ctor_set(v___x_1024_, 3, v___f_1022_);
lean_ctor_set(v___x_1024_, 4, v___f_1021_);
v___x_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
lean_ctor_set(v___x_1025_, 1, v___f_1017_);
v___x_1026_ = l_StateRefT_x27_instMonad___redArg(v___x_1025_);
v___x_1027_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1027_, 0, lean_box(0));
lean_closure_set(v___x_1027_, 1, lean_box(0));
lean_closure_set(v___x_1027_, 2, v___x_1026_);
v___x_1028_ = l_instMonadControlTOfPure___redArg(v___x_1027_);
lean_inc_ref(v___x_1028_);
v___f_1029_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1029_, 0, v___x_1009_);
lean_closure_set(v___f_1029_, 1, v___x_1028_);
v___f_1030_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1030_, 0, v___x_1009_);
lean_closure_set(v___f_1030_, 1, v___x_1028_);
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___f_1029_);
lean_ctor_set(v___x_1031_, 1, v___f_1030_);
lean_inc_ref(v___x_1031_);
v___f_1032_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1032_, 0, v___x_1008_);
lean_closure_set(v___f_1032_, 1, v___x_1031_);
v___f_1033_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1033_, 0, v___x_1008_);
lean_closure_set(v___f_1033_, 1, v___x_1031_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___f_1032_);
lean_ctor_set(v___x_1034_, 1, v___f_1033_);
lean_inc_ref(v___x_1034_);
v___f_1035_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1035_, 0, v___x_1009_);
lean_closure_set(v___f_1035_, 1, v___x_1034_);
v___f_1036_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1036_, 0, v___x_1009_);
lean_closure_set(v___f_1036_, 1, v___x_1034_);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___f_1035_);
lean_ctor_set(v___x_1037_, 1, v___f_1036_);
lean_inc_ref(v___x_1037_);
v___f_1038_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1038_, 0, v___x_1008_);
lean_closure_set(v___f_1038_, 1, v___x_1037_);
v___f_1039_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1039_, 0, v___x_1008_);
lean_closure_set(v___f_1039_, 1, v___x_1037_);
v___x_1040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___f_1038_);
lean_ctor_set(v___x_1040_, 1, v___f_1039_);
lean_inc_ref(v___x_1040_);
v___f_1041_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1041_, 0, v___x_1008_);
lean_closure_set(v___f_1041_, 1, v___x_1040_);
v___f_1042_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1042_, 0, v___x_1008_);
lean_closure_set(v___f_1042_, 1, v___x_1040_);
v___x_1043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___f_1041_);
lean_ctor_set(v___x_1043_, 1, v___f_1042_);
v_toApplicative_1044_ = lean_ctor_get(v___x_1010_, 0);
v_toFunctor_1045_ = lean_ctor_get(v_toApplicative_1044_, 0);
v_toSeq_1046_ = lean_ctor_get(v_toApplicative_1044_, 2);
v_toSeqLeft_1047_ = lean_ctor_get(v_toApplicative_1044_, 3);
v_toSeqRight_1048_ = lean_ctor_get(v_toApplicative_1044_, 4);
lean_inc_ref_n(v_toFunctor_1045_, 2);
v___f_1049_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1049_, 0, v_toFunctor_1045_);
v___f_1050_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1050_, 0, v_toFunctor_1045_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___f_1049_);
lean_ctor_set(v___x_1051_, 1, v___f_1050_);
lean_inc(v_toSeqRight_1048_);
v___f_1052_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1052_, 0, v_toSeqRight_1048_);
lean_inc(v_toSeqLeft_1047_);
v___f_1053_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1053_, 0, v_toSeqLeft_1047_);
lean_inc(v_toSeq_1046_);
v___f_1054_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1054_, 0, v_toSeq_1046_);
v___x_1055_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1051_);
lean_ctor_set(v___x_1055_, 1, v___f_1016_);
lean_ctor_set(v___x_1055_, 2, v___f_1054_);
lean_ctor_set(v___x_1055_, 3, v___f_1053_);
lean_ctor_set(v___x_1055_, 4, v___f_1052_);
v___x_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
lean_ctor_set(v___x_1056_, 1, v___f_1017_);
v___x_1057_ = l_StateRefT_x27_instMonad___redArg(v___x_1056_);
v_toApplicative_1058_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1130_ == 0)
{
lean_object* v_unused_1131_; 
v_unused_1131_ = lean_ctor_get(v___x_1057_, 1);
lean_dec(v_unused_1131_);
v___x_1060_ = v___x_1057_;
v_isShared_1061_ = v_isSharedCheck_1130_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_toApplicative_1058_);
lean_dec(v___x_1057_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1130_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v_toFunctor_1062_; lean_object* v_toSeq_1063_; lean_object* v_toSeqLeft_1064_; lean_object* v_toSeqRight_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1128_; 
v_toFunctor_1062_ = lean_ctor_get(v_toApplicative_1058_, 0);
v_toSeq_1063_ = lean_ctor_get(v_toApplicative_1058_, 2);
v_toSeqLeft_1064_ = lean_ctor_get(v_toApplicative_1058_, 3);
v_toSeqRight_1065_ = lean_ctor_get(v_toApplicative_1058_, 4);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_toApplicative_1058_);
if (v_isSharedCheck_1128_ == 0)
{
lean_object* v_unused_1129_; 
v_unused_1129_ = lean_ctor_get(v_toApplicative_1058_, 1);
lean_dec(v_unused_1129_);
v___x_1067_ = v_toApplicative_1058_;
v_isShared_1068_ = v_isSharedCheck_1128_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_toSeqRight_1065_);
lean_inc(v_toSeqLeft_1064_);
lean_inc(v_toSeq_1063_);
lean_inc(v_toFunctor_1062_);
lean_dec(v_toApplicative_1058_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1128_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___f_1069_; lean_object* v___f_1070_; lean_object* v___f_1071_; lean_object* v___f_1072_; lean_object* v___x_1073_; lean_object* v___f_1074_; lean_object* v___f_1075_; lean_object* v___f_1076_; lean_object* v___x_1078_; 
v___f_1069_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_1070_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_1062_);
v___f_1071_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1071_, 0, v_toFunctor_1062_);
v___f_1072_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1072_, 0, v_toFunctor_1062_);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___f_1071_);
lean_ctor_set(v___x_1073_, 1, v___f_1072_);
v___f_1074_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1074_, 0, v_toSeqRight_1065_);
v___f_1075_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1075_, 0, v_toSeqLeft_1064_);
v___f_1076_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1076_, 0, v_toSeq_1063_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 4, v___f_1074_);
lean_ctor_set(v___x_1067_, 3, v___f_1075_);
lean_ctor_set(v___x_1067_, 2, v___f_1076_);
lean_ctor_set(v___x_1067_, 1, v___f_1069_);
lean_ctor_set(v___x_1067_, 0, v___x_1073_);
v___x_1078_ = v___x_1067_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1073_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v___f_1069_);
lean_ctor_set(v_reuseFailAlloc_1127_, 2, v___f_1076_);
lean_ctor_set(v_reuseFailAlloc_1127_, 3, v___f_1075_);
lean_ctor_set(v_reuseFailAlloc_1127_, 4, v___f_1074_);
v___x_1078_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1080_; 
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 1, v___f_1070_);
lean_ctor_set(v___x_1060_, 0, v___x_1078_);
v___x_1080_ = v___x_1060_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v___f_1070_);
v___x_1080_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v_mvarId_1086_; lean_object* v___x_1087_; lean_object* v___x_5100__overap_1088_; lean_object* v___x_1089_; 
v___x_1081_ = l_StateRefT_x27_instMonad___redArg(v___x_1080_);
v___x_1082_ = l_ReaderT_instMonad___redArg(v___x_1081_);
v___x_1083_ = l_StateRefT_x27_instMonad___redArg(v___x_1082_);
v___x_1084_ = l_ReaderT_instMonad___redArg(v___x_1083_);
v___x_1085_ = l_ReaderT_instMonad___redArg(v___x_1084_);
v_mvarId_1086_ = lean_ctor_get(v_goal_1004_, 1);
lean_inc(v_mvarId_1086_);
v___x_1087_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_GoalM_runCore___boxed), 13, 3);
lean_closure_set(v___x_1087_, 0, lean_box(0));
lean_closure_set(v___x_1087_, 1, v_goal_1004_);
lean_closure_set(v___x_1087_, 2, v_x_990_);
v___x_5100__overap_1088_ = l_Lean_MVarId_withContext___redArg(v___x_1043_, v___x_1085_, v_mvarId_1086_, v___x_1087_);
lean_inc(v_a_1000_);
lean_inc_ref(v_a_999_);
lean_inc(v_a_998_);
lean_inc_ref(v_a_997_);
lean_inc(v_a_996_);
lean_inc_ref(v_a_995_);
lean_inc(v_a_994_);
lean_inc_ref(v_a_993_);
lean_inc(v_a_992_);
v___x_1089_ = lean_apply_10(v___x_5100__overap_1088_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, lean_box(0));
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1117_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1092_ = v___x_1089_;
v_isShared_1093_ = v_isSharedCheck_1117_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1089_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1117_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v_fst_1094_; lean_object* v_snd_1095_; lean_object* v___x_1097_; 
v_fst_1094_ = lean_ctor_get(v_a_1090_, 0);
lean_inc(v_fst_1094_);
v_snd_1095_ = lean_ctor_get(v_a_1090_, 1);
lean_inc(v_snd_1095_);
lean_dec(v_a_1090_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v_snd_1095_);
v___x_1097_ = v___x_1006_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_snd_1095_);
v___x_1097_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1098_; lean_object* v_caches_1099_; lean_object* v_typeAnalysis_1100_; lean_object* v_hypotheses_1101_; uint8_t v_didChange_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1114_; 
v___x_1098_ = lean_st_ref_take(v_a_991_);
v_caches_1099_ = lean_ctor_get(v___x_1098_, 0);
v_typeAnalysis_1100_ = lean_ctor_get(v___x_1098_, 1);
v_hypotheses_1101_ = lean_ctor_get(v___x_1098_, 3);
v_didChange_1102_ = lean_ctor_get_uint8(v___x_1098_, sizeof(void*)*4);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1114_ == 0)
{
lean_object* v_unused_1115_; 
v_unused_1115_ = lean_ctor_get(v___x_1098_, 2);
lean_dec(v_unused_1115_);
v___x_1104_ = v___x_1098_;
v_isShared_1105_ = v_isSharedCheck_1114_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_hypotheses_1101_);
lean_inc(v_typeAnalysis_1100_);
lean_inc(v_caches_1099_);
lean_dec(v___x_1098_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1114_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 2, v___x_1097_);
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_caches_1099_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_typeAnalysis_1100_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1113_, 3, v_hypotheses_1101_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*4, v_didChange_1102_);
v___x_1107_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1111_; 
v___x_1108_ = lean_st_ref_put(v_a_991_, v___x_1107_);
v___x_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1109_, 0, v_fst_1094_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v___x_1109_);
v___x_1111_ = v___x_1092_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_del_object(v___x_1006_);
v_a_1118_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1089_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1089_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
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
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec_ref(v_target_1003_);
lean_dec_ref(v_x_990_);
v___x_1133_ = lean_box(0);
v___x_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
return v___x_1134_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___boxed(lean_object* v_x_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(v_x_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec(v_a_1136_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(lean_object* v_00_u03b1_1148_, lean_object* v_x_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v___x_1162_; lean_object* v_target_1163_; 
v___x_1162_ = lean_st_ref_get(v_a_1151_);
v_target_1163_ = lean_ctor_get(v___x_1162_, 2);
lean_inc_ref(v_target_1163_);
lean_dec(v___x_1162_);
if (lean_obj_tag(v_target_1163_) == 1)
{
lean_object* v_goal_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1292_; 
v_goal_1164_ = lean_ctor_get(v_target_1163_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v_target_1163_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1166_ = v_target_1163_;
v_isShared_1167_ = v_isSharedCheck_1292_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_goal_1164_);
lean_dec(v_target_1163_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1292_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v_toApplicative_1171_; lean_object* v_toFunctor_1172_; lean_object* v_toSeq_1173_; lean_object* v_toSeqLeft_1174_; lean_object* v_toSeqRight_1175_; lean_object* v___f_1176_; lean_object* v___f_1177_; lean_object* v___f_1178_; lean_object* v___f_1179_; lean_object* v___x_1180_; lean_object* v___f_1181_; lean_object* v___f_1182_; lean_object* v___f_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___f_1189_; lean_object* v___f_1190_; lean_object* v___x_1191_; lean_object* v___f_1192_; lean_object* v___f_1193_; lean_object* v___x_1194_; lean_object* v___f_1195_; lean_object* v___f_1196_; lean_object* v___x_1197_; lean_object* v___f_1198_; lean_object* v___f_1199_; lean_object* v___x_1200_; lean_object* v___f_1201_; lean_object* v___f_1202_; lean_object* v___x_1203_; lean_object* v_toApplicative_1204_; lean_object* v_toFunctor_1205_; lean_object* v_toSeq_1206_; lean_object* v_toSeqLeft_1207_; lean_object* v_toSeqRight_1208_; lean_object* v___f_1209_; lean_object* v___f_1210_; lean_object* v___x_1211_; lean_object* v___f_1212_; lean_object* v___f_1213_; lean_object* v___f_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_toApplicative_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1290_; 
v___x_1168_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0);
v___x_1169_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1);
v___x_1170_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_1171_ = lean_ctor_get(v___x_1170_, 0);
v_toFunctor_1172_ = lean_ctor_get(v_toApplicative_1171_, 0);
v_toSeq_1173_ = lean_ctor_get(v_toApplicative_1171_, 2);
v_toSeqLeft_1174_ = lean_ctor_get(v_toApplicative_1171_, 3);
v_toSeqRight_1175_ = lean_ctor_get(v_toApplicative_1171_, 4);
v___f_1176_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_1177_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_1172_, 2);
v___f_1178_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1178_, 0, v_toFunctor_1172_);
v___f_1179_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1179_, 0, v_toFunctor_1172_);
v___x_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___f_1178_);
lean_ctor_set(v___x_1180_, 1, v___f_1179_);
lean_inc(v_toSeqRight_1175_);
v___f_1181_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1181_, 0, v_toSeqRight_1175_);
lean_inc(v_toSeqLeft_1174_);
v___f_1182_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1182_, 0, v_toSeqLeft_1174_);
lean_inc(v_toSeq_1173_);
v___f_1183_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1183_, 0, v_toSeq_1173_);
v___x_1184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1180_);
lean_ctor_set(v___x_1184_, 1, v___f_1176_);
lean_ctor_set(v___x_1184_, 2, v___f_1183_);
lean_ctor_set(v___x_1184_, 3, v___f_1182_);
lean_ctor_set(v___x_1184_, 4, v___f_1181_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
lean_ctor_set(v___x_1185_, 1, v___f_1177_);
v___x_1186_ = l_StateRefT_x27_instMonad___redArg(v___x_1185_);
v___x_1187_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1187_, 0, lean_box(0));
lean_closure_set(v___x_1187_, 1, lean_box(0));
lean_closure_set(v___x_1187_, 2, v___x_1186_);
v___x_1188_ = l_instMonadControlTOfPure___redArg(v___x_1187_);
lean_inc_ref(v___x_1188_);
v___f_1189_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1189_, 0, v___x_1169_);
lean_closure_set(v___f_1189_, 1, v___x_1188_);
v___f_1190_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1190_, 0, v___x_1169_);
lean_closure_set(v___f_1190_, 1, v___x_1188_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___f_1189_);
lean_ctor_set(v___x_1191_, 1, v___f_1190_);
lean_inc_ref(v___x_1191_);
v___f_1192_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1192_, 0, v___x_1168_);
lean_closure_set(v___f_1192_, 1, v___x_1191_);
v___f_1193_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1193_, 0, v___x_1168_);
lean_closure_set(v___f_1193_, 1, v___x_1191_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___f_1192_);
lean_ctor_set(v___x_1194_, 1, v___f_1193_);
lean_inc_ref(v___x_1194_);
v___f_1195_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1195_, 0, v___x_1169_);
lean_closure_set(v___f_1195_, 1, v___x_1194_);
v___f_1196_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1196_, 0, v___x_1169_);
lean_closure_set(v___f_1196_, 1, v___x_1194_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___f_1195_);
lean_ctor_set(v___x_1197_, 1, v___f_1196_);
lean_inc_ref(v___x_1197_);
v___f_1198_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1198_, 0, v___x_1168_);
lean_closure_set(v___f_1198_, 1, v___x_1197_);
v___f_1199_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1199_, 0, v___x_1168_);
lean_closure_set(v___f_1199_, 1, v___x_1197_);
v___x_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1200_, 0, v___f_1198_);
lean_ctor_set(v___x_1200_, 1, v___f_1199_);
lean_inc_ref(v___x_1200_);
v___f_1201_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1201_, 0, v___x_1168_);
lean_closure_set(v___f_1201_, 1, v___x_1200_);
v___f_1202_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1202_, 0, v___x_1168_);
lean_closure_set(v___f_1202_, 1, v___x_1200_);
v___x_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___f_1201_);
lean_ctor_set(v___x_1203_, 1, v___f_1202_);
v_toApplicative_1204_ = lean_ctor_get(v___x_1170_, 0);
v_toFunctor_1205_ = lean_ctor_get(v_toApplicative_1204_, 0);
v_toSeq_1206_ = lean_ctor_get(v_toApplicative_1204_, 2);
v_toSeqLeft_1207_ = lean_ctor_get(v_toApplicative_1204_, 3);
v_toSeqRight_1208_ = lean_ctor_get(v_toApplicative_1204_, 4);
lean_inc_ref_n(v_toFunctor_1205_, 2);
v___f_1209_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1209_, 0, v_toFunctor_1205_);
v___f_1210_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1210_, 0, v_toFunctor_1205_);
v___x_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___f_1209_);
lean_ctor_set(v___x_1211_, 1, v___f_1210_);
lean_inc(v_toSeqRight_1208_);
v___f_1212_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1212_, 0, v_toSeqRight_1208_);
lean_inc(v_toSeqLeft_1207_);
v___f_1213_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1213_, 0, v_toSeqLeft_1207_);
lean_inc(v_toSeq_1206_);
v___f_1214_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1214_, 0, v_toSeq_1206_);
v___x_1215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1211_);
lean_ctor_set(v___x_1215_, 1, v___f_1176_);
lean_ctor_set(v___x_1215_, 2, v___f_1214_);
lean_ctor_set(v___x_1215_, 3, v___f_1213_);
lean_ctor_set(v___x_1215_, 4, v___f_1212_);
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v___f_1177_);
v___x_1217_ = l_StateRefT_x27_instMonad___redArg(v___x_1216_);
v_toApplicative_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1290_ == 0)
{
lean_object* v_unused_1291_; 
v_unused_1291_ = lean_ctor_get(v___x_1217_, 1);
lean_dec(v_unused_1291_);
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1290_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_toApplicative_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1290_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v_toFunctor_1222_; lean_object* v_toSeq_1223_; lean_object* v_toSeqLeft_1224_; lean_object* v_toSeqRight_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1288_; 
v_toFunctor_1222_ = lean_ctor_get(v_toApplicative_1218_, 0);
v_toSeq_1223_ = lean_ctor_get(v_toApplicative_1218_, 2);
v_toSeqLeft_1224_ = lean_ctor_get(v_toApplicative_1218_, 3);
v_toSeqRight_1225_ = lean_ctor_get(v_toApplicative_1218_, 4);
v_isSharedCheck_1288_ = !lean_is_exclusive(v_toApplicative_1218_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; 
v_unused_1289_ = lean_ctor_get(v_toApplicative_1218_, 1);
lean_dec(v_unused_1289_);
v___x_1227_ = v_toApplicative_1218_;
v_isShared_1228_ = v_isSharedCheck_1288_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_toSeqRight_1225_);
lean_inc(v_toSeqLeft_1224_);
lean_inc(v_toSeq_1223_);
lean_inc(v_toFunctor_1222_);
lean_dec(v_toApplicative_1218_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1288_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___f_1229_; lean_object* v___f_1230_; lean_object* v___f_1231_; lean_object* v___f_1232_; lean_object* v___x_1233_; lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___f_1236_; lean_object* v___x_1238_; 
v___f_1229_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_1230_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_1222_);
v___f_1231_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1231_, 0, v_toFunctor_1222_);
v___f_1232_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1232_, 0, v_toFunctor_1222_);
v___x_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___f_1231_);
lean_ctor_set(v___x_1233_, 1, v___f_1232_);
v___f_1234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1234_, 0, v_toSeqRight_1225_);
v___f_1235_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1235_, 0, v_toSeqLeft_1224_);
v___f_1236_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1236_, 0, v_toSeq_1223_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 4, v___f_1234_);
lean_ctor_set(v___x_1227_, 3, v___f_1235_);
lean_ctor_set(v___x_1227_, 2, v___f_1236_);
lean_ctor_set(v___x_1227_, 1, v___f_1229_);
lean_ctor_set(v___x_1227_, 0, v___x_1233_);
v___x_1238_ = v___x_1227_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1233_);
lean_ctor_set(v_reuseFailAlloc_1287_, 1, v___f_1229_);
lean_ctor_set(v_reuseFailAlloc_1287_, 2, v___f_1236_);
lean_ctor_set(v_reuseFailAlloc_1287_, 3, v___f_1235_);
lean_ctor_set(v_reuseFailAlloc_1287_, 4, v___f_1234_);
v___x_1238_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1240_; 
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 1, v___f_1230_);
lean_ctor_set(v___x_1220_, 0, v___x_1238_);
v___x_1240_ = v___x_1220_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___x_1238_);
lean_ctor_set(v_reuseFailAlloc_1286_, 1, v___f_1230_);
v___x_1240_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_mvarId_1246_; lean_object* v___x_1247_; lean_object* v___x_5171__overap_1248_; lean_object* v___x_1249_; 
v___x_1241_ = l_StateRefT_x27_instMonad___redArg(v___x_1240_);
v___x_1242_ = l_ReaderT_instMonad___redArg(v___x_1241_);
v___x_1243_ = l_StateRefT_x27_instMonad___redArg(v___x_1242_);
v___x_1244_ = l_ReaderT_instMonad___redArg(v___x_1243_);
v___x_1245_ = l_ReaderT_instMonad___redArg(v___x_1244_);
v_mvarId_1246_ = lean_ctor_get(v_goal_1164_, 1);
lean_inc(v_mvarId_1246_);
v___x_1247_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_GoalM_runCore___boxed), 13, 3);
lean_closure_set(v___x_1247_, 0, lean_box(0));
lean_closure_set(v___x_1247_, 1, v_goal_1164_);
lean_closure_set(v___x_1247_, 2, v_x_1149_);
v___x_5171__overap_1248_ = l_Lean_MVarId_withContext___redArg(v___x_1203_, v___x_1245_, v_mvarId_1246_, v___x_1247_);
lean_inc(v_a_1160_);
lean_inc_ref(v_a_1159_);
lean_inc(v_a_1158_);
lean_inc_ref(v_a_1157_);
lean_inc(v_a_1156_);
lean_inc_ref(v_a_1155_);
lean_inc(v_a_1154_);
lean_inc_ref(v_a_1153_);
lean_inc(v_a_1152_);
v___x_1249_ = lean_apply_10(v___x_5171__overap_1248_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, lean_box(0));
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1277_; 
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1252_ = v___x_1249_;
v_isShared_1253_ = v_isSharedCheck_1277_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1249_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1277_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v_fst_1254_; lean_object* v_snd_1255_; lean_object* v___x_1257_; 
v_fst_1254_ = lean_ctor_get(v_a_1250_, 0);
lean_inc(v_fst_1254_);
v_snd_1255_ = lean_ctor_get(v_a_1250_, 1);
lean_inc(v_snd_1255_);
lean_dec(v_a_1250_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 0, v_snd_1255_);
v___x_1257_ = v___x_1166_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_snd_1255_);
v___x_1257_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
lean_object* v___x_1258_; lean_object* v_caches_1259_; lean_object* v_typeAnalysis_1260_; lean_object* v_hypotheses_1261_; uint8_t v_didChange_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1274_; 
v___x_1258_ = lean_st_ref_take(v_a_1151_);
v_caches_1259_ = lean_ctor_get(v___x_1258_, 0);
v_typeAnalysis_1260_ = lean_ctor_get(v___x_1258_, 1);
v_hypotheses_1261_ = lean_ctor_get(v___x_1258_, 3);
v_didChange_1262_ = lean_ctor_get_uint8(v___x_1258_, sizeof(void*)*4);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1274_ == 0)
{
lean_object* v_unused_1275_; 
v_unused_1275_ = lean_ctor_get(v___x_1258_, 2);
lean_dec(v_unused_1275_);
v___x_1264_ = v___x_1258_;
v_isShared_1265_ = v_isSharedCheck_1274_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_hypotheses_1261_);
lean_inc(v_typeAnalysis_1260_);
lean_inc(v_caches_1259_);
lean_dec(v___x_1258_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1274_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 2, v___x_1257_);
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_caches_1259_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_typeAnalysis_1260_);
lean_ctor_set(v_reuseFailAlloc_1273_, 2, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1273_, 3, v_hypotheses_1261_);
lean_ctor_set_uint8(v_reuseFailAlloc_1273_, sizeof(void*)*4, v_didChange_1262_);
v___x_1267_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1271_; 
v___x_1268_ = lean_st_ref_put(v_a_1151_, v___x_1267_);
v___x_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1269_, 0, v_fst_1254_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1269_);
v___x_1271_ = v___x_1252_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_del_object(v___x_1166_);
v_a_1278_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1249_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1249_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
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
lean_object* v___x_1293_; lean_object* v___x_1294_; 
lean_dec_ref(v_target_1163_);
lean_dec_ref(v_x_1149_);
v___x_1293_ = lean_box(0);
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___boxed(lean_object* v_00_u03b1_1295_, lean_object* v_x_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(v_00_u03b1_1295_, v_x_1296_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_, v_a_1307_);
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1306_);
lean_dec(v_a_1305_);
lean_dec_ref(v_a_1304_);
lean_dec(v_a_1303_);
lean_dec_ref(v_a_1302_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_a_1299_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(lean_object* v_x_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v___x_1321_; 
lean_inc(v___y_1315_);
lean_inc_ref(v___y_1314_);
lean_inc(v___y_1313_);
lean_inc_ref(v___y_1312_);
lean_inc(v___y_1311_);
v___x_1321_ = lean_apply_10(v_x_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, lean_box(0));
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed(lean_object* v_x_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(v_x_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(lean_object* v_mvarId_1334_, lean_object* v_x_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v___f_1346_; lean_object* v___x_1347_; 
lean_inc(v___y_1340_);
lean_inc_ref(v___y_1339_);
lean_inc(v___y_1338_);
lean_inc_ref(v___y_1337_);
lean_inc(v___y_1336_);
v___f_1346_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_1346_, 0, v_x_1335_);
lean_closure_set(v___f_1346_, 1, v___y_1336_);
lean_closure_set(v___f_1346_, 2, v___y_1337_);
lean_closure_set(v___f_1346_, 3, v___y_1338_);
lean_closure_set(v___f_1346_, 4, v___y_1339_);
lean_closure_set(v___f_1346_, 5, v___y_1340_);
v___x_1347_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1334_, v___f_1346_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
if (lean_obj_tag(v___x_1347_) == 0)
{
return v___x_1347_;
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___boxed(lean_object* v_mvarId_1356_, lean_object* v_x_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1356_, v_x_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1358_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(lean_object* v_00_u03b1_1369_, lean_object* v_mvarId_1370_, lean_object* v_x_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1370_, v_x_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___boxed(lean_object* v_00_u03b1_1383_, lean_object* v_mvarId_1384_, lean_object* v_x_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(v_00_u03b1_1383_, v_mvarId_1384_, v_x_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec(v___y_1386_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(lean_object* v_goal_1397_, lean_object* v_falseProof_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_st_mk_ref(v_goal_1397_);
v___x_1410_ = l_Lean_Meta_Grind_closeGoal(v_falseProof_1398_, v___x_1409_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1420_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1413_ = v___x_1410_;
v_isShared_1414_ = v_isSharedCheck_1420_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1410_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1420_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1415_ = lean_st_ref_get(v___x_1409_);
lean_dec(v___x_1409_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v_a_1411_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 0, v___x_1416_);
v___x_1418_ = v___x_1413_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec(v___x_1409_);
v_a_1421_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1410_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1410_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed(lean_object* v_goal_1429_, lean_object* v_falseProof_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(v_goal_1429_, v_falseProof_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec(v___y_1431_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object* v_falseProof_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_){
_start:
{
lean_object* v___x_1454_; lean_object* v_target_1455_; 
v___x_1454_ = lean_st_ref_get(v_a_1443_);
v_target_1455_ = lean_ctor_get(v___x_1454_, 2);
lean_inc_ref(v_target_1455_);
lean_dec(v___x_1454_);
if (lean_obj_tag(v_target_1455_) == 0)
{
lean_object* v_mvar_1456_; lean_object* v___x_1457_; 
v_mvar_1456_ = lean_ctor_get(v_target_1455_, 0);
lean_inc(v_mvar_1456_);
lean_dec_ref_known(v_target_1455_, 1);
v___x_1457_ = l_Lean_MVarId_assignFalseProof(v_mvar_1456_, v_falseProof_1442_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_);
return v___x_1457_;
}
else
{
lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1509_; 
v_isSharedCheck_1509_ = !lean_is_exclusive(v_target_1455_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; 
v_unused_1510_ = lean_ctor_get(v_target_1455_, 0);
lean_dec(v_unused_1510_);
v___x_1459_ = v_target_1455_;
v_isShared_1460_ = v_isSharedCheck_1509_;
goto v_resetjp_1458_;
}
else
{
lean_dec(v_target_1455_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1509_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v_target_1463_; 
v___x_1461_ = lean_box(0);
v___x_1462_ = lean_st_ref_get(v_a_1443_);
v_target_1463_ = lean_ctor_get(v___x_1462_, 2);
lean_inc_ref(v_target_1463_);
lean_dec(v___x_1462_);
if (lean_obj_tag(v_target_1463_) == 1)
{
lean_object* v_goal_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1505_; 
lean_del_object(v___x_1459_);
v_goal_1464_ = lean_ctor_get(v_target_1463_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_target_1463_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1466_ = v_target_1463_;
v_isShared_1467_ = v_isSharedCheck_1505_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_goal_1464_);
lean_dec(v_target_1463_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1505_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v_mvarId_1468_; lean_object* v___f_1469_; lean_object* v___x_1470_; 
v_mvarId_1468_ = lean_ctor_get(v_goal_1464_, 1);
lean_inc(v_mvarId_1468_);
v___f_1469_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1469_, 0, v_goal_1464_);
lean_closure_set(v___f_1469_, 1, v_falseProof_1442_);
v___x_1470_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1468_, v___f_1469_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1496_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1496_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1496_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v_snd_1475_; lean_object* v___x_1477_; 
v_snd_1475_ = lean_ctor_get(v_a_1471_, 1);
lean_inc(v_snd_1475_);
lean_dec(v_a_1471_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v_snd_1475_);
v___x_1477_ = v___x_1466_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_snd_1475_);
v___x_1477_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1478_; lean_object* v_caches_1479_; lean_object* v_typeAnalysis_1480_; lean_object* v_hypotheses_1481_; uint8_t v_didChange_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1493_; 
v___x_1478_ = lean_st_ref_take(v_a_1443_);
v_caches_1479_ = lean_ctor_get(v___x_1478_, 0);
v_typeAnalysis_1480_ = lean_ctor_get(v___x_1478_, 1);
v_hypotheses_1481_ = lean_ctor_get(v___x_1478_, 3);
v_didChange_1482_ = lean_ctor_get_uint8(v___x_1478_, sizeof(void*)*4);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1493_ == 0)
{
lean_object* v_unused_1494_; 
v_unused_1494_ = lean_ctor_get(v___x_1478_, 2);
lean_dec(v_unused_1494_);
v___x_1484_ = v___x_1478_;
v_isShared_1485_ = v_isSharedCheck_1493_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_hypotheses_1481_);
lean_inc(v_typeAnalysis_1480_);
lean_inc(v_caches_1479_);
lean_dec(v___x_1478_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1493_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 2, v___x_1477_);
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_caches_1479_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v_typeAnalysis_1480_);
lean_ctor_set(v_reuseFailAlloc_1492_, 2, v___x_1477_);
lean_ctor_set(v_reuseFailAlloc_1492_, 3, v_hypotheses_1481_);
lean_ctor_set_uint8(v_reuseFailAlloc_1492_, sizeof(void*)*4, v_didChange_1482_);
v___x_1487_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1488_; lean_object* v___x_1490_; 
v___x_1488_ = lean_st_ref_put(v_a_1443_, v___x_1487_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1461_);
v___x_1490_ = v___x_1473_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1461_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_del_object(v___x_1466_);
v_a_1497_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1470_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1470_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
}
else
{
lean_object* v___x_1507_; 
lean_dec_ref(v_target_1463_);
lean_dec_ref(v_falseProof_1442_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1461_);
v___x_1507_ = v___x_1459_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1461_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___boxed(lean_object* v_falseProof_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_falseProof_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
lean_dec(v_a_1521_);
lean_dec_ref(v_a_1520_);
lean_dec(v_a_1519_);
lean_dec_ref(v_a_1518_);
lean_dec(v_a_1517_);
lean_dec_ref(v_a_1516_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
lean_dec(v_a_1513_);
lean_dec(v_a_1512_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(lean_object* v_falseProof_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_falseProof_1524_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed(lean_object* v_falseProof_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(v_falseProof_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_);
lean_dec(v_a_1549_);
lean_dec_ref(v_a_1548_);
lean_dec(v_a_1547_);
lean_dec_ref(v_a_1546_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec(v_a_1543_);
lean_dec_ref(v_a_1542_);
lean_dec(v_a_1541_);
lean_dec(v_a_1540_);
lean_dec_ref(v_a_1539_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object* v_a_1552_){
_start:
{
lean_object* v___x_1554_; uint8_t v_didChange_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1554_ = lean_st_ref_get(v_a_1552_);
v_didChange_1555_ = lean_ctor_get_uint8(v___x_1554_, sizeof(void*)*4);
lean_dec(v___x_1554_);
v___x_1556_ = lean_box(v_didChange_1555_);
v___x_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(v_a_1558_);
lean_dec(v_a_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_){
_start:
{
lean_object* v___x_1573_; uint8_t v_didChange_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1573_ = lean_st_ref_get(v_a_1562_);
v_didChange_1574_ = lean_ctor_get_uint8(v___x_1573_, sizeof(void*)*4);
lean_dec(v___x_1573_);
v___x_1575_ = lean_box(v_didChange_1574_);
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
lean_dec(v_a_1585_);
lean_dec_ref(v_a_1584_);
lean_dec(v_a_1583_);
lean_dec_ref(v_a_1582_);
lean_dec(v_a_1581_);
lean_dec_ref(v_a_1580_);
lean_dec(v_a_1579_);
lean_dec(v_a_1578_);
lean_dec_ref(v_a_1577_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object* v_a_1590_){
_start:
{
lean_object* v___x_1592_; lean_object* v_caches_1593_; lean_object* v_typeAnalysis_1594_; lean_object* v_target_1595_; lean_object* v_hypotheses_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1607_; 
v___x_1592_ = lean_st_ref_take(v_a_1590_);
v_caches_1593_ = lean_ctor_get(v___x_1592_, 0);
v_typeAnalysis_1594_ = lean_ctor_get(v___x_1592_, 1);
v_target_1595_ = lean_ctor_get(v___x_1592_, 2);
v_hypotheses_1596_ = lean_ctor_get(v___x_1592_, 3);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1598_ = v___x_1592_;
v_isShared_1599_ = v_isSharedCheck_1607_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_hypotheses_1596_);
lean_inc(v_target_1595_);
lean_inc(v_typeAnalysis_1594_);
lean_inc(v_caches_1593_);
lean_dec(v___x_1592_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1607_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; uint8_t v___x_1601_; lean_object* v___x_1603_; 
v___x_1600_ = lean_box(0);
v___x_1601_ = 0;
if (v_isShared_1599_ == 0)
{
v___x_1603_ = v___x_1598_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_caches_1593_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_typeAnalysis_1594_);
lean_ctor_set(v_reuseFailAlloc_1606_, 2, v_target_1595_);
lean_ctor_set(v_reuseFailAlloc_1606_, 3, v_hypotheses_1596_);
v___x_1603_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
lean_ctor_set_uint8(v___x_1603_, sizeof(void*)*4, v___x_1601_);
v___x_1604_ = lean_st_ref_put(v_a_1590_, v___x_1603_);
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1600_);
return v___x_1605_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object* v_a_1608_, lean_object* v_a_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(v_a_1608_);
lean_dec(v_a_1608_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v___x_1623_; lean_object* v_caches_1624_; lean_object* v_typeAnalysis_1625_; lean_object* v_target_1626_; lean_object* v_hypotheses_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1638_; 
v___x_1623_ = lean_st_ref_take(v_a_1612_);
v_caches_1624_ = lean_ctor_get(v___x_1623_, 0);
v_typeAnalysis_1625_ = lean_ctor_get(v___x_1623_, 1);
v_target_1626_ = lean_ctor_get(v___x_1623_, 2);
v_hypotheses_1627_ = lean_ctor_get(v___x_1623_, 3);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1629_ = v___x_1623_;
v_isShared_1630_ = v_isSharedCheck_1638_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_hypotheses_1627_);
lean_inc(v_target_1626_);
lean_inc(v_typeAnalysis_1625_);
lean_inc(v_caches_1624_);
lean_dec(v___x_1623_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1638_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1631_; uint8_t v___x_1632_; lean_object* v___x_1634_; 
v___x_1631_ = lean_box(0);
v___x_1632_ = 0;
if (v_isShared_1630_ == 0)
{
v___x_1634_ = v___x_1629_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_caches_1624_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v_typeAnalysis_1625_);
lean_ctor_set(v_reuseFailAlloc_1637_, 2, v_target_1626_);
lean_ctor_set(v_reuseFailAlloc_1637_, 3, v_hypotheses_1627_);
v___x_1634_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
lean_ctor_set_uint8(v___x_1634_, sizeof(void*)*4, v___x_1632_);
v___x_1635_ = lean_st_ref_put(v_a_1612_, v___x_1634_);
v___x_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1631_);
return v___x_1636_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(v_a_1639_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec(v_a_1647_);
lean_dec_ref(v_a_1646_);
lean_dec(v_a_1645_);
lean_dec_ref(v_a_1644_);
lean_dec(v_a_1643_);
lean_dec_ref(v_a_1642_);
lean_dec(v_a_1641_);
lean_dec(v_a_1640_);
lean_dec_ref(v_a_1639_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object* v_a_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v_caches_1655_; lean_object* v_typeAnalysis_1656_; lean_object* v_target_1657_; lean_object* v_hypotheses_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1669_; 
v___x_1654_ = lean_st_ref_take(v_a_1652_);
v_caches_1655_ = lean_ctor_get(v___x_1654_, 0);
v_typeAnalysis_1656_ = lean_ctor_get(v___x_1654_, 1);
v_target_1657_ = lean_ctor_get(v___x_1654_, 2);
v_hypotheses_1658_ = lean_ctor_get(v___x_1654_, 3);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1660_ = v___x_1654_;
v_isShared_1661_ = v_isSharedCheck_1669_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_hypotheses_1658_);
lean_inc(v_target_1657_);
lean_inc(v_typeAnalysis_1656_);
lean_inc(v_caches_1655_);
lean_dec(v___x_1654_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1669_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1662_; uint8_t v___x_1663_; lean_object* v___x_1665_; 
v___x_1662_ = lean_box(0);
v___x_1663_ = 1;
if (v_isShared_1661_ == 0)
{
v___x_1665_ = v___x_1660_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_caches_1655_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_typeAnalysis_1656_);
lean_ctor_set(v_reuseFailAlloc_1668_, 2, v_target_1657_);
lean_ctor_set(v_reuseFailAlloc_1668_, 3, v_hypotheses_1658_);
v___x_1665_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
lean_ctor_set_uint8(v___x_1665_, sizeof(void*)*4, v___x_1663_);
v___x_1666_ = lean_st_ref_put(v_a_1652_, v___x_1665_);
v___x_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1662_);
return v___x_1667_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object* v_a_1670_, lean_object* v_a_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(v_a_1670_);
lean_dec(v_a_1670_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v___x_1685_; lean_object* v_caches_1686_; lean_object* v_typeAnalysis_1687_; lean_object* v_target_1688_; lean_object* v_hypotheses_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1700_; 
v___x_1685_ = lean_st_ref_take(v_a_1674_);
v_caches_1686_ = lean_ctor_get(v___x_1685_, 0);
v_typeAnalysis_1687_ = lean_ctor_get(v___x_1685_, 1);
v_target_1688_ = lean_ctor_get(v___x_1685_, 2);
v_hypotheses_1689_ = lean_ctor_get(v___x_1685_, 3);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1691_ = v___x_1685_;
v_isShared_1692_ = v_isSharedCheck_1700_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_hypotheses_1689_);
lean_inc(v_target_1688_);
lean_inc(v_typeAnalysis_1687_);
lean_inc(v_caches_1686_);
lean_dec(v___x_1685_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1700_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1693_; uint8_t v___x_1694_; lean_object* v___x_1696_; 
v___x_1693_ = lean_box(0);
v___x_1694_ = 1;
if (v_isShared_1692_ == 0)
{
v___x_1696_ = v___x_1691_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_caches_1686_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v_typeAnalysis_1687_);
lean_ctor_set(v_reuseFailAlloc_1699_, 2, v_target_1688_);
lean_ctor_set(v_reuseFailAlloc_1699_, 3, v_hypotheses_1689_);
v___x_1696_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_ctor_set_uint8(v___x_1696_, sizeof(void*)*4, v___x_1694_);
v___x_1697_ = lean_st_ref_put(v_a_1674_, v___x_1696_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1693_);
return v___x_1698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_);
lean_dec(v_a_1711_);
lean_dec_ref(v_a_1710_);
lean_dec(v_a_1709_);
lean_dec_ref(v_a_1708_);
lean_dec(v_a_1707_);
lean_dec_ref(v_a_1706_);
lean_dec(v_a_1705_);
lean_dec_ref(v_a_1704_);
lean_dec(v_a_1703_);
lean_dec(v_a_1702_);
lean_dec_ref(v_a_1701_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(lean_object* v_a_1714_){
_start:
{
lean_object* v___x_1716_; lean_object* v_caches_1717_; lean_object* v___x_1718_; 
v___x_1716_ = lean_st_ref_get(v_a_1714_);
v_caches_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc_ref(v_caches_1717_);
lean_dec(v___x_1716_);
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_caches_1717_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg___boxed(lean_object* v_a_1719_, lean_object* v_a_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(v_a_1719_);
lean_dec(v_a_1719_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_){
_start:
{
lean_object* v___x_1734_; lean_object* v_caches_1735_; lean_object* v___x_1736_; 
v___x_1734_ = lean_st_ref_get(v_a_1723_);
v_caches_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc_ref(v_caches_1735_);
lean_dec(v___x_1734_);
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v_caches_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___boxed(lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_);
lean_dec(v_a_1747_);
lean_dec_ref(v_a_1746_);
lean_dec(v_a_1745_);
lean_dec_ref(v_a_1744_);
lean_dec(v_a_1743_);
lean_dec_ref(v_a_1742_);
lean_dec(v_a_1741_);
lean_dec_ref(v_a_1740_);
lean_dec(v_a_1739_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(lean_object* v_caches_1750_, lean_object* v_a_1751_){
_start:
{
lean_object* v___x_1753_; lean_object* v_typeAnalysis_1754_; lean_object* v_target_1755_; lean_object* v_hypotheses_1756_; uint8_t v_didChange_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1767_; 
v___x_1753_ = lean_st_ref_take(v_a_1751_);
v_typeAnalysis_1754_ = lean_ctor_get(v___x_1753_, 1);
v_target_1755_ = lean_ctor_get(v___x_1753_, 2);
v_hypotheses_1756_ = lean_ctor_get(v___x_1753_, 3);
v_didChange_1757_ = lean_ctor_get_uint8(v___x_1753_, sizeof(void*)*4);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1767_ == 0)
{
lean_object* v_unused_1768_; 
v_unused_1768_ = lean_ctor_get(v___x_1753_, 0);
lean_dec(v_unused_1768_);
v___x_1759_ = v___x_1753_;
v_isShared_1760_ = v_isSharedCheck_1767_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_hypotheses_1756_);
lean_inc(v_target_1755_);
lean_inc(v_typeAnalysis_1754_);
lean_dec(v___x_1753_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1767_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1761_ = lean_box(0);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v_caches_1750_);
v___x_1763_ = v___x_1759_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_caches_1750_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_typeAnalysis_1754_);
lean_ctor_set(v_reuseFailAlloc_1766_, 2, v_target_1755_);
lean_ctor_set(v_reuseFailAlloc_1766_, 3, v_hypotheses_1756_);
lean_ctor_set_uint8(v_reuseFailAlloc_1766_, sizeof(void*)*4, v_didChange_1757_);
v___x_1763_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1764_ = lean_st_ref_put(v_a_1751_, v___x_1763_);
v___x_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1761_);
return v___x_1765_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg___boxed(lean_object* v_caches_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(v_caches_1769_, v_a_1770_);
lean_dec(v_a_1770_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(lean_object* v_caches_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v___x_1786_; lean_object* v_typeAnalysis_1787_; lean_object* v_target_1788_; lean_object* v_hypotheses_1789_; uint8_t v_didChange_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1800_; 
v___x_1786_ = lean_st_ref_take(v_a_1775_);
v_typeAnalysis_1787_ = lean_ctor_get(v___x_1786_, 1);
v_target_1788_ = lean_ctor_get(v___x_1786_, 2);
v_hypotheses_1789_ = lean_ctor_get(v___x_1786_, 3);
v_didChange_1790_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*4);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; 
v_unused_1801_ = lean_ctor_get(v___x_1786_, 0);
lean_dec(v_unused_1801_);
v___x_1792_ = v___x_1786_;
v_isShared_1793_ = v_isSharedCheck_1800_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_hypotheses_1789_);
lean_inc(v_target_1788_);
lean_inc(v_typeAnalysis_1787_);
lean_dec(v___x_1786_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1800_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1794_; lean_object* v___x_1796_; 
v___x_1794_ = lean_box(0);
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 0, v_caches_1773_);
v___x_1796_ = v___x_1792_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_caches_1773_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v_typeAnalysis_1787_);
lean_ctor_set(v_reuseFailAlloc_1799_, 2, v_target_1788_);
lean_ctor_set(v_reuseFailAlloc_1799_, 3, v_hypotheses_1789_);
lean_ctor_set_uint8(v_reuseFailAlloc_1799_, sizeof(void*)*4, v_didChange_1790_);
v___x_1796_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = lean_st_ref_put(v_a_1775_, v___x_1796_);
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1794_);
return v___x_1798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___boxed(lean_object* v_caches_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(v_caches_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_);
lean_dec(v_a_1813_);
lean_dec_ref(v_a_1812_);
lean_dec(v_a_1811_);
lean_dec_ref(v_a_1810_);
lean_dec(v_a_1809_);
lean_dec_ref(v_a_1808_);
lean_dec(v_a_1807_);
lean_dec_ref(v_a_1806_);
lean_dec(v_a_1805_);
lean_dec(v_a_1804_);
lean_dec_ref(v_a_1803_);
return v_res_1815_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0(void){
_start:
{
lean_object* v___x_1816_; 
v___x_1816_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1816_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1(void){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1817_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
return v___x_1818_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2(void){
_start:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1819_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_1820_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1819_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
lean_ctor_set(v___x_1820_, 2, v___x_1819_);
lean_ctor_set(v___x_1820_, 3, v___x_1819_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(lean_object* v_a_1821_, lean_object* v_a_1822_){
_start:
{
uint8_t v_keepCaches_1824_; 
v_keepCaches_1824_ = lean_ctor_get_uint8(v_a_1821_, sizeof(void*)*2);
if (v_keepCaches_1824_ == 0)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v_typeAnalysis_1827_; lean_object* v_target_1828_; lean_object* v_hypotheses_1829_; uint8_t v_didChange_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1840_; 
v___x_1825_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_1826_ = lean_st_ref_take(v_a_1822_);
v_typeAnalysis_1827_ = lean_ctor_get(v___x_1826_, 1);
v_target_1828_ = lean_ctor_get(v___x_1826_, 2);
v_hypotheses_1829_ = lean_ctor_get(v___x_1826_, 3);
v_didChange_1830_ = lean_ctor_get_uint8(v___x_1826_, sizeof(void*)*4);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1840_ == 0)
{
lean_object* v_unused_1841_; 
v_unused_1841_ = lean_ctor_get(v___x_1826_, 0);
lean_dec(v_unused_1841_);
v___x_1832_ = v___x_1826_;
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_hypotheses_1829_);
lean_inc(v_target_1828_);
lean_inc(v_typeAnalysis_1827_);
lean_dec(v___x_1826_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1834_; lean_object* v___x_1836_; 
v___x_1834_ = lean_box(0);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 0, v___x_1825_);
v___x_1836_ = v___x_1832_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1825_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_typeAnalysis_1827_);
lean_ctor_set(v_reuseFailAlloc_1839_, 2, v_target_1828_);
lean_ctor_set(v_reuseFailAlloc_1839_, 3, v_hypotheses_1829_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*4, v_didChange_1830_);
v___x_1836_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_st_ref_put(v_a_1822_, v___x_1836_);
v___x_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1834_);
return v___x_1838_;
}
}
}
else
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = lean_box(0);
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
return v___x_1843_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___boxed(lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v_a_1844_, v_a_1845_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v___x_1860_; 
v___x_1860_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v_a_1848_, v_a_1849_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___boxed(lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_);
lean_dec(v_a_1871_);
lean_dec_ref(v_a_1870_);
lean_dec(v_a_1869_);
lean_dec_ref(v_a_1868_);
lean_dec(v_a_1867_);
lean_dec_ref(v_a_1866_);
lean_dec(v_a_1865_);
lean_dec_ref(v_a_1864_);
lean_dec(v_a_1863_);
lean_dec(v_a_1862_);
lean_dec_ref(v_a_1861_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object* v_a_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v_typeAnalysis_1877_; lean_object* v___x_1878_; 
v___x_1876_ = lean_st_ref_get(v_a_1874_);
v_typeAnalysis_1877_ = lean_ctor_get(v___x_1876_, 1);
lean_inc_ref(v_typeAnalysis_1877_);
lean_dec(v___x_1876_);
v___x_1878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1878_, 0, v_typeAnalysis_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object* v_a_1879_, lean_object* v_a_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(v_a_1879_);
lean_dec(v_a_1879_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_){
_start:
{
lean_object* v___x_1894_; lean_object* v_typeAnalysis_1895_; lean_object* v___x_1896_; 
v___x_1894_ = lean_st_ref_get(v_a_1883_);
v_typeAnalysis_1895_ = lean_ctor_get(v___x_1894_, 1);
lean_inc_ref(v_typeAnalysis_1895_);
lean_dec(v___x_1894_);
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v_typeAnalysis_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_);
lean_dec(v_a_1907_);
lean_dec_ref(v_a_1906_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v_a_1902_);
lean_dec(v_a_1901_);
lean_dec_ref(v_a_1900_);
lean_dec(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object* v_n_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v_typeAnalysis_1921_; lean_object* v_interestingStructures_1922_; lean_object* v_uninteresting_1923_; uint8_t v___x_1924_; 
v___x_1918_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1919_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1920_ = lean_st_ref_get(v_a_1916_);
v_typeAnalysis_1921_ = lean_ctor_get(v___x_1920_, 1);
lean_inc_ref(v_typeAnalysis_1921_);
lean_dec(v___x_1920_);
v_interestingStructures_1922_ = lean_ctor_get(v_typeAnalysis_1921_, 0);
lean_inc_ref(v_interestingStructures_1922_);
v_uninteresting_1923_ = lean_ctor_get(v_typeAnalysis_1921_, 3);
lean_inc_ref(v_uninteresting_1923_);
lean_dec_ref(v_typeAnalysis_1921_);
lean_inc(v_n_1915_);
v___x_1924_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1918_, v___x_1919_, v_uninteresting_1923_, v_n_1915_);
lean_dec_ref(v_uninteresting_1923_);
if (v___x_1924_ == 0)
{
uint8_t v___x_1925_; 
v___x_1925_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1918_, v___x_1919_, v_interestingStructures_1922_, v_n_1915_);
lean_dec_ref(v_interestingStructures_1922_);
if (v___x_1925_ == 0)
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = lean_box(0);
v___x_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
return v___x_1927_;
}
else
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1928_ = lean_box(v___x_1925_);
v___x_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
v___x_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
}
else
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
lean_dec_ref(v_interestingStructures_1922_);
lean_dec(v_n_1915_);
v___x_1931_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
return v___x_1932_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object* v_n_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(v_n_1933_, v_a_1934_);
lean_dec(v_a_1934_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object* v_n_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v_typeAnalysis_1953_; lean_object* v_interestingStructures_1954_; lean_object* v_uninteresting_1955_; uint8_t v___x_1956_; 
v___x_1950_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1951_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1952_ = lean_st_ref_get(v_a_1939_);
v_typeAnalysis_1953_ = lean_ctor_get(v___x_1952_, 1);
lean_inc_ref(v_typeAnalysis_1953_);
lean_dec(v___x_1952_);
v_interestingStructures_1954_ = lean_ctor_get(v_typeAnalysis_1953_, 0);
lean_inc_ref(v_interestingStructures_1954_);
v_uninteresting_1955_ = lean_ctor_get(v_typeAnalysis_1953_, 3);
lean_inc_ref(v_uninteresting_1955_);
lean_dec_ref(v_typeAnalysis_1953_);
lean_inc(v_n_1937_);
v___x_1956_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1950_, v___x_1951_, v_uninteresting_1955_, v_n_1937_);
lean_dec_ref(v_uninteresting_1955_);
if (v___x_1956_ == 0)
{
uint8_t v___x_1957_; 
v___x_1957_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1950_, v___x_1951_, v_interestingStructures_1954_, v_n_1937_);
lean_dec_ref(v_interestingStructures_1954_);
if (v___x_1957_ == 0)
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1958_ = lean_box(0);
v___x_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
return v___x_1959_;
}
else
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1960_ = lean_box(v___x_1957_);
v___x_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
v___x_1962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
return v___x_1962_;
}
}
else
{
lean_object* v___x_1963_; lean_object* v___x_1964_; 
lean_dec_ref(v_interestingStructures_1954_);
lean_dec(v_n_1937_);
v___x_1963_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
return v___x_1964_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object* v_n_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(v_n_1965_, v_a_1966_, v_a_1967_, v_a_1968_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_);
lean_dec(v_a_1976_);
lean_dec_ref(v_a_1975_);
lean_dec(v_a_1974_);
lean_dec_ref(v_a_1973_);
lean_dec(v_a_1972_);
lean_dec_ref(v_a_1971_);
lean_dec(v_a_1970_);
lean_dec_ref(v_a_1969_);
lean_dec(v_a_1968_);
lean_dec(v_a_1967_);
lean_dec_ref(v_a_1966_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object* v_f_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v___x_1982_; lean_object* v_caches_1983_; lean_object* v_typeAnalysis_1984_; lean_object* v_target_1985_; lean_object* v_hypotheses_1986_; uint8_t v_didChange_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1998_; 
v___x_1982_ = lean_st_ref_take(v_a_1980_);
v_caches_1983_ = lean_ctor_get(v___x_1982_, 0);
v_typeAnalysis_1984_ = lean_ctor_get(v___x_1982_, 1);
v_target_1985_ = lean_ctor_get(v___x_1982_, 2);
v_hypotheses_1986_ = lean_ctor_get(v___x_1982_, 3);
v_didChange_1987_ = lean_ctor_get_uint8(v___x_1982_, sizeof(void*)*4);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1989_ = v___x_1982_;
v_isShared_1990_ = v_isSharedCheck_1998_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_hypotheses_1986_);
lean_inc(v_target_1985_);
lean_inc(v_typeAnalysis_1984_);
lean_inc(v_caches_1983_);
lean_dec(v___x_1982_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1998_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1991_ = lean_box(0);
v___x_1992_ = lean_apply_1(v_f_1979_, v_typeAnalysis_1984_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 1, v___x_1992_);
v___x_1994_ = v___x_1989_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_caches_1983_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v___x_1992_);
lean_ctor_set(v_reuseFailAlloc_1997_, 2, v_target_1985_);
lean_ctor_set(v_reuseFailAlloc_1997_, 3, v_hypotheses_1986_);
lean_ctor_set_uint8(v_reuseFailAlloc_1997_, sizeof(void*)*4, v_didChange_1987_);
v___x_1994_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = lean_st_ref_put(v_a_1980_, v___x_1994_);
v___x_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1991_);
return v___x_1996_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object* v_f_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(v_f_1999_, v_a_2000_);
lean_dec(v_a_2000_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object* v_f_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v___x_2016_; lean_object* v_caches_2017_; lean_object* v_typeAnalysis_2018_; lean_object* v_target_2019_; lean_object* v_hypotheses_2020_; uint8_t v_didChange_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2032_; 
v___x_2016_ = lean_st_ref_take(v_a_2005_);
v_caches_2017_ = lean_ctor_get(v___x_2016_, 0);
v_typeAnalysis_2018_ = lean_ctor_get(v___x_2016_, 1);
v_target_2019_ = lean_ctor_get(v___x_2016_, 2);
v_hypotheses_2020_ = lean_ctor_get(v___x_2016_, 3);
v_didChange_2021_ = lean_ctor_get_uint8(v___x_2016_, sizeof(void*)*4);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2023_ = v___x_2016_;
v_isShared_2024_ = v_isSharedCheck_2032_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_hypotheses_2020_);
lean_inc(v_target_2019_);
lean_inc(v_typeAnalysis_2018_);
lean_inc(v_caches_2017_);
lean_dec(v___x_2016_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2032_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2028_; 
v___x_2025_ = lean_box(0);
v___x_2026_ = lean_apply_1(v_f_2003_, v_typeAnalysis_2018_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 1, v___x_2026_);
v___x_2028_ = v___x_2023_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_caches_2017_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v___x_2026_);
lean_ctor_set(v_reuseFailAlloc_2031_, 2, v_target_2019_);
lean_ctor_set(v_reuseFailAlloc_2031_, 3, v_hypotheses_2020_);
lean_ctor_set_uint8(v_reuseFailAlloc_2031_, sizeof(void*)*4, v_didChange_2021_);
v___x_2028_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2029_ = lean_st_ref_put(v_a_2005_, v___x_2028_);
v___x_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2025_);
return v___x_2030_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object* v_f_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(v_f_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_, v_a_2044_);
lean_dec(v_a_2044_);
lean_dec_ref(v_a_2043_);
lean_dec(v_a_2042_);
lean_dec_ref(v_a_2041_);
lean_dec(v_a_2040_);
lean_dec_ref(v_a_2039_);
lean_dec(v_a_2038_);
lean_dec_ref(v_a_2037_);
lean_dec(v_a_2036_);
lean_dec(v_a_2035_);
lean_dec_ref(v_a_2034_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object* v_n_2047_, lean_object* v_a_2048_){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v_typeAnalysis_2053_; lean_object* v_caches_2054_; lean_object* v_target_2055_; lean_object* v_hypotheses_2056_; uint8_t v_didChange_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2079_; 
v___x_2050_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2051_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2052_ = lean_st_ref_take(v_a_2048_);
v_typeAnalysis_2053_ = lean_ctor_get(v___x_2052_, 1);
v_caches_2054_ = lean_ctor_get(v___x_2052_, 0);
v_target_2055_ = lean_ctor_get(v___x_2052_, 2);
v_hypotheses_2056_ = lean_ctor_get(v___x_2052_, 3);
v_didChange_2057_ = lean_ctor_get_uint8(v___x_2052_, sizeof(void*)*4);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2052_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2059_ = v___x_2052_;
v_isShared_2060_ = v_isSharedCheck_2079_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_hypotheses_2056_);
lean_inc(v_target_2055_);
lean_inc(v_typeAnalysis_2053_);
lean_inc(v_caches_2054_);
lean_dec(v___x_2052_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2079_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v_interestingStructures_2061_; lean_object* v_interestingEnums_2062_; lean_object* v_interestingMatchers_2063_; lean_object* v_uninteresting_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2078_; 
v_interestingStructures_2061_ = lean_ctor_get(v_typeAnalysis_2053_, 0);
v_interestingEnums_2062_ = lean_ctor_get(v_typeAnalysis_2053_, 1);
v_interestingMatchers_2063_ = lean_ctor_get(v_typeAnalysis_2053_, 2);
v_uninteresting_2064_ = lean_ctor_get(v_typeAnalysis_2053_, 3);
v_isSharedCheck_2078_ = !lean_is_exclusive(v_typeAnalysis_2053_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2066_ = v_typeAnalysis_2053_;
v_isShared_2067_ = v_isSharedCheck_2078_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_uninteresting_2064_);
lean_inc(v_interestingMatchers_2063_);
lean_inc(v_interestingEnums_2062_);
lean_inc(v_interestingStructures_2061_);
lean_dec(v_typeAnalysis_2053_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2078_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2071_; 
v___x_2068_ = lean_box(0);
v___x_2069_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2050_, v___x_2051_, v_interestingStructures_2061_, v_n_2047_, v___x_2068_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 0, v___x_2069_);
v___x_2071_ = v___x_2066_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2069_);
lean_ctor_set(v_reuseFailAlloc_2077_, 1, v_interestingEnums_2062_);
lean_ctor_set(v_reuseFailAlloc_2077_, 2, v_interestingMatchers_2063_);
lean_ctor_set(v_reuseFailAlloc_2077_, 3, v_uninteresting_2064_);
v___x_2071_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
lean_object* v___x_2073_; 
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 1, v___x_2071_);
v___x_2073_ = v___x_2059_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_caches_2054_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_target_2055_);
lean_ctor_set(v_reuseFailAlloc_2076_, 3, v_hypotheses_2056_);
lean_ctor_set_uint8(v_reuseFailAlloc_2076_, sizeof(void*)*4, v_didChange_2057_);
v___x_2073_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = lean_st_ref_put(v_a_2048_, v___x_2073_);
v___x_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2068_);
return v___x_2075_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object* v_n_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(v_n_2080_, v_a_2081_);
lean_dec(v_a_2081_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object* v_n_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v_typeAnalysis_2100_; lean_object* v_caches_2101_; lean_object* v_target_2102_; lean_object* v_hypotheses_2103_; uint8_t v_didChange_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2126_; 
v___x_2097_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2098_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2099_ = lean_st_ref_take(v_a_2086_);
v_typeAnalysis_2100_ = lean_ctor_get(v___x_2099_, 1);
v_caches_2101_ = lean_ctor_get(v___x_2099_, 0);
v_target_2102_ = lean_ctor_get(v___x_2099_, 2);
v_hypotheses_2103_ = lean_ctor_get(v___x_2099_, 3);
v_didChange_2104_ = lean_ctor_get_uint8(v___x_2099_, sizeof(void*)*4);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2106_ = v___x_2099_;
v_isShared_2107_ = v_isSharedCheck_2126_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_hypotheses_2103_);
lean_inc(v_target_2102_);
lean_inc(v_typeAnalysis_2100_);
lean_inc(v_caches_2101_);
lean_dec(v___x_2099_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2126_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v_interestingStructures_2108_; lean_object* v_interestingEnums_2109_; lean_object* v_interestingMatchers_2110_; lean_object* v_uninteresting_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2125_; 
v_interestingStructures_2108_ = lean_ctor_get(v_typeAnalysis_2100_, 0);
v_interestingEnums_2109_ = lean_ctor_get(v_typeAnalysis_2100_, 1);
v_interestingMatchers_2110_ = lean_ctor_get(v_typeAnalysis_2100_, 2);
v_uninteresting_2111_ = lean_ctor_get(v_typeAnalysis_2100_, 3);
v_isSharedCheck_2125_ = !lean_is_exclusive(v_typeAnalysis_2100_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2113_ = v_typeAnalysis_2100_;
v_isShared_2114_ = v_isSharedCheck_2125_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_uninteresting_2111_);
lean_inc(v_interestingMatchers_2110_);
lean_inc(v_interestingEnums_2109_);
lean_inc(v_interestingStructures_2108_);
lean_dec(v_typeAnalysis_2100_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2125_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2118_; 
v___x_2115_ = lean_box(0);
v___x_2116_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2097_, v___x_2098_, v_interestingStructures_2108_, v_n_2084_, v___x_2115_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2116_);
v___x_2118_ = v___x_2113_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2116_);
lean_ctor_set(v_reuseFailAlloc_2124_, 1, v_interestingEnums_2109_);
lean_ctor_set(v_reuseFailAlloc_2124_, 2, v_interestingMatchers_2110_);
lean_ctor_set(v_reuseFailAlloc_2124_, 3, v_uninteresting_2111_);
v___x_2118_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
lean_object* v___x_2120_; 
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 1, v___x_2118_);
v___x_2120_ = v___x_2106_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_caches_2101_);
lean_ctor_set(v_reuseFailAlloc_2123_, 1, v___x_2118_);
lean_ctor_set(v_reuseFailAlloc_2123_, 2, v_target_2102_);
lean_ctor_set(v_reuseFailAlloc_2123_, 3, v_hypotheses_2103_);
lean_ctor_set_uint8(v_reuseFailAlloc_2123_, sizeof(void*)*4, v_didChange_2104_);
v___x_2120_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2121_ = lean_st_ref_put(v_a_2086_, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2115_);
return v___x_2122_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object* v_n_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(v_n_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_);
lean_dec(v_a_2138_);
lean_dec_ref(v_a_2137_);
lean_dec(v_a_2136_);
lean_dec_ref(v_a_2135_);
lean_dec(v_a_2134_);
lean_dec_ref(v_a_2133_);
lean_dec(v_a_2132_);
lean_dec_ref(v_a_2131_);
lean_dec(v_a_2130_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object* v_n_2141_, lean_object* v_a_2142_){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v_typeAnalysis_2147_; lean_object* v_caches_2148_; lean_object* v_target_2149_; lean_object* v_hypotheses_2150_; uint8_t v_didChange_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2173_; 
v___x_2144_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2145_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2146_ = lean_st_ref_take(v_a_2142_);
v_typeAnalysis_2147_ = lean_ctor_get(v___x_2146_, 1);
v_caches_2148_ = lean_ctor_get(v___x_2146_, 0);
v_target_2149_ = lean_ctor_get(v___x_2146_, 2);
v_hypotheses_2150_ = lean_ctor_get(v___x_2146_, 3);
v_didChange_2151_ = lean_ctor_get_uint8(v___x_2146_, sizeof(void*)*4);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2153_ = v___x_2146_;
v_isShared_2154_ = v_isSharedCheck_2173_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_hypotheses_2150_);
lean_inc(v_target_2149_);
lean_inc(v_typeAnalysis_2147_);
lean_inc(v_caches_2148_);
lean_dec(v___x_2146_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2173_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v_interestingStructures_2155_; lean_object* v_interestingEnums_2156_; lean_object* v_interestingMatchers_2157_; lean_object* v_uninteresting_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2172_; 
v_interestingStructures_2155_ = lean_ctor_get(v_typeAnalysis_2147_, 0);
v_interestingEnums_2156_ = lean_ctor_get(v_typeAnalysis_2147_, 1);
v_interestingMatchers_2157_ = lean_ctor_get(v_typeAnalysis_2147_, 2);
v_uninteresting_2158_ = lean_ctor_get(v_typeAnalysis_2147_, 3);
v_isSharedCheck_2172_ = !lean_is_exclusive(v_typeAnalysis_2147_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2160_ = v_typeAnalysis_2147_;
v_isShared_2161_ = v_isSharedCheck_2172_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_uninteresting_2158_);
lean_inc(v_interestingMatchers_2157_);
lean_inc(v_interestingEnums_2156_);
lean_inc(v_interestingStructures_2155_);
lean_dec(v_typeAnalysis_2147_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2172_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2162_ = lean_box(0);
v___x_2163_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2144_, v___x_2145_, v_interestingEnums_2156_, v_n_2141_, v___x_2162_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v___x_2163_);
v___x_2165_ = v___x_2160_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_interestingStructures_2155_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v___x_2163_);
lean_ctor_set(v_reuseFailAlloc_2171_, 2, v_interestingMatchers_2157_);
lean_ctor_set(v_reuseFailAlloc_2171_, 3, v_uninteresting_2158_);
v___x_2165_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
lean_object* v___x_2167_; 
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 1, v___x_2165_);
v___x_2167_ = v___x_2153_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_caches_2148_);
lean_ctor_set(v_reuseFailAlloc_2170_, 1, v___x_2165_);
lean_ctor_set(v_reuseFailAlloc_2170_, 2, v_target_2149_);
lean_ctor_set(v_reuseFailAlloc_2170_, 3, v_hypotheses_2150_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*4, v_didChange_2151_);
v___x_2167_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2168_ = lean_st_ref_put(v_a_2142_, v___x_2167_);
v___x_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2162_);
return v___x_2169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object* v_n_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_){
_start:
{
lean_object* v_res_2177_; 
v_res_2177_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(v_n_2174_, v_a_2175_);
lean_dec(v_a_2175_);
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object* v_n_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v_typeAnalysis_2194_; lean_object* v_caches_2195_; lean_object* v_target_2196_; lean_object* v_hypotheses_2197_; uint8_t v_didChange_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2220_; 
v___x_2191_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2192_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2193_ = lean_st_ref_take(v_a_2180_);
v_typeAnalysis_2194_ = lean_ctor_get(v___x_2193_, 1);
v_caches_2195_ = lean_ctor_get(v___x_2193_, 0);
v_target_2196_ = lean_ctor_get(v___x_2193_, 2);
v_hypotheses_2197_ = lean_ctor_get(v___x_2193_, 3);
v_didChange_2198_ = lean_ctor_get_uint8(v___x_2193_, sizeof(void*)*4);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2200_ = v___x_2193_;
v_isShared_2201_ = v_isSharedCheck_2220_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_hypotheses_2197_);
lean_inc(v_target_2196_);
lean_inc(v_typeAnalysis_2194_);
lean_inc(v_caches_2195_);
lean_dec(v___x_2193_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2220_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v_interestingStructures_2202_; lean_object* v_interestingEnums_2203_; lean_object* v_interestingMatchers_2204_; lean_object* v_uninteresting_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2219_; 
v_interestingStructures_2202_ = lean_ctor_get(v_typeAnalysis_2194_, 0);
v_interestingEnums_2203_ = lean_ctor_get(v_typeAnalysis_2194_, 1);
v_interestingMatchers_2204_ = lean_ctor_get(v_typeAnalysis_2194_, 2);
v_uninteresting_2205_ = lean_ctor_get(v_typeAnalysis_2194_, 3);
v_isSharedCheck_2219_ = !lean_is_exclusive(v_typeAnalysis_2194_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2207_ = v_typeAnalysis_2194_;
v_isShared_2208_ = v_isSharedCheck_2219_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_uninteresting_2205_);
lean_inc(v_interestingMatchers_2204_);
lean_inc(v_interestingEnums_2203_);
lean_inc(v_interestingStructures_2202_);
lean_dec(v_typeAnalysis_2194_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2219_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2212_; 
v___x_2209_ = lean_box(0);
v___x_2210_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2191_, v___x_2192_, v_interestingEnums_2203_, v_n_2178_, v___x_2209_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2210_);
v___x_2212_ = v___x_2207_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_interestingStructures_2202_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v___x_2210_);
lean_ctor_set(v_reuseFailAlloc_2218_, 2, v_interestingMatchers_2204_);
lean_ctor_set(v_reuseFailAlloc_2218_, 3, v_uninteresting_2205_);
v___x_2212_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2214_; 
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 1, v___x_2212_);
v___x_2214_ = v___x_2200_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_caches_2195_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v___x_2212_);
lean_ctor_set(v_reuseFailAlloc_2217_, 2, v_target_2196_);
lean_ctor_set(v_reuseFailAlloc_2217_, 3, v_hypotheses_2197_);
lean_ctor_set_uint8(v_reuseFailAlloc_2217_, sizeof(void*)*4, v_didChange_2198_);
v___x_2214_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = lean_st_ref_put(v_a_2180_, v___x_2214_);
v___x_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2209_);
return v___x_2216_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object* v_n_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(v_n_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
lean_dec(v_a_2232_);
lean_dec_ref(v_a_2231_);
lean_dec(v_a_2230_);
lean_dec_ref(v_a_2229_);
lean_dec(v_a_2228_);
lean_dec_ref(v_a_2227_);
lean_dec(v_a_2226_);
lean_dec_ref(v_a_2225_);
lean_dec(v_a_2224_);
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object* v_n_2235_, lean_object* v_k_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v_typeAnalysis_2242_; lean_object* v_caches_2243_; lean_object* v_target_2244_; lean_object* v_hypotheses_2245_; uint8_t v_didChange_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2268_; 
v___x_2239_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2240_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2241_ = lean_st_ref_take(v_a_2237_);
v_typeAnalysis_2242_ = lean_ctor_get(v___x_2241_, 1);
v_caches_2243_ = lean_ctor_get(v___x_2241_, 0);
v_target_2244_ = lean_ctor_get(v___x_2241_, 2);
v_hypotheses_2245_ = lean_ctor_get(v___x_2241_, 3);
v_didChange_2246_ = lean_ctor_get_uint8(v___x_2241_, sizeof(void*)*4);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2248_ = v___x_2241_;
v_isShared_2249_ = v_isSharedCheck_2268_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_hypotheses_2245_);
lean_inc(v_target_2244_);
lean_inc(v_typeAnalysis_2242_);
lean_inc(v_caches_2243_);
lean_dec(v___x_2241_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2268_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v_interestingStructures_2250_; lean_object* v_interestingEnums_2251_; lean_object* v_interestingMatchers_2252_; lean_object* v_uninteresting_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2267_; 
v_interestingStructures_2250_ = lean_ctor_get(v_typeAnalysis_2242_, 0);
v_interestingEnums_2251_ = lean_ctor_get(v_typeAnalysis_2242_, 1);
v_interestingMatchers_2252_ = lean_ctor_get(v_typeAnalysis_2242_, 2);
v_uninteresting_2253_ = lean_ctor_get(v_typeAnalysis_2242_, 3);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_typeAnalysis_2242_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2255_ = v_typeAnalysis_2242_;
v_isShared_2256_ = v_isSharedCheck_2267_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_uninteresting_2253_);
lean_inc(v_interestingMatchers_2252_);
lean_inc(v_interestingEnums_2251_);
lean_inc(v_interestingStructures_2250_);
lean_dec(v_typeAnalysis_2242_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2267_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2260_; 
v___x_2257_ = lean_box(0);
v___x_2258_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_2239_, v___x_2240_, v_interestingMatchers_2252_, v_n_2235_, v_k_2236_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 2, v___x_2258_);
v___x_2260_ = v___x_2255_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_interestingStructures_2250_);
lean_ctor_set(v_reuseFailAlloc_2266_, 1, v_interestingEnums_2251_);
lean_ctor_set(v_reuseFailAlloc_2266_, 2, v___x_2258_);
lean_ctor_set(v_reuseFailAlloc_2266_, 3, v_uninteresting_2253_);
v___x_2260_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
lean_object* v___x_2262_; 
if (v_isShared_2249_ == 0)
{
lean_ctor_set(v___x_2248_, 1, v___x_2260_);
v___x_2262_ = v___x_2248_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_caches_2243_);
lean_ctor_set(v_reuseFailAlloc_2265_, 1, v___x_2260_);
lean_ctor_set(v_reuseFailAlloc_2265_, 2, v_target_2244_);
lean_ctor_set(v_reuseFailAlloc_2265_, 3, v_hypotheses_2245_);
lean_ctor_set_uint8(v_reuseFailAlloc_2265_, sizeof(void*)*4, v_didChange_2246_);
v___x_2262_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2263_ = lean_st_ref_put(v_a_2237_, v___x_2262_);
v___x_2264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2257_);
return v___x_2264_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object* v_n_2269_, lean_object* v_k_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(v_n_2269_, v_k_2270_, v_a_2271_);
lean_dec(v_a_2271_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object* v_n_2274_, lean_object* v_k_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v_typeAnalysis_2291_; lean_object* v_caches_2292_; lean_object* v_target_2293_; lean_object* v_hypotheses_2294_; uint8_t v_didChange_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2317_; 
v___x_2288_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2289_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2290_ = lean_st_ref_take(v_a_2277_);
v_typeAnalysis_2291_ = lean_ctor_get(v___x_2290_, 1);
v_caches_2292_ = lean_ctor_get(v___x_2290_, 0);
v_target_2293_ = lean_ctor_get(v___x_2290_, 2);
v_hypotheses_2294_ = lean_ctor_get(v___x_2290_, 3);
v_didChange_2295_ = lean_ctor_get_uint8(v___x_2290_, sizeof(void*)*4);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2297_ = v___x_2290_;
v_isShared_2298_ = v_isSharedCheck_2317_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_hypotheses_2294_);
lean_inc(v_target_2293_);
lean_inc(v_typeAnalysis_2291_);
lean_inc(v_caches_2292_);
lean_dec(v___x_2290_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2317_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v_interestingStructures_2299_; lean_object* v_interestingEnums_2300_; lean_object* v_interestingMatchers_2301_; lean_object* v_uninteresting_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2316_; 
v_interestingStructures_2299_ = lean_ctor_get(v_typeAnalysis_2291_, 0);
v_interestingEnums_2300_ = lean_ctor_get(v_typeAnalysis_2291_, 1);
v_interestingMatchers_2301_ = lean_ctor_get(v_typeAnalysis_2291_, 2);
v_uninteresting_2302_ = lean_ctor_get(v_typeAnalysis_2291_, 3);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_typeAnalysis_2291_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2304_ = v_typeAnalysis_2291_;
v_isShared_2305_ = v_isSharedCheck_2316_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_uninteresting_2302_);
lean_inc(v_interestingMatchers_2301_);
lean_inc(v_interestingEnums_2300_);
lean_inc(v_interestingStructures_2299_);
lean_dec(v_typeAnalysis_2291_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2316_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2306_ = lean_box(0);
v___x_2307_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_2288_, v___x_2289_, v_interestingMatchers_2301_, v_n_2274_, v_k_2275_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 2, v___x_2307_);
v___x_2309_ = v___x_2304_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_interestingStructures_2299_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_interestingEnums_2300_);
lean_ctor_set(v_reuseFailAlloc_2315_, 2, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2315_, 3, v_uninteresting_2302_);
v___x_2309_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2311_; 
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 1, v___x_2309_);
v___x_2311_ = v___x_2297_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_caches_2292_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v___x_2309_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_target_2293_);
lean_ctor_set(v_reuseFailAlloc_2314_, 3, v_hypotheses_2294_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*4, v_didChange_2295_);
v___x_2311_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = lean_st_ref_put(v_a_2277_, v___x_2311_);
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2306_);
return v___x_2313_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object* v_n_2318_, lean_object* v_k_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(v_n_2318_, v_k_2319_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_);
lean_dec(v_a_2330_);
lean_dec_ref(v_a_2329_);
lean_dec(v_a_2328_);
lean_dec_ref(v_a_2327_);
lean_dec(v_a_2326_);
lean_dec_ref(v_a_2325_);
lean_dec(v_a_2324_);
lean_dec_ref(v_a_2323_);
lean_dec(v_a_2322_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object* v_n_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v_typeAnalysis_2339_; lean_object* v_caches_2340_; lean_object* v_target_2341_; lean_object* v_hypotheses_2342_; uint8_t v_didChange_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2365_; 
v___x_2336_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2337_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2338_ = lean_st_ref_take(v_a_2334_);
v_typeAnalysis_2339_ = lean_ctor_get(v___x_2338_, 1);
v_caches_2340_ = lean_ctor_get(v___x_2338_, 0);
v_target_2341_ = lean_ctor_get(v___x_2338_, 2);
v_hypotheses_2342_ = lean_ctor_get(v___x_2338_, 3);
v_didChange_2343_ = lean_ctor_get_uint8(v___x_2338_, sizeof(void*)*4);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2345_ = v___x_2338_;
v_isShared_2346_ = v_isSharedCheck_2365_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_hypotheses_2342_);
lean_inc(v_target_2341_);
lean_inc(v_typeAnalysis_2339_);
lean_inc(v_caches_2340_);
lean_dec(v___x_2338_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2365_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v_interestingStructures_2347_; lean_object* v_interestingEnums_2348_; lean_object* v_interestingMatchers_2349_; lean_object* v_uninteresting_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2364_; 
v_interestingStructures_2347_ = lean_ctor_get(v_typeAnalysis_2339_, 0);
v_interestingEnums_2348_ = lean_ctor_get(v_typeAnalysis_2339_, 1);
v_interestingMatchers_2349_ = lean_ctor_get(v_typeAnalysis_2339_, 2);
v_uninteresting_2350_ = lean_ctor_get(v_typeAnalysis_2339_, 3);
v_isSharedCheck_2364_ = !lean_is_exclusive(v_typeAnalysis_2339_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2352_ = v_typeAnalysis_2339_;
v_isShared_2353_ = v_isSharedCheck_2364_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_uninteresting_2350_);
lean_inc(v_interestingMatchers_2349_);
lean_inc(v_interestingEnums_2348_);
lean_inc(v_interestingStructures_2347_);
lean_dec(v_typeAnalysis_2339_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2364_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2354_ = lean_box(0);
v___x_2355_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2336_, v___x_2337_, v_uninteresting_2350_, v_n_2333_, v___x_2354_);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 3, v___x_2355_);
v___x_2357_ = v___x_2352_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_interestingStructures_2347_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v_interestingEnums_2348_);
lean_ctor_set(v_reuseFailAlloc_2363_, 2, v_interestingMatchers_2349_);
lean_ctor_set(v_reuseFailAlloc_2363_, 3, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2359_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 1, v___x_2357_);
v___x_2359_ = v___x_2345_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_caches_2340_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v___x_2357_);
lean_ctor_set(v_reuseFailAlloc_2362_, 2, v_target_2341_);
lean_ctor_set(v_reuseFailAlloc_2362_, 3, v_hypotheses_2342_);
lean_ctor_set_uint8(v_reuseFailAlloc_2362_, sizeof(void*)*4, v_didChange_2343_);
v___x_2359_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2360_ = lean_st_ref_put(v_a_2334_, v___x_2359_);
v___x_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2354_);
return v___x_2361_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object* v_n_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(v_n_2366_, v_a_2367_);
lean_dec(v_a_2367_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object* v_n_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v_typeAnalysis_2386_; lean_object* v_caches_2387_; lean_object* v_target_2388_; lean_object* v_hypotheses_2389_; uint8_t v_didChange_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2412_; 
v___x_2383_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2384_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2385_ = lean_st_ref_take(v_a_2372_);
v_typeAnalysis_2386_ = lean_ctor_get(v___x_2385_, 1);
v_caches_2387_ = lean_ctor_get(v___x_2385_, 0);
v_target_2388_ = lean_ctor_get(v___x_2385_, 2);
v_hypotheses_2389_ = lean_ctor_get(v___x_2385_, 3);
v_didChange_2390_ = lean_ctor_get_uint8(v___x_2385_, sizeof(void*)*4);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2392_ = v___x_2385_;
v_isShared_2393_ = v_isSharedCheck_2412_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_hypotheses_2389_);
lean_inc(v_target_2388_);
lean_inc(v_typeAnalysis_2386_);
lean_inc(v_caches_2387_);
lean_dec(v___x_2385_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2412_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v_interestingStructures_2394_; lean_object* v_interestingEnums_2395_; lean_object* v_interestingMatchers_2396_; lean_object* v_uninteresting_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2411_; 
v_interestingStructures_2394_ = lean_ctor_get(v_typeAnalysis_2386_, 0);
v_interestingEnums_2395_ = lean_ctor_get(v_typeAnalysis_2386_, 1);
v_interestingMatchers_2396_ = lean_ctor_get(v_typeAnalysis_2386_, 2);
v_uninteresting_2397_ = lean_ctor_get(v_typeAnalysis_2386_, 3);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_typeAnalysis_2386_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2399_ = v_typeAnalysis_2386_;
v_isShared_2400_ = v_isSharedCheck_2411_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_uninteresting_2397_);
lean_inc(v_interestingMatchers_2396_);
lean_inc(v_interestingEnums_2395_);
lean_inc(v_interestingStructures_2394_);
lean_dec(v_typeAnalysis_2386_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2411_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2404_; 
v___x_2401_ = lean_box(0);
v___x_2402_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2383_, v___x_2384_, v_uninteresting_2397_, v_n_2370_, v___x_2401_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 3, v___x_2402_);
v___x_2404_ = v___x_2399_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_interestingStructures_2394_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_interestingEnums_2395_);
lean_ctor_set(v_reuseFailAlloc_2410_, 2, v_interestingMatchers_2396_);
lean_ctor_set(v_reuseFailAlloc_2410_, 3, v___x_2402_);
v___x_2404_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
lean_object* v___x_2406_; 
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 1, v___x_2404_);
v___x_2406_ = v___x_2392_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_caches_2387_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2409_, 2, v_target_2388_);
lean_ctor_set(v_reuseFailAlloc_2409_, 3, v_hypotheses_2389_);
lean_ctor_set_uint8(v_reuseFailAlloc_2409_, sizeof(void*)*4, v_didChange_2390_);
v___x_2406_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = lean_st_ref_put(v_a_2372_, v___x_2406_);
v___x_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2401_);
return v___x_2408_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object* v_n_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(v_n_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_);
lean_dec(v_a_2424_);
lean_dec_ref(v_a_2423_);
lean_dec(v_a_2422_);
lean_dec_ref(v_a_2421_);
lean_dec(v_a_2420_);
lean_dec_ref(v_a_2419_);
lean_dec(v_a_2418_);
lean_dec_ref(v_a_2417_);
lean_dec(v_a_2416_);
lean_dec(v_a_2415_);
lean_dec_ref(v_a_2414_);
return v_res_2426_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2427_ = lean_box(0);
v___x_2428_ = lean_unsigned_to_nat(16u);
v___x_2429_ = lean_mk_array(v___x_2428_, v___x_2427_);
return v___x_2429_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2430_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0);
v___x_2431_ = lean_unsigned_to_nat(0u);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v___x_2431_);
lean_ctor_set(v___x_2432_, 1, v___x_2430_);
return v___x_2432_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v___x_2434_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
lean_ctor_set(v___x_2434_, 1, v___x_2433_);
lean_ctor_set(v___x_2434_, 2, v___x_2433_);
lean_ctor_set(v___x_2434_, 3, v___x_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object* v_ctx_2437_, lean_object* v_target_2438_, lean_object* v_x_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; uint8_t v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2450_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2451_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2452_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2453_ = 0;
v___x_2454_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2454_, 0, v___x_2450_);
lean_ctor_set(v___x_2454_, 1, v___x_2451_);
lean_ctor_set(v___x_2454_, 2, v_target_2438_);
lean_ctor_set(v___x_2454_, 3, v___x_2452_);
lean_ctor_set_uint8(v___x_2454_, sizeof(void*)*4, v___x_2453_);
v___x_2455_ = lean_st_mk_ref(v___x_2454_);
lean_inc(v_a_2448_);
lean_inc_ref(v_a_2447_);
lean_inc(v_a_2446_);
lean_inc_ref(v_a_2445_);
lean_inc(v_a_2444_);
lean_inc_ref(v_a_2443_);
lean_inc(v_a_2442_);
lean_inc_ref(v_a_2441_);
lean_inc(v_a_2440_);
lean_inc(v___x_2455_);
v___x_2456_ = lean_apply_12(v_x_2439_, v_ctx_2437_, v___x_2455_, v_a_2440_, v_a_2441_, v_a_2442_, v_a_2443_, v_a_2444_, v_a_2445_, v_a_2446_, v_a_2447_, v_a_2448_, lean_box(0));
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2466_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2459_ = v___x_2456_;
v_isShared_2460_ = v_isSharedCheck_2466_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2456_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2466_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2464_; 
v___x_2461_ = lean_st_ref_get(v___x_2455_);
lean_dec(v___x_2455_);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v_a_2457_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 0, v___x_2462_);
v___x_2464_ = v___x_2459_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2462_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v___x_2455_);
v_a_2467_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2456_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2456_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object* v_ctx_2475_, lean_object* v_target_2476_, lean_object* v_x_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(v_ctx_2475_, v_target_2476_, v_x_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_, v_a_2486_);
lean_dec(v_a_2486_);
lean_dec_ref(v_a_2485_);
lean_dec(v_a_2484_);
lean_dec_ref(v_a_2483_);
lean_dec(v_a_2482_);
lean_dec_ref(v_a_2481_);
lean_dec(v_a_2480_);
lean_dec_ref(v_a_2479_);
lean_dec(v_a_2478_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object* v_00_u03b1_2489_, lean_object* v_ctx_2490_, lean_object* v_target_2491_, lean_object* v_x_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2503_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2504_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2505_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2506_ = 0;
v___x_2507_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2507_, 0, v___x_2503_);
lean_ctor_set(v___x_2507_, 1, v___x_2504_);
lean_ctor_set(v___x_2507_, 2, v_target_2491_);
lean_ctor_set(v___x_2507_, 3, v___x_2505_);
lean_ctor_set_uint8(v___x_2507_, sizeof(void*)*4, v___x_2506_);
v___x_2508_ = lean_st_mk_ref(v___x_2507_);
lean_inc(v_a_2501_);
lean_inc_ref(v_a_2500_);
lean_inc(v_a_2499_);
lean_inc_ref(v_a_2498_);
lean_inc(v_a_2497_);
lean_inc_ref(v_a_2496_);
lean_inc(v_a_2495_);
lean_inc_ref(v_a_2494_);
lean_inc(v_a_2493_);
lean_inc(v___x_2508_);
v___x_2509_ = lean_apply_12(v_x_2492_, v_ctx_2490_, v___x_2508_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, lean_box(0));
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2519_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2512_ = v___x_2509_;
v_isShared_2513_ = v_isSharedCheck_2519_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2509_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2519_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2517_; 
v___x_2514_ = lean_st_ref_get(v___x_2508_);
lean_dec(v___x_2508_);
v___x_2515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2515_, 0, v_a_2510_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 0, v___x_2515_);
v___x_2517_ = v___x_2512_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec(v___x_2508_);
v_a_2520_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2509_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2509_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object* v_00_u03b1_2528_, lean_object* v_ctx_2529_, lean_object* v_target_2530_, lean_object* v_x_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(v_00_u03b1_2528_, v_ctx_2529_, v_target_2530_, v_x_2531_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_);
lean_dec(v_a_2540_);
lean_dec_ref(v_a_2539_);
lean_dec(v_a_2538_);
lean_dec_ref(v_a_2537_);
lean_dec(v_a_2536_);
lean_dec_ref(v_a_2535_);
lean_dec(v_a_2534_);
lean_dec_ref(v_a_2533_);
lean_dec(v_a_2532_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object* v_ctx_2543_, lean_object* v_target_2544_, lean_object* v_x_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; uint8_t v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2556_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2557_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2558_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2559_ = 0;
v___x_2560_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2560_, 0, v___x_2556_);
lean_ctor_set(v___x_2560_, 1, v___x_2557_);
lean_ctor_set(v___x_2560_, 2, v_target_2544_);
lean_ctor_set(v___x_2560_, 3, v___x_2558_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*4, v___x_2559_);
v___x_2561_ = lean_st_mk_ref(v___x_2560_);
lean_inc(v_a_2554_);
lean_inc_ref(v_a_2553_);
lean_inc(v_a_2552_);
lean_inc_ref(v_a_2551_);
lean_inc(v_a_2550_);
lean_inc_ref(v_a_2549_);
lean_inc(v_a_2548_);
lean_inc_ref(v_a_2547_);
lean_inc(v_a_2546_);
lean_inc(v___x_2561_);
v___x_2562_ = lean_apply_12(v_x_2545_, v_ctx_2543_, v___x_2561_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_, lean_box(0));
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2571_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2565_ = v___x_2562_;
v_isShared_2566_ = v_isSharedCheck_2571_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2562_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2571_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2567_; lean_object* v___x_2569_; 
v___x_2567_ = lean_st_ref_get(v___x_2561_);
lean_dec(v___x_2561_);
lean_dec(v___x_2567_);
if (v_isShared_2566_ == 0)
{
v___x_2569_ = v___x_2565_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2563_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
else
{
lean_dec(v___x_2561_);
return v___x_2562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object* v_ctx_2572_, lean_object* v_target_2573_, lean_object* v_x_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_){
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(v_ctx_2572_, v_target_2573_, v_x_2574_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_, v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_a_2581_);
lean_dec_ref(v_a_2580_);
lean_dec(v_a_2579_);
lean_dec_ref(v_a_2578_);
lean_dec(v_a_2577_);
lean_dec_ref(v_a_2576_);
lean_dec(v_a_2575_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object* v_00_u03b1_2586_, lean_object* v_ctx_2587_, lean_object* v_target_2588_, lean_object* v_x_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_){
_start:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2600_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2601_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2602_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2603_ = 0;
v___x_2604_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2604_, 0, v___x_2600_);
lean_ctor_set(v___x_2604_, 1, v___x_2601_);
lean_ctor_set(v___x_2604_, 2, v_target_2588_);
lean_ctor_set(v___x_2604_, 3, v___x_2602_);
lean_ctor_set_uint8(v___x_2604_, sizeof(void*)*4, v___x_2603_);
v___x_2605_ = lean_st_mk_ref(v___x_2604_);
lean_inc(v_a_2598_);
lean_inc_ref(v_a_2597_);
lean_inc(v_a_2596_);
lean_inc_ref(v_a_2595_);
lean_inc(v_a_2594_);
lean_inc_ref(v_a_2593_);
lean_inc(v_a_2592_);
lean_inc_ref(v_a_2591_);
lean_inc(v_a_2590_);
lean_inc(v___x_2605_);
v___x_2606_ = lean_apply_12(v_x_2589_, v_ctx_2587_, v___x_2605_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, lean_box(0));
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2615_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2609_ = v___x_2606_;
v_isShared_2610_ = v_isSharedCheck_2615_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2606_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2615_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2611_; lean_object* v___x_2613_; 
v___x_2611_ = lean_st_ref_get(v___x_2605_);
lean_dec(v___x_2605_);
lean_dec(v___x_2611_);
if (v_isShared_2610_ == 0)
{
v___x_2613_ = v___x_2609_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2607_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
else
{
lean_dec(v___x_2605_);
return v___x_2606_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object* v_00_u03b1_2616_, lean_object* v_ctx_2617_, lean_object* v_target_2618_, lean_object* v_x_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(v_00_u03b1_2616_, v_ctx_2617_, v_target_2618_, v_x_2619_, v_a_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_);
lean_dec(v_a_2628_);
lean_dec_ref(v_a_2627_);
lean_dec(v_a_2626_);
lean_dec_ref(v_a_2625_);
lean_dec(v_a_2624_);
lean_dec_ref(v_a_2623_);
lean_dec(v_a_2622_);
lean_dec_ref(v_a_2621_);
lean_dec(v_a_2620_);
return v_res_2630_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2(void){
_start:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2633_ = l_Lean_Core_instMonadTraceCoreM;
v___x_2634_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2635_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2634_, v___x_2633_);
return v___x_2635_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3(void){
_start:
{
lean_object* v___x_2636_; lean_object* v___f_2637_; lean_object* v___x_2638_; 
v___x_2636_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2);
v___f_2637_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2638_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2637_, v___x_2636_);
return v___x_2638_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4(void){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2639_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3);
v___x_2640_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2641_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2640_, v___x_2639_);
return v___x_2641_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5(void){
_start:
{
lean_object* v___x_2642_; lean_object* v___f_2643_; lean_object* v___x_2644_; 
v___x_2642_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4);
v___f_2643_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2644_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2643_, v___x_2642_);
return v___x_2644_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2645_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5);
v___x_2646_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2647_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2646_, v___x_2645_);
return v___x_2647_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7(void){
_start:
{
lean_object* v___x_2648_; lean_object* v___f_2649_; lean_object* v___x_2650_; 
v___x_2648_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6);
v___f_2649_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2650_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2649_, v___x_2648_);
return v___x_2650_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8(void){
_start:
{
lean_object* v___x_2651_; lean_object* v___f_2652_; lean_object* v___x_2653_; 
v___x_2651_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7);
v___f_2652_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2653_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2652_, v___x_2651_);
return v___x_2653_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9(void){
_start:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2654_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8);
v___x_2655_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2656_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2655_, v___x_2654_);
return v___x_2656_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10(void){
_start:
{
lean_object* v___x_2657_; lean_object* v___f_2658_; lean_object* v___x_2659_; 
v___x_2657_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9);
v___f_2658_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2659_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2658_, v___x_2657_);
return v___x_2659_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13(void){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2662_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_2663_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2664_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2665_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2664_, v___x_2663_, v___x_2662_);
return v___x_2665_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14(void){
_start:
{
lean_object* v___x_2666_; lean_object* v___f_2667_; lean_object* v___f_2668_; lean_object* v___x_2669_; 
v___x_2666_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13);
v___f_2667_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2668_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2669_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2668_, v___f_2667_, v___x_2666_);
return v___x_2669_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15(void){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2670_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_2671_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2672_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2673_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2672_, v___x_2671_, v___x_2670_);
return v___x_2673_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16(void){
_start:
{
lean_object* v___x_2674_; lean_object* v___f_2675_; lean_object* v___f_2676_; lean_object* v___x_2677_; 
v___x_2674_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15);
v___f_2675_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2676_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2677_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2676_, v___f_2675_, v___x_2674_);
return v___x_2677_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17(void){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2678_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16);
v___x_2679_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2680_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2681_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2680_, v___x_2679_, v___x_2678_);
return v___x_2681_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18(void){
_start:
{
lean_object* v___x_2682_; lean_object* v___f_2683_; lean_object* v___f_2684_; lean_object* v___x_2685_; 
v___x_2682_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17);
v___f_2683_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2684_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2685_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2684_, v___f_2683_, v___x_2682_);
return v___x_2685_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19(void){
_start:
{
lean_object* v___x_2686_; lean_object* v___f_2687_; lean_object* v___f_2688_; lean_object* v___x_2689_; 
v___x_2686_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18);
v___f_2687_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2688_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2689_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2688_, v___f_2687_, v___x_2686_);
return v___x_2689_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20(void){
_start:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2690_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19);
v___x_2691_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2692_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2693_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2692_, v___x_2691_, v___x_2690_);
return v___x_2693_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21(void){
_start:
{
lean_object* v___x_2694_; lean_object* v___f_2695_; lean_object* v___f_2696_; lean_object* v___x_2697_; 
v___x_2694_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20);
v___f_2695_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2696_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2697_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2696_, v___f_2695_, v___x_2694_);
return v___x_2697_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28(void){
_start:
{
lean_object* v_cls_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; 
v_cls_2708_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2709_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_2710_ = l_Lean_Name_append(v___x_2709_, v_cls_2708_);
return v___x_2710_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29(void){
_start:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___f_2713_; 
v___x_2711_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2712_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_2713_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2713_, 0, v___x_2712_);
lean_closure_set(v___f_2713_, 1, v___x_2711_);
return v___f_2713_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30(void){
_start:
{
lean_object* v___f_2714_; lean_object* v___f_2715_; lean_object* v___f_2716_; 
v___f_2714_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2715_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29);
v___f_2716_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2716_, 0, v___f_2715_);
lean_closure_set(v___f_2716_, 1, v___f_2714_);
return v___f_2716_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31(void){
_start:
{
lean_object* v___x_2717_; lean_object* v___f_2718_; lean_object* v___f_2719_; 
v___x_2717_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2718_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30);
v___f_2719_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2719_, 0, v___f_2718_);
lean_closure_set(v___f_2719_, 1, v___x_2717_);
return v___f_2719_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32(void){
_start:
{
lean_object* v___f_2720_; lean_object* v___f_2721_; lean_object* v___f_2722_; 
v___f_2720_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2721_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31);
v___f_2722_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2722_, 0, v___f_2721_);
lean_closure_set(v___f_2722_, 1, v___f_2720_);
return v___f_2722_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33(void){
_start:
{
lean_object* v___f_2723_; lean_object* v___f_2724_; lean_object* v___f_2725_; 
v___f_2723_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2724_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32);
v___f_2725_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2725_, 0, v___f_2724_);
lean_closure_set(v___f_2725_, 1, v___f_2723_);
return v___f_2725_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34(void){
_start:
{
lean_object* v___x_2726_; lean_object* v___f_2727_; lean_object* v___f_2728_; 
v___x_2726_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2727_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33);
v___f_2728_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2728_, 0, v___f_2727_);
lean_closure_set(v___f_2728_, 1, v___x_2726_);
return v___f_2728_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35(void){
_start:
{
lean_object* v___f_2729_; lean_object* v___f_2730_; lean_object* v___f_2731_; 
v___f_2729_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2730_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34);
v___f_2731_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2731_, 0, v___f_2730_);
lean_closure_set(v___f_2731_, 1, v___f_2729_);
return v___f_2731_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37(void){
_start:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36));
v___x_2734_ = l_Lean_stringToMessageData(v___x_2733_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object* v_hyp_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_){
_start:
{
lean_object* v___y_2749_; lean_object* v___x_2767_; lean_object* v_toApplicative_2768_; lean_object* v_toFunctor_2769_; lean_object* v_toSeq_2770_; lean_object* v_toSeqLeft_2771_; lean_object* v_toSeqRight_2772_; lean_object* v___f_2773_; lean_object* v___f_2774_; lean_object* v___f_2775_; lean_object* v___f_2776_; lean_object* v___x_2777_; lean_object* v___f_2778_; lean_object* v___f_2779_; lean_object* v___f_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v_toApplicative_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2835_; 
v___x_2767_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_2768_ = lean_ctor_get(v___x_2767_, 0);
v_toFunctor_2769_ = lean_ctor_get(v_toApplicative_2768_, 0);
v_toSeq_2770_ = lean_ctor_get(v_toApplicative_2768_, 2);
v_toSeqLeft_2771_ = lean_ctor_get(v_toApplicative_2768_, 3);
v_toSeqRight_2772_ = lean_ctor_get(v_toApplicative_2768_, 4);
v___f_2773_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_2774_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_2769_, 2);
v___f_2775_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2775_, 0, v_toFunctor_2769_);
v___f_2776_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2776_, 0, v_toFunctor_2769_);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___f_2775_);
lean_ctor_set(v___x_2777_, 1, v___f_2776_);
lean_inc(v_toSeqRight_2772_);
v___f_2778_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2778_, 0, v_toSeqRight_2772_);
lean_inc(v_toSeqLeft_2771_);
v___f_2779_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2779_, 0, v_toSeqLeft_2771_);
lean_inc(v_toSeq_2770_);
v___f_2780_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2780_, 0, v_toSeq_2770_);
v___x_2781_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2777_);
lean_ctor_set(v___x_2781_, 1, v___f_2773_);
lean_ctor_set(v___x_2781_, 2, v___f_2780_);
lean_ctor_set(v___x_2781_, 3, v___f_2779_);
lean_ctor_set(v___x_2781_, 4, v___f_2778_);
v___x_2782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
lean_ctor_set(v___x_2782_, 1, v___f_2774_);
v___x_2783_ = l_StateRefT_x27_instMonad___redArg(v___x_2782_);
v_toApplicative_2784_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2835_ == 0)
{
lean_object* v_unused_2836_; 
v_unused_2836_ = lean_ctor_get(v___x_2783_, 1);
lean_dec(v_unused_2836_);
v___x_2786_ = v___x_2783_;
v_isShared_2787_ = v_isSharedCheck_2835_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_toApplicative_2784_);
lean_dec(v___x_2783_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2835_;
goto v_resetjp_2785_;
}
v___jp_2748_:
{
lean_object* v___x_2750_; lean_object* v_caches_2751_; lean_object* v_typeAnalysis_2752_; lean_object* v_target_2753_; lean_object* v_hypotheses_2754_; uint8_t v_didChange_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2766_; 
v___x_2750_ = lean_st_ref_take(v___y_2749_);
v_caches_2751_ = lean_ctor_get(v___x_2750_, 0);
v_typeAnalysis_2752_ = lean_ctor_get(v___x_2750_, 1);
v_target_2753_ = lean_ctor_get(v___x_2750_, 2);
v_hypotheses_2754_ = lean_ctor_get(v___x_2750_, 3);
v_didChange_2755_ = lean_ctor_get_uint8(v___x_2750_, sizeof(void*)*4);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2757_ = v___x_2750_;
v_isShared_2758_ = v_isSharedCheck_2766_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_hypotheses_2754_);
lean_inc(v_target_2753_);
lean_inc(v_typeAnalysis_2752_);
lean_inc(v_caches_2751_);
lean_dec(v___x_2750_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2766_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2762_; 
v___x_2759_ = lean_box(0);
v___x_2760_ = lean_array_push(v_hypotheses_2754_, v_hyp_2735_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 3, v___x_2760_);
v___x_2762_ = v___x_2757_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_caches_2751_);
lean_ctor_set(v_reuseFailAlloc_2765_, 1, v_typeAnalysis_2752_);
lean_ctor_set(v_reuseFailAlloc_2765_, 2, v_target_2753_);
lean_ctor_set(v_reuseFailAlloc_2765_, 3, v___x_2760_);
lean_ctor_set_uint8(v_reuseFailAlloc_2765_, sizeof(void*)*4, v_didChange_2755_);
v___x_2762_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = lean_st_ref_put(v___y_2749_, v___x_2762_);
v___x_2764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2759_);
return v___x_2764_;
}
}
}
v_resetjp_2785_:
{
lean_object* v_toFunctor_2788_; lean_object* v_toSeq_2789_; lean_object* v_toSeqLeft_2790_; lean_object* v_toSeqRight_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2833_; 
v_toFunctor_2788_ = lean_ctor_get(v_toApplicative_2784_, 0);
v_toSeq_2789_ = lean_ctor_get(v_toApplicative_2784_, 2);
v_toSeqLeft_2790_ = lean_ctor_get(v_toApplicative_2784_, 3);
v_toSeqRight_2791_ = lean_ctor_get(v_toApplicative_2784_, 4);
v_isSharedCheck_2833_ = !lean_is_exclusive(v_toApplicative_2784_);
if (v_isSharedCheck_2833_ == 0)
{
lean_object* v_unused_2834_; 
v_unused_2834_ = lean_ctor_get(v_toApplicative_2784_, 1);
lean_dec(v_unused_2834_);
v___x_2793_ = v_toApplicative_2784_;
v_isShared_2794_ = v_isSharedCheck_2833_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_toSeqRight_2791_);
lean_inc(v_toSeqLeft_2790_);
lean_inc(v_toSeq_2789_);
lean_inc(v_toFunctor_2788_);
lean_dec(v_toApplicative_2784_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2833_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___f_2795_; lean_object* v___f_2796_; lean_object* v___f_2797_; lean_object* v___f_2798_; lean_object* v___x_2799_; lean_object* v___f_2800_; lean_object* v___f_2801_; lean_object* v___f_2802_; lean_object* v___x_2804_; 
v___f_2795_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_2796_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_2788_);
v___f_2797_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2797_, 0, v_toFunctor_2788_);
v___f_2798_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2798_, 0, v_toFunctor_2788_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___f_2797_);
lean_ctor_set(v___x_2799_, 1, v___f_2798_);
v___f_2800_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2800_, 0, v_toSeqRight_2791_);
v___f_2801_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2801_, 0, v_toSeqLeft_2790_);
v___f_2802_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2802_, 0, v_toSeq_2789_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 4, v___f_2800_);
lean_ctor_set(v___x_2793_, 3, v___f_2801_);
lean_ctor_set(v___x_2793_, 2, v___f_2802_);
lean_ctor_set(v___x_2793_, 1, v___f_2795_);
lean_ctor_set(v___x_2793_, 0, v___x_2799_);
v___x_2804_ = v___x_2793_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v___x_2799_);
lean_ctor_set(v_reuseFailAlloc_2832_, 1, v___f_2795_);
lean_ctor_set(v_reuseFailAlloc_2832_, 2, v___f_2802_);
lean_ctor_set(v_reuseFailAlloc_2832_, 3, v___f_2801_);
lean_ctor_set(v_reuseFailAlloc_2832_, 4, v___f_2800_);
v___x_2804_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
lean_object* v___x_2806_; 
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 1, v___f_2796_);
lean_ctor_set(v___x_2786_, 0, v___x_2804_);
v___x_2806_ = v___x_2786_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2804_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v___f_2796_);
v___x_2806_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v_toCold_2816_; lean_object* v_options_2817_; uint8_t v_hasTrace_2818_; 
v___x_2807_ = l_StateRefT_x27_instMonad___redArg(v___x_2806_);
v___x_2808_ = l_ReaderT_instMonad___redArg(v___x_2807_);
v___x_2809_ = l_StateRefT_x27_instMonad___redArg(v___x_2808_);
v___x_2810_ = l_ReaderT_instMonad___redArg(v___x_2809_);
v___x_2811_ = l_ReaderT_instMonad___redArg(v___x_2810_);
v___x_2812_ = l_StateRefT_x27_instMonad___redArg(v___x_2811_);
v___x_2813_ = l_ReaderT_instMonad___redArg(v___x_2812_);
v___x_2814_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_2815_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toCold_2816_ = lean_ctor_get(v_a_2745_, 0);
v_options_2817_ = lean_ctor_get(v_toCold_2816_, 2);
v_hasTrace_2818_ = lean_ctor_get_uint8(v_options_2817_, sizeof(void*)*1);
if (v_hasTrace_2818_ == 0)
{
lean_dec_ref(v___x_2813_);
v___y_2749_ = v_a_2737_;
goto v___jp_2748_;
}
else
{
lean_object* v_toMonadRef_2819_; lean_object* v_inheritedTraceOptions_2820_; lean_object* v_cls_2821_; lean_object* v___x_2822_; uint8_t v___x_2823_; 
v_toMonadRef_2819_ = lean_ctor_get(v___x_2815_, 0);
v_inheritedTraceOptions_2820_ = lean_ctor_get(v_toCold_2816_, 11);
v_cls_2821_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2822_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_2823_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2820_, v_options_2817_, v___x_2822_);
if (v___x_2823_ == 0)
{
lean_dec_ref(v___x_2813_);
v___y_2749_ = v_a_2737_;
goto v___jp_2748_;
}
else
{
lean_object* v_type_2824_; lean_object* v___f_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_5559__overap_2829_; lean_object* v___x_2830_; 
v_type_2824_ = lean_ctor_get(v_hyp_2735_, 1);
v___f_2825_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_2826_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37);
lean_inc_ref(v_type_2824_);
v___x_2827_ = l_Lean_MessageData_ofExpr(v_type_2824_);
v___x_2828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2826_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
lean_inc_ref(v_toMonadRef_2819_);
v___x_5559__overap_2829_ = l_Lean_addTrace___redArg(v___x_2813_, v___x_2814_, v_toMonadRef_2819_, v___f_2825_, v_cls_2821_, v___x_2828_);
lean_inc(v_a_2746_);
lean_inc_ref(v_a_2745_);
lean_inc(v_a_2744_);
lean_inc_ref(v_a_2743_);
lean_inc(v_a_2742_);
lean_inc_ref(v_a_2741_);
lean_inc(v_a_2740_);
lean_inc_ref(v_a_2739_);
lean_inc(v_a_2738_);
lean_inc(v_a_2737_);
lean_inc_ref(v_a_2736_);
v___x_2830_ = lean_apply_12(v___x_5559__overap_2829_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, lean_box(0));
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_dec_ref_known(v___x_2830_, 1);
v___y_2749_ = v_a_2737_;
goto v___jp_2748_;
}
else
{
lean_dec_ref(v_hyp_2735_);
return v___x_2830_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object* v_hyp_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(v_hyp_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_, v_a_2846_, v_a_2847_, v_a_2848_);
lean_dec(v_a_2848_);
lean_dec_ref(v_a_2847_);
lean_dec(v_a_2846_);
lean_dec_ref(v_a_2845_);
lean_dec(v_a_2844_);
lean_dec_ref(v_a_2843_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
lean_dec(v_a_2840_);
lean_dec(v_a_2839_);
lean_dec_ref(v_a_2838_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object* v___x_2851_, lean_object* v___x_2852_, lean_object* v_toMonadRef_2853_, lean_object* v___f_2854_, lean_object* v_x_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
lean_object* v_toCold_2872_; lean_object* v_options_2873_; uint8_t v_hasTrace_2874_; 
v_toCold_2872_ = lean_ctor_get(v___y_2866_, 0);
v_options_2873_ = lean_ctor_get(v_toCold_2872_, 2);
v_hasTrace_2874_ = lean_ctor_get_uint8(v_options_2873_, sizeof(void*)*1);
if (v_hasTrace_2874_ == 0)
{
lean_dec_ref(v___y_2856_);
lean_dec(v___f_2854_);
lean_dec_ref(v_toMonadRef_2853_);
lean_dec_ref(v___x_2852_);
lean_dec_ref(v___x_2851_);
goto v___jp_2869_;
}
else
{
lean_object* v_inheritedTraceOptions_2875_; lean_object* v_cls_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; 
v_inheritedTraceOptions_2875_ = lean_ctor_get(v_toCold_2872_, 11);
v_cls_2876_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2877_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_2878_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2875_, v_options_2873_, v___x_2877_);
if (v___x_2878_ == 0)
{
lean_dec_ref(v___y_2856_);
lean_dec(v___f_2854_);
lean_dec_ref(v_toMonadRef_2853_);
lean_dec_ref(v___x_2852_);
lean_dec_ref(v___x_2851_);
goto v___jp_2869_;
}
else
{
lean_object* v_type_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_6480__overap_2883_; lean_object* v___x_2884_; 
v_type_2879_ = lean_ctor_get(v___y_2856_, 1);
lean_inc_ref(v_type_2879_);
lean_dec_ref(v___y_2856_);
v___x_2880_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37);
v___x_2881_ = l_Lean_MessageData_ofExpr(v_type_2879_);
v___x_2882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___x_6480__overap_2883_ = l_Lean_addTrace___redArg(v___x_2851_, v___x_2852_, v_toMonadRef_2853_, v___f_2854_, v_cls_2876_, v___x_2882_);
lean_inc(v___y_2867_);
lean_inc_ref(v___y_2866_);
lean_inc(v___y_2865_);
lean_inc_ref(v___y_2864_);
lean_inc(v___y_2863_);
lean_inc_ref(v___y_2862_);
lean_inc(v___y_2861_);
lean_inc_ref(v___y_2860_);
lean_inc(v___y_2859_);
lean_inc(v___y_2858_);
lean_inc_ref(v___y_2857_);
v___x_2884_ = lean_apply_12(v___x_6480__overap_2883_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, lean_box(0));
return v___x_2884_;
}
}
v___jp_2869_:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2870_ = lean_box(0);
v___x_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
return v___x_2871_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object** _args){
lean_object* v___x_2885_ = _args[0];
lean_object* v___x_2886_ = _args[1];
lean_object* v_toMonadRef_2887_ = _args[2];
lean_object* v___f_2888_ = _args[3];
lean_object* v_x_2889_ = _args[4];
lean_object* v___y_2890_ = _args[5];
lean_object* v___y_2891_ = _args[6];
lean_object* v___y_2892_ = _args[7];
lean_object* v___y_2893_ = _args[8];
lean_object* v___y_2894_ = _args[9];
lean_object* v___y_2895_ = _args[10];
lean_object* v___y_2896_ = _args[11];
lean_object* v___y_2897_ = _args[12];
lean_object* v___y_2898_ = _args[13];
lean_object* v___y_2899_ = _args[14];
lean_object* v___y_2900_ = _args[15];
lean_object* v___y_2901_ = _args[16];
lean_object* v___y_2902_ = _args[17];
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(v___x_2885_, v___x_2886_, v_toMonadRef_2887_, v___f_2888_, v_x_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object* v_hyps_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v___x_2935_; lean_object* v_toApplicative_2936_; lean_object* v_toFunctor_2937_; lean_object* v_toSeq_2938_; lean_object* v_toSeqLeft_2939_; lean_object* v_toSeqRight_2940_; lean_object* v___f_2941_; lean_object* v___f_2942_; lean_object* v___f_2943_; lean_object* v___f_2944_; lean_object* v___x_2945_; lean_object* v___f_2946_; lean_object* v___f_2947_; lean_object* v___f_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v_toApplicative_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2999_; 
v___x_2935_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_2936_ = lean_ctor_get(v___x_2935_, 0);
v_toFunctor_2937_ = lean_ctor_get(v_toApplicative_2936_, 0);
v_toSeq_2938_ = lean_ctor_get(v_toApplicative_2936_, 2);
v_toSeqLeft_2939_ = lean_ctor_get(v_toApplicative_2936_, 3);
v_toSeqRight_2940_ = lean_ctor_get(v_toApplicative_2936_, 4);
v___f_2941_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_2942_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_2937_, 2);
v___f_2943_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2943_, 0, v_toFunctor_2937_);
v___f_2944_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2944_, 0, v_toFunctor_2937_);
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___f_2943_);
lean_ctor_set(v___x_2945_, 1, v___f_2944_);
lean_inc(v_toSeqRight_2940_);
v___f_2946_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2946_, 0, v_toSeqRight_2940_);
lean_inc(v_toSeqLeft_2939_);
v___f_2947_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2947_, 0, v_toSeqLeft_2939_);
lean_inc(v_toSeq_2938_);
v___f_2948_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2948_, 0, v_toSeq_2938_);
v___x_2949_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2945_);
lean_ctor_set(v___x_2949_, 1, v___f_2941_);
lean_ctor_set(v___x_2949_, 2, v___f_2948_);
lean_ctor_set(v___x_2949_, 3, v___f_2947_);
lean_ctor_set(v___x_2949_, 4, v___f_2946_);
v___x_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
lean_ctor_set(v___x_2950_, 1, v___f_2942_);
v___x_2951_ = l_StateRefT_x27_instMonad___redArg(v___x_2950_);
v_toApplicative_2952_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2999_ == 0)
{
lean_object* v_unused_3000_; 
v_unused_3000_ = lean_ctor_get(v___x_2951_, 1);
lean_dec(v_unused_3000_);
v___x_2954_ = v___x_2951_;
v_isShared_2955_ = v_isSharedCheck_2999_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_toApplicative_2952_);
lean_dec(v___x_2951_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2999_;
goto v_resetjp_2953_;
}
v___jp_2917_:
{
lean_object* v___x_2918_; lean_object* v_caches_2919_; lean_object* v_typeAnalysis_2920_; lean_object* v_target_2921_; lean_object* v_hypotheses_2922_; uint8_t v_didChange_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2934_; 
v___x_2918_ = lean_st_ref_take(v_a_2906_);
v_caches_2919_ = lean_ctor_get(v___x_2918_, 0);
v_typeAnalysis_2920_ = lean_ctor_get(v___x_2918_, 1);
v_target_2921_ = lean_ctor_get(v___x_2918_, 2);
v_hypotheses_2922_ = lean_ctor_get(v___x_2918_, 3);
v_didChange_2923_ = lean_ctor_get_uint8(v___x_2918_, sizeof(void*)*4);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2925_ = v___x_2918_;
v_isShared_2926_ = v_isSharedCheck_2934_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_hypotheses_2922_);
lean_inc(v_target_2921_);
lean_inc(v_typeAnalysis_2920_);
lean_inc(v_caches_2919_);
lean_dec(v___x_2918_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2934_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2930_; 
v___x_2927_ = lean_box(0);
v___x_2928_ = l_Array_append___redArg(v_hypotheses_2922_, v_hyps_2904_);
lean_dec_ref(v_hyps_2904_);
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 3, v___x_2928_);
v___x_2930_ = v___x_2925_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_caches_2919_);
lean_ctor_set(v_reuseFailAlloc_2933_, 1, v_typeAnalysis_2920_);
lean_ctor_set(v_reuseFailAlloc_2933_, 2, v_target_2921_);
lean_ctor_set(v_reuseFailAlloc_2933_, 3, v___x_2928_);
lean_ctor_set_uint8(v_reuseFailAlloc_2933_, sizeof(void*)*4, v_didChange_2923_);
v___x_2930_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lean_st_ref_put(v_a_2906_, v___x_2930_);
v___x_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2927_);
return v___x_2932_;
}
}
}
v_resetjp_2953_:
{
lean_object* v_toFunctor_2956_; lean_object* v_toSeq_2957_; lean_object* v_toSeqLeft_2958_; lean_object* v_toSeqRight_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2997_; 
v_toFunctor_2956_ = lean_ctor_get(v_toApplicative_2952_, 0);
v_toSeq_2957_ = lean_ctor_get(v_toApplicative_2952_, 2);
v_toSeqLeft_2958_ = lean_ctor_get(v_toApplicative_2952_, 3);
v_toSeqRight_2959_ = lean_ctor_get(v_toApplicative_2952_, 4);
v_isSharedCheck_2997_ = !lean_is_exclusive(v_toApplicative_2952_);
if (v_isSharedCheck_2997_ == 0)
{
lean_object* v_unused_2998_; 
v_unused_2998_ = lean_ctor_get(v_toApplicative_2952_, 1);
lean_dec(v_unused_2998_);
v___x_2961_ = v_toApplicative_2952_;
v_isShared_2962_ = v_isSharedCheck_2997_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_toSeqRight_2959_);
lean_inc(v_toSeqLeft_2958_);
lean_inc(v_toSeq_2957_);
lean_inc(v_toFunctor_2956_);
lean_dec(v_toApplicative_2952_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2997_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___f_2963_; lean_object* v___f_2964_; lean_object* v___f_2965_; lean_object* v___f_2966_; lean_object* v___x_2967_; lean_object* v___f_2968_; lean_object* v___f_2969_; lean_object* v___f_2970_; lean_object* v___x_2972_; 
v___f_2963_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_2964_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_2956_);
v___f_2965_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2965_, 0, v_toFunctor_2956_);
v___f_2966_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2966_, 0, v_toFunctor_2956_);
v___x_2967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2967_, 0, v___f_2965_);
lean_ctor_set(v___x_2967_, 1, v___f_2966_);
v___f_2968_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2968_, 0, v_toSeqRight_2959_);
v___f_2969_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2969_, 0, v_toSeqLeft_2958_);
v___f_2970_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2970_, 0, v_toSeq_2957_);
if (v_isShared_2962_ == 0)
{
lean_ctor_set(v___x_2961_, 4, v___f_2968_);
lean_ctor_set(v___x_2961_, 3, v___f_2969_);
lean_ctor_set(v___x_2961_, 2, v___f_2970_);
lean_ctor_set(v___x_2961_, 1, v___f_2963_);
lean_ctor_set(v___x_2961_, 0, v___x_2967_);
v___x_2972_ = v___x_2961_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2967_);
lean_ctor_set(v_reuseFailAlloc_2996_, 1, v___f_2963_);
lean_ctor_set(v_reuseFailAlloc_2996_, 2, v___f_2970_);
lean_ctor_set(v_reuseFailAlloc_2996_, 3, v___f_2969_);
lean_ctor_set(v_reuseFailAlloc_2996_, 4, v___f_2968_);
v___x_2972_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
lean_object* v___x_2974_; 
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 1, v___f_2964_);
lean_ctor_set(v___x_2954_, 0, v___x_2972_);
v___x_2974_ = v___x_2954_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2972_);
lean_ctor_set(v_reuseFailAlloc_2995_, 1, v___f_2964_);
v___x_2974_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v_toMonadRef_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; 
v___x_2975_ = l_StateRefT_x27_instMonad___redArg(v___x_2974_);
v___x_2976_ = l_ReaderT_instMonad___redArg(v___x_2975_);
v___x_2977_ = l_StateRefT_x27_instMonad___redArg(v___x_2976_);
v___x_2978_ = l_ReaderT_instMonad___redArg(v___x_2977_);
v___x_2979_ = l_ReaderT_instMonad___redArg(v___x_2978_);
v___x_2980_ = l_StateRefT_x27_instMonad___redArg(v___x_2979_);
v___x_2981_ = l_ReaderT_instMonad___redArg(v___x_2980_);
v___x_2982_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_2983_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_2984_ = lean_ctor_get(v___x_2983_, 0);
v___x_2985_ = lean_unsigned_to_nat(0u);
v___x_2986_ = lean_array_get_size(v_hyps_2904_);
v___x_2987_ = lean_nat_dec_lt(v___x_2985_, v___x_2986_);
if (v___x_2987_ == 0)
{
lean_dec_ref(v___x_2981_);
goto v___jp_2917_;
}
else
{
lean_object* v___f_2988_; lean_object* v___f_2989_; lean_object* v___x_2990_; size_t v___x_2991_; size_t v___x_2992_; lean_object* v___x_6128__overap_2993_; lean_object* v___x_2994_; 
v___f_2988_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
lean_inc_ref(v_toMonadRef_2984_);
lean_inc_ref(v___x_2981_);
v___f_2989_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed), 18, 4);
lean_closure_set(v___f_2989_, 0, v___x_2981_);
lean_closure_set(v___f_2989_, 1, v___x_2982_);
lean_closure_set(v___f_2989_, 2, v_toMonadRef_2984_);
lean_closure_set(v___f_2989_, 3, v___f_2988_);
v___x_2990_ = lean_box(0);
v___x_2991_ = ((size_t)0ULL);
v___x_2992_ = lean_usize_of_nat(v___x_2986_);
lean_inc_ref(v_hyps_2904_);
v___x_6128__overap_2993_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2981_, v___f_2989_, v_hyps_2904_, v___x_2991_, v___x_2992_, v___x_2990_);
lean_inc(v_a_2915_);
lean_inc_ref(v_a_2914_);
lean_inc(v_a_2913_);
lean_inc_ref(v_a_2912_);
lean_inc(v_a_2911_);
lean_inc_ref(v_a_2910_);
lean_inc(v_a_2909_);
lean_inc_ref(v_a_2908_);
lean_inc(v_a_2907_);
lean_inc(v_a_2906_);
lean_inc_ref(v_a_2905_);
v___x_2994_ = lean_apply_12(v___x_6128__overap_2993_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_, lean_box(0));
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_dec_ref_known(v___x_2994_, 1);
goto v___jp_2917_;
}
else
{
lean_dec_ref(v_hyps_2904_);
return v___x_2994_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object* v_hyps_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(v_hyps_3001_, v_a_3002_, v_a_3003_, v_a_3004_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_, v_a_3011_, v_a_3012_);
lean_dec(v_a_3012_);
lean_dec_ref(v_a_3011_);
lean_dec(v_a_3010_);
lean_dec_ref(v_a_3009_);
lean_dec(v_a_3008_);
lean_dec_ref(v_a_3007_);
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec(v_a_3003_);
lean_dec_ref(v_a_3002_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object* v_a_3015_){
_start:
{
lean_object* v___x_3017_; lean_object* v_hypotheses_3018_; lean_object* v___x_3019_; 
v___x_3017_ = lean_st_ref_get(v_a_3015_);
v_hypotheses_3018_ = lean_ctor_get(v___x_3017_, 3);
lean_inc_ref(v_hypotheses_3018_);
lean_dec(v___x_3017_);
v___x_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3019_, 0, v_hypotheses_3018_);
return v___x_3019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object* v_a_3020_, lean_object* v_a_3021_){
_start:
{
lean_object* v_res_3022_; 
v_res_3022_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(v_a_3020_);
lean_dec(v_a_3020_);
return v_res_3022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_){
_start:
{
lean_object* v___x_3035_; lean_object* v_hypotheses_3036_; lean_object* v___x_3037_; 
v___x_3035_ = lean_st_ref_get(v_a_3024_);
v_hypotheses_3036_ = lean_ctor_get(v___x_3035_, 3);
lean_inc_ref(v_hypotheses_3036_);
lean_dec(v___x_3035_);
v___x_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_hypotheses_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_, v_a_3046_, v_a_3047_, v_a_3048_);
lean_dec(v_a_3048_);
lean_dec_ref(v_a_3047_);
lean_dec(v_a_3046_);
lean_dec_ref(v_a_3045_);
lean_dec(v_a_3044_);
lean_dec_ref(v_a_3043_);
lean_dec(v_a_3042_);
lean_dec_ref(v_a_3041_);
lean_dec(v_a_3040_);
lean_dec(v_a_3039_);
lean_dec_ref(v_a_3038_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object* v_hyps_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v___x_3064_; lean_object* v_caches_3065_; lean_object* v_typeAnalysis_3066_; lean_object* v_target_3067_; uint8_t v_didChange_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3078_; 
v___x_3064_ = lean_st_ref_take(v___y_3053_);
v_caches_3065_ = lean_ctor_get(v___x_3064_, 0);
v_typeAnalysis_3066_ = lean_ctor_get(v___x_3064_, 1);
v_target_3067_ = lean_ctor_get(v___x_3064_, 2);
v_didChange_3068_ = lean_ctor_get_uint8(v___x_3064_, sizeof(void*)*4);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3078_ == 0)
{
lean_object* v_unused_3079_; 
v_unused_3079_ = lean_ctor_get(v___x_3064_, 3);
lean_dec(v_unused_3079_);
v___x_3070_ = v___x_3064_;
v_isShared_3071_ = v_isSharedCheck_3078_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_target_3067_);
lean_inc(v_typeAnalysis_3066_);
lean_inc(v_caches_3065_);
lean_dec(v___x_3064_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3078_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3072_ = lean_box(0);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 3, v_hyps_3051_);
v___x_3074_ = v___x_3070_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_caches_3065_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v_typeAnalysis_3066_);
lean_ctor_set(v_reuseFailAlloc_3077_, 2, v_target_3067_);
lean_ctor_set(v_reuseFailAlloc_3077_, 3, v_hyps_3051_);
lean_ctor_set_uint8(v_reuseFailAlloc_3077_, sizeof(void*)*4, v_didChange_3068_);
v___x_3074_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = lean_st_ref_put(v___y_3053_, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3072_);
return v___x_3076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object* v_hyps_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(v_hyps_3080_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
lean_dec(v___y_3083_);
lean_dec(v___y_3082_);
lean_dec_ref(v___y_3081_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object* v_inst_3094_, lean_object* v_hyps_3095_){
_start:
{
lean_object* v___f_3096_; lean_object* v___x_3097_; 
v___f_3096_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_3096_, 0, v_hyps_3095_);
v___x_3097_ = lean_apply_2(v_inst_3094_, lean_box(0), v___f_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_){
_start:
{
lean_object* v___x_3110_; lean_object* v_caches_3111_; lean_object* v_typeAnalysis_3112_; lean_object* v_target_3113_; uint8_t v_didChange_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3125_; 
v___x_3110_ = lean_st_ref_take(v___y_3099_);
v_caches_3111_ = lean_ctor_get(v___x_3110_, 0);
v_typeAnalysis_3112_ = lean_ctor_get(v___x_3110_, 1);
v_target_3113_ = lean_ctor_get(v___x_3110_, 2);
v_didChange_3114_ = lean_ctor_get_uint8(v___x_3110_, sizeof(void*)*4);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3125_ == 0)
{
lean_object* v_unused_3126_; 
v_unused_3126_ = lean_ctor_get(v___x_3110_, 3);
lean_dec(v_unused_3126_);
v___x_3116_ = v___x_3110_;
v_isShared_3117_ = v_isSharedCheck_3125_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_target_3113_);
lean_inc(v_typeAnalysis_3112_);
lean_inc(v_caches_3111_);
lean_dec(v___x_3110_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3125_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3121_; 
v___x_3118_ = lean_box(0);
v___x_3119_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 3, v___x_3119_);
v___x_3121_ = v___x_3116_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_caches_3111_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v_typeAnalysis_3112_);
lean_ctor_set(v_reuseFailAlloc_3124_, 2, v_target_3113_);
lean_ctor_set(v_reuseFailAlloc_3124_, 3, v___x_3119_);
lean_ctor_set_uint8(v_reuseFailAlloc_3124_, sizeof(void*)*4, v_didChange_3114_);
v___x_3121_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_st_ref_put(v___y_3099_, v___x_3121_);
v___x_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3118_);
return v___x_3123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
lean_dec(v___y_3133_);
lean_dec_ref(v___y_3132_);
lean_dec(v___y_3131_);
lean_dec_ref(v___y_3130_);
lean_dec(v___y_3129_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object* v_toPure_3140_, lean_object* v_cls_3141_, lean_object* v_____do__lift_3142_, lean_object* v_____do__lift_3143_){
_start:
{
uint8_t v_hasTrace_3144_; 
v_hasTrace_3144_ = lean_ctor_get_uint8(v_____do__lift_3143_, sizeof(void*)*1);
if (v_hasTrace_3144_ == 0)
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
lean_dec(v_cls_3141_);
v___x_3145_ = lean_box(v_hasTrace_3144_);
v___x_3146_ = lean_apply_2(v_toPure_3140_, lean_box(0), v___x_3145_);
return v___x_3146_;
}
else
{
lean_object* v___x_3147_; lean_object* v___x_3148_; uint8_t v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3147_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_3148_ = l_Lean_Name_append(v___x_3147_, v_cls_3141_);
v___x_3149_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_3142_, v_____do__lift_3143_, v___x_3148_);
lean_dec(v___x_3148_);
v___x_3150_ = lean_box(v___x_3149_);
v___x_3151_ = lean_apply_2(v_toPure_3140_, lean_box(0), v___x_3150_);
return v___x_3151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object* v_toPure_3152_, lean_object* v_cls_3153_, lean_object* v_____do__lift_3154_, lean_object* v_____do__lift_3155_){
_start:
{
lean_object* v_res_3156_; 
v_res_3156_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(v_toPure_3152_, v_cls_3153_, v_____do__lift_3154_, v_____do__lift_3155_);
lean_dec_ref(v_____do__lift_3155_);
lean_dec_ref(v_____do__lift_3154_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object* v_inst_3157_, lean_object* v_toPure_3158_, lean_object* v_cls_3159_, lean_object* v_toBind_3160_, lean_object* v_____do__lift_3161_){
_start:
{
lean_object* v_getOptionsUnrestricted_3162_; lean_object* v___f_3163_; lean_object* v___x_3164_; 
v_getOptionsUnrestricted_3162_ = lean_ctor_get(v_inst_3157_, 1);
lean_inc(v_getOptionsUnrestricted_3162_);
lean_dec_ref(v_inst_3157_);
v___f_3163_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_3163_, 0, v_toPure_3158_);
lean_closure_set(v___f_3163_, 1, v_cls_3159_);
lean_closure_set(v___f_3163_, 2, v_____do__lift_3161_);
v___x_3164_ = lean_apply_4(v_toBind_3160_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_3162_, v___f_3163_);
return v___x_3164_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0));
v___x_3167_ = l_Lean_stringToMessageData(v___x_3166_);
return v___x_3167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object* v_toPure_3168_, lean_object* v_a_3169_, lean_object* v___y_3170_, lean_object* v_inst_3171_, lean_object* v_inst_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_cls_3175_, uint8_t v_____do__lift_3176_){
_start:
{
if (v_____do__lift_3176_ == 0)
{
lean_object* v___x_3177_; lean_object* v___x_3178_; 
lean_dec(v_cls_3175_);
lean_dec(v_inst_3174_);
lean_dec_ref(v_inst_3173_);
lean_dec_ref(v_inst_3172_);
lean_dec_ref(v_inst_3171_);
lean_dec_ref(v___y_3170_);
lean_dec_ref(v_a_3169_);
v___x_3177_ = lean_box(0);
v___x_3178_ = lean_apply_2(v_toPure_3168_, lean_box(0), v___x_3177_);
return v___x_3178_;
}
else
{
lean_object* v_type_3179_; lean_object* v_type_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
lean_dec(v_toPure_3168_);
v_type_3179_ = lean_ctor_get(v_a_3169_, 1);
lean_inc_ref(v_type_3179_);
lean_dec_ref(v_a_3169_);
v_type_3180_ = lean_ctor_get(v___y_3170_, 1);
lean_inc_ref(v_type_3180_);
lean_dec_ref(v___y_3170_);
v___x_3181_ = l_Lean_MessageData_ofExpr(v_type_3179_);
v___x_3182_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3181_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
v___x_3184_ = l_Lean_MessageData_ofExpr(v_type_3180_);
v___x_3185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3183_);
lean_ctor_set(v___x_3185_, 1, v___x_3184_);
v___x_3186_ = l_Lean_addTrace___redArg(v_inst_3171_, v_inst_3172_, v_inst_3173_, v_inst_3174_, v_cls_3175_, v___x_3185_);
return v___x_3186_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object* v_toPure_3187_, lean_object* v_a_3188_, lean_object* v___y_3189_, lean_object* v_inst_3190_, lean_object* v_inst_3191_, lean_object* v_inst_3192_, lean_object* v_inst_3193_, lean_object* v_cls_3194_, lean_object* v_____do__lift_3195_){
_start:
{
uint8_t v_____do__lift_3162__boxed_3196_; lean_object* v_res_3197_; 
v_____do__lift_3162__boxed_3196_ = lean_unbox(v_____do__lift_3195_);
v_res_3197_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(v_toPure_3187_, v_a_3188_, v___y_3189_, v_inst_3190_, v_inst_3191_, v_inst_3192_, v_inst_3193_, v_cls_3194_, v_____do__lift_3162__boxed_3196_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object* v_inst_3198_, lean_object* v_inst_3199_, lean_object* v_toPure_3200_, lean_object* v_toBind_3201_, lean_object* v_a_3202_, lean_object* v_inst_3203_, lean_object* v_inst_3204_, lean_object* v_inst_3205_, lean_object* v_x_3206_, lean_object* v___y_3207_){
_start:
{
lean_object* v_getInheritedTraceOptions_3208_; lean_object* v_cls_3209_; lean_object* v___f_3210_; lean_object* v___f_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v_getInheritedTraceOptions_3208_ = lean_ctor_get(v_inst_3198_, 2);
lean_inc(v_getInheritedTraceOptions_3208_);
v_cls_3209_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
lean_inc_n(v_toBind_3201_, 2);
lean_inc(v_toPure_3200_);
v___f_3210_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3210_, 0, v_inst_3199_);
lean_closure_set(v___f_3210_, 1, v_toPure_3200_);
lean_closure_set(v___f_3210_, 2, v_cls_3209_);
lean_closure_set(v___f_3210_, 3, v_toBind_3201_);
v___f_3211_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_3211_, 0, v_toPure_3200_);
lean_closure_set(v___f_3211_, 1, v_a_3202_);
lean_closure_set(v___f_3211_, 2, v___y_3207_);
lean_closure_set(v___f_3211_, 3, v_inst_3203_);
lean_closure_set(v___f_3211_, 4, v_inst_3198_);
lean_closure_set(v___f_3211_, 5, v_inst_3204_);
lean_closure_set(v___f_3211_, 6, v_inst_3205_);
lean_closure_set(v___f_3211_, 7, v_cls_3209_);
v___x_3212_ = lean_apply_4(v_toBind_3201_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3208_, v___f_3210_);
v___x_3213_ = lean_apply_4(v_toBind_3201_, lean_box(0), lean_box(0), v___x_3212_, v___f_3211_);
return v___x_3213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object* v_toPure_3214_, lean_object* v_res_3215_, lean_object* v_____r_3216_){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = lean_apply_2(v_toPure_3214_, lean_box(0), v_res_3215_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object* v_inst_3218_, lean_object* v_toBind_3219_, lean_object* v___f_3220_, lean_object* v_____r_3221_){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3222_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed), 12, 0);
v___x_3223_ = lean_apply_2(v_inst_3218_, lean_box(0), v___x_3222_);
v___x_3224_ = lean_apply_4(v_toBind_3219_, lean_box(0), lean_box(0), v___x_3223_, v___f_3220_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object* v___f_3225_, lean_object* v_____r_3226_){
_start:
{
lean_object* v___x_3227_; 
v___x_3227_ = lean_apply_1(v___f_3225_, v_____r_3226_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object* v___f_3228_, lean_object* v_type_3229_, lean_object* v_type_3230_, lean_object* v_inst_3231_, lean_object* v_inst_3232_, lean_object* v_inst_3233_, lean_object* v_inst_3234_, lean_object* v_cls_3235_, lean_object* v_toBind_3236_, lean_object* v___f_3237_, uint8_t v_____do__lift_3238_){
_start:
{
if (v_____do__lift_3238_ == 0)
{
lean_object* v___x_3239_; lean_object* v___x_3240_; 
lean_dec(v___f_3237_);
lean_dec(v_toBind_3236_);
lean_dec(v_cls_3235_);
lean_dec(v_inst_3234_);
lean_dec_ref(v_inst_3233_);
lean_dec_ref(v_inst_3232_);
lean_dec_ref(v_inst_3231_);
lean_dec_ref(v_type_3230_);
lean_dec_ref(v_type_3229_);
v___x_3239_ = lean_box(0);
v___x_3240_ = lean_apply_1(v___f_3228_, v___x_3239_);
return v___x_3240_;
}
else
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
lean_dec(v___f_3228_);
v___x_3241_ = l_Lean_MessageData_ofExpr(v_type_3229_);
v___x_3242_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3241_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = l_Lean_MessageData_ofExpr(v_type_3230_);
v___x_3245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3243_);
lean_ctor_set(v___x_3245_, 1, v___x_3244_);
v___x_3246_ = l_Lean_addTrace___redArg(v_inst_3231_, v_inst_3232_, v_inst_3233_, v_inst_3234_, v_cls_3235_, v___x_3245_);
v___x_3247_ = lean_apply_4(v_toBind_3236_, lean_box(0), lean_box(0), v___x_3246_, v___f_3237_);
return v___x_3247_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object* v___f_3248_, lean_object* v_type_3249_, lean_object* v_type_3250_, lean_object* v_inst_3251_, lean_object* v_inst_3252_, lean_object* v_inst_3253_, lean_object* v_inst_3254_, lean_object* v_cls_3255_, lean_object* v_toBind_3256_, lean_object* v___f_3257_, lean_object* v_____do__lift_3258_){
_start:
{
uint8_t v_____do__lift_3262__boxed_3259_; lean_object* v_res_3260_; 
v_____do__lift_3262__boxed_3259_ = lean_unbox(v_____do__lift_3258_);
v_res_3260_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(v___f_3248_, v_type_3249_, v_type_3250_, v_inst_3251_, v_inst_3252_, v_inst_3253_, v_inst_3254_, v_cls_3255_, v_toBind_3256_, v___f_3257_, v_____do__lift_3262__boxed_3259_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object* v_toPure_3261_, lean_object* v_inst_3262_, lean_object* v_toBind_3263_, lean_object* v_inst_3264_, lean_object* v___f_3265_, lean_object* v_a_3266_, lean_object* v_inst_3267_, lean_object* v_inst_3268_, lean_object* v_inst_3269_, lean_object* v_inst_3270_, lean_object* v___f_3271_, lean_object* v_res_3272_){
_start:
{
lean_object* v___x_3273_; lean_object* v_zero_3274_; uint8_t v_isZero_3275_; 
v___x_3273_ = lean_array_get_size(v_res_3272_);
v_zero_3274_ = lean_unsigned_to_nat(0u);
v_isZero_3275_ = lean_nat_dec_eq(v___x_3273_, v_zero_3274_);
if (v_isZero_3275_ == 1)
{
lean_object* v___f_3276_; lean_object* v___f_3277_; lean_object* v___x_3278_; uint8_t v___x_3279_; 
lean_dec(v___f_3271_);
lean_dec(v_inst_3270_);
lean_dec_ref(v_inst_3269_);
lean_dec_ref(v_inst_3268_);
lean_dec_ref(v_inst_3267_);
lean_dec_ref(v_a_3266_);
lean_inc_ref(v_res_3272_);
lean_inc(v_toPure_3261_);
v___f_3276_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3276_, 0, v_toPure_3261_);
lean_closure_set(v___f_3276_, 1, v_res_3272_);
lean_inc(v_toBind_3263_);
v___f_3277_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3277_, 0, v_inst_3262_);
lean_closure_set(v___f_3277_, 1, v_toBind_3263_);
lean_closure_set(v___f_3277_, 2, v___f_3276_);
v___x_3278_ = lean_box(0);
v___x_3279_ = lean_nat_dec_lt(v_zero_3274_, v___x_3273_);
if (v___x_3279_ == 0)
{
lean_object* v___x_3280_; lean_object* v___x_3281_; 
lean_dec_ref(v_res_3272_);
lean_dec(v___f_3265_);
lean_dec_ref(v_inst_3264_);
v___x_3280_ = lean_apply_2(v_toPure_3261_, lean_box(0), v___x_3278_);
v___x_3281_ = lean_apply_4(v_toBind_3263_, lean_box(0), lean_box(0), v___x_3280_, v___f_3277_);
return v___x_3281_;
}
else
{
size_t v___x_3282_; size_t v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_dec(v_toPure_3261_);
v___x_3282_ = ((size_t)0ULL);
v___x_3283_ = lean_usize_of_nat(v___x_3273_);
v___x_3284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3264_, v___f_3265_, v_res_3272_, v___x_3282_, v___x_3283_, v___x_3278_);
v___x_3285_ = lean_apply_4(v_toBind_3263_, lean_box(0), lean_box(0), v___x_3284_, v___f_3277_);
return v___x_3285_;
}
}
else
{
lean_object* v_one_3286_; lean_object* v_n_3287_; uint8_t v_isZero_3288_; 
lean_dec(v___f_3265_);
v_one_3286_ = lean_unsigned_to_nat(1u);
v_n_3287_ = lean_nat_sub(v___x_3273_, v_one_3286_);
v_isZero_3288_ = lean_nat_dec_eq(v_n_3287_, v_zero_3274_);
lean_dec(v_n_3287_);
if (v_isZero_3288_ == 1)
{
lean_object* v_newHyp_3289_; lean_object* v_type_3290_; lean_object* v_type_3291_; uint8_t v___x_3292_; 
lean_dec(v___f_3271_);
v_newHyp_3289_ = lean_array_fget_borrowed(v_res_3272_, v_zero_3274_);
v_type_3290_ = lean_ctor_get(v_newHyp_3289_, 1);
v_type_3291_ = lean_ctor_get(v_a_3266_, 1);
lean_inc_ref(v_type_3291_);
lean_dec_ref(v_a_3266_);
v___x_3292_ = lean_expr_eqv(v_type_3290_, v_type_3291_);
if (v___x_3292_ == 0)
{
lean_object* v_getInheritedTraceOptions_3293_; lean_object* v___f_3294_; lean_object* v___f_3295_; lean_object* v___f_3296_; lean_object* v_cls_3297_; lean_object* v___f_3298_; lean_object* v___f_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; 
lean_inc_ref(v_type_3290_);
v_getInheritedTraceOptions_3293_ = lean_ctor_get(v_inst_3267_, 2);
lean_inc(v_getInheritedTraceOptions_3293_);
lean_inc(v_toPure_3261_);
v___f_3294_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3294_, 0, v_toPure_3261_);
lean_closure_set(v___f_3294_, 1, v_res_3272_);
lean_inc_n(v_toBind_3263_, 4);
v___f_3295_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3295_, 0, v_inst_3262_);
lean_closure_set(v___f_3295_, 1, v_toBind_3263_);
lean_closure_set(v___f_3295_, 2, v___f_3294_);
lean_inc_ref(v___f_3295_);
v___f_3296_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3296_, 0, v___f_3295_);
v_cls_3297_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___f_3298_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3298_, 0, v_inst_3268_);
lean_closure_set(v___f_3298_, 1, v_toPure_3261_);
lean_closure_set(v___f_3298_, 2, v_cls_3297_);
lean_closure_set(v___f_3298_, 3, v_toBind_3263_);
v___f_3299_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_3299_, 0, v___f_3295_);
lean_closure_set(v___f_3299_, 1, v_type_3291_);
lean_closure_set(v___f_3299_, 2, v_type_3290_);
lean_closure_set(v___f_3299_, 3, v_inst_3264_);
lean_closure_set(v___f_3299_, 4, v_inst_3267_);
lean_closure_set(v___f_3299_, 5, v_inst_3269_);
lean_closure_set(v___f_3299_, 6, v_inst_3270_);
lean_closure_set(v___f_3299_, 7, v_cls_3297_);
lean_closure_set(v___f_3299_, 8, v_toBind_3263_);
lean_closure_set(v___f_3299_, 9, v___f_3296_);
v___x_3300_ = lean_apply_4(v_toBind_3263_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3293_, v___f_3298_);
v___x_3301_ = lean_apply_4(v_toBind_3263_, lean_box(0), lean_box(0), v___x_3300_, v___f_3299_);
return v___x_3301_;
}
else
{
lean_object* v___x_3302_; 
lean_dec_ref(v_type_3291_);
lean_dec(v_inst_3270_);
lean_dec_ref(v_inst_3269_);
lean_dec_ref(v_inst_3268_);
lean_dec_ref(v_inst_3267_);
lean_dec_ref(v_inst_3264_);
lean_dec(v_toBind_3263_);
lean_dec(v_inst_3262_);
v___x_3302_ = lean_apply_2(v_toPure_3261_, lean_box(0), v_res_3272_);
return v___x_3302_;
}
}
else
{
lean_object* v___f_3303_; lean_object* v___f_3304_; lean_object* v___x_3305_; uint8_t v___x_3306_; 
lean_dec(v_inst_3270_);
lean_dec_ref(v_inst_3269_);
lean_dec_ref(v_inst_3268_);
lean_dec_ref(v_inst_3267_);
lean_dec_ref(v_a_3266_);
lean_inc_ref(v_res_3272_);
lean_inc(v_toPure_3261_);
v___f_3303_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3303_, 0, v_toPure_3261_);
lean_closure_set(v___f_3303_, 1, v_res_3272_);
lean_inc(v_toBind_3263_);
v___f_3304_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3304_, 0, v_inst_3262_);
lean_closure_set(v___f_3304_, 1, v_toBind_3263_);
lean_closure_set(v___f_3304_, 2, v___f_3303_);
v___x_3305_ = lean_box(0);
v___x_3306_ = lean_nat_dec_lt(v_zero_3274_, v___x_3273_);
if (v___x_3306_ == 0)
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
lean_dec_ref(v_res_3272_);
lean_dec(v___f_3271_);
lean_dec_ref(v_inst_3264_);
v___x_3307_ = lean_apply_2(v_toPure_3261_, lean_box(0), v___x_3305_);
v___x_3308_ = lean_apply_4(v_toBind_3263_, lean_box(0), lean_box(0), v___x_3307_, v___f_3304_);
return v___x_3308_;
}
else
{
size_t v___x_3309_; size_t v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
lean_dec(v_toPure_3261_);
v___x_3309_ = ((size_t)0ULL);
v___x_3310_ = lean_usize_of_nat(v___x_3273_);
v___x_3311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3264_, v___f_3271_, v_res_3272_, v___x_3309_, v___x_3310_, v___x_3305_);
v___x_3312_ = lean_apply_4(v_toBind_3263_, lean_box(0), lean_box(0), v___x_3311_, v___f_3304_);
return v___x_3312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object* v_bs_3313_, lean_object* v_toPure_3314_, lean_object* v_____do__lift_3315_){
_start:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = l_Array_append___redArg(v_bs_3313_, v_____do__lift_3315_);
v___x_3317_ = lean_apply_2(v_toPure_3314_, lean_box(0), v___x_3316_);
return v___x_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object* v_bs_3318_, lean_object* v_toPure_3319_, lean_object* v_____do__lift_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(v_bs_3318_, v_toPure_3319_, v_____do__lift_3320_);
lean_dec_ref(v_____do__lift_3320_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object* v_inst_3322_, lean_object* v_inst_3323_, lean_object* v_toPure_3324_, lean_object* v_toBind_3325_, lean_object* v_inst_3326_, lean_object* v_inst_3327_, lean_object* v_inst_3328_, lean_object* v_inst_3329_, lean_object* v_f_3330_, lean_object* v_bs_3331_, lean_object* v_a_3332_){
_start:
{
lean_object* v___f_3333_; lean_object* v___f_3334_; lean_object* v___f_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
lean_inc(v_inst_3328_);
lean_inc_ref(v_inst_3327_);
lean_inc_ref(v_inst_3326_);
lean_inc_ref_n(v_a_3332_, 2);
lean_inc_n(v_toBind_3325_, 3);
lean_inc_n(v_toPure_3324_, 2);
lean_inc_ref(v_inst_3323_);
lean_inc_ref(v_inst_3322_);
v___f_3333_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6), 10, 8);
lean_closure_set(v___f_3333_, 0, v_inst_3322_);
lean_closure_set(v___f_3333_, 1, v_inst_3323_);
lean_closure_set(v___f_3333_, 2, v_toPure_3324_);
lean_closure_set(v___f_3333_, 3, v_toBind_3325_);
lean_closure_set(v___f_3333_, 4, v_a_3332_);
lean_closure_set(v___f_3333_, 5, v_inst_3326_);
lean_closure_set(v___f_3333_, 6, v_inst_3327_);
lean_closure_set(v___f_3333_, 7, v_inst_3328_);
lean_inc_ref(v___f_3333_);
v___f_3334_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13), 12, 11);
lean_closure_set(v___f_3334_, 0, v_toPure_3324_);
lean_closure_set(v___f_3334_, 1, v_inst_3329_);
lean_closure_set(v___f_3334_, 2, v_toBind_3325_);
lean_closure_set(v___f_3334_, 3, v_inst_3326_);
lean_closure_set(v___f_3334_, 4, v___f_3333_);
lean_closure_set(v___f_3334_, 5, v_a_3332_);
lean_closure_set(v___f_3334_, 6, v_inst_3322_);
lean_closure_set(v___f_3334_, 7, v_inst_3323_);
lean_closure_set(v___f_3334_, 8, v_inst_3327_);
lean_closure_set(v___f_3334_, 9, v_inst_3328_);
lean_closure_set(v___f_3334_, 10, v___f_3333_);
v___f_3335_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed), 3, 2);
lean_closure_set(v___f_3335_, 0, v_bs_3331_);
lean_closure_set(v___f_3335_, 1, v_toPure_3324_);
v___x_3336_ = lean_apply_1(v_f_3330_, v_a_3332_);
v___x_3337_ = lean_apply_4(v_toBind_3325_, lean_box(0), lean_box(0), v___x_3336_, v___f_3334_);
v___x_3338_ = lean_apply_4(v_toBind_3325_, lean_box(0), lean_box(0), v___x_3337_, v___f_3335_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object* v_hyps_3341_, lean_object* v_toPure_3342_, lean_object* v_toBind_3343_, lean_object* v___f_3344_, lean_object* v_inst_3345_, lean_object* v___f_3346_, lean_object* v_____r_3347_){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; uint8_t v___x_3351_; 
v___x_3348_ = lean_unsigned_to_nat(0u);
v___x_3349_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0));
v___x_3350_ = lean_array_get_size(v_hyps_3341_);
v___x_3351_ = lean_nat_dec_lt(v___x_3348_, v___x_3350_);
if (v___x_3351_ == 0)
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
lean_dec(v___f_3346_);
lean_dec_ref(v_inst_3345_);
lean_dec_ref(v_hyps_3341_);
v___x_3352_ = lean_apply_2(v_toPure_3342_, lean_box(0), v___x_3349_);
v___x_3353_ = lean_apply_4(v_toBind_3343_, lean_box(0), lean_box(0), v___x_3352_, v___f_3344_);
return v___x_3353_;
}
else
{
size_t v___x_3354_; size_t v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
lean_dec(v_toPure_3342_);
v___x_3354_ = ((size_t)0ULL);
v___x_3355_ = lean_usize_of_nat(v___x_3350_);
v___x_3356_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3345_, v___f_3346_, v_hyps_3341_, v___x_3354_, v___x_3355_, v___x_3349_);
v___x_3357_ = lean_apply_4(v_toBind_3343_, lean_box(0), lean_box(0), v___x_3356_, v___f_3344_);
return v___x_3357_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object* v_toPure_3358_, lean_object* v_toBind_3359_, lean_object* v___f_3360_, lean_object* v_inst_3361_, lean_object* v___f_3362_, lean_object* v_inst_3363_, lean_object* v___f_3364_, lean_object* v_hyps_3365_){
_start:
{
lean_object* v___f_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_inc(v_toBind_3359_);
v___f_3366_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14), 7, 6);
lean_closure_set(v___f_3366_, 0, v_hyps_3365_);
lean_closure_set(v___f_3366_, 1, v_toPure_3358_);
lean_closure_set(v___f_3366_, 2, v_toBind_3359_);
lean_closure_set(v___f_3366_, 3, v___f_3360_);
lean_closure_set(v___f_3366_, 4, v_inst_3361_);
lean_closure_set(v___f_3366_, 5, v___f_3362_);
v___x_3367_ = lean_apply_2(v_inst_3363_, lean_box(0), v___f_3364_);
v___x_3368_ = lean_apply_4(v_toBind_3359_, lean_box(0), lean_box(0), v___x_3367_, v___f_3366_);
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object* v_inst_3370_, lean_object* v_inst_3371_, lean_object* v_inst_3372_, lean_object* v_inst_3373_, lean_object* v_inst_3374_, lean_object* v_inst_3375_, lean_object* v_f_3376_){
_start:
{
lean_object* v_toApplicative_3377_; lean_object* v_toBind_3378_; lean_object* v_toPure_3379_; lean_object* v___f_3380_; lean_object* v___f_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___f_3384_; lean_object* v___f_3385_; lean_object* v___x_3386_; 
v_toApplicative_3377_ = lean_ctor_get(v_inst_3370_, 0);
v_toBind_3378_ = lean_ctor_get(v_inst_3370_, 1);
lean_inc_n(v_toBind_3378_, 3);
v_toPure_3379_ = lean_ctor_get(v_toApplicative_3377_, 1);
lean_inc_n(v_toPure_3379_, 2);
lean_inc_n(v_inst_3375_, 3);
v___f_3380_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3380_, 0, v_inst_3375_);
v___f_3381_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_3382_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3383_ = lean_apply_2(v_inst_3375_, lean_box(0), v___x_3382_);
lean_inc_ref(v_inst_3370_);
v___f_3384_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_3384_, 0, v_inst_3371_);
lean_closure_set(v___f_3384_, 1, v_inst_3372_);
lean_closure_set(v___f_3384_, 2, v_toPure_3379_);
lean_closure_set(v___f_3384_, 3, v_toBind_3378_);
lean_closure_set(v___f_3384_, 4, v_inst_3370_);
lean_closure_set(v___f_3384_, 5, v_inst_3374_);
lean_closure_set(v___f_3384_, 6, v_inst_3373_);
lean_closure_set(v___f_3384_, 7, v_inst_3375_);
lean_closure_set(v___f_3384_, 8, v_f_3376_);
v___f_3385_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_3385_, 0, v_toPure_3379_);
lean_closure_set(v___f_3385_, 1, v_toBind_3378_);
lean_closure_set(v___f_3385_, 2, v___f_3380_);
lean_closure_set(v___f_3385_, 3, v_inst_3370_);
lean_closure_set(v___f_3385_, 4, v___f_3384_);
lean_closure_set(v___f_3385_, 5, v_inst_3375_);
lean_closure_set(v___f_3385_, 6, v___f_3381_);
v___x_3386_ = lean_apply_4(v_toBind_3378_, lean_box(0), lean_box(0), v___x_3383_, v___f_3385_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object* v_m_3387_, lean_object* v_inst_3388_, lean_object* v_inst_3389_, lean_object* v_inst_3390_, lean_object* v_inst_3391_, lean_object* v_inst_3392_, lean_object* v_inst_3393_, lean_object* v_f_3394_){
_start:
{
lean_object* v_toApplicative_3395_; lean_object* v_toBind_3396_; lean_object* v_toPure_3397_; lean_object* v___f_3398_; lean_object* v___f_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___f_3402_; lean_object* v___f_3403_; lean_object* v___x_3404_; 
v_toApplicative_3395_ = lean_ctor_get(v_inst_3388_, 0);
v_toBind_3396_ = lean_ctor_get(v_inst_3388_, 1);
lean_inc_n(v_toBind_3396_, 3);
v_toPure_3397_ = lean_ctor_get(v_toApplicative_3395_, 1);
lean_inc_n(v_toPure_3397_, 2);
lean_inc_n(v_inst_3393_, 3);
v___f_3398_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3398_, 0, v_inst_3393_);
v___f_3399_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_3400_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3401_ = lean_apply_2(v_inst_3393_, lean_box(0), v___x_3400_);
lean_inc_ref(v_inst_3388_);
v___f_3402_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_3402_, 0, v_inst_3389_);
lean_closure_set(v___f_3402_, 1, v_inst_3390_);
lean_closure_set(v___f_3402_, 2, v_toPure_3397_);
lean_closure_set(v___f_3402_, 3, v_toBind_3396_);
lean_closure_set(v___f_3402_, 4, v_inst_3388_);
lean_closure_set(v___f_3402_, 5, v_inst_3392_);
lean_closure_set(v___f_3402_, 6, v_inst_3391_);
lean_closure_set(v___f_3402_, 7, v_inst_3393_);
lean_closure_set(v___f_3402_, 8, v_f_3394_);
v___f_3403_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_3403_, 0, v_toPure_3397_);
lean_closure_set(v___f_3403_, 1, v_toBind_3396_);
lean_closure_set(v___f_3403_, 2, v___f_3398_);
lean_closure_set(v___f_3403_, 3, v_inst_3388_);
lean_closure_set(v___f_3403_, 4, v___f_3402_);
lean_closure_set(v___f_3403_, 5, v_inst_3393_);
lean_closure_set(v___f_3403_, 6, v___f_3399_);
v___x_3404_ = lean_apply_4(v_toBind_3396_, lean_box(0), lean_box(0), v___x_3401_, v___f_3403_);
return v___x_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object* v_toPure_3405_, lean_object* v_____r_3406_){
_start:
{
uint8_t v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3407_ = 0;
v___x_3408_ = lean_box(v___x_3407_);
v___x_3409_ = lean_apply_2(v_toPure_3405_, lean_box(0), v___x_3408_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object* v_snd_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_){
_start:
{
lean_object* v___x_3423_; lean_object* v_caches_3424_; lean_object* v_typeAnalysis_3425_; lean_object* v_target_3426_; uint8_t v_didChange_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3437_; 
v___x_3423_ = lean_st_ref_take(v___y_3412_);
v_caches_3424_ = lean_ctor_get(v___x_3423_, 0);
v_typeAnalysis_3425_ = lean_ctor_get(v___x_3423_, 1);
v_target_3426_ = lean_ctor_get(v___x_3423_, 2);
v_didChange_3427_ = lean_ctor_get_uint8(v___x_3423_, sizeof(void*)*4);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3437_ == 0)
{
lean_object* v_unused_3438_; 
v_unused_3438_ = lean_ctor_get(v___x_3423_, 3);
lean_dec(v_unused_3438_);
v___x_3429_ = v___x_3423_;
v_isShared_3430_ = v_isSharedCheck_3437_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_target_3426_);
lean_inc(v_typeAnalysis_3425_);
lean_inc(v_caches_3424_);
lean_dec(v___x_3423_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3437_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3431_; lean_object* v___x_3433_; 
v___x_3431_ = lean_box(0);
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 3, v_snd_3410_);
v___x_3433_ = v___x_3429_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_caches_3424_);
lean_ctor_set(v_reuseFailAlloc_3436_, 1, v_typeAnalysis_3425_);
lean_ctor_set(v_reuseFailAlloc_3436_, 2, v_target_3426_);
lean_ctor_set(v_reuseFailAlloc_3436_, 3, v_snd_3410_);
lean_ctor_set_uint8(v_reuseFailAlloc_3436_, sizeof(void*)*4, v_didChange_3427_);
v___x_3433_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3434_ = lean_st_ref_put(v___y_3412_, v___x_3433_);
v___x_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3431_);
return v___x_3435_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed(lean_object* v_snd_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(v_snd_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_);
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
lean_dec_ref(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object* v_inst_3453_, lean_object* v_toBind_3454_, lean_object* v___f_3455_, lean_object* v_toPure_3456_, lean_object* v_____s_3457_){
_start:
{
lean_object* v_fst_3458_; 
v_fst_3458_ = lean_ctor_get(v_____s_3457_, 0);
if (lean_obj_tag(v_fst_3458_) == 0)
{
lean_object* v_snd_3459_; lean_object* v___f_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
lean_dec(v_toPure_3456_);
v_snd_3459_ = lean_ctor_get(v_____s_3457_, 1);
lean_inc(v_snd_3459_);
lean_dec_ref(v_____s_3457_);
v___f_3460_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed), 13, 1);
lean_closure_set(v___f_3460_, 0, v_snd_3459_);
v___x_3461_ = lean_apply_2(v_inst_3453_, lean_box(0), v___f_3460_);
v___x_3462_ = lean_apply_4(v_toBind_3454_, lean_box(0), lean_box(0), v___x_3461_, v___f_3455_);
return v___x_3462_;
}
else
{
lean_object* v_val_3463_; lean_object* v___x_3464_; 
lean_inc_ref(v_fst_3458_);
lean_dec_ref(v_____s_3457_);
lean_dec(v___f_3455_);
lean_dec(v_toBind_3454_);
lean_dec(v_inst_3453_);
v_val_3463_ = lean_ctor_get(v_fst_3458_, 0);
lean_inc(v_val_3463_);
lean_dec_ref_known(v_fst_3458_, 1);
v___x_3464_ = lean_apply_2(v_toPure_3456_, lean_box(0), v_val_3463_);
return v___x_3464_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object* v_toPure_3465_, lean_object* v_____do__lift_3466_){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = lean_apply_2(v_toPure_3465_, lean_box(0), v_____do__lift_3466_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object* v_toPure_3468_, lean_object* v_next_3469_, lean_object* v_G_3470_, lean_object* v_____do__lift_3471_){
_start:
{
if (lean_obj_tag(v_____do__lift_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3473_; 
lean_dec(v_G_3470_);
v_a_3472_ = lean_ctor_get(v_____do__lift_3471_, 0);
lean_inc(v_a_3472_);
lean_dec_ref_known(v_____do__lift_3471_, 1);
v___x_3473_ = lean_apply_2(v_toPure_3468_, lean_box(0), v_a_3472_);
return v___x_3473_;
}
else
{
lean_object* v_a_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
lean_dec(v_toPure_3468_);
v_a_3474_ = lean_ctor_get(v_____do__lift_3471_, 0);
lean_inc(v_a_3474_);
lean_dec_ref_known(v_____do__lift_3471_, 1);
v___x_3475_ = lean_unsigned_to_nat(1u);
v___x_3476_ = lean_nat_add(v_next_3469_, v___x_3475_);
v___x_3477_ = lean_apply_4(v_G_3470_, v___x_3476_, v_a_3474_, lean_box(0), lean_box(0));
return v___x_3477_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object* v_toPure_3478_, lean_object* v_next_3479_, lean_object* v_G_3480_, lean_object* v_____do__lift_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(v_toPure_3478_, v_next_3479_, v_G_3480_, v_____do__lift_3481_);
lean_dec(v_next_3479_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(lean_object* v_snd_3483_, lean_object* v_newHyp_3484_, lean_object* v___x_3485_, lean_object* v_toPure_3486_, lean_object* v_____r_3487_){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3488_ = lean_array_push(v_snd_3483_, v_newHyp_3484_);
v___x_3489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3485_);
lean_ctor_set(v___x_3489_, 1, v___x_3488_);
v___x_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
v___x_3491_ = lean_apply_2(v_toPure_3486_, lean_box(0), v___x_3490_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object* v_toPure_3492_, lean_object* v___x_3493_, lean_object* v_____do__lift_3494_, lean_object* v_____do__lift_3495_){
_start:
{
uint8_t v_hasTrace_3496_; 
v_hasTrace_3496_ = lean_ctor_get_uint8(v_____do__lift_3495_, sizeof(void*)*1);
if (v_hasTrace_3496_ == 0)
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
lean_dec(v___x_3493_);
v___x_3497_ = lean_box(v_hasTrace_3496_);
v___x_3498_ = lean_apply_2(v_toPure_3492_, lean_box(0), v___x_3497_);
return v___x_3498_;
}
else
{
lean_object* v___x_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3499_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_3500_ = l_Lean_Name_append(v___x_3499_, v___x_3493_);
v___x_3501_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_3494_, v_____do__lift_3495_, v___x_3500_);
lean_dec(v___x_3500_);
v___x_3502_ = lean_box(v___x_3501_);
v___x_3503_ = lean_apply_2(v_toPure_3492_, lean_box(0), v___x_3502_);
return v___x_3503_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9___boxed(lean_object* v_toPure_3504_, lean_object* v___x_3505_, lean_object* v_____do__lift_3506_, lean_object* v_____do__lift_3507_){
_start:
{
lean_object* v_res_3508_; 
v_res_3508_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(v_toPure_3504_, v___x_3505_, v_____do__lift_3506_, v_____do__lift_3507_);
lean_dec_ref(v_____do__lift_3507_);
lean_dec_ref(v_____do__lift_3506_);
return v_res_3508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object* v_inst_3509_, lean_object* v_toPure_3510_, lean_object* v___x_3511_, lean_object* v_toBind_3512_, lean_object* v_____do__lift_3513_){
_start:
{
lean_object* v_getOptionsUnrestricted_3514_; lean_object* v___f_3515_; lean_object* v___x_3516_; 
v_getOptionsUnrestricted_3514_ = lean_ctor_get(v_inst_3509_, 1);
lean_inc(v_getOptionsUnrestricted_3514_);
lean_dec_ref(v_inst_3509_);
v___f_3515_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9___boxed), 4, 3);
lean_closure_set(v___f_3515_, 0, v_toPure_3510_);
lean_closure_set(v___f_3515_, 1, v___x_3511_);
lean_closure_set(v___f_3515_, 2, v_____do__lift_3513_);
v___x_3516_ = lean_apply_4(v_toBind_3512_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_3514_, v___f_3515_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object* v___f_3517_, lean_object* v_type_3518_, lean_object* v_type_3519_, lean_object* v_inst_3520_, lean_object* v_inst_3521_, lean_object* v_toMonadRef_3522_, lean_object* v_inst_3523_, lean_object* v___x_3524_, lean_object* v_toBind_3525_, lean_object* v___f_3526_, uint8_t v_____do__lift_3527_){
_start:
{
if (v_____do__lift_3527_ == 0)
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
lean_dec(v___f_3526_);
lean_dec(v_toBind_3525_);
lean_dec(v___x_3524_);
lean_dec(v_inst_3523_);
lean_dec_ref(v_toMonadRef_3522_);
lean_dec_ref(v_inst_3521_);
lean_dec_ref(v_inst_3520_);
lean_dec_ref(v_type_3519_);
lean_dec_ref(v_type_3518_);
v___x_3528_ = lean_box(0);
v___x_3529_ = lean_apply_1(v___f_3517_, v___x_3528_);
return v___x_3529_;
}
else
{
lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
lean_dec(v___f_3517_);
v___x_3530_ = l_Lean_MessageData_ofExpr(v_type_3518_);
v___x_3531_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3530_);
lean_ctor_set(v___x_3532_, 1, v___x_3531_);
v___x_3533_ = l_Lean_MessageData_ofExpr(v_type_3519_);
v___x_3534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3532_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
v___x_3535_ = l_Lean_addTrace___redArg(v_inst_3520_, v_inst_3521_, v_toMonadRef_3522_, v_inst_3523_, v___x_3524_, v___x_3534_);
v___x_3536_ = lean_apply_4(v_toBind_3525_, lean_box(0), lean_box(0), v___x_3535_, v___f_3526_);
return v___x_3536_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed(lean_object* v___f_3537_, lean_object* v_type_3538_, lean_object* v_type_3539_, lean_object* v_inst_3540_, lean_object* v_inst_3541_, lean_object* v_toMonadRef_3542_, lean_object* v_inst_3543_, lean_object* v___x_3544_, lean_object* v_toBind_3545_, lean_object* v___f_3546_, lean_object* v_____do__lift_3547_){
_start:
{
uint8_t v_____do__lift_2004__boxed_3548_; lean_object* v_res_3549_; 
v_____do__lift_2004__boxed_3548_ = lean_unbox(v_____do__lift_3547_);
v_res_3549_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(v___f_3537_, v_type_3538_, v_type_3539_, v_inst_3540_, v_inst_3541_, v_toMonadRef_3542_, v_inst_3543_, v___x_3544_, v_toBind_3545_, v___f_3546_, v_____do__lift_2004__boxed_3548_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(uint8_t v___x_3550_, lean_object* v_snd_3551_, lean_object* v_toPure_3552_, lean_object* v_____r_3553_){
_start:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3554_ = lean_box(v___x_3550_);
v___x_3555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3554_);
v___x_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3555_);
lean_ctor_set(v___x_3556_, 1, v_snd_3551_);
v___x_3557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3556_);
v___x_3558_ = lean_apply_2(v_toPure_3552_, lean_box(0), v___x_3557_);
return v___x_3558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object* v___x_3559_, lean_object* v_snd_3560_, lean_object* v_toPure_3561_, lean_object* v_____r_3562_){
_start:
{
uint8_t v___x_2038__boxed_3563_; lean_object* v_res_3564_; 
v___x_2038__boxed_3563_ = lean_unbox(v___x_3559_);
v_res_3564_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(v___x_2038__boxed_3563_, v_snd_3560_, v_toPure_3561_, v_____r_3562_);
return v_res_3564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object* v___x_3565_, lean_object* v_snd_3566_, lean_object* v___x_3567_, lean_object* v_toPure_3568_, lean_object* v_inst_3569_, lean_object* v_inst_3570_, lean_object* v_toBind_3571_, lean_object* v_inst_3572_, lean_object* v_inst_3573_, lean_object* v_toMonadRef_3574_, lean_object* v_inst_3575_, lean_object* v_newHyp_3576_){
_start:
{
lean_object* v_type_3577_; lean_object* v_value_3578_; uint8_t v___x_3579_; 
v_type_3577_ = lean_ctor_get(v_newHyp_3576_, 1);
v_value_3578_ = lean_ctor_get(v_newHyp_3576_, 2);
v___x_3579_ = l_Lean_Expr_isFalse(v_type_3577_);
if (v___x_3579_ == 0)
{
lean_object* v_type_3580_; lean_object* v___f_3581_; uint8_t v___x_3582_; 
v_type_3580_ = lean_ctor_get(v___x_3565_, 1);
lean_inc_ref(v_type_3580_);
lean_dec_ref(v___x_3565_);
lean_inc(v_toPure_3568_);
lean_inc(v___x_3567_);
lean_inc_ref(v_newHyp_3576_);
lean_inc(v_snd_3566_);
v___f_3581_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3581_, 0, v_snd_3566_);
lean_closure_set(v___f_3581_, 1, v_newHyp_3576_);
lean_closure_set(v___f_3581_, 2, v___x_3567_);
lean_closure_set(v___f_3581_, 3, v_toPure_3568_);
v___x_3582_ = lean_expr_eqv(v_type_3580_, v_type_3577_);
if (v___x_3582_ == 0)
{
lean_object* v_getInheritedTraceOptions_3583_; lean_object* v___f_3584_; lean_object* v___f_3585_; lean_object* v___f_3586_; lean_object* v___x_3587_; lean_object* v___f_3588_; lean_object* v___f_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
lean_inc_ref(v_type_3577_);
lean_dec_ref(v_newHyp_3576_);
lean_dec(v___x_3567_);
lean_dec(v_snd_3566_);
v_getInheritedTraceOptions_3583_ = lean_ctor_get(v_inst_3569_, 2);
lean_inc(v_getInheritedTraceOptions_3583_);
v___f_3584_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3584_, 0, v___f_3581_);
lean_inc_n(v_toBind_3571_, 4);
v___f_3585_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3585_, 0, v_inst_3570_);
lean_closure_set(v___f_3585_, 1, v_toBind_3571_);
lean_closure_set(v___f_3585_, 2, v___f_3584_);
lean_inc_ref(v___f_3585_);
v___f_3586_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3586_, 0, v___f_3585_);
v___x_3587_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___f_3588_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3588_, 0, v_inst_3572_);
lean_closure_set(v___f_3588_, 1, v_toPure_3568_);
lean_closure_set(v___f_3588_, 2, v___x_3587_);
lean_closure_set(v___f_3588_, 3, v_toBind_3571_);
v___f_3589_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed), 11, 10);
lean_closure_set(v___f_3589_, 0, v___f_3585_);
lean_closure_set(v___f_3589_, 1, v_type_3580_);
lean_closure_set(v___f_3589_, 2, v_type_3577_);
lean_closure_set(v___f_3589_, 3, v_inst_3573_);
lean_closure_set(v___f_3589_, 4, v_inst_3569_);
lean_closure_set(v___f_3589_, 5, v_toMonadRef_3574_);
lean_closure_set(v___f_3589_, 6, v_inst_3575_);
lean_closure_set(v___f_3589_, 7, v___x_3587_);
lean_closure_set(v___f_3589_, 8, v_toBind_3571_);
lean_closure_set(v___f_3589_, 9, v___f_3586_);
v___x_3590_ = lean_apply_4(v_toBind_3571_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3583_, v___f_3588_);
v___x_3591_ = lean_apply_4(v_toBind_3571_, lean_box(0), lean_box(0), v___x_3590_, v___f_3589_);
return v___x_3591_;
}
else
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
lean_dec_ref(v___f_3581_);
lean_dec_ref(v_type_3580_);
lean_dec(v_inst_3575_);
lean_dec_ref(v_toMonadRef_3574_);
lean_dec_ref(v_inst_3573_);
lean_dec_ref(v_inst_3572_);
lean_dec(v_toBind_3571_);
lean_dec(v_inst_3570_);
lean_dec_ref(v_inst_3569_);
v___x_3592_ = lean_box(0);
v___x_3593_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(v_snd_3566_, v_newHyp_3576_, v___x_3567_, v_toPure_3568_, v___x_3592_);
return v___x_3593_;
}
}
else
{
lean_object* v___x_3594_; lean_object* v___f_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
lean_inc_ref(v_value_3578_);
lean_dec_ref(v_newHyp_3576_);
lean_dec(v_inst_3575_);
lean_dec_ref(v_toMonadRef_3574_);
lean_dec_ref(v_inst_3573_);
lean_dec_ref(v_inst_3572_);
lean_dec_ref(v_inst_3569_);
lean_dec(v___x_3567_);
lean_dec_ref(v___x_3565_);
v___x_3594_ = lean_box(v___x_3579_);
v___f_3595_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 4, 3);
lean_closure_set(v___f_3595_, 0, v___x_3594_);
lean_closure_set(v___f_3595_, 1, v_snd_3566_);
lean_closure_set(v___f_3595_, 2, v_toPure_3568_);
v___x_3596_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed), 13, 1);
lean_closure_set(v___x_3596_, 0, v_value_3578_);
v___x_3597_ = lean_apply_2(v_inst_3570_, lean_box(0), v___x_3596_);
v___x_3598_ = lean_apply_4(v_toBind_3571_, lean_box(0), lean_box(0), v___x_3597_, v___f_3595_);
return v___x_3598_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object* v___x_3599_, lean_object* v_toPure_3600_, lean_object* v_hyps_3601_, lean_object* v___x_3602_, lean_object* v_inst_3603_, lean_object* v_inst_3604_, lean_object* v_toBind_3605_, lean_object* v_inst_3606_, lean_object* v_inst_3607_, lean_object* v_toMonadRef_3608_, lean_object* v_inst_3609_, lean_object* v_f_3610_, lean_object* v___f_3611_, lean_object* v_next_3612_, lean_object* v_acc_3613_, lean_object* v_h_3614_, lean_object* v_G_3615_){
_start:
{
uint8_t v___x_3616_; 
v___x_3616_ = lean_nat_dec_lt(v_next_3612_, v___x_3599_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; 
lean_dec(v_G_3615_);
lean_dec(v_next_3612_);
lean_dec(v___f_3611_);
lean_dec(v_f_3610_);
lean_dec(v_inst_3609_);
lean_dec_ref(v_toMonadRef_3608_);
lean_dec_ref(v_inst_3607_);
lean_dec_ref(v_inst_3606_);
lean_dec(v_toBind_3605_);
lean_dec(v_inst_3604_);
lean_dec_ref(v_inst_3603_);
lean_dec(v___x_3602_);
v___x_3617_ = lean_apply_2(v_toPure_3600_, lean_box(0), v_acc_3613_);
return v___x_3617_;
}
else
{
lean_object* v_snd_3618_; lean_object* v___f_3619_; lean_object* v___x_3620_; lean_object* v___f_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v_snd_3618_ = lean_ctor_get(v_acc_3613_, 1);
lean_inc(v_snd_3618_);
lean_dec_ref(v_acc_3613_);
lean_inc(v_next_3612_);
lean_inc(v_toPure_3600_);
v___f_3619_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3619_, 0, v_toPure_3600_);
lean_closure_set(v___f_3619_, 1, v_next_3612_);
lean_closure_set(v___f_3619_, 2, v_G_3615_);
v___x_3620_ = lean_array_fget_borrowed(v_hyps_3601_, v_next_3612_);
lean_inc_n(v_toBind_3605_, 3);
lean_inc_n(v___x_3620_, 2);
v___f_3621_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10), 12, 11);
lean_closure_set(v___f_3621_, 0, v___x_3620_);
lean_closure_set(v___f_3621_, 1, v_snd_3618_);
lean_closure_set(v___f_3621_, 2, v___x_3602_);
lean_closure_set(v___f_3621_, 3, v_toPure_3600_);
lean_closure_set(v___f_3621_, 4, v_inst_3603_);
lean_closure_set(v___f_3621_, 5, v_inst_3604_);
lean_closure_set(v___f_3621_, 6, v_toBind_3605_);
lean_closure_set(v___f_3621_, 7, v_inst_3606_);
lean_closure_set(v___f_3621_, 8, v_inst_3607_);
lean_closure_set(v___f_3621_, 9, v_toMonadRef_3608_);
lean_closure_set(v___f_3621_, 10, v_inst_3609_);
v___x_3622_ = lean_apply_2(v_f_3610_, v_next_3612_, v___x_3620_);
v___x_3623_ = lean_apply_4(v_toBind_3605_, lean_box(0), lean_box(0), v___x_3622_, v___f_3621_);
v___x_3624_ = lean_apply_4(v_toBind_3605_, lean_box(0), lean_box(0), v___x_3623_, v___f_3611_);
v___x_3625_ = lean_apply_4(v_toBind_3605_, lean_box(0), lean_box(0), v___x_3624_, v___f_3619_);
return v___x_3625_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed(lean_object** _args){
lean_object* v___x_3626_ = _args[0];
lean_object* v_toPure_3627_ = _args[1];
lean_object* v_hyps_3628_ = _args[2];
lean_object* v___x_3629_ = _args[3];
lean_object* v_inst_3630_ = _args[4];
lean_object* v_inst_3631_ = _args[5];
lean_object* v_toBind_3632_ = _args[6];
lean_object* v_inst_3633_ = _args[7];
lean_object* v_inst_3634_ = _args[8];
lean_object* v_toMonadRef_3635_ = _args[9];
lean_object* v_inst_3636_ = _args[10];
lean_object* v_f_3637_ = _args[11];
lean_object* v___f_3638_ = _args[12];
lean_object* v_next_3639_ = _args[13];
lean_object* v_acc_3640_ = _args[14];
lean_object* v_h_3641_ = _args[15];
lean_object* v_G_3642_ = _args[16];
_start:
{
lean_object* v_res_3643_; 
v_res_3643_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(v___x_3626_, v_toPure_3627_, v_hyps_3628_, v___x_3629_, v_inst_3630_, v_inst_3631_, v_toBind_3632_, v_inst_3633_, v_inst_3634_, v_toMonadRef_3635_, v_inst_3636_, v_f_3637_, v___f_3638_, v_next_3639_, v_acc_3640_, v_h_3641_, v_G_3642_);
lean_dec_ref(v_hyps_3628_);
lean_dec(v___x_3626_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object* v_toPure_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_toBind_3647_, lean_object* v_inst_3648_, lean_object* v_inst_3649_, lean_object* v_toMonadRef_3650_, lean_object* v_inst_3651_, lean_object* v_f_3652_, lean_object* v___f_3653_, lean_object* v___f_3654_, lean_object* v_hyps_3655_){
_start:
{
lean_object* v___x_3656_; lean_object* v_newHyps_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___f_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3656_ = lean_array_get_size(v_hyps_3655_);
v_newHyps_3657_ = lean_mk_empty_array_with_capacity(v___x_3656_);
v___x_3658_ = lean_unsigned_to_nat(0u);
v___x_3659_ = lean_box(0);
lean_inc(v_toBind_3647_);
v___f_3660_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed), 17, 13);
lean_closure_set(v___f_3660_, 0, v___x_3656_);
lean_closure_set(v___f_3660_, 1, v_toPure_3644_);
lean_closure_set(v___f_3660_, 2, v_hyps_3655_);
lean_closure_set(v___f_3660_, 3, v___x_3659_);
lean_closure_set(v___f_3660_, 4, v_inst_3645_);
lean_closure_set(v___f_3660_, 5, v_inst_3646_);
lean_closure_set(v___f_3660_, 6, v_toBind_3647_);
lean_closure_set(v___f_3660_, 7, v_inst_3648_);
lean_closure_set(v___f_3660_, 8, v_inst_3649_);
lean_closure_set(v___f_3660_, 9, v_toMonadRef_3650_);
lean_closure_set(v___f_3660_, 10, v_inst_3651_);
lean_closure_set(v___f_3660_, 11, v_f_3652_);
lean_closure_set(v___f_3660_, 12, v___f_3653_);
v___x_3661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3661_, 0, v___x_3659_);
lean_ctor_set(v___x_3661_, 1, v_newHyps_3657_);
v___x_3662_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3660_, v___x_3658_, v___x_3661_, lean_box(0));
v___x_3663_ = lean_apply_4(v_toBind_3647_, lean_box(0), lean_box(0), v___x_3662_, v___f_3654_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object* v_inst_3664_, lean_object* v_inst_3665_, lean_object* v_inst_3666_, lean_object* v_inst_3667_, lean_object* v_inst_3668_, lean_object* v_inst_3669_, lean_object* v_f_3670_){
_start:
{
lean_object* v_toApplicative_3671_; lean_object* v_toBind_3672_; lean_object* v_toPure_3673_; lean_object* v_toMonadRef_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___f_3677_; lean_object* v___f_3678_; lean_object* v___f_3679_; lean_object* v___f_3680_; lean_object* v___x_3681_; 
v_toApplicative_3671_ = lean_ctor_get(v_inst_3664_, 0);
v_toBind_3672_ = lean_ctor_get(v_inst_3664_, 1);
lean_inc_n(v_toBind_3672_, 3);
v_toPure_3673_ = lean_ctor_get(v_toApplicative_3671_, 1);
lean_inc_n(v_toPure_3673_, 4);
v_toMonadRef_3674_ = lean_ctor_get(v_inst_3666_, 1);
lean_inc_ref(v_toMonadRef_3674_);
lean_dec_ref(v_inst_3666_);
v___x_3675_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3665_, 2);
v___x_3676_ = lean_apply_2(v_inst_3665_, lean_box(0), v___x_3675_);
v___f_3677_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3677_, 0, v_toPure_3673_);
v___f_3678_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3678_, 0, v_inst_3665_);
lean_closure_set(v___f_3678_, 1, v_toBind_3672_);
lean_closure_set(v___f_3678_, 2, v___f_3677_);
lean_closure_set(v___f_3678_, 3, v_toPure_3673_);
v___f_3679_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3679_, 0, v_toPure_3673_);
v___f_3680_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12), 12, 11);
lean_closure_set(v___f_3680_, 0, v_toPure_3673_);
lean_closure_set(v___f_3680_, 1, v_inst_3667_);
lean_closure_set(v___f_3680_, 2, v_inst_3665_);
lean_closure_set(v___f_3680_, 3, v_toBind_3672_);
lean_closure_set(v___f_3680_, 4, v_inst_3668_);
lean_closure_set(v___f_3680_, 5, v_inst_3664_);
lean_closure_set(v___f_3680_, 6, v_toMonadRef_3674_);
lean_closure_set(v___f_3680_, 7, v_inst_3669_);
lean_closure_set(v___f_3680_, 8, v_f_3670_);
lean_closure_set(v___f_3680_, 9, v___f_3679_);
lean_closure_set(v___f_3680_, 10, v___f_3678_);
v___x_3681_ = lean_apply_4(v_toBind_3672_, lean_box(0), lean_box(0), v___x_3676_, v___f_3680_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object* v_m_3682_, lean_object* v_inst_3683_, lean_object* v_inst_3684_, lean_object* v_inst_3685_, lean_object* v_inst_3686_, lean_object* v_inst_3687_, lean_object* v_inst_3688_, lean_object* v_inst_3689_, lean_object* v_inst_3690_, lean_object* v_f_3691_){
_start:
{
lean_object* v_toApplicative_3692_; lean_object* v_toBind_3693_; lean_object* v_toPure_3694_; lean_object* v_toMonadRef_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___f_3698_; lean_object* v___f_3699_; lean_object* v___f_3700_; lean_object* v___f_3701_; lean_object* v___x_3702_; 
v_toApplicative_3692_ = lean_ctor_get(v_inst_3683_, 0);
v_toBind_3693_ = lean_ctor_get(v_inst_3683_, 1);
lean_inc_n(v_toBind_3693_, 3);
v_toPure_3694_ = lean_ctor_get(v_toApplicative_3692_, 1);
lean_inc_n(v_toPure_3694_, 4);
v_toMonadRef_3695_ = lean_ctor_get(v_inst_3685_, 1);
lean_inc_ref(v_toMonadRef_3695_);
lean_dec_ref(v_inst_3685_);
v___x_3696_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3684_, 2);
v___x_3697_ = lean_apply_2(v_inst_3684_, lean_box(0), v___x_3696_);
v___f_3698_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3698_, 0, v_toPure_3694_);
v___f_3699_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3699_, 0, v_inst_3684_);
lean_closure_set(v___f_3699_, 1, v_toBind_3693_);
lean_closure_set(v___f_3699_, 2, v___f_3698_);
lean_closure_set(v___f_3699_, 3, v_toPure_3694_);
v___f_3700_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3700_, 0, v_toPure_3694_);
v___f_3701_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12), 12, 11);
lean_closure_set(v___f_3701_, 0, v_toPure_3694_);
lean_closure_set(v___f_3701_, 1, v_inst_3687_);
lean_closure_set(v___f_3701_, 2, v_inst_3684_);
lean_closure_set(v___f_3701_, 3, v_toBind_3693_);
lean_closure_set(v___f_3701_, 4, v_inst_3688_);
lean_closure_set(v___f_3701_, 5, v_inst_3683_);
lean_closure_set(v___f_3701_, 6, v_toMonadRef_3695_);
lean_closure_set(v___f_3701_, 7, v_inst_3689_);
lean_closure_set(v___f_3701_, 8, v_f_3691_);
lean_closure_set(v___f_3701_, 9, v___f_3700_);
lean_closure_set(v___f_3701_, 10, v___f_3699_);
v___x_3702_ = lean_apply_4(v_toBind_3693_, lean_box(0), lean_box(0), v___x_3697_, v___f_3701_);
return v___x_3702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___boxed(lean_object* v_m_3703_, lean_object* v_inst_3704_, lean_object* v_inst_3705_, lean_object* v_inst_3706_, lean_object* v_inst_3707_, lean_object* v_inst_3708_, lean_object* v_inst_3709_, lean_object* v_inst_3710_, lean_object* v_inst_3711_, lean_object* v_f_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(v_m_3703_, v_inst_3704_, v_inst_3705_, v_inst_3706_, v_inst_3707_, v_inst_3708_, v_inst_3709_, v_inst_3710_, v_inst_3711_, v_f_3712_);
lean_dec_ref(v_inst_3711_);
lean_dec_ref(v_inst_3707_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13(lean_object* v___x_3714_, lean_object* v_snd_3715_, lean_object* v___x_3716_, lean_object* v_toPure_3717_, lean_object* v_inst_3718_, lean_object* v_inst_3719_, lean_object* v_toBind_3720_, lean_object* v_inst_3721_, lean_object* v_toMonadRef_3722_, lean_object* v_inst_3723_, lean_object* v_inst_3724_, lean_object* v_newHyp_3725_){
_start:
{
lean_object* v_type_3726_; lean_object* v_value_3727_; uint8_t v___x_3728_; 
v_type_3726_ = lean_ctor_get(v_newHyp_3725_, 1);
v_value_3727_ = lean_ctor_get(v_newHyp_3725_, 2);
v___x_3728_ = l_Lean_Expr_isFalse(v_type_3726_);
if (v___x_3728_ == 0)
{
lean_object* v_type_3729_; lean_object* v___f_3730_; uint8_t v___x_3731_; 
v_type_3729_ = lean_ctor_get(v___x_3714_, 1);
lean_inc_ref(v_type_3729_);
lean_dec_ref(v___x_3714_);
lean_inc(v_toPure_3717_);
lean_inc(v___x_3716_);
lean_inc_ref(v_newHyp_3725_);
lean_inc(v_snd_3715_);
v___f_3730_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3730_, 0, v_snd_3715_);
lean_closure_set(v___f_3730_, 1, v_newHyp_3725_);
lean_closure_set(v___f_3730_, 2, v___x_3716_);
lean_closure_set(v___f_3730_, 3, v_toPure_3717_);
v___x_3731_ = lean_expr_eqv(v_type_3729_, v_type_3726_);
if (v___x_3731_ == 0)
{
lean_object* v_getInheritedTraceOptions_3732_; lean_object* v___f_3733_; lean_object* v___f_3734_; lean_object* v___f_3735_; lean_object* v___x_3736_; lean_object* v___f_3737_; lean_object* v___f_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
lean_inc_ref(v_type_3726_);
lean_dec_ref(v_newHyp_3725_);
lean_dec(v___x_3716_);
lean_dec(v_snd_3715_);
v_getInheritedTraceOptions_3732_ = lean_ctor_get(v_inst_3718_, 2);
lean_inc(v_getInheritedTraceOptions_3732_);
v___f_3733_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3733_, 0, v___f_3730_);
lean_inc_n(v_toBind_3720_, 4);
v___f_3734_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3734_, 0, v_inst_3719_);
lean_closure_set(v___f_3734_, 1, v_toBind_3720_);
lean_closure_set(v___f_3734_, 2, v___f_3733_);
lean_inc_ref(v___f_3734_);
v___f_3735_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3735_, 0, v___f_3734_);
v___x_3736_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___f_3737_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed), 11, 10);
lean_closure_set(v___f_3737_, 0, v___f_3734_);
lean_closure_set(v___f_3737_, 1, v_type_3729_);
lean_closure_set(v___f_3737_, 2, v_type_3726_);
lean_closure_set(v___f_3737_, 3, v_inst_3721_);
lean_closure_set(v___f_3737_, 4, v_inst_3718_);
lean_closure_set(v___f_3737_, 5, v_toMonadRef_3722_);
lean_closure_set(v___f_3737_, 6, v_inst_3723_);
lean_closure_set(v___f_3737_, 7, v___x_3736_);
lean_closure_set(v___f_3737_, 8, v_toBind_3720_);
lean_closure_set(v___f_3737_, 9, v___f_3735_);
v___f_3738_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3738_, 0, v_inst_3724_);
lean_closure_set(v___f_3738_, 1, v_toPure_3717_);
lean_closure_set(v___f_3738_, 2, v___x_3736_);
lean_closure_set(v___f_3738_, 3, v_toBind_3720_);
v___x_3739_ = lean_apply_4(v_toBind_3720_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3732_, v___f_3738_);
v___x_3740_ = lean_apply_4(v_toBind_3720_, lean_box(0), lean_box(0), v___x_3739_, v___f_3737_);
return v___x_3740_;
}
else
{
lean_object* v___x_3741_; lean_object* v___x_3742_; 
lean_dec_ref(v___f_3730_);
lean_dec_ref(v_type_3729_);
lean_dec_ref(v_inst_3724_);
lean_dec(v_inst_3723_);
lean_dec_ref(v_toMonadRef_3722_);
lean_dec_ref(v_inst_3721_);
lean_dec(v_toBind_3720_);
lean_dec(v_inst_3719_);
lean_dec_ref(v_inst_3718_);
v___x_3741_ = lean_box(0);
v___x_3742_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(v_snd_3715_, v_newHyp_3725_, v___x_3716_, v_toPure_3717_, v___x_3741_);
return v___x_3742_;
}
}
else
{
lean_object* v___x_3743_; lean_object* v___f_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; 
lean_inc_ref(v_value_3727_);
lean_dec_ref(v_newHyp_3725_);
lean_dec_ref(v_inst_3724_);
lean_dec(v_inst_3723_);
lean_dec_ref(v_toMonadRef_3722_);
lean_dec_ref(v_inst_3721_);
lean_dec_ref(v_inst_3718_);
lean_dec(v___x_3716_);
lean_dec_ref(v___x_3714_);
v___x_3743_ = lean_box(v___x_3728_);
v___f_3744_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 4, 3);
lean_closure_set(v___f_3744_, 0, v___x_3743_);
lean_closure_set(v___f_3744_, 1, v_snd_3715_);
lean_closure_set(v___f_3744_, 2, v_toPure_3717_);
v___x_3745_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed), 13, 1);
lean_closure_set(v___x_3745_, 0, v_value_3727_);
v___x_3746_ = lean_apply_2(v_inst_3719_, lean_box(0), v___x_3745_);
v___x_3747_ = lean_apply_4(v_toBind_3720_, lean_box(0), lean_box(0), v___x_3746_, v___f_3744_);
return v___x_3747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object* v___x_3748_, lean_object* v_toPure_3749_, lean_object* v_hyps_3750_, lean_object* v___x_3751_, lean_object* v_inst_3752_, lean_object* v_inst_3753_, lean_object* v_toBind_3754_, lean_object* v_inst_3755_, lean_object* v_toMonadRef_3756_, lean_object* v_inst_3757_, lean_object* v_inst_3758_, lean_object* v_f_3759_, lean_object* v___f_3760_, lean_object* v_next_3761_, lean_object* v_acc_3762_, lean_object* v_h_3763_, lean_object* v_G_3764_){
_start:
{
uint8_t v___x_3765_; 
v___x_3765_ = lean_nat_dec_lt(v_next_3761_, v___x_3748_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; 
lean_dec(v_G_3764_);
lean_dec(v_next_3761_);
lean_dec(v___f_3760_);
lean_dec(v_f_3759_);
lean_dec_ref(v_inst_3758_);
lean_dec(v_inst_3757_);
lean_dec_ref(v_toMonadRef_3756_);
lean_dec_ref(v_inst_3755_);
lean_dec(v_toBind_3754_);
lean_dec(v_inst_3753_);
lean_dec_ref(v_inst_3752_);
lean_dec(v___x_3751_);
v___x_3766_ = lean_apply_2(v_toPure_3749_, lean_box(0), v_acc_3762_);
return v___x_3766_;
}
else
{
lean_object* v_snd_3767_; lean_object* v___f_3768_; lean_object* v___x_3769_; lean_object* v___f_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v_snd_3767_ = lean_ctor_get(v_acc_3762_, 1);
lean_inc(v_snd_3767_);
lean_dec_ref(v_acc_3762_);
lean_inc(v_next_3761_);
lean_inc(v_toPure_3749_);
v___f_3768_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3768_, 0, v_toPure_3749_);
lean_closure_set(v___f_3768_, 1, v_next_3761_);
lean_closure_set(v___f_3768_, 2, v_G_3764_);
v___x_3769_ = lean_array_fget_borrowed(v_hyps_3750_, v_next_3761_);
lean_dec(v_next_3761_);
lean_inc_n(v_toBind_3754_, 3);
lean_inc_n(v___x_3769_, 2);
v___f_3770_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13), 12, 11);
lean_closure_set(v___f_3770_, 0, v___x_3769_);
lean_closure_set(v___f_3770_, 1, v_snd_3767_);
lean_closure_set(v___f_3770_, 2, v___x_3751_);
lean_closure_set(v___f_3770_, 3, v_toPure_3749_);
lean_closure_set(v___f_3770_, 4, v_inst_3752_);
lean_closure_set(v___f_3770_, 5, v_inst_3753_);
lean_closure_set(v___f_3770_, 6, v_toBind_3754_);
lean_closure_set(v___f_3770_, 7, v_inst_3755_);
lean_closure_set(v___f_3770_, 8, v_toMonadRef_3756_);
lean_closure_set(v___f_3770_, 9, v_inst_3757_);
lean_closure_set(v___f_3770_, 10, v_inst_3758_);
v___x_3771_ = lean_apply_1(v_f_3759_, v___x_3769_);
v___x_3772_ = lean_apply_4(v_toBind_3754_, lean_box(0), lean_box(0), v___x_3771_, v___f_3770_);
v___x_3773_ = lean_apply_4(v_toBind_3754_, lean_box(0), lean_box(0), v___x_3772_, v___f_3760_);
v___x_3774_ = lean_apply_4(v_toBind_3754_, lean_box(0), lean_box(0), v___x_3773_, v___f_3768_);
return v___x_3774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3775_ = _args[0];
lean_object* v_toPure_3776_ = _args[1];
lean_object* v_hyps_3777_ = _args[2];
lean_object* v___x_3778_ = _args[3];
lean_object* v_inst_3779_ = _args[4];
lean_object* v_inst_3780_ = _args[5];
lean_object* v_toBind_3781_ = _args[6];
lean_object* v_inst_3782_ = _args[7];
lean_object* v_toMonadRef_3783_ = _args[8];
lean_object* v_inst_3784_ = _args[9];
lean_object* v_inst_3785_ = _args[10];
lean_object* v_f_3786_ = _args[11];
lean_object* v___f_3787_ = _args[12];
lean_object* v_next_3788_ = _args[13];
lean_object* v_acc_3789_ = _args[14];
lean_object* v_h_3790_ = _args[15];
lean_object* v_G_3791_ = _args[16];
_start:
{
lean_object* v_res_3792_; 
v_res_3792_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(v___x_3775_, v_toPure_3776_, v_hyps_3777_, v___x_3778_, v_inst_3779_, v_inst_3780_, v_toBind_3781_, v_inst_3782_, v_toMonadRef_3783_, v_inst_3784_, v_inst_3785_, v_f_3786_, v___f_3787_, v_next_3788_, v_acc_3789_, v_h_3790_, v_G_3791_);
lean_dec_ref(v_hyps_3777_);
lean_dec(v___x_3775_);
return v_res_3792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object* v_toPure_3793_, lean_object* v_inst_3794_, lean_object* v_inst_3795_, lean_object* v_toBind_3796_, lean_object* v_inst_3797_, lean_object* v_toMonadRef_3798_, lean_object* v_inst_3799_, lean_object* v_inst_3800_, lean_object* v_f_3801_, lean_object* v___f_3802_, lean_object* v___f_3803_, lean_object* v_hyps_3804_){
_start:
{
lean_object* v___x_3805_; lean_object* v_newHyps_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___f_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3805_ = lean_array_get_size(v_hyps_3804_);
v_newHyps_3806_ = lean_mk_empty_array_with_capacity(v___x_3805_);
v___x_3807_ = lean_unsigned_to_nat(0u);
v___x_3808_ = lean_box(0);
lean_inc(v_toBind_3796_);
v___f_3809_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed), 17, 13);
lean_closure_set(v___f_3809_, 0, v___x_3805_);
lean_closure_set(v___f_3809_, 1, v_toPure_3793_);
lean_closure_set(v___f_3809_, 2, v_hyps_3804_);
lean_closure_set(v___f_3809_, 3, v___x_3808_);
lean_closure_set(v___f_3809_, 4, v_inst_3794_);
lean_closure_set(v___f_3809_, 5, v_inst_3795_);
lean_closure_set(v___f_3809_, 6, v_toBind_3796_);
lean_closure_set(v___f_3809_, 7, v_inst_3797_);
lean_closure_set(v___f_3809_, 8, v_toMonadRef_3798_);
lean_closure_set(v___f_3809_, 9, v_inst_3799_);
lean_closure_set(v___f_3809_, 10, v_inst_3800_);
lean_closure_set(v___f_3809_, 11, v_f_3801_);
lean_closure_set(v___f_3809_, 12, v___f_3802_);
v___x_3810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3808_);
lean_ctor_set(v___x_3810_, 1, v_newHyps_3806_);
v___x_3811_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3809_, v___x_3807_, v___x_3810_, lean_box(0));
v___x_3812_ = lean_apply_4(v_toBind_3796_, lean_box(0), lean_box(0), v___x_3811_, v___f_3803_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object* v_inst_3813_, lean_object* v_inst_3814_, lean_object* v_inst_3815_, lean_object* v_inst_3816_, lean_object* v_inst_3817_, lean_object* v_inst_3818_, lean_object* v_f_3819_){
_start:
{
lean_object* v_toApplicative_3820_; lean_object* v_toBind_3821_; lean_object* v_toPure_3822_; lean_object* v_toMonadRef_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___f_3826_; lean_object* v___f_3827_; lean_object* v___f_3828_; lean_object* v___f_3829_; lean_object* v___x_3830_; 
v_toApplicative_3820_ = lean_ctor_get(v_inst_3813_, 0);
v_toBind_3821_ = lean_ctor_get(v_inst_3813_, 1);
lean_inc_n(v_toBind_3821_, 3);
v_toPure_3822_ = lean_ctor_get(v_toApplicative_3820_, 1);
lean_inc_n(v_toPure_3822_, 4);
v_toMonadRef_3823_ = lean_ctor_get(v_inst_3815_, 1);
lean_inc_ref(v_toMonadRef_3823_);
lean_dec_ref(v_inst_3815_);
v___x_3824_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3814_, 2);
v___x_3825_ = lean_apply_2(v_inst_3814_, lean_box(0), v___x_3824_);
v___f_3826_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3826_, 0, v_toPure_3822_);
v___f_3827_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3827_, 0, v_inst_3814_);
lean_closure_set(v___f_3827_, 1, v_toBind_3821_);
lean_closure_set(v___f_3827_, 2, v___f_3826_);
lean_closure_set(v___f_3827_, 3, v_toPure_3822_);
v___f_3828_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3828_, 0, v_toPure_3822_);
v___f_3829_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3829_, 0, v_toPure_3822_);
lean_closure_set(v___f_3829_, 1, v_inst_3816_);
lean_closure_set(v___f_3829_, 2, v_inst_3814_);
lean_closure_set(v___f_3829_, 3, v_toBind_3821_);
lean_closure_set(v___f_3829_, 4, v_inst_3813_);
lean_closure_set(v___f_3829_, 5, v_toMonadRef_3823_);
lean_closure_set(v___f_3829_, 6, v_inst_3818_);
lean_closure_set(v___f_3829_, 7, v_inst_3817_);
lean_closure_set(v___f_3829_, 8, v_f_3819_);
lean_closure_set(v___f_3829_, 9, v___f_3828_);
lean_closure_set(v___f_3829_, 10, v___f_3827_);
v___x_3830_ = lean_apply_4(v_toBind_3821_, lean_box(0), lean_box(0), v___x_3825_, v___f_3829_);
return v___x_3830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object* v_m_3831_, lean_object* v_inst_3832_, lean_object* v_inst_3833_, lean_object* v_inst_3834_, lean_object* v_inst_3835_, lean_object* v_inst_3836_, lean_object* v_inst_3837_, lean_object* v_inst_3838_, lean_object* v_inst_3839_, lean_object* v_f_3840_){
_start:
{
lean_object* v_toApplicative_3841_; lean_object* v_toBind_3842_; lean_object* v_toPure_3843_; lean_object* v_toMonadRef_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___f_3847_; lean_object* v___f_3848_; lean_object* v___f_3849_; lean_object* v___f_3850_; lean_object* v___x_3851_; 
v_toApplicative_3841_ = lean_ctor_get(v_inst_3832_, 0);
v_toBind_3842_ = lean_ctor_get(v_inst_3832_, 1);
lean_inc_n(v_toBind_3842_, 3);
v_toPure_3843_ = lean_ctor_get(v_toApplicative_3841_, 1);
lean_inc_n(v_toPure_3843_, 4);
v_toMonadRef_3844_ = lean_ctor_get(v_inst_3834_, 1);
lean_inc_ref(v_toMonadRef_3844_);
lean_dec_ref(v_inst_3834_);
v___x_3845_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3833_, 2);
v___x_3846_ = lean_apply_2(v_inst_3833_, lean_box(0), v___x_3845_);
v___f_3847_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3847_, 0, v_toPure_3843_);
v___f_3848_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3848_, 0, v_inst_3833_);
lean_closure_set(v___f_3848_, 1, v_toBind_3842_);
lean_closure_set(v___f_3848_, 2, v___f_3847_);
lean_closure_set(v___f_3848_, 3, v_toPure_3843_);
v___f_3849_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3849_, 0, v_toPure_3843_);
v___f_3850_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3850_, 0, v_toPure_3843_);
lean_closure_set(v___f_3850_, 1, v_inst_3836_);
lean_closure_set(v___f_3850_, 2, v_inst_3833_);
lean_closure_set(v___f_3850_, 3, v_toBind_3842_);
lean_closure_set(v___f_3850_, 4, v_inst_3832_);
lean_closure_set(v___f_3850_, 5, v_toMonadRef_3844_);
lean_closure_set(v___f_3850_, 6, v_inst_3838_);
lean_closure_set(v___f_3850_, 7, v_inst_3837_);
lean_closure_set(v___f_3850_, 8, v_f_3840_);
lean_closure_set(v___f_3850_, 9, v___f_3849_);
lean_closure_set(v___f_3850_, 10, v___f_3848_);
v___x_3851_ = lean_apply_4(v_toBind_3842_, lean_box(0), lean_box(0), v___x_3846_, v___f_3850_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___boxed(lean_object* v_m_3852_, lean_object* v_inst_3853_, lean_object* v_inst_3854_, lean_object* v_inst_3855_, lean_object* v_inst_3856_, lean_object* v_inst_3857_, lean_object* v_inst_3858_, lean_object* v_inst_3859_, lean_object* v_inst_3860_, lean_object* v_f_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(v_m_3852_, v_inst_3853_, v_inst_3854_, v_inst_3855_, v_inst_3856_, v_inst_3857_, v_inst_3858_, v_inst_3859_, v_inst_3860_, v_f_3861_);
lean_dec_ref(v_inst_3860_);
lean_dec_ref(v_inst_3856_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object* v_f_3863_, lean_object* v_x_3864_, lean_object* v___y_3865_){
_start:
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_apply_1(v_f_3863_, v___y_3865_);
return v___x_3866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object* v_toApplicative_3867_, lean_object* v_inst_3868_, lean_object* v___f_3869_, lean_object* v_hyps_3870_){
_start:
{
lean_object* v_toPure_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; uint8_t v___x_3875_; 
v_toPure_3871_ = lean_ctor_get(v_toApplicative_3867_, 1);
lean_inc(v_toPure_3871_);
lean_dec_ref(v_toApplicative_3867_);
v___x_3872_ = lean_unsigned_to_nat(0u);
v___x_3873_ = lean_array_get_size(v_hyps_3870_);
v___x_3874_ = lean_box(0);
v___x_3875_ = lean_nat_dec_lt(v___x_3872_, v___x_3873_);
if (v___x_3875_ == 0)
{
lean_object* v___x_3876_; 
lean_dec_ref(v_hyps_3870_);
lean_dec(v___f_3869_);
lean_dec_ref(v_inst_3868_);
v___x_3876_ = lean_apply_2(v_toPure_3871_, lean_box(0), v___x_3874_);
return v___x_3876_;
}
else
{
size_t v___x_3877_; size_t v___x_3878_; lean_object* v___x_3879_; 
lean_dec(v_toPure_3871_);
v___x_3877_ = ((size_t)0ULL);
v___x_3878_ = lean_usize_of_nat(v___x_3873_);
v___x_3879_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3868_, v___f_3869_, v_hyps_3870_, v___x_3877_, v___x_3878_, v___x_3874_);
return v___x_3879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object* v_inst_3880_, lean_object* v_inst_3881_, lean_object* v_f_3882_){
_start:
{
lean_object* v_toApplicative_3883_; lean_object* v_toBind_3884_; lean_object* v___f_3885_; lean_object* v___f_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v_toApplicative_3883_ = lean_ctor_get(v_inst_3880_, 0);
lean_inc_ref(v_toApplicative_3883_);
v_toBind_3884_ = lean_ctor_get(v_inst_3880_, 1);
lean_inc(v_toBind_3884_);
v___f_3885_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3885_, 0, v_f_3882_);
v___f_3886_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3886_, 0, v_toApplicative_3883_);
lean_closure_set(v___f_3886_, 1, v_inst_3880_);
lean_closure_set(v___f_3886_, 2, v___f_3885_);
v___x_3887_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3888_ = lean_apply_2(v_inst_3881_, lean_box(0), v___x_3887_);
v___x_3889_ = lean_apply_4(v_toBind_3884_, lean_box(0), lean_box(0), v___x_3888_, v___f_3886_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object* v_m_3890_, lean_object* v_inst_3891_, lean_object* v_inst_3892_, lean_object* v_inst_3893_, lean_object* v_f_3894_){
_start:
{
lean_object* v_toApplicative_3895_; lean_object* v_toBind_3896_; lean_object* v___f_3897_; lean_object* v___f_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; 
v_toApplicative_3895_ = lean_ctor_get(v_inst_3891_, 0);
lean_inc_ref(v_toApplicative_3895_);
v_toBind_3896_ = lean_ctor_get(v_inst_3891_, 1);
lean_inc(v_toBind_3896_);
v___f_3897_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3897_, 0, v_f_3894_);
v___f_3898_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3898_, 0, v_toApplicative_3895_);
lean_closure_set(v___f_3898_, 1, v_inst_3891_);
lean_closure_set(v___f_3898_, 2, v___f_3897_);
v___x_3899_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3900_ = lean_apply_2(v_inst_3892_, lean_box(0), v___x_3899_);
v___x_3901_ = lean_apply_4(v_toBind_3896_, lean_box(0), lean_box(0), v___x_3900_, v___f_3898_);
return v___x_3901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object* v_m_3902_, lean_object* v_inst_3903_, lean_object* v_inst_3904_, lean_object* v_inst_3905_, lean_object* v_f_3906_){
_start:
{
lean_object* v_res_3907_; 
v_res_3907_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(v_m_3902_, v_inst_3903_, v_inst_3904_, v_inst_3905_, v_f_3906_);
lean_dec_ref(v_inst_3905_);
return v_res_3907_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0(void){
_start:
{
lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3908_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0);
v___x_3909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3909_, 0, v___x_3908_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg(uint8_t v_cacheId_3910_, lean_object* v_methods_3911_, lean_object* v_config_3912_, lean_object* v_e_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_){
_start:
{
lean_object* v___x_3922_; lean_object* v_caches_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v_typeAnalysis_3930_; lean_object* v_target_3931_; lean_object* v_hypotheses_3932_; uint8_t v_didChange_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3979_; 
v___x_3922_ = lean_st_ref_get(v_a_3914_);
v_caches_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc_ref(v_caches_3923_);
lean_dec(v___x_3922_);
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3925_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(v_cacheId_3910_, v_caches_3923_);
v___x_3926_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0);
v___x_3927_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3924_);
lean_ctor_set(v___x_3927_, 1, v___x_3925_);
lean_ctor_set(v___x_3927_, 2, v___x_3926_);
lean_ctor_set(v___x_3927_, 3, v___x_3926_);
v___x_3928_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_cacheId_3910_, v___x_3926_, v_caches_3923_);
v___x_3929_ = lean_st_ref_take(v_a_3914_);
v_typeAnalysis_3930_ = lean_ctor_get(v___x_3929_, 1);
v_target_3931_ = lean_ctor_get(v___x_3929_, 2);
v_hypotheses_3932_ = lean_ctor_get(v___x_3929_, 3);
v_didChange_3933_ = lean_ctor_get_uint8(v___x_3929_, sizeof(void*)*4);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3929_);
if (v_isSharedCheck_3979_ == 0)
{
lean_object* v_unused_3980_; 
v_unused_3980_ = lean_ctor_get(v___x_3929_, 0);
lean_dec(v_unused_3980_);
v___x_3935_ = v___x_3929_;
v_isShared_3936_ = v_isSharedCheck_3979_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_hypotheses_3932_);
lean_inc(v_target_3931_);
lean_inc(v_typeAnalysis_3930_);
lean_dec(v___x_3929_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3979_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3938_; 
if (v_isShared_3936_ == 0)
{
lean_ctor_set(v___x_3935_, 0, v___x_3928_);
v___x_3938_ = v___x_3935_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v___x_3928_);
lean_ctor_set(v_reuseFailAlloc_3978_, 1, v_typeAnalysis_3930_);
lean_ctor_set(v_reuseFailAlloc_3978_, 2, v_target_3931_);
lean_ctor_set(v_reuseFailAlloc_3978_, 3, v_hypotheses_3932_);
lean_ctor_set_uint8(v_reuseFailAlloc_3978_, sizeof(void*)*4, v_didChange_3933_);
v___x_3938_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = lean_st_ref_put(v_a_3914_, v___x_3938_);
v___x_3940_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_3940_, 0, v_e_3913_);
v___x_3941_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_3940_, v_methods_3911_, v_config_3912_, v___x_3927_, v_a_3915_, v_a_3916_, v_a_3917_, v_a_3918_, v_a_3919_, v_a_3920_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3969_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3944_ = v___x_3941_;
v_isShared_3945_ = v_isSharedCheck_3969_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3941_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3969_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v_fst_3946_; lean_object* v_snd_3947_; lean_object* v___x_3948_; lean_object* v_caches_3949_; lean_object* v_persistentCache_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v_typeAnalysis_3953_; lean_object* v_target_3954_; lean_object* v_hypotheses_3955_; uint8_t v_didChange_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3967_; 
v_fst_3946_ = lean_ctor_get(v_a_3942_, 0);
lean_inc(v_fst_3946_);
v_snd_3947_ = lean_ctor_get(v_a_3942_, 1);
lean_inc(v_snd_3947_);
lean_dec(v_a_3942_);
v___x_3948_ = lean_st_ref_get(v_a_3914_);
v_caches_3949_ = lean_ctor_get(v___x_3948_, 0);
lean_inc_ref(v_caches_3949_);
lean_dec(v___x_3948_);
v_persistentCache_3950_ = lean_ctor_get(v_snd_3947_, 1);
lean_inc_ref(v_persistentCache_3950_);
lean_dec(v_snd_3947_);
v___x_3951_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_cacheId_3910_, v_persistentCache_3950_, v_caches_3949_);
v___x_3952_ = lean_st_ref_take(v_a_3914_);
v_typeAnalysis_3953_ = lean_ctor_get(v___x_3952_, 1);
v_target_3954_ = lean_ctor_get(v___x_3952_, 2);
v_hypotheses_3955_ = lean_ctor_get(v___x_3952_, 3);
v_didChange_3956_ = lean_ctor_get_uint8(v___x_3952_, sizeof(void*)*4);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3967_ == 0)
{
lean_object* v_unused_3968_; 
v_unused_3968_ = lean_ctor_get(v___x_3952_, 0);
lean_dec(v_unused_3968_);
v___x_3958_ = v___x_3952_;
v_isShared_3959_ = v_isSharedCheck_3967_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_hypotheses_3955_);
lean_inc(v_target_3954_);
lean_inc(v_typeAnalysis_3953_);
lean_dec(v___x_3952_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3967_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
lean_ctor_set(v___x_3958_, 0, v___x_3951_);
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v___x_3951_);
lean_ctor_set(v_reuseFailAlloc_3966_, 1, v_typeAnalysis_3953_);
lean_ctor_set(v_reuseFailAlloc_3966_, 2, v_target_3954_);
lean_ctor_set(v_reuseFailAlloc_3966_, 3, v_hypotheses_3955_);
lean_ctor_set_uint8(v_reuseFailAlloc_3966_, sizeof(void*)*4, v_didChange_3956_);
v___x_3961_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
lean_object* v___x_3962_; lean_object* v___x_3964_; 
v___x_3962_ = lean_st_ref_put(v_a_3914_, v___x_3961_);
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 0, v_fst_3946_);
v___x_3964_ = v___x_3944_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_fst_3946_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
v_a_3970_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3941_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3941_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___boxed(lean_object* v_cacheId_3981_, lean_object* v_methods_3982_, lean_object* v_config_3983_, lean_object* v_e_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_){
_start:
{
uint8_t v_cacheId_boxed_3993_; lean_object* v_res_3994_; 
v_cacheId_boxed_3993_ = lean_unbox(v_cacheId_3981_);
v_res_3994_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg(v_cacheId_boxed_3993_, v_methods_3982_, v_config_3983_, v_e_3984_, v_a_3985_, v_a_3986_, v_a_3987_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_);
lean_dec(v_a_3991_);
lean_dec_ref(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec_ref(v_a_3986_);
lean_dec(v_a_3985_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr(uint8_t v_cacheId_3995_, lean_object* v_methods_3996_, lean_object* v_config_3997_, lean_object* v_e_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_){
_start:
{
lean_object* v___x_4011_; 
v___x_4011_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg(v_cacheId_3995_, v_methods_3996_, v_config_3997_, v_e_3998_, v_a_4000_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___boxed(lean_object* v_cacheId_4012_, lean_object* v_methods_4013_, lean_object* v_config_4014_, lean_object* v_e_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_){
_start:
{
uint8_t v_cacheId_boxed_4028_; lean_object* v_res_4029_; 
v_cacheId_boxed_4028_ = lean_unbox(v_cacheId_4012_);
v_res_4029_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr(v_cacheId_boxed_4028_, v_methods_4013_, v_config_4014_, v_e_4015_, v_a_4016_, v_a_4017_, v_a_4018_, v_a_4019_, v_a_4020_, v_a_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_);
lean_dec(v_a_4026_);
lean_dec_ref(v_a_4025_);
lean_dec(v_a_4024_);
lean_dec_ref(v_a_4023_);
lean_dec(v_a_4022_);
lean_dec_ref(v_a_4021_);
lean_dec(v_a_4020_);
lean_dec_ref(v_a_4019_);
lean_dec(v_a_4018_);
lean_dec(v_a_4017_);
lean_dec_ref(v_a_4016_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t v_cacheId_4030_, lean_object* v_methods_4031_, lean_object* v_config_4032_, lean_object* v_hyp_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_){
_start:
{
lean_object* v_type_4042_; lean_object* v___x_4043_; 
v_type_4042_ = lean_ctor_get(v_hyp_4033_, 1);
lean_inc_ref(v_type_4042_);
v___x_4043_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg(v_cacheId_4030_, v_methods_4031_, v_config_4032_, v_type_4042_, v_a_4034_, v_a_4035_, v_a_4036_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_);
if (lean_obj_tag(v___x_4043_) == 0)
{
lean_object* v_a_4044_; lean_object* v___x_4045_; 
v_a_4044_ = lean_ctor_get(v___x_4043_, 0);
lean_inc(v_a_4044_);
lean_dec_ref_known(v___x_4043_, 1);
v___x_4045_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_4033_, v_a_4044_, v_a_4036_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_);
return v___x_4045_;
}
else
{
lean_object* v_a_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4053_; 
lean_dec_ref(v_hyp_4033_);
v_a_4046_ = lean_ctor_get(v___x_4043_, 0);
v_isSharedCheck_4053_ = !lean_is_exclusive(v___x_4043_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4048_ = v___x_4043_;
v_isShared_4049_ = v_isSharedCheck_4053_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_a_4046_);
lean_dec(v___x_4043_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4053_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___x_4051_; 
if (v_isShared_4049_ == 0)
{
v___x_4051_ = v___x_4048_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v_a_4046_);
v___x_4051_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
return v___x_4051_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___boxed(lean_object* v_cacheId_4054_, lean_object* v_methods_4055_, lean_object* v_config_4056_, lean_object* v_hyp_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_, lean_object* v_a_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_){
_start:
{
uint8_t v_cacheId_boxed_4066_; lean_object* v_res_4067_; 
v_cacheId_boxed_4066_ = lean_unbox(v_cacheId_4054_);
v_res_4067_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_boxed_4066_, v_methods_4055_, v_config_4056_, v_hyp_4057_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
lean_dec(v_a_4064_);
lean_dec_ref(v_a_4063_);
lean_dec(v_a_4062_);
lean_dec_ref(v_a_4061_);
lean_dec(v_a_4060_);
lean_dec_ref(v_a_4059_);
lean_dec(v_a_4058_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(uint8_t v_cacheId_4068_, lean_object* v_methods_4069_, lean_object* v_config_4070_, lean_object* v_hyp_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_){
_start:
{
lean_object* v___x_4084_; 
v___x_4084_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_4068_, v_methods_4069_, v_config_4070_, v_hyp_4071_, v_a_4073_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___boxed(lean_object* v_cacheId_4085_, lean_object* v_methods_4086_, lean_object* v_config_4087_, lean_object* v_hyp_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_){
_start:
{
uint8_t v_cacheId_boxed_4101_; lean_object* v_res_4102_; 
v_cacheId_boxed_4101_ = lean_unbox(v_cacheId_4085_);
v_res_4102_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(v_cacheId_boxed_4101_, v_methods_4086_, v_config_4087_, v_hyp_4088_, v_a_4089_, v_a_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_);
lean_dec(v_a_4099_);
lean_dec_ref(v_a_4098_);
lean_dec(v_a_4097_);
lean_dec_ref(v_a_4096_);
lean_dec(v_a_4095_);
lean_dec_ref(v_a_4094_);
lean_dec(v_a_4093_);
lean_dec_ref(v_a_4092_);
lean_dec(v_a_4091_);
lean_dec(v_a_4090_);
lean_dec_ref(v_a_4089_);
return v_res_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t v_cacheId_4103_, lean_object* v_methods_4104_, lean_object* v_config_4105_, lean_object* v_hyp_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_){
_start:
{
lean_object* v___x_4115_; lean_object* v_caches_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v_typeAnalysis_4123_; lean_object* v_target_4124_; lean_object* v_hypotheses_4125_; uint8_t v_didChange_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4167_; 
v___x_4115_ = lean_st_ref_get(v_a_4107_);
v_caches_4116_ = lean_ctor_get(v___x_4115_, 0);
lean_inc_ref(v_caches_4116_);
lean_dec(v___x_4115_);
v___x_4117_ = lean_unsigned_to_nat(0u);
v___x_4118_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(v_cacheId_4103_, v_caches_4116_);
v___x_4119_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_4120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4117_);
lean_ctor_set(v___x_4120_, 1, v___x_4118_);
lean_ctor_set(v___x_4120_, 2, v___x_4119_);
v___x_4121_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_cacheId_4103_, v___x_4119_, v_caches_4116_);
v___x_4122_ = lean_st_ref_take(v_a_4107_);
v_typeAnalysis_4123_ = lean_ctor_get(v___x_4122_, 1);
v_target_4124_ = lean_ctor_get(v___x_4122_, 2);
v_hypotheses_4125_ = lean_ctor_get(v___x_4122_, 3);
v_didChange_4126_ = lean_ctor_get_uint8(v___x_4122_, sizeof(void*)*4);
v_isSharedCheck_4167_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4167_ == 0)
{
lean_object* v_unused_4168_; 
v_unused_4168_ = lean_ctor_get(v___x_4122_, 0);
lean_dec(v_unused_4168_);
v___x_4128_ = v___x_4122_;
v_isShared_4129_ = v_isSharedCheck_4167_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_hypotheses_4125_);
lean_inc(v_target_4124_);
lean_inc(v_typeAnalysis_4123_);
lean_dec(v___x_4122_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4167_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v___x_4131_; 
if (v_isShared_4129_ == 0)
{
lean_ctor_set(v___x_4128_, 0, v___x_4121_);
v___x_4131_ = v___x_4128_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v___x_4121_);
lean_ctor_set(v_reuseFailAlloc_4166_, 1, v_typeAnalysis_4123_);
lean_ctor_set(v_reuseFailAlloc_4166_, 2, v_target_4124_);
lean_ctor_set(v_reuseFailAlloc_4166_, 3, v_hypotheses_4125_);
lean_ctor_set_uint8(v_reuseFailAlloc_4166_, sizeof(void*)*4, v_didChange_4126_);
v___x_4131_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
lean_object* v___x_4132_; lean_object* v_type_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
v___x_4132_ = lean_st_ref_put(v_a_4107_, v___x_4131_);
v_type_4133_ = lean_ctor_get(v_hyp_4106_, 1);
lean_inc_ref(v_type_4133_);
v___x_4134_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_4134_, 0, v_type_4133_);
v___x_4135_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_4134_, v_methods_4104_, v_config_4105_, v___x_4120_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_);
if (lean_obj_tag(v___x_4135_) == 0)
{
lean_object* v_a_4136_; lean_object* v_fst_4137_; lean_object* v_snd_4138_; lean_object* v___x_4139_; lean_object* v_caches_4140_; lean_object* v_cache_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v_typeAnalysis_4144_; lean_object* v_target_4145_; lean_object* v_hypotheses_4146_; uint8_t v_didChange_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4156_; 
v_a_4136_ = lean_ctor_get(v___x_4135_, 0);
lean_inc(v_a_4136_);
lean_dec_ref_known(v___x_4135_, 1);
v_fst_4137_ = lean_ctor_get(v_a_4136_, 0);
lean_inc(v_fst_4137_);
v_snd_4138_ = lean_ctor_get(v_a_4136_, 1);
lean_inc(v_snd_4138_);
lean_dec(v_a_4136_);
v___x_4139_ = lean_st_ref_get(v_a_4107_);
v_caches_4140_ = lean_ctor_get(v___x_4139_, 0);
lean_inc_ref(v_caches_4140_);
lean_dec(v___x_4139_);
v_cache_4141_ = lean_ctor_get(v_snd_4138_, 1);
lean_inc_ref(v_cache_4141_);
lean_dec(v_snd_4138_);
v___x_4142_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_cacheId_4103_, v_cache_4141_, v_caches_4140_);
v___x_4143_ = lean_st_ref_take(v_a_4107_);
v_typeAnalysis_4144_ = lean_ctor_get(v___x_4143_, 1);
v_target_4145_ = lean_ctor_get(v___x_4143_, 2);
v_hypotheses_4146_ = lean_ctor_get(v___x_4143_, 3);
v_didChange_4147_ = lean_ctor_get_uint8(v___x_4143_, sizeof(void*)*4);
v_isSharedCheck_4156_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4156_ == 0)
{
lean_object* v_unused_4157_; 
v_unused_4157_ = lean_ctor_get(v___x_4143_, 0);
lean_dec(v_unused_4157_);
v___x_4149_ = v___x_4143_;
v_isShared_4150_ = v_isSharedCheck_4156_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_hypotheses_4146_);
lean_inc(v_target_4145_);
lean_inc(v_typeAnalysis_4144_);
lean_dec(v___x_4143_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4156_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 0, v___x_4142_);
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v___x_4142_);
lean_ctor_set(v_reuseFailAlloc_4155_, 1, v_typeAnalysis_4144_);
lean_ctor_set(v_reuseFailAlloc_4155_, 2, v_target_4145_);
lean_ctor_set(v_reuseFailAlloc_4155_, 3, v_hypotheses_4146_);
lean_ctor_set_uint8(v_reuseFailAlloc_4155_, sizeof(void*)*4, v_didChange_4147_);
v___x_4152_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lean_st_ref_put(v_a_4107_, v___x_4152_);
v___x_4154_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_4106_, v_fst_4137_);
lean_dec(v_fst_4137_);
return v___x_4154_;
}
}
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref(v_hyp_4106_);
v_a_4158_ = lean_ctor_get(v___x_4135_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4135_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_4135_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_4135_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg___boxed(lean_object* v_cacheId_4169_, lean_object* v_methods_4170_, lean_object* v_config_4171_, lean_object* v_hyp_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_, lean_object* v_a_4179_, lean_object* v_a_4180_){
_start:
{
uint8_t v_cacheId_boxed_4181_; lean_object* v_res_4182_; 
v_cacheId_boxed_4181_ = lean_unbox(v_cacheId_4169_);
v_res_4182_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_boxed_4181_, v_methods_4170_, v_config_4171_, v_hyp_4172_, v_a_4173_, v_a_4174_, v_a_4175_, v_a_4176_, v_a_4177_, v_a_4178_, v_a_4179_);
lean_dec(v_a_4179_);
lean_dec_ref(v_a_4178_);
lean_dec(v_a_4177_);
lean_dec_ref(v_a_4176_);
lean_dec(v_a_4175_);
lean_dec_ref(v_a_4174_);
lean_dec(v_a_4173_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(uint8_t v_cacheId_4183_, lean_object* v_methods_4184_, lean_object* v_config_4185_, lean_object* v_hyp_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_){
_start:
{
lean_object* v___x_4199_; 
v___x_4199_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_4183_, v_methods_4184_, v_config_4185_, v_hyp_4186_, v_a_4188_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_, v_a_4196_, v_a_4197_);
return v___x_4199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___boxed(lean_object* v_cacheId_4200_, lean_object* v_methods_4201_, lean_object* v_config_4202_, lean_object* v_hyp_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_, lean_object* v_a_4212_, lean_object* v_a_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_){
_start:
{
uint8_t v_cacheId_boxed_4216_; lean_object* v_res_4217_; 
v_cacheId_boxed_4216_ = lean_unbox(v_cacheId_4200_);
v_res_4217_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(v_cacheId_boxed_4216_, v_methods_4201_, v_config_4202_, v_hyp_4203_, v_a_4204_, v_a_4205_, v_a_4206_, v_a_4207_, v_a_4208_, v_a_4209_, v_a_4210_, v_a_4211_, v_a_4212_, v_a_4213_, v_a_4214_);
lean_dec(v_a_4214_);
lean_dec_ref(v_a_4213_);
lean_dec(v_a_4212_);
lean_dec_ref(v_a_4211_);
lean_dec(v_a_4210_);
lean_dec_ref(v_a_4209_);
lean_dec(v_a_4208_);
lean_dec_ref(v_a_4207_);
lean_dec(v_a_4206_);
lean_dec(v_a_4205_);
lean_dec_ref(v_a_4204_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(lean_object* v_snd_4218_, lean_object* v_a_4219_, lean_object* v___x_4220_, lean_object* v_____r_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_){
_start:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4234_ = lean_array_push(v_snd_4218_, v_a_4219_);
v___x_4235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4220_);
lean_ctor_set(v___x_4235_, 1, v___x_4234_);
v___x_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
v___x_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4236_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed(lean_object* v_snd_4238_, lean_object* v_a_4239_, lean_object* v___x_4240_, lean_object* v_____r_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4238_, v_a_4239_, v___x_4240_, v_____r_4241_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
lean_dec(v___y_4252_);
lean_dec_ref(v___y_4251_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
lean_dec(v___y_4248_);
lean_dec_ref(v___y_4247_);
lean_dec(v___y_4246_);
lean_dec_ref(v___y_4245_);
lean_dec(v___y_4244_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(uint8_t v___x_4255_, lean_object* v___f_4256_, lean_object* v_____r_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_){
_start:
{
lean_object* v___x_4270_; lean_object* v_caches_4271_; lean_object* v_typeAnalysis_4272_; lean_object* v_target_4273_; lean_object* v_hypotheses_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4284_; 
v___x_4270_ = lean_st_ref_take(v___y_4259_);
v_caches_4271_ = lean_ctor_get(v___x_4270_, 0);
v_typeAnalysis_4272_ = lean_ctor_get(v___x_4270_, 1);
v_target_4273_ = lean_ctor_get(v___x_4270_, 2);
v_hypotheses_4274_ = lean_ctor_get(v___x_4270_, 3);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4276_ = v___x_4270_;
v_isShared_4277_ = v_isSharedCheck_4284_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_hypotheses_4274_);
lean_inc(v_target_4273_);
lean_inc(v_typeAnalysis_4272_);
lean_inc(v_caches_4271_);
lean_dec(v___x_4270_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4284_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4278_; lean_object* v___x_4280_; 
v___x_4278_ = lean_box(0);
if (v_isShared_4277_ == 0)
{
v___x_4280_ = v___x_4276_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_caches_4271_);
lean_ctor_set(v_reuseFailAlloc_4283_, 1, v_typeAnalysis_4272_);
lean_ctor_set(v_reuseFailAlloc_4283_, 2, v_target_4273_);
lean_ctor_set(v_reuseFailAlloc_4283_, 3, v_hypotheses_4274_);
v___x_4280_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; 
lean_ctor_set_uint8(v___x_4280_, sizeof(void*)*4, v___x_4255_);
v___x_4281_ = lean_st_ref_put(v___y_4259_, v___x_4280_);
lean_inc(v___y_4268_);
lean_inc_ref(v___y_4267_);
lean_inc(v___y_4266_);
lean_inc_ref(v___y_4265_);
lean_inc(v___y_4264_);
lean_inc_ref(v___y_4263_);
lean_inc(v___y_4262_);
lean_inc_ref(v___y_4261_);
lean_inc(v___y_4260_);
lean_inc(v___y_4259_);
lean_inc_ref(v___y_4258_);
v___x_4282_ = lean_apply_13(v___f_4256_, v___x_4278_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, lean_box(0));
return v___x_4282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1___boxed(lean_object* v___x_4285_, lean_object* v___f_4286_, lean_object* v_____r_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_){
_start:
{
uint8_t v___x_22115__boxed_4300_; lean_object* v_res_4301_; 
v___x_22115__boxed_4300_ = lean_unbox(v___x_4285_);
v_res_4301_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_22115__boxed_4300_, v___f_4286_, v_____r_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, v___y_4298_);
lean_dec(v___y_4298_);
lean_dec_ref(v___y_4297_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4295_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
lean_dec(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec_ref(v___y_4288_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(lean_object* v___x_4302_, lean_object* v_hypotheses_4303_, uint8_t v_cacheId_4304_, lean_object* v_methods_4305_, lean_object* v_config_4306_, lean_object* v___x_4307_, lean_object* v___x_4308_, lean_object* v___x_4309_, lean_object* v_toMonadRef_4310_, lean_object* v___f_4311_, lean_object* v_next_4312_, lean_object* v_acc_4313_, lean_object* v_h_4314_, lean_object* v_G_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v___y_4329_; uint8_t v___x_4351_; 
v___x_4351_ = lean_nat_dec_lt(v_next_4312_, v___x_4302_);
if (v___x_4351_ == 0)
{
lean_object* v___x_4352_; 
lean_dec_ref(v_G_4315_);
lean_dec(v___f_4311_);
lean_dec_ref(v_toMonadRef_4310_);
lean_dec_ref(v___x_4309_);
lean_dec_ref(v___x_4308_);
lean_dec(v___x_4307_);
lean_dec_ref(v_config_4306_);
lean_dec_ref(v_methods_4305_);
v___x_4352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4352_, 0, v_acc_4313_);
return v___x_4352_;
}
else
{
lean_object* v_snd_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4425_; 
v_snd_4353_ = lean_ctor_get(v_acc_4313_, 1);
v_isSharedCheck_4425_ = !lean_is_exclusive(v_acc_4313_);
if (v_isSharedCheck_4425_ == 0)
{
lean_object* v_unused_4426_; 
v_unused_4426_ = lean_ctor_get(v_acc_4313_, 0);
lean_dec(v_unused_4426_);
v___x_4355_ = v_acc_4313_;
v_isShared_4356_ = v_isSharedCheck_4425_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_snd_4353_);
lean_dec(v_acc_4313_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4425_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4357_ = lean_array_fget_borrowed(v_hypotheses_4303_, v_next_4312_);
lean_inc(v___x_4357_);
v___x_4358_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_4304_, v_methods_4305_, v_config_4306_, v___x_4357_, v___y_4317_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_object* v_a_4359_; lean_object* v_type_4360_; lean_object* v_value_4361_; uint8_t v___x_4362_; 
v_a_4359_ = lean_ctor_get(v___x_4358_, 0);
lean_inc(v_a_4359_);
lean_dec_ref_known(v___x_4358_, 1);
v_type_4360_ = lean_ctor_get(v_a_4359_, 1);
v_value_4361_ = lean_ctor_get(v_a_4359_, 2);
v___x_4362_ = l_Lean_Expr_isFalse(v_type_4360_);
if (v___x_4362_ == 0)
{
lean_object* v_type_4363_; lean_object* v___f_4364_; uint8_t v___x_4365_; 
lean_del_object(v___x_4355_);
v_type_4363_ = lean_ctor_get(v___x_4357_, 1);
lean_inc(v___x_4307_);
lean_inc(v_a_4359_);
lean_inc(v_snd_4353_);
v___f_4364_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed), 16, 3);
lean_closure_set(v___f_4364_, 0, v_snd_4353_);
lean_closure_set(v___f_4364_, 1, v_a_4359_);
lean_closure_set(v___f_4364_, 2, v___x_4307_);
v___x_4365_ = lean_expr_eqv(v_type_4363_, v_type_4360_);
if (v___x_4365_ == 0)
{
lean_object* v_toCold_4366_; lean_object* v_options_4367_; lean_object* v_inheritedTraceOptions_4368_; uint8_t v_hasTrace_4369_; 
lean_inc_ref(v_type_4360_);
lean_dec(v_a_4359_);
lean_dec(v_snd_4353_);
lean_dec(v___x_4307_);
v_toCold_4366_ = lean_ctor_get(v___y_4325_, 0);
v_options_4367_ = lean_ctor_get(v_toCold_4366_, 2);
v_inheritedTraceOptions_4368_ = lean_ctor_get(v_toCold_4366_, 11);
v_hasTrace_4369_ = lean_ctor_get_uint8(v_options_4367_, sizeof(void*)*1);
if (v_hasTrace_4369_ == 0)
{
lean_dec_ref(v_type_4360_);
lean_dec(v___f_4311_);
lean_dec_ref(v_toMonadRef_4310_);
lean_dec_ref(v___x_4309_);
lean_dec_ref(v___x_4308_);
goto v___jp_4370_;
}
else
{
lean_object* v___x_4373_; lean_object* v___x_4374_; uint8_t v___x_4375_; 
v___x_4373_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_4374_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_4375_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4368_, v_options_4367_, v___x_4374_);
if (v___x_4375_ == 0)
{
lean_dec_ref(v_type_4360_);
lean_dec(v___f_4311_);
lean_dec_ref(v_toMonadRef_4310_);
lean_dec_ref(v___x_4309_);
lean_dec_ref(v___x_4308_);
goto v___jp_4370_;
}
else
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_22041__overap_4381_; lean_object* v___x_4382_; 
lean_inc_ref(v_type_4363_);
v___x_4376_ = l_Lean_MessageData_ofExpr(v_type_4363_);
v___x_4377_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_4378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4378_, 0, v___x_4376_);
lean_ctor_set(v___x_4378_, 1, v___x_4377_);
v___x_4379_ = l_Lean_MessageData_ofExpr(v_type_4360_);
v___x_4380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4380_, 0, v___x_4378_);
lean_ctor_set(v___x_4380_, 1, v___x_4379_);
v___x_22041__overap_4381_ = l_Lean_addTrace___redArg(v___x_4308_, v___x_4309_, v_toMonadRef_4310_, v___f_4311_, v___x_4373_, v___x_4380_);
lean_inc(v___y_4326_);
lean_inc_ref(v___y_4325_);
lean_inc(v___y_4324_);
lean_inc_ref(v___y_4323_);
lean_inc(v___y_4322_);
lean_inc_ref(v___y_4321_);
lean_inc(v___y_4320_);
lean_inc_ref(v___y_4319_);
lean_inc(v___y_4318_);
lean_inc(v___y_4317_);
lean_inc_ref(v___y_4316_);
v___x_4382_ = lean_apply_12(v___x_22041__overap_4381_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_, lean_box(0));
if (lean_obj_tag(v___x_4382_) == 0)
{
lean_object* v_a_4383_; lean_object* v___x_4384_; 
v_a_4383_ = lean_ctor_get(v___x_4382_, 0);
lean_inc(v_a_4383_);
lean_dec_ref_known(v___x_4382_, 1);
v___x_4384_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4351_, v___f_4364_, v_a_4383_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
v___y_4329_ = v___x_4384_;
goto v___jp_4328_;
}
else
{
lean_object* v_a_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
lean_dec_ref(v___f_4364_);
lean_dec_ref(v_G_4315_);
v_a_4385_ = lean_ctor_get(v___x_4382_, 0);
v_isSharedCheck_4392_ = !lean_is_exclusive(v___x_4382_);
if (v_isSharedCheck_4392_ == 0)
{
v___x_4387_ = v___x_4382_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_a_4385_);
lean_dec(v___x_4382_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_a_4385_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
}
}
v___jp_4370_:
{
lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4371_ = lean_box(0);
v___x_4372_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4351_, v___f_4364_, v___x_4371_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
v___y_4329_ = v___x_4372_;
goto v___jp_4328_;
}
}
else
{
lean_object* v___x_4393_; lean_object* v___x_4394_; 
lean_dec_ref(v___f_4364_);
lean_dec(v___f_4311_);
lean_dec_ref(v_toMonadRef_4310_);
lean_dec_ref(v___x_4309_);
lean_dec_ref(v___x_4308_);
v___x_4393_ = lean_box(0);
v___x_4394_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4353_, v_a_4359_, v___x_4307_, v___x_4393_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
v___y_4329_ = v___x_4394_;
goto v___jp_4328_;
}
}
else
{
lean_object* v___x_4395_; 
lean_inc_ref(v_value_4361_);
lean_dec(v_a_4359_);
lean_dec_ref(v_G_4315_);
lean_dec(v___f_4311_);
lean_dec_ref(v_toMonadRef_4310_);
lean_dec_ref(v___x_4309_);
lean_dec_ref(v___x_4308_);
lean_dec(v___x_4307_);
v___x_4395_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_4361_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4407_; 
v_isSharedCheck_4407_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4407_ == 0)
{
lean_object* v_unused_4408_; 
v_unused_4408_ = lean_ctor_get(v___x_4395_, 0);
lean_dec(v_unused_4408_);
v___x_4397_ = v___x_4395_;
v_isShared_4398_ = v_isSharedCheck_4407_;
goto v_resetjp_4396_;
}
else
{
lean_dec(v___x_4395_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4407_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4402_; 
v___x_4399_ = lean_box(v___x_4362_);
v___x_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4400_, 0, v___x_4399_);
if (v_isShared_4356_ == 0)
{
lean_ctor_set(v___x_4355_, 0, v___x_4400_);
v___x_4402_ = v___x_4355_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v___x_4400_);
lean_ctor_set(v_reuseFailAlloc_4406_, 1, v_snd_4353_);
v___x_4402_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
lean_object* v___x_4404_; 
if (v_isShared_4398_ == 0)
{
lean_ctor_set(v___x_4397_, 0, v___x_4402_);
v___x_4404_ = v___x_4397_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v___x_4402_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
else
{
lean_object* v_a_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4416_; 
lean_del_object(v___x_4355_);
lean_dec(v_snd_4353_);
v_a_4409_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4411_ = v___x_4395_;
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_a_4409_);
lean_dec(v___x_4395_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4414_; 
if (v_isShared_4412_ == 0)
{
v___x_4414_ = v___x_4411_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4409_);
v___x_4414_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
return v___x_4414_;
}
}
}
}
}
else
{
lean_object* v_a_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4424_; 
lean_del_object(v___x_4355_);
lean_dec(v_snd_4353_);
lean_dec_ref(v_G_4315_);
lean_dec(v___f_4311_);
lean_dec_ref(v_toMonadRef_4310_);
lean_dec_ref(v___x_4309_);
lean_dec_ref(v___x_4308_);
lean_dec(v___x_4307_);
v_a_4417_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4419_ = v___x_4358_;
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
else
{
lean_inc(v_a_4417_);
lean_dec(v___x_4358_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4420_ == 0)
{
v___x_4422_ = v___x_4419_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4417_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
}
}
v___jp_4328_:
{
if (lean_obj_tag(v___y_4329_) == 0)
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4342_; 
v_a_4330_ = lean_ctor_get(v___y_4329_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v___y_4329_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4332_ = v___y_4329_;
v_isShared_4333_ = v_isSharedCheck_4342_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_a_4330_);
lean_dec(v___y_4329_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4342_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
if (lean_obj_tag(v_a_4330_) == 0)
{
lean_object* v_a_4334_; lean_object* v___x_4336_; 
lean_dec_ref(v_G_4315_);
v_a_4334_ = lean_ctor_get(v_a_4330_, 0);
lean_inc(v_a_4334_);
lean_dec_ref_known(v_a_4330_, 1);
if (v_isShared_4333_ == 0)
{
lean_ctor_set(v___x_4332_, 0, v_a_4334_);
v___x_4336_ = v___x_4332_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4334_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
else
{
lean_object* v_a_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; 
lean_del_object(v___x_4332_);
v_a_4338_ = lean_ctor_get(v_a_4330_, 0);
lean_inc(v_a_4338_);
lean_dec_ref_known(v_a_4330_, 1);
v___x_4339_ = lean_unsigned_to_nat(1u);
v___x_4340_ = lean_nat_add(v_next_4312_, v___x_4339_);
lean_inc(v___y_4326_);
lean_inc_ref(v___y_4325_);
lean_inc(v___y_4324_);
lean_inc_ref(v___y_4323_);
lean_inc(v___y_4322_);
lean_inc_ref(v___y_4321_);
lean_inc(v___y_4320_);
lean_inc_ref(v___y_4319_);
lean_inc(v___y_4318_);
lean_inc(v___y_4317_);
lean_inc_ref(v___y_4316_);
v___x_4341_ = lean_apply_16(v_G_4315_, v___x_4340_, v_a_4338_, lean_box(0), lean_box(0), v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_, lean_box(0));
return v___x_4341_;
}
}
}
else
{
lean_object* v_a_4343_; lean_object* v___x_4345_; uint8_t v_isShared_4346_; uint8_t v_isSharedCheck_4350_; 
lean_dec_ref(v_G_4315_);
v_a_4343_ = lean_ctor_get(v___y_4329_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v___y_4329_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4345_ = v___y_4329_;
v_isShared_4346_ = v_isSharedCheck_4350_;
goto v_resetjp_4344_;
}
else
{
lean_inc(v_a_4343_);
lean_dec(v___y_4329_);
v___x_4345_ = lean_box(0);
v_isShared_4346_ = v_isSharedCheck_4350_;
goto v_resetjp_4344_;
}
v_resetjp_4344_:
{
lean_object* v___x_4348_; 
if (v_isShared_4346_ == 0)
{
v___x_4348_ = v___x_4345_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v_a_4343_);
v___x_4348_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
return v___x_4348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed(lean_object** _args){
lean_object* v___x_4427_ = _args[0];
lean_object* v_hypotheses_4428_ = _args[1];
lean_object* v_cacheId_4429_ = _args[2];
lean_object* v_methods_4430_ = _args[3];
lean_object* v_config_4431_ = _args[4];
lean_object* v___x_4432_ = _args[5];
lean_object* v___x_4433_ = _args[6];
lean_object* v___x_4434_ = _args[7];
lean_object* v_toMonadRef_4435_ = _args[8];
lean_object* v___f_4436_ = _args[9];
lean_object* v_next_4437_ = _args[10];
lean_object* v_acc_4438_ = _args[11];
lean_object* v_h_4439_ = _args[12];
lean_object* v_G_4440_ = _args[13];
lean_object* v___y_4441_ = _args[14];
lean_object* v___y_4442_ = _args[15];
lean_object* v___y_4443_ = _args[16];
lean_object* v___y_4444_ = _args[17];
lean_object* v___y_4445_ = _args[18];
lean_object* v___y_4446_ = _args[19];
lean_object* v___y_4447_ = _args[20];
lean_object* v___y_4448_ = _args[21];
lean_object* v___y_4449_ = _args[22];
lean_object* v___y_4450_ = _args[23];
lean_object* v___y_4451_ = _args[24];
lean_object* v___y_4452_ = _args[25];
_start:
{
uint8_t v_cacheId_boxed_4453_; lean_object* v_res_4454_; 
v_cacheId_boxed_4453_ = lean_unbox(v_cacheId_4429_);
v_res_4454_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(v___x_4427_, v_hypotheses_4428_, v_cacheId_boxed_4453_, v_methods_4430_, v_config_4431_, v___x_4432_, v___x_4433_, v___x_4434_, v_toMonadRef_4435_, v___f_4436_, v_next_4437_, v_acc_4438_, v_h_4439_, v_G_4440_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_);
lean_dec(v___y_4451_);
lean_dec_ref(v___y_4450_);
lean_dec(v___y_4449_);
lean_dec_ref(v___y_4448_);
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec(v___y_4443_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v_next_4437_);
lean_dec_ref(v_hypotheses_4428_);
lean_dec(v___x_4427_);
return v_res_4454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(uint8_t v_cacheId_4455_, lean_object* v_methods_4456_, lean_object* v_config_4457_, lean_object* v_a_4458_, lean_object* v_a_4459_, lean_object* v_a_4460_, lean_object* v_a_4461_, lean_object* v_a_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_){
_start:
{
lean_object* v___x_4470_; lean_object* v_toApplicative_4471_; lean_object* v_toFunctor_4472_; lean_object* v_toSeq_4473_; lean_object* v_toSeqLeft_4474_; lean_object* v_toSeqRight_4475_; lean_object* v___f_4476_; lean_object* v___f_4477_; lean_object* v___f_4478_; lean_object* v___f_4479_; lean_object* v___x_4480_; lean_object* v___f_4481_; lean_object* v___f_4482_; lean_object* v___f_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v_toApplicative_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4574_; 
v___x_4470_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_4471_ = lean_ctor_get(v___x_4470_, 0);
v_toFunctor_4472_ = lean_ctor_get(v_toApplicative_4471_, 0);
v_toSeq_4473_ = lean_ctor_get(v_toApplicative_4471_, 2);
v_toSeqLeft_4474_ = lean_ctor_get(v_toApplicative_4471_, 3);
v_toSeqRight_4475_ = lean_ctor_get(v_toApplicative_4471_, 4);
v___f_4476_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_4477_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_4472_, 2);
v___f_4478_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4478_, 0, v_toFunctor_4472_);
v___f_4479_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4479_, 0, v_toFunctor_4472_);
v___x_4480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4480_, 0, v___f_4478_);
lean_ctor_set(v___x_4480_, 1, v___f_4479_);
lean_inc(v_toSeqRight_4475_);
v___f_4481_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4481_, 0, v_toSeqRight_4475_);
lean_inc(v_toSeqLeft_4474_);
v___f_4482_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4482_, 0, v_toSeqLeft_4474_);
lean_inc(v_toSeq_4473_);
v___f_4483_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4483_, 0, v_toSeq_4473_);
v___x_4484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4484_, 0, v___x_4480_);
lean_ctor_set(v___x_4484_, 1, v___f_4476_);
lean_ctor_set(v___x_4484_, 2, v___f_4483_);
lean_ctor_set(v___x_4484_, 3, v___f_4482_);
lean_ctor_set(v___x_4484_, 4, v___f_4481_);
v___x_4485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4484_);
lean_ctor_set(v___x_4485_, 1, v___f_4477_);
v___x_4486_ = l_StateRefT_x27_instMonad___redArg(v___x_4485_);
v_toApplicative_4487_ = lean_ctor_get(v___x_4486_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4574_ == 0)
{
lean_object* v_unused_4575_; 
v_unused_4575_ = lean_ctor_get(v___x_4486_, 1);
lean_dec(v_unused_4575_);
v___x_4489_ = v___x_4486_;
v_isShared_4490_ = v_isSharedCheck_4574_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_toApplicative_4487_);
lean_dec(v___x_4486_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4574_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v_toFunctor_4491_; lean_object* v_toSeq_4492_; lean_object* v_toSeqLeft_4493_; lean_object* v_toSeqRight_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4572_; 
v_toFunctor_4491_ = lean_ctor_get(v_toApplicative_4487_, 0);
v_toSeq_4492_ = lean_ctor_get(v_toApplicative_4487_, 2);
v_toSeqLeft_4493_ = lean_ctor_get(v_toApplicative_4487_, 3);
v_toSeqRight_4494_ = lean_ctor_get(v_toApplicative_4487_, 4);
v_isSharedCheck_4572_ = !lean_is_exclusive(v_toApplicative_4487_);
if (v_isSharedCheck_4572_ == 0)
{
lean_object* v_unused_4573_; 
v_unused_4573_ = lean_ctor_get(v_toApplicative_4487_, 1);
lean_dec(v_unused_4573_);
v___x_4496_ = v_toApplicative_4487_;
v_isShared_4497_ = v_isSharedCheck_4572_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_toSeqRight_4494_);
lean_inc(v_toSeqLeft_4493_);
lean_inc(v_toSeq_4492_);
lean_inc(v_toFunctor_4491_);
lean_dec(v_toApplicative_4487_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4572_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___f_4498_; lean_object* v___f_4499_; lean_object* v___f_4500_; lean_object* v___f_4501_; lean_object* v___x_4502_; lean_object* v___f_4503_; lean_object* v___f_4504_; lean_object* v___f_4505_; lean_object* v___x_4507_; 
v___f_4498_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_4499_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_4491_);
v___f_4500_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4500_, 0, v_toFunctor_4491_);
v___f_4501_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4501_, 0, v_toFunctor_4491_);
v___x_4502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4502_, 0, v___f_4500_);
lean_ctor_set(v___x_4502_, 1, v___f_4501_);
v___f_4503_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4503_, 0, v_toSeqRight_4494_);
v___f_4504_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4504_, 0, v_toSeqLeft_4493_);
v___f_4505_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4505_, 0, v_toSeq_4492_);
if (v_isShared_4497_ == 0)
{
lean_ctor_set(v___x_4496_, 4, v___f_4503_);
lean_ctor_set(v___x_4496_, 3, v___f_4504_);
lean_ctor_set(v___x_4496_, 2, v___f_4505_);
lean_ctor_set(v___x_4496_, 1, v___f_4498_);
lean_ctor_set(v___x_4496_, 0, v___x_4502_);
v___x_4507_ = v___x_4496_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v___x_4502_);
lean_ctor_set(v_reuseFailAlloc_4571_, 1, v___f_4498_);
lean_ctor_set(v_reuseFailAlloc_4571_, 2, v___f_4505_);
lean_ctor_set(v_reuseFailAlloc_4571_, 3, v___f_4504_);
lean_ctor_set(v_reuseFailAlloc_4571_, 4, v___f_4503_);
v___x_4507_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
lean_object* v___x_4509_; 
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 1, v___f_4499_);
lean_ctor_set(v___x_4489_, 0, v___x_4507_);
v___x_4509_ = v___x_4489_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v___x_4507_);
lean_ctor_set(v_reuseFailAlloc_4570_, 1, v___f_4499_);
v___x_4509_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v_toMonadRef_4518_; lean_object* v___f_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v_hypotheses_4522_; lean_object* v___x_4523_; lean_object* v_newHyps_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___f_4528_; lean_object* v___x_4529_; lean_object* v___x_21939__overap_4530_; lean_object* v___x_4531_; 
v___x_4510_ = l_StateRefT_x27_instMonad___redArg(v___x_4509_);
v___x_4511_ = l_ReaderT_instMonad___redArg(v___x_4510_);
v___x_4512_ = l_StateRefT_x27_instMonad___redArg(v___x_4511_);
v___x_4513_ = l_ReaderT_instMonad___redArg(v___x_4512_);
v___x_4514_ = l_ReaderT_instMonad___redArg(v___x_4513_);
v___x_4515_ = l_StateRefT_x27_instMonad___redArg(v___x_4514_);
v___x_4516_ = l_ReaderT_instMonad___redArg(v___x_4515_);
v___x_4517_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_4518_ = lean_ctor_get(v___x_4517_, 0);
v___f_4519_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_4520_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_4521_ = lean_st_ref_get(v_a_4459_);
v_hypotheses_4522_ = lean_ctor_get(v___x_4521_, 3);
lean_inc_ref(v_hypotheses_4522_);
lean_dec(v___x_4521_);
v___x_4523_ = lean_array_get_size(v_hypotheses_4522_);
v_newHyps_4524_ = lean_mk_empty_array_with_capacity(v___x_4523_);
v___x_4525_ = lean_unsigned_to_nat(0u);
v___x_4526_ = lean_box(0);
v___x_4527_ = lean_box(v_cacheId_4455_);
lean_inc_ref(v_toMonadRef_4518_);
v___f_4528_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed), 26, 10);
lean_closure_set(v___f_4528_, 0, v___x_4523_);
lean_closure_set(v___f_4528_, 1, v_hypotheses_4522_);
lean_closure_set(v___f_4528_, 2, v___x_4527_);
lean_closure_set(v___f_4528_, 3, v_methods_4456_);
lean_closure_set(v___f_4528_, 4, v_config_4457_);
lean_closure_set(v___f_4528_, 5, v___x_4526_);
lean_closure_set(v___f_4528_, 6, v___x_4516_);
lean_closure_set(v___f_4528_, 7, v___x_4520_);
lean_closure_set(v___f_4528_, 8, v_toMonadRef_4518_);
lean_closure_set(v___f_4528_, 9, v___f_4519_);
v___x_4529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4526_);
lean_ctor_set(v___x_4529_, 1, v_newHyps_4524_);
v___x_21939__overap_4530_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_4528_, v___x_4525_, v___x_4529_, lean_box(0));
lean_inc(v_a_4468_);
lean_inc_ref(v_a_4467_);
lean_inc(v_a_4466_);
lean_inc_ref(v_a_4465_);
lean_inc(v_a_4464_);
lean_inc_ref(v_a_4463_);
lean_inc(v_a_4462_);
lean_inc_ref(v_a_4461_);
lean_inc(v_a_4460_);
lean_inc(v_a_4459_);
lean_inc_ref(v_a_4458_);
v___x_4531_ = lean_apply_12(v___x_21939__overap_4530_, v_a_4458_, v_a_4459_, v_a_4460_, v_a_4461_, v_a_4462_, v_a_4463_, v_a_4464_, v_a_4465_, v_a_4466_, v_a_4467_, v_a_4468_, lean_box(0));
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4561_; 
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4561_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4561_ == 0)
{
v___x_4534_ = v___x_4531_;
v_isShared_4535_ = v_isSharedCheck_4561_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4531_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4561_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v_fst_4536_; 
v_fst_4536_ = lean_ctor_get(v_a_4532_, 0);
if (lean_obj_tag(v_fst_4536_) == 0)
{
lean_object* v_snd_4537_; lean_object* v___x_4538_; lean_object* v_caches_4539_; lean_object* v_typeAnalysis_4540_; lean_object* v_target_4541_; uint8_t v_didChange_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4555_; 
v_snd_4537_ = lean_ctor_get(v_a_4532_, 1);
lean_inc(v_snd_4537_);
lean_dec(v_a_4532_);
v___x_4538_ = lean_st_ref_take(v_a_4459_);
v_caches_4539_ = lean_ctor_get(v___x_4538_, 0);
v_typeAnalysis_4540_ = lean_ctor_get(v___x_4538_, 1);
v_target_4541_ = lean_ctor_get(v___x_4538_, 2);
v_didChange_4542_ = lean_ctor_get_uint8(v___x_4538_, sizeof(void*)*4);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4555_ == 0)
{
lean_object* v_unused_4556_; 
v_unused_4556_ = lean_ctor_get(v___x_4538_, 3);
lean_dec(v_unused_4556_);
v___x_4544_ = v___x_4538_;
v_isShared_4545_ = v_isSharedCheck_4555_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_target_4541_);
lean_inc(v_typeAnalysis_4540_);
lean_inc(v_caches_4539_);
lean_dec(v___x_4538_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4555_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
lean_ctor_set(v___x_4544_, 3, v_snd_4537_);
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_caches_4539_);
lean_ctor_set(v_reuseFailAlloc_4554_, 1, v_typeAnalysis_4540_);
lean_ctor_set(v_reuseFailAlloc_4554_, 2, v_target_4541_);
lean_ctor_set(v_reuseFailAlloc_4554_, 3, v_snd_4537_);
lean_ctor_set_uint8(v_reuseFailAlloc_4554_, sizeof(void*)*4, v_didChange_4542_);
v___x_4547_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
lean_object* v___x_4548_; uint8_t v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4552_; 
v___x_4548_ = lean_st_ref_put(v_a_4459_, v___x_4547_);
v___x_4549_ = 0;
v___x_4550_ = lean_box(v___x_4549_);
if (v_isShared_4535_ == 0)
{
lean_ctor_set(v___x_4534_, 0, v___x_4550_);
v___x_4552_ = v___x_4534_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v___x_4550_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
return v___x_4552_;
}
}
}
}
else
{
lean_object* v_val_4557_; lean_object* v___x_4559_; 
lean_inc_ref(v_fst_4536_);
lean_dec(v_a_4532_);
v_val_4557_ = lean_ctor_get(v_fst_4536_, 0);
lean_inc(v_val_4557_);
lean_dec_ref_known(v_fst_4536_, 1);
if (v_isShared_4535_ == 0)
{
lean_ctor_set(v___x_4534_, 0, v_val_4557_);
v___x_4559_ = v___x_4534_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v_val_4557_);
v___x_4559_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
return v___x_4559_;
}
}
}
}
else
{
lean_object* v_a_4562_; lean_object* v___x_4564_; uint8_t v_isShared_4565_; uint8_t v_isSharedCheck_4569_; 
v_a_4562_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4569_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4569_ == 0)
{
v___x_4564_ = v___x_4531_;
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
else
{
lean_inc(v_a_4562_);
lean_dec(v___x_4531_);
v___x_4564_ = lean_box(0);
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
v_resetjp_4563_:
{
lean_object* v___x_4567_; 
if (v_isShared_4565_ == 0)
{
v___x_4567_ = v___x_4564_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v_a_4562_);
v___x_4567_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
return v___x_4567_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___boxed(lean_object* v_cacheId_4576_, lean_object* v_methods_4577_, lean_object* v_config_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_){
_start:
{
uint8_t v_cacheId_boxed_4591_; lean_object* v_res_4592_; 
v_cacheId_boxed_4591_ = lean_unbox(v_cacheId_4576_);
v_res_4592_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(v_cacheId_boxed_4591_, v_methods_4577_, v_config_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_, v_a_4587_, v_a_4588_, v_a_4589_);
lean_dec(v_a_4589_);
lean_dec_ref(v_a_4588_);
lean_dec(v_a_4587_);
lean_dec_ref(v_a_4586_);
lean_dec(v_a_4585_);
lean_dec_ref(v_a_4584_);
lean_dec(v_a_4583_);
lean_dec_ref(v_a_4582_);
lean_dec(v_a_4581_);
lean_dec(v_a_4580_);
lean_dec_ref(v_a_4579_);
return v_res_4592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(lean_object* v___x_4593_, lean_object* v_hypotheses_4594_, uint8_t v_cacheId_4595_, lean_object* v_methods_4596_, lean_object* v_config_4597_, lean_object* v___x_4598_, lean_object* v___x_4599_, lean_object* v___x_4600_, lean_object* v_toMonadRef_4601_, lean_object* v___f_4602_, lean_object* v_next_4603_, lean_object* v_acc_4604_, lean_object* v_h_4605_, lean_object* v_G_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
lean_object* v___y_4620_; uint8_t v___x_4642_; 
v___x_4642_ = lean_nat_dec_lt(v_next_4603_, v___x_4593_);
if (v___x_4642_ == 0)
{
lean_object* v___x_4643_; 
lean_dec_ref(v_G_4606_);
lean_dec(v___f_4602_);
lean_dec_ref(v_toMonadRef_4601_);
lean_dec_ref(v___x_4600_);
lean_dec_ref(v___x_4599_);
lean_dec(v___x_4598_);
lean_dec_ref(v_config_4597_);
lean_dec_ref(v_methods_4596_);
v___x_4643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4643_, 0, v_acc_4604_);
return v___x_4643_;
}
else
{
lean_object* v_snd_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4716_; 
v_snd_4644_ = lean_ctor_get(v_acc_4604_, 1);
v_isSharedCheck_4716_ = !lean_is_exclusive(v_acc_4604_);
if (v_isSharedCheck_4716_ == 0)
{
lean_object* v_unused_4717_; 
v_unused_4717_ = lean_ctor_get(v_acc_4604_, 0);
lean_dec(v_unused_4717_);
v___x_4646_ = v_acc_4604_;
v_isShared_4647_ = v_isSharedCheck_4716_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_snd_4644_);
lean_dec(v_acc_4604_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4716_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; 
v___x_4648_ = lean_array_fget_borrowed(v_hypotheses_4594_, v_next_4603_);
lean_inc(v___x_4648_);
v___x_4649_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_4595_, v_methods_4596_, v_config_4597_, v___x_4648_, v___y_4608_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
if (lean_obj_tag(v___x_4649_) == 0)
{
lean_object* v_a_4650_; lean_object* v_type_4651_; lean_object* v_value_4652_; uint8_t v___x_4653_; 
v_a_4650_ = lean_ctor_get(v___x_4649_, 0);
lean_inc(v_a_4650_);
lean_dec_ref_known(v___x_4649_, 1);
v_type_4651_ = lean_ctor_get(v_a_4650_, 1);
v_value_4652_ = lean_ctor_get(v_a_4650_, 2);
v___x_4653_ = l_Lean_Expr_isFalse(v_type_4651_);
if (v___x_4653_ == 0)
{
lean_object* v_type_4654_; lean_object* v___f_4655_; uint8_t v___x_4656_; 
lean_del_object(v___x_4646_);
v_type_4654_ = lean_ctor_get(v___x_4648_, 1);
lean_inc(v___x_4598_);
lean_inc(v_a_4650_);
lean_inc(v_snd_4644_);
v___f_4655_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed), 16, 3);
lean_closure_set(v___f_4655_, 0, v_snd_4644_);
lean_closure_set(v___f_4655_, 1, v_a_4650_);
lean_closure_set(v___f_4655_, 2, v___x_4598_);
v___x_4656_ = lean_expr_eqv(v_type_4654_, v_type_4651_);
if (v___x_4656_ == 0)
{
lean_object* v_toCold_4657_; lean_object* v_options_4658_; lean_object* v_inheritedTraceOptions_4659_; uint8_t v_hasTrace_4660_; 
lean_inc_ref(v_type_4651_);
lean_dec(v_a_4650_);
lean_dec(v_snd_4644_);
lean_dec(v___x_4598_);
v_toCold_4657_ = lean_ctor_get(v___y_4616_, 0);
v_options_4658_ = lean_ctor_get(v_toCold_4657_, 2);
v_inheritedTraceOptions_4659_ = lean_ctor_get(v_toCold_4657_, 11);
v_hasTrace_4660_ = lean_ctor_get_uint8(v_options_4658_, sizeof(void*)*1);
if (v_hasTrace_4660_ == 0)
{
lean_dec_ref(v_type_4651_);
lean_dec(v___f_4602_);
lean_dec_ref(v_toMonadRef_4601_);
lean_dec_ref(v___x_4600_);
lean_dec_ref(v___x_4599_);
goto v___jp_4661_;
}
else
{
lean_object* v___x_4664_; lean_object* v___x_4665_; uint8_t v___x_4666_; 
v___x_4664_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_4665_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_4666_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4659_, v_options_4658_, v___x_4665_);
if (v___x_4666_ == 0)
{
lean_dec_ref(v_type_4651_);
lean_dec(v___f_4602_);
lean_dec_ref(v_toMonadRef_4601_);
lean_dec_ref(v___x_4600_);
lean_dec_ref(v___x_4599_);
goto v___jp_4661_;
}
else
{
lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_22041__overap_4672_; lean_object* v___x_4673_; 
lean_inc_ref(v_type_4654_);
v___x_4667_ = l_Lean_MessageData_ofExpr(v_type_4654_);
v___x_4668_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_4669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4667_);
lean_ctor_set(v___x_4669_, 1, v___x_4668_);
v___x_4670_ = l_Lean_MessageData_ofExpr(v_type_4651_);
v___x_4671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4671_, 0, v___x_4669_);
lean_ctor_set(v___x_4671_, 1, v___x_4670_);
v___x_22041__overap_4672_ = l_Lean_addTrace___redArg(v___x_4599_, v___x_4600_, v_toMonadRef_4601_, v___f_4602_, v___x_4664_, v___x_4671_);
lean_inc(v___y_4617_);
lean_inc_ref(v___y_4616_);
lean_inc(v___y_4615_);
lean_inc_ref(v___y_4614_);
lean_inc(v___y_4613_);
lean_inc_ref(v___y_4612_);
lean_inc(v___y_4611_);
lean_inc_ref(v___y_4610_);
lean_inc(v___y_4609_);
lean_inc(v___y_4608_);
lean_inc_ref(v___y_4607_);
v___x_4673_ = lean_apply_12(v___x_22041__overap_4672_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, lean_box(0));
if (lean_obj_tag(v___x_4673_) == 0)
{
lean_object* v_a_4674_; lean_object* v___x_4675_; 
v_a_4674_ = lean_ctor_get(v___x_4673_, 0);
lean_inc(v_a_4674_);
lean_dec_ref_known(v___x_4673_, 1);
v___x_4675_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4642_, v___f_4655_, v_a_4674_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
v___y_4620_ = v___x_4675_;
goto v___jp_4619_;
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4683_; 
lean_dec_ref(v___f_4655_);
lean_dec_ref(v_G_4606_);
v_a_4676_ = lean_ctor_get(v___x_4673_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4673_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4678_ = v___x_4673_;
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4673_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4679_ == 0)
{
v___x_4681_ = v___x_4678_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
}
}
}
v___jp_4661_:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; 
v___x_4662_ = lean_box(0);
v___x_4663_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4642_, v___f_4655_, v___x_4662_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
v___y_4620_ = v___x_4663_;
goto v___jp_4619_;
}
}
else
{
lean_object* v___x_4684_; lean_object* v___x_4685_; 
lean_dec_ref(v___f_4655_);
lean_dec(v___f_4602_);
lean_dec_ref(v_toMonadRef_4601_);
lean_dec_ref(v___x_4600_);
lean_dec_ref(v___x_4599_);
v___x_4684_ = lean_box(0);
v___x_4685_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4644_, v_a_4650_, v___x_4598_, v___x_4684_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
v___y_4620_ = v___x_4685_;
goto v___jp_4619_;
}
}
else
{
lean_object* v___x_4686_; 
lean_inc_ref(v_value_4652_);
lean_dec(v_a_4650_);
lean_dec_ref(v_G_4606_);
lean_dec(v___f_4602_);
lean_dec_ref(v_toMonadRef_4601_);
lean_dec_ref(v___x_4600_);
lean_dec_ref(v___x_4599_);
lean_dec(v___x_4598_);
v___x_4686_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_4652_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
if (lean_obj_tag(v___x_4686_) == 0)
{
lean_object* v___x_4688_; uint8_t v_isShared_4689_; uint8_t v_isSharedCheck_4698_; 
v_isSharedCheck_4698_ = !lean_is_exclusive(v___x_4686_);
if (v_isSharedCheck_4698_ == 0)
{
lean_object* v_unused_4699_; 
v_unused_4699_ = lean_ctor_get(v___x_4686_, 0);
lean_dec(v_unused_4699_);
v___x_4688_ = v___x_4686_;
v_isShared_4689_ = v_isSharedCheck_4698_;
goto v_resetjp_4687_;
}
else
{
lean_dec(v___x_4686_);
v___x_4688_ = lean_box(0);
v_isShared_4689_ = v_isSharedCheck_4698_;
goto v_resetjp_4687_;
}
v_resetjp_4687_:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4693_; 
v___x_4690_ = lean_box(v___x_4653_);
v___x_4691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4691_, 0, v___x_4690_);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 0, v___x_4691_);
v___x_4693_ = v___x_4646_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v___x_4691_);
lean_ctor_set(v_reuseFailAlloc_4697_, 1, v_snd_4644_);
v___x_4693_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
lean_object* v___x_4695_; 
if (v_isShared_4689_ == 0)
{
lean_ctor_set(v___x_4688_, 0, v___x_4693_);
v___x_4695_ = v___x_4688_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v___x_4693_);
v___x_4695_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
return v___x_4695_;
}
}
}
}
else
{
lean_object* v_a_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4707_; 
lean_del_object(v___x_4646_);
lean_dec(v_snd_4644_);
v_a_4700_ = lean_ctor_get(v___x_4686_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4686_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4702_ = v___x_4686_;
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_a_4700_);
lean_dec(v___x_4686_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___x_4705_; 
if (v_isShared_4703_ == 0)
{
v___x_4705_ = v___x_4702_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v_a_4700_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
}
}
else
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4715_; 
lean_del_object(v___x_4646_);
lean_dec(v_snd_4644_);
lean_dec_ref(v_G_4606_);
lean_dec(v___f_4602_);
lean_dec_ref(v_toMonadRef_4601_);
lean_dec_ref(v___x_4600_);
lean_dec_ref(v___x_4599_);
lean_dec(v___x_4598_);
v_a_4708_ = lean_ctor_get(v___x_4649_, 0);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___x_4649_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4710_ = v___x_4649_;
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v___x_4649_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v___x_4713_; 
if (v_isShared_4711_ == 0)
{
v___x_4713_ = v___x_4710_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4708_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
return v___x_4713_;
}
}
}
}
}
v___jp_4619_:
{
if (lean_obj_tag(v___y_4620_) == 0)
{
lean_object* v_a_4621_; lean_object* v___x_4623_; uint8_t v_isShared_4624_; uint8_t v_isSharedCheck_4633_; 
v_a_4621_ = lean_ctor_get(v___y_4620_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___y_4620_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4623_ = v___y_4620_;
v_isShared_4624_ = v_isSharedCheck_4633_;
goto v_resetjp_4622_;
}
else
{
lean_inc(v_a_4621_);
lean_dec(v___y_4620_);
v___x_4623_ = lean_box(0);
v_isShared_4624_ = v_isSharedCheck_4633_;
goto v_resetjp_4622_;
}
v_resetjp_4622_:
{
if (lean_obj_tag(v_a_4621_) == 0)
{
lean_object* v_a_4625_; lean_object* v___x_4627_; 
lean_dec_ref(v_G_4606_);
v_a_4625_ = lean_ctor_get(v_a_4621_, 0);
lean_inc(v_a_4625_);
lean_dec_ref_known(v_a_4621_, 1);
if (v_isShared_4624_ == 0)
{
lean_ctor_set(v___x_4623_, 0, v_a_4625_);
v___x_4627_ = v___x_4623_;
goto v_reusejp_4626_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v_a_4625_);
v___x_4627_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4626_;
}
v_reusejp_4626_:
{
return v___x_4627_;
}
}
else
{
lean_object* v_a_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
lean_del_object(v___x_4623_);
v_a_4629_ = lean_ctor_get(v_a_4621_, 0);
lean_inc(v_a_4629_);
lean_dec_ref_known(v_a_4621_, 1);
v___x_4630_ = lean_unsigned_to_nat(1u);
v___x_4631_ = lean_nat_add(v_next_4603_, v___x_4630_);
lean_inc(v___y_4617_);
lean_inc_ref(v___y_4616_);
lean_inc(v___y_4615_);
lean_inc_ref(v___y_4614_);
lean_inc(v___y_4613_);
lean_inc_ref(v___y_4612_);
lean_inc(v___y_4611_);
lean_inc_ref(v___y_4610_);
lean_inc(v___y_4609_);
lean_inc(v___y_4608_);
lean_inc_ref(v___y_4607_);
v___x_4632_ = lean_apply_16(v_G_4606_, v___x_4631_, v_a_4629_, lean_box(0), lean_box(0), v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, lean_box(0));
return v___x_4632_;
}
}
}
else
{
lean_object* v_a_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4641_; 
lean_dec_ref(v_G_4606_);
v_a_4634_ = lean_ctor_get(v___y_4620_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___y_4620_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4636_ = v___y_4620_;
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_a_4634_);
lean_dec(v___y_4620_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4639_; 
if (v_isShared_4637_ == 0)
{
v___x_4639_ = v___x_4636_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v_a_4634_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed(lean_object** _args){
lean_object* v___x_4718_ = _args[0];
lean_object* v_hypotheses_4719_ = _args[1];
lean_object* v_cacheId_4720_ = _args[2];
lean_object* v_methods_4721_ = _args[3];
lean_object* v_config_4722_ = _args[4];
lean_object* v___x_4723_ = _args[5];
lean_object* v___x_4724_ = _args[6];
lean_object* v___x_4725_ = _args[7];
lean_object* v_toMonadRef_4726_ = _args[8];
lean_object* v___f_4727_ = _args[9];
lean_object* v_next_4728_ = _args[10];
lean_object* v_acc_4729_ = _args[11];
lean_object* v_h_4730_ = _args[12];
lean_object* v_G_4731_ = _args[13];
lean_object* v___y_4732_ = _args[14];
lean_object* v___y_4733_ = _args[15];
lean_object* v___y_4734_ = _args[16];
lean_object* v___y_4735_ = _args[17];
lean_object* v___y_4736_ = _args[18];
lean_object* v___y_4737_ = _args[19];
lean_object* v___y_4738_ = _args[20];
lean_object* v___y_4739_ = _args[21];
lean_object* v___y_4740_ = _args[22];
lean_object* v___y_4741_ = _args[23];
lean_object* v___y_4742_ = _args[24];
lean_object* v___y_4743_ = _args[25];
_start:
{
uint8_t v_cacheId_boxed_4744_; lean_object* v_res_4745_; 
v_cacheId_boxed_4744_ = lean_unbox(v_cacheId_4720_);
v_res_4745_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(v___x_4718_, v_hypotheses_4719_, v_cacheId_boxed_4744_, v_methods_4721_, v_config_4722_, v___x_4723_, v___x_4724_, v___x_4725_, v_toMonadRef_4726_, v___f_4727_, v_next_4728_, v_acc_4729_, v_h_4730_, v_G_4731_, v___y_4732_, v___y_4733_, v___y_4734_, v___y_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_, v___y_4740_, v___y_4741_, v___y_4742_);
lean_dec(v___y_4742_);
lean_dec_ref(v___y_4741_);
lean_dec(v___y_4740_);
lean_dec_ref(v___y_4739_);
lean_dec(v___y_4738_);
lean_dec_ref(v___y_4737_);
lean_dec(v___y_4736_);
lean_dec_ref(v___y_4735_);
lean_dec(v___y_4734_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v_next_4728_);
lean_dec_ref(v_hypotheses_4719_);
lean_dec(v___x_4718_);
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(uint8_t v_cacheId_4746_, lean_object* v_methods_4747_, lean_object* v_config_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_, lean_object* v_a_4755_, lean_object* v_a_4756_, lean_object* v_a_4757_, lean_object* v_a_4758_, lean_object* v_a_4759_){
_start:
{
lean_object* v___x_4761_; lean_object* v_toApplicative_4762_; lean_object* v_toFunctor_4763_; lean_object* v_toSeq_4764_; lean_object* v_toSeqLeft_4765_; lean_object* v_toSeqRight_4766_; lean_object* v___f_4767_; lean_object* v___f_4768_; lean_object* v___f_4769_; lean_object* v___f_4770_; lean_object* v___x_4771_; lean_object* v___f_4772_; lean_object* v___f_4773_; lean_object* v___f_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v_toApplicative_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4865_; 
v___x_4761_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_4762_ = lean_ctor_get(v___x_4761_, 0);
v_toFunctor_4763_ = lean_ctor_get(v_toApplicative_4762_, 0);
v_toSeq_4764_ = lean_ctor_get(v_toApplicative_4762_, 2);
v_toSeqLeft_4765_ = lean_ctor_get(v_toApplicative_4762_, 3);
v_toSeqRight_4766_ = lean_ctor_get(v_toApplicative_4762_, 4);
v___f_4767_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_4768_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_4763_, 2);
v___f_4769_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4769_, 0, v_toFunctor_4763_);
v___f_4770_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4770_, 0, v_toFunctor_4763_);
v___x_4771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4771_, 0, v___f_4769_);
lean_ctor_set(v___x_4771_, 1, v___f_4770_);
lean_inc(v_toSeqRight_4766_);
v___f_4772_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4772_, 0, v_toSeqRight_4766_);
lean_inc(v_toSeqLeft_4765_);
v___f_4773_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4773_, 0, v_toSeqLeft_4765_);
lean_inc(v_toSeq_4764_);
v___f_4774_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4774_, 0, v_toSeq_4764_);
v___x_4775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4771_);
lean_ctor_set(v___x_4775_, 1, v___f_4767_);
lean_ctor_set(v___x_4775_, 2, v___f_4774_);
lean_ctor_set(v___x_4775_, 3, v___f_4773_);
lean_ctor_set(v___x_4775_, 4, v___f_4772_);
v___x_4776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4775_);
lean_ctor_set(v___x_4776_, 1, v___f_4768_);
v___x_4777_ = l_StateRefT_x27_instMonad___redArg(v___x_4776_);
v_toApplicative_4778_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4865_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4865_ == 0)
{
lean_object* v_unused_4866_; 
v_unused_4866_ = lean_ctor_get(v___x_4777_, 1);
lean_dec(v_unused_4866_);
v___x_4780_ = v___x_4777_;
v_isShared_4781_ = v_isSharedCheck_4865_;
goto v_resetjp_4779_;
}
else
{
lean_inc(v_toApplicative_4778_);
lean_dec(v___x_4777_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4865_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v_toFunctor_4782_; lean_object* v_toSeq_4783_; lean_object* v_toSeqLeft_4784_; lean_object* v_toSeqRight_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4863_; 
v_toFunctor_4782_ = lean_ctor_get(v_toApplicative_4778_, 0);
v_toSeq_4783_ = lean_ctor_get(v_toApplicative_4778_, 2);
v_toSeqLeft_4784_ = lean_ctor_get(v_toApplicative_4778_, 3);
v_toSeqRight_4785_ = lean_ctor_get(v_toApplicative_4778_, 4);
v_isSharedCheck_4863_ = !lean_is_exclusive(v_toApplicative_4778_);
if (v_isSharedCheck_4863_ == 0)
{
lean_object* v_unused_4864_; 
v_unused_4864_ = lean_ctor_get(v_toApplicative_4778_, 1);
lean_dec(v_unused_4864_);
v___x_4787_ = v_toApplicative_4778_;
v_isShared_4788_ = v_isSharedCheck_4863_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_toSeqRight_4785_);
lean_inc(v_toSeqLeft_4784_);
lean_inc(v_toSeq_4783_);
lean_inc(v_toFunctor_4782_);
lean_dec(v_toApplicative_4778_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4863_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
lean_object* v___f_4789_; lean_object* v___f_4790_; lean_object* v___f_4791_; lean_object* v___f_4792_; lean_object* v___x_4793_; lean_object* v___f_4794_; lean_object* v___f_4795_; lean_object* v___f_4796_; lean_object* v___x_4798_; 
v___f_4789_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_4790_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_4782_);
v___f_4791_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4791_, 0, v_toFunctor_4782_);
v___f_4792_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4792_, 0, v_toFunctor_4782_);
v___x_4793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4793_, 0, v___f_4791_);
lean_ctor_set(v___x_4793_, 1, v___f_4792_);
v___f_4794_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4794_, 0, v_toSeqRight_4785_);
v___f_4795_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4795_, 0, v_toSeqLeft_4784_);
v___f_4796_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4796_, 0, v_toSeq_4783_);
if (v_isShared_4788_ == 0)
{
lean_ctor_set(v___x_4787_, 4, v___f_4794_);
lean_ctor_set(v___x_4787_, 3, v___f_4795_);
lean_ctor_set(v___x_4787_, 2, v___f_4796_);
lean_ctor_set(v___x_4787_, 1, v___f_4789_);
lean_ctor_set(v___x_4787_, 0, v___x_4793_);
v___x_4798_ = v___x_4787_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v___x_4793_);
lean_ctor_set(v_reuseFailAlloc_4862_, 1, v___f_4789_);
lean_ctor_set(v_reuseFailAlloc_4862_, 2, v___f_4796_);
lean_ctor_set(v_reuseFailAlloc_4862_, 3, v___f_4795_);
lean_ctor_set(v_reuseFailAlloc_4862_, 4, v___f_4794_);
v___x_4798_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
lean_object* v___x_4800_; 
if (v_isShared_4781_ == 0)
{
lean_ctor_set(v___x_4780_, 1, v___f_4790_);
lean_ctor_set(v___x_4780_, 0, v___x_4798_);
v___x_4800_ = v___x_4780_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4861_; 
v_reuseFailAlloc_4861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4861_, 0, v___x_4798_);
lean_ctor_set(v_reuseFailAlloc_4861_, 1, v___f_4790_);
v___x_4800_ = v_reuseFailAlloc_4861_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v_toMonadRef_4809_; lean_object* v___f_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v_hypotheses_4813_; lean_object* v___x_4814_; lean_object* v_newHyps_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___f_4819_; lean_object* v___x_4820_; lean_object* v___x_21939__overap_4821_; lean_object* v___x_4822_; 
v___x_4801_ = l_StateRefT_x27_instMonad___redArg(v___x_4800_);
v___x_4802_ = l_ReaderT_instMonad___redArg(v___x_4801_);
v___x_4803_ = l_StateRefT_x27_instMonad___redArg(v___x_4802_);
v___x_4804_ = l_ReaderT_instMonad___redArg(v___x_4803_);
v___x_4805_ = l_ReaderT_instMonad___redArg(v___x_4804_);
v___x_4806_ = l_StateRefT_x27_instMonad___redArg(v___x_4805_);
v___x_4807_ = l_ReaderT_instMonad___redArg(v___x_4806_);
v___x_4808_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_4809_ = lean_ctor_get(v___x_4808_, 0);
v___f_4810_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_4811_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_4812_ = lean_st_ref_get(v_a_4750_);
v_hypotheses_4813_ = lean_ctor_get(v___x_4812_, 3);
lean_inc_ref(v_hypotheses_4813_);
lean_dec(v___x_4812_);
v___x_4814_ = lean_array_get_size(v_hypotheses_4813_);
v_newHyps_4815_ = lean_mk_empty_array_with_capacity(v___x_4814_);
v___x_4816_ = lean_unsigned_to_nat(0u);
v___x_4817_ = lean_box(0);
v___x_4818_ = lean_box(v_cacheId_4746_);
lean_inc_ref(v_toMonadRef_4809_);
v___f_4819_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed), 26, 10);
lean_closure_set(v___f_4819_, 0, v___x_4814_);
lean_closure_set(v___f_4819_, 1, v_hypotheses_4813_);
lean_closure_set(v___f_4819_, 2, v___x_4818_);
lean_closure_set(v___f_4819_, 3, v_methods_4747_);
lean_closure_set(v___f_4819_, 4, v_config_4748_);
lean_closure_set(v___f_4819_, 5, v___x_4817_);
lean_closure_set(v___f_4819_, 6, v___x_4807_);
lean_closure_set(v___f_4819_, 7, v___x_4811_);
lean_closure_set(v___f_4819_, 8, v_toMonadRef_4809_);
lean_closure_set(v___f_4819_, 9, v___f_4810_);
v___x_4820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4820_, 0, v___x_4817_);
lean_ctor_set(v___x_4820_, 1, v_newHyps_4815_);
v___x_21939__overap_4821_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_4819_, v___x_4816_, v___x_4820_, lean_box(0));
lean_inc(v_a_4759_);
lean_inc_ref(v_a_4758_);
lean_inc(v_a_4757_);
lean_inc_ref(v_a_4756_);
lean_inc(v_a_4755_);
lean_inc_ref(v_a_4754_);
lean_inc(v_a_4753_);
lean_inc_ref(v_a_4752_);
lean_inc(v_a_4751_);
lean_inc(v_a_4750_);
lean_inc_ref(v_a_4749_);
v___x_4822_ = lean_apply_12(v___x_21939__overap_4821_, v_a_4749_, v_a_4750_, v_a_4751_, v_a_4752_, v_a_4753_, v_a_4754_, v_a_4755_, v_a_4756_, v_a_4757_, v_a_4758_, v_a_4759_, lean_box(0));
if (lean_obj_tag(v___x_4822_) == 0)
{
lean_object* v_a_4823_; lean_object* v___x_4825_; uint8_t v_isShared_4826_; uint8_t v_isSharedCheck_4852_; 
v_a_4823_ = lean_ctor_get(v___x_4822_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4822_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4825_ = v___x_4822_;
v_isShared_4826_ = v_isSharedCheck_4852_;
goto v_resetjp_4824_;
}
else
{
lean_inc(v_a_4823_);
lean_dec(v___x_4822_);
v___x_4825_ = lean_box(0);
v_isShared_4826_ = v_isSharedCheck_4852_;
goto v_resetjp_4824_;
}
v_resetjp_4824_:
{
lean_object* v_fst_4827_; 
v_fst_4827_ = lean_ctor_get(v_a_4823_, 0);
if (lean_obj_tag(v_fst_4827_) == 0)
{
lean_object* v_snd_4828_; lean_object* v___x_4829_; lean_object* v_caches_4830_; lean_object* v_typeAnalysis_4831_; lean_object* v_target_4832_; uint8_t v_didChange_4833_; lean_object* v___x_4835_; uint8_t v_isShared_4836_; uint8_t v_isSharedCheck_4846_; 
v_snd_4828_ = lean_ctor_get(v_a_4823_, 1);
lean_inc(v_snd_4828_);
lean_dec(v_a_4823_);
v___x_4829_ = lean_st_ref_take(v_a_4750_);
v_caches_4830_ = lean_ctor_get(v___x_4829_, 0);
v_typeAnalysis_4831_ = lean_ctor_get(v___x_4829_, 1);
v_target_4832_ = lean_ctor_get(v___x_4829_, 2);
v_didChange_4833_ = lean_ctor_get_uint8(v___x_4829_, sizeof(void*)*4);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4829_);
if (v_isSharedCheck_4846_ == 0)
{
lean_object* v_unused_4847_; 
v_unused_4847_ = lean_ctor_get(v___x_4829_, 3);
lean_dec(v_unused_4847_);
v___x_4835_ = v___x_4829_;
v_isShared_4836_ = v_isSharedCheck_4846_;
goto v_resetjp_4834_;
}
else
{
lean_inc(v_target_4832_);
lean_inc(v_typeAnalysis_4831_);
lean_inc(v_caches_4830_);
lean_dec(v___x_4829_);
v___x_4835_ = lean_box(0);
v_isShared_4836_ = v_isSharedCheck_4846_;
goto v_resetjp_4834_;
}
v_resetjp_4834_:
{
lean_object* v___x_4838_; 
if (v_isShared_4836_ == 0)
{
lean_ctor_set(v___x_4835_, 3, v_snd_4828_);
v___x_4838_ = v___x_4835_;
goto v_reusejp_4837_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_caches_4830_);
lean_ctor_set(v_reuseFailAlloc_4845_, 1, v_typeAnalysis_4831_);
lean_ctor_set(v_reuseFailAlloc_4845_, 2, v_target_4832_);
lean_ctor_set(v_reuseFailAlloc_4845_, 3, v_snd_4828_);
lean_ctor_set_uint8(v_reuseFailAlloc_4845_, sizeof(void*)*4, v_didChange_4833_);
v___x_4838_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4837_;
}
v_reusejp_4837_:
{
lean_object* v___x_4839_; uint8_t v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4843_; 
v___x_4839_ = lean_st_ref_put(v_a_4750_, v___x_4838_);
v___x_4840_ = 0;
v___x_4841_ = lean_box(v___x_4840_);
if (v_isShared_4826_ == 0)
{
lean_ctor_set(v___x_4825_, 0, v___x_4841_);
v___x_4843_ = v___x_4825_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v___x_4841_);
v___x_4843_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
return v___x_4843_;
}
}
}
}
else
{
lean_object* v_val_4848_; lean_object* v___x_4850_; 
lean_inc_ref(v_fst_4827_);
lean_dec(v_a_4823_);
v_val_4848_ = lean_ctor_get(v_fst_4827_, 0);
lean_inc(v_val_4848_);
lean_dec_ref_known(v_fst_4827_, 1);
if (v_isShared_4826_ == 0)
{
lean_ctor_set(v___x_4825_, 0, v_val_4848_);
v___x_4850_ = v___x_4825_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v_val_4848_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
else
{
lean_object* v_a_4853_; lean_object* v___x_4855_; uint8_t v_isShared_4856_; uint8_t v_isSharedCheck_4860_; 
v_a_4853_ = lean_ctor_get(v___x_4822_, 0);
v_isSharedCheck_4860_ = !lean_is_exclusive(v___x_4822_);
if (v_isSharedCheck_4860_ == 0)
{
v___x_4855_ = v___x_4822_;
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
else
{
lean_inc(v_a_4853_);
lean_dec(v___x_4822_);
v___x_4855_ = lean_box(0);
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
v_resetjp_4854_:
{
lean_object* v___x_4858_; 
if (v_isShared_4856_ == 0)
{
v___x_4858_ = v___x_4855_;
goto v_reusejp_4857_;
}
else
{
lean_object* v_reuseFailAlloc_4859_; 
v_reuseFailAlloc_4859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4859_, 0, v_a_4853_);
v___x_4858_ = v_reuseFailAlloc_4859_;
goto v_reusejp_4857_;
}
v_reusejp_4857_:
{
return v___x_4858_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___boxed(lean_object* v_cacheId_4867_, lean_object* v_methods_4868_, lean_object* v_config_4869_, lean_object* v_a_4870_, lean_object* v_a_4871_, lean_object* v_a_4872_, lean_object* v_a_4873_, lean_object* v_a_4874_, lean_object* v_a_4875_, lean_object* v_a_4876_, lean_object* v_a_4877_, lean_object* v_a_4878_, lean_object* v_a_4879_, lean_object* v_a_4880_, lean_object* v_a_4881_){
_start:
{
uint8_t v_cacheId_boxed_4882_; lean_object* v_res_4883_; 
v_cacheId_boxed_4882_ = lean_unbox(v_cacheId_4867_);
v_res_4883_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(v_cacheId_boxed_4882_, v_methods_4868_, v_config_4869_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_, v_a_4874_, v_a_4875_, v_a_4876_, v_a_4877_, v_a_4878_, v_a_4879_, v_a_4880_);
lean_dec(v_a_4880_);
lean_dec_ref(v_a_4879_);
lean_dec(v_a_4878_);
lean_dec_ref(v_a_4877_);
lean_dec(v_a_4876_);
lean_dec_ref(v_a_4875_);
lean_dec(v_a_4874_);
lean_dec_ref(v_a_4873_);
lean_dec(v_a_4872_);
lean_dec(v_a_4871_);
lean_dec_ref(v_a_4870_);
return v_res_4883_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(lean_object* v_msgData_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_){
_start:
{
lean_object* v___x_4890_; lean_object* v_env_4891_; uint8_t v___x_4892_; lean_object* v_env_4893_; lean_object* v___x_4894_; lean_object* v_toCold_4895_; lean_object* v_mctx_4896_; lean_object* v_lctx_4897_; lean_object* v_options_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4890_ = lean_st_ref_get(v___y_4888_);
v_env_4891_ = lean_ctor_get(v___x_4890_, 0);
lean_inc_ref(v_env_4891_);
lean_dec(v___x_4890_);
v___x_4892_ = 0;
v_env_4893_ = l_Lean_Environment_setRecordingDeps(v_env_4891_, v___x_4892_);
v___x_4894_ = lean_st_ref_get(v___y_4886_);
v_toCold_4895_ = lean_ctor_get(v___y_4887_, 0);
v_mctx_4896_ = lean_ctor_get(v___x_4894_, 0);
lean_inc_ref(v_mctx_4896_);
lean_dec(v___x_4894_);
v_lctx_4897_ = lean_ctor_get(v___y_4885_, 2);
v_options_4898_ = lean_ctor_get(v_toCold_4895_, 2);
lean_inc_ref(v_options_4898_);
lean_inc_ref(v_lctx_4897_);
v___x_4899_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4899_, 0, v_env_4893_);
lean_ctor_set(v___x_4899_, 1, v_mctx_4896_);
lean_ctor_set(v___x_4899_, 2, v_lctx_4897_);
lean_ctor_set(v___x_4899_, 3, v_options_4898_);
v___x_4900_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4899_);
lean_ctor_set(v___x_4900_, 1, v_msgData_4884_);
v___x_4901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4901_, 0, v___x_4900_);
return v___x_4901_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0___boxed(lean_object* v_msgData_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_){
_start:
{
lean_object* v_res_4908_; 
v_res_4908_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msgData_4902_, v___y_4903_, v___y_4904_, v___y_4905_, v___y_4906_);
lean_dec(v___y_4906_);
lean_dec_ref(v___y_4905_);
lean_dec(v___y_4904_);
lean_dec_ref(v___y_4903_);
return v_res_4908_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4909_; double v___x_4910_; 
v___x_4909_ = lean_unsigned_to_nat(0u);
v___x_4910_ = lean_float_of_nat(v___x_4909_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(lean_object* v_cls_4914_, lean_object* v_msg_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_){
_start:
{
lean_object* v_ref_4921_; lean_object* v___x_4922_; lean_object* v_a_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4968_; 
v_ref_4921_ = lean_ctor_get(v___y_4918_, 2);
v___x_4922_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_4915_, v___y_4916_, v___y_4917_, v___y_4918_, v___y_4919_);
v_a_4923_ = lean_ctor_get(v___x_4922_, 0);
v_isSharedCheck_4968_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4925_ = v___x_4922_;
v_isShared_4926_ = v_isSharedCheck_4968_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_a_4923_);
lean_dec(v___x_4922_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4968_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4927_; lean_object* v_traceState_4928_; lean_object* v_env_4929_; lean_object* v_nextMacroScope_4930_; lean_object* v_ngen_4931_; lean_object* v_auxDeclNGen_4932_; lean_object* v_cache_4933_; lean_object* v_recordedDeps_4934_; lean_object* v_messages_4935_; lean_object* v_infoState_4936_; lean_object* v_snapshotTasks_4937_; lean_object* v___x_4939_; uint8_t v_isShared_4940_; uint8_t v_isSharedCheck_4967_; 
v___x_4927_ = lean_st_ref_take(v___y_4919_);
v_traceState_4928_ = lean_ctor_get(v___x_4927_, 4);
v_env_4929_ = lean_ctor_get(v___x_4927_, 0);
v_nextMacroScope_4930_ = lean_ctor_get(v___x_4927_, 1);
v_ngen_4931_ = lean_ctor_get(v___x_4927_, 2);
v_auxDeclNGen_4932_ = lean_ctor_get(v___x_4927_, 3);
v_cache_4933_ = lean_ctor_get(v___x_4927_, 5);
v_recordedDeps_4934_ = lean_ctor_get(v___x_4927_, 6);
v_messages_4935_ = lean_ctor_get(v___x_4927_, 7);
v_infoState_4936_ = lean_ctor_get(v___x_4927_, 8);
v_snapshotTasks_4937_ = lean_ctor_get(v___x_4927_, 9);
v_isSharedCheck_4967_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4967_ == 0)
{
v___x_4939_ = v___x_4927_;
v_isShared_4940_ = v_isSharedCheck_4967_;
goto v_resetjp_4938_;
}
else
{
lean_inc(v_snapshotTasks_4937_);
lean_inc(v_infoState_4936_);
lean_inc(v_messages_4935_);
lean_inc(v_recordedDeps_4934_);
lean_inc(v_cache_4933_);
lean_inc(v_traceState_4928_);
lean_inc(v_auxDeclNGen_4932_);
lean_inc(v_ngen_4931_);
lean_inc(v_nextMacroScope_4930_);
lean_inc(v_env_4929_);
lean_dec(v___x_4927_);
v___x_4939_ = lean_box(0);
v_isShared_4940_ = v_isSharedCheck_4967_;
goto v_resetjp_4938_;
}
v_resetjp_4938_:
{
uint64_t v_tid_4941_; lean_object* v_traces_4942_; lean_object* v___x_4944_; uint8_t v_isShared_4945_; uint8_t v_isSharedCheck_4966_; 
v_tid_4941_ = lean_ctor_get_uint64(v_traceState_4928_, sizeof(void*)*1);
v_traces_4942_ = lean_ctor_get(v_traceState_4928_, 0);
v_isSharedCheck_4966_ = !lean_is_exclusive(v_traceState_4928_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4944_ = v_traceState_4928_;
v_isShared_4945_ = v_isSharedCheck_4966_;
goto v_resetjp_4943_;
}
else
{
lean_inc(v_traces_4942_);
lean_dec(v_traceState_4928_);
v___x_4944_ = lean_box(0);
v_isShared_4945_ = v_isSharedCheck_4966_;
goto v_resetjp_4943_;
}
v_resetjp_4943_:
{
lean_object* v___x_4946_; lean_object* v___x_4947_; double v___x_4948_; uint8_t v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4957_; 
v___x_4946_ = lean_box(0);
v___x_4947_ = lean_box(0);
v___x_4948_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_4949_ = 0;
v___x_4950_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_4951_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4951_, 0, v_cls_4914_);
lean_ctor_set(v___x_4951_, 1, v___x_4947_);
lean_ctor_set(v___x_4951_, 2, v___x_4950_);
lean_ctor_set_float(v___x_4951_, sizeof(void*)*3, v___x_4948_);
lean_ctor_set_float(v___x_4951_, sizeof(void*)*3 + 8, v___x_4948_);
lean_ctor_set_uint8(v___x_4951_, sizeof(void*)*3 + 16, v___x_4949_);
v___x_4952_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_4953_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4953_, 0, v___x_4951_);
lean_ctor_set(v___x_4953_, 1, v_a_4923_);
lean_ctor_set(v___x_4953_, 2, v___x_4952_);
lean_inc(v_ref_4921_);
v___x_4954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4954_, 0, v_ref_4921_);
lean_ctor_set(v___x_4954_, 1, v___x_4953_);
v___x_4955_ = l_Lean_PersistentArray_push___redArg(v_traces_4942_, v___x_4954_);
if (v_isShared_4945_ == 0)
{
lean_ctor_set(v___x_4944_, 0, v___x_4955_);
v___x_4957_ = v___x_4944_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v___x_4955_);
lean_ctor_set_uint64(v_reuseFailAlloc_4965_, sizeof(void*)*1, v_tid_4941_);
v___x_4957_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
lean_object* v___x_4959_; 
if (v_isShared_4940_ == 0)
{
lean_ctor_set(v___x_4939_, 4, v___x_4957_);
v___x_4959_ = v___x_4939_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4964_; 
v_reuseFailAlloc_4964_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4964_, 0, v_env_4929_);
lean_ctor_set(v_reuseFailAlloc_4964_, 1, v_nextMacroScope_4930_);
lean_ctor_set(v_reuseFailAlloc_4964_, 2, v_ngen_4931_);
lean_ctor_set(v_reuseFailAlloc_4964_, 3, v_auxDeclNGen_4932_);
lean_ctor_set(v_reuseFailAlloc_4964_, 4, v___x_4957_);
lean_ctor_set(v_reuseFailAlloc_4964_, 5, v_cache_4933_);
lean_ctor_set(v_reuseFailAlloc_4964_, 6, v_recordedDeps_4934_);
lean_ctor_set(v_reuseFailAlloc_4964_, 7, v_messages_4935_);
lean_ctor_set(v_reuseFailAlloc_4964_, 8, v_infoState_4936_);
lean_ctor_set(v_reuseFailAlloc_4964_, 9, v_snapshotTasks_4937_);
v___x_4959_ = v_reuseFailAlloc_4964_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
lean_object* v___x_4960_; lean_object* v___x_4962_; 
v___x_4960_ = lean_st_ref_put(v___y_4919_, v___x_4959_);
if (v_isShared_4926_ == 0)
{
lean_ctor_set(v___x_4925_, 0, v___x_4946_);
v___x_4962_ = v___x_4925_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v___x_4946_);
v___x_4962_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
return v___x_4962_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___boxed(lean_object* v_cls_4969_, lean_object* v_msg_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_){
_start:
{
lean_object* v_res_4976_; 
v_res_4976_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v_cls_4969_, v_msg_4970_, v___y_4971_, v___y_4972_, v___y_4973_, v___y_4974_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
lean_dec(v___y_4972_);
lean_dec_ref(v___y_4971_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(uint8_t v___x_4977_, lean_object* v___f_4978_, lean_object* v_____r_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_){
_start:
{
lean_object* v___x_4993_; lean_object* v_caches_4994_; lean_object* v_typeAnalysis_4995_; lean_object* v_target_4996_; lean_object* v_hypotheses_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5007_; 
v___x_4993_ = lean_st_ref_take(v___y_4982_);
v_caches_4994_ = lean_ctor_get(v___x_4993_, 0);
v_typeAnalysis_4995_ = lean_ctor_get(v___x_4993_, 1);
v_target_4996_ = lean_ctor_get(v___x_4993_, 2);
v_hypotheses_4997_ = lean_ctor_get(v___x_4993_, 3);
v_isSharedCheck_5007_ = !lean_is_exclusive(v___x_4993_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_4999_ = v___x_4993_;
v_isShared_5000_ = v_isSharedCheck_5007_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_hypotheses_4997_);
lean_inc(v_target_4996_);
lean_inc(v_typeAnalysis_4995_);
lean_inc(v_caches_4994_);
lean_dec(v___x_4993_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5007_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5001_; lean_object* v___x_5003_; 
v___x_5001_ = lean_box(0);
if (v_isShared_5000_ == 0)
{
v___x_5003_ = v___x_4999_;
goto v_reusejp_5002_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v_caches_4994_);
lean_ctor_set(v_reuseFailAlloc_5006_, 1, v_typeAnalysis_4995_);
lean_ctor_set(v_reuseFailAlloc_5006_, 2, v_target_4996_);
lean_ctor_set(v_reuseFailAlloc_5006_, 3, v_hypotheses_4997_);
v___x_5003_ = v_reuseFailAlloc_5006_;
goto v_reusejp_5002_;
}
v_reusejp_5002_:
{
lean_object* v___x_5004_; lean_object* v___x_5005_; 
lean_ctor_set_uint8(v___x_5003_, sizeof(void*)*4, v___x_4977_);
v___x_5004_ = lean_st_ref_put(v___y_4982_, v___x_5003_);
lean_inc(v___y_4991_);
lean_inc_ref(v___y_4990_);
lean_inc(v___y_4989_);
lean_inc_ref(v___y_4988_);
lean_inc(v___y_4987_);
lean_inc_ref(v___y_4986_);
lean_inc(v___y_4985_);
lean_inc_ref(v___y_4984_);
lean_inc(v___y_4983_);
lean_inc(v___y_4982_);
lean_inc_ref(v___y_4981_);
lean_inc(v___y_4980_);
v___x_5005_ = lean_apply_14(v___f_4978_, v___x_5001_, v___y_4980_, v___y_4981_, v___y_4982_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_, lean_box(0));
return v___x_5005_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1___boxed(lean_object* v___x_5008_, lean_object* v___f_5009_, lean_object* v_____r_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_){
_start:
{
uint8_t v___x_35752__boxed_5024_; lean_object* v_res_5025_; 
v___x_35752__boxed_5024_ = lean_unbox(v___x_5008_);
v_res_5025_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_35752__boxed_5024_, v___f_5009_, v_____r_5010_, v___y_5011_, v___y_5012_, v___y_5013_, v___y_5014_, v___y_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_);
lean_dec(v___y_5022_);
lean_dec_ref(v___y_5021_);
lean_dec(v___y_5020_);
lean_dec_ref(v___y_5019_);
lean_dec(v___y_5018_);
lean_dec_ref(v___y_5017_);
lean_dec(v___y_5016_);
lean_dec_ref(v___y_5015_);
lean_dec(v___y_5014_);
lean_dec(v___y_5013_);
lean_dec_ref(v___y_5012_);
lean_dec(v___y_5011_);
return v_res_5025_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(lean_object* v_snd_5026_, lean_object* v_a_5027_, lean_object* v___x_5028_, lean_object* v_____r_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_){
_start:
{
lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; 
v___x_5043_ = lean_array_push(v_snd_5026_, v_a_5027_);
v___x_5044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5044_, 0, v___x_5028_);
lean_ctor_set(v___x_5044_, 1, v___x_5043_);
v___x_5045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5045_, 0, v___x_5044_);
v___x_5046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5046_, 0, v___x_5045_);
return v___x_5046_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_snd_5047_ = _args[0];
lean_object* v_a_5048_ = _args[1];
lean_object* v___x_5049_ = _args[2];
lean_object* v_____r_5050_ = _args[3];
lean_object* v___y_5051_ = _args[4];
lean_object* v___y_5052_ = _args[5];
lean_object* v___y_5053_ = _args[6];
lean_object* v___y_5054_ = _args[7];
lean_object* v___y_5055_ = _args[8];
lean_object* v___y_5056_ = _args[9];
lean_object* v___y_5057_ = _args[10];
lean_object* v___y_5058_ = _args[11];
lean_object* v___y_5059_ = _args[12];
lean_object* v___y_5060_ = _args[13];
lean_object* v___y_5061_ = _args[14];
lean_object* v___y_5062_ = _args[15];
lean_object* v___y_5063_ = _args[16];
_start:
{
lean_object* v_res_5064_; 
v_res_5064_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_5047_, v_a_5048_, v___x_5049_, v_____r_5050_, v___y_5051_, v___y_5052_, v___y_5053_, v___y_5054_, v___y_5055_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_);
lean_dec(v___y_5062_);
lean_dec_ref(v___y_5061_);
lean_dec(v___y_5060_);
lean_dec_ref(v___y_5059_);
lean_dec(v___y_5058_);
lean_dec_ref(v___y_5057_);
lean_dec(v___y_5056_);
lean_dec_ref(v___y_5055_);
lean_dec(v___y_5054_);
lean_dec(v___y_5053_);
lean_dec_ref(v___y_5052_);
lean_dec(v___y_5051_);
return v_res_5064_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(lean_object* v_upperBound_5065_, lean_object* v___x_5066_, lean_object* v_methods_5067_, lean_object* v_config_5068_, lean_object* v_a_5069_, lean_object* v_b_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_){
_start:
{
lean_object* v___y_5085_; uint8_t v___x_5107_; 
v___x_5107_ = lean_nat_dec_lt(v_a_5069_, v_upperBound_5065_);
if (v___x_5107_ == 0)
{
lean_object* v___x_5108_; 
lean_dec(v_a_5069_);
lean_dec_ref(v_config_5068_);
lean_dec_ref(v_methods_5067_);
v___x_5108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5108_, 0, v_b_5070_);
return v___x_5108_;
}
else
{
lean_object* v_snd_5109_; lean_object* v___x_5111_; uint8_t v_isShared_5112_; uint8_t v_isSharedCheck_5207_; 
v_snd_5109_ = lean_ctor_get(v_b_5070_, 1);
v_isSharedCheck_5207_ = !lean_is_exclusive(v_b_5070_);
if (v_isSharedCheck_5207_ == 0)
{
lean_object* v_unused_5208_; 
v_unused_5208_ = lean_ctor_get(v_b_5070_, 0);
lean_dec(v_unused_5208_);
v___x_5111_ = v_b_5070_;
v_isShared_5112_ = v_isSharedCheck_5207_;
goto v_resetjp_5110_;
}
else
{
lean_inc(v_snd_5109_);
lean_dec(v_b_5070_);
v___x_5111_ = lean_box(0);
v_isShared_5112_ = v_isSharedCheck_5207_;
goto v_resetjp_5110_;
}
v_resetjp_5110_:
{
lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v_type_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; 
v___x_5113_ = lean_box(0);
v___x_5114_ = lean_array_fget_borrowed(v___x_5066_, v_a_5069_);
v___x_5115_ = lean_st_ref_take(v___y_5071_);
v___x_5116_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0);
v___x_5117_ = lean_st_ref_put(v___y_5071_, v___x_5116_);
v_type_5118_ = lean_ctor_get(v___x_5114_, 1);
v___x_5119_ = lean_unsigned_to_nat(0u);
v___x_5120_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5120_, 0, v___x_5119_);
lean_ctor_set(v___x_5120_, 1, v___x_5115_);
lean_ctor_set(v___x_5120_, 2, v___x_5116_);
lean_ctor_set(v___x_5120_, 3, v___x_5116_);
lean_inc_ref(v_type_5118_);
v___x_5121_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_5121_, 0, v_type_5118_);
lean_inc_ref(v_config_5068_);
lean_inc_ref(v_methods_5067_);
v___x_5122_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_5121_, v_methods_5067_, v_config_5068_, v___x_5120_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5122_) == 0)
{
lean_object* v_a_5123_; lean_object* v_snd_5124_; lean_object* v_fst_5125_; lean_object* v___x_5127_; uint8_t v_isShared_5128_; uint8_t v_isSharedCheck_5198_; 
v_a_5123_ = lean_ctor_get(v___x_5122_, 0);
lean_inc(v_a_5123_);
lean_dec_ref_known(v___x_5122_, 1);
v_snd_5124_ = lean_ctor_get(v_a_5123_, 1);
v_fst_5125_ = lean_ctor_get(v_a_5123_, 0);
v_isSharedCheck_5198_ = !lean_is_exclusive(v_a_5123_);
if (v_isSharedCheck_5198_ == 0)
{
v___x_5127_ = v_a_5123_;
v_isShared_5128_ = v_isSharedCheck_5198_;
goto v_resetjp_5126_;
}
else
{
lean_inc(v_snd_5124_);
lean_inc(v_fst_5125_);
lean_dec(v_a_5123_);
v___x_5127_ = lean_box(0);
v_isShared_5128_ = v_isSharedCheck_5198_;
goto v_resetjp_5126_;
}
v_resetjp_5126_:
{
lean_object* v_persistentCache_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; 
v_persistentCache_5129_ = lean_ctor_get(v_snd_5124_, 1);
lean_inc_ref(v_persistentCache_5129_);
lean_dec(v_snd_5124_);
v___x_5130_ = lean_st_ref_swap(v___y_5071_, v_persistentCache_5129_);
lean_dec(v___x_5130_);
lean_inc(v___x_5114_);
v___x_5131_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v___x_5114_, v_fst_5125_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5131_) == 0)
{
lean_object* v_a_5132_; lean_object* v_type_5133_; lean_object* v_value_5134_; uint8_t v___x_5135_; 
v_a_5132_ = lean_ctor_get(v___x_5131_, 0);
lean_inc(v_a_5132_);
lean_dec_ref_known(v___x_5131_, 1);
v_type_5133_ = lean_ctor_get(v_a_5132_, 1);
v_value_5134_ = lean_ctor_get(v_a_5132_, 2);
v___x_5135_ = l_Lean_Expr_isFalse(v_type_5133_);
if (v___x_5135_ == 0)
{
lean_object* v___f_5136_; uint8_t v___x_5137_; 
lean_del_object(v___x_5127_);
lean_inc(v_a_5132_);
lean_inc(v_snd_5109_);
v___f_5136_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed), 17, 3);
lean_closure_set(v___f_5136_, 0, v_snd_5109_);
lean_closure_set(v___f_5136_, 1, v_a_5132_);
lean_closure_set(v___f_5136_, 2, v___x_5113_);
v___x_5137_ = lean_expr_eqv(v_type_5118_, v_type_5133_);
if (v___x_5137_ == 0)
{
lean_object* v_toCold_5138_; lean_object* v_options_5139_; lean_object* v_inheritedTraceOptions_5140_; uint8_t v_hasTrace_5141_; 
lean_inc_ref(v_type_5133_);
lean_dec(v_a_5132_);
lean_dec(v_snd_5109_);
v_toCold_5138_ = lean_ctor_get(v___y_5081_, 0);
v_options_5139_ = lean_ctor_get(v_toCold_5138_, 2);
v_inheritedTraceOptions_5140_ = lean_ctor_get(v_toCold_5138_, 11);
v_hasTrace_5141_ = lean_ctor_get_uint8(v_options_5139_, sizeof(void*)*1);
if (v_hasTrace_5141_ == 0)
{
lean_dec_ref(v_type_5133_);
lean_del_object(v___x_5111_);
goto v___jp_5142_;
}
else
{
lean_object* v___x_5145_; lean_object* v___x_5146_; uint8_t v___x_5147_; 
v___x_5145_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5146_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5147_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5140_, v_options_5139_, v___x_5146_);
if (v___x_5147_ == 0)
{
lean_dec_ref(v_type_5133_);
lean_del_object(v___x_5111_);
goto v___jp_5142_;
}
else
{
lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5151_; 
lean_inc_ref(v_type_5118_);
v___x_5148_ = l_Lean_MessageData_ofExpr(v_type_5118_);
v___x_5149_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
if (v_isShared_5112_ == 0)
{
lean_ctor_set_tag(v___x_5111_, 7);
lean_ctor_set(v___x_5111_, 1, v___x_5149_);
lean_ctor_set(v___x_5111_, 0, v___x_5148_);
v___x_5151_ = v___x_5111_;
goto v_reusejp_5150_;
}
else
{
lean_object* v_reuseFailAlloc_5165_; 
v_reuseFailAlloc_5165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5165_, 0, v___x_5148_);
lean_ctor_set(v_reuseFailAlloc_5165_, 1, v___x_5149_);
v___x_5151_ = v_reuseFailAlloc_5165_;
goto v_reusejp_5150_;
}
v_reusejp_5150_:
{
lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; 
v___x_5152_ = l_Lean_MessageData_ofExpr(v_type_5133_);
v___x_5153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5153_, 0, v___x_5151_);
lean_ctor_set(v___x_5153_, 1, v___x_5152_);
v___x_5154_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v___x_5145_, v___x_5153_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5154_) == 0)
{
lean_object* v_a_5155_; lean_object* v___x_5156_; 
v_a_5155_ = lean_ctor_get(v___x_5154_, 0);
lean_inc(v_a_5155_);
lean_dec_ref_known(v___x_5154_, 1);
v___x_5156_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5107_, v___f_5136_, v_a_5155_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
v___y_5085_ = v___x_5156_;
goto v___jp_5084_;
}
else
{
lean_object* v_a_5157_; lean_object* v___x_5159_; uint8_t v_isShared_5160_; uint8_t v_isSharedCheck_5164_; 
lean_dec_ref(v___f_5136_);
lean_dec(v_a_5069_);
lean_dec_ref(v_config_5068_);
lean_dec_ref(v_methods_5067_);
v_a_5157_ = lean_ctor_get(v___x_5154_, 0);
v_isSharedCheck_5164_ = !lean_is_exclusive(v___x_5154_);
if (v_isSharedCheck_5164_ == 0)
{
v___x_5159_ = v___x_5154_;
v_isShared_5160_ = v_isSharedCheck_5164_;
goto v_resetjp_5158_;
}
else
{
lean_inc(v_a_5157_);
lean_dec(v___x_5154_);
v___x_5159_ = lean_box(0);
v_isShared_5160_ = v_isSharedCheck_5164_;
goto v_resetjp_5158_;
}
v_resetjp_5158_:
{
lean_object* v___x_5162_; 
if (v_isShared_5160_ == 0)
{
v___x_5162_ = v___x_5159_;
goto v_reusejp_5161_;
}
else
{
lean_object* v_reuseFailAlloc_5163_; 
v_reuseFailAlloc_5163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5163_, 0, v_a_5157_);
v___x_5162_ = v_reuseFailAlloc_5163_;
goto v_reusejp_5161_;
}
v_reusejp_5161_:
{
return v___x_5162_;
}
}
}
}
}
}
v___jp_5142_:
{
lean_object* v___x_5143_; lean_object* v___x_5144_; 
v___x_5143_ = lean_box(0);
v___x_5144_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5107_, v___f_5136_, v___x_5143_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
v___y_5085_ = v___x_5144_;
goto v___jp_5084_;
}
}
else
{
lean_object* v___x_5166_; lean_object* v___x_5167_; 
lean_dec_ref(v___f_5136_);
lean_del_object(v___x_5111_);
v___x_5166_ = lean_box(0);
v___x_5167_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_5109_, v_a_5132_, v___x_5113_, v___x_5166_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
v___y_5085_ = v___x_5167_;
goto v___jp_5084_;
}
}
else
{
lean_object* v___x_5168_; 
lean_inc_ref(v_value_5134_);
lean_dec(v_a_5132_);
lean_del_object(v___x_5111_);
lean_dec(v_a_5069_);
lean_dec_ref(v_config_5068_);
lean_dec_ref(v_methods_5067_);
v___x_5168_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_5134_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5168_) == 0)
{
lean_object* v___x_5170_; uint8_t v_isShared_5171_; uint8_t v_isSharedCheck_5180_; 
v_isSharedCheck_5180_ = !lean_is_exclusive(v___x_5168_);
if (v_isSharedCheck_5180_ == 0)
{
lean_object* v_unused_5181_; 
v_unused_5181_ = lean_ctor_get(v___x_5168_, 0);
lean_dec(v_unused_5181_);
v___x_5170_ = v___x_5168_;
v_isShared_5171_ = v_isSharedCheck_5180_;
goto v_resetjp_5169_;
}
else
{
lean_dec(v___x_5168_);
v___x_5170_ = lean_box(0);
v_isShared_5171_ = v_isSharedCheck_5180_;
goto v_resetjp_5169_;
}
v_resetjp_5169_:
{
lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5175_; 
v___x_5172_ = lean_box(v___x_5135_);
v___x_5173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5173_, 0, v___x_5172_);
if (v_isShared_5128_ == 0)
{
lean_ctor_set(v___x_5127_, 1, v_snd_5109_);
lean_ctor_set(v___x_5127_, 0, v___x_5173_);
v___x_5175_ = v___x_5127_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5179_; 
v_reuseFailAlloc_5179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5179_, 0, v___x_5173_);
lean_ctor_set(v_reuseFailAlloc_5179_, 1, v_snd_5109_);
v___x_5175_ = v_reuseFailAlloc_5179_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
lean_object* v___x_5177_; 
if (v_isShared_5171_ == 0)
{
lean_ctor_set(v___x_5170_, 0, v___x_5175_);
v___x_5177_ = v___x_5170_;
goto v_reusejp_5176_;
}
else
{
lean_object* v_reuseFailAlloc_5178_; 
v_reuseFailAlloc_5178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5178_, 0, v___x_5175_);
v___x_5177_ = v_reuseFailAlloc_5178_;
goto v_reusejp_5176_;
}
v_reusejp_5176_:
{
return v___x_5177_;
}
}
}
}
else
{
lean_object* v_a_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5189_; 
lean_del_object(v___x_5127_);
lean_dec(v_snd_5109_);
v_a_5182_ = lean_ctor_get(v___x_5168_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v___x_5168_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5184_ = v___x_5168_;
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
else
{
lean_inc(v_a_5182_);
lean_dec(v___x_5168_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5187_; 
if (v_isShared_5185_ == 0)
{
v___x_5187_ = v___x_5184_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_a_5182_);
v___x_5187_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
return v___x_5187_;
}
}
}
}
}
else
{
lean_object* v_a_5190_; lean_object* v___x_5192_; uint8_t v_isShared_5193_; uint8_t v_isSharedCheck_5197_; 
lean_del_object(v___x_5127_);
lean_del_object(v___x_5111_);
lean_dec(v_snd_5109_);
lean_dec(v_a_5069_);
lean_dec_ref(v_config_5068_);
lean_dec_ref(v_methods_5067_);
v_a_5190_ = lean_ctor_get(v___x_5131_, 0);
v_isSharedCheck_5197_ = !lean_is_exclusive(v___x_5131_);
if (v_isSharedCheck_5197_ == 0)
{
v___x_5192_ = v___x_5131_;
v_isShared_5193_ = v_isSharedCheck_5197_;
goto v_resetjp_5191_;
}
else
{
lean_inc(v_a_5190_);
lean_dec(v___x_5131_);
v___x_5192_ = lean_box(0);
v_isShared_5193_ = v_isSharedCheck_5197_;
goto v_resetjp_5191_;
}
v_resetjp_5191_:
{
lean_object* v___x_5195_; 
if (v_isShared_5193_ == 0)
{
v___x_5195_ = v___x_5192_;
goto v_reusejp_5194_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v_a_5190_);
v___x_5195_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5194_;
}
v_reusejp_5194_:
{
return v___x_5195_;
}
}
}
}
}
else
{
lean_object* v_a_5199_; lean_object* v___x_5201_; uint8_t v_isShared_5202_; uint8_t v_isSharedCheck_5206_; 
lean_del_object(v___x_5111_);
lean_dec(v_snd_5109_);
lean_dec(v_a_5069_);
lean_dec_ref(v_config_5068_);
lean_dec_ref(v_methods_5067_);
v_a_5199_ = lean_ctor_get(v___x_5122_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v___x_5122_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5201_ = v___x_5122_;
v_isShared_5202_ = v_isSharedCheck_5206_;
goto v_resetjp_5200_;
}
else
{
lean_inc(v_a_5199_);
lean_dec(v___x_5122_);
v___x_5201_ = lean_box(0);
v_isShared_5202_ = v_isSharedCheck_5206_;
goto v_resetjp_5200_;
}
v_resetjp_5200_:
{
lean_object* v___x_5204_; 
if (v_isShared_5202_ == 0)
{
v___x_5204_ = v___x_5201_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_a_5199_);
v___x_5204_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
return v___x_5204_;
}
}
}
}
}
v___jp_5084_:
{
if (lean_obj_tag(v___y_5085_) == 0)
{
lean_object* v_a_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5098_; 
v_a_5086_ = lean_ctor_get(v___y_5085_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v___y_5085_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5088_ = v___y_5085_;
v_isShared_5089_ = v_isSharedCheck_5098_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_a_5086_);
lean_dec(v___y_5085_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5098_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
if (lean_obj_tag(v_a_5086_) == 0)
{
lean_object* v_a_5090_; lean_object* v___x_5092_; 
lean_dec(v_a_5069_);
lean_dec_ref(v_config_5068_);
lean_dec_ref(v_methods_5067_);
v_a_5090_ = lean_ctor_get(v_a_5086_, 0);
lean_inc(v_a_5090_);
lean_dec_ref_known(v_a_5086_, 1);
if (v_isShared_5089_ == 0)
{
lean_ctor_set(v___x_5088_, 0, v_a_5090_);
v___x_5092_ = v___x_5088_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5093_; 
v_reuseFailAlloc_5093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5093_, 0, v_a_5090_);
v___x_5092_ = v_reuseFailAlloc_5093_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
return v___x_5092_;
}
}
else
{
lean_object* v_a_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; 
lean_del_object(v___x_5088_);
v_a_5094_ = lean_ctor_get(v_a_5086_, 0);
lean_inc(v_a_5094_);
lean_dec_ref_known(v_a_5086_, 1);
v___x_5095_ = lean_unsigned_to_nat(1u);
v___x_5096_ = lean_nat_add(v_a_5069_, v___x_5095_);
lean_dec(v_a_5069_);
v_a_5069_ = v___x_5096_;
v_b_5070_ = v_a_5094_;
goto _start;
}
}
}
else
{
lean_object* v_a_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5106_; 
lean_dec(v_a_5069_);
lean_dec_ref(v_config_5068_);
lean_dec_ref(v_methods_5067_);
v_a_5099_ = lean_ctor_get(v___y_5085_, 0);
v_isSharedCheck_5106_ = !lean_is_exclusive(v___y_5085_);
if (v_isSharedCheck_5106_ == 0)
{
v___x_5101_ = v___y_5085_;
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_a_5099_);
lean_dec(v___y_5085_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5104_; 
if (v_isShared_5102_ == 0)
{
v___x_5104_ = v___x_5101_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v_a_5099_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
return v___x_5104_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5209_ = _args[0];
lean_object* v___x_5210_ = _args[1];
lean_object* v_methods_5211_ = _args[2];
lean_object* v_config_5212_ = _args[3];
lean_object* v_a_5213_ = _args[4];
lean_object* v_b_5214_ = _args[5];
lean_object* v___y_5215_ = _args[6];
lean_object* v___y_5216_ = _args[7];
lean_object* v___y_5217_ = _args[8];
lean_object* v___y_5218_ = _args[9];
lean_object* v___y_5219_ = _args[10];
lean_object* v___y_5220_ = _args[11];
lean_object* v___y_5221_ = _args[12];
lean_object* v___y_5222_ = _args[13];
lean_object* v___y_5223_ = _args[14];
lean_object* v___y_5224_ = _args[15];
lean_object* v___y_5225_ = _args[16];
lean_object* v___y_5226_ = _args[17];
lean_object* v___y_5227_ = _args[18];
_start:
{
lean_object* v_res_5228_; 
v_res_5228_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v_upperBound_5209_, v___x_5210_, v_methods_5211_, v_config_5212_, v_a_5213_, v_b_5214_, v___y_5215_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_, v___y_5223_, v___y_5224_, v___y_5225_, v___y_5226_);
lean_dec(v___y_5226_);
lean_dec_ref(v___y_5225_);
lean_dec(v___y_5224_);
lean_dec_ref(v___y_5223_);
lean_dec(v___y_5222_);
lean_dec_ref(v___y_5221_);
lean_dec(v___y_5220_);
lean_dec_ref(v___y_5219_);
lean_dec(v___y_5218_);
lean_dec(v___y_5217_);
lean_dec_ref(v___y_5216_);
lean_dec(v___y_5215_);
lean_dec_ref(v___x_5210_);
lean_dec(v_upperBound_5209_);
return v_res_5228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(lean_object* v_methods_5229_, lean_object* v_config_5230_, lean_object* v_a_5231_, lean_object* v_a_5232_, lean_object* v_a_5233_, lean_object* v_a_5234_, lean_object* v_a_5235_, lean_object* v_a_5236_, lean_object* v_a_5237_, lean_object* v_a_5238_, lean_object* v_a_5239_, lean_object* v_a_5240_, lean_object* v_a_5241_, lean_object* v_a_5242_){
_start:
{
lean_object* v___x_5244_; lean_object* v_hypotheses_5245_; lean_object* v___x_5246_; lean_object* v_newHyps_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5244_ = lean_st_ref_get(v_a_5233_);
v_hypotheses_5245_ = lean_ctor_get(v___x_5244_, 3);
lean_inc_ref(v_hypotheses_5245_);
lean_dec(v___x_5244_);
v___x_5246_ = lean_array_get_size(v_hypotheses_5245_);
v_newHyps_5247_ = lean_mk_empty_array_with_capacity(v___x_5246_);
v___x_5248_ = lean_unsigned_to_nat(0u);
v___x_5249_ = lean_box(0);
v___x_5250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5249_);
lean_ctor_set(v___x_5250_, 1, v_newHyps_5247_);
v___x_5251_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v___x_5246_, v_hypotheses_5245_, v_methods_5229_, v_config_5230_, v___x_5248_, v___x_5250_, v_a_5231_, v_a_5232_, v_a_5233_, v_a_5234_, v_a_5235_, v_a_5236_, v_a_5237_, v_a_5238_, v_a_5239_, v_a_5240_, v_a_5241_, v_a_5242_);
lean_dec_ref(v_hypotheses_5245_);
if (lean_obj_tag(v___x_5251_) == 0)
{
lean_object* v_a_5252_; lean_object* v___x_5254_; uint8_t v_isShared_5255_; uint8_t v_isSharedCheck_5281_; 
v_a_5252_ = lean_ctor_get(v___x_5251_, 0);
v_isSharedCheck_5281_ = !lean_is_exclusive(v___x_5251_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5254_ = v___x_5251_;
v_isShared_5255_ = v_isSharedCheck_5281_;
goto v_resetjp_5253_;
}
else
{
lean_inc(v_a_5252_);
lean_dec(v___x_5251_);
v___x_5254_ = lean_box(0);
v_isShared_5255_ = v_isSharedCheck_5281_;
goto v_resetjp_5253_;
}
v_resetjp_5253_:
{
lean_object* v_fst_5256_; 
v_fst_5256_ = lean_ctor_get(v_a_5252_, 0);
if (lean_obj_tag(v_fst_5256_) == 0)
{
lean_object* v_snd_5257_; lean_object* v___x_5258_; lean_object* v_caches_5259_; lean_object* v_typeAnalysis_5260_; lean_object* v_target_5261_; uint8_t v_didChange_5262_; lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5275_; 
v_snd_5257_ = lean_ctor_get(v_a_5252_, 1);
lean_inc(v_snd_5257_);
lean_dec(v_a_5252_);
v___x_5258_ = lean_st_ref_take(v_a_5233_);
v_caches_5259_ = lean_ctor_get(v___x_5258_, 0);
v_typeAnalysis_5260_ = lean_ctor_get(v___x_5258_, 1);
v_target_5261_ = lean_ctor_get(v___x_5258_, 2);
v_didChange_5262_ = lean_ctor_get_uint8(v___x_5258_, sizeof(void*)*4);
v_isSharedCheck_5275_ = !lean_is_exclusive(v___x_5258_);
if (v_isSharedCheck_5275_ == 0)
{
lean_object* v_unused_5276_; 
v_unused_5276_ = lean_ctor_get(v___x_5258_, 3);
lean_dec(v_unused_5276_);
v___x_5264_ = v___x_5258_;
v_isShared_5265_ = v_isSharedCheck_5275_;
goto v_resetjp_5263_;
}
else
{
lean_inc(v_target_5261_);
lean_inc(v_typeAnalysis_5260_);
lean_inc(v_caches_5259_);
lean_dec(v___x_5258_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5275_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
lean_object* v___x_5267_; 
if (v_isShared_5265_ == 0)
{
lean_ctor_set(v___x_5264_, 3, v_snd_5257_);
v___x_5267_ = v___x_5264_;
goto v_reusejp_5266_;
}
else
{
lean_object* v_reuseFailAlloc_5274_; 
v_reuseFailAlloc_5274_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5274_, 0, v_caches_5259_);
lean_ctor_set(v_reuseFailAlloc_5274_, 1, v_typeAnalysis_5260_);
lean_ctor_set(v_reuseFailAlloc_5274_, 2, v_target_5261_);
lean_ctor_set(v_reuseFailAlloc_5274_, 3, v_snd_5257_);
lean_ctor_set_uint8(v_reuseFailAlloc_5274_, sizeof(void*)*4, v_didChange_5262_);
v___x_5267_ = v_reuseFailAlloc_5274_;
goto v_reusejp_5266_;
}
v_reusejp_5266_:
{
lean_object* v___x_5268_; uint8_t v___x_5269_; lean_object* v___x_5270_; lean_object* v___x_5272_; 
v___x_5268_ = lean_st_ref_put(v_a_5233_, v___x_5267_);
v___x_5269_ = 0;
v___x_5270_ = lean_box(v___x_5269_);
if (v_isShared_5255_ == 0)
{
lean_ctor_set(v___x_5254_, 0, v___x_5270_);
v___x_5272_ = v___x_5254_;
goto v_reusejp_5271_;
}
else
{
lean_object* v_reuseFailAlloc_5273_; 
v_reuseFailAlloc_5273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5273_, 0, v___x_5270_);
v___x_5272_ = v_reuseFailAlloc_5273_;
goto v_reusejp_5271_;
}
v_reusejp_5271_:
{
return v___x_5272_;
}
}
}
}
else
{
lean_object* v_val_5277_; lean_object* v___x_5279_; 
lean_inc_ref(v_fst_5256_);
lean_dec(v_a_5252_);
v_val_5277_ = lean_ctor_get(v_fst_5256_, 0);
lean_inc(v_val_5277_);
lean_dec_ref_known(v_fst_5256_, 1);
if (v_isShared_5255_ == 0)
{
lean_ctor_set(v___x_5254_, 0, v_val_5277_);
v___x_5279_ = v___x_5254_;
goto v_reusejp_5278_;
}
else
{
lean_object* v_reuseFailAlloc_5280_; 
v_reuseFailAlloc_5280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5280_, 0, v_val_5277_);
v___x_5279_ = v_reuseFailAlloc_5280_;
goto v_reusejp_5278_;
}
v_reusejp_5278_:
{
return v___x_5279_;
}
}
}
}
else
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
v_a_5282_ = lean_ctor_get(v___x_5251_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5251_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v___x_5251_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5251_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_a_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go___boxed(lean_object* v_methods_5290_, lean_object* v_config_5291_, lean_object* v_a_5292_, lean_object* v_a_5293_, lean_object* v_a_5294_, lean_object* v_a_5295_, lean_object* v_a_5296_, lean_object* v_a_5297_, lean_object* v_a_5298_, lean_object* v_a_5299_, lean_object* v_a_5300_, lean_object* v_a_5301_, lean_object* v_a_5302_, lean_object* v_a_5303_, lean_object* v_a_5304_){
_start:
{
lean_object* v_res_5305_; 
v_res_5305_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(v_methods_5290_, v_config_5291_, v_a_5292_, v_a_5293_, v_a_5294_, v_a_5295_, v_a_5296_, v_a_5297_, v_a_5298_, v_a_5299_, v_a_5300_, v_a_5301_, v_a_5302_, v_a_5303_);
lean_dec(v_a_5303_);
lean_dec_ref(v_a_5302_);
lean_dec(v_a_5301_);
lean_dec_ref(v_a_5300_);
lean_dec(v_a_5299_);
lean_dec_ref(v_a_5298_);
lean_dec(v_a_5297_);
lean_dec_ref(v_a_5296_);
lean_dec(v_a_5295_);
lean_dec(v_a_5294_);
lean_dec_ref(v_a_5293_);
lean_dec(v_a_5292_);
return v_res_5305_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(lean_object* v_cls_5306_, lean_object* v_msg_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_){
_start:
{
lean_object* v___x_5321_; 
v___x_5321_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v_cls_5306_, v_msg_5307_, v___y_5316_, v___y_5317_, v___y_5318_, v___y_5319_);
return v___x_5321_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___boxed(lean_object* v_cls_5322_, lean_object* v_msg_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_, lean_object* v___y_5335_, lean_object* v___y_5336_){
_start:
{
lean_object* v_res_5337_; 
v_res_5337_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(v_cls_5322_, v_msg_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_, v___y_5332_, v___y_5333_, v___y_5334_, v___y_5335_);
lean_dec(v___y_5335_);
lean_dec_ref(v___y_5334_);
lean_dec(v___y_5333_);
lean_dec_ref(v___y_5332_);
lean_dec(v___y_5331_);
lean_dec_ref(v___y_5330_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec(v___y_5326_);
lean_dec_ref(v___y_5325_);
lean_dec(v___y_5324_);
return v_res_5337_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(lean_object* v_upperBound_5338_, lean_object* v___x_5339_, lean_object* v_methods_5340_, lean_object* v_config_5341_, lean_object* v_inst_5342_, lean_object* v_R_5343_, lean_object* v_a_5344_, lean_object* v_b_5345_, lean_object* v_c_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_){
_start:
{
lean_object* v___x_5360_; 
v___x_5360_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v_upperBound_5338_, v___x_5339_, v_methods_5340_, v_config_5341_, v_a_5344_, v_b_5345_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_, v___y_5351_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_, v___y_5358_);
return v___x_5360_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_5361_ = _args[0];
lean_object* v___x_5362_ = _args[1];
lean_object* v_methods_5363_ = _args[2];
lean_object* v_config_5364_ = _args[3];
lean_object* v_inst_5365_ = _args[4];
lean_object* v_R_5366_ = _args[5];
lean_object* v_a_5367_ = _args[6];
lean_object* v_b_5368_ = _args[7];
lean_object* v_c_5369_ = _args[8];
lean_object* v___y_5370_ = _args[9];
lean_object* v___y_5371_ = _args[10];
lean_object* v___y_5372_ = _args[11];
lean_object* v___y_5373_ = _args[12];
lean_object* v___y_5374_ = _args[13];
lean_object* v___y_5375_ = _args[14];
lean_object* v___y_5376_ = _args[15];
lean_object* v___y_5377_ = _args[16];
lean_object* v___y_5378_ = _args[17];
lean_object* v___y_5379_ = _args[18];
lean_object* v___y_5380_ = _args[19];
lean_object* v___y_5381_ = _args[20];
lean_object* v___y_5382_ = _args[21];
_start:
{
lean_object* v_res_5383_; 
v_res_5383_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(v_upperBound_5361_, v___x_5362_, v_methods_5363_, v_config_5364_, v_inst_5365_, v_R_5366_, v_a_5367_, v_b_5368_, v_c_5369_, v___y_5370_, v___y_5371_, v___y_5372_, v___y_5373_, v___y_5374_, v___y_5375_, v___y_5376_, v___y_5377_, v___y_5378_, v___y_5379_, v___y_5380_, v___y_5381_);
lean_dec(v___y_5381_);
lean_dec_ref(v___y_5380_);
lean_dec(v___y_5379_);
lean_dec_ref(v___y_5378_);
lean_dec(v___y_5377_);
lean_dec_ref(v___y_5376_);
lean_dec(v___y_5375_);
lean_dec_ref(v___y_5374_);
lean_dec(v___y_5373_);
lean_dec(v___y_5372_);
lean_dec_ref(v___y_5371_);
lean_dec(v___y_5370_);
lean_dec_ref(v___x_5362_);
lean_dec(v_upperBound_5361_);
return v_res_5383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(lean_object* v_methods_5384_, lean_object* v_config_5385_, lean_object* v_a_5386_, lean_object* v_a_5387_, lean_object* v_a_5388_, lean_object* v_a_5389_, lean_object* v_a_5390_, lean_object* v_a_5391_, lean_object* v_a_5392_, lean_object* v_a_5393_, lean_object* v_a_5394_, lean_object* v_a_5395_, lean_object* v_a_5396_){
_start:
{
lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; 
v___x_5398_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpExpr___redArg___closed__0);
v___x_5399_ = lean_st_mk_ref(v___x_5398_);
v___x_5400_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(v_methods_5384_, v_config_5385_, v___x_5399_, v_a_5386_, v_a_5387_, v_a_5388_, v_a_5389_, v_a_5390_, v_a_5391_, v_a_5392_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_);
if (lean_obj_tag(v___x_5400_) == 0)
{
lean_object* v_a_5401_; lean_object* v___x_5403_; uint8_t v_isShared_5404_; uint8_t v_isSharedCheck_5409_; 
v_a_5401_ = lean_ctor_get(v___x_5400_, 0);
v_isSharedCheck_5409_ = !lean_is_exclusive(v___x_5400_);
if (v_isSharedCheck_5409_ == 0)
{
v___x_5403_ = v___x_5400_;
v_isShared_5404_ = v_isSharedCheck_5409_;
goto v_resetjp_5402_;
}
else
{
lean_inc(v_a_5401_);
lean_dec(v___x_5400_);
v___x_5403_ = lean_box(0);
v_isShared_5404_ = v_isSharedCheck_5409_;
goto v_resetjp_5402_;
}
v_resetjp_5402_:
{
lean_object* v___x_5405_; lean_object* v___x_5407_; 
v___x_5405_ = lean_st_ref_get(v___x_5399_);
lean_dec(v___x_5399_);
lean_dec(v___x_5405_);
if (v_isShared_5404_ == 0)
{
v___x_5407_ = v___x_5403_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_a_5401_);
v___x_5407_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
return v___x_5407_;
}
}
}
else
{
lean_dec(v___x_5399_);
return v___x_5400_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps___boxed(lean_object* v_methods_5410_, lean_object* v_config_5411_, lean_object* v_a_5412_, lean_object* v_a_5413_, lean_object* v_a_5414_, lean_object* v_a_5415_, lean_object* v_a_5416_, lean_object* v_a_5417_, lean_object* v_a_5418_, lean_object* v_a_5419_, lean_object* v_a_5420_, lean_object* v_a_5421_, lean_object* v_a_5422_, lean_object* v_a_5423_){
_start:
{
lean_object* v_res_5424_; 
v_res_5424_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(v_methods_5410_, v_config_5411_, v_a_5412_, v_a_5413_, v_a_5414_, v_a_5415_, v_a_5416_, v_a_5417_, v_a_5418_, v_a_5419_, v_a_5420_, v_a_5421_, v_a_5422_);
lean_dec(v_a_5422_);
lean_dec_ref(v_a_5421_);
lean_dec(v_a_5420_);
lean_dec_ref(v_a_5419_);
lean_dec(v_a_5418_);
lean_dec_ref(v_a_5417_);
lean_dec(v_a_5416_);
lean_dec_ref(v_a_5415_);
lean_dec(v_a_5414_);
lean_dec(v_a_5413_);
lean_dec_ref(v_a_5412_);
return v_res_5424_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(lean_object* v_cls_5425_, lean_object* v_msg_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_){
_start:
{
lean_object* v_ref_5432_; lean_object* v___x_5433_; lean_object* v_a_5434_; lean_object* v___x_5436_; uint8_t v_isShared_5437_; uint8_t v_isSharedCheck_5479_; 
v_ref_5432_ = lean_ctor_get(v___y_5429_, 2);
v___x_5433_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_);
v_a_5434_ = lean_ctor_get(v___x_5433_, 0);
v_isSharedCheck_5479_ = !lean_is_exclusive(v___x_5433_);
if (v_isSharedCheck_5479_ == 0)
{
v___x_5436_ = v___x_5433_;
v_isShared_5437_ = v_isSharedCheck_5479_;
goto v_resetjp_5435_;
}
else
{
lean_inc(v_a_5434_);
lean_dec(v___x_5433_);
v___x_5436_ = lean_box(0);
v_isShared_5437_ = v_isSharedCheck_5479_;
goto v_resetjp_5435_;
}
v_resetjp_5435_:
{
lean_object* v___x_5438_; lean_object* v_traceState_5439_; lean_object* v_env_5440_; lean_object* v_nextMacroScope_5441_; lean_object* v_ngen_5442_; lean_object* v_auxDeclNGen_5443_; lean_object* v_cache_5444_; lean_object* v_recordedDeps_5445_; lean_object* v_messages_5446_; lean_object* v_infoState_5447_; lean_object* v_snapshotTasks_5448_; lean_object* v___x_5450_; uint8_t v_isShared_5451_; uint8_t v_isSharedCheck_5478_; 
v___x_5438_ = lean_st_ref_take(v___y_5430_);
v_traceState_5439_ = lean_ctor_get(v___x_5438_, 4);
v_env_5440_ = lean_ctor_get(v___x_5438_, 0);
v_nextMacroScope_5441_ = lean_ctor_get(v___x_5438_, 1);
v_ngen_5442_ = lean_ctor_get(v___x_5438_, 2);
v_auxDeclNGen_5443_ = lean_ctor_get(v___x_5438_, 3);
v_cache_5444_ = lean_ctor_get(v___x_5438_, 5);
v_recordedDeps_5445_ = lean_ctor_get(v___x_5438_, 6);
v_messages_5446_ = lean_ctor_get(v___x_5438_, 7);
v_infoState_5447_ = lean_ctor_get(v___x_5438_, 8);
v_snapshotTasks_5448_ = lean_ctor_get(v___x_5438_, 9);
v_isSharedCheck_5478_ = !lean_is_exclusive(v___x_5438_);
if (v_isSharedCheck_5478_ == 0)
{
v___x_5450_ = v___x_5438_;
v_isShared_5451_ = v_isSharedCheck_5478_;
goto v_resetjp_5449_;
}
else
{
lean_inc(v_snapshotTasks_5448_);
lean_inc(v_infoState_5447_);
lean_inc(v_messages_5446_);
lean_inc(v_recordedDeps_5445_);
lean_inc(v_cache_5444_);
lean_inc(v_traceState_5439_);
lean_inc(v_auxDeclNGen_5443_);
lean_inc(v_ngen_5442_);
lean_inc(v_nextMacroScope_5441_);
lean_inc(v_env_5440_);
lean_dec(v___x_5438_);
v___x_5450_ = lean_box(0);
v_isShared_5451_ = v_isSharedCheck_5478_;
goto v_resetjp_5449_;
}
v_resetjp_5449_:
{
uint64_t v_tid_5452_; lean_object* v_traces_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5477_; 
v_tid_5452_ = lean_ctor_get_uint64(v_traceState_5439_, sizeof(void*)*1);
v_traces_5453_ = lean_ctor_get(v_traceState_5439_, 0);
v_isSharedCheck_5477_ = !lean_is_exclusive(v_traceState_5439_);
if (v_isSharedCheck_5477_ == 0)
{
v___x_5455_ = v_traceState_5439_;
v_isShared_5456_ = v_isSharedCheck_5477_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_traces_5453_);
lean_dec(v_traceState_5439_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5477_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v___x_5457_; lean_object* v___x_5458_; double v___x_5459_; uint8_t v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5468_; 
v___x_5457_ = lean_box(0);
v___x_5458_ = lean_box(0);
v___x_5459_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_5460_ = 0;
v___x_5461_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_5462_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5462_, 0, v_cls_5425_);
lean_ctor_set(v___x_5462_, 1, v___x_5458_);
lean_ctor_set(v___x_5462_, 2, v___x_5461_);
lean_ctor_set_float(v___x_5462_, sizeof(void*)*3, v___x_5459_);
lean_ctor_set_float(v___x_5462_, sizeof(void*)*3 + 8, v___x_5459_);
lean_ctor_set_uint8(v___x_5462_, sizeof(void*)*3 + 16, v___x_5460_);
v___x_5463_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_5464_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5464_, 0, v___x_5462_);
lean_ctor_set(v___x_5464_, 1, v_a_5434_);
lean_ctor_set(v___x_5464_, 2, v___x_5463_);
lean_inc(v_ref_5432_);
v___x_5465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5465_, 0, v_ref_5432_);
lean_ctor_set(v___x_5465_, 1, v___x_5464_);
v___x_5466_ = l_Lean_PersistentArray_push___redArg(v_traces_5453_, v___x_5465_);
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 0, v___x_5466_);
v___x_5468_ = v___x_5455_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5476_; 
v_reuseFailAlloc_5476_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5476_, 0, v___x_5466_);
lean_ctor_set_uint64(v_reuseFailAlloc_5476_, sizeof(void*)*1, v_tid_5452_);
v___x_5468_ = v_reuseFailAlloc_5476_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
lean_object* v___x_5470_; 
if (v_isShared_5451_ == 0)
{
lean_ctor_set(v___x_5450_, 4, v___x_5468_);
v___x_5470_ = v___x_5450_;
goto v_reusejp_5469_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_env_5440_);
lean_ctor_set(v_reuseFailAlloc_5475_, 1, v_nextMacroScope_5441_);
lean_ctor_set(v_reuseFailAlloc_5475_, 2, v_ngen_5442_);
lean_ctor_set(v_reuseFailAlloc_5475_, 3, v_auxDeclNGen_5443_);
lean_ctor_set(v_reuseFailAlloc_5475_, 4, v___x_5468_);
lean_ctor_set(v_reuseFailAlloc_5475_, 5, v_cache_5444_);
lean_ctor_set(v_reuseFailAlloc_5475_, 6, v_recordedDeps_5445_);
lean_ctor_set(v_reuseFailAlloc_5475_, 7, v_messages_5446_);
lean_ctor_set(v_reuseFailAlloc_5475_, 8, v_infoState_5447_);
lean_ctor_set(v_reuseFailAlloc_5475_, 9, v_snapshotTasks_5448_);
v___x_5470_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5469_;
}
v_reusejp_5469_:
{
lean_object* v___x_5471_; lean_object* v___x_5473_; 
v___x_5471_ = lean_st_ref_put(v___y_5430_, v___x_5470_);
if (v_isShared_5437_ == 0)
{
lean_ctor_set(v___x_5436_, 0, v___x_5457_);
v___x_5473_ = v___x_5436_;
goto v_reusejp_5472_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v___x_5457_);
v___x_5473_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5472_;
}
v_reusejp_5472_:
{
return v___x_5473_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg___boxed(lean_object* v_cls_5480_, lean_object* v_msg_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_){
_start:
{
lean_object* v_res_5487_; 
v_res_5487_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v_cls_5480_, v_msg_5481_, v___y_5482_, v___y_5483_, v___y_5484_, v___y_5485_);
lean_dec(v___y_5485_);
lean_dec_ref(v___y_5484_);
lean_dec(v___y_5483_);
lean_dec_ref(v___y_5482_);
return v_res_5487_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(lean_object* v_upperBound_5488_, lean_object* v___x_5489_, lean_object* v_methods_5490_, lean_object* v_config_5491_, lean_object* v_a_5492_, lean_object* v_b_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_, lean_object* v___y_5496_, lean_object* v___y_5497_, lean_object* v___y_5498_, lean_object* v___y_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_){
_start:
{
lean_object* v___y_5508_; uint8_t v___x_5530_; 
v___x_5530_ = lean_nat_dec_lt(v_a_5492_, v_upperBound_5488_);
if (v___x_5530_ == 0)
{
lean_object* v___x_5531_; 
lean_dec(v_a_5492_);
lean_dec_ref(v_config_5491_);
lean_dec_ref(v_methods_5490_);
v___x_5531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5531_, 0, v_b_5493_);
return v___x_5531_;
}
else
{
lean_object* v_snd_5532_; lean_object* v___x_5534_; uint8_t v_isShared_5535_; uint8_t v_isSharedCheck_5630_; 
v_snd_5532_ = lean_ctor_get(v_b_5493_, 1);
v_isSharedCheck_5630_ = !lean_is_exclusive(v_b_5493_);
if (v_isSharedCheck_5630_ == 0)
{
lean_object* v_unused_5631_; 
v_unused_5631_ = lean_ctor_get(v_b_5493_, 0);
lean_dec(v_unused_5631_);
v___x_5534_ = v_b_5493_;
v_isShared_5535_ = v_isSharedCheck_5630_;
goto v_resetjp_5533_;
}
else
{
lean_inc(v_snd_5532_);
lean_dec(v_b_5493_);
v___x_5534_ = lean_box(0);
v_isShared_5535_ = v_isSharedCheck_5630_;
goto v_resetjp_5533_;
}
v_resetjp_5533_:
{
lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v_type_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; 
v___x_5536_ = lean_box(0);
v___x_5537_ = lean_array_fget_borrowed(v___x_5489_, v_a_5492_);
v___x_5538_ = lean_st_ref_take(v___y_5494_);
v___x_5539_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_5540_ = lean_st_ref_put(v___y_5494_, v___x_5539_);
v_type_5541_ = lean_ctor_get(v___x_5537_, 1);
v___x_5542_ = lean_unsigned_to_nat(0u);
v___x_5543_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5543_, 0, v___x_5542_);
lean_ctor_set(v___x_5543_, 1, v___x_5538_);
lean_ctor_set(v___x_5543_, 2, v___x_5539_);
lean_inc_ref(v_type_5541_);
v___x_5544_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_5544_, 0, v_type_5541_);
lean_inc_ref(v_config_5491_);
lean_inc_ref(v_methods_5490_);
v___x_5545_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_5544_, v_methods_5490_, v_config_5491_, v___x_5543_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_);
if (lean_obj_tag(v___x_5545_) == 0)
{
lean_object* v_a_5546_; lean_object* v_snd_5547_; lean_object* v_fst_5548_; lean_object* v___x_5550_; uint8_t v_isShared_5551_; uint8_t v_isSharedCheck_5621_; 
v_a_5546_ = lean_ctor_get(v___x_5545_, 0);
lean_inc(v_a_5546_);
lean_dec_ref_known(v___x_5545_, 1);
v_snd_5547_ = lean_ctor_get(v_a_5546_, 1);
v_fst_5548_ = lean_ctor_get(v_a_5546_, 0);
v_isSharedCheck_5621_ = !lean_is_exclusive(v_a_5546_);
if (v_isSharedCheck_5621_ == 0)
{
v___x_5550_ = v_a_5546_;
v_isShared_5551_ = v_isSharedCheck_5621_;
goto v_resetjp_5549_;
}
else
{
lean_inc(v_snd_5547_);
lean_inc(v_fst_5548_);
lean_dec(v_a_5546_);
v___x_5550_ = lean_box(0);
v_isShared_5551_ = v_isSharedCheck_5621_;
goto v_resetjp_5549_;
}
v_resetjp_5549_:
{
lean_object* v_cache_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; 
v_cache_5552_ = lean_ctor_get(v_snd_5547_, 1);
lean_inc_ref(v_cache_5552_);
lean_dec(v_snd_5547_);
v___x_5553_ = lean_st_ref_swap(v___y_5494_, v_cache_5552_);
lean_dec(v___x_5553_);
lean_inc(v___x_5537_);
v___x_5554_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v___x_5537_, v_fst_5548_);
lean_dec(v_fst_5548_);
if (lean_obj_tag(v___x_5554_) == 0)
{
lean_object* v_a_5555_; lean_object* v_type_5556_; lean_object* v_value_5557_; uint8_t v___x_5558_; 
v_a_5555_ = lean_ctor_get(v___x_5554_, 0);
lean_inc(v_a_5555_);
lean_dec_ref_known(v___x_5554_, 1);
v_type_5556_ = lean_ctor_get(v_a_5555_, 1);
v_value_5557_ = lean_ctor_get(v_a_5555_, 2);
v___x_5558_ = l_Lean_Expr_isFalse(v_type_5556_);
if (v___x_5558_ == 0)
{
lean_object* v___f_5559_; uint8_t v___x_5560_; 
lean_del_object(v___x_5550_);
lean_inc(v_a_5555_);
lean_inc(v_snd_5532_);
v___f_5559_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed), 17, 3);
lean_closure_set(v___f_5559_, 0, v_snd_5532_);
lean_closure_set(v___f_5559_, 1, v_a_5555_);
lean_closure_set(v___f_5559_, 2, v___x_5536_);
v___x_5560_ = lean_expr_eqv(v_type_5541_, v_type_5556_);
if (v___x_5560_ == 0)
{
lean_object* v_toCold_5561_; lean_object* v_options_5562_; lean_object* v_inheritedTraceOptions_5563_; uint8_t v_hasTrace_5564_; 
lean_inc_ref(v_type_5556_);
lean_dec(v_a_5555_);
lean_dec(v_snd_5532_);
v_toCold_5561_ = lean_ctor_get(v___y_5504_, 0);
v_options_5562_ = lean_ctor_get(v_toCold_5561_, 2);
v_inheritedTraceOptions_5563_ = lean_ctor_get(v_toCold_5561_, 11);
v_hasTrace_5564_ = lean_ctor_get_uint8(v_options_5562_, sizeof(void*)*1);
if (v_hasTrace_5564_ == 0)
{
lean_dec_ref(v_type_5556_);
lean_del_object(v___x_5534_);
goto v___jp_5565_;
}
else
{
lean_object* v___x_5568_; lean_object* v___x_5569_; uint8_t v___x_5570_; 
v___x_5568_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5569_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5570_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5563_, v_options_5562_, v___x_5569_);
if (v___x_5570_ == 0)
{
lean_dec_ref(v_type_5556_);
lean_del_object(v___x_5534_);
goto v___jp_5565_;
}
else
{
lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5574_; 
lean_inc_ref(v_type_5541_);
v___x_5571_ = l_Lean_MessageData_ofExpr(v_type_5541_);
v___x_5572_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
if (v_isShared_5535_ == 0)
{
lean_ctor_set_tag(v___x_5534_, 7);
lean_ctor_set(v___x_5534_, 1, v___x_5572_);
lean_ctor_set(v___x_5534_, 0, v___x_5571_);
v___x_5574_ = v___x_5534_;
goto v_reusejp_5573_;
}
else
{
lean_object* v_reuseFailAlloc_5588_; 
v_reuseFailAlloc_5588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5588_, 0, v___x_5571_);
lean_ctor_set(v_reuseFailAlloc_5588_, 1, v___x_5572_);
v___x_5574_ = v_reuseFailAlloc_5588_;
goto v_reusejp_5573_;
}
v_reusejp_5573_:
{
lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; 
v___x_5575_ = l_Lean_MessageData_ofExpr(v_type_5556_);
v___x_5576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5576_, 0, v___x_5574_);
lean_ctor_set(v___x_5576_, 1, v___x_5575_);
v___x_5577_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v___x_5568_, v___x_5576_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_);
if (lean_obj_tag(v___x_5577_) == 0)
{
lean_object* v_a_5578_; lean_object* v___x_5579_; 
v_a_5578_ = lean_ctor_get(v___x_5577_, 0);
lean_inc(v_a_5578_);
lean_dec_ref_known(v___x_5577_, 1);
v___x_5579_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5530_, v___f_5559_, v_a_5578_, v___y_5494_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_);
v___y_5508_ = v___x_5579_;
goto v___jp_5507_;
}
else
{
lean_object* v_a_5580_; lean_object* v___x_5582_; uint8_t v_isShared_5583_; uint8_t v_isSharedCheck_5587_; 
lean_dec_ref(v___f_5559_);
lean_dec(v_a_5492_);
lean_dec_ref(v_config_5491_);
lean_dec_ref(v_methods_5490_);
v_a_5580_ = lean_ctor_get(v___x_5577_, 0);
v_isSharedCheck_5587_ = !lean_is_exclusive(v___x_5577_);
if (v_isSharedCheck_5587_ == 0)
{
v___x_5582_ = v___x_5577_;
v_isShared_5583_ = v_isSharedCheck_5587_;
goto v_resetjp_5581_;
}
else
{
lean_inc(v_a_5580_);
lean_dec(v___x_5577_);
v___x_5582_ = lean_box(0);
v_isShared_5583_ = v_isSharedCheck_5587_;
goto v_resetjp_5581_;
}
v_resetjp_5581_:
{
lean_object* v___x_5585_; 
if (v_isShared_5583_ == 0)
{
v___x_5585_ = v___x_5582_;
goto v_reusejp_5584_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v_a_5580_);
v___x_5585_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5584_;
}
v_reusejp_5584_:
{
return v___x_5585_;
}
}
}
}
}
}
v___jp_5565_:
{
lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5566_ = lean_box(0);
v___x_5567_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5530_, v___f_5559_, v___x_5566_, v___y_5494_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_);
v___y_5508_ = v___x_5567_;
goto v___jp_5507_;
}
}
else
{
lean_object* v___x_5589_; lean_object* v___x_5590_; 
lean_dec_ref(v___f_5559_);
lean_del_object(v___x_5534_);
v___x_5589_ = lean_box(0);
v___x_5590_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_5532_, v_a_5555_, v___x_5536_, v___x_5589_, v___y_5494_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_);
v___y_5508_ = v___x_5590_;
goto v___jp_5507_;
}
}
else
{
lean_object* v___x_5591_; 
lean_inc_ref(v_value_5557_);
lean_dec(v_a_5555_);
lean_del_object(v___x_5534_);
lean_dec(v_a_5492_);
lean_dec_ref(v_config_5491_);
lean_dec_ref(v_methods_5490_);
v___x_5591_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_5557_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_);
if (lean_obj_tag(v___x_5591_) == 0)
{
lean_object* v___x_5593_; uint8_t v_isShared_5594_; uint8_t v_isSharedCheck_5603_; 
v_isSharedCheck_5603_ = !lean_is_exclusive(v___x_5591_);
if (v_isSharedCheck_5603_ == 0)
{
lean_object* v_unused_5604_; 
v_unused_5604_ = lean_ctor_get(v___x_5591_, 0);
lean_dec(v_unused_5604_);
v___x_5593_ = v___x_5591_;
v_isShared_5594_ = v_isSharedCheck_5603_;
goto v_resetjp_5592_;
}
else
{
lean_dec(v___x_5591_);
v___x_5593_ = lean_box(0);
v_isShared_5594_ = v_isSharedCheck_5603_;
goto v_resetjp_5592_;
}
v_resetjp_5592_:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5598_; 
v___x_5595_ = lean_box(v___x_5558_);
v___x_5596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5596_, 0, v___x_5595_);
if (v_isShared_5551_ == 0)
{
lean_ctor_set(v___x_5550_, 1, v_snd_5532_);
lean_ctor_set(v___x_5550_, 0, v___x_5596_);
v___x_5598_ = v___x_5550_;
goto v_reusejp_5597_;
}
else
{
lean_object* v_reuseFailAlloc_5602_; 
v_reuseFailAlloc_5602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5602_, 0, v___x_5596_);
lean_ctor_set(v_reuseFailAlloc_5602_, 1, v_snd_5532_);
v___x_5598_ = v_reuseFailAlloc_5602_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
lean_object* v___x_5600_; 
if (v_isShared_5594_ == 0)
{
lean_ctor_set(v___x_5593_, 0, v___x_5598_);
v___x_5600_ = v___x_5593_;
goto v_reusejp_5599_;
}
else
{
lean_object* v_reuseFailAlloc_5601_; 
v_reuseFailAlloc_5601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5601_, 0, v___x_5598_);
v___x_5600_ = v_reuseFailAlloc_5601_;
goto v_reusejp_5599_;
}
v_reusejp_5599_:
{
return v___x_5600_;
}
}
}
}
else
{
lean_object* v_a_5605_; lean_object* v___x_5607_; uint8_t v_isShared_5608_; uint8_t v_isSharedCheck_5612_; 
lean_del_object(v___x_5550_);
lean_dec(v_snd_5532_);
v_a_5605_ = lean_ctor_get(v___x_5591_, 0);
v_isSharedCheck_5612_ = !lean_is_exclusive(v___x_5591_);
if (v_isSharedCheck_5612_ == 0)
{
v___x_5607_ = v___x_5591_;
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
else
{
lean_inc(v_a_5605_);
lean_dec(v___x_5591_);
v___x_5607_ = lean_box(0);
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
v_resetjp_5606_:
{
lean_object* v___x_5610_; 
if (v_isShared_5608_ == 0)
{
v___x_5610_ = v___x_5607_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v_a_5605_);
v___x_5610_ = v_reuseFailAlloc_5611_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
return v___x_5610_;
}
}
}
}
}
else
{
lean_object* v_a_5613_; lean_object* v___x_5615_; uint8_t v_isShared_5616_; uint8_t v_isSharedCheck_5620_; 
lean_del_object(v___x_5550_);
lean_del_object(v___x_5534_);
lean_dec(v_snd_5532_);
lean_dec(v_a_5492_);
lean_dec_ref(v_config_5491_);
lean_dec_ref(v_methods_5490_);
v_a_5613_ = lean_ctor_get(v___x_5554_, 0);
v_isSharedCheck_5620_ = !lean_is_exclusive(v___x_5554_);
if (v_isSharedCheck_5620_ == 0)
{
v___x_5615_ = v___x_5554_;
v_isShared_5616_ = v_isSharedCheck_5620_;
goto v_resetjp_5614_;
}
else
{
lean_inc(v_a_5613_);
lean_dec(v___x_5554_);
v___x_5615_ = lean_box(0);
v_isShared_5616_ = v_isSharedCheck_5620_;
goto v_resetjp_5614_;
}
v_resetjp_5614_:
{
lean_object* v___x_5618_; 
if (v_isShared_5616_ == 0)
{
v___x_5618_ = v___x_5615_;
goto v_reusejp_5617_;
}
else
{
lean_object* v_reuseFailAlloc_5619_; 
v_reuseFailAlloc_5619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5619_, 0, v_a_5613_);
v___x_5618_ = v_reuseFailAlloc_5619_;
goto v_reusejp_5617_;
}
v_reusejp_5617_:
{
return v___x_5618_;
}
}
}
}
}
else
{
lean_object* v_a_5622_; lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5629_; 
lean_del_object(v___x_5534_);
lean_dec(v_snd_5532_);
lean_dec(v_a_5492_);
lean_dec_ref(v_config_5491_);
lean_dec_ref(v_methods_5490_);
v_a_5622_ = lean_ctor_get(v___x_5545_, 0);
v_isSharedCheck_5629_ = !lean_is_exclusive(v___x_5545_);
if (v_isSharedCheck_5629_ == 0)
{
v___x_5624_ = v___x_5545_;
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
else
{
lean_inc(v_a_5622_);
lean_dec(v___x_5545_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5627_; 
if (v_isShared_5625_ == 0)
{
v___x_5627_ = v___x_5624_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v_a_5622_);
v___x_5627_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
return v___x_5627_;
}
}
}
}
}
v___jp_5507_:
{
if (lean_obj_tag(v___y_5508_) == 0)
{
lean_object* v_a_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5521_; 
v_a_5509_ = lean_ctor_get(v___y_5508_, 0);
v_isSharedCheck_5521_ = !lean_is_exclusive(v___y_5508_);
if (v_isSharedCheck_5521_ == 0)
{
v___x_5511_ = v___y_5508_;
v_isShared_5512_ = v_isSharedCheck_5521_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_a_5509_);
lean_dec(v___y_5508_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5521_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
if (lean_obj_tag(v_a_5509_) == 0)
{
lean_object* v_a_5513_; lean_object* v___x_5515_; 
lean_dec(v_a_5492_);
lean_dec_ref(v_config_5491_);
lean_dec_ref(v_methods_5490_);
v_a_5513_ = lean_ctor_get(v_a_5509_, 0);
lean_inc(v_a_5513_);
lean_dec_ref_known(v_a_5509_, 1);
if (v_isShared_5512_ == 0)
{
lean_ctor_set(v___x_5511_, 0, v_a_5513_);
v___x_5515_ = v___x_5511_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5516_; 
v_reuseFailAlloc_5516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5516_, 0, v_a_5513_);
v___x_5515_ = v_reuseFailAlloc_5516_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
return v___x_5515_;
}
}
else
{
lean_object* v_a_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; 
lean_del_object(v___x_5511_);
v_a_5517_ = lean_ctor_get(v_a_5509_, 0);
lean_inc(v_a_5517_);
lean_dec_ref_known(v_a_5509_, 1);
v___x_5518_ = lean_unsigned_to_nat(1u);
v___x_5519_ = lean_nat_add(v_a_5492_, v___x_5518_);
lean_dec(v_a_5492_);
v_a_5492_ = v___x_5519_;
v_b_5493_ = v_a_5517_;
goto _start;
}
}
}
else
{
lean_object* v_a_5522_; lean_object* v___x_5524_; uint8_t v_isShared_5525_; uint8_t v_isSharedCheck_5529_; 
lean_dec(v_a_5492_);
lean_dec_ref(v_config_5491_);
lean_dec_ref(v_methods_5490_);
v_a_5522_ = lean_ctor_get(v___y_5508_, 0);
v_isSharedCheck_5529_ = !lean_is_exclusive(v___y_5508_);
if (v_isSharedCheck_5529_ == 0)
{
v___x_5524_ = v___y_5508_;
v_isShared_5525_ = v_isSharedCheck_5529_;
goto v_resetjp_5523_;
}
else
{
lean_inc(v_a_5522_);
lean_dec(v___y_5508_);
v___x_5524_ = lean_box(0);
v_isShared_5525_ = v_isSharedCheck_5529_;
goto v_resetjp_5523_;
}
v_resetjp_5523_:
{
lean_object* v___x_5527_; 
if (v_isShared_5525_ == 0)
{
v___x_5527_ = v___x_5524_;
goto v_reusejp_5526_;
}
else
{
lean_object* v_reuseFailAlloc_5528_; 
v_reuseFailAlloc_5528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5528_, 0, v_a_5522_);
v___x_5527_ = v_reuseFailAlloc_5528_;
goto v_reusejp_5526_;
}
v_reusejp_5526_:
{
return v___x_5527_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5632_ = _args[0];
lean_object* v___x_5633_ = _args[1];
lean_object* v_methods_5634_ = _args[2];
lean_object* v_config_5635_ = _args[3];
lean_object* v_a_5636_ = _args[4];
lean_object* v_b_5637_ = _args[5];
lean_object* v___y_5638_ = _args[6];
lean_object* v___y_5639_ = _args[7];
lean_object* v___y_5640_ = _args[8];
lean_object* v___y_5641_ = _args[9];
lean_object* v___y_5642_ = _args[10];
lean_object* v___y_5643_ = _args[11];
lean_object* v___y_5644_ = _args[12];
lean_object* v___y_5645_ = _args[13];
lean_object* v___y_5646_ = _args[14];
lean_object* v___y_5647_ = _args[15];
lean_object* v___y_5648_ = _args[16];
lean_object* v___y_5649_ = _args[17];
lean_object* v___y_5650_ = _args[18];
_start:
{
lean_object* v_res_5651_; 
v_res_5651_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v_upperBound_5632_, v___x_5633_, v_methods_5634_, v_config_5635_, v_a_5636_, v_b_5637_, v___y_5638_, v___y_5639_, v___y_5640_, v___y_5641_, v___y_5642_, v___y_5643_, v___y_5644_, v___y_5645_, v___y_5646_, v___y_5647_, v___y_5648_, v___y_5649_);
lean_dec(v___y_5649_);
lean_dec_ref(v___y_5648_);
lean_dec(v___y_5647_);
lean_dec_ref(v___y_5646_);
lean_dec(v___y_5645_);
lean_dec_ref(v___y_5644_);
lean_dec(v___y_5643_);
lean_dec_ref(v___y_5642_);
lean_dec(v___y_5641_);
lean_dec(v___y_5640_);
lean_dec_ref(v___y_5639_);
lean_dec(v___y_5638_);
lean_dec_ref(v___x_5633_);
lean_dec(v_upperBound_5632_);
return v_res_5651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(lean_object* v_methods_5652_, lean_object* v_config_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_, lean_object* v_a_5657_, lean_object* v_a_5658_, lean_object* v_a_5659_, lean_object* v_a_5660_, lean_object* v_a_5661_, lean_object* v_a_5662_, lean_object* v_a_5663_, lean_object* v_a_5664_, lean_object* v_a_5665_){
_start:
{
lean_object* v___x_5667_; lean_object* v_hypotheses_5668_; lean_object* v___x_5669_; lean_object* v_newHyps_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; 
v___x_5667_ = lean_st_ref_get(v_a_5656_);
v_hypotheses_5668_ = lean_ctor_get(v___x_5667_, 3);
lean_inc_ref(v_hypotheses_5668_);
lean_dec(v___x_5667_);
v___x_5669_ = lean_array_get_size(v_hypotheses_5668_);
v_newHyps_5670_ = lean_mk_empty_array_with_capacity(v___x_5669_);
v___x_5671_ = lean_unsigned_to_nat(0u);
v___x_5672_ = lean_box(0);
v___x_5673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5673_, 0, v___x_5672_);
lean_ctor_set(v___x_5673_, 1, v_newHyps_5670_);
v___x_5674_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v___x_5669_, v_hypotheses_5668_, v_methods_5652_, v_config_5653_, v___x_5671_, v___x_5673_, v_a_5654_, v_a_5655_, v_a_5656_, v_a_5657_, v_a_5658_, v_a_5659_, v_a_5660_, v_a_5661_, v_a_5662_, v_a_5663_, v_a_5664_, v_a_5665_);
lean_dec_ref(v_hypotheses_5668_);
if (lean_obj_tag(v___x_5674_) == 0)
{
lean_object* v_a_5675_; lean_object* v___x_5677_; uint8_t v_isShared_5678_; uint8_t v_isSharedCheck_5704_; 
v_a_5675_ = lean_ctor_get(v___x_5674_, 0);
v_isSharedCheck_5704_ = !lean_is_exclusive(v___x_5674_);
if (v_isSharedCheck_5704_ == 0)
{
v___x_5677_ = v___x_5674_;
v_isShared_5678_ = v_isSharedCheck_5704_;
goto v_resetjp_5676_;
}
else
{
lean_inc(v_a_5675_);
lean_dec(v___x_5674_);
v___x_5677_ = lean_box(0);
v_isShared_5678_ = v_isSharedCheck_5704_;
goto v_resetjp_5676_;
}
v_resetjp_5676_:
{
lean_object* v_fst_5679_; 
v_fst_5679_ = lean_ctor_get(v_a_5675_, 0);
if (lean_obj_tag(v_fst_5679_) == 0)
{
lean_object* v_snd_5680_; lean_object* v___x_5681_; lean_object* v_caches_5682_; lean_object* v_typeAnalysis_5683_; lean_object* v_target_5684_; uint8_t v_didChange_5685_; lean_object* v___x_5687_; uint8_t v_isShared_5688_; uint8_t v_isSharedCheck_5698_; 
v_snd_5680_ = lean_ctor_get(v_a_5675_, 1);
lean_inc(v_snd_5680_);
lean_dec(v_a_5675_);
v___x_5681_ = lean_st_ref_take(v_a_5656_);
v_caches_5682_ = lean_ctor_get(v___x_5681_, 0);
v_typeAnalysis_5683_ = lean_ctor_get(v___x_5681_, 1);
v_target_5684_ = lean_ctor_get(v___x_5681_, 2);
v_didChange_5685_ = lean_ctor_get_uint8(v___x_5681_, sizeof(void*)*4);
v_isSharedCheck_5698_ = !lean_is_exclusive(v___x_5681_);
if (v_isSharedCheck_5698_ == 0)
{
lean_object* v_unused_5699_; 
v_unused_5699_ = lean_ctor_get(v___x_5681_, 3);
lean_dec(v_unused_5699_);
v___x_5687_ = v___x_5681_;
v_isShared_5688_ = v_isSharedCheck_5698_;
goto v_resetjp_5686_;
}
else
{
lean_inc(v_target_5684_);
lean_inc(v_typeAnalysis_5683_);
lean_inc(v_caches_5682_);
lean_dec(v___x_5681_);
v___x_5687_ = lean_box(0);
v_isShared_5688_ = v_isSharedCheck_5698_;
goto v_resetjp_5686_;
}
v_resetjp_5686_:
{
lean_object* v___x_5690_; 
if (v_isShared_5688_ == 0)
{
lean_ctor_set(v___x_5687_, 3, v_snd_5680_);
v___x_5690_ = v___x_5687_;
goto v_reusejp_5689_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v_caches_5682_);
lean_ctor_set(v_reuseFailAlloc_5697_, 1, v_typeAnalysis_5683_);
lean_ctor_set(v_reuseFailAlloc_5697_, 2, v_target_5684_);
lean_ctor_set(v_reuseFailAlloc_5697_, 3, v_snd_5680_);
lean_ctor_set_uint8(v_reuseFailAlloc_5697_, sizeof(void*)*4, v_didChange_5685_);
v___x_5690_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5689_;
}
v_reusejp_5689_:
{
lean_object* v___x_5691_; uint8_t v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5695_; 
v___x_5691_ = lean_st_ref_put(v_a_5656_, v___x_5690_);
v___x_5692_ = 0;
v___x_5693_ = lean_box(v___x_5692_);
if (v_isShared_5678_ == 0)
{
lean_ctor_set(v___x_5677_, 0, v___x_5693_);
v___x_5695_ = v___x_5677_;
goto v_reusejp_5694_;
}
else
{
lean_object* v_reuseFailAlloc_5696_; 
v_reuseFailAlloc_5696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5696_, 0, v___x_5693_);
v___x_5695_ = v_reuseFailAlloc_5696_;
goto v_reusejp_5694_;
}
v_reusejp_5694_:
{
return v___x_5695_;
}
}
}
}
else
{
lean_object* v_val_5700_; lean_object* v___x_5702_; 
lean_inc_ref(v_fst_5679_);
lean_dec(v_a_5675_);
v_val_5700_ = lean_ctor_get(v_fst_5679_, 0);
lean_inc(v_val_5700_);
lean_dec_ref_known(v_fst_5679_, 1);
if (v_isShared_5678_ == 0)
{
lean_ctor_set(v___x_5677_, 0, v_val_5700_);
v___x_5702_ = v___x_5677_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v_val_5700_);
v___x_5702_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
return v___x_5702_;
}
}
}
}
else
{
lean_object* v_a_5705_; lean_object* v___x_5707_; uint8_t v_isShared_5708_; uint8_t v_isSharedCheck_5712_; 
v_a_5705_ = lean_ctor_get(v___x_5674_, 0);
v_isSharedCheck_5712_ = !lean_is_exclusive(v___x_5674_);
if (v_isSharedCheck_5712_ == 0)
{
v___x_5707_ = v___x_5674_;
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
else
{
lean_inc(v_a_5705_);
lean_dec(v___x_5674_);
v___x_5707_ = lean_box(0);
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
v_resetjp_5706_:
{
lean_object* v___x_5710_; 
if (v_isShared_5708_ == 0)
{
v___x_5710_ = v___x_5707_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v_a_5705_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
return v___x_5710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go___boxed(lean_object* v_methods_5713_, lean_object* v_config_5714_, lean_object* v_a_5715_, lean_object* v_a_5716_, lean_object* v_a_5717_, lean_object* v_a_5718_, lean_object* v_a_5719_, lean_object* v_a_5720_, lean_object* v_a_5721_, lean_object* v_a_5722_, lean_object* v_a_5723_, lean_object* v_a_5724_, lean_object* v_a_5725_, lean_object* v_a_5726_, lean_object* v_a_5727_){
_start:
{
lean_object* v_res_5728_; 
v_res_5728_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(v_methods_5713_, v_config_5714_, v_a_5715_, v_a_5716_, v_a_5717_, v_a_5718_, v_a_5719_, v_a_5720_, v_a_5721_, v_a_5722_, v_a_5723_, v_a_5724_, v_a_5725_, v_a_5726_);
lean_dec(v_a_5726_);
lean_dec_ref(v_a_5725_);
lean_dec(v_a_5724_);
lean_dec_ref(v_a_5723_);
lean_dec(v_a_5722_);
lean_dec_ref(v_a_5721_);
lean_dec(v_a_5720_);
lean_dec_ref(v_a_5719_);
lean_dec(v_a_5718_);
lean_dec(v_a_5717_);
lean_dec_ref(v_a_5716_);
lean_dec(v_a_5715_);
return v_res_5728_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(lean_object* v_cls_5729_, lean_object* v_msg_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_, lean_object* v___y_5735_, lean_object* v___y_5736_, lean_object* v___y_5737_, lean_object* v___y_5738_, lean_object* v___y_5739_, lean_object* v___y_5740_, lean_object* v___y_5741_, lean_object* v___y_5742_){
_start:
{
lean_object* v___x_5744_; 
v___x_5744_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v_cls_5729_, v_msg_5730_, v___y_5739_, v___y_5740_, v___y_5741_, v___y_5742_);
return v___x_5744_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___boxed(lean_object* v_cls_5745_, lean_object* v_msg_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_, lean_object* v___y_5752_, lean_object* v___y_5753_, lean_object* v___y_5754_, lean_object* v___y_5755_, lean_object* v___y_5756_, lean_object* v___y_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_){
_start:
{
lean_object* v_res_5760_; 
v_res_5760_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(v_cls_5745_, v_msg_5746_, v___y_5747_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_, v___y_5752_, v___y_5753_, v___y_5754_, v___y_5755_, v___y_5756_, v___y_5757_, v___y_5758_);
lean_dec(v___y_5758_);
lean_dec_ref(v___y_5757_);
lean_dec(v___y_5756_);
lean_dec_ref(v___y_5755_);
lean_dec(v___y_5754_);
lean_dec_ref(v___y_5753_);
lean_dec(v___y_5752_);
lean_dec_ref(v___y_5751_);
lean_dec(v___y_5750_);
lean_dec(v___y_5749_);
lean_dec_ref(v___y_5748_);
lean_dec(v___y_5747_);
return v_res_5760_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(lean_object* v_upperBound_5761_, lean_object* v___x_5762_, lean_object* v_methods_5763_, lean_object* v_config_5764_, lean_object* v_inst_5765_, lean_object* v_R_5766_, lean_object* v_a_5767_, lean_object* v_b_5768_, lean_object* v_c_5769_, lean_object* v___y_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_, lean_object* v___y_5774_, lean_object* v___y_5775_, lean_object* v___y_5776_, lean_object* v___y_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_, lean_object* v___y_5780_, lean_object* v___y_5781_){
_start:
{
lean_object* v___x_5783_; 
v___x_5783_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v_upperBound_5761_, v___x_5762_, v_methods_5763_, v_config_5764_, v_a_5767_, v_b_5768_, v___y_5770_, v___y_5771_, v___y_5772_, v___y_5773_, v___y_5774_, v___y_5775_, v___y_5776_, v___y_5777_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_);
return v___x_5783_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_5784_ = _args[0];
lean_object* v___x_5785_ = _args[1];
lean_object* v_methods_5786_ = _args[2];
lean_object* v_config_5787_ = _args[3];
lean_object* v_inst_5788_ = _args[4];
lean_object* v_R_5789_ = _args[5];
lean_object* v_a_5790_ = _args[6];
lean_object* v_b_5791_ = _args[7];
lean_object* v_c_5792_ = _args[8];
lean_object* v___y_5793_ = _args[9];
lean_object* v___y_5794_ = _args[10];
lean_object* v___y_5795_ = _args[11];
lean_object* v___y_5796_ = _args[12];
lean_object* v___y_5797_ = _args[13];
lean_object* v___y_5798_ = _args[14];
lean_object* v___y_5799_ = _args[15];
lean_object* v___y_5800_ = _args[16];
lean_object* v___y_5801_ = _args[17];
lean_object* v___y_5802_ = _args[18];
lean_object* v___y_5803_ = _args[19];
lean_object* v___y_5804_ = _args[20];
lean_object* v___y_5805_ = _args[21];
_start:
{
lean_object* v_res_5806_; 
v_res_5806_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(v_upperBound_5784_, v___x_5785_, v_methods_5786_, v_config_5787_, v_inst_5788_, v_R_5789_, v_a_5790_, v_b_5791_, v_c_5792_, v___y_5793_, v___y_5794_, v___y_5795_, v___y_5796_, v___y_5797_, v___y_5798_, v___y_5799_, v___y_5800_, v___y_5801_, v___y_5802_, v___y_5803_, v___y_5804_);
lean_dec(v___y_5804_);
lean_dec_ref(v___y_5803_);
lean_dec(v___y_5802_);
lean_dec_ref(v___y_5801_);
lean_dec(v___y_5800_);
lean_dec_ref(v___y_5799_);
lean_dec(v___y_5798_);
lean_dec_ref(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec(v___y_5795_);
lean_dec_ref(v___y_5794_);
lean_dec(v___y_5793_);
lean_dec_ref(v___x_5785_);
lean_dec(v_upperBound_5784_);
return v_res_5806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(lean_object* v_methods_5807_, lean_object* v_config_5808_, lean_object* v_a_5809_, lean_object* v_a_5810_, lean_object* v_a_5811_, lean_object* v_a_5812_, lean_object* v_a_5813_, lean_object* v_a_5814_, lean_object* v_a_5815_, lean_object* v_a_5816_, lean_object* v_a_5817_, lean_object* v_a_5818_, lean_object* v_a_5819_){
_start:
{
lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5821_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_5822_ = lean_st_mk_ref(v___x_5821_);
v___x_5823_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(v_methods_5807_, v_config_5808_, v___x_5822_, v_a_5809_, v_a_5810_, v_a_5811_, v_a_5812_, v_a_5813_, v_a_5814_, v_a_5815_, v_a_5816_, v_a_5817_, v_a_5818_, v_a_5819_);
if (lean_obj_tag(v___x_5823_) == 0)
{
lean_object* v_a_5824_; lean_object* v___x_5826_; uint8_t v_isShared_5827_; uint8_t v_isSharedCheck_5832_; 
v_a_5824_ = lean_ctor_get(v___x_5823_, 0);
v_isSharedCheck_5832_ = !lean_is_exclusive(v___x_5823_);
if (v_isSharedCheck_5832_ == 0)
{
v___x_5826_ = v___x_5823_;
v_isShared_5827_ = v_isSharedCheck_5832_;
goto v_resetjp_5825_;
}
else
{
lean_inc(v_a_5824_);
lean_dec(v___x_5823_);
v___x_5826_ = lean_box(0);
v_isShared_5827_ = v_isSharedCheck_5832_;
goto v_resetjp_5825_;
}
v_resetjp_5825_:
{
lean_object* v___x_5828_; lean_object* v___x_5830_; 
v___x_5828_ = lean_st_ref_get(v___x_5822_);
lean_dec(v___x_5822_);
lean_dec(v___x_5828_);
if (v_isShared_5827_ == 0)
{
v___x_5830_ = v___x_5826_;
goto v_reusejp_5829_;
}
else
{
lean_object* v_reuseFailAlloc_5831_; 
v_reuseFailAlloc_5831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5831_, 0, v_a_5824_);
v___x_5830_ = v_reuseFailAlloc_5831_;
goto v_reusejp_5829_;
}
v_reusejp_5829_:
{
return v___x_5830_;
}
}
}
else
{
lean_dec(v___x_5822_);
return v___x_5823_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps___boxed(lean_object* v_methods_5833_, lean_object* v_config_5834_, lean_object* v_a_5835_, lean_object* v_a_5836_, lean_object* v_a_5837_, lean_object* v_a_5838_, lean_object* v_a_5839_, lean_object* v_a_5840_, lean_object* v_a_5841_, lean_object* v_a_5842_, lean_object* v_a_5843_, lean_object* v_a_5844_, lean_object* v_a_5845_, lean_object* v_a_5846_){
_start:
{
lean_object* v_res_5847_; 
v_res_5847_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(v_methods_5833_, v_config_5834_, v_a_5835_, v_a_5836_, v_a_5837_, v_a_5838_, v_a_5839_, v_a_5840_, v_a_5841_, v_a_5842_, v_a_5843_, v_a_5844_, v_a_5845_);
lean_dec(v_a_5845_);
lean_dec_ref(v_a_5844_);
lean_dec(v_a_5843_);
lean_dec_ref(v_a_5842_);
lean_dec(v_a_5841_);
lean_dec_ref(v_a_5840_);
lean_dec(v_a_5839_);
lean_dec_ref(v_a_5838_);
lean_dec(v_a_5837_);
lean_dec(v_a_5836_);
lean_dec_ref(v_a_5835_);
return v_res_5847_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5849_; lean_object* v___x_5850_; 
v___x_5849_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0));
v___x_5850_ = l_Lean_stringToMessageData(v___x_5849_);
return v___x_5850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object* v_name_5851_, lean_object* v_x_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_, lean_object* v___y_5855_, lean_object* v___y_5856_, lean_object* v___y_5857_, lean_object* v___y_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_){
_start:
{
lean_object* v___x_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; 
v___x_5865_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1);
v___x_5866_ = l_Lean_MessageData_ofName(v_name_5851_);
v___x_5867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5867_, 0, v___x_5865_);
lean_ctor_set(v___x_5867_, 1, v___x_5866_);
v___x_5868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5868_, 0, v___x_5867_);
return v___x_5868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object* v_name_5869_, lean_object* v_x_5870_, lean_object* v___y_5871_, lean_object* v___y_5872_, lean_object* v___y_5873_, lean_object* v___y_5874_, lean_object* v___y_5875_, lean_object* v___y_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_, lean_object* v___y_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_){
_start:
{
lean_object* v_res_5883_; 
v_res_5883_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(v_name_5869_, v_x_5870_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_, v___y_5879_, v___y_5880_, v___y_5881_);
lean_dec(v___y_5881_);
lean_dec_ref(v___y_5880_);
lean_dec(v___y_5879_);
lean_dec_ref(v___y_5878_);
lean_dec(v___y_5877_);
lean_dec_ref(v___y_5876_);
lean_dec(v___y_5875_);
lean_dec_ref(v___y_5874_);
lean_dec(v___y_5873_);
lean_dec(v___y_5872_);
lean_dec_ref(v___y_5871_);
lean_dec_ref(v_x_5870_);
return v_res_5883_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0(void){
_start:
{
lean_object* v___x_5884_; 
v___x_5884_ = l_instMonadExceptOfEIO___redArg();
return v___x_5884_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1(void){
_start:
{
lean_object* v___x_5885_; lean_object* v___x_5886_; 
v___x_5885_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0);
v___x_5886_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5885_);
return v___x_5886_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2(void){
_start:
{
lean_object* v___x_5887_; lean_object* v___x_5888_; 
v___x_5887_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1);
v___x_5888_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5887_);
return v___x_5888_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3(void){
_start:
{
lean_object* v___x_5889_; lean_object* v___x_5890_; 
v___x_5889_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2);
v___x_5890_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5889_);
return v___x_5890_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4(void){
_start:
{
lean_object* v___x_5891_; lean_object* v___x_5892_; 
v___x_5891_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3);
v___x_5892_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5891_);
return v___x_5892_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5(void){
_start:
{
lean_object* v___x_5893_; lean_object* v___x_5894_; 
v___x_5893_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4);
v___x_5894_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5893_);
return v___x_5894_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6(void){
_start:
{
lean_object* v___x_5895_; lean_object* v___x_5896_; 
v___x_5895_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5);
v___x_5896_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5895_);
return v___x_5896_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7(void){
_start:
{
lean_object* v___x_5897_; lean_object* v___x_5898_; 
v___x_5897_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6);
v___x_5898_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5897_);
return v___x_5898_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8(void){
_start:
{
lean_object* v___x_5899_; lean_object* v___x_5900_; 
v___x_5899_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7);
v___x_5900_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5899_);
return v___x_5900_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9(void){
_start:
{
lean_object* v___x_5901_; lean_object* v___x_5902_; 
v___x_5901_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8);
v___x_5902_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5901_);
return v___x_5902_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10(void){
_start:
{
lean_object* v___x_5903_; lean_object* v___x_5904_; 
v___x_5903_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9);
v___x_5904_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5903_);
return v___x_5904_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11(void){
_start:
{
lean_object* v___x_5905_; lean_object* v___x_5906_; 
v___x_5905_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10);
v___x_5906_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5905_);
return v___x_5906_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13(void){
_start:
{
lean_object* v___x_5908_; double v___x_5909_; 
v___x_5908_ = lean_unsigned_to_nat(1000000000u);
v___x_5909_ = lean_float_of_nat(v___x_5908_);
return v___x_5909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object* v_pass_5910_, lean_object* v_a_5911_, lean_object* v_a_5912_, lean_object* v_a_5913_, lean_object* v_a_5914_, lean_object* v_a_5915_, lean_object* v_a_5916_, lean_object* v_a_5917_, lean_object* v_a_5918_, lean_object* v_a_5919_, lean_object* v_a_5920_, lean_object* v_a_5921_){
_start:
{
lean_object* v___x_5923_; lean_object* v_toApplicative_5924_; lean_object* v_toFunctor_5925_; lean_object* v_toSeq_5926_; lean_object* v_toSeqLeft_5927_; lean_object* v_toSeqRight_5928_; lean_object* v___f_5929_; lean_object* v___f_5930_; lean_object* v___f_5931_; lean_object* v___f_5932_; lean_object* v___x_5933_; lean_object* v___f_5934_; lean_object* v___f_5935_; lean_object* v___f_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v_toApplicative_5940_; lean_object* v___x_5942_; uint8_t v_isShared_5943_; uint8_t v_isSharedCheck_6083_; 
v___x_5923_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_5924_ = lean_ctor_get(v___x_5923_, 0);
v_toFunctor_5925_ = lean_ctor_get(v_toApplicative_5924_, 0);
v_toSeq_5926_ = lean_ctor_get(v_toApplicative_5924_, 2);
v_toSeqLeft_5927_ = lean_ctor_get(v_toApplicative_5924_, 3);
v_toSeqRight_5928_ = lean_ctor_get(v_toApplicative_5924_, 4);
v___f_5929_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_5930_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_5925_, 2);
v___f_5931_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5931_, 0, v_toFunctor_5925_);
v___f_5932_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5932_, 0, v_toFunctor_5925_);
v___x_5933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5933_, 0, v___f_5931_);
lean_ctor_set(v___x_5933_, 1, v___f_5932_);
lean_inc(v_toSeqRight_5928_);
v___f_5934_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5934_, 0, v_toSeqRight_5928_);
lean_inc(v_toSeqLeft_5927_);
v___f_5935_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5935_, 0, v_toSeqLeft_5927_);
lean_inc(v_toSeq_5926_);
v___f_5936_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5936_, 0, v_toSeq_5926_);
v___x_5937_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5937_, 0, v___x_5933_);
lean_ctor_set(v___x_5937_, 1, v___f_5929_);
lean_ctor_set(v___x_5937_, 2, v___f_5936_);
lean_ctor_set(v___x_5937_, 3, v___f_5935_);
lean_ctor_set(v___x_5937_, 4, v___f_5934_);
v___x_5938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5938_, 0, v___x_5937_);
lean_ctor_set(v___x_5938_, 1, v___f_5930_);
v___x_5939_ = l_StateRefT_x27_instMonad___redArg(v___x_5938_);
v_toApplicative_5940_ = lean_ctor_get(v___x_5939_, 0);
v_isSharedCheck_6083_ = !lean_is_exclusive(v___x_5939_);
if (v_isSharedCheck_6083_ == 0)
{
lean_object* v_unused_6084_; 
v_unused_6084_ = lean_ctor_get(v___x_5939_, 1);
lean_dec(v_unused_6084_);
v___x_5942_ = v___x_5939_;
v_isShared_5943_ = v_isSharedCheck_6083_;
goto v_resetjp_5941_;
}
else
{
lean_inc(v_toApplicative_5940_);
lean_dec(v___x_5939_);
v___x_5942_ = lean_box(0);
v_isShared_5943_ = v_isSharedCheck_6083_;
goto v_resetjp_5941_;
}
v_resetjp_5941_:
{
lean_object* v_toFunctor_5944_; lean_object* v_toSeq_5945_; lean_object* v_toSeqLeft_5946_; lean_object* v_toSeqRight_5947_; lean_object* v___x_5949_; uint8_t v_isShared_5950_; uint8_t v_isSharedCheck_6081_; 
v_toFunctor_5944_ = lean_ctor_get(v_toApplicative_5940_, 0);
v_toSeq_5945_ = lean_ctor_get(v_toApplicative_5940_, 2);
v_toSeqLeft_5946_ = lean_ctor_get(v_toApplicative_5940_, 3);
v_toSeqRight_5947_ = lean_ctor_get(v_toApplicative_5940_, 4);
v_isSharedCheck_6081_ = !lean_is_exclusive(v_toApplicative_5940_);
if (v_isSharedCheck_6081_ == 0)
{
lean_object* v_unused_6082_; 
v_unused_6082_ = lean_ctor_get(v_toApplicative_5940_, 1);
lean_dec(v_unused_6082_);
v___x_5949_ = v_toApplicative_5940_;
v_isShared_5950_ = v_isSharedCheck_6081_;
goto v_resetjp_5948_;
}
else
{
lean_inc(v_toSeqRight_5947_);
lean_inc(v_toSeqLeft_5946_);
lean_inc(v_toSeq_5945_);
lean_inc(v_toFunctor_5944_);
lean_dec(v_toApplicative_5940_);
v___x_5949_ = lean_box(0);
v_isShared_5950_ = v_isSharedCheck_6081_;
goto v_resetjp_5948_;
}
v_resetjp_5948_:
{
lean_object* v___f_5951_; lean_object* v___f_5952_; lean_object* v___f_5953_; lean_object* v___f_5954_; lean_object* v___x_5955_; lean_object* v___f_5956_; lean_object* v___f_5957_; lean_object* v___f_5958_; lean_object* v___x_5960_; 
v___f_5951_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_5952_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_5944_);
v___f_5953_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5953_, 0, v_toFunctor_5944_);
v___f_5954_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5954_, 0, v_toFunctor_5944_);
v___x_5955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5955_, 0, v___f_5953_);
lean_ctor_set(v___x_5955_, 1, v___f_5954_);
v___f_5956_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5956_, 0, v_toSeqRight_5947_);
v___f_5957_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5957_, 0, v_toSeqLeft_5946_);
v___f_5958_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5958_, 0, v_toSeq_5945_);
if (v_isShared_5950_ == 0)
{
lean_ctor_set(v___x_5949_, 4, v___f_5956_);
lean_ctor_set(v___x_5949_, 3, v___f_5957_);
lean_ctor_set(v___x_5949_, 2, v___f_5958_);
lean_ctor_set(v___x_5949_, 1, v___f_5951_);
lean_ctor_set(v___x_5949_, 0, v___x_5955_);
v___x_5960_ = v___x_5949_;
goto v_reusejp_5959_;
}
else
{
lean_object* v_reuseFailAlloc_6080_; 
v_reuseFailAlloc_6080_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6080_, 0, v___x_5955_);
lean_ctor_set(v_reuseFailAlloc_6080_, 1, v___f_5951_);
lean_ctor_set(v_reuseFailAlloc_6080_, 2, v___f_5958_);
lean_ctor_set(v_reuseFailAlloc_6080_, 3, v___f_5957_);
lean_ctor_set(v_reuseFailAlloc_6080_, 4, v___f_5956_);
v___x_5960_ = v_reuseFailAlloc_6080_;
goto v_reusejp_5959_;
}
v_reusejp_5959_:
{
lean_object* v___x_5962_; 
if (v_isShared_5943_ == 0)
{
lean_ctor_set(v___x_5942_, 1, v___f_5952_);
lean_ctor_set(v___x_5942_, 0, v___x_5960_);
v___x_5962_ = v___x_5942_;
goto v_reusejp_5961_;
}
else
{
lean_object* v_reuseFailAlloc_6079_; 
v_reuseFailAlloc_6079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6079_, 0, v___x_5960_);
lean_ctor_set(v_reuseFailAlloc_6079_, 1, v___f_5952_);
v___x_5962_ = v_reuseFailAlloc_6079_;
goto v_reusejp_5961_;
}
v_reusejp_5961_:
{
lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v_toMonadRef_5972_; lean_object* v___x_5973_; lean_object* v_name_5974_; lean_object* v_run_x27_5975_; lean_object* v___x_5977_; uint8_t v_isShared_5978_; uint8_t v_isSharedCheck_6078_; 
v___x_5963_ = l_StateRefT_x27_instMonad___redArg(v___x_5962_);
v___x_5964_ = l_ReaderT_instMonad___redArg(v___x_5963_);
v___x_5965_ = l_StateRefT_x27_instMonad___redArg(v___x_5964_);
v___x_5966_ = l_ReaderT_instMonad___redArg(v___x_5965_);
v___x_5967_ = l_ReaderT_instMonad___redArg(v___x_5966_);
v___x_5968_ = l_StateRefT_x27_instMonad___redArg(v___x_5967_);
v___x_5969_ = l_ReaderT_instMonad___redArg(v___x_5968_);
v___x_5970_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_5971_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_5972_ = lean_ctor_get(v___x_5971_, 0);
v___x_5973_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11);
v_name_5974_ = lean_ctor_get(v_pass_5910_, 0);
v_run_x27_5975_ = lean_ctor_get(v_pass_5910_, 1);
v_isSharedCheck_6078_ = !lean_is_exclusive(v_pass_5910_);
if (v_isSharedCheck_6078_ == 0)
{
v___x_5977_ = v_pass_5910_;
v_isShared_5978_ = v_isSharedCheck_6078_;
goto v_resetjp_5976_;
}
else
{
lean_inc(v_run_x27_5975_);
lean_inc(v_name_5974_);
lean_dec(v_pass_5910_);
v___x_5977_ = lean_box(0);
v_isShared_5978_ = v_isSharedCheck_6078_;
goto v_resetjp_5976_;
}
v_resetjp_5976_:
{
lean_object* v___x_5979_; lean_object* v_toCold_5980_; lean_object* v_options_5981_; uint8_t v_hasTrace_5982_; 
v___x_5979_ = l_Lean_KVMap_instValueBool;
v_toCold_5980_ = lean_ctor_get(v_a_5920_, 0);
v_options_5981_ = lean_ctor_get(v_toCold_5980_, 2);
v_hasTrace_5982_ = lean_ctor_get_uint8(v_options_5981_, sizeof(void*)*1);
if (v_hasTrace_5982_ == 0)
{
lean_object* v___x_5983_; 
lean_del_object(v___x_5977_);
lean_dec(v_name_5974_);
lean_dec_ref(v___x_5969_);
lean_inc(v_a_5921_);
lean_inc_ref(v_a_5920_);
lean_inc(v_a_5919_);
lean_inc_ref(v_a_5918_);
lean_inc(v_a_5917_);
lean_inc_ref(v_a_5916_);
lean_inc(v_a_5915_);
lean_inc_ref(v_a_5914_);
lean_inc(v_a_5913_);
lean_inc(v_a_5912_);
lean_inc_ref(v_a_5911_);
v___x_5983_ = lean_apply_12(v_run_x27_5975_, v_a_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_, v_a_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, lean_box(0));
return v___x_5983_;
}
else
{
lean_object* v_inheritedTraceOptions_5984_; lean_object* v___f_5985_; lean_object* v___f_5986_; lean_object* v___f_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; uint8_t v___x_5991_; lean_object* v___y_5993_; lean_object* v___y_5994_; lean_object* v_a_5995_; lean_object* v___y_6011_; lean_object* v___y_6012_; lean_object* v_a_6013_; 
v_inheritedTraceOptions_5984_ = lean_ctor_get(v_toCold_5980_, 11);
v___f_5985_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 14, 1);
lean_closure_set(v___f_5985_, 0, v_name_5974_);
v___f_5986_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___f_5987_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12));
v___x_5988_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5989_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_5990_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5991_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5984_, v_options_5981_, v___x_5990_);
if (v___x_5991_ == 0)
{
lean_object* v___x_6074_; lean_object* v___x_6075_; uint8_t v___x_6076_; 
v___x_6074_ = l_Lean_trace_profiler;
v___x_6075_ = l_Lean_Option_get___redArg(v___x_5979_, v_options_5981_, v___x_6074_);
v___x_6076_ = lean_unbox(v___x_6075_);
lean_dec(v___x_6075_);
if (v___x_6076_ == 0)
{
lean_object* v___x_6077_; 
lean_dec_ref(v___f_5985_);
lean_del_object(v___x_5977_);
lean_dec_ref(v___x_5969_);
lean_inc(v_a_5921_);
lean_inc_ref(v_a_5920_);
lean_inc(v_a_5919_);
lean_inc_ref(v_a_5918_);
lean_inc(v_a_5917_);
lean_inc_ref(v_a_5916_);
lean_inc(v_a_5915_);
lean_inc_ref(v_a_5914_);
lean_inc(v_a_5913_);
lean_inc(v_a_5912_);
lean_inc_ref(v_a_5911_);
v___x_6077_ = lean_apply_12(v_run_x27_5975_, v_a_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_, v_a_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, lean_box(0));
return v___x_6077_;
}
else
{
goto v___jp_6023_;
}
}
else
{
goto v___jp_6023_;
}
v___jp_5992_:
{
lean_object* v___x_5996_; double v___x_5997_; double v___x_5998_; double v___x_5999_; double v___x_6000_; double v___x_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6005_; 
v___x_5996_ = lean_io_mono_nanos_now();
v___x_5997_ = lean_float_of_nat(v___y_5993_);
v___x_5998_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13);
v___x_5999_ = lean_float_div(v___x_5997_, v___x_5998_);
v___x_6000_ = lean_float_of_nat(v___x_5996_);
v___x_6001_ = lean_float_div(v___x_6000_, v___x_5998_);
v___x_6002_ = lean_box_float(v___x_5999_);
v___x_6003_ = lean_box_float(v___x_6001_);
if (v_isShared_5978_ == 0)
{
lean_ctor_set(v___x_5977_, 1, v___x_6003_);
lean_ctor_set(v___x_5977_, 0, v___x_6002_);
v___x_6005_ = v___x_5977_;
goto v_reusejp_6004_;
}
else
{
lean_object* v_reuseFailAlloc_6009_; 
v_reuseFailAlloc_6009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6009_, 0, v___x_6002_);
lean_ctor_set(v_reuseFailAlloc_6009_, 1, v___x_6003_);
v___x_6005_ = v_reuseFailAlloc_6009_;
goto v_reusejp_6004_;
}
v_reusejp_6004_:
{
lean_object* v___x_6006_; lean_object* v___x_28875__overap_6007_; lean_object* v___x_6008_; 
v___x_6006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6006_, 0, v_a_5995_);
lean_ctor_set(v___x_6006_, 1, v___x_6005_);
lean_inc_ref(v_toMonadRef_5972_);
v___x_28875__overap_6007_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_5969_, v___x_5970_, v_toMonadRef_5972_, v___f_5986_, lean_box(0), v___x_5973_, v___f_5987_, v___x_5988_, v_hasTrace_5982_, v___x_5989_, v_options_5981_, v___x_5991_, v___y_5994_, v___f_5985_, v___x_6006_);
lean_inc(v_a_5921_);
lean_inc_ref(v_a_5920_);
lean_inc(v_a_5919_);
lean_inc_ref(v_a_5918_);
lean_inc(v_a_5917_);
lean_inc_ref(v_a_5916_);
lean_inc(v_a_5915_);
lean_inc_ref(v_a_5914_);
lean_inc(v_a_5913_);
lean_inc(v_a_5912_);
lean_inc_ref(v_a_5911_);
v___x_6008_ = lean_apply_12(v___x_28875__overap_6007_, v_a_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_, v_a_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, lean_box(0));
return v___x_6008_;
}
}
v___jp_6010_:
{
lean_object* v___x_6014_; double v___x_6015_; double v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_28896__overap_6021_; lean_object* v___x_6022_; 
v___x_6014_ = lean_io_get_num_heartbeats();
v___x_6015_ = lean_float_of_nat(v___y_6011_);
v___x_6016_ = lean_float_of_nat(v___x_6014_);
v___x_6017_ = lean_box_float(v___x_6015_);
v___x_6018_ = lean_box_float(v___x_6016_);
v___x_6019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6019_, 0, v___x_6017_);
lean_ctor_set(v___x_6019_, 1, v___x_6018_);
v___x_6020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6020_, 0, v_a_6013_);
lean_ctor_set(v___x_6020_, 1, v___x_6019_);
lean_inc_ref(v_toMonadRef_5972_);
v___x_28896__overap_6021_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_5969_, v___x_5970_, v_toMonadRef_5972_, v___f_5986_, lean_box(0), v___x_5973_, v___f_5987_, v___x_5988_, v_hasTrace_5982_, v___x_5989_, v_options_5981_, v___x_5991_, v___y_6012_, v___f_5985_, v___x_6020_);
lean_inc(v_a_5921_);
lean_inc_ref(v_a_5920_);
lean_inc(v_a_5919_);
lean_inc_ref(v_a_5918_);
lean_inc(v_a_5917_);
lean_inc_ref(v_a_5916_);
lean_inc(v_a_5915_);
lean_inc_ref(v_a_5914_);
lean_inc(v_a_5913_);
lean_inc(v_a_5912_);
lean_inc_ref(v_a_5911_);
v___x_6022_ = lean_apply_12(v___x_28896__overap_6021_, v_a_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_, v_a_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, lean_box(0));
return v___x_6022_;
}
v___jp_6023_:
{
lean_object* v___x_28853__overap_6024_; lean_object* v___x_6025_; 
lean_inc_ref(v___x_5969_);
v___x_28853__overap_6024_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_box(0), v___x_5969_, v___x_5970_);
lean_inc(v_a_5921_);
lean_inc_ref(v_a_5920_);
lean_inc(v_a_5919_);
lean_inc_ref(v_a_5918_);
lean_inc(v_a_5917_);
lean_inc_ref(v_a_5916_);
lean_inc(v_a_5915_);
lean_inc_ref(v_a_5914_);
lean_inc(v_a_5913_);
lean_inc(v_a_5912_);
lean_inc_ref(v_a_5911_);
v___x_6025_ = lean_apply_12(v___x_28853__overap_6024_, v_a_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_, v_a_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, lean_box(0));
if (lean_obj_tag(v___x_6025_) == 0)
{
lean_object* v_a_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; uint8_t v___x_6029_; 
v_a_6026_ = lean_ctor_get(v___x_6025_, 0);
lean_inc(v_a_6026_);
lean_dec_ref_known(v___x_6025_, 1);
v___x_6027_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6028_ = l_Lean_Option_get___redArg(v___x_5979_, v_options_5981_, v___x_6027_);
v___x_6029_ = lean_unbox(v___x_6028_);
lean_dec(v___x_6028_);
if (v___x_6029_ == 0)
{
lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6030_ = lean_io_mono_nanos_now();
lean_inc(v_a_5921_);
lean_inc_ref(v_a_5920_);
lean_inc(v_a_5919_);
lean_inc_ref(v_a_5918_);
lean_inc(v_a_5917_);
lean_inc_ref(v_a_5916_);
lean_inc(v_a_5915_);
lean_inc_ref(v_a_5914_);
lean_inc(v_a_5913_);
lean_inc(v_a_5912_);
lean_inc_ref(v_a_5911_);
v___x_6031_ = lean_apply_12(v_run_x27_5975_, v_a_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_, v_a_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, lean_box(0));
if (lean_obj_tag(v___x_6031_) == 0)
{
lean_object* v_a_6032_; lean_object* v___x_6034_; uint8_t v_isShared_6035_; uint8_t v_isSharedCheck_6039_; 
v_a_6032_ = lean_ctor_get(v___x_6031_, 0);
v_isSharedCheck_6039_ = !lean_is_exclusive(v___x_6031_);
if (v_isSharedCheck_6039_ == 0)
{
v___x_6034_ = v___x_6031_;
v_isShared_6035_ = v_isSharedCheck_6039_;
goto v_resetjp_6033_;
}
else
{
lean_inc(v_a_6032_);
lean_dec(v___x_6031_);
v___x_6034_ = lean_box(0);
v_isShared_6035_ = v_isSharedCheck_6039_;
goto v_resetjp_6033_;
}
v_resetjp_6033_:
{
lean_object* v___x_6037_; 
if (v_isShared_6035_ == 0)
{
lean_ctor_set_tag(v___x_6034_, 1);
v___x_6037_ = v___x_6034_;
goto v_reusejp_6036_;
}
else
{
lean_object* v_reuseFailAlloc_6038_; 
v_reuseFailAlloc_6038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6038_, 0, v_a_6032_);
v___x_6037_ = v_reuseFailAlloc_6038_;
goto v_reusejp_6036_;
}
v_reusejp_6036_:
{
v___y_5993_ = v___x_6030_;
v___y_5994_ = v_a_6026_;
v_a_5995_ = v___x_6037_;
goto v___jp_5992_;
}
}
}
else
{
lean_object* v_a_6040_; lean_object* v___x_6042_; uint8_t v_isShared_6043_; uint8_t v_isSharedCheck_6047_; 
v_a_6040_ = lean_ctor_get(v___x_6031_, 0);
v_isSharedCheck_6047_ = !lean_is_exclusive(v___x_6031_);
if (v_isSharedCheck_6047_ == 0)
{
v___x_6042_ = v___x_6031_;
v_isShared_6043_ = v_isSharedCheck_6047_;
goto v_resetjp_6041_;
}
else
{
lean_inc(v_a_6040_);
lean_dec(v___x_6031_);
v___x_6042_ = lean_box(0);
v_isShared_6043_ = v_isSharedCheck_6047_;
goto v_resetjp_6041_;
}
v_resetjp_6041_:
{
lean_object* v___x_6045_; 
if (v_isShared_6043_ == 0)
{
lean_ctor_set_tag(v___x_6042_, 0);
v___x_6045_ = v___x_6042_;
goto v_reusejp_6044_;
}
else
{
lean_object* v_reuseFailAlloc_6046_; 
v_reuseFailAlloc_6046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6046_, 0, v_a_6040_);
v___x_6045_ = v_reuseFailAlloc_6046_;
goto v_reusejp_6044_;
}
v_reusejp_6044_:
{
v___y_5993_ = v___x_6030_;
v___y_5994_ = v_a_6026_;
v_a_5995_ = v___x_6045_;
goto v___jp_5992_;
}
}
}
}
else
{
lean_object* v___x_6048_; lean_object* v___x_6049_; 
lean_del_object(v___x_5977_);
v___x_6048_ = lean_io_get_num_heartbeats();
lean_inc(v_a_5921_);
lean_inc_ref(v_a_5920_);
lean_inc(v_a_5919_);
lean_inc_ref(v_a_5918_);
lean_inc(v_a_5917_);
lean_inc_ref(v_a_5916_);
lean_inc(v_a_5915_);
lean_inc_ref(v_a_5914_);
lean_inc(v_a_5913_);
lean_inc(v_a_5912_);
lean_inc_ref(v_a_5911_);
v___x_6049_ = lean_apply_12(v_run_x27_5975_, v_a_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_, v_a_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, lean_box(0));
if (lean_obj_tag(v___x_6049_) == 0)
{
lean_object* v_a_6050_; lean_object* v___x_6052_; uint8_t v_isShared_6053_; uint8_t v_isSharedCheck_6057_; 
v_a_6050_ = lean_ctor_get(v___x_6049_, 0);
v_isSharedCheck_6057_ = !lean_is_exclusive(v___x_6049_);
if (v_isSharedCheck_6057_ == 0)
{
v___x_6052_ = v___x_6049_;
v_isShared_6053_ = v_isSharedCheck_6057_;
goto v_resetjp_6051_;
}
else
{
lean_inc(v_a_6050_);
lean_dec(v___x_6049_);
v___x_6052_ = lean_box(0);
v_isShared_6053_ = v_isSharedCheck_6057_;
goto v_resetjp_6051_;
}
v_resetjp_6051_:
{
lean_object* v___x_6055_; 
if (v_isShared_6053_ == 0)
{
lean_ctor_set_tag(v___x_6052_, 1);
v___x_6055_ = v___x_6052_;
goto v_reusejp_6054_;
}
else
{
lean_object* v_reuseFailAlloc_6056_; 
v_reuseFailAlloc_6056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6056_, 0, v_a_6050_);
v___x_6055_ = v_reuseFailAlloc_6056_;
goto v_reusejp_6054_;
}
v_reusejp_6054_:
{
v___y_6011_ = v___x_6048_;
v___y_6012_ = v_a_6026_;
v_a_6013_ = v___x_6055_;
goto v___jp_6010_;
}
}
}
else
{
lean_object* v_a_6058_; lean_object* v___x_6060_; uint8_t v_isShared_6061_; uint8_t v_isSharedCheck_6065_; 
v_a_6058_ = lean_ctor_get(v___x_6049_, 0);
v_isSharedCheck_6065_ = !lean_is_exclusive(v___x_6049_);
if (v_isSharedCheck_6065_ == 0)
{
v___x_6060_ = v___x_6049_;
v_isShared_6061_ = v_isSharedCheck_6065_;
goto v_resetjp_6059_;
}
else
{
lean_inc(v_a_6058_);
lean_dec(v___x_6049_);
v___x_6060_ = lean_box(0);
v_isShared_6061_ = v_isSharedCheck_6065_;
goto v_resetjp_6059_;
}
v_resetjp_6059_:
{
lean_object* v___x_6063_; 
if (v_isShared_6061_ == 0)
{
lean_ctor_set_tag(v___x_6060_, 0);
v___x_6063_ = v___x_6060_;
goto v_reusejp_6062_;
}
else
{
lean_object* v_reuseFailAlloc_6064_; 
v_reuseFailAlloc_6064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6064_, 0, v_a_6058_);
v___x_6063_ = v_reuseFailAlloc_6064_;
goto v_reusejp_6062_;
}
v_reusejp_6062_:
{
v___y_6011_ = v___x_6048_;
v___y_6012_ = v_a_6026_;
v_a_6013_ = v___x_6063_;
goto v___jp_6010_;
}
}
}
}
}
else
{
lean_object* v_a_6066_; lean_object* v___x_6068_; uint8_t v_isShared_6069_; uint8_t v_isSharedCheck_6073_; 
lean_dec_ref(v___f_5985_);
lean_del_object(v___x_5977_);
lean_dec_ref(v_run_x27_5975_);
lean_dec_ref(v___x_5969_);
v_a_6066_ = lean_ctor_get(v___x_6025_, 0);
v_isSharedCheck_6073_ = !lean_is_exclusive(v___x_6025_);
if (v_isSharedCheck_6073_ == 0)
{
v___x_6068_ = v___x_6025_;
v_isShared_6069_ = v_isSharedCheck_6073_;
goto v_resetjp_6067_;
}
else
{
lean_inc(v_a_6066_);
lean_dec(v___x_6025_);
v___x_6068_ = lean_box(0);
v_isShared_6069_ = v_isSharedCheck_6073_;
goto v_resetjp_6067_;
}
v_resetjp_6067_:
{
lean_object* v___x_6071_; 
if (v_isShared_6069_ == 0)
{
v___x_6071_ = v___x_6068_;
goto v_reusejp_6070_;
}
else
{
lean_object* v_reuseFailAlloc_6072_; 
v_reuseFailAlloc_6072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6072_, 0, v_a_6066_);
v___x_6071_ = v_reuseFailAlloc_6072_;
goto v_reusejp_6070_;
}
v_reusejp_6070_:
{
return v___x_6071_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object* v_pass_6085_, lean_object* v_a_6086_, lean_object* v_a_6087_, lean_object* v_a_6088_, lean_object* v_a_6089_, lean_object* v_a_6090_, lean_object* v_a_6091_, lean_object* v_a_6092_, lean_object* v_a_6093_, lean_object* v_a_6094_, lean_object* v_a_6095_, lean_object* v_a_6096_, lean_object* v_a_6097_){
_start:
{
lean_object* v_res_6098_; 
v_res_6098_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(v_pass_6085_, v_a_6086_, v_a_6087_, v_a_6088_, v_a_6089_, v_a_6090_, v_a_6091_, v_a_6092_, v_a_6093_, v_a_6094_, v_a_6095_, v_a_6096_);
lean_dec(v_a_6096_);
lean_dec_ref(v_a_6095_);
lean_dec(v_a_6094_);
lean_dec_ref(v_a_6093_);
lean_dec(v_a_6092_);
lean_dec_ref(v_a_6091_);
lean_dec(v_a_6090_);
lean_dec_ref(v_a_6089_);
lean_dec(v_a_6088_);
lean_dec(v_a_6087_);
lean_dec_ref(v_a_6086_);
return v_res_6098_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; 
v___x_6099_ = lean_unsigned_to_nat(32u);
v___x_6100_ = lean_mk_empty_array_with_capacity(v___x_6099_);
v___x_6101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6101_, 0, v___x_6100_);
return v___x_6101_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; 
v___x_6102_ = ((size_t)5ULL);
v___x_6103_ = lean_unsigned_to_nat(0u);
v___x_6104_ = lean_unsigned_to_nat(32u);
v___x_6105_ = lean_mk_empty_array_with_capacity(v___x_6104_);
v___x_6106_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0);
v___x_6107_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6107_, 0, v___x_6106_);
lean_ctor_set(v___x_6107_, 1, v___x_6105_);
lean_ctor_set(v___x_6107_, 2, v___x_6103_);
lean_ctor_set(v___x_6107_, 3, v___x_6103_);
lean_ctor_set_usize(v___x_6107_, 4, v___x_6102_);
return v___x_6107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(lean_object* v___y_6108_){
_start:
{
lean_object* v___x_6110_; lean_object* v_traceState_6111_; lean_object* v_traces_6112_; lean_object* v___x_6113_; lean_object* v_traceState_6114_; lean_object* v_env_6115_; lean_object* v_nextMacroScope_6116_; lean_object* v_ngen_6117_; lean_object* v_auxDeclNGen_6118_; lean_object* v_cache_6119_; lean_object* v_recordedDeps_6120_; lean_object* v_messages_6121_; lean_object* v_infoState_6122_; lean_object* v_snapshotTasks_6123_; lean_object* v___x_6125_; uint8_t v_isShared_6126_; uint8_t v_isSharedCheck_6142_; 
v___x_6110_ = lean_st_ref_get(v___y_6108_);
v_traceState_6111_ = lean_ctor_get(v___x_6110_, 4);
lean_inc_ref(v_traceState_6111_);
lean_dec(v___x_6110_);
v_traces_6112_ = lean_ctor_get(v_traceState_6111_, 0);
lean_inc_ref(v_traces_6112_);
lean_dec_ref(v_traceState_6111_);
v___x_6113_ = lean_st_ref_take(v___y_6108_);
v_traceState_6114_ = lean_ctor_get(v___x_6113_, 4);
v_env_6115_ = lean_ctor_get(v___x_6113_, 0);
v_nextMacroScope_6116_ = lean_ctor_get(v___x_6113_, 1);
v_ngen_6117_ = lean_ctor_get(v___x_6113_, 2);
v_auxDeclNGen_6118_ = lean_ctor_get(v___x_6113_, 3);
v_cache_6119_ = lean_ctor_get(v___x_6113_, 5);
v_recordedDeps_6120_ = lean_ctor_get(v___x_6113_, 6);
v_messages_6121_ = lean_ctor_get(v___x_6113_, 7);
v_infoState_6122_ = lean_ctor_get(v___x_6113_, 8);
v_snapshotTasks_6123_ = lean_ctor_get(v___x_6113_, 9);
v_isSharedCheck_6142_ = !lean_is_exclusive(v___x_6113_);
if (v_isSharedCheck_6142_ == 0)
{
v___x_6125_ = v___x_6113_;
v_isShared_6126_ = v_isSharedCheck_6142_;
goto v_resetjp_6124_;
}
else
{
lean_inc(v_snapshotTasks_6123_);
lean_inc(v_infoState_6122_);
lean_inc(v_messages_6121_);
lean_inc(v_recordedDeps_6120_);
lean_inc(v_cache_6119_);
lean_inc(v_traceState_6114_);
lean_inc(v_auxDeclNGen_6118_);
lean_inc(v_ngen_6117_);
lean_inc(v_nextMacroScope_6116_);
lean_inc(v_env_6115_);
lean_dec(v___x_6113_);
v___x_6125_ = lean_box(0);
v_isShared_6126_ = v_isSharedCheck_6142_;
goto v_resetjp_6124_;
}
v_resetjp_6124_:
{
uint64_t v_tid_6127_; lean_object* v___x_6129_; uint8_t v_isShared_6130_; uint8_t v_isSharedCheck_6140_; 
v_tid_6127_ = lean_ctor_get_uint64(v_traceState_6114_, sizeof(void*)*1);
v_isSharedCheck_6140_ = !lean_is_exclusive(v_traceState_6114_);
if (v_isSharedCheck_6140_ == 0)
{
lean_object* v_unused_6141_; 
v_unused_6141_ = lean_ctor_get(v_traceState_6114_, 0);
lean_dec(v_unused_6141_);
v___x_6129_ = v_traceState_6114_;
v_isShared_6130_ = v_isSharedCheck_6140_;
goto v_resetjp_6128_;
}
else
{
lean_dec(v_traceState_6114_);
v___x_6129_ = lean_box(0);
v_isShared_6130_ = v_isSharedCheck_6140_;
goto v_resetjp_6128_;
}
v_resetjp_6128_:
{
lean_object* v___x_6131_; lean_object* v___x_6133_; 
v___x_6131_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1);
if (v_isShared_6130_ == 0)
{
lean_ctor_set(v___x_6129_, 0, v___x_6131_);
v___x_6133_ = v___x_6129_;
goto v_reusejp_6132_;
}
else
{
lean_object* v_reuseFailAlloc_6139_; 
v_reuseFailAlloc_6139_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6139_, 0, v___x_6131_);
lean_ctor_set_uint64(v_reuseFailAlloc_6139_, sizeof(void*)*1, v_tid_6127_);
v___x_6133_ = v_reuseFailAlloc_6139_;
goto v_reusejp_6132_;
}
v_reusejp_6132_:
{
lean_object* v___x_6135_; 
if (v_isShared_6126_ == 0)
{
lean_ctor_set(v___x_6125_, 4, v___x_6133_);
v___x_6135_ = v___x_6125_;
goto v_reusejp_6134_;
}
else
{
lean_object* v_reuseFailAlloc_6138_; 
v_reuseFailAlloc_6138_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6138_, 0, v_env_6115_);
lean_ctor_set(v_reuseFailAlloc_6138_, 1, v_nextMacroScope_6116_);
lean_ctor_set(v_reuseFailAlloc_6138_, 2, v_ngen_6117_);
lean_ctor_set(v_reuseFailAlloc_6138_, 3, v_auxDeclNGen_6118_);
lean_ctor_set(v_reuseFailAlloc_6138_, 4, v___x_6133_);
lean_ctor_set(v_reuseFailAlloc_6138_, 5, v_cache_6119_);
lean_ctor_set(v_reuseFailAlloc_6138_, 6, v_recordedDeps_6120_);
lean_ctor_set(v_reuseFailAlloc_6138_, 7, v_messages_6121_);
lean_ctor_set(v_reuseFailAlloc_6138_, 8, v_infoState_6122_);
lean_ctor_set(v_reuseFailAlloc_6138_, 9, v_snapshotTasks_6123_);
v___x_6135_ = v_reuseFailAlloc_6138_;
goto v_reusejp_6134_;
}
v_reusejp_6134_:
{
lean_object* v___x_6136_; lean_object* v___x_6137_; 
v___x_6136_ = lean_st_ref_put(v___y_6108_, v___x_6135_);
v___x_6137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6137_, 0, v_traces_6112_);
return v___x_6137_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___boxed(lean_object* v___y_6143_, lean_object* v___y_6144_){
_start:
{
lean_object* v_res_6145_; 
v_res_6145_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6143_);
lean_dec(v___y_6143_);
return v_res_6145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(lean_object* v___y_6146_, lean_object* v___y_6147_, lean_object* v___y_6148_, lean_object* v___y_6149_, lean_object* v___y_6150_, lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_, lean_object* v___y_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_){
_start:
{
lean_object* v___x_6158_; 
v___x_6158_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6156_);
return v___x_6158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___boxed(lean_object* v___y_6159_, lean_object* v___y_6160_, lean_object* v___y_6161_, lean_object* v___y_6162_, lean_object* v___y_6163_, lean_object* v___y_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_, lean_object* v___y_6169_, lean_object* v___y_6170_){
_start:
{
lean_object* v_res_6171_; 
v_res_6171_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(v___y_6159_, v___y_6160_, v___y_6161_, v___y_6162_, v___y_6163_, v___y_6164_, v___y_6165_, v___y_6166_, v___y_6167_, v___y_6168_, v___y_6169_);
lean_dec(v___y_6169_);
lean_dec_ref(v___y_6168_);
lean_dec(v___y_6167_);
lean_dec_ref(v___y_6166_);
lean_dec(v___y_6165_);
lean_dec_ref(v___y_6164_);
lean_dec(v___y_6163_);
lean_dec_ref(v___y_6162_);
lean_dec(v___y_6161_);
lean_dec(v___y_6160_);
lean_dec_ref(v___y_6159_);
return v_res_6171_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(lean_object* v_opts_6172_, lean_object* v_opt_6173_){
_start:
{
lean_object* v_name_6174_; lean_object* v_defValue_6175_; lean_object* v_map_6176_; lean_object* v___x_6177_; 
v_name_6174_ = lean_ctor_get(v_opt_6173_, 0);
v_defValue_6175_ = lean_ctor_get(v_opt_6173_, 1);
v_map_6176_ = lean_ctor_get(v_opts_6172_, 0);
v___x_6177_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6176_, v_name_6174_);
if (lean_obj_tag(v___x_6177_) == 0)
{
uint8_t v___x_6178_; 
v___x_6178_ = lean_unbox(v_defValue_6175_);
return v___x_6178_;
}
else
{
lean_object* v_val_6179_; 
v_val_6179_ = lean_ctor_get(v___x_6177_, 0);
lean_inc(v_val_6179_);
lean_dec_ref_known(v___x_6177_, 1);
if (lean_obj_tag(v_val_6179_) == 1)
{
uint8_t v_v_6180_; 
v_v_6180_ = lean_ctor_get_uint8(v_val_6179_, 0);
lean_dec_ref_known(v_val_6179_, 0);
return v_v_6180_;
}
else
{
uint8_t v___x_6181_; 
lean_dec(v_val_6179_);
v___x_6181_ = lean_unbox(v_defValue_6175_);
return v___x_6181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2___boxed(lean_object* v_opts_6182_, lean_object* v_opt_6183_){
_start:
{
uint8_t v_res_6184_; lean_object* v_r_6185_; 
v_res_6184_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6182_, v_opt_6183_);
lean_dec_ref(v_opt_6183_);
lean_dec_ref(v_opts_6182_);
v_r_6185_ = lean_box(v_res_6184_);
return v_r_6185_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(lean_object* v_cls_6186_, lean_object* v_msg_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_){
_start:
{
lean_object* v_ref_6193_; lean_object* v___x_6194_; lean_object* v_a_6195_; lean_object* v___x_6197_; uint8_t v_isShared_6198_; uint8_t v_isSharedCheck_6240_; 
v_ref_6193_ = lean_ctor_get(v___y_6190_, 2);
v___x_6194_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_6187_, v___y_6188_, v___y_6189_, v___y_6190_, v___y_6191_);
v_a_6195_ = lean_ctor_get(v___x_6194_, 0);
v_isSharedCheck_6240_ = !lean_is_exclusive(v___x_6194_);
if (v_isSharedCheck_6240_ == 0)
{
v___x_6197_ = v___x_6194_;
v_isShared_6198_ = v_isSharedCheck_6240_;
goto v_resetjp_6196_;
}
else
{
lean_inc(v_a_6195_);
lean_dec(v___x_6194_);
v___x_6197_ = lean_box(0);
v_isShared_6198_ = v_isSharedCheck_6240_;
goto v_resetjp_6196_;
}
v_resetjp_6196_:
{
lean_object* v___x_6199_; lean_object* v_traceState_6200_; lean_object* v_env_6201_; lean_object* v_nextMacroScope_6202_; lean_object* v_ngen_6203_; lean_object* v_auxDeclNGen_6204_; lean_object* v_cache_6205_; lean_object* v_recordedDeps_6206_; lean_object* v_messages_6207_; lean_object* v_infoState_6208_; lean_object* v_snapshotTasks_6209_; lean_object* v___x_6211_; uint8_t v_isShared_6212_; uint8_t v_isSharedCheck_6239_; 
v___x_6199_ = lean_st_ref_take(v___y_6191_);
v_traceState_6200_ = lean_ctor_get(v___x_6199_, 4);
v_env_6201_ = lean_ctor_get(v___x_6199_, 0);
v_nextMacroScope_6202_ = lean_ctor_get(v___x_6199_, 1);
v_ngen_6203_ = lean_ctor_get(v___x_6199_, 2);
v_auxDeclNGen_6204_ = lean_ctor_get(v___x_6199_, 3);
v_cache_6205_ = lean_ctor_get(v___x_6199_, 5);
v_recordedDeps_6206_ = lean_ctor_get(v___x_6199_, 6);
v_messages_6207_ = lean_ctor_get(v___x_6199_, 7);
v_infoState_6208_ = lean_ctor_get(v___x_6199_, 8);
v_snapshotTasks_6209_ = lean_ctor_get(v___x_6199_, 9);
v_isSharedCheck_6239_ = !lean_is_exclusive(v___x_6199_);
if (v_isSharedCheck_6239_ == 0)
{
v___x_6211_ = v___x_6199_;
v_isShared_6212_ = v_isSharedCheck_6239_;
goto v_resetjp_6210_;
}
else
{
lean_inc(v_snapshotTasks_6209_);
lean_inc(v_infoState_6208_);
lean_inc(v_messages_6207_);
lean_inc(v_recordedDeps_6206_);
lean_inc(v_cache_6205_);
lean_inc(v_traceState_6200_);
lean_inc(v_auxDeclNGen_6204_);
lean_inc(v_ngen_6203_);
lean_inc(v_nextMacroScope_6202_);
lean_inc(v_env_6201_);
lean_dec(v___x_6199_);
v___x_6211_ = lean_box(0);
v_isShared_6212_ = v_isSharedCheck_6239_;
goto v_resetjp_6210_;
}
v_resetjp_6210_:
{
uint64_t v_tid_6213_; lean_object* v_traces_6214_; lean_object* v___x_6216_; uint8_t v_isShared_6217_; uint8_t v_isSharedCheck_6238_; 
v_tid_6213_ = lean_ctor_get_uint64(v_traceState_6200_, sizeof(void*)*1);
v_traces_6214_ = lean_ctor_get(v_traceState_6200_, 0);
v_isSharedCheck_6238_ = !lean_is_exclusive(v_traceState_6200_);
if (v_isSharedCheck_6238_ == 0)
{
v___x_6216_ = v_traceState_6200_;
v_isShared_6217_ = v_isSharedCheck_6238_;
goto v_resetjp_6215_;
}
else
{
lean_inc(v_traces_6214_);
lean_dec(v_traceState_6200_);
v___x_6216_ = lean_box(0);
v_isShared_6217_ = v_isSharedCheck_6238_;
goto v_resetjp_6215_;
}
v_resetjp_6215_:
{
lean_object* v___x_6218_; lean_object* v___x_6219_; double v___x_6220_; uint8_t v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6229_; 
v___x_6218_ = lean_box(0);
v___x_6219_ = lean_box(0);
v___x_6220_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_6221_ = 0;
v___x_6222_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_6223_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_6223_, 0, v_cls_6186_);
lean_ctor_set(v___x_6223_, 1, v___x_6219_);
lean_ctor_set(v___x_6223_, 2, v___x_6222_);
lean_ctor_set_float(v___x_6223_, sizeof(void*)*3, v___x_6220_);
lean_ctor_set_float(v___x_6223_, sizeof(void*)*3 + 8, v___x_6220_);
lean_ctor_set_uint8(v___x_6223_, sizeof(void*)*3 + 16, v___x_6221_);
v___x_6224_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_6225_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_6225_, 0, v___x_6223_);
lean_ctor_set(v___x_6225_, 1, v_a_6195_);
lean_ctor_set(v___x_6225_, 2, v___x_6224_);
lean_inc(v_ref_6193_);
v___x_6226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6226_, 0, v_ref_6193_);
lean_ctor_set(v___x_6226_, 1, v___x_6225_);
v___x_6227_ = l_Lean_PersistentArray_push___redArg(v_traces_6214_, v___x_6226_);
if (v_isShared_6217_ == 0)
{
lean_ctor_set(v___x_6216_, 0, v___x_6227_);
v___x_6229_ = v___x_6216_;
goto v_reusejp_6228_;
}
else
{
lean_object* v_reuseFailAlloc_6237_; 
v_reuseFailAlloc_6237_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6237_, 0, v___x_6227_);
lean_ctor_set_uint64(v_reuseFailAlloc_6237_, sizeof(void*)*1, v_tid_6213_);
v___x_6229_ = v_reuseFailAlloc_6237_;
goto v_reusejp_6228_;
}
v_reusejp_6228_:
{
lean_object* v___x_6231_; 
if (v_isShared_6212_ == 0)
{
lean_ctor_set(v___x_6211_, 4, v___x_6229_);
v___x_6231_ = v___x_6211_;
goto v_reusejp_6230_;
}
else
{
lean_object* v_reuseFailAlloc_6236_; 
v_reuseFailAlloc_6236_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6236_, 0, v_env_6201_);
lean_ctor_set(v_reuseFailAlloc_6236_, 1, v_nextMacroScope_6202_);
lean_ctor_set(v_reuseFailAlloc_6236_, 2, v_ngen_6203_);
lean_ctor_set(v_reuseFailAlloc_6236_, 3, v_auxDeclNGen_6204_);
lean_ctor_set(v_reuseFailAlloc_6236_, 4, v___x_6229_);
lean_ctor_set(v_reuseFailAlloc_6236_, 5, v_cache_6205_);
lean_ctor_set(v_reuseFailAlloc_6236_, 6, v_recordedDeps_6206_);
lean_ctor_set(v_reuseFailAlloc_6236_, 7, v_messages_6207_);
lean_ctor_set(v_reuseFailAlloc_6236_, 8, v_infoState_6208_);
lean_ctor_set(v_reuseFailAlloc_6236_, 9, v_snapshotTasks_6209_);
v___x_6231_ = v_reuseFailAlloc_6236_;
goto v_reusejp_6230_;
}
v_reusejp_6230_:
{
lean_object* v___x_6232_; lean_object* v___x_6234_; 
v___x_6232_ = lean_st_ref_put(v___y_6191_, v___x_6231_);
if (v_isShared_6198_ == 0)
{
lean_ctor_set(v___x_6197_, 0, v___x_6218_);
v___x_6234_ = v___x_6197_;
goto v_reusejp_6233_;
}
else
{
lean_object* v_reuseFailAlloc_6235_; 
v_reuseFailAlloc_6235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6235_, 0, v___x_6218_);
v___x_6234_ = v_reuseFailAlloc_6235_;
goto v_reusejp_6233_;
}
v_reusejp_6233_:
{
return v___x_6234_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg___boxed(lean_object* v_cls_6241_, lean_object* v_msg_6242_, lean_object* v___y_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_){
_start:
{
lean_object* v_res_6248_; 
v_res_6248_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v_cls_6241_, v_msg_6242_, v___y_6243_, v___y_6244_, v___y_6245_, v___y_6246_);
lean_dec(v___y_6246_);
lean_dec_ref(v___y_6245_);
lean_dec(v___y_6244_);
lean_dec_ref(v___y_6243_);
return v_res_6248_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(lean_object* v_e_6249_){
_start:
{
if (lean_obj_tag(v_e_6249_) == 0)
{
uint8_t v___x_6250_; 
v___x_6250_ = 2;
return v___x_6250_;
}
else
{
lean_object* v_a_6251_; uint8_t v___x_6252_; 
v_a_6251_ = lean_ctor_get(v_e_6249_, 0);
v___x_6252_ = lean_unbox(v_a_6251_);
if (v___x_6252_ == 0)
{
uint8_t v___x_6253_; 
v___x_6253_ = 1;
return v___x_6253_;
}
else
{
uint8_t v___x_6254_; 
v___x_6254_ = 0;
return v___x_6254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5___boxed(lean_object* v_e_6255_){
_start:
{
uint8_t v_res_6256_; lean_object* v_r_6257_; 
v_res_6256_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(v_e_6255_);
lean_dec_ref(v_e_6255_);
v_r_6257_ = lean_box(v_res_6256_);
return v_r_6257_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(lean_object* v_x_6258_){
_start:
{
if (lean_obj_tag(v_x_6258_) == 0)
{
lean_object* v_a_6260_; lean_object* v___x_6262_; uint8_t v_isShared_6263_; uint8_t v_isSharedCheck_6267_; 
v_a_6260_ = lean_ctor_get(v_x_6258_, 0);
v_isSharedCheck_6267_ = !lean_is_exclusive(v_x_6258_);
if (v_isSharedCheck_6267_ == 0)
{
v___x_6262_ = v_x_6258_;
v_isShared_6263_ = v_isSharedCheck_6267_;
goto v_resetjp_6261_;
}
else
{
lean_inc(v_a_6260_);
lean_dec(v_x_6258_);
v___x_6262_ = lean_box(0);
v_isShared_6263_ = v_isSharedCheck_6267_;
goto v_resetjp_6261_;
}
v_resetjp_6261_:
{
lean_object* v___x_6265_; 
if (v_isShared_6263_ == 0)
{
lean_ctor_set_tag(v___x_6262_, 1);
v___x_6265_ = v___x_6262_;
goto v_reusejp_6264_;
}
else
{
lean_object* v_reuseFailAlloc_6266_; 
v_reuseFailAlloc_6266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6266_, 0, v_a_6260_);
v___x_6265_ = v_reuseFailAlloc_6266_;
goto v_reusejp_6264_;
}
v_reusejp_6264_:
{
return v___x_6265_;
}
}
}
else
{
lean_object* v_a_6268_; lean_object* v___x_6270_; uint8_t v_isShared_6271_; uint8_t v_isSharedCheck_6275_; 
v_a_6268_ = lean_ctor_get(v_x_6258_, 0);
v_isSharedCheck_6275_ = !lean_is_exclusive(v_x_6258_);
if (v_isSharedCheck_6275_ == 0)
{
v___x_6270_ = v_x_6258_;
v_isShared_6271_ = v_isSharedCheck_6275_;
goto v_resetjp_6269_;
}
else
{
lean_inc(v_a_6268_);
lean_dec(v_x_6258_);
v___x_6270_ = lean_box(0);
v_isShared_6271_ = v_isSharedCheck_6275_;
goto v_resetjp_6269_;
}
v_resetjp_6269_:
{
lean_object* v___x_6273_; 
if (v_isShared_6271_ == 0)
{
lean_ctor_set_tag(v___x_6270_, 0);
v___x_6273_ = v___x_6270_;
goto v_reusejp_6272_;
}
else
{
lean_object* v_reuseFailAlloc_6274_; 
v_reuseFailAlloc_6274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6274_, 0, v_a_6268_);
v___x_6273_ = v_reuseFailAlloc_6274_;
goto v_reusejp_6272_;
}
v_reusejp_6272_:
{
return v___x_6273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg___boxed(lean_object* v_x_6276_, lean_object* v___y_6277_){
_start:
{
lean_object* v_res_6278_; 
v_res_6278_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_x_6276_);
return v_res_6278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(lean_object* v_opts_6279_, lean_object* v_opt_6280_){
_start:
{
lean_object* v_name_6281_; lean_object* v_defValue_6282_; lean_object* v_map_6283_; lean_object* v___x_6284_; 
v_name_6281_ = lean_ctor_get(v_opt_6280_, 0);
v_defValue_6282_ = lean_ctor_get(v_opt_6280_, 1);
v_map_6283_ = lean_ctor_get(v_opts_6279_, 0);
v___x_6284_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6283_, v_name_6281_);
if (lean_obj_tag(v___x_6284_) == 0)
{
lean_inc(v_defValue_6282_);
return v_defValue_6282_;
}
else
{
lean_object* v_val_6285_; 
v_val_6285_ = lean_ctor_get(v___x_6284_, 0);
lean_inc(v_val_6285_);
lean_dec_ref_known(v___x_6284_, 1);
if (lean_obj_tag(v_val_6285_) == 3)
{
lean_object* v_v_6286_; 
v_v_6286_ = lean_ctor_get(v_val_6285_, 0);
lean_inc(v_v_6286_);
lean_dec_ref_known(v_val_6285_, 1);
return v_v_6286_;
}
else
{
lean_dec(v_val_6285_);
lean_inc(v_defValue_6282_);
return v_defValue_6282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6___boxed(lean_object* v_opts_6287_, lean_object* v_opt_6288_){
_start:
{
lean_object* v_res_6289_; 
v_res_6289_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6287_, v_opt_6288_);
lean_dec_ref(v_opt_6288_);
lean_dec_ref(v_opts_6287_);
return v_res_6289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(size_t v_sz_6290_, size_t v_i_6291_, lean_object* v_bs_6292_){
_start:
{
uint8_t v___x_6293_; 
v___x_6293_ = lean_usize_dec_lt(v_i_6291_, v_sz_6290_);
if (v___x_6293_ == 0)
{
return v_bs_6292_;
}
else
{
lean_object* v_v_6294_; lean_object* v_msg_6295_; lean_object* v___x_6296_; lean_object* v_bs_x27_6297_; size_t v___x_6298_; size_t v___x_6299_; lean_object* v___x_6300_; 
v_v_6294_ = lean_array_uget_borrowed(v_bs_6292_, v_i_6291_);
v_msg_6295_ = lean_ctor_get(v_v_6294_, 1);
lean_inc_ref(v_msg_6295_);
v___x_6296_ = lean_unsigned_to_nat(0u);
v_bs_x27_6297_ = lean_array_uset(v_bs_6292_, v_i_6291_, v___x_6296_);
v___x_6298_ = ((size_t)1ULL);
v___x_6299_ = lean_usize_add(v_i_6291_, v___x_6298_);
v___x_6300_ = lean_array_uset(v_bs_x27_6297_, v_i_6291_, v_msg_6295_);
v_i_6291_ = v___x_6299_;
v_bs_6292_ = v___x_6300_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_6302_, lean_object* v_i_6303_, lean_object* v_bs_6304_){
_start:
{
size_t v_sz_boxed_6305_; size_t v_i_boxed_6306_; lean_object* v_res_6307_; 
v_sz_boxed_6305_ = lean_unbox_usize(v_sz_6302_);
lean_dec(v_sz_6302_);
v_i_boxed_6306_ = lean_unbox_usize(v_i_6303_);
lean_dec(v_i_6303_);
v_res_6307_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(v_sz_boxed_6305_, v_i_boxed_6306_, v_bs_6304_);
return v_res_6307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(lean_object* v_oldTraces_6308_, lean_object* v_data_6309_, lean_object* v_ref_6310_, lean_object* v_msg_6311_, lean_object* v___y_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_, lean_object* v___y_6315_){
_start:
{
lean_object* v_toCold_6317_; lean_object* v_currRecDepth_6318_; lean_object* v_ref_6319_; uint16_t v_optionFlags_6320_; uint8_t v_suppressElabErrors_6321_; uint8_t v_checkDeprecated_6322_; uint8_t v_isRecordingDeps_6323_; lean_object* v_ref_6324_; lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v_traceState_6327_; lean_object* v_traces_6328_; lean_object* v___x_6329_; size_t v_sz_6330_; size_t v___x_6331_; lean_object* v___x_6332_; lean_object* v_msg_6333_; lean_object* v___x_6334_; lean_object* v_a_6335_; lean_object* v___x_6337_; uint8_t v_isShared_6338_; uint8_t v_isSharedCheck_6373_; 
v_toCold_6317_ = lean_ctor_get(v___y_6314_, 0);
v_currRecDepth_6318_ = lean_ctor_get(v___y_6314_, 1);
v_ref_6319_ = lean_ctor_get(v___y_6314_, 2);
v_optionFlags_6320_ = lean_ctor_get_uint16(v___y_6314_, sizeof(void*)*3);
v_suppressElabErrors_6321_ = lean_ctor_get_uint8(v___y_6314_, sizeof(void*)*3 + 2);
v_checkDeprecated_6322_ = lean_ctor_get_uint8(v___y_6314_, sizeof(void*)*3 + 3);
v_isRecordingDeps_6323_ = lean_ctor_get_uint8(v___y_6314_, sizeof(void*)*3 + 4);
v_ref_6324_ = l_Lean_replaceRef(v_ref_6310_, v_ref_6319_);
lean_inc(v_currRecDepth_6318_);
lean_inc_ref(v_toCold_6317_);
v___x_6325_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_6325_, 0, v_toCold_6317_);
lean_ctor_set(v___x_6325_, 1, v_currRecDepth_6318_);
lean_ctor_set(v___x_6325_, 2, v_ref_6324_);
lean_ctor_set_uint16(v___x_6325_, sizeof(void*)*3, v_optionFlags_6320_);
lean_ctor_set_uint8(v___x_6325_, sizeof(void*)*3 + 2, v_suppressElabErrors_6321_);
lean_ctor_set_uint8(v___x_6325_, sizeof(void*)*3 + 3, v_checkDeprecated_6322_);
lean_ctor_set_uint8(v___x_6325_, sizeof(void*)*3 + 4, v_isRecordingDeps_6323_);
v___x_6326_ = lean_st_ref_get(v___y_6315_);
v_traceState_6327_ = lean_ctor_get(v___x_6326_, 4);
lean_inc_ref(v_traceState_6327_);
lean_dec(v___x_6326_);
v_traces_6328_ = lean_ctor_get(v_traceState_6327_, 0);
lean_inc_ref(v_traces_6328_);
lean_dec_ref(v_traceState_6327_);
v___x_6329_ = l_Lean_PersistentArray_toArray___redArg(v_traces_6328_);
lean_dec_ref(v_traces_6328_);
v_sz_6330_ = lean_array_size(v___x_6329_);
v___x_6331_ = ((size_t)0ULL);
v___x_6332_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(v_sz_6330_, v___x_6331_, v___x_6329_);
v_msg_6333_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_6333_, 0, v_data_6309_);
lean_ctor_set(v_msg_6333_, 1, v_msg_6311_);
lean_ctor_set(v_msg_6333_, 2, v___x_6332_);
v___x_6334_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_6333_, v___y_6312_, v___y_6313_, v___x_6325_, v___y_6315_);
lean_dec_ref_known(v___x_6325_, 3);
v_a_6335_ = lean_ctor_get(v___x_6334_, 0);
v_isSharedCheck_6373_ = !lean_is_exclusive(v___x_6334_);
if (v_isSharedCheck_6373_ == 0)
{
v___x_6337_ = v___x_6334_;
v_isShared_6338_ = v_isSharedCheck_6373_;
goto v_resetjp_6336_;
}
else
{
lean_inc(v_a_6335_);
lean_dec(v___x_6334_);
v___x_6337_ = lean_box(0);
v_isShared_6338_ = v_isSharedCheck_6373_;
goto v_resetjp_6336_;
}
v_resetjp_6336_:
{
lean_object* v___x_6339_; lean_object* v_traceState_6340_; lean_object* v_env_6341_; lean_object* v_nextMacroScope_6342_; lean_object* v_ngen_6343_; lean_object* v_auxDeclNGen_6344_; lean_object* v_cache_6345_; lean_object* v_recordedDeps_6346_; lean_object* v_messages_6347_; lean_object* v_infoState_6348_; lean_object* v_snapshotTasks_6349_; lean_object* v___x_6351_; uint8_t v_isShared_6352_; uint8_t v_isSharedCheck_6372_; 
v___x_6339_ = lean_st_ref_take(v___y_6315_);
v_traceState_6340_ = lean_ctor_get(v___x_6339_, 4);
v_env_6341_ = lean_ctor_get(v___x_6339_, 0);
v_nextMacroScope_6342_ = lean_ctor_get(v___x_6339_, 1);
v_ngen_6343_ = lean_ctor_get(v___x_6339_, 2);
v_auxDeclNGen_6344_ = lean_ctor_get(v___x_6339_, 3);
v_cache_6345_ = lean_ctor_get(v___x_6339_, 5);
v_recordedDeps_6346_ = lean_ctor_get(v___x_6339_, 6);
v_messages_6347_ = lean_ctor_get(v___x_6339_, 7);
v_infoState_6348_ = lean_ctor_get(v___x_6339_, 8);
v_snapshotTasks_6349_ = lean_ctor_get(v___x_6339_, 9);
v_isSharedCheck_6372_ = !lean_is_exclusive(v___x_6339_);
if (v_isSharedCheck_6372_ == 0)
{
v___x_6351_ = v___x_6339_;
v_isShared_6352_ = v_isSharedCheck_6372_;
goto v_resetjp_6350_;
}
else
{
lean_inc(v_snapshotTasks_6349_);
lean_inc(v_infoState_6348_);
lean_inc(v_messages_6347_);
lean_inc(v_recordedDeps_6346_);
lean_inc(v_cache_6345_);
lean_inc(v_traceState_6340_);
lean_inc(v_auxDeclNGen_6344_);
lean_inc(v_ngen_6343_);
lean_inc(v_nextMacroScope_6342_);
lean_inc(v_env_6341_);
lean_dec(v___x_6339_);
v___x_6351_ = lean_box(0);
v_isShared_6352_ = v_isSharedCheck_6372_;
goto v_resetjp_6350_;
}
v_resetjp_6350_:
{
uint64_t v_tid_6353_; lean_object* v___x_6355_; uint8_t v_isShared_6356_; uint8_t v_isSharedCheck_6370_; 
v_tid_6353_ = lean_ctor_get_uint64(v_traceState_6340_, sizeof(void*)*1);
v_isSharedCheck_6370_ = !lean_is_exclusive(v_traceState_6340_);
if (v_isSharedCheck_6370_ == 0)
{
lean_object* v_unused_6371_; 
v_unused_6371_ = lean_ctor_get(v_traceState_6340_, 0);
lean_dec(v_unused_6371_);
v___x_6355_ = v_traceState_6340_;
v_isShared_6356_ = v_isSharedCheck_6370_;
goto v_resetjp_6354_;
}
else
{
lean_dec(v_traceState_6340_);
v___x_6355_ = lean_box(0);
v_isShared_6356_ = v_isSharedCheck_6370_;
goto v_resetjp_6354_;
}
v_resetjp_6354_:
{
lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6361_; 
v___x_6357_ = lean_box(0);
v___x_6358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6358_, 0, v_ref_6310_);
lean_ctor_set(v___x_6358_, 1, v_a_6335_);
v___x_6359_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_6308_, v___x_6358_);
if (v_isShared_6356_ == 0)
{
lean_ctor_set(v___x_6355_, 0, v___x_6359_);
v___x_6361_ = v___x_6355_;
goto v_reusejp_6360_;
}
else
{
lean_object* v_reuseFailAlloc_6369_; 
v_reuseFailAlloc_6369_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6369_, 0, v___x_6359_);
lean_ctor_set_uint64(v_reuseFailAlloc_6369_, sizeof(void*)*1, v_tid_6353_);
v___x_6361_ = v_reuseFailAlloc_6369_;
goto v_reusejp_6360_;
}
v_reusejp_6360_:
{
lean_object* v___x_6363_; 
if (v_isShared_6352_ == 0)
{
lean_ctor_set(v___x_6351_, 4, v___x_6361_);
v___x_6363_ = v___x_6351_;
goto v_reusejp_6362_;
}
else
{
lean_object* v_reuseFailAlloc_6368_; 
v_reuseFailAlloc_6368_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6368_, 0, v_env_6341_);
lean_ctor_set(v_reuseFailAlloc_6368_, 1, v_nextMacroScope_6342_);
lean_ctor_set(v_reuseFailAlloc_6368_, 2, v_ngen_6343_);
lean_ctor_set(v_reuseFailAlloc_6368_, 3, v_auxDeclNGen_6344_);
lean_ctor_set(v_reuseFailAlloc_6368_, 4, v___x_6361_);
lean_ctor_set(v_reuseFailAlloc_6368_, 5, v_cache_6345_);
lean_ctor_set(v_reuseFailAlloc_6368_, 6, v_recordedDeps_6346_);
lean_ctor_set(v_reuseFailAlloc_6368_, 7, v_messages_6347_);
lean_ctor_set(v_reuseFailAlloc_6368_, 8, v_infoState_6348_);
lean_ctor_set(v_reuseFailAlloc_6368_, 9, v_snapshotTasks_6349_);
v___x_6363_ = v_reuseFailAlloc_6368_;
goto v_reusejp_6362_;
}
v_reusejp_6362_:
{
lean_object* v___x_6364_; lean_object* v___x_6366_; 
v___x_6364_ = lean_st_ref_put(v___y_6315_, v___x_6363_);
if (v_isShared_6338_ == 0)
{
lean_ctor_set(v___x_6337_, 0, v___x_6357_);
v___x_6366_ = v___x_6337_;
goto v_reusejp_6365_;
}
else
{
lean_object* v_reuseFailAlloc_6367_; 
v_reuseFailAlloc_6367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6367_, 0, v___x_6357_);
v___x_6366_ = v_reuseFailAlloc_6367_;
goto v_reusejp_6365_;
}
v_reusejp_6365_:
{
return v___x_6366_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg___boxed(lean_object* v_oldTraces_6374_, lean_object* v_data_6375_, lean_object* v_ref_6376_, lean_object* v_msg_6377_, lean_object* v___y_6378_, lean_object* v___y_6379_, lean_object* v___y_6380_, lean_object* v___y_6381_, lean_object* v___y_6382_){
_start:
{
lean_object* v_res_6383_; 
v_res_6383_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6374_, v_data_6375_, v_ref_6376_, v_msg_6377_, v___y_6378_, v___y_6379_, v___y_6380_, v___y_6381_);
lean_dec(v___y_6381_);
lean_dec_ref(v___y_6380_);
lean_dec(v___y_6379_);
lean_dec_ref(v___y_6378_);
return v_res_6383_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1(void){
_start:
{
lean_object* v___x_6385_; lean_object* v___x_6386_; 
v___x_6385_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0));
v___x_6386_ = l_Lean_stringToMessageData(v___x_6385_);
return v___x_6386_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2(void){
_start:
{
lean_object* v___x_6387_; double v___x_6388_; 
v___x_6387_ = lean_unsigned_to_nat(1000u);
v___x_6388_ = lean_float_of_nat(v___x_6387_);
return v___x_6388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(lean_object* v_cls_6389_, uint8_t v_collapsed_6390_, lean_object* v_tag_6391_, lean_object* v_opts_6392_, uint8_t v_clsEnabled_6393_, lean_object* v_oldTraces_6394_, lean_object* v_msg_6395_, lean_object* v_resStartStop_6396_, lean_object* v___y_6397_, lean_object* v___y_6398_, lean_object* v___y_6399_, lean_object* v___y_6400_, lean_object* v___y_6401_, lean_object* v___y_6402_, lean_object* v___y_6403_, lean_object* v___y_6404_, lean_object* v___y_6405_, lean_object* v___y_6406_, lean_object* v___y_6407_){
_start:
{
lean_object* v_fst_6409_; lean_object* v_snd_6410_; lean_object* v___y_6412_; lean_object* v___y_6413_; lean_object* v_data_6414_; lean_object* v_fst_6425_; lean_object* v_snd_6426_; lean_object* v___x_6427_; uint8_t v___x_6428_; lean_object* v___y_6430_; lean_object* v_a_6431_; uint8_t v___y_6446_; double v___y_6478_; 
v_fst_6409_ = lean_ctor_get(v_resStartStop_6396_, 0);
lean_inc(v_fst_6409_);
v_snd_6410_ = lean_ctor_get(v_resStartStop_6396_, 1);
lean_inc(v_snd_6410_);
lean_dec_ref(v_resStartStop_6396_);
v_fst_6425_ = lean_ctor_get(v_snd_6410_, 0);
lean_inc(v_fst_6425_);
v_snd_6426_ = lean_ctor_get(v_snd_6410_, 1);
lean_inc(v_snd_6426_);
lean_dec(v_snd_6410_);
v___x_6427_ = l_Lean_trace_profiler;
v___x_6428_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6392_, v___x_6427_);
if (v___x_6428_ == 0)
{
v___y_6446_ = v___x_6428_;
goto v___jp_6445_;
}
else
{
lean_object* v___x_6483_; uint8_t v___x_6484_; 
v___x_6483_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6484_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6392_, v___x_6483_);
if (v___x_6484_ == 0)
{
lean_object* v___x_6485_; lean_object* v___x_6486_; double v___x_6487_; double v___x_6488_; double v___x_6489_; 
v___x_6485_ = l_Lean_trace_profiler_threshold;
v___x_6486_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6392_, v___x_6485_);
v___x_6487_ = lean_float_of_nat(v___x_6486_);
v___x_6488_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2);
v___x_6489_ = lean_float_div(v___x_6487_, v___x_6488_);
v___y_6478_ = v___x_6489_;
goto v___jp_6477_;
}
else
{
lean_object* v___x_6490_; lean_object* v___x_6491_; double v___x_6492_; 
v___x_6490_ = l_Lean_trace_profiler_threshold;
v___x_6491_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6392_, v___x_6490_);
v___x_6492_ = lean_float_of_nat(v___x_6491_);
v___y_6478_ = v___x_6492_;
goto v___jp_6477_;
}
}
v___jp_6411_:
{
lean_object* v___x_6415_; 
lean_inc(v___y_6413_);
v___x_6415_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6394_, v_data_6414_, v___y_6413_, v___y_6412_, v___y_6404_, v___y_6405_, v___y_6406_, v___y_6407_);
if (lean_obj_tag(v___x_6415_) == 0)
{
lean_object* v___x_6416_; 
lean_dec_ref_known(v___x_6415_, 1);
v___x_6416_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_fst_6409_);
return v___x_6416_;
}
else
{
lean_object* v_a_6417_; lean_object* v___x_6419_; uint8_t v_isShared_6420_; uint8_t v_isSharedCheck_6424_; 
lean_dec(v_fst_6409_);
v_a_6417_ = lean_ctor_get(v___x_6415_, 0);
v_isSharedCheck_6424_ = !lean_is_exclusive(v___x_6415_);
if (v_isSharedCheck_6424_ == 0)
{
v___x_6419_ = v___x_6415_;
v_isShared_6420_ = v_isSharedCheck_6424_;
goto v_resetjp_6418_;
}
else
{
lean_inc(v_a_6417_);
lean_dec(v___x_6415_);
v___x_6419_ = lean_box(0);
v_isShared_6420_ = v_isSharedCheck_6424_;
goto v_resetjp_6418_;
}
v_resetjp_6418_:
{
lean_object* v___x_6422_; 
if (v_isShared_6420_ == 0)
{
v___x_6422_ = v___x_6419_;
goto v_reusejp_6421_;
}
else
{
lean_object* v_reuseFailAlloc_6423_; 
v_reuseFailAlloc_6423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6423_, 0, v_a_6417_);
v___x_6422_ = v_reuseFailAlloc_6423_;
goto v_reusejp_6421_;
}
v_reusejp_6421_:
{
return v___x_6422_;
}
}
}
}
v___jp_6429_:
{
uint8_t v_result_6432_; lean_object* v___x_6433_; lean_object* v___x_6434_; double v___x_6435_; lean_object* v_data_6436_; 
v_result_6432_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(v_fst_6409_);
v___x_6433_ = lean_box(v_result_6432_);
v___x_6434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6434_, 0, v___x_6433_);
v___x_6435_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_6391_);
lean_inc_ref(v___x_6434_);
lean_inc(v_cls_6389_);
v_data_6436_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_6436_, 0, v_cls_6389_);
lean_ctor_set(v_data_6436_, 1, v___x_6434_);
lean_ctor_set(v_data_6436_, 2, v_tag_6391_);
lean_ctor_set_float(v_data_6436_, sizeof(void*)*3, v___x_6435_);
lean_ctor_set_float(v_data_6436_, sizeof(void*)*3 + 8, v___x_6435_);
lean_ctor_set_uint8(v_data_6436_, sizeof(void*)*3 + 16, v_collapsed_6390_);
if (v___x_6428_ == 0)
{
lean_dec_ref_known(v___x_6434_, 1);
lean_dec(v_snd_6426_);
lean_dec(v_fst_6425_);
lean_dec_ref(v_tag_6391_);
lean_dec(v_cls_6389_);
v___y_6412_ = v_a_6431_;
v___y_6413_ = v___y_6430_;
v_data_6414_ = v_data_6436_;
goto v___jp_6411_;
}
else
{
lean_object* v_data_6437_; double v___x_6438_; double v___x_6439_; 
lean_dec_ref_known(v_data_6436_, 3);
v_data_6437_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_6437_, 0, v_cls_6389_);
lean_ctor_set(v_data_6437_, 1, v___x_6434_);
lean_ctor_set(v_data_6437_, 2, v_tag_6391_);
v___x_6438_ = lean_unbox_float(v_fst_6425_);
lean_dec(v_fst_6425_);
lean_ctor_set_float(v_data_6437_, sizeof(void*)*3, v___x_6438_);
v___x_6439_ = lean_unbox_float(v_snd_6426_);
lean_dec(v_snd_6426_);
lean_ctor_set_float(v_data_6437_, sizeof(void*)*3 + 8, v___x_6439_);
lean_ctor_set_uint8(v_data_6437_, sizeof(void*)*3 + 16, v_collapsed_6390_);
v___y_6412_ = v_a_6431_;
v___y_6413_ = v___y_6430_;
v_data_6414_ = v_data_6437_;
goto v___jp_6411_;
}
}
v___jp_6440_:
{
lean_object* v_ref_6441_; lean_object* v___x_6442_; 
v_ref_6441_ = lean_ctor_get(v___y_6406_, 2);
lean_inc(v___y_6407_);
lean_inc_ref(v___y_6406_);
lean_inc(v___y_6405_);
lean_inc_ref(v___y_6404_);
lean_inc(v___y_6403_);
lean_inc_ref(v___y_6402_);
lean_inc(v___y_6401_);
lean_inc_ref(v___y_6400_);
lean_inc(v___y_6399_);
lean_inc(v___y_6398_);
lean_inc_ref(v___y_6397_);
lean_inc(v_fst_6409_);
v___x_6442_ = lean_apply_13(v_msg_6395_, v_fst_6409_, v___y_6397_, v___y_6398_, v___y_6399_, v___y_6400_, v___y_6401_, v___y_6402_, v___y_6403_, v___y_6404_, v___y_6405_, v___y_6406_, v___y_6407_, lean_box(0));
if (lean_obj_tag(v___x_6442_) == 0)
{
lean_object* v_a_6443_; 
v_a_6443_ = lean_ctor_get(v___x_6442_, 0);
lean_inc(v_a_6443_);
lean_dec_ref_known(v___x_6442_, 1);
v___y_6430_ = v_ref_6441_;
v_a_6431_ = v_a_6443_;
goto v___jp_6429_;
}
else
{
lean_object* v___x_6444_; 
lean_dec_ref_known(v___x_6442_, 1);
v___x_6444_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1);
v___y_6430_ = v_ref_6441_;
v_a_6431_ = v___x_6444_;
goto v___jp_6429_;
}
}
v___jp_6445_:
{
if (v_clsEnabled_6393_ == 0)
{
if (v___y_6446_ == 0)
{
lean_object* v___x_6447_; lean_object* v_traceState_6448_; lean_object* v_env_6449_; lean_object* v_nextMacroScope_6450_; lean_object* v_ngen_6451_; lean_object* v_auxDeclNGen_6452_; lean_object* v_cache_6453_; lean_object* v_recordedDeps_6454_; lean_object* v_messages_6455_; lean_object* v_infoState_6456_; lean_object* v_snapshotTasks_6457_; lean_object* v___x_6459_; uint8_t v_isShared_6460_; uint8_t v_isSharedCheck_6476_; 
lean_dec(v_snd_6426_);
lean_dec(v_fst_6425_);
lean_dec_ref(v_msg_6395_);
lean_dec_ref(v_tag_6391_);
lean_dec(v_cls_6389_);
v___x_6447_ = lean_st_ref_take(v___y_6407_);
v_traceState_6448_ = lean_ctor_get(v___x_6447_, 4);
v_env_6449_ = lean_ctor_get(v___x_6447_, 0);
v_nextMacroScope_6450_ = lean_ctor_get(v___x_6447_, 1);
v_ngen_6451_ = lean_ctor_get(v___x_6447_, 2);
v_auxDeclNGen_6452_ = lean_ctor_get(v___x_6447_, 3);
v_cache_6453_ = lean_ctor_get(v___x_6447_, 5);
v_recordedDeps_6454_ = lean_ctor_get(v___x_6447_, 6);
v_messages_6455_ = lean_ctor_get(v___x_6447_, 7);
v_infoState_6456_ = lean_ctor_get(v___x_6447_, 8);
v_snapshotTasks_6457_ = lean_ctor_get(v___x_6447_, 9);
v_isSharedCheck_6476_ = !lean_is_exclusive(v___x_6447_);
if (v_isSharedCheck_6476_ == 0)
{
v___x_6459_ = v___x_6447_;
v_isShared_6460_ = v_isSharedCheck_6476_;
goto v_resetjp_6458_;
}
else
{
lean_inc(v_snapshotTasks_6457_);
lean_inc(v_infoState_6456_);
lean_inc(v_messages_6455_);
lean_inc(v_recordedDeps_6454_);
lean_inc(v_cache_6453_);
lean_inc(v_traceState_6448_);
lean_inc(v_auxDeclNGen_6452_);
lean_inc(v_ngen_6451_);
lean_inc(v_nextMacroScope_6450_);
lean_inc(v_env_6449_);
lean_dec(v___x_6447_);
v___x_6459_ = lean_box(0);
v_isShared_6460_ = v_isSharedCheck_6476_;
goto v_resetjp_6458_;
}
v_resetjp_6458_:
{
uint64_t v_tid_6461_; lean_object* v_traces_6462_; lean_object* v___x_6464_; uint8_t v_isShared_6465_; uint8_t v_isSharedCheck_6475_; 
v_tid_6461_ = lean_ctor_get_uint64(v_traceState_6448_, sizeof(void*)*1);
v_traces_6462_ = lean_ctor_get(v_traceState_6448_, 0);
v_isSharedCheck_6475_ = !lean_is_exclusive(v_traceState_6448_);
if (v_isSharedCheck_6475_ == 0)
{
v___x_6464_ = v_traceState_6448_;
v_isShared_6465_ = v_isSharedCheck_6475_;
goto v_resetjp_6463_;
}
else
{
lean_inc(v_traces_6462_);
lean_dec(v_traceState_6448_);
v___x_6464_ = lean_box(0);
v_isShared_6465_ = v_isSharedCheck_6475_;
goto v_resetjp_6463_;
}
v_resetjp_6463_:
{
lean_object* v___x_6466_; lean_object* v___x_6468_; 
v___x_6466_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_6394_, v_traces_6462_);
lean_dec_ref(v_traces_6462_);
if (v_isShared_6465_ == 0)
{
lean_ctor_set(v___x_6464_, 0, v___x_6466_);
v___x_6468_ = v___x_6464_;
goto v_reusejp_6467_;
}
else
{
lean_object* v_reuseFailAlloc_6474_; 
v_reuseFailAlloc_6474_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6474_, 0, v___x_6466_);
lean_ctor_set_uint64(v_reuseFailAlloc_6474_, sizeof(void*)*1, v_tid_6461_);
v___x_6468_ = v_reuseFailAlloc_6474_;
goto v_reusejp_6467_;
}
v_reusejp_6467_:
{
lean_object* v___x_6470_; 
if (v_isShared_6460_ == 0)
{
lean_ctor_set(v___x_6459_, 4, v___x_6468_);
v___x_6470_ = v___x_6459_;
goto v_reusejp_6469_;
}
else
{
lean_object* v_reuseFailAlloc_6473_; 
v_reuseFailAlloc_6473_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6473_, 0, v_env_6449_);
lean_ctor_set(v_reuseFailAlloc_6473_, 1, v_nextMacroScope_6450_);
lean_ctor_set(v_reuseFailAlloc_6473_, 2, v_ngen_6451_);
lean_ctor_set(v_reuseFailAlloc_6473_, 3, v_auxDeclNGen_6452_);
lean_ctor_set(v_reuseFailAlloc_6473_, 4, v___x_6468_);
lean_ctor_set(v_reuseFailAlloc_6473_, 5, v_cache_6453_);
lean_ctor_set(v_reuseFailAlloc_6473_, 6, v_recordedDeps_6454_);
lean_ctor_set(v_reuseFailAlloc_6473_, 7, v_messages_6455_);
lean_ctor_set(v_reuseFailAlloc_6473_, 8, v_infoState_6456_);
lean_ctor_set(v_reuseFailAlloc_6473_, 9, v_snapshotTasks_6457_);
v___x_6470_ = v_reuseFailAlloc_6473_;
goto v_reusejp_6469_;
}
v_reusejp_6469_:
{
lean_object* v___x_6471_; lean_object* v___x_6472_; 
v___x_6471_ = lean_st_ref_put(v___y_6407_, v___x_6470_);
v___x_6472_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_fst_6409_);
return v___x_6472_;
}
}
}
}
}
else
{
goto v___jp_6440_;
}
}
else
{
goto v___jp_6440_;
}
}
v___jp_6477_:
{
double v___x_6479_; double v___x_6480_; double v___x_6481_; uint8_t v___x_6482_; 
v___x_6479_ = lean_unbox_float(v_snd_6426_);
v___x_6480_ = lean_unbox_float(v_fst_6425_);
v___x_6481_ = lean_float_sub(v___x_6479_, v___x_6480_);
v___x_6482_ = lean_float_decLt(v___y_6478_, v___x_6481_);
v___y_6446_ = v___x_6482_;
goto v___jp_6445_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___boxed(lean_object** _args){
lean_object* v_cls_6493_ = _args[0];
lean_object* v_collapsed_6494_ = _args[1];
lean_object* v_tag_6495_ = _args[2];
lean_object* v_opts_6496_ = _args[3];
lean_object* v_clsEnabled_6497_ = _args[4];
lean_object* v_oldTraces_6498_ = _args[5];
lean_object* v_msg_6499_ = _args[6];
lean_object* v_resStartStop_6500_ = _args[7];
lean_object* v___y_6501_ = _args[8];
lean_object* v___y_6502_ = _args[9];
lean_object* v___y_6503_ = _args[10];
lean_object* v___y_6504_ = _args[11];
lean_object* v___y_6505_ = _args[12];
lean_object* v___y_6506_ = _args[13];
lean_object* v___y_6507_ = _args[14];
lean_object* v___y_6508_ = _args[15];
lean_object* v___y_6509_ = _args[16];
lean_object* v___y_6510_ = _args[17];
lean_object* v___y_6511_ = _args[18];
lean_object* v___y_6512_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_6513_; uint8_t v_clsEnabled_boxed_6514_; lean_object* v_res_6515_; 
v_collapsed_boxed_6513_ = lean_unbox(v_collapsed_6494_);
v_clsEnabled_boxed_6514_ = lean_unbox(v_clsEnabled_6497_);
v_res_6515_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v_cls_6493_, v_collapsed_boxed_6513_, v_tag_6495_, v_opts_6496_, v_clsEnabled_boxed_6514_, v_oldTraces_6498_, v_msg_6499_, v_resStartStop_6500_, v___y_6501_, v___y_6502_, v___y_6503_, v___y_6504_, v___y_6505_, v___y_6506_, v___y_6507_, v___y_6508_, v___y_6509_, v___y_6510_, v___y_6511_);
lean_dec(v___y_6511_);
lean_dec_ref(v___y_6510_);
lean_dec(v___y_6509_);
lean_dec_ref(v___y_6508_);
lean_dec(v___y_6507_);
lean_dec_ref(v___y_6506_);
lean_dec(v___y_6505_);
lean_dec_ref(v___y_6504_);
lean_dec(v___y_6503_);
lean_dec(v___y_6502_);
lean_dec_ref(v___y_6501_);
lean_dec_ref(v_opts_6496_);
return v_res_6515_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_6520_; lean_object* v___x_6521_; 
v___x_6520_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1));
v___x_6521_ = l_Lean_stringToMessageData(v___x_6520_);
return v___x_6521_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(lean_object* v_as_x27_6522_, lean_object* v_b_6523_, lean_object* v___y_6524_, lean_object* v___y_6525_, lean_object* v___y_6526_, lean_object* v___y_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_, lean_object* v___y_6531_, lean_object* v___y_6532_, lean_object* v___y_6533_, lean_object* v___y_6534_){
_start:
{
if (lean_obj_tag(v_as_x27_6522_) == 0)
{
lean_object* v___x_6536_; 
v___x_6536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6536_, 0, v_b_6523_);
return v___x_6536_;
}
else
{
lean_object* v_head_6537_; lean_object* v_toCold_6538_; lean_object* v_options_6539_; lean_object* v_tail_6540_; lean_object* v_name_6541_; lean_object* v_run_x27_6542_; lean_object* v_inheritedTraceOptions_6543_; uint8_t v_hasTrace_6544_; lean_object* v___x_6545_; uint8_t v___y_6547_; lean_object* v___x_6552_; lean_object* v___y_6554_; 
lean_dec_ref(v_b_6523_);
v_head_6537_ = lean_ctor_get(v_as_x27_6522_, 0);
v_toCold_6538_ = lean_ctor_get(v___y_6533_, 0);
v_options_6539_ = lean_ctor_get(v_toCold_6538_, 2);
v_tail_6540_ = lean_ctor_get(v_as_x27_6522_, 1);
v_name_6541_ = lean_ctor_get(v_head_6537_, 0);
v_run_x27_6542_ = lean_ctor_get(v_head_6537_, 1);
v_inheritedTraceOptions_6543_ = lean_ctor_get(v_toCold_6538_, 11);
v_hasTrace_6544_ = lean_ctor_get_uint8(v_options_6539_, sizeof(void*)*1);
v___x_6545_ = lean_box(0);
v___x_6552_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0));
if (v_hasTrace_6544_ == 0)
{
lean_object* v___x_6582_; 
lean_inc_ref(v_run_x27_6542_);
lean_inc(v___y_6534_);
lean_inc_ref(v___y_6533_);
lean_inc(v___y_6532_);
lean_inc_ref(v___y_6531_);
lean_inc(v___y_6530_);
lean_inc_ref(v___y_6529_);
lean_inc(v___y_6528_);
lean_inc_ref(v___y_6527_);
lean_inc(v___y_6526_);
lean_inc(v___y_6525_);
lean_inc_ref(v___y_6524_);
v___x_6582_ = lean_apply_12(v_run_x27_6542_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_, lean_box(0));
v___y_6554_ = v___x_6582_;
goto v___jp_6553_;
}
else
{
lean_object* v___f_6583_; lean_object* v___x_6584_; lean_object* v___x_6585_; lean_object* v___x_6586_; uint8_t v___x_6587_; lean_object* v___y_6589_; lean_object* v___y_6590_; lean_object* v_a_6591_; lean_object* v___y_6604_; lean_object* v___y_6605_; lean_object* v_a_6606_; 
lean_inc(v_name_6541_);
v___f_6583_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 14, 1);
lean_closure_set(v___f_6583_, 0, v_name_6541_);
v___x_6584_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6585_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_6586_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6587_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6543_, v_options_6539_, v___x_6586_);
if (v___x_6587_ == 0)
{
lean_object* v___x_6656_; uint8_t v___x_6657_; 
v___x_6656_ = l_Lean_trace_profiler;
v___x_6657_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_options_6539_, v___x_6656_);
if (v___x_6657_ == 0)
{
lean_object* v___x_6658_; 
lean_dec_ref(v___f_6583_);
lean_inc_ref(v_run_x27_6542_);
lean_inc(v___y_6534_);
lean_inc_ref(v___y_6533_);
lean_inc(v___y_6532_);
lean_inc_ref(v___y_6531_);
lean_inc(v___y_6530_);
lean_inc_ref(v___y_6529_);
lean_inc(v___y_6528_);
lean_inc_ref(v___y_6527_);
lean_inc(v___y_6526_);
lean_inc(v___y_6525_);
lean_inc_ref(v___y_6524_);
v___x_6658_ = lean_apply_12(v_run_x27_6542_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_, lean_box(0));
v___y_6554_ = v___x_6658_;
goto v___jp_6553_;
}
else
{
goto v___jp_6615_;
}
}
else
{
goto v___jp_6615_;
}
v___jp_6588_:
{
lean_object* v___x_6592_; double v___x_6593_; double v___x_6594_; double v___x_6595_; double v___x_6596_; double v___x_6597_; lean_object* v___x_6598_; lean_object* v___x_6599_; lean_object* v___x_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; 
v___x_6592_ = lean_io_mono_nanos_now();
v___x_6593_ = lean_float_of_nat(v___y_6589_);
v___x_6594_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13);
v___x_6595_ = lean_float_div(v___x_6593_, v___x_6594_);
v___x_6596_ = lean_float_of_nat(v___x_6592_);
v___x_6597_ = lean_float_div(v___x_6596_, v___x_6594_);
v___x_6598_ = lean_box_float(v___x_6595_);
v___x_6599_ = lean_box_float(v___x_6597_);
v___x_6600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6600_, 0, v___x_6598_);
lean_ctor_set(v___x_6600_, 1, v___x_6599_);
v___x_6601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6601_, 0, v_a_6591_);
lean_ctor_set(v___x_6601_, 1, v___x_6600_);
v___x_6602_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v___x_6584_, v_hasTrace_6544_, v___x_6585_, v_options_6539_, v___x_6587_, v___y_6590_, v___f_6583_, v___x_6601_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_);
v___y_6554_ = v___x_6602_;
goto v___jp_6553_;
}
v___jp_6603_:
{
lean_object* v___x_6607_; double v___x_6608_; double v___x_6609_; lean_object* v___x_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; lean_object* v___x_6613_; lean_object* v___x_6614_; 
v___x_6607_ = lean_io_get_num_heartbeats();
v___x_6608_ = lean_float_of_nat(v___y_6605_);
v___x_6609_ = lean_float_of_nat(v___x_6607_);
v___x_6610_ = lean_box_float(v___x_6608_);
v___x_6611_ = lean_box_float(v___x_6609_);
v___x_6612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6612_, 0, v___x_6610_);
lean_ctor_set(v___x_6612_, 1, v___x_6611_);
v___x_6613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6613_, 0, v_a_6606_);
lean_ctor_set(v___x_6613_, 1, v___x_6612_);
v___x_6614_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v___x_6584_, v_hasTrace_6544_, v___x_6585_, v_options_6539_, v___x_6587_, v___y_6604_, v___f_6583_, v___x_6613_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_);
v___y_6554_ = v___x_6614_;
goto v___jp_6553_;
}
v___jp_6615_:
{
lean_object* v___x_6616_; lean_object* v_a_6617_; lean_object* v___x_6618_; uint8_t v___x_6619_; 
v___x_6616_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6534_);
v_a_6617_ = lean_ctor_get(v___x_6616_, 0);
lean_inc(v_a_6617_);
lean_dec_ref(v___x_6616_);
v___x_6618_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6619_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_options_6539_, v___x_6618_);
if (v___x_6619_ == 0)
{
lean_object* v___x_6620_; lean_object* v___x_6621_; 
v___x_6620_ = lean_io_mono_nanos_now();
lean_inc_ref(v_run_x27_6542_);
lean_inc(v___y_6534_);
lean_inc_ref(v___y_6533_);
lean_inc(v___y_6532_);
lean_inc_ref(v___y_6531_);
lean_inc(v___y_6530_);
lean_inc_ref(v___y_6529_);
lean_inc(v___y_6528_);
lean_inc_ref(v___y_6527_);
lean_inc(v___y_6526_);
lean_inc(v___y_6525_);
lean_inc_ref(v___y_6524_);
v___x_6621_ = lean_apply_12(v_run_x27_6542_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_, lean_box(0));
if (lean_obj_tag(v___x_6621_) == 0)
{
lean_object* v_a_6622_; lean_object* v___x_6624_; uint8_t v_isShared_6625_; uint8_t v_isSharedCheck_6629_; 
v_a_6622_ = lean_ctor_get(v___x_6621_, 0);
v_isSharedCheck_6629_ = !lean_is_exclusive(v___x_6621_);
if (v_isSharedCheck_6629_ == 0)
{
v___x_6624_ = v___x_6621_;
v_isShared_6625_ = v_isSharedCheck_6629_;
goto v_resetjp_6623_;
}
else
{
lean_inc(v_a_6622_);
lean_dec(v___x_6621_);
v___x_6624_ = lean_box(0);
v_isShared_6625_ = v_isSharedCheck_6629_;
goto v_resetjp_6623_;
}
v_resetjp_6623_:
{
lean_object* v___x_6627_; 
if (v_isShared_6625_ == 0)
{
lean_ctor_set_tag(v___x_6624_, 1);
v___x_6627_ = v___x_6624_;
goto v_reusejp_6626_;
}
else
{
lean_object* v_reuseFailAlloc_6628_; 
v_reuseFailAlloc_6628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6628_, 0, v_a_6622_);
v___x_6627_ = v_reuseFailAlloc_6628_;
goto v_reusejp_6626_;
}
v_reusejp_6626_:
{
v___y_6589_ = v___x_6620_;
v___y_6590_ = v_a_6617_;
v_a_6591_ = v___x_6627_;
goto v___jp_6588_;
}
}
}
else
{
lean_object* v_a_6630_; lean_object* v___x_6632_; uint8_t v_isShared_6633_; uint8_t v_isSharedCheck_6637_; 
v_a_6630_ = lean_ctor_get(v___x_6621_, 0);
v_isSharedCheck_6637_ = !lean_is_exclusive(v___x_6621_);
if (v_isSharedCheck_6637_ == 0)
{
v___x_6632_ = v___x_6621_;
v_isShared_6633_ = v_isSharedCheck_6637_;
goto v_resetjp_6631_;
}
else
{
lean_inc(v_a_6630_);
lean_dec(v___x_6621_);
v___x_6632_ = lean_box(0);
v_isShared_6633_ = v_isSharedCheck_6637_;
goto v_resetjp_6631_;
}
v_resetjp_6631_:
{
lean_object* v___x_6635_; 
if (v_isShared_6633_ == 0)
{
lean_ctor_set_tag(v___x_6632_, 0);
v___x_6635_ = v___x_6632_;
goto v_reusejp_6634_;
}
else
{
lean_object* v_reuseFailAlloc_6636_; 
v_reuseFailAlloc_6636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6636_, 0, v_a_6630_);
v___x_6635_ = v_reuseFailAlloc_6636_;
goto v_reusejp_6634_;
}
v_reusejp_6634_:
{
v___y_6589_ = v___x_6620_;
v___y_6590_ = v_a_6617_;
v_a_6591_ = v___x_6635_;
goto v___jp_6588_;
}
}
}
}
else
{
lean_object* v___x_6638_; lean_object* v___x_6639_; 
v___x_6638_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_run_x27_6542_);
lean_inc(v___y_6534_);
lean_inc_ref(v___y_6533_);
lean_inc(v___y_6532_);
lean_inc_ref(v___y_6531_);
lean_inc(v___y_6530_);
lean_inc_ref(v___y_6529_);
lean_inc(v___y_6528_);
lean_inc_ref(v___y_6527_);
lean_inc(v___y_6526_);
lean_inc(v___y_6525_);
lean_inc_ref(v___y_6524_);
v___x_6639_ = lean_apply_12(v_run_x27_6542_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_, lean_box(0));
if (lean_obj_tag(v___x_6639_) == 0)
{
lean_object* v_a_6640_; lean_object* v___x_6642_; uint8_t v_isShared_6643_; uint8_t v_isSharedCheck_6647_; 
v_a_6640_ = lean_ctor_get(v___x_6639_, 0);
v_isSharedCheck_6647_ = !lean_is_exclusive(v___x_6639_);
if (v_isSharedCheck_6647_ == 0)
{
v___x_6642_ = v___x_6639_;
v_isShared_6643_ = v_isSharedCheck_6647_;
goto v_resetjp_6641_;
}
else
{
lean_inc(v_a_6640_);
lean_dec(v___x_6639_);
v___x_6642_ = lean_box(0);
v_isShared_6643_ = v_isSharedCheck_6647_;
goto v_resetjp_6641_;
}
v_resetjp_6641_:
{
lean_object* v___x_6645_; 
if (v_isShared_6643_ == 0)
{
lean_ctor_set_tag(v___x_6642_, 1);
v___x_6645_ = v___x_6642_;
goto v_reusejp_6644_;
}
else
{
lean_object* v_reuseFailAlloc_6646_; 
v_reuseFailAlloc_6646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6646_, 0, v_a_6640_);
v___x_6645_ = v_reuseFailAlloc_6646_;
goto v_reusejp_6644_;
}
v_reusejp_6644_:
{
v___y_6604_ = v_a_6617_;
v___y_6605_ = v___x_6638_;
v_a_6606_ = v___x_6645_;
goto v___jp_6603_;
}
}
}
else
{
lean_object* v_a_6648_; lean_object* v___x_6650_; uint8_t v_isShared_6651_; uint8_t v_isSharedCheck_6655_; 
v_a_6648_ = lean_ctor_get(v___x_6639_, 0);
v_isSharedCheck_6655_ = !lean_is_exclusive(v___x_6639_);
if (v_isSharedCheck_6655_ == 0)
{
v___x_6650_ = v___x_6639_;
v_isShared_6651_ = v_isSharedCheck_6655_;
goto v_resetjp_6649_;
}
else
{
lean_inc(v_a_6648_);
lean_dec(v___x_6639_);
v___x_6650_ = lean_box(0);
v_isShared_6651_ = v_isSharedCheck_6655_;
goto v_resetjp_6649_;
}
v_resetjp_6649_:
{
lean_object* v___x_6653_; 
if (v_isShared_6651_ == 0)
{
lean_ctor_set_tag(v___x_6650_, 0);
v___x_6653_ = v___x_6650_;
goto v_reusejp_6652_;
}
else
{
lean_object* v_reuseFailAlloc_6654_; 
v_reuseFailAlloc_6654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6654_, 0, v_a_6648_);
v___x_6653_ = v_reuseFailAlloc_6654_;
goto v_reusejp_6652_;
}
v_reusejp_6652_:
{
v___y_6604_ = v_a_6617_;
v___y_6605_ = v___x_6638_;
v_a_6606_ = v___x_6653_;
goto v___jp_6603_;
}
}
}
}
}
}
v___jp_6546_:
{
lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; 
v___x_6548_ = lean_box(v___y_6547_);
v___x_6549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6549_, 0, v___x_6548_);
v___x_6550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6550_, 0, v___x_6549_);
lean_ctor_set(v___x_6550_, 1, v___x_6545_);
v___x_6551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6551_, 0, v___x_6550_);
return v___x_6551_;
}
v___jp_6553_:
{
if (lean_obj_tag(v___y_6554_) == 0)
{
lean_object* v_a_6555_; uint8_t v___x_6556_; 
v_a_6555_ = lean_ctor_get(v___y_6554_, 0);
lean_inc(v_a_6555_);
lean_dec_ref_known(v___y_6554_, 1);
v___x_6556_ = lean_unbox(v_a_6555_);
if (v___x_6556_ == 0)
{
lean_dec(v_a_6555_);
v_as_x27_6522_ = v_tail_6540_;
v_b_6523_ = v___x_6552_;
goto _start;
}
else
{
if (v_hasTrace_6544_ == 0)
{
uint8_t v___x_6558_; 
v___x_6558_ = lean_unbox(v_a_6555_);
lean_dec(v_a_6555_);
v___y_6547_ = v___x_6558_;
goto v___jp_6546_;
}
else
{
lean_object* v___x_6559_; lean_object* v___x_6560_; uint8_t v___x_6561_; 
v___x_6559_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6560_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6561_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6543_, v_options_6539_, v___x_6560_);
if (v___x_6561_ == 0)
{
uint8_t v___x_6562_; 
v___x_6562_ = lean_unbox(v_a_6555_);
lean_dec(v_a_6555_);
v___y_6547_ = v___x_6562_;
goto v___jp_6546_;
}
else
{
lean_object* v___x_6563_; lean_object* v___x_6564_; 
v___x_6563_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2);
v___x_6564_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6559_, v___x_6563_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_);
if (lean_obj_tag(v___x_6564_) == 0)
{
uint8_t v___x_6565_; 
lean_dec_ref_known(v___x_6564_, 1);
v___x_6565_ = lean_unbox(v_a_6555_);
lean_dec(v_a_6555_);
v___y_6547_ = v___x_6565_;
goto v___jp_6546_;
}
else
{
lean_object* v_a_6566_; lean_object* v___x_6568_; uint8_t v_isShared_6569_; uint8_t v_isSharedCheck_6573_; 
lean_dec(v_a_6555_);
v_a_6566_ = lean_ctor_get(v___x_6564_, 0);
v_isSharedCheck_6573_ = !lean_is_exclusive(v___x_6564_);
if (v_isSharedCheck_6573_ == 0)
{
v___x_6568_ = v___x_6564_;
v_isShared_6569_ = v_isSharedCheck_6573_;
goto v_resetjp_6567_;
}
else
{
lean_inc(v_a_6566_);
lean_dec(v___x_6564_);
v___x_6568_ = lean_box(0);
v_isShared_6569_ = v_isSharedCheck_6573_;
goto v_resetjp_6567_;
}
v_resetjp_6567_:
{
lean_object* v___x_6571_; 
if (v_isShared_6569_ == 0)
{
v___x_6571_ = v___x_6568_;
goto v_reusejp_6570_;
}
else
{
lean_object* v_reuseFailAlloc_6572_; 
v_reuseFailAlloc_6572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6572_, 0, v_a_6566_);
v___x_6571_ = v_reuseFailAlloc_6572_;
goto v_reusejp_6570_;
}
v_reusejp_6570_:
{
return v___x_6571_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6574_; lean_object* v___x_6576_; uint8_t v_isShared_6577_; uint8_t v_isSharedCheck_6581_; 
v_a_6574_ = lean_ctor_get(v___y_6554_, 0);
v_isSharedCheck_6581_ = !lean_is_exclusive(v___y_6554_);
if (v_isSharedCheck_6581_ == 0)
{
v___x_6576_ = v___y_6554_;
v_isShared_6577_ = v_isSharedCheck_6581_;
goto v_resetjp_6575_;
}
else
{
lean_inc(v_a_6574_);
lean_dec(v___y_6554_);
v___x_6576_ = lean_box(0);
v_isShared_6577_ = v_isSharedCheck_6581_;
goto v_resetjp_6575_;
}
v_resetjp_6575_:
{
lean_object* v___x_6579_; 
if (v_isShared_6577_ == 0)
{
v___x_6579_ = v___x_6576_;
goto v_reusejp_6578_;
}
else
{
lean_object* v_reuseFailAlloc_6580_; 
v_reuseFailAlloc_6580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6580_, 0, v_a_6574_);
v___x_6579_ = v_reuseFailAlloc_6580_;
goto v_reusejp_6578_;
}
v_reusejp_6578_:
{
return v___x_6579_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___boxed(lean_object* v_as_x27_6659_, lean_object* v_b_6660_, lean_object* v___y_6661_, lean_object* v___y_6662_, lean_object* v___y_6663_, lean_object* v___y_6664_, lean_object* v___y_6665_, lean_object* v___y_6666_, lean_object* v___y_6667_, lean_object* v___y_6668_, lean_object* v___y_6669_, lean_object* v___y_6670_, lean_object* v___y_6671_, lean_object* v___y_6672_){
_start:
{
lean_object* v_res_6673_; 
v_res_6673_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_as_x27_6659_, v_b_6660_, v___y_6661_, v___y_6662_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_, v___y_6667_, v___y_6668_, v___y_6669_, v___y_6670_, v___y_6671_);
lean_dec(v___y_6671_);
lean_dec_ref(v___y_6670_);
lean_dec(v___y_6669_);
lean_dec_ref(v___y_6668_);
lean_dec(v___y_6667_);
lean_dec_ref(v___y_6666_);
lean_dec(v___y_6665_);
lean_dec_ref(v___y_6664_);
lean_dec(v___y_6663_);
lean_dec(v___y_6662_);
lean_dec_ref(v___y_6661_);
lean_dec(v_as_x27_6659_);
return v_res_6673_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2(void){
_start:
{
lean_object* v___x_6676_; lean_object* v___x_6677_; 
v___x_6676_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1));
v___x_6677_ = l_Lean_stringToMessageData(v___x_6676_);
return v___x_6677_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4(void){
_start:
{
lean_object* v___x_6679_; lean_object* v___x_6680_; 
v___x_6679_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3));
v___x_6680_ = l_Lean_stringToMessageData(v___x_6679_);
return v___x_6680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(lean_object* v_passes_6681_, lean_object* v_a_6682_, lean_object* v_a_6683_, lean_object* v_a_6684_, lean_object* v_a_6685_, lean_object* v_a_6686_, lean_object* v_a_6687_, lean_object* v_a_6688_, lean_object* v_a_6689_, lean_object* v_a_6690_, lean_object* v_a_6691_, lean_object* v_a_6692_){
_start:
{
lean_object* v___x_6694_; lean_object* v___x_6695_; 
v___x_6694_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0));
v___x_6695_ = l_Lean_Core_checkSystem(v___x_6694_, v_a_6691_, v_a_6692_);
if (lean_obj_tag(v___x_6695_) == 0)
{
lean_object* v___x_6696_; lean_object* v_caches_6697_; lean_object* v_typeAnalysis_6698_; lean_object* v_target_6699_; lean_object* v_hypotheses_6700_; lean_object* v___x_6702_; uint8_t v_isShared_6703_; uint8_t v_isSharedCheck_6785_; 
lean_dec_ref_known(v___x_6695_, 1);
v___x_6696_ = lean_st_ref_take(v_a_6683_);
v_caches_6697_ = lean_ctor_get(v___x_6696_, 0);
v_typeAnalysis_6698_ = lean_ctor_get(v___x_6696_, 1);
v_target_6699_ = lean_ctor_get(v___x_6696_, 2);
v_hypotheses_6700_ = lean_ctor_get(v___x_6696_, 3);
v_isSharedCheck_6785_ = !lean_is_exclusive(v___x_6696_);
if (v_isSharedCheck_6785_ == 0)
{
v___x_6702_ = v___x_6696_;
v_isShared_6703_ = v_isSharedCheck_6785_;
goto v_resetjp_6701_;
}
else
{
lean_inc(v_hypotheses_6700_);
lean_inc(v_target_6699_);
lean_inc(v_typeAnalysis_6698_);
lean_inc(v_caches_6697_);
lean_dec(v___x_6696_);
v___x_6702_ = lean_box(0);
v_isShared_6703_ = v_isSharedCheck_6785_;
goto v_resetjp_6701_;
}
v_resetjp_6701_:
{
uint8_t v___x_6704_; lean_object* v___x_6706_; 
v___x_6704_ = 0;
if (v_isShared_6703_ == 0)
{
v___x_6706_ = v___x_6702_;
goto v_reusejp_6705_;
}
else
{
lean_object* v_reuseFailAlloc_6784_; 
v_reuseFailAlloc_6784_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_6784_, 0, v_caches_6697_);
lean_ctor_set(v_reuseFailAlloc_6784_, 1, v_typeAnalysis_6698_);
lean_ctor_set(v_reuseFailAlloc_6784_, 2, v_target_6699_);
lean_ctor_set(v_reuseFailAlloc_6784_, 3, v_hypotheses_6700_);
v___x_6706_ = v_reuseFailAlloc_6784_;
goto v_reusejp_6705_;
}
v_reusejp_6705_:
{
lean_object* v___x_6707_; lean_object* v___x_6708_; lean_object* v___x_6709_; 
lean_ctor_set_uint8(v___x_6706_, sizeof(void*)*4, v___x_6704_);
v___x_6707_ = lean_st_ref_put(v_a_6683_, v___x_6706_);
v___x_6708_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0));
v___x_6709_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_passes_6681_, v___x_6708_, v_a_6682_, v_a_6683_, v_a_6684_, v_a_6685_, v_a_6686_, v_a_6687_, v_a_6688_, v_a_6689_, v_a_6690_, v_a_6691_, v_a_6692_);
if (lean_obj_tag(v___x_6709_) == 0)
{
lean_object* v_a_6710_; lean_object* v___x_6712_; uint8_t v_isShared_6713_; uint8_t v_isSharedCheck_6775_; 
v_a_6710_ = lean_ctor_get(v___x_6709_, 0);
v_isSharedCheck_6775_ = !lean_is_exclusive(v___x_6709_);
if (v_isSharedCheck_6775_ == 0)
{
v___x_6712_ = v___x_6709_;
v_isShared_6713_ = v_isSharedCheck_6775_;
goto v_resetjp_6711_;
}
else
{
lean_inc(v_a_6710_);
lean_dec(v___x_6709_);
v___x_6712_ = lean_box(0);
v_isShared_6713_ = v_isSharedCheck_6775_;
goto v_resetjp_6711_;
}
v_resetjp_6711_:
{
lean_object* v_fst_6714_; 
v_fst_6714_ = lean_ctor_get(v_a_6710_, 0);
lean_inc(v_fst_6714_);
lean_dec(v_a_6710_);
if (lean_obj_tag(v_fst_6714_) == 0)
{
lean_object* v___x_6715_; uint8_t v_didChange_6716_; 
v___x_6715_ = lean_st_ref_get(v_a_6683_);
v_didChange_6716_ = lean_ctor_get_uint8(v___x_6715_, sizeof(void*)*4);
lean_dec(v___x_6715_);
if (v_didChange_6716_ == 0)
{
lean_object* v_toCold_6717_; lean_object* v_options_6718_; uint8_t v_hasTrace_6719_; 
v_toCold_6717_ = lean_ctor_get(v_a_6691_, 0);
v_options_6718_ = lean_ctor_get(v_toCold_6717_, 2);
v_hasTrace_6719_ = lean_ctor_get_uint8(v_options_6718_, sizeof(void*)*1);
if (v_hasTrace_6719_ == 0)
{
lean_object* v___x_6720_; lean_object* v___x_6722_; 
v___x_6720_ = lean_box(v_didChange_6716_);
if (v_isShared_6713_ == 0)
{
lean_ctor_set(v___x_6712_, 0, v___x_6720_);
v___x_6722_ = v___x_6712_;
goto v_reusejp_6721_;
}
else
{
lean_object* v_reuseFailAlloc_6723_; 
v_reuseFailAlloc_6723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6723_, 0, v___x_6720_);
v___x_6722_ = v_reuseFailAlloc_6723_;
goto v_reusejp_6721_;
}
v_reusejp_6721_:
{
return v___x_6722_;
}
}
else
{
lean_object* v_inheritedTraceOptions_6724_; lean_object* v___x_6725_; lean_object* v___x_6726_; uint8_t v___x_6727_; 
v_inheritedTraceOptions_6724_ = lean_ctor_get(v_toCold_6717_, 11);
v___x_6725_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6726_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6727_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6724_, v_options_6718_, v___x_6726_);
if (v___x_6727_ == 0)
{
lean_object* v___x_6728_; lean_object* v___x_6730_; 
v___x_6728_ = lean_box(v_didChange_6716_);
if (v_isShared_6713_ == 0)
{
lean_ctor_set(v___x_6712_, 0, v___x_6728_);
v___x_6730_ = v___x_6712_;
goto v_reusejp_6729_;
}
else
{
lean_object* v_reuseFailAlloc_6731_; 
v_reuseFailAlloc_6731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6731_, 0, v___x_6728_);
v___x_6730_ = v_reuseFailAlloc_6731_;
goto v_reusejp_6729_;
}
v_reusejp_6729_:
{
return v___x_6730_;
}
}
else
{
lean_object* v___x_6732_; lean_object* v___x_6733_; 
lean_del_object(v___x_6712_);
v___x_6732_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2);
v___x_6733_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6725_, v___x_6732_, v_a_6689_, v_a_6690_, v_a_6691_, v_a_6692_);
if (lean_obj_tag(v___x_6733_) == 0)
{
lean_object* v___x_6735_; uint8_t v_isShared_6736_; uint8_t v_isSharedCheck_6741_; 
v_isSharedCheck_6741_ = !lean_is_exclusive(v___x_6733_);
if (v_isSharedCheck_6741_ == 0)
{
lean_object* v_unused_6742_; 
v_unused_6742_ = lean_ctor_get(v___x_6733_, 0);
lean_dec(v_unused_6742_);
v___x_6735_ = v___x_6733_;
v_isShared_6736_ = v_isSharedCheck_6741_;
goto v_resetjp_6734_;
}
else
{
lean_dec(v___x_6733_);
v___x_6735_ = lean_box(0);
v_isShared_6736_ = v_isSharedCheck_6741_;
goto v_resetjp_6734_;
}
v_resetjp_6734_:
{
lean_object* v___x_6737_; lean_object* v___x_6739_; 
v___x_6737_ = lean_box(v_didChange_6716_);
if (v_isShared_6736_ == 0)
{
lean_ctor_set(v___x_6735_, 0, v___x_6737_);
v___x_6739_ = v___x_6735_;
goto v_reusejp_6738_;
}
else
{
lean_object* v_reuseFailAlloc_6740_; 
v_reuseFailAlloc_6740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6740_, 0, v___x_6737_);
v___x_6739_ = v_reuseFailAlloc_6740_;
goto v_reusejp_6738_;
}
v_reusejp_6738_:
{
return v___x_6739_;
}
}
}
else
{
lean_object* v_a_6743_; lean_object* v___x_6745_; uint8_t v_isShared_6746_; uint8_t v_isSharedCheck_6750_; 
v_a_6743_ = lean_ctor_get(v___x_6733_, 0);
v_isSharedCheck_6750_ = !lean_is_exclusive(v___x_6733_);
if (v_isSharedCheck_6750_ == 0)
{
v___x_6745_ = v___x_6733_;
v_isShared_6746_ = v_isSharedCheck_6750_;
goto v_resetjp_6744_;
}
else
{
lean_inc(v_a_6743_);
lean_dec(v___x_6733_);
v___x_6745_ = lean_box(0);
v_isShared_6746_ = v_isSharedCheck_6750_;
goto v_resetjp_6744_;
}
v_resetjp_6744_:
{
lean_object* v___x_6748_; 
if (v_isShared_6746_ == 0)
{
v___x_6748_ = v___x_6745_;
goto v_reusejp_6747_;
}
else
{
lean_object* v_reuseFailAlloc_6749_; 
v_reuseFailAlloc_6749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6749_, 0, v_a_6743_);
v___x_6748_ = v_reuseFailAlloc_6749_;
goto v_reusejp_6747_;
}
v_reusejp_6747_:
{
return v___x_6748_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_6751_; lean_object* v_options_6752_; uint8_t v_hasTrace_6753_; 
lean_del_object(v___x_6712_);
v_toCold_6751_ = lean_ctor_get(v_a_6691_, 0);
v_options_6752_ = lean_ctor_get(v_toCold_6751_, 2);
v_hasTrace_6753_ = lean_ctor_get_uint8(v_options_6752_, sizeof(void*)*1);
if (v_hasTrace_6753_ == 0)
{
goto _start;
}
else
{
lean_object* v_inheritedTraceOptions_6755_; lean_object* v___x_6756_; lean_object* v___x_6757_; uint8_t v___x_6758_; 
v_inheritedTraceOptions_6755_ = lean_ctor_get(v_toCold_6751_, 11);
v___x_6756_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6757_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6758_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6755_, v_options_6752_, v___x_6757_);
if (v___x_6758_ == 0)
{
goto _start;
}
else
{
lean_object* v___x_6760_; lean_object* v___x_6761_; 
v___x_6760_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4);
v___x_6761_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6756_, v___x_6760_, v_a_6689_, v_a_6690_, v_a_6691_, v_a_6692_);
if (lean_obj_tag(v___x_6761_) == 0)
{
lean_dec_ref_known(v___x_6761_, 1);
goto _start;
}
else
{
lean_object* v_a_6763_; lean_object* v___x_6765_; uint8_t v_isShared_6766_; uint8_t v_isSharedCheck_6770_; 
v_a_6763_ = lean_ctor_get(v___x_6761_, 0);
v_isSharedCheck_6770_ = !lean_is_exclusive(v___x_6761_);
if (v_isSharedCheck_6770_ == 0)
{
v___x_6765_ = v___x_6761_;
v_isShared_6766_ = v_isSharedCheck_6770_;
goto v_resetjp_6764_;
}
else
{
lean_inc(v_a_6763_);
lean_dec(v___x_6761_);
v___x_6765_ = lean_box(0);
v_isShared_6766_ = v_isSharedCheck_6770_;
goto v_resetjp_6764_;
}
v_resetjp_6764_:
{
lean_object* v___x_6768_; 
if (v_isShared_6766_ == 0)
{
v___x_6768_ = v___x_6765_;
goto v_reusejp_6767_;
}
else
{
lean_object* v_reuseFailAlloc_6769_; 
v_reuseFailAlloc_6769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6769_, 0, v_a_6763_);
v___x_6768_ = v_reuseFailAlloc_6769_;
goto v_reusejp_6767_;
}
v_reusejp_6767_:
{
return v___x_6768_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_6771_; lean_object* v___x_6773_; 
v_val_6771_ = lean_ctor_get(v_fst_6714_, 0);
lean_inc(v_val_6771_);
lean_dec_ref_known(v_fst_6714_, 1);
if (v_isShared_6713_ == 0)
{
lean_ctor_set(v___x_6712_, 0, v_val_6771_);
v___x_6773_ = v___x_6712_;
goto v_reusejp_6772_;
}
else
{
lean_object* v_reuseFailAlloc_6774_; 
v_reuseFailAlloc_6774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6774_, 0, v_val_6771_);
v___x_6773_ = v_reuseFailAlloc_6774_;
goto v_reusejp_6772_;
}
v_reusejp_6772_:
{
return v___x_6773_;
}
}
}
}
else
{
lean_object* v_a_6776_; lean_object* v___x_6778_; uint8_t v_isShared_6779_; uint8_t v_isSharedCheck_6783_; 
v_a_6776_ = lean_ctor_get(v___x_6709_, 0);
v_isSharedCheck_6783_ = !lean_is_exclusive(v___x_6709_);
if (v_isSharedCheck_6783_ == 0)
{
v___x_6778_ = v___x_6709_;
v_isShared_6779_ = v_isSharedCheck_6783_;
goto v_resetjp_6777_;
}
else
{
lean_inc(v_a_6776_);
lean_dec(v___x_6709_);
v___x_6778_ = lean_box(0);
v_isShared_6779_ = v_isSharedCheck_6783_;
goto v_resetjp_6777_;
}
v_resetjp_6777_:
{
lean_object* v___x_6781_; 
if (v_isShared_6779_ == 0)
{
v___x_6781_ = v___x_6778_;
goto v_reusejp_6780_;
}
else
{
lean_object* v_reuseFailAlloc_6782_; 
v_reuseFailAlloc_6782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6782_, 0, v_a_6776_);
v___x_6781_ = v_reuseFailAlloc_6782_;
goto v_reusejp_6780_;
}
v_reusejp_6780_:
{
return v___x_6781_;
}
}
}
}
}
}
else
{
lean_object* v_a_6786_; lean_object* v___x_6788_; uint8_t v_isShared_6789_; uint8_t v_isSharedCheck_6793_; 
v_a_6786_ = lean_ctor_get(v___x_6695_, 0);
v_isSharedCheck_6793_ = !lean_is_exclusive(v___x_6695_);
if (v_isSharedCheck_6793_ == 0)
{
v___x_6788_ = v___x_6695_;
v_isShared_6789_ = v_isSharedCheck_6793_;
goto v_resetjp_6787_;
}
else
{
lean_inc(v_a_6786_);
lean_dec(v___x_6695_);
v___x_6788_ = lean_box(0);
v_isShared_6789_ = v_isSharedCheck_6793_;
goto v_resetjp_6787_;
}
v_resetjp_6787_:
{
lean_object* v___x_6791_; 
if (v_isShared_6789_ == 0)
{
v___x_6791_ = v___x_6788_;
goto v_reusejp_6790_;
}
else
{
lean_object* v_reuseFailAlloc_6792_; 
v_reuseFailAlloc_6792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6792_, 0, v_a_6786_);
v___x_6791_ = v_reuseFailAlloc_6792_;
goto v_reusejp_6790_;
}
v_reusejp_6790_:
{
return v___x_6791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___boxed(lean_object* v_passes_6794_, lean_object* v_a_6795_, lean_object* v_a_6796_, lean_object* v_a_6797_, lean_object* v_a_6798_, lean_object* v_a_6799_, lean_object* v_a_6800_, lean_object* v_a_6801_, lean_object* v_a_6802_, lean_object* v_a_6803_, lean_object* v_a_6804_, lean_object* v_a_6805_, lean_object* v_a_6806_){
_start:
{
lean_object* v_res_6807_; 
v_res_6807_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(v_passes_6794_, v_a_6795_, v_a_6796_, v_a_6797_, v_a_6798_, v_a_6799_, v_a_6800_, v_a_6801_, v_a_6802_, v_a_6803_, v_a_6804_, v_a_6805_);
lean_dec(v_a_6805_);
lean_dec_ref(v_a_6804_);
lean_dec(v_a_6803_);
lean_dec_ref(v_a_6802_);
lean_dec(v_a_6801_);
lean_dec_ref(v_a_6800_);
lean_dec(v_a_6799_);
lean_dec_ref(v_a_6798_);
lean_dec(v_a_6797_);
lean_dec(v_a_6796_);
lean_dec_ref(v_a_6795_);
lean_dec(v_passes_6794_);
return v_res_6807_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(lean_object* v_cls_6808_, lean_object* v_msg_6809_, lean_object* v___y_6810_, lean_object* v___y_6811_, lean_object* v___y_6812_, lean_object* v___y_6813_, lean_object* v___y_6814_, lean_object* v___y_6815_, lean_object* v___y_6816_, lean_object* v___y_6817_, lean_object* v___y_6818_, lean_object* v___y_6819_, lean_object* v___y_6820_){
_start:
{
lean_object* v___x_6822_; 
v___x_6822_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v_cls_6808_, v_msg_6809_, v___y_6817_, v___y_6818_, v___y_6819_, v___y_6820_);
return v___x_6822_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___boxed(lean_object* v_cls_6823_, lean_object* v_msg_6824_, lean_object* v___y_6825_, lean_object* v___y_6826_, lean_object* v___y_6827_, lean_object* v___y_6828_, lean_object* v___y_6829_, lean_object* v___y_6830_, lean_object* v___y_6831_, lean_object* v___y_6832_, lean_object* v___y_6833_, lean_object* v___y_6834_, lean_object* v___y_6835_, lean_object* v___y_6836_){
_start:
{
lean_object* v_res_6837_; 
v_res_6837_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(v_cls_6823_, v_msg_6824_, v___y_6825_, v___y_6826_, v___y_6827_, v___y_6828_, v___y_6829_, v___y_6830_, v___y_6831_, v___y_6832_, v___y_6833_, v___y_6834_, v___y_6835_);
lean_dec(v___y_6835_);
lean_dec_ref(v___y_6834_);
lean_dec(v___y_6833_);
lean_dec_ref(v___y_6832_);
lean_dec(v___y_6831_);
lean_dec_ref(v___y_6830_);
lean_dec(v___y_6829_);
lean_dec_ref(v___y_6828_);
lean_dec(v___y_6827_);
lean_dec(v___y_6826_);
lean_dec_ref(v___y_6825_);
return v_res_6837_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(lean_object* v_00_u03b1_6838_, lean_object* v_x_6839_, lean_object* v___y_6840_, lean_object* v___y_6841_, lean_object* v___y_6842_, lean_object* v___y_6843_, lean_object* v___y_6844_, lean_object* v___y_6845_, lean_object* v___y_6846_, lean_object* v___y_6847_, lean_object* v___y_6848_, lean_object* v___y_6849_, lean_object* v___y_6850_){
_start:
{
lean_object* v___x_6852_; 
v___x_6852_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_x_6839_);
return v___x_6852_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___boxed(lean_object* v_00_u03b1_6853_, lean_object* v_x_6854_, lean_object* v___y_6855_, lean_object* v___y_6856_, lean_object* v___y_6857_, lean_object* v___y_6858_, lean_object* v___y_6859_, lean_object* v___y_6860_, lean_object* v___y_6861_, lean_object* v___y_6862_, lean_object* v___y_6863_, lean_object* v___y_6864_, lean_object* v___y_6865_, lean_object* v___y_6866_){
_start:
{
lean_object* v_res_6867_; 
v_res_6867_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(v_00_u03b1_6853_, v_x_6854_, v___y_6855_, v___y_6856_, v___y_6857_, v___y_6858_, v___y_6859_, v___y_6860_, v___y_6861_, v___y_6862_, v___y_6863_, v___y_6864_, v___y_6865_);
lean_dec(v___y_6865_);
lean_dec_ref(v___y_6864_);
lean_dec(v___y_6863_);
lean_dec_ref(v___y_6862_);
lean_dec(v___y_6861_);
lean_dec_ref(v___y_6860_);
lean_dec(v___y_6859_);
lean_dec_ref(v___y_6858_);
lean_dec(v___y_6857_);
lean_dec(v___y_6856_);
lean_dec_ref(v___y_6855_);
return v_res_6867_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(lean_object* v_as_6868_, lean_object* v_as_x27_6869_, lean_object* v_b_6870_, lean_object* v_a_6871_, lean_object* v___y_6872_, lean_object* v___y_6873_, lean_object* v___y_6874_, lean_object* v___y_6875_, lean_object* v___y_6876_, lean_object* v___y_6877_, lean_object* v___y_6878_, lean_object* v___y_6879_, lean_object* v___y_6880_, lean_object* v___y_6881_, lean_object* v___y_6882_){
_start:
{
lean_object* v___x_6884_; 
v___x_6884_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_as_x27_6869_, v_b_6870_, v___y_6872_, v___y_6873_, v___y_6874_, v___y_6875_, v___y_6876_, v___y_6877_, v___y_6878_, v___y_6879_, v___y_6880_, v___y_6881_, v___y_6882_);
return v___x_6884_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___boxed(lean_object* v_as_6885_, lean_object* v_as_x27_6886_, lean_object* v_b_6887_, lean_object* v_a_6888_, lean_object* v___y_6889_, lean_object* v___y_6890_, lean_object* v___y_6891_, lean_object* v___y_6892_, lean_object* v___y_6893_, lean_object* v___y_6894_, lean_object* v___y_6895_, lean_object* v___y_6896_, lean_object* v___y_6897_, lean_object* v___y_6898_, lean_object* v___y_6899_, lean_object* v___y_6900_){
_start:
{
lean_object* v_res_6901_; 
v_res_6901_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(v_as_6885_, v_as_x27_6886_, v_b_6887_, v_a_6888_, v___y_6889_, v___y_6890_, v___y_6891_, v___y_6892_, v___y_6893_, v___y_6894_, v___y_6895_, v___y_6896_, v___y_6897_, v___y_6898_, v___y_6899_);
lean_dec(v___y_6899_);
lean_dec_ref(v___y_6898_);
lean_dec(v___y_6897_);
lean_dec_ref(v___y_6896_);
lean_dec(v___y_6895_);
lean_dec_ref(v___y_6894_);
lean_dec(v___y_6893_);
lean_dec_ref(v___y_6892_);
lean_dec(v___y_6891_);
lean_dec(v___y_6890_);
lean_dec_ref(v___y_6889_);
lean_dec(v_as_x27_6886_);
lean_dec(v_as_6885_);
return v_res_6901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(lean_object* v_oldTraces_6902_, lean_object* v_data_6903_, lean_object* v_ref_6904_, lean_object* v_msg_6905_, lean_object* v___y_6906_, lean_object* v___y_6907_, lean_object* v___y_6908_, lean_object* v___y_6909_, lean_object* v___y_6910_, lean_object* v___y_6911_, lean_object* v___y_6912_, lean_object* v___y_6913_, lean_object* v___y_6914_, lean_object* v___y_6915_, lean_object* v___y_6916_){
_start:
{
lean_object* v___x_6918_; 
v___x_6918_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6902_, v_data_6903_, v_ref_6904_, v_msg_6905_, v___y_6913_, v___y_6914_, v___y_6915_, v___y_6916_);
return v___x_6918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___boxed(lean_object* v_oldTraces_6919_, lean_object* v_data_6920_, lean_object* v_ref_6921_, lean_object* v_msg_6922_, lean_object* v___y_6923_, lean_object* v___y_6924_, lean_object* v___y_6925_, lean_object* v___y_6926_, lean_object* v___y_6927_, lean_object* v___y_6928_, lean_object* v___y_6929_, lean_object* v___y_6930_, lean_object* v___y_6931_, lean_object* v___y_6932_, lean_object* v___y_6933_, lean_object* v___y_6934_){
_start:
{
lean_object* v_res_6935_; 
v_res_6935_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(v_oldTraces_6919_, v_data_6920_, v_ref_6921_, v_msg_6922_, v___y_6923_, v___y_6924_, v___y_6925_, v___y_6926_, v___y_6927_, v___y_6928_, v___y_6929_, v___y_6930_, v___y_6931_, v___y_6932_, v___y_6933_);
lean_dec(v___y_6933_);
lean_dec_ref(v___y_6932_);
lean_dec(v___y_6931_);
lean_dec_ref(v___y_6930_);
lean_dec(v___y_6929_);
lean_dec_ref(v___y_6928_);
lean_dec(v___y_6927_);
lean_dec_ref(v___y_6926_);
lean_dec(v___y_6925_);
lean_dec(v___y_6924_);
lean_dec_ref(v___y_6923_);
return v_res_6935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object* v_passes_6936_, lean_object* v_a_6937_, lean_object* v_a_6938_, lean_object* v_a_6939_, lean_object* v_a_6940_, lean_object* v_a_6941_, lean_object* v_a_6942_, lean_object* v_a_6943_, lean_object* v_a_6944_, lean_object* v_a_6945_, lean_object* v_a_6946_, lean_object* v_a_6947_){
_start:
{
lean_object* v___x_6949_; 
v___x_6949_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(v_passes_6936_, v_a_6937_, v_a_6938_, v_a_6939_, v_a_6940_, v_a_6941_, v_a_6942_, v_a_6943_, v_a_6944_, v_a_6945_, v_a_6946_, v_a_6947_);
if (lean_obj_tag(v___x_6949_) == 0)
{
lean_object* v_a_6950_; lean_object* v___x_6951_; lean_object* v___x_6953_; uint8_t v_isShared_6954_; uint8_t v_isSharedCheck_6958_; 
v_a_6950_ = lean_ctor_get(v___x_6949_, 0);
lean_inc(v_a_6950_);
lean_dec_ref_known(v___x_6949_, 1);
v___x_6951_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v_a_6937_, v_a_6938_);
v_isSharedCheck_6958_ = !lean_is_exclusive(v___x_6951_);
if (v_isSharedCheck_6958_ == 0)
{
lean_object* v_unused_6959_; 
v_unused_6959_ = lean_ctor_get(v___x_6951_, 0);
lean_dec(v_unused_6959_);
v___x_6953_ = v___x_6951_;
v_isShared_6954_ = v_isSharedCheck_6958_;
goto v_resetjp_6952_;
}
else
{
lean_dec(v___x_6951_);
v___x_6953_ = lean_box(0);
v_isShared_6954_ = v_isSharedCheck_6958_;
goto v_resetjp_6952_;
}
v_resetjp_6952_:
{
lean_object* v___x_6956_; 
if (v_isShared_6954_ == 0)
{
lean_ctor_set(v___x_6953_, 0, v_a_6950_);
v___x_6956_ = v___x_6953_;
goto v_reusejp_6955_;
}
else
{
lean_object* v_reuseFailAlloc_6957_; 
v_reuseFailAlloc_6957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6957_, 0, v_a_6950_);
v___x_6956_ = v_reuseFailAlloc_6957_;
goto v_reusejp_6955_;
}
v_reusejp_6955_:
{
return v___x_6956_;
}
}
}
else
{
return v___x_6949_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object* v_passes_6960_, lean_object* v_a_6961_, lean_object* v_a_6962_, lean_object* v_a_6963_, lean_object* v_a_6964_, lean_object* v_a_6965_, lean_object* v_a_6966_, lean_object* v_a_6967_, lean_object* v_a_6968_, lean_object* v_a_6969_, lean_object* v_a_6970_, lean_object* v_a_6971_, lean_object* v_a_6972_){
_start:
{
lean_object* v_res_6973_; 
v_res_6973_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_passes_6960_, v_a_6961_, v_a_6962_, v_a_6963_, v_a_6964_, v_a_6965_, v_a_6966_, v_a_6967_, v_a_6968_, v_a_6969_, v_a_6970_, v_a_6971_);
lean_dec(v_a_6971_);
lean_dec_ref(v_a_6970_);
lean_dec(v_a_6969_);
lean_dec_ref(v_a_6968_);
lean_dec(v_a_6967_);
lean_dec_ref(v_a_6966_);
lean_dec(v_a_6965_);
lean_dec_ref(v_a_6964_);
lean_dec(v_a_6963_);
lean_dec(v_a_6962_);
lean_dec_ref(v_a_6961_);
lean_dec(v_passes_6960_);
return v_res_6973_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_TacticContext(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_TacticContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_TacticContext(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_TacticContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
